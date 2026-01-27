// ==================================================================================================================
// Base Facewear | MET_[NVG/Goggle]_[Descriptor]_[Base/Variant]
// ==================================================================================================================
// Trooper
class JLTS_CloneNVG;
class JLTS_CloneNVG_spec;
class MET_NVG_Macrobinocular_Base : JLTS_CloneNVG
{
	scope = 2;
	JLTS_hasElectronics=1;
	JLTS_hasEMPProtection=0;
	JLTS_friedItem="MET_NVG_Macrobinocular_Fried";
	JLTS_repairTime=20;
	displayName = "[16th] Macrobinoculars";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_CO.paa"
	};
};
class MET_NVG_Macrobinocular_Fried : MET_NVG_Macrobinocular_Base
{
	JLTS_isFried=1;
	displayName = "[16th] (Fried) Macrobinoculars";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_CO.paa"
	};
	scope = 1;
	visionMode[] =
	{
		"Normal"
	};
	modelOptics = "";
};
class MET_NVG_Macrobinocular_Down : JLTS_CloneNVG_spec
{
	scope = 2;
	displayName = "[16th] Macrobinoculars (Down)";
	modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_CO.paa"
	};
	visionMode[] =
	{
		"Normal",
		"NVG"
	};
};
class MET_NVG_Macrobinocular_EOD : JLTS_CloneNVG
{
	scope = 2;
	displayName = "[16th] EOD Macrobinoculars";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_EOD_CO.paa"
	};
};
class MET_NVG_Macrobinocular_MED : JLTS_CloneNVG
{
	scope = 2;
	displayName = "[16th] Medic Macrobinoculars";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_MED_CO.paa"
	};
};

class JLTS_NVG_droid_chip_1;
class MET_NVG_Integrated_Base : JLTS_NVG_droid_chip_1
{
	scope = 2;
	displayName = "[16th] Clone NV Chip";
	modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_CO.paa"
	};
	visionMode[] =
	{
		"Normal",
		"NVG"
	};
};
		
class JLTS_CloneNVGCC;
class MET_NVG_Visor_Base : JLTS_CloneNVGCC
{
	scope = 2;
	displayName = "[16th] Commander Visor";
};
			
class JLTS_CloneNVGRange;	
class MET_NVG_Rangefinder_NCO : JLTS_CloneNVGRange
{
	scope = 2;
	displayName = "[16th] Rangefinder (NCO)";
	modelOptics = "";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Rangefinder_NCO_CO.paa"
	};
};
class MET_NVG_Rangefinder_Officer : JLTS_CloneNVGRange
{
	scope = 2;
	displayName = "[16th] Rangefinder (Officer)";
	modelOptics = "";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Rangefinder_CO.paa"
	};
};
		

// Cold Assault
class SEA_Equipment_GM_Rangefinder;
class MET_NVG_Rangefinder_Cold : SEA_Equipment_GM_Rangefinder
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Rangefinder";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
	modelOptics = "\a3\weapons_f\empty.p3d";
	model = "JLTS_AE_GM\SEA_Equipment_Rangefinder_Off.p3d";
	hiddenSelections[] =
	{
		"Camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Rangefinder_CA_CO.paa"
	};
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 0,1 };
	class ItemInfo
	{
		type = 616;
		uniformModel = "JLTS_AE_GM\SEA_Equipment_Rangefinder_On.p3d";
		modelOff = "JLTS_AE_GM\SEA_Equipment_Rangefinder_Off.p3d";
		mass = 20;
		hiddenSelections[] =
		{
			"camo1"
		};
	};
};


// ARF
class NVGoggles;
class MET_NVG_Integrated_ARF : NVGoggles
{
	scope = 1;
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 2,3 };
	modelOptics = "";
};


// ARC
class MET_NVG_Rangefinder_ARC : JLTS_CloneNVGRange
{
	scope = 2;
	displayName = "[16th] Rangefinder (ARC)";
	modelOptics = "";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Rangefinder_GW_CO.paa"
	};
};


// Misc
class MET_NVG_Rangefinder_H1 : JLTS_CloneNVGRange
{
	scope = 2;
	scopeArsenal = 1;
	displayName = "[16th] Hazmat's Rangefinder (W)";
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 0,1 };
	modelOptics = "";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Rangefinder_GB_CO.paa"
	};
};
class MET_NVG_Rangefinder_H2 : JLTS_CloneNVGRange
{
	scope = 2;
	scopeArsenal = 1;
	displayName = "[16th] Hazmat's Rangefinder (G)";
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 2,3 };
	modelOptics = "";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Rangefinder_GB_CO.paa"
	};
};
class MET_NVG_Rangefinder_H3 : JLTS_CloneNVGRange
{
	scope = 2;
	scopeArsenal = 1;
	displayName = "[16th] Hazmat's Rangefinder (O)";
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 4,5 };
	modelOptics = "";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Rangefinder_GB_CO.paa"
	};
};
class MET_NVG_Rangefinder_H4 : JLTS_CloneNVGRange
{
	scope = 2;
	scopeArsenal = 1;
	displayName = "[16th] Hazmat's Rangefinder (M)";
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 6,7 };
	modelOptics = "";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Rangefinder_GB_CO.paa"
	};
};

class JLTS_NVG_droid_chip_2;
class MET_NVG_Integrated_WH : JLTS_NVG_droid_chip_2
{
	scope = 2;
	displayName = "[16th] Clone Thermal Chip (White Hot)";
	modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_CO.paa"
	};
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 0,1 };
};
class MET_NVG_Integrated_GH : JLTS_NVG_droid_chip_2
{
	scope = 2;
	displayName = "[16th] Clone Thermal Chip (Green Hot)";
	modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_CO.paa"
	};
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 2,3 };
};
class MET_NVG_Integrated_RH : JLTS_NVG_droid_chip_2
{
	scope = 2;
	displayName = "[16th] Clone Thermal Chip (Red Hot)";
	modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_CO.paa"
	};
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 4,5 };
};
class MET_NVG_Integrated_MU : JLTS_NVG_droid_chip_2
{
	scope = 2;
	displayName = "[16th] Clone Thermal Chip (Multi)";
	modelOptics = "\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Facewear\Textures\Base\MET_NVG_Macrobinocular_CO.paa"
	};
	visionMode[] =
	{
		"Normal",
		"NVG",
		"TI"
	};
	thermalMode[] = { 6,7 };
};