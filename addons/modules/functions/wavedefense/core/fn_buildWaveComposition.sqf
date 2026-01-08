/*
    MET_fnc_buildWaveComposition.sqf

    Params:
        0: INT - wave number
        1: HASHMAP - config

    Returns:
        ARRAY - structured composition:
        [
            ["infantry", [ [unitClass1, unitClass2, ...], [unitClass1, ...], ... ]], // groups
            ["armor",    [className1, className2, ...]],
            ["air",      [className1, className2, ...]]
        ]
*/
params ["_waveNum", "_config"];

diag_log format [
    "[WaveDefense] buildWaveComposition: wave=%1\nINF List=%2\nGroupSize=%3\nGroupsBase=%4\nInfMult=%5\nArmorList=%6\nArmorBase=%7\nArmorMult=%8\nAirList=%9\nAirBase=%10\nAirMult=%11",
    _waveNum,
    _config get "infantryClassList",
    _config get "infantryGroupSize",
    _config get "infantryGroupsPerWave",
    _config get "infantryDifficultyMultiplier",
    _config get "armorClassList",
    _config get "armorUnitsPerWave",
    _config get "armorDifficultyMultiplier",
    _config get "airClassList",
    _config get "airUnitsPerWave",
    _config get "airDifficultyMultiplier"
];

private _buildWeightedPool = {
	params ["_list"];

	private _pool = [];
	{
		private _class = _x#0;
		private _weight = round (_x#1 * 10); // Scale up to avoid decimals

		for "_i" from 1 to _weight do {
			_pool pushBack _class;
		};
	} forEach _list;

	_pool call BIS_fnc_arrayShuffle;
	_pool
};


// === Config Values ===
private _infList = _config get "infantryClassList";
private _infGroupSize = _config get "infantryGroupSize";
private _infGroupsBase = _config get "infantryGroupsPerWave";
private _infMultiplier = _config get "infantryDifficultyMultiplier";

private _armorList = _config get "armorClassList";
private _armorBase = _config get "armorUnitsPerWave";
private _armorMultiplier = _config get "armorDifficultyMultiplier";

private _airList = _config get "airClassList";
private _airBase = _config get "airUnitsPerWave";
private _airMultiplier = _config get "airDifficultyMultiplier";

// === Build Infantry Groups ===
private _infGroups = [];
private _infGroupCount = floor (_infGroupsBase * (_infMultiplier ^ (_waveNum - 1)));
private _infPool = [_infList] call _buildWeightedPool;

for "_i" from 1 to _infGroupCount do {
    private _group = [];
    private _infPool = [_infList] call _buildWeightedPool;
    _infPool = _infPool call BIS_fnc_arrayShuffle;

    for "_j" from 1 to _infGroupSize do {
        if (_infPool isEqualTo []) exitWith {};
        private _unitClass = _infPool deleteAt 0;
        if (_unitClass == "") then { continue };
        _group pushBack _unitClass;
    };

    if (_group isNotEqualTo []) then {
        _infGroups pushBack _group;
    };
};

// Build Armor Units
private _armorCount = floor (_armorBase * (_armorMultiplier ^ (_waveNum - 1)));
private _armorUnits = [];

private _armorPool = [_armorList] call _buildWeightedPool;
_armorPool = _armorPool call BIS_fnc_arrayShuffle;

for "_i" from 1 to _armorCount do {
	if (_armorPool isEqualTo []) exitWith {};

	private _vehClass = _armorPool deleteAt 0;
	if (_vehClass == "") then { continue };

	_armorUnits pushBack _vehClass;
};

// Build Air Units
private _airCount = floor (_airBase * (_airMultiplier ^ (_waveNum - 1)));
private _airUnits = [];

private _airPool = [_airList] call _buildWeightedPool;
_airPool = _airPool call BIS_fnc_arrayShuffle;

for "_i" from 1 to _airCount do {
	if (_airPool isEqualTo []) exitWith {};

	private _airClass = _airPool deleteAt 0;
	if (_airClass == "") then { continue };

	_airUnits pushBack _airClass;
};


// Return composition
[
	["infantry", _infGroups],
	["armor", _armorUnits],
	["air", _airUnits]
]