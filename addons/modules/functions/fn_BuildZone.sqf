// [16th] Build Zones Module
// Params:
// AllowedClass | List of Classes that should have attached Zones
// Radius | Radius of Attached Zones
// ShowMarkers | Should Zone Markers be Shown

params ["_logic", "_units", "_activated"];

// Module Variables
private _rawClassList = _logic getVariable ["allowedclasses", ""];
private _radius = _logic getVariable ["radius", 50];
private _showMarkers = _logic getVariable ["showmarkers", false];

// Processed Classes
private _allowedClasses = _rawClassList splitString "," apply { toLower (trim _x) };

if (_allowedClasses isEqualTo []) exitWith {
    diag_log "[MET_BuildZone] No valid vehicle classes specified.";
};

// Ensure ace_fortify_locations is defined
if (isNil "ace_fortify_locations") then {
    ace_fortify_locations = [];
};

// Build Zone/Marker Creation
private _addBuildZone = {
    params ["_veh", "_allowedClasses", "_radius", "_showMarkers"];

    if (isNull _veh) exitWith {};

    private _vehClass = toLower typeOf _veh;
    if (!(_vehClass in _allowedClasses)) exitWith {};

    ace_fortify_locations pushBackUnique [_veh, _radius, _radius, 0, false];

    if (_showMarkers) then 
    {
        private _markerName = format ["MET_BuildZone_%1", _veh getVariable ["MET_markerId", str random 1e9]];
        _veh setVariable ["MET_markerId", _markerName];

       private _marker = createMarker [_markerName, getPosASL _veh];
        _marker setMarkerShape "ELLIPSE";
        _marker setMarkerBrush "DiagGrid";
        _marker setMarkerSize [_radius, _radius];
        _marker setMarkerColor "ColorGreen";
        _marker setMarkerAlpha 0.4;

        [_marker, _veh] spawn 
        {
            params ["_marker", "_veh"];
            while { alive _veh } do 
            {
                _marker setMarkerPos getPosASL _veh;
                sleep 1;
            };
            deleteMarker _marker;
        };
    };

    diag_log format ["[MET_BuildZone] Build zone added to %1 (%2)", _veh, _vehClass];
};

// Init Scan
{
    [_x, _allowedClasses, _radius, _showMarkers] call _addBuildZone;
} forEach vehicles;

// Active Loop for New Vics
if (isServer) then 
{
    private _args = [_allowedClasses, _radius, _addBuildZone, _showMarkers];

    _args spawn 
    {
        params ["_allowedClasses", "_radius", "_addBuildZone", "_showMarkers"];
        
        private _seen = [];
        private _sleepTime = 5;
        private _minSleep = 3;
        private _maxSleep = 15;

        private _loopCounter = 0;

        while { true } do 
        {
            private _start = diag_tickTime;

            {
                if (!(_x in _seen)) then {
                    [_x, _allowedClasses, _radius, _showMarkers] call _addBuildZone;
                    _seen pushBack _x;
                };
            } forEach vehicles;

            _seen = _seen select { !isNull _x && alive _x };

            if (_loopCounter % 6 == 0) then {
                ace_fortify_locations = ace_fortify_locations select {
                    !isNull (_x#0) && alive (_x#0)
                };
            };

            _loopCounter = _loopCounter + 1;

            private _duration = diag_tickTime - _start;

            if (_duration > 0.25) then {
                _sleepTime = (_sleepTime + 1) min _maxSleep;
            } else {
                _sleepTime = (_sleepTime - 1) max _minSleep;
            };

            sleep _sleepTime;
        };
    };
};

