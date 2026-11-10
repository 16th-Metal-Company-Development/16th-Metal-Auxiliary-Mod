class cfgPatches
{
	class MetAux_Patch_c7_lightstick
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]={};
		magazines[]=
		{
			"MET_C7_Lightstick_White_Mag",
			"MET_C7_Lightstick_Blue_Mag",
			"MET_C7_Lightstick_Green_Mag",
			"MET_C7_Lightstick_IR_Mag",
			"MET_C7_Lightstick_Metal_Mag",
			"MET_C7_Lightstick_Orange_Mag",
			"MET_C7_Lightstick_Purple_Mag",
			"MET_C7_Lightstick_Red_Mag",
			"MET_C7_Lightstick_Teal_Mag",
			"MET_C7_Lightstick_Turquoise_Mag",
			"MET_C7_Lightstick_Yellow_Mag"
		};
		ammo[]=
		{
			"MET_C7_Lightstick_White_Ammo",
			"MET_C7_Lightstick_Blue_Ammo",
			"MET_C7_Lightstick_Green_Ammo",
			"MET_C7_Lightstick_IR_Ammo",
			"MET_C7_Lightstick_Metal_Ammo",
			"MET_C7_Lightstick_Orange_Ammo",
			"MET_C7_Lightstick_Purple_Ammo",
			"MET_C7_Lightstick_Red_Ammo",
			"MET_C7_Lightstick_Teal_Ammo",
			"MET_C7_Lightstick_Turquoise_Ammo",
			"MET_C7_Lightstick_Yellow_Ammo"
		};
	};
};
class CfgWeapons
{
	class Default;
	class GrenadeLauncher: Default
	{
		class ThrowMuzzle;
	};
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"MET_C7_Lightstick_ThrowMuzzle",
			"MET_C7_Lightstick_Blue_ThrowMuzzle",
			"MET_C7_Lightstick_Green_ThrowMuzzle",
			"MET_C7_Lightstick_IR_ThrowMuzzle",
			"MET_C7_Lightstick_Metal_ThrowMuzzle",
			"MET_C7_Lightstick_Orange_ThrowMuzzle",
			"MET_C7_Lightstick_Purple_ThrowMuzzle",
			"MET_C7_Lightstick_Red_ThrowMuzzle",
			"MET_C7_Lightstick_Teal_ThrowMuzzle",
			"MET_C7_Lightstick_Turquoise_ThrowMuzzle",
			"MET_C7_Lightstick_Yellow_ThrowMuzzle",
		};
		class MET_C7_Lightstick_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_White_Mag"
			};
		};
		class MET_C7_Lightstick_Blue_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Blue_Mag"
			};
		};
		class MET_C7_Lightstick_Green_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Green_Mag"
			};
		};
		class MET_C7_Lightstick_IR_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_IR_Mag"
			};
		};
		class MET_C7_Lightstick_Metal_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Metal_Mag"
			};
		};
		class MET_C7_Lightstick_Orange_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Orange_Mag"
			};
		};
		class MET_C7_Lightstick_Purple_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Purple_Mag"
			};
		};
		class MET_C7_Lightstick_Red_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Red_Mag"
			};
		};
		class MET_C7_Lightstick_Teal_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Teal_Mag"
			};
		};
		class MET_C7_Lightstick_Turquoise_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Turquoise_Mag"
			};
		};
		class MET_C7_Lightstick_Yellow_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C7_Lightstick_Yellow_Mag"
			};
		};
	};
};
class CfgMagazines
{
	class ACE_Chemlight_White;
	class MET_C7_Lightstick_White_Mag: ACE_Chemlight_White
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[16th] C7 Lightstick (White)";
		displayNameShort="C7 White";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_white_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_white_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_White_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_White";
		ammo = "MET_C7_Lightstick_White_Ammo";
		author = "Metal Company Aux Team";
		descriptionShort = "C7 Lightstick - White<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_white";
	};
	class MET_C7_Lightstick_Blue_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Blue)";
		displayNameShort="C7 Blue";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_blue_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_blue_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Blue_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Blue";
		ammo = "MET_C7_Lightstick_Blue_Ammo";
		descriptionShort = "C7 Lightstick - Blue<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_blue";
	};
	class MET_C7_Lightstick_Green_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Green)";
		displayNameShort="C7 Green";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_green_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_green_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Green_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Green";
		ammo = "MET_C7_Lightstick_Green_Ammo";
		descriptionShort = "C7 Lightstick - Green<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_green";
	};
	class MET_C7_Lightstick_IR_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (IR)";
		displayNameShort="C7 IR";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_c7_ir_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_c7_ir_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_IR_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_IR";
		ammo = "MET_C7_Lightstick_IR_Ammo";
		descriptionShort = "C7 Lightstick - IR<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power - IR Light";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_ir";
	};
	class MET_C7_Lightstick_Metal_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Metal)";
		displayNameShort="C7 Metal";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_metal_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_metal_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Metal_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Metal";
		ammo = "MET_C7_Lightstick_Metal_Ammo";
		descriptionShort = "C7 Lightstick - Metal<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_metal";
	};
	class MET_C7_Lightstick_Orange_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Orange)";
		displayNameShort="C7 Orange";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_orange_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_orange_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Orange_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Orange";
		ammo = "MET_C7_Lightstick_Orange_Ammo";
		descriptionShort = "C7 Lightstick - Orange<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_orange";
	};
	class MET_C7_Lightstick_Purple_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Purple)";
		displayNameShort="C7 Purple";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_purple_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_purple_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Purple_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Purple";
		ammo = "MET_C7_Lightstick_Purple_Ammo";
		descriptionShort = "C7 Lightstick - Purple<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_purple";
	};
	class MET_C7_Lightstick_Red_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Red)";
		displayNameShort="C7 Red";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_red_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_red_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Red_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Red";
		ammo = "MET_C7_Lightstick_Red_Ammo";
		descriptionShort = "C7 Lightstick - Red<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_red";
	};
	class MET_C7_Lightstick_Teal_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Teal)";
		displayNameShort="C7 Teal";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_teal_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_teal_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Teal_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Teal";
		ammo = "MET_C7_Lightstick_Teal_Ammo";
		descriptionShort = "C7 Lightstick - Teal<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_teal";
	};
	class MET_C7_Lightstick_Turquoise_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Turquoise)";
		displayNameShort="C7 Turquoise";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_turquoise_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_turquoise_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Turquoise_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Turquoise";
		ammo = "MET_C7_Lightstick_Turquoise_Ammo";
		descriptionShort = "C7 Lightstick - Turquoise<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_turquoise";
	};
	class MET_C7_Lightstick_Yellow_Mag: MET_C7_Lightstick_White_Mag
	{
		displayName = "[16th] C7 Lightstick (Yellow)";
		displayNameShort="C7 Yellow";
		picture = "\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_yellow_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\C7_lightstick\data\ui\icon_C7_yellow_unlit_ca.paa";
		ACE_Attachable = "MET_C7_Lightstick_Yellow_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Yellow";
		ammo = "MET_C7_Lightstick_Yellow_Ammo";
		descriptionShort = "C7 Lightstick - Yellow<br />Used by the GAR For Marking, Emergencies, and Signaling.<br />GAR Issue - Low Power";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_unlit_yellow";
	};
};
class CfgLights
{
	
	class C7_ChemLight_Green {
        ambient[] = {0,0,0,0};
        brightness = 1;
        color[] = {0.06667,0.89020,0.03529,1};
        diffuse[] = {0.06667,0.89020,0.03529};
        drawLight = 0;
        intensity = 4500;
        position[] = {0,0.005,0};

        class Attenuation
		{
			constant = 0;
			linear = 0;
			quadratic = 200;
			hardLimitStart = 1.75;
			hardLimitEnd = 3;
		};
    };

    class C7_ChemLight_Blue: C7_ChemLight_Green {
        color[] = {0.11765,0.18824,1,1};
        diffuse[] = {0.11765,0.18824,1};
    };

    class C7_ChemLight_Orange: C7_ChemLight_Green {
        color[] = {1,0.56471,0,1};
        diffuse[] = {1,0.56471,0};
    };

    class C7_ChemLight_Purple: C7_ChemLight_Green {
        color[] = {0.47843,0,1,1};
        diffuse[] = {0.47843,0,1};
    };

    class C7_ChemLight_Red: C7_ChemLight_Green {
        color[] = {0.84314,0.13725,0.13725,1};
        diffuse[] = {0.84314,0.13725,0.13725};
    };

    class C7_ChemLight_Teal: C7_ChemLight_Green {
        color[] = {0,0.76863,1,1};
        diffuse[] = {0,0.76863,1};
    };
	
    class C7_ChemLight_Turquoise: C7_ChemLight_Green {
        color[] = {0,0.97647,1,1};
        diffuse[] = {0,0.97647,1};
    };

    class C7_ChemLight_Yellow: C7_ChemLight_Green {
        color[] = {0.94902,0.93725,0.09412,1};
        diffuse[] = {0.94902,0.93725,0.09412};
    };

	class C7_ChemLight_White: C7_ChemLight_Green 
	{
        color[] = {1,1,1,1};
        diffuse[] = {1,1,1};
    };

    class C7_ChemLight_Metal: C7_ChemLight_Green 
	{
        color[] = {0.1411764705882353,0.1647058823529412,0.2352941176470588,1};
        diffuse[] = {0.1411764705882353,0.1647058823529412,0.2352941176470588};
    };

    class C7_ChemLight_IR: C7_ChemLight_Green 
	{
		irLight = 1;
        intensity = 2000;
    };
};
class MET_C7_Lightstick_White_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_White";
	};
};
class MET_C7_Lightstick_Blue_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Blue";
	};
};
class MET_C7_Lightstick_Green_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Green";
	};
};
class MET_C7_Lightstick_Orange_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Orange";
	};
};
class MET_C7_Lightstick_Purple_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Purple";
	};
};
class MET_C7_Lightstick_Red_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Red";
	};
};
class MET_C7_Lightstick_Teal_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Teal";
	};
};
class MET_C7_Lightstick_Turquoise_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Turquoise";
	};
};
class MET_C7_Lightstick_Yellow_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Yellow";
	};
};
class MET_C7_Lightstick_Metal_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_Metal";
	};
};
class MET_C7_Lightstick_IR_Effect
{
	class Light
	{
		simulation = "light";
		type = "C7_ChemLight_IR";
	};
};
class CfgAmmo
{
	class Chemlight_base;
	class MET_C7_Lightstick_White_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_White_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_white";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Blue_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Blue_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_blue";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Green_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Green_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_green";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_IR_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_IR_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_ir";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Metal_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Metal_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_metal";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Orange_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Orange_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_orange";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Purple_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Purple_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_purple";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Red_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Red_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_red";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Teal_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Teal_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_teal";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Turquoise_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Turquoise_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_turquoise";
		timeToLive = 28800;
	};
	class MET_C7_Lightstick_Yellow_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C7_Lightstick_Yellow_Effect";
		model = "z\MET\addons\grenades\utility\C7_lightstick\model\C7_lit_yellow";
		timeToLive = 28800;
	};
};