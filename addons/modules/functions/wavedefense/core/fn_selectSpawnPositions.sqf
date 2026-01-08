/*
    MET_fnc_selectSpawnPositions.sqf

    Params:
        0: OBJECT - module logic
        1: INT - number of spawn positions requested
        2: INT - wave number (not used here, but kept for compatibility)
        3: HASHMAP - config (unused here)

    Returns:
        ARRAY of positions: [ [x,y,z], [x,y,z], ... ]
*/

params ["_logic", "_count", "_waveNum", "_config"];

private _positions = [];

// Get all synced objects
private _synced = synchronizedObjects _logic;

// Find all objects with variable name starting with "waveMarker_"
private _matching = _synced select {
    private _varName = vehicleVarName _x;
    _varName find "waveMarker_" == 0
};

if (_matching isEqualTo []) exitWith {
    systemChat "[WaveDefense] No waveMarkers synced to module!";
    []
};

// Shuffle to randomize distribution
private _shuffled = _matching call BIS_fnc_arrayShuffle;

for "_i" from 0 to (_count - 1) do {
    private _baseObj = _shuffled select (_i mod (count _shuffled));
    private _basePos = getPosATL _baseObj;

    // If re-using spawn point, apply large offset to avoid stacking
    private _reuseIndex = floor (_i / (count _shuffled));
    private _offset = [random 10 - 5, random 10 - 5, 0];

    // For every reuse, add an outward directional offset
    if (_reuseIndex > 0) then {
        private _angle = random 360;
        private _distance = 10 + (10 * _reuseIndex);  // 10m steps outward
        private _dx = sin _angle * _distance;
        private _dy = cos _angle * _distance;
        _offset = _offset vectorAdd [_dx, _dy, 0];
    };

    private _finalPos = _basePos vectorAdd _offset;
    _positions pushBack _finalPos;
};

_positions
