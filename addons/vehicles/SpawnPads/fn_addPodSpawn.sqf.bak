/*
	Author: Director

	Description:
		Adds the 248th Avionics Pod Spawn Menu and sets it to spawn at a specific location

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a landing pad where pods will be spawned

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_addPodSpawn;
*/

params ["_terminal", "_pad"]; 
private _vehicles = [["==STOCK==",""],  
					 ["Prepare Pod","3AS_EscapePod"]]; 
{ 
   _caption = _x select 0; 
   _class = _x select 1; 
   [_terminal, _pad, _caption, _class] call MET_fnc_addSpawnEntry; 
} forEach _vehicles; 
