// [16th] Build Zones Module
// Params:
// Side | Which Sides Budget to Modify
// Basic Mode | If True, Use Default Score for all kills
// Default/Ground/Air/Valuable Score | Scores to use if killed object matches specified class
// Valuable Classes | Classes to compare killed object against

params ["_logic", "_units", "_activated"];

// Module config variables
private _side = _logic getVariable ["side", 1];
private _defaultScore = _logic getVariable ["defaultScore", 5];
private _groundScore = _logic getVariable ["groundVehicleScore", 25];
private _airScore = _logic getVariable ["airVehicleScore", 25];
private _valuableScore = _logic getVariable ["valuableScore", 75];

// Target classlists
private _valuableTargets = toLower (_logic getVariable ["valuableTargets", ""]) splitString "," apply { trim _x };

// Side mapping
private _sideObj = [east, west, resistance] select _side;

// No if not server
if (!isServer) exitWith {};

// Kill monitor
addMissionEventHandler ["EntityKilled", {
    params ["_killed", "_killer"];
    private _args = _thisArgs;

    if (isNull _killer || {isNull group _killer}) exitWith {};

    private _killerSide = side group _killer;
	private _targetSide = _args select 0;
    if (_killerSide != _targetSide) exitWith {};

	private _victimSide = side group _killed;
	private _isFriendlyFire = (_killerSide == _victimSide);

	private _defaultScore   = _args select 1;
    private _groundScore    = _args select 2;
    private _airScore       = _args select 3;
    private _valuableScore  = _args select 4;
    private _valuableTargets= _args select 5;

    private _score = _defaultScore;

    private _killedClass = toLower typeOf _killed;
    if (_killedClass in _valuableTargets) then {
        _score = _valuableScore;
    } else {
        // Determine vehicle type
        if (_killed isKindOf "Air") then 
		{
            _score = _airScore;
        } 
		else 
		{
            if (_killed isKindOf "LandVehicle") then 
			{
                _score = _groundScore;
            };
        };
    };

	if (_isFriendlyFire) then 
	{
    	_score = -_score; // Penalize friendly fire
	};

    [_killerSide, _score, false] call ace_fortify_fnc_updateBudget;

    diag_log format ["[MET_Debug] _score type: %1 | value: %2", typeName _score, _score];
    diag_log format [
        "[MET_LogisticsBudget] %1 (%2) killed %3 (%4) → +%5 pts to %6",
        name _killer,
        _killerSide,
        typeOf _killed,
        side group _killed,
        _score,
        _killerSide
    ];
}, [
    _sideObj,           // 0
    _defaultScore,      // 1
    _groundScore,       // 2
    _airScore,          // 3 
    _valuableScore,     // 4
	_valuableTargets    // 5
]];