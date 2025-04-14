/*
	Author: Director

	Description:
		Adds a cargo spawn entry to a specific object

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a landing pad where objects will be spawned
		2: STRING - The text to display in the terminal menu
		3: STRING - The classname of the object to spawn

	Returns:
		nil

	Example:
		[_terminal, _pad, _caption, _vehicle] call MET_fnc_addCargoEntry;
*/

params ["_terminal", "_location", "_caption", "_object"]; 
_terminal addAction [
	_caption, 
	{
		params ["_tgt","_caller","_id","_arguments"];
		_location = _arguments select 0;
		_object = _arguments select 1;
		[_location, _object] call MET_fnc_spawnCargo;
	}, [_location, _object]
]; 