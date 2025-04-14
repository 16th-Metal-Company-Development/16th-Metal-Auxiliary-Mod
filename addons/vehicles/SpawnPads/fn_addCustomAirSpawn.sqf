/*
	Author: Director

	Description:
		Adds the 16th Custom Air Spawn Menu and sets it to spawn at a specific location

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a landing pad where objects will be spawned

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_addCustomAirSpawn;
*/

params ["_terminal", "_pad"];  
private _vehicles = [["==CUSTOMS==",""]];  
                      
{  
   _caption = _x select 0;  
   _vehicle = _x select 1;  
   [_terminal, _pad, _caption, _vehicle] call MET_fnc_addSpawnEntry;  
} forEach _vehicles;  
