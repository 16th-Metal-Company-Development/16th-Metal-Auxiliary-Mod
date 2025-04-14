/*
	Author: Director

	Description:
		Adds the 248th Pod Orientation Menu

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a pad to search for an escape pod

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_addOrientPod;
*/

params ["_terminal", "_pad"];
_terminal addAction ["==Pod Orientation==", ""];
_terminal addAction ["North", {
	params ["_tgt","_caller","_id","_arguments"];
	_location = _arguments select 0;
	_direction = _arguments select 1;
	_this call MET_fnc_setPodDirection;
}, [_pad, 0]
];
_terminal addAction ["North East", {
	params ["_tgt","_caller","_id","_arguments"];
	_location = _arguments select 0;
	_direction = _arguments select 1;
	_this call MET_fnc_setPodDirection;
}, [_pad, 45]];
_terminal addAction ["East", {
	params ["_tgt","_caller","_id","_arguments"];
	_location = _arguments select 0;
	_direction = _arguments select 1;
	_this call MET_fnc_setPodDirection;
}, [_pad, 90]];
_terminal addAction ["South East", {
	params ["_tgt","_caller","_id","_arguments"];
	_location = _arguments select 0;
	_direction = _arguments select 1;
	_this call MET_fnc_setPodDirection;
}, [_pad, 135]];
_terminal addAction ["South", {
	params ["_tgt","_caller","_id","_arguments"];
	_location = _arguments select 0;
	_direction = _arguments select 1;
	_this call MET_fnc_setPodDirection;
}, [_pad, 180]];
_terminal addAction ["South West", {
	params ["_tgt","_caller","_id","_arguments"];
	_location = _arguments select 0;
	_direction = _arguments select 1;
	_this call MET_fnc_setPodDirection;
}, [_pad, 225]];

_terminal addAction ["West", {
	params ["_tgt","_caller","_id","_arguments"];
	_location = _arguments select 0;
	_direction = _arguments select 1;
	_this call MET_fnc_setPodDirection;
}, [_pad, 270]];

_terminal addAction ["North West", {
	params ["_tgt","_caller","_id","_arguments"];
	_location = _arguments select 0;
	_direction = _arguments select 1;
	_this call MET_fnc_setPodDirection;
}, [_pad, 315]];

