/*
	Author: Director

	Description:
		Orients a Republic Avionics Pod to a specific direction

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a target to search
		2: INTEGER - The direction to orient the Avionics Pod to

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_setPodDirection;
*/

params ["_terminal", "_pad", "_direction"];
_veh = nearestObjects [_pad, ["3AS_EscapePod"], 30] select 0;
_veh setDir _direction;

