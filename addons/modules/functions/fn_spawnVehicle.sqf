/*
    MET_fnc_spawnVehicle
    Server-authoritative vehicle spawn at a vehicle pad.

    Parameters:
    0: STRING - Vehicle class
    1: OBJECT - Spawn pad
    2: OBJECT - Caller (player)
    3: NUMBER - Vehicle cost
    4: BOOL   - Whether to use budget system
*/

params ["_vehClass", "_pad", "_caller", "_cost", "_useCost"];

if (!isServer || isNull _pad) exitWith {};
if (!isClass (configFile >> "CfgVehicles" >> _vehClass)) exitWith {
    diag_log format ["[MET SupportPad] spawnVehicle: invalid class '%1'", _vehClass];
};

private _vehicleTypes = ["Air", "Car", "Tank", "Armored"];
if ((nearestObjects [_pad, _vehicleTypes, 8]) isNotEqualTo []) exitWith {
    if (!isNull _caller) then {
        ["Spawn Location is Occupied!"] remoteExec ["hint", _caller];
    };
};

private _spawnVehicle = {
    params ["_vehClass", "_pad", "_caller"];
    private _pos = getPosATL _pad;
    private _dir = getDir _pad;

    private _veh = createVehicle [_vehClass, _pos, [], 0, "NONE"];
    _veh setDir _dir;

    if (!isNull _caller) then 
	{
        ["Vehicle Spawned!"] remoteExec ["hint", _caller];
    };

    _veh
};

if (_useCost) then 
{
	if (([side _caller] call ace_fortify_fnc_getBudget) < _cost) exitWith 
	{
        if (!isNull _caller) then 
		{
            ["Not enough budget to spawn vehicle!"] remoteExec ["hint", _caller];
        };
    };

    [side _caller, -_cost, true] call ace_fortify_fnc_updateBudget;
    [_vehClass, _pad, _caller] call _spawnVehicle;
} 
else 
{
    [_vehClass, _pad, _caller] call _spawnVehicle;
};