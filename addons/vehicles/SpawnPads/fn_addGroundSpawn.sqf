/*
	Author: Director

	Description:
		Adds the 16th Ground Spawn Menu and sets it to spawn at a specific location

	Parameter(s):
		0: OBJECT - The object to act as a terminal which will have the menu added to it
		1: OBJECT - The object to act as a landing pad where objects will be spawned

	Returns:
		nil

	Example:
		[terminal, pad] call MET_fnc_addGroundSpawn;
*/

params ["_terminal", "_pad"];  
private _vehicles = [["==Transports==",""], 
					 ["16th LAAT/C Mk I","MET_LAATC"], 
					 ["16th LAAT/C Mk II", "MET_LAATCMK2"],  
					 ["==MK I PAYLOADS==",""], 
					 ["==MK II PAYLOADS==",""], 
					 ["AT-TE","MET_16th_ATTE_Base"], 
					 ["TX-130","MET_Tx130_Base_V1"], 
					 ["TX-130 GL","MET_Tx130_GL_v1"], 
					 ["Super TX-130","MET_Tx130_Super_v1"], 
					 ["BARC Speeder","3AS_Barc"],  
					 ["BARC (With Sidecar)","3AS_BarcSideCar"],  
					 ["UT-AT","3as_UTAT"],  
					 ["AT-JT", "3AS_ATJT_Base"], 
					 ["AT-AP","3as_ATAP_base"], 
					 ["AV-7","3as_AV7"], 
					 ["RTT (Tracked)","3AS_RTT"], 
					 ["RTT (Wheeled)","3AS_RTT_Wheeled"], 
					 ["Juggernaut","3as_Jug"], 
					 ["==CUSTOM PAYLOADS==",""]]; 
					
{  
	_caption = _x select 0;  
	_vehicle = _x select 1;  
	[_terminal, _pad, _caption, _vehicle] call MET_fnc_addSpawnEntry;  
} forEach _vehicles;  