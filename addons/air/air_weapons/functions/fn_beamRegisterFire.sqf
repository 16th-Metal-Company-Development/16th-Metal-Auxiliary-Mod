if (!hasInterface) exitWith {};

params ["_source"];
if (isNull _source) exitWith {};

if (isNil "MET_beamDebug") then {
	MET_beamDebug = true;
};

private _now = diag_tickTime;
_source setVariable ["MET_beam_lastFire", _now];

if (_source getVariable ["MET_beam_active", false]) exitWith {
	if (MET_beamDebug) then {
		diag_log format ["[MET Beam] registerFire: already active, refreshing timestamp source=%1", _source];
	};
};

_source setVariable ["MET_beam_active", true];

private _introPath = "z\MET\addons\Air\air_weapons\sounds\particle_beam_start.ogg";
if (MET_beamDebug) then {
	diag_log format ["[MET Beam] registerFire: intro play source=%1 path=%2", _source, _introPath];
};
playSound3D [_introPath, _source, false, getPosASL _source, 1.5, 1, 2500];

if (MET_beamDebug) then {
	diag_log format ["[MET Beam] registerFire: spawning loop tick source=%1", _source];
};
[_source] spawn MET_fnc_beamLoopTick;
