/*
	Author: Director

	Description:
		Spawns a vehicle at the specified location

	Parameter(s):
		0: OBJECT - The location to spawn the object at
		1: STRING - The vehicle to spawn

	Returns:
		nil

	Example:
		[pad, vehicle] call MET_fnc_spawnVehicle;
*/
params ["_location", "_vehicle"];
_position = getPosATL _location; 
_veh = createVehicle [_vehicle, [0,0,50000], [], 0, "CAN_COLLIDE"];
_veh setDir getDir _location + 90;
_veh setPosATL [_position select 0, _position select 1,(_position select 2) + 5]; 

if (_vehicle == "248th_Ywing_V1" || _vehicle == "SDT_LAAT_C") then { 
    [_veh,true,true,true,true] call fir_fnc_aws_enablefunction; 
}; 
 
if (_vehicle == "248th_ARC_170" || _vehicle == "248th_LAAT_Mk2" || _vehicle == "ls_heli_laatle_transportGunship") then { 
    [_veh,true,true,true,false] call fir_fnc_aws_enablefunction; 
};
