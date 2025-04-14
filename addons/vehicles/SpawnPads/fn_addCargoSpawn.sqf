/*
	Author: Director

	Description:
		Adds the 16th Cargo Spawn Menu and sets it to spawn at a specific location

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a pad where objects will be spawned

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_addCargoSpawn;
*/

params ["_terminal", "_pad"]; 
_cargo = [["==CARGO==",""], 
["Arsenal", "arsenal"], 
["Rearm Station", "rearm"], 
["Fuel Station", "fuel"], 
["Repair Station", "repair"]]; 
{ 
	_caption = _x select 0; 
	_object = _x select 1; 
	[_terminal, _pad, _caption, _object] call MET_fnc_addCargoEntry; 
} forEach _cargo; 