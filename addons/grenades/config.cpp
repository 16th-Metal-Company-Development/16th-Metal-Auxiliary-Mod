#include "BIS_AddonInfo.hpp"
class cfgPatches
{
	class MetAux_Patch_grenades
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]={};
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
			"MetAux_Weaps_Thermal_Detonator_ThrowMuzzle",
			"MetAux_Weaps_Thermal_Imploder_ThrowMuzzle",
			"MetAux_Weaps_Thermal_Impacter_ThrowMuzzle",
			"MetAux_Weaps_Ctype_ThrowMuzzle",
			"MetAux_Weaps_Flashnade_ThrowMuzzle",
			"MetAux_Weaps_smoke_white_ThrowMuzzle",
			"MetAux_Weaps_smoke_purple_ThrowMuzzle",
			"MetAux_Weaps_smoke_yellow_ThrowMuzzle",
			"MetAux_Weaps_smoke_red_ThrowMuzzle",
			"MetAux_Weaps_smoke_green_ThrowMuzzle",
			"MetAux_Weaps_smoke_blue_ThrowMuzzle",
			"MetAux_Weaps_smoke_orange_ThrowMuzzle",
			"MetAux_Weaps_smoke_turquoise_ThrowMuzzle",
			"MetAux_Weaps_smoke_teal_ThrowMuzzle",
			"MetAux_Weaps_luma_Green_ThrowMuzzle",
			"MetAux_Weaps_luma_Red_ThrowMuzzle",
			"MetAux_Weaps_luma_Blue_ThrowMuzzle",
			"MetAux_Weaps_luma_Yellow_ThrowMuzzle"
			//"MetAux_Weaps_smoke_mash_ThrowMuzzle"
		};
		class MetAux_Weaps_Thermal_Detonator_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Weapons_Mags_Thermal_Detonator"
			};
		};
		class MetAux_Weaps_Thermal_Imploder_ThrowMuzzle: ThrowMuzzle
		{	
			magazines[]=
			{
				"Met_Weapons_Mags_Thermal_Imploder"
			};
		};
		class MetAux_Weaps_Thermal_Impacter_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"Met_Weapons_Mags_Thermal_Impacter"
			};
		};
		class MetAux_Weaps_Ctype_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"Met_Weapons_Mags_Ctype"
			};
		};
		class MetAux_Weaps_Flashnade_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"Met_Weapons_Mags_flashnade"
			};
		};
		class MetAux_Weaps_smoke_white_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_White"
			};
		};
		class MetAux_Weaps_smoke_purple_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Purple"
			};
		};
		class MetAux_Weaps_smoke_yellow_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Yellow"
			};
		};
		class MetAux_Weaps_smoke_red_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Red"
			};
		};
		class MetAux_Weaps_smoke_green_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Green"
			};
		};
		class MetAux_Weaps_smoke_blue_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Blue"
			};
		};
		class MetAux_Weaps_smoke_orange_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Orange"
			};
		};
		class MetAux_Weaps_smoke_turquoise_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Turquoise"
			};
		};
		class MetAux_Weaps_smoke_teal_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Smoke_Teal"
			};
		};
		class MetAux_Weaps_luma_Green_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_LumaGreen"
			};
		};
		class MetAux_Weaps_luma_Red_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_LumaRed"
			};
		};
		class MetAux_Weaps_luma_Blue_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_LumaBlue"
			};
		};
		class MetAux_Weaps_luma_Yellow_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_LumaYellow"
			};
		};
		/*class MetAux_Weaps_smoke_mash_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MetAux_Weapons_Mags_Smoke_MASH"
			};
		};*/
	};
};
