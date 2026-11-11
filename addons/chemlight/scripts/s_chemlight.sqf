// Set a different texture per category here; both currently share the same one.
private _iconNormal = "z\MET\addons\chemlight\tex\chemlightw.paa";
private _iconHi     = "z\MET\addons\chemlight\tex\chemlightw.paa";

// [category id, menu name, menu icon, [[id, name, ammo class, color], ...]]
/*private _categories = [
    ["normal", "Drop Chemlight", _iconNormal, [
        ["red",   "Red",   "Chemlight_Red",      "#990000"],
        ["blue",  "Blue",  "Chemlight_Blue",     "#0000ff"],
        ["green", "Green", "Chemlight_Green",    "#00ff00"],
        ["ir",    "IR",    "ACE_G_Chemlight_IR", "#A020F0"]
    ]],
    ["hi", "Drop Hi Chemlight", _iconHi, [
        ["hired",    "Hi Red",          "ACE_G_Chemlight_HiRed",         "#FF0000"],
        ["hiblue",   "Hi Blue",         "ACE_G_Chemlight_HiBlue",        "#3F00FF"],
        ["higreen",  "Hi Green",        "ACE_G_Chemlight_HiGreen",       "#AAFF00"],
        ["hiorange", "Ultra Hi Orange", "ACE_G_Chemlight_UltraHiOrange", "#FFA500"]
    ]]
];*/
private _categories = [
    ["normal", "Drop Chemlight", _iconNormal, [
        ["blue",    "Blue",     "MET_C7_Lightstick_Blue_Ammo",      "#000099"],
        ["green",   "Green",    "MET_C7_Lightstick_Green_Ammo",     "#009900"],
        ["ir",      "IR",       "MET_C7_Lightstick_IR_Ammo",        "#23293B"],
        ["orange",  "Orange",   "MET_C7_Lightstick_Orange_Ammo",    "#E87C07"],
        ["purple",  "Purple",   "MET_C7_Lightstick_Purple_Ammo",    "#7601CF"],
        ["red",     "Red",      "MET_C7_Lightstick_Red_Ammo",       "#990000"],
        ["teal",    "Teal",     "MET_C7_Lightstick_Teal_Ammo",      "#00D4A2"],
        ["yellow",  "Yellow",   "MET_C7_Lightstick_Yellow_Ammo",    "#F2DB00"],
        ["white",   "White",    "MET_C7_Lightstick_White_Ammo",     "#F0F0F0"]

    ]],
    ["hi", "Drop Hi Chemlight", _iconHi, [
        ["hiblue",    "Hi Blue",     "MET_C9_Lightstick_Blue_Ammo",      "#1E30FF"],
        ["higreen",   "Hi Green",    "MET_C9_Lightstick_Green_Ammo",     "#11E309"],
        ["hiir",      "Hi IR",       "MET_C9_Lightstick_IR_Ammo",        "#A020F0"],
        ["hiorange",  "Hi Orange",   "MET_C9_Lightstick_Orange_Ammo",    "#FF9000"],
        ["hipurple",  "Hi Purple",   "MET_C9_Lightstick_Purple_Ammo",    "#7A00FF"],
        ["hired",     "Hi Red",      "MET_C9_Lightstick_Red_Ammo",       "#D72323"],
        ["hiteal",    "Hi Teal",     "MET_C9_Lightstick_Teal_Ammo",      "#00FFC4"],
        ["hiyellow",  "Hi Yellow",   "MET_C9_Lightstick_Yellow_Ammo",    "#F2EF13"],
        ["hiwhite",   "Hi White",    "MET_C9_Lightstick_White_Ammo",     "#FFFFFF"]
    ]]
];

{
    _x params ["_catId", "_catName", "_icon", "_lights"];
    private _topId = format ["MET_Chemlight_top_%1", _catId];

    private _top = [
        _topId,
        _catName,
        [_icon, "#FFFFFF"],
        {},
        {isNull objectParent _player && {alive _player}}
    ] call ace_interact_menu_fnc_createAction;
    ["CAManBase", 1, ["ACE_SelfActions"], _top, true] call ace_interact_menu_fnc_addActionToClass;

    {
        _x params ["_id", "_name", "_ammo", "_color"];
        private _action = [
            format ["MET_Chemlight_%1", _id],
            _name,
            [_icon, _color],
            {
                params ["_target", "_player", "_ammo"];
                private _pos = _player modelToWorld [0.5, 0.5, 0.8];
                private _chem = createVehicle [_ammo, _pos, [], 0, "CAN_COLLIDE"];
                _chem setPosASL (AGLToASL _pos);
                _chem setVelocity ((velocity _player) vectorAdd ((vectorDir _player) vectorMultiply 1.5));
            },
            {true},
            {},
            _ammo
        ] call ace_interact_menu_fnc_createAction;
        ["CAManBase", 1, ["ACE_SelfActions", _topId], _action, true] call ace_interact_menu_fnc_addActionToClass;
    } forEach _lights;
} forEach _categories;
