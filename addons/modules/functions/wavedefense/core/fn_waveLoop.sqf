// File: fn_waveLoop.sqf
params ["_logic", "_config"];

private _setupTime = _config get "setupTime";
private _maxWaves = _config getOrDefault ["maxWaves", -1];  // -1 = unlimited

for "_i" from _setupTime to 1 step -1 do {
	private _players = allPlayers select { isPlayer _x && !isNull _x };
	private _msg = format [
		"Wave Defense Started!\nFirst wave in %1 seconds.",
		_i
	];
	[_msg] remoteExec ["hint", _players];
	sleep 1;
};

// MAIN LOOP
while {true} do {
	private _waveNum = (_config get "currentWave") + 1;
	_config set ["currentWave", _waveNum];

	// Max Wave Check
	if (_maxWaves > 0 && {_waveNum > _maxWaves}) exitWith {
		systemChat format ["[WaveDefense] Completed all %1 waves.", _maxWaves];
		_config set ["waveActive", false];
	};

	// Wave Comp
	private _waveComp = [_waveNum, _config] call MET_fnc_buildWaveComposition;

	// Collect Positions
	private _spawnCount = 12 + _waveNum; // Could make configurable
	private _positions = [_logic, _spawnCount, _waveNum, _config] call MET_fnc_selectSpawnPositions;

	private _centerPos = getPosATL _logic;

	// Defer unit spawning to the step-based queue
	_config set ["pendingInfantryGroups", (_waveComp select 0) select 1];
	_config set ["pendingArmorUnits",    (_waveComp select 1) select 1];
	_config set ["pendingAirUnits",      (_waveComp select 2) select 1];
	_config set ["aliveUnits", []];
	_config set ["waveActive", true];

	//  Broadcast wave start hint
	private _players = allPlayers select { isPlayer _x && !isNull _x };
	private _msg = format [
		"Wave %1 has begun!",
		_waveNum
	];
	[_msg] remoteExec ["hint", _players];

	// Track wave start time for timeout checks
	private _waveStartTime = time;
	private _spawnDelay = _config getOrDefault ["delayBetweenGroups", 0];
	private _lastSpawnTime = -_spawnDelay;

	while { _config get "waveActive" } do {

		sleep 0.001;
		
		// Clean up and track alive units
		private _aliveUnits = (_config get "aliveUnits") select { !(isNull _x) && { alive _x } };
		_config set ["aliveUnits", _aliveUnits];
		private _aliveCount = count _aliveUnits;

		// Hint update
		if (isNil "_lastAliveCount" || { _lastAliveCount != _aliveCount }) then {
			_lastAliveCount = _aliveCount;

			private _players = allPlayers select { isPlayer _x && !isNull _x };
			private _msg = format [
				"Wave %1 in progress...\n%2 enemies remaining.",
				_waveNum,
				_aliveCount
			];
			[_msg] remoteExec ["hint", _players];
		};

		// Spawn step
		private _spawnResult = [_config, _positions, _centerPos] call MET_fnc_spawnWave;

		// Timeout safeguard (optional) FOR FUTURE USE
		// private _timeout = _config getOrDefault ["waveTimeout", -1];
		// if (_timeout > 0 && { time - _waveStartTime >= _timeout }) exitWith {
		// 	systemChat format ["[WaveDefense] Wave %1 timeout reached.", _waveNum];
		// 	_config set ["waveActive", false];
		// };

		// Minimum alive fallback (optional) FOR FUTURE USE
		// private _minAlive = _config getOrDefault ["minAliveUnits", -1];
		// if (_minAlive > 0 && { _aliveCount < _minAlive }) exitWith {
		// 	systemChat format ["[WaveDefense] Wave %1 failed due to too few units remaining.", _waveNum];
		// 	_config set ["waveActive", false];
		// };

		// End wave when all enemies dead AND spawn queue empty
		private _maxAlive = _config getOrDefault ["maxAliveUnits", -1];
		private _pending = 
			(_config get "pendingInfantryGroups") isNotEqualTo [] ||
			(_config get "pendingArmorUnits") isNotEqualTo [] ||
			(_config get "pendingAirUnits") isNotEqualTo [];

		if (time - _lastSpawnTime >= _spawnDelay) then 
		{
        	if (_pending && { _maxAlive == -1 || { _aliveCount < _maxAlive } }) then 
			{
				_lastSpawnTime = time;
				private _spawnResult = [_config, _positions, _centerPos] call MET_fnc_spawnWave;
			};
    	};

		private _waitForClear = _config getOrDefault ["waitForClear", true];

		if (!_pending && { !_waitForClear || { _aliveCount == 0 } }) then {
			systemChat format ["[WaveDefense] Wave %1 completed.", _waveNum];
			_config set ["waveActive", false];
		};
	};


	_config set ["waveActive", false];

	private _respite = _config get "respiteTime";
	for "_i" from _respite to 1 step -1 do {
		private _players = allPlayers select { isPlayer _x && !isNull _x };
		private _msg = format [
			"Wave %1 complete!\nNext wave in %2 seconds.",
			_waveNum,
			_i
		];
		[_msg] remoteExec ["hint", _players];
		sleep 1;
	};
};
