params ["_unit", "_weapon", "_muzzle"];

if (missionNamespace getVariable ["MET_disableBeamHooks", false]) exitWith {};

if (isNil "MET_beamDebug") then {
	MET_beamDebug = true;
};

if (MET_beamDebug) then {
	diag_log format ["[MET Beam] onFired: unit=%1 local=%2 weapon=%3 muzzle=%4", _unit, local _unit, _weapon, _muzzle];
};

if (!local _unit) exitWith {
	if (MET_beamDebug) then {
		diag_log "[MET Beam] onFired: exit, unit not local";
	};
};

private _isBeamWeapon = (_weapon in ["MET_CompositeBeamCannon", "MET_CompositeBeamCannon_R"]) || (_muzzle in ["MET_CompositeBeamCannon", "MET_CompositeBeamCannon_R"]);
if (!_isBeamWeapon) exitWith {
	if (MET_beamDebug) then {
		diag_log format ["[MET Beam] onFired: exit, not beam weapon (weapon=%1 muzzle=%2)", _weapon, _muzzle];
	};
};

private _source = vehicle _unit;
if (isNull _source) then {
	_source = _unit;
};
if (isNull _source) exitWith {
	if (MET_beamDebug) then {
		diag_log "[MET Beam] onFired: exit, null source";
	};
};

if (MET_beamDebug) then {
	diag_log format ["[MET Beam] onFired: pass filter, source=%1", _source];
};

[_source] call MET_fnc_beamRegisterFire;

if (isMultiplayer) then {
	if (MET_beamDebug) then {
		diag_log "[MET Beam] onFired: remoteExec beamRegisterFire to all clients";
	};
	[_source] remoteExecCall ["MET_fnc_beamRegisterFire", -2, false];
};
