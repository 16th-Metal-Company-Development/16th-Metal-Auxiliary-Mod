// File: fn_spawnWave.sqf
params ["_config", "_positions", "_centerPos"];

private _side = _config get "sideToSpawn";
private _aliveUnits = (_config get "aliveUnits") select { alive _x && {!isNull _x} };
_config set ["aliveUnits", _aliveUnits]; // cleanup
private _maxAlive = _config getOrDefault ["maxAliveUnits", -1];

if (_maxAlive > -1 && { count _aliveUnits >= _maxAlive }) exitWith { "waiting" };

private _pendingInf = _config getOrDefault ["pendingInfantryGroups", []];
private _pendingArmor = _config getOrDefault ["pendingArmorUnits", []];
private _pendingAir = _config getOrDefault ["pendingAirUnits", []];

private _spawned = [];

private _nextSpawnPos = {
	private _usedSpawnPositions = _config getOrDefault ["usedSpawnPositions", []];
	private _positionIndex = _config getOrDefault ["positionIndex", 0];

	if (_positions isEqualTo []) exitWith { _centerPos vectorAdd [random 100 - 50, random 100 - 50, 0] };

	private _available = _positions select {
		_usedSpawnPositions findIf { _x distance2D _x < 1 } isEqualTo -1
	};

	private _pos = objNull;
	if (_available isNotEqualTo []) then {
		_pos = _available select 0;
		_usedSpawnPositions pushBack _pos;
	} else {
		private _raw = _positions select (_positionIndex mod (count _positions));
		_positionIndex = _positionIndex + 1;
		private _offset = (_raw vectorFromTo _centerPos) vectorMultiply -50;
		_pos = _raw vectorAdd _offset;
	};
	_config set ["usedSpawnPositions", _usedSpawnPositions];
	_config set ["positionIndex", _positionIndex];

	private _jitter = [random 10 - 5, random 10 - 5, 0];
	_pos vectorAdd _jitter
};

private _assignWaypoint = {
    params ["_group", "_type"];

    { deleteWaypoint [_group, _forEachIndex]; } forEach waypoints _group;

    private _wp = _group addWaypoint [_centerPos, [0, 50] select (_type == "air")];
    _wp setWaypointType (["MOVE", "SAD"] select (_type == "air"));
    _wp setWaypointBehaviour (["AWARE", "COMBAT"] select (_type == "air"));
    if (_type == "air") then { _wp setWaypointSpeed "FULL" };
};

if (_pendingInf isNotEqualTo []) then {
	private _groupClasses = _pendingInf deleteAt 0;

	private _pos = call _nextSpawnPos;
	_pos set [2, 0];

	private _group = createGroup _side;
	{
		private _unit = _group createUnit [_x, _pos, [], 0, "NONE"];
		_spawned pushBack _unit;
	} forEach _groupClasses;

    [_group, "inf"] call _assignWaypoint;
};

if (_pendingArmor isNotEqualTo []) then {
	private _vehClass = _pendingArmor deleteAt 0;

	private _pos = call _nextSpawnPos;
	_pos set [2, 0];

	private _veh = createVehicle [_vehClass, _pos, [], 0, "NONE"];
    private _vehCrew = createVehicleCrew _veh;
	_spawned append crew _veh;

    if (_vehCrew isNotEqualTo []) then {
    [_vehCrew, "armor"] call _assignWaypoint;
};
};

if (_pendingAir isNotEqualTo []) then 
{
	private _airClass = _pendingAir deleteAt 0;

	private _pos = call _nextSpawnPos;
	_pos set [2, 400 + random 150];

	private _veh = createVehicle [_airClass, _pos, [], 0, "FLY"];
    private _vehCrew = createVehicleCrew _veh;
	_spawned append crew _veh;
    
    if (_vehCrew isNotEqualTo []) then 
    {
        [_vehCrew, "air"] call _assignWaypoint;
    };
};

// Update state
private _aliveUnitsNew = (_config get "aliveUnits") + _spawned;
_config set ["aliveUnits", _aliveUnitsNew];
_config set ["pendingInfantryGroups", _pendingInf];
_config set ["pendingArmorUnits", _pendingArmor];
_config set ["pendingAirUnits", _pendingAir];

// Done spawning?
if (_pendingInf isEqualTo [] && { _pendingArmor isEqualTo [] } && { _pendingAir isEqualTo [] }) exitWith { "done" };
"waiting"
