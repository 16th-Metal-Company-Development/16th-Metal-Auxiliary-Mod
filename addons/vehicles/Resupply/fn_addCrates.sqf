params ["_unit"]; 

if !(local _unit) exitwith{};

private _cargoArray = [
	"Box_MET_Ammo",
	"Box_MET_Ammo",
    "Box_MET_Airborne",
    "Box_MET_Airborne",
	"Box_MET_FieldAssets",	
	"Box_MET_FieldAssets",	
    "MET_FuelBox_F",
    "MET_FuelBox_F",
    "Box_MET_Mortars",
    "Box_MET_Rockets",
    "Box_MET_Rockets",
    "Box_MET_Engineer",
    "Box_MET_Engineer",
    "Box_MET_Medical",
    "Box_MET_Medical",
    "Box_MET_ARF",
    "Box_MET_ARF",
    "Box_MET_ARC",
    "Box_MET_CommandoGroup",
    "Box_MET_Turrets"
];

{
    [_x,_unit] call ace_cargo_fnc_loadItem
} foreach _cargoArray;