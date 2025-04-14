params[["_tgt",objNull,[player]]];

if(isNull _tgt) exitWith {};

_tgt addAction ["<t color='#00602b'>Engage Tow Scoop</t>",{
	params["_vic"];
	_objects = nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
	_vex = _objects select 1;
	if (side group _vex == playerSide || {alive _x} count crew _vex == 0) then {
	_vex attachTo [_vic, [0,10,3]]; 
	removeAllActions _vic;
	_vic addAction ["<t color='#a52a2a'>Disengage Tow Scoop</t>",	{
		params["_vic"];
		_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
		removeAllActions _vic;
		_vex = _objects select 1;
		_vex allowDamage false;
		detach _vex;
		_this execVM "\vehicles_16\Scripts\magtow.sqf";
	},[1],0,true,true,""," driver  _target == _this "];
	};
},[1],0,true,true,""," driver  _target == _this "];