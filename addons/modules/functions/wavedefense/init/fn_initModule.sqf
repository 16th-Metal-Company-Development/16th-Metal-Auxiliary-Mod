if (!isServer) exitWith {};

params ["_logic"];

missionNamespace setVariable ["MET_aceLoaded", isClass (configFile >> "CfgPatches" >> "ace_main")];

// Core Variables
private _sideToSpawn = [east, west, resistance] select (_logic getVariable ["sideToSpawn", 0]);
private _waveCount    = _logic getVariable ["waveCount", 10];
private _setupTime    = _logic getVariable ["setupTime", 300];
private _respiteTime  = _logic getVariable ["respiteTime", 120];
private _waitForClear = _logic getVariable ["waitForClear", true];

// Infantry Variables
private _infantryClassList = parseSimpleArray (missionNamespace getVariable ["MET_WaveDefense_InfantryList", "[]"]);
private _infantryGroupSize = _logic getVariable ["infantryGroupSize", 7];
private _infantryGroupsPW  = _logic getVariable ["infantryGroupsPerWave", 3];
private _infantryMult      = _logic getVariable ["infantryDifficultyMultiplier", 2];

// Air Variables
private _airClassList      = parseSimpleArray (missionNamespace getVariable ["MET_WaveDefense_AirList", "[]"]);
private _airUnitsPW = _logic getVariable ["airUnitsPerWave", 1];
private _airMult    = _logic getVariable ["airDifficultyMultiplier", 1.5];

// Armor Variables
private _armorClassList    = parseSimpleArray (missionNamespace getVariable ["MET_WaveDefense_ArmorList", "[]"]);
private _armorUnitsPW = _logic getVariable ["armorUnitsPerWave", 1];
private _armorMult    = _logic getVariable ["armorDifficultyMultiplier", 1.5];

// Global Variables 
private _maxAliveUnits = parseNumber(missionNamespace getVariable ["MET_WaveDefense_MaximumConcurrentUnits", "500"]);
private _delayBetweenGroups = parseNumber(missionNamespace getVariable ["MET_WaveDefense_DelayBetweenGroups", "0"]);

// Build config hashmap
private _config = createHashMapFromArray [
    ["sideToSpawn", _sideToSpawn],
    ["maxWaves", _waveCount],
    ["setupTime", _setupTime],
    ["respiteTime", _respiteTime],
    ["waitForClear", _waitForClear],

    // Infantry
    ["infantryClassList", _infantryClassList],
    ["infantryGroupSize", _infantryGroupSize],
    ["infantryGroupsPerWave", _infantryGroupsPW],
    ["infantryDifficultyMultiplier", _infantryMult],

    // Air
    ["airClassList", _airClassList],
    ["airUnitsPerWave", _airUnitsPW],
    ["airDifficultyMultiplier", _airMult],

    // Armor
    ["armorClassList", _armorClassList],
    ["armorUnitsPerWave", _armorUnitsPW],
    ["armorDifficultyMultiplier", _armorMult],

    // Global Vars
    ["maxAliveUnits", _maxAliveUnits ],
    ["delayBetweenGroups", _delayBetweenGroups ],

    // Internal Vars
    ["currentWave", 0],
    ["waveActive", false],
    ["aliveUnits", []]
];

missionNamespace setVariable ["MET_WD_Config", _config];

// Start the wave loop
[_logic, _config] spawn MET_fnc_waveLoop;