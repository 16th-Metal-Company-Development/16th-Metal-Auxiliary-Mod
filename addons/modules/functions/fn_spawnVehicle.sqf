/*
	MET_fnc_spawnVehicle
	Server-authoritative vehicle spawn at a vehicle pad.

	Params:
	0: STRING - vehicle class
	1: OBJECT - pad
	2: OBJECT - caller
	3: NUMBER - cost
	4: BOOL   - use cost system
*/

params ["_vehClass", "_pad", "_caller", "_cost", "_useCost"];

if (!isServer) exitWith {};
if (isNull _pad) exitWith {};
if (!isClass (configFile >> "CfgVehicles" >> _vehClass)) exitWith
{
	diag_log format ["[MET SupportPad] spawnVehicle: invalid class '%1'", _vehClass];
};

if ((nearestObjects [_pad, ["Air","Car","Tank","Armored"], 8]) isNotEqualTo []) exitWith
{
	if (!isNull _caller) then
	{
		["Spawn Location is Occupied!."] remoteExec ["hint", _caller];
	};
};

if (_useCost) then
{
	private _side = side _caller;
	[_side, -_cost, true] call ace_fortify_fnc_updateBudget;
};

private _pos = getPosATL _pad;
private _dir = getDir _pad;

["Vehicle Spawned!"] remoteExec ["hint", _caller];
private _veh = createVehicle [_vehClass, _pos, [], 0, "NONE"];
_veh setDir _dir;
_veh setPos _pos;