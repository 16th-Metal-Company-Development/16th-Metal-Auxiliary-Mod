class cfgPatches
{
	class MetAux_Patch_c1_lightstick
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]={};
		magazines[]=
		{
			"MET_C1_Lightstick_White_Mag",
			"MET_C1_Lightstick_Blue_Mag",
			"MET_C1_Lightstick_Green_Mag",
			"MET_C1_Lightstick_Orange_Mag",
			"MET_C1_Lightstick_Purple_Mag",
			"MET_C1_Lightstick_Red_Mag",
			"MET_C1_Lightstick_Teal_Mag",
			"MET_C1_Lightstick_Turquoise_Mag",
			"MET_C1_Lightstick_Yellow_Mag"
		};
		ammo[]=
		{
			"MET_C1_Lightstick_White_Ammo",
			"MET_C1_Lightstick_Blue_Ammo",
			"MET_C1_Lightstick_Green_Ammo",
			"MET_C1_Lightstick_Orange_Ammo",
			"MET_C1_Lightstick_Purple_Ammo",
			"MET_C1_Lightstick_Red_Ammo",
			"MET_C1_Lightstick_Teal_Ammo",
			"MET_C1_Lightstick_Turquoise_Ammo",
			"MET_C1_Lightstick_Yellow_Ammo"
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
			"MET_C1_Lightstick_ThrowMuzzle",
			"MET_C1_Lightstick_Blue_ThrowMuzzle",
			"MET_C1_Lightstick_Green_ThrowMuzzle",
			"MET_C1_Lightstick_Orange_ThrowMuzzle",
			"MET_C1_Lightstick_Purple_ThrowMuzzle",
			"MET_C1_Lightstick_Red_ThrowMuzzle",
			"MET_C1_Lightstick_Teal_ThrowMuzzle",
			"MET_C1_Lightstick_Turquoise_ThrowMuzzle",
			"MET_C1_Lightstick_Yellow_ThrowMuzzle",
		};
		class MET_C1_Lightstick_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_White_Mag"
			};
		};
		class MET_C1_Lightstick_Blue_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_Blue_Mag"
			};
		};
		class MET_C1_Lightstick_Green_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_Green_Mag"
			};
		};
		class MET_C1_Lightstick_Orange_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_Orange_Mag"
			};
		};
		class MET_C1_Lightstick_Purple_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_Purple_Mag"
			};
		};
		class MET_C1_Lightstick_Red_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_Red_Mag"
			};
		};
		class MET_C1_Lightstick_Teal_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_Teal_Mag"
			};
		};
		class MET_C1_Lightstick_Turquoise_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_Turquoise_Mag"
			};
		};
		class MET_C1_Lightstick_Yellow_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_C1_Lightstick_Yellow_Mag"
			};
		};
	};
};
class CfgMagazines
{
	class ACE_Chemlight_White;
	class MET_C1_Lightstick_White_Mag: ACE_Chemlight_White
	{
		scope = 2;
		scopeArsenal = 1;
		displayName = "[16th] C1 Lightstick (White)";
		displayNameShort="C1 White";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_white_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\ui_small_icon_c1_white_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_White_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_White";
		ammo = "MET_C1_Lightstick_White_Ammo";
		author = "Metal Company Aux Team";
		descriptionShort = "C1 Lightstick - White<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_white";
	};
	class MET_C1_Lightstick_Blue_Mag: MET_C1_Lightstick_White_Mag
	{
		displayName = "[16th] C1 Lightstick (Blue)";
		displayNameShort="C1 Blue";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_blue_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_blue_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_Blue_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Blue";
		ammo = "MET_C1_Lightstick_Blue_Ammo";
		descriptionShort = "C1 Lightstick - Blue<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_blue";
	};
	class MET_C1_Lightstick_Green_Mag: MET_C1_Lightstick_White_Mag
	{
		displayName = "[16th] C1 Lightstick (Green)";
		displayNameShort="C1 Green";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_green_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_green_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_Green_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Green";
		ammo = "MET_C1_Lightstick_Green_Ammo";
		descriptionShort = "C1 Lightstick - Green<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_green";
	};
	class MET_C1_Lightstick_Orange_Mag: MET_C1_Lightstick_White_Mag
	{
		displayName = "[16th] C1 Lightstick (Orange)";
		displayNameShort="C1 Orange";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_orange_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_orange_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_Orange_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Orange";
		ammo = "MET_C1_Lightstick_Orange_Ammo";
		descriptionShort = "C1 Lightstick - Orange<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_orange";
	};
	class MET_C1_Lightstick_Purple_Mag: MET_C1_Lightstick_White_Mag
	{
		displayName = "[16th] C1 Lightstick (Purple)";
		displayNameShort="C1 Purple";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_purple_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_purple_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_Purple_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Purple";
		ammo = "MET_C1_Lightstick_Purple_Ammo";
		descriptionShort = "C1 Lightstick - Purple<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_purple";
	};
	class MET_C1_Lightstick_Red_Mag: MET_C1_Lightstick_White_Mag
	{
		displayName = "[16th] C1 Lightstick (Red)";
		displayNameShort="C1 Red";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_red_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_red_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_Red_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Red";
		ammo = "MET_C1_Lightstick_Red_Ammo";
		descriptionShort = "C1 Lightstick - Red<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_red";
	};
	class MET_C1_Lightstick_Teal_Mag: MET_C1_Lightstick_White_Mag
	{
		displayName = "[16th] C1 Lightstick (Teal)";
		displayNameShort="C1 Teal";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_teal_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_teal_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_Teal_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Teal";
		ammo = "MET_C1_Lightstick_Teal_Ammo";
		descriptionShort = "C1 Lightstick - Teal<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_teal";
	};
	class MET_C1_Lightstick_Turquoise_Mag: MET_C1_Lightstick_White_Mag
	{
		displayName = "[16th] C1 Lightstick (Turquoise)";
		displayNameShort="C1 Turquoise";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_turquoise_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_turquoise_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_Turquoise_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Turquoise";
		ammo = "MET_C1_Lightstick_Turquoise_Ammo";
		descriptionShort = "C1 Lightstick - Turquoise<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_turquoise";
	};
	class MET_C1_Lightstick_Yellow_Mag: MET_C1_Lightstick_White_Mag
	{
		displayName = "[16th] C1 Lightstick (Yellow)";
		displayNameShort="C1 Yellow";
		picture = "\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_yellow_unlit_ca.paa";
		uipicture="\z\MET\addons\grenades\utility\c1_lightstick\data\ui\icon_c1_yellow_unlit_ca.paa";
		ACE_Attachable = "MET_C1_Lightstick_Yellow_Ammo";
		ACE_Chemlight_Shield = "ACE_Chemlight_Shield_Yellow";
		ammo = "MET_C1_Lightstick_Yellow_Ammo";
		descriptionShort = "C1 Lightstick - Yellow<br />Used by Civilians for emergencies, caving, outdoor activities, and festivities.<br />Non-GAR Issue";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_unlit_yellow";
	};
};
class CfgLights
{
	class C1_ChemLight_Green {
        ambient[] = {0,0,0,0};
        brightness = 1;
        color[] = {0.06667,0.89020,0.03529,1};
        diffuse[] = {0.06667,0.89020,0.03529};
        drawLight = 0;
        intensity = 3500;
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

