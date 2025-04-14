// Written by : Jenna
//
//
// Ejects the unit 30 meters behind the given vehicle's origin, usually enough to get clear of something. Gives 1.5s of invulnerability.


params ["_unit"];
if (isNull objectParent _unit) exitWith {};
private _vehicle = vehicle _unit;
if (call knd_fnc_hasJetpack) then 
{
	_unit setUnitFreefallHeight (((_vehicle modelToWorld [0,0,0]) select 2)+ 40);
};
_unit allowDamage false;
moveOut _unit;
private _offset = random [-10,0,10];
private _getOutPos = _vehicle modelToWorld [_offset,-30,0];
_unit setPosASL (AGLToASL _getOutPos);
private _vehicleVel = velocity _vehicle;
_unit setVelocity _vehicleVel;
_unit setDir (getDir _vehicle);

[{
params ["_unit"];
_unit allowDamage true;
}, [_unit], 1.5] call CBA_fnc_waitAndExecute;



