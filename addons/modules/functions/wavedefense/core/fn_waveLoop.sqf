/*
	Main Wave Loop

	Params:
	0: Module Logic
	1: Config
*/

params ["_logic", "_config"];

private _setupTime = _config getOrDefault ["setupTime", 300];
private _maxWaves = _config getOrDefault ["maxWaves", -1];

[] remoteExec ["MET_fnc_showWaveHUD", 0, true];

for "_i" from _setupTime to 1 step -1 do {
	private _msg = format [
		"First wave in %1 seconds.",
		_i
	];

	["", "", _msg] remoteExec ["MET_fnc_updateWaveHUD", 0];

	sleep 1;
};

while {true} do 
{
	private _waveNum = (_config get "currentWave") + 1;
	_config set ["currentWave", _waveNum];

	if (_maxWaves > 0 && {_waveNum > _maxWaves}) exitWith 
	{
		[] remoteExec ["MET_fnc_hideWaveHUD", 0, true];
		_config set ["waveActive", false];
	};

	// Misc Vars
	private _waveComp = [_waveNum, _config] call MET_fnc_buildWaveComposition;
	private _spawnCount = 12 + _waveNum; // Could make configurable
	private _positions = [_logic, _spawnCount, _waveNum, _config] call MET_fnc_selectSpawnPositions;
	private _centerPos = getPosATL _logic;

	_config set ["pendingInfantryGroups", (_waveComp select 0) select 1];
	_config set ["pendingArmorUnits",    (_waveComp select 1) select 1];
	_config set ["pendingAirUnits",      (_waveComp select 2) select 1];
	_config set ["aliveUnits", []];
	_config set ["waveActive", true];


	// PFH Vars
	private _spawnDelay = _config getOrDefault ["delayBetweenGroups", 0];
	private _waveStartTime = time;
	private _lastAliveCount = -1;
	private _lastSpawnTime = time;
	private _lastStuckCheck = time;

	private _codeToRun = {
		private _lastAliveCount = _this select 0;
		private _lastSpawnTime  = _this select 1;
		private _config         = _this select 2;
		private _waveNum        = _this select 3;
		private _spawnDelay     = _this select 4;
		private _positions      = _this select 5;
		private _centerPos      = _this select 6;
		private _lastStuckCheck = _this select 7;

		private _aliveUnits = (_config get "aliveUnits") select { !(isNull _x) && { alive _x } };
		_config set ["aliveUnits", _aliveUnits];
		private _aliveCount = count _aliveUnits;

		if (_lastAliveCount != _aliveCount) then {
			_lastAliveCount = _aliveCount;

			[_waveNum, _aliveCount, ""] remoteExec ["MET_fnc_updateWaveHUD", 0];
		};

		private _pending =
			(_config get "pendingInfantryGroups") isNotEqualTo [] ||
			(_config get "pendingArmorUnits") isNotEqualTo [] ||
			(_config get "pendingAirUnits") isNotEqualTo [];

		private _maxAlive = _config getOrDefault ["maxAliveUnits", -1];

		if (time - _lastSpawnTime >= _spawnDelay) then {
			if (_pending && { _maxAlive == -1 || { _aliveCount < _maxAlive } }) then {
				_lastSpawnTime = time;
				[_config, _positions, _centerPos] call MET_fnc_spawnWave;
			};
		};

		// UNCONSCIOUS KILL CHECK (every 5 seconds)
		if (time - _lastStuckCheck >= 5) then {
			private _hasACE = missionNamespace getVariable ["MET_aceLoaded", false];

			private _unconscious = _aliveUnits select {!(isNull _x) &&{alive _x &&{if (_hasACE) then {!([_x] call ace_common_fnc_isAwake)} else {!canMove _x}}}};
			{ _x setDamage 1 } forEach _unconscious;

			_lastStuckCheck = time;
		};

		private _waitForClear = _config getOrDefault ["waitForClear", true];
		if (!_pending && { !_waitForClear || { _aliveCount == 0 } }) then {
			systemChat format ["[WaveDefense] Wave %1 completed.", _waveNum];
			_config set ["waveActive", false];
		};

		// write state back into array
		_this set [0, _lastAliveCount];
		_this set [1, _lastSpawnTime];
	};

	private _parameters = 
	[
		_lastAliveCount,
		_lastSpawnTime,
		_config,
		_waveNum,
		_spawnDelay,
		_positions,
		_centerPos,
		_lastStuckCheck
	];

	private _condition = {(_this select 2) get "waveActive"};


	[
		{
			params ["_args", "_handle"];
			_args params ["_codeToRun", "_parameters", "_condition"];

			if (_parameters call _condition) then {
				_parameters call _codeToRun;
			} else {
				_handle call CBA_fnc_removePerFrameHandler;
			};
		},
		0,  // PFH interval (0 = every frame)
		[_codeToRun, _parameters, _condition]
	] call CBA_fnc_addPerFrameHandler;

	waitUntil { !(_config get "waveActive") };

	private _respite = _config get "respiteTime";
	for "_i" from _respite to 1 step -1 do {
		private _msg = format [
			"Next wave in %1 seconds.",
			_i
		];
		
		["", "", _msg] remoteExec ["MET_fnc_updateWaveHUD", 0];

		sleep 1;
	};
};