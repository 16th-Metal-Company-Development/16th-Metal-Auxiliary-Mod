/*
	Author: Director

	Description:
		Spawns a cargo object at the specified location

	Parameter(s):
		0: OBJECT - The location to spawn the object at
		1: STRING - The object to spawn

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_spawnCargo;
*/

params ["_location", "_cargo"];
_position = getPosATL _location; 
_veh = "";
if (_cargo == "arsenal") then {
	_veh = "ACE_Box_Ammo" createVehicle getPosATL _location;       
   [_veh, true] call ace_arsenal_fnc_initBox;
};
if (_cargo == "fuel") then {
	_veh = "B_Slingload_01_Fuel_F" createVehicle getPosATL _location; 
   [_veh, 100000] call ace_refuel_fnc_makeSource
 };
if (_cargo == "repair") then {
	_veh = "B_Slingload_01_Repair_F" createVehicle getPosATL _location;
	_veh setVariable ["ace_isRepairFacility", 1, true];
};
if (_cargo == "rearm") then {
	_veh = "B_Slingload_01_Ammo_F" createVehicle getPosATL _location;
	_veh setVariable ["ace_rearm_isSupplyVehicle", true]
};

_veh setDir getDir _location + 90; 
_veh setPosATL [_position select 0, _position select 1,(_position select 2) + 5]; 