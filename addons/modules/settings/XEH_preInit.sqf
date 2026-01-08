// Global WD Settings
[
    "MET_WaveDefense_InfantryList", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    ["Infantry Units", "Units Used to build selection pool for generated Groups"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["16th Metal Aux Mod", "Wave Defense Module - Global"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    '[
		["TAS_Droid_B1_E5", 1.0],
		["TAS_Droid_B1_AR", 0.5],
		["TAS_Droid_B1_AT", 0.5],
		["TAS_Droid_B1_Sniper", 0.25],
		["ls_droid_bx", 0.12]
	]',
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "MET_WaveDefense_ArmorList", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    ["ArmorUnits", "Units Used for Armor selection pool"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["16th Metal Aux Mod", "Wave Defense Module - Global"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    '[
		["3AS_Combat_Speeder_F", 1.0],
		["3AS_PAC_F", 0.5],
		["3AS_AAT", 0.5],
		["3AS_Advanced_DSD", 0.25]
	]',
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "MET_WaveDefense_AirList", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    ["Air Units", "Units Used for Air selection pool"], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["16th Metal Aux Mod", "Wave Defense Module - Global"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    '[
		["3AS_CIS_Vulture_F", 1.0],
		["3AS_HMP_Gunship", 0.5],
		["3AS_MAF_Gunship_F", 0.125]
	]',
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "MET_WaveDefense_MaximumConcurrentUnits", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    ["Maximum Units", "Maximum Amount of Units that the Module can have active at one time. If Exceeded or Met, Spawns will be held until a sufficient amount of existing units die."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["16th Metal Aux Mod", "Wave Defense Module - Global"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    "500",
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

[
    "MET_WaveDefense_DelayBetweenGroups", // Internal setting name, should always contain a tag! This will be the global variable which takes the value of the setting.
    "EDITBOX", // setting type
    ["Delay Between Groups", "Delay in seconds between group spawns."], // Pretty name shown inside the ingame settings menu. Can be stringtable entry.
    ["16th Metal Aux Mod", "Wave Defense Module - Global"], // Pretty name of the category where the setting can be found. Can be stringtable entry.
    "0",
    true // "_isGlobal" flag. Set this to true to always have this setting synchronized between all clients in multiplayer
] call CBA_fnc_addSetting;

// Zeus-Only WD Settings
/* Dunno Yet */