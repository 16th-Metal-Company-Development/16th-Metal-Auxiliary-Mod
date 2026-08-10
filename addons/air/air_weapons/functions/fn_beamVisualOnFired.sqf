params ["_veh", "_weapon"];

if (!isServer) exitWith {};
if (isNull _veh) exitWith {};
if !(_veh isKindOf "MET_LAAT_Base") exitWith {};

private _laserChamber = "";
private _laserMuzzle = "";
private _laserAnim = "";

switch (_weapon) do {
	case "MET_CompositeBeamCannon": {
		_laserChamber = "Laser_L_chamber";
		_laserMuzzle = "Laser_L_muzzle";
		_laserAnim = "Laser_L";
	};
	case "MET_CompositeBeamCannon_R": {
		_laserChamber = "Lazer_R_chamber";
		_laserMuzzle = "Laser_R_muzzle";
		_laserAnim = "Laser_R";
	};
	default {};
};

if (_laserAnim isEqualTo "") exitWith {};

private _weaponStartPos = _veh selectionPosition [_laserChamber, "memory"];
private _weaponEndPos = _veh selectionPosition [_laserMuzzle, "memory"];

private _weaponWorldStart = _veh modelToWorld _weaponStartPos;
private _weaponWorldEnd = _veh modelToWorld _weaponEndPos;
private _weaponDir = _weaponWorldStart vectorFromTo _weaponWorldEnd;

private _maxDistance = 2000;
private _crosshairPos = [
	(_weaponWorldStart select 0) + ((_weaponDir select 0) * _maxDistance),
	(_weaponWorldStart select 1) + ((_weaponDir select 1) * _maxDistance),
	(_weaponWorldStart select 2) + ((_weaponDir select 2) * _maxDistance)
];

private _intersection = lineIntersectsSurfaces [
	AGLToASL _weaponWorldEnd,
	AGLToASL _crosshairPos,
	_veh,
	objNull,
	true,
	1,
	"VIEW",
	"GEOM"
];

if ((count _intersection) > 0) then {
	_crosshairPos = ASLToAGL ((_intersection select 0) select 0);
};

private _distanceToTarget = _weaponWorldEnd vectorDistance _crosshairPos;

private _lastKey = format ["MET_beamVis_last_%1", _laserAnim];
private _activeKey = format ["MET_beamVis_active_%1", _laserAnim];

_veh setVariable [_lastKey, diag_tickTime, false];
_veh animateSource [_laserAnim, _distanceToTarget, true];

if (_veh getVariable [_activeKey, false]) exitWith {};

_veh setVariable [_activeKey, true, false];

[_veh, _laserAnim, _activeKey, _lastKey] spawn {
	params ["_vehLocal", "_anim", "_activeKeyLocal", "_lastKeyLocal"];

	private _holdAfterLastShot = 0.07;

	waitUntil {
		uiSleep 0.01;
		isNull _vehLocal || ((diag_tickTime - (_vehLocal getVariable [_lastKeyLocal, 0])) > _holdAfterLastShot)
	};

	if (!isNull _vehLocal) then {
		_vehLocal animateSource [_anim, 0, true];
		_vehLocal setVariable [_activeKeyLocal, false, false];
	};
};
