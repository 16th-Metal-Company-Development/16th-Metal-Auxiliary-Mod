if (!hasInterface) exitWith {};

params ["_source"];
if (isNull _source) exitWith {};

if (isNil "MET_beamDebug") then {
	MET_beamDebug = true;
};

private _loopPath = "z\MET\addons\Air\air_weapons\sounds\particle_beam_loop.ogg";
private _loopInterval = 0.5;
private _stopAfterNoFire = 0.09;
private _nextLoopAt = diag_tickTime + 0.03;

if (MET_beamDebug) then {
	diag_log format ["[MET Beam] loopTick: start source=%1 path=%2", _source, _loopPath];
};

while {_source getVariable ["MET_beam_active", false]} do {
	if (isNull _source) exitWith {
		if (MET_beamDebug) then {
			diag_log "[MET Beam] loopTick: exit, source became null";
		};
	};

	private _now = diag_tickTime;
	private _lastFire = _source getVariable ["MET_beam_lastFire", 0];

	if ((_now - _lastFire) > _stopAfterNoFire) exitWith {
		if (MET_beamDebug) then {
			diag_log format ["[MET Beam] loopTick: exit, no fire timeout source=%1 dt=%2", _source, (_now - _lastFire)];
		};
	};

	if (_now >= _nextLoopAt) then {
		if (MET_beamDebug) then {
			diag_log format ["[MET Beam] loopTick: play loop source=%1", _source];
		};
		playSound3D [_loopPath, _source, false, getPosASL _source, 1.5, 1, 2500];
		_nextLoopAt = _now + _loopInterval;
	};

	uiSleep 0.01;
};

_source setVariable ["MET_beam_active", false];
if (MET_beamDebug) then {
	diag_log format ["[MET Beam] loopTick: set inactive source=%1", _source];
};
