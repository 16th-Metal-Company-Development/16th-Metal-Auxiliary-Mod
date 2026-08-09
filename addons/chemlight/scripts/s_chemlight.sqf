private _MET_Chemlight_top = [
    "MET_Chemlight_top",
    "Drop Chemlight",
    ["z\MET\addons\chemlight\tex\chemlightw.paa", "#FFFFFF"],
    {},
    {isNull objectParent _player},
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _MET_Chemlight_top ] call ace_interact_menu_fnc_addActionToObject; 
/*
private _MET_Chemlight_red = [
    "MET_Chemlight_red",
    "Red",
    ["z\MET\addons\chemlight\tex\chemlightw.paa", "#990000"],
    {_player execVM "z\MET\addons\chemlight\scripts\Chemlight_red.sqf"},
    {true}, // This is the condition
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","MET_Chemlight_top"], _MET_Chemlight_red ] call ace_interact_menu_fnc_addActionToObject; 

private _MET_Chemlight_blue = [
    "MET_Chemlight_blue",
    "Blue",
    ["z\MET\addons\Chemlight\tex\chemlightw.paa", "#0000ff"],
    {_player execVM "z\MET\addons\Chemlight\scripts\Chemlight_blue.sqf"},
    {true}, // This is the condition
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","MET_Chemlight_top"], _MET_Chemlight_blue ] call ace_interact_menu_fnc_addActionToObject; 

private _MET_Chemlight_green = [
    "MET_Chemlight_green",
    "Green",
    ["z\MET\addons\Chemlight\tex\chemlightw.paa", "#00ff00"],
    {_player execVM "z\MET\addons\Chemlight\scripts\Chemlight_green.sqf"},
    {true}, // This is the condition
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","MET_Chemlight_top"], _MET_Chemlight_green ] call ace_interact_menu_fnc_addActionToObject; 

private _MET_Chemlight_ir = [
    "MET_Chemlight_ir",
    "IR",
    ["z\MET\addons\Chemlight\tex\chemlightw.paa", "#A020F0"],
    {_player execVM "z\MET\addons\Chemlight\scripts\Chemlight_ir.sqf"},
    {true}, // This is the condition
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","MET_Chemlight_top"], _MET_Chemlight_ir ] call ace_interact_menu_fnc_addActionToObject; 

private _MET_Chemlight_hired = [
    "MET_Chemlight_hired",
    "Hi Red",
    ["z\MET\addons\Chemlight\tex\chemlightw.paa", "#FF0000"],
    {_player execVM "z\MET\addons\Chemlight\scripts\Chemlight_hired.sqf"},
    {true}, // This is the condition
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","MET_Chemlight_top"], _MET_Chemlight_hired ] call ace_interact_menu_fnc_addActionToObject; 

private _MET_Chemlight_hiblue = [
    "MET_Chemlight_hiblue",
    "Hi Blue",
    ["z\MET\addons\Chemlight\tex\chemlightw.paa", "#3F00FF"],
    {_player execVM "z\MET\addons\Chemlight\scripts\Chemlight_hiblue.sqf"},
    {true}, // This is the condition
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","MET_Chemlight_top"], _MET_Chemlight_hiblue ] call ace_interact_menu_fnc_addActionToObject; 

private _MET_Chemlight_higreen = [
    "MET_Chemlight_higreen",
    "Hi Green",
    ["z\MET\addons\Chemlight\tex\chemlightw.paa", "#AAFF00"],
    {_player execVM "z\MET\addons\Chemlight\scripts\Chemlight_higreen.sqf"},
    {true}, // This is the condition
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","MET_Chemlight_top"], _MET_Chemlight_higreen ] call ace_interact_menu_fnc_addActionToObject; 

private _MET_Chemlight_hiorange = [
    "MET_Chemlight_hiorange",
    "Ultra Hi Orange",
    ["\Chemlight\tex\chemlightw.paa", "#FFA500"],
    {_player execVM "z\MET\addons\Chemlight\scripts\Chemlight_hiorange.sqf"},
    {true}, // This is the condition
    nil,
    nil,
    nil,
    8 // This is the distance
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","MET_Chemlight_top"], _MET_Chemlight_hiorange ] call ace_interact_menu_fnc_addActionToObject;*/