    class C1_ChemLight_Blue: C1_ChemLight_Green {
        color[] = {0.11765,0.18824,1,1};
        diffuse[] = {0.11765,0.18824,1};
    };

    class C1_ChemLight_Orange: C1_ChemLight_Green {
        color[] = {1,0.56471,0,1};
        diffuse[] = {1,0.56471,0};
    };

    class C1_ChemLight_Purple: C1_ChemLight_Green {
        color[] = {0.47843,0,1,1};
        diffuse[] = {0.47843,0,1};
    };

    class C1_ChemLight_Red: C1_ChemLight_Green {
        color[] = {0.84314,0.13725,0.13725,1};
        diffuse[] = {0.84314,0.13725,0.13725};
    };

    class C1_ChemLight_Teal: C1_ChemLight_Green {
        color[] = {0,0.76863,1,1};
        diffuse[] = {0,0.76863,1};
    };
	
    class C1_ChemLight_Turquoise: C1_ChemLight_Green {
        color[] = {0,0.97647,1,1};
        diffuse[] = {0,0.97647,1};
    };

    class C1_ChemLight_Yellow: C1_ChemLight_Green {
        color[] = {0.94902,0.93725,0.09412,1};
        diffuse[] = {0.94902,0.93725,0.09412};
    };

	class C1_ChemLight_White: C1_ChemLight_Green 
	{
        color[] = {1,1,1,1};
        diffuse[] = {1,1,1};
    };
};
class MET_C1_Lightstick_White_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_White";
	};
};
class MET_C1_Lightstick_Blue_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_Blue";
	};
};
class MET_C1_Lightstick_Green_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_Green";
	};
};
class MET_C1_Lightstick_Orange_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_Orange";
	};
};
class MET_C1_Lightstick_Purple_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_Purple";
	};
};
class MET_C1_Lightstick_Red_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_Red";
	};
};
class MET_C1_Lightstick_Teal_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_Teal";
	};
};
class MET_C1_Lightstick_Turquoise_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_Turquoise";
	};
};
class MET_C1_Lightstick_Yellow_Effect
{
	class Light
	{
		simulation = "light";
		type = "C1_ChemLight_Yellow";
	};
};
class CfgAmmo
{
	class Chemlight_base;
	class MET_C1_Lightstick_White_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_White_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_white";
		timeToLive = 28800;
	};
	class MET_C1_Lightstick_Blue_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_Blue_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_blue";
		timeToLive = 28800;
	};
	class MET_C1_Lightstick_Green_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_Green_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_green";
		timeToLive = 28800;
	};
	class MET_C1_Lightstick_Orange_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_Orange_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_orange";
		timeToLive = 28800;
	};
	class MET_C1_Lightstick_Purple_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_Purple_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_purple";
		timeToLive = 28800;
	};
	class MET_C1_Lightstick_Red_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_Red_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_red";
		timeToLive = 28800;
	};
	class MET_C1_Lightstick_Teal_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_Teal_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_teal";
		timeToLive = 28800;
	};
	class MET_C1_Lightstick_Turquoise_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_Turquoise_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_turquoise";
		timeToLive = 28800;
	};
	class MET_C1_Lightstick_Yellow_Ammo: Chemlight_base
	{
		effectsSmoke = "MET_C1_Lightstick_Yellow_Effect";
		model = "z\MET\addons\grenades\utility\c1_lightstick\model\c1_lit_yellow";
		timeToLive = 28800;
	};
};