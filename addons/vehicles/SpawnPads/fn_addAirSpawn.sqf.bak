/*
	Author: Director

	Description:
		Adds the 16th Air Spawn Menu and sets it to spawn at a specific location

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a landing pad where objects will be spawned

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_addAirSpawn;
*/

params ["_terminal", "_pad"];  
private _vehicles = [["==STOCK==",""], 
					 		["LAAT Mk I","MET_LAAT_MK1"], 
					 		["LAAT Mk II","MET_LAAT_Mk2"], 
					 		["LAAT/Lamps","MET_LAAT_MK2_Lamps"],  
					 		["ARC-170","MET_ARC_170"], 
					 		["Z-95","MET_Z95_Base"], 
					 		["V-19","MET_V19_V1"], 
					 		["Y-Wing","MET_Ywing_V1"], 
					 		["V-Wing","MET_V_wing"], 
					 		["==BASE==",""], 
					 		["LAAT Mk I","3as_LAAT_MK1"], 
					 		["LAAT Mk II","3as_LAAT_MK2"], 
					 		["LAAT/DAP","442_laat_2"], 
					 		["LAAT/I","ls_heli_laatle_transportGunship"], 
							["ARC-170","3as_arc_170_red"], 
					 		["Z-95","3AS_Z95_Republic"], 
					 		["V-19","3as_V19_base"], 
							["Y-Wing","3AS_BTLB_Bomber"], 
					 		["V-Wing","3as_Vwing_base"]]; 
{  
   _caption = _x select 0;  
   _vehicle = _x select 1;  
   [_terminal, _pad, _caption, _vehicle] call MET_fnc_addSpawnEntry;  
} forEach _vehicles;  