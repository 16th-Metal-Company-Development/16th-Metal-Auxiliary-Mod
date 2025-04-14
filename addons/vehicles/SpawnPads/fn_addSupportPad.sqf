/*
	Author: Director

	Description:
		Adds the 16th Support Pod Menu and sets it to target a specific pad

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a target to search

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_addSupportPad;
*/

params ["_terminal", "_pad"];
_terminal addAction ["Clear Pad", {
    {deleteVehicle _x} forEach nearestObjects [_this select 3 select 0,         ["Air","Car", "Armored", "Tank"], 10];
    {deleteVehicle _x} forEach nearestObjects [_this select 3 select 0,         ["Air","Car", "Armored", "Tank"], 10];
}, [_pad, _terminal]]; 

_terminal addAction["Refuel",{ 
    veh = nearestObjects [_this select 3 select 0, 
    ["Air", "Car", "Armored","Tank"], 10] select 0; 
    ["Refueling", 5, {!isEngineOn veh;}, {hint "refueling complete";veh setFuel 1;}, 
    {hint "refueling aborted";}] call CBA_fnc_progressBar;}, [_pad, _terminal]]; 
  
_terminal addAction["Repair",{ veh = nearestObjects [_this select 3 select 0, ["Air", "Car", "Armored","Tank"], 10] select 0; ["Repairing", 5, {!isEngineOn veh;}, {hint "repairing complete";veh setDamage 0;}, {hint "repairing aborted";}] call CBA_fnc_progressBar;}, [_pad, _terminal]]; 
_terminal addAction["Rearm",{ veh = nearestObjects [_this select 3 select 0, ["Air", "Car", "Armored","Tank"], 10] select 0; ["Rearming", 5, {!isEngineOn veh;}, {hint "rearming complete";veh setVehicleAmmo 1;}, {hint "rearming aborted";}] call CBA_fnc_progressBar;}, [_pad, _terminal]]; 
_terminal addAction["Change Pylons",{ _veh = nearestObjects [_this select 3 select 0, ["Helicopter","Plane"], 200] select 0; [_veh] call ace_pylons_fnc_showDialog;}, [_pad, _terminal]];