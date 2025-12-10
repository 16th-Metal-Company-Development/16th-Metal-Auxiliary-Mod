// ==================================================================================================================
// Base Helmets | MET_Helmet_[Branch]_[Base/Person/Rank]
// ==================================================================================================================
// Trooper
class JLTS_CloneHelmetP2;
class MET_Helmet_Trooper_Base : JLTS_CloneHelmetP2
{
	scope = 2;
	displayName = "[16th] Trooper Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_Trooper_Helmet_CO.paa"
	};
	model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
	ace_hearing_protection = 0.94999999;
	ace_hearing_lowerVolume = 0.1;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		allowedSlots[] = { 801,901,701,605 };
		modelSides[] = { 6 };
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
};
class MET_Helmet_Trooper_Cadet : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Cadet Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_Cadet_Helmet.paa"
	};
};
class MET_Helmet_Trooper_Veteran : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Veteran Trooper Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_VET_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_SPC : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Specialist Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_SPC_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_NCO : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] NCO Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_NCO_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_SNCO : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] SNCO Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_SNCO_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Officer : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Officer Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_OFF_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Medic : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Medic Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_MED_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_EOD : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] EOD Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_EOD_Helmet_CO.paa"
	};
};

// Cold Assault
class SEA_HELMET_GM_Base;
class SEA_HELMET_GM_IllumBase;
class MET_Helmet_Cold_Base : SEA_HELMET_GM_IllumBase
{
	author = "Hazmat";
	model = "JLTS_AE_GM\SEA_Helmet_GM_Base.p3d";
	displayName = "[16th] Cold Assault Trooper Helmet";
	scope = 2;
	hiddenSelections[] =
	{
		"Camo1",
		"Visor"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_CA_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_CA_Helmet_Glow_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	ace_hearing_protection = 0.94999999;
	ace_hearing_lowerVolume = 0.1;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "JLTS_AE_GM\SEA_Helmet_GM_Base.p3d";
		allowedSlots[] = { 801,901,701,605 };
		modelSides[] = { 6 };
		hiddenSelections[] =
		{
			"Camo1",
			"Visor"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
};
class MET_Helmet_Cold_NCO : SEA_HELMET_GM_Base
{
	author = "Hazmat";
	scope = 2;
	model = "JLTS_AE_GM\SEA_Helmet_GM_Modular.p3d";
	displayName = "[16th] Cold Assault NCO Helmet";
	hiddenSelections[] =
	{
		"Camo1",
		"Visor"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_CA_NCO_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_CA_Helmet_Glow_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	ace_hearing_protection = 0.94999999;
	ace_hearing_lowerVolume = 0.1;
	subItems[] = {};
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "JLTS_AE_GM\SEA_Helmet_GM_Modular.p3d";
		allowedSlots[] = { 801,901,701,605 };
		modelSides[] = { 6 };
		hiddenSelections[] =
		{
			"Camo1",
			"Visor"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
};
class MET_Helmet_Cold_Officer : MET_Helmet_Cold_NCO
{
	scope = 2;
	displayName = "[16th] Cold Assault Officer Helmet";
	hiddenSelections[] =
	{
		"Camo1",
		"Visor"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_CA_Officer_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_CA_Helmet_Glow_CO.paa"
	};
};
class MET_Helmet_Cold_RTO : SEA_HELMET_GM_Base
{
	author = "Hazmat";
	scope = 2;
	model = "JLTS_AE_GM\SEA_Helmet_GM_RTO.p3d";
	displayName = "[16th] Cold Assault RTO Helmet";
	hiddenSelections[] =
	{
		"Camo1",
		"Visor"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_CA_RTO_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_CA_Helmet_Glow_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"",
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
	};
	ace_hearing_lowerVolume = .3;
	ace_hearing_protection = 0.35000002;
	subItems[] =
	{
		"Integrated_NVG_TI_0_F"
	};
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "JLTS_AE_GM\SEA_Helmet_GM_RTO.p3d";
		allowedSlots[] = { 801,901,701,605 };
		modelSides[] = { 6 };
		hiddenSelections[] =
		{
			"Camo1",
			"Visor"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.5;
			};
		};
	};
};

// Airborne
class JLTS_CloneHelmetAB;
class MET_Helmet_Airborne_Base : JLTS_CloneHelmetAB
{
	scope = 2;
	displayName = "[16th] Airborne Trooper Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_AB_Helmet_CO.paa"
	};
	model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
	ace_hearing_protection = 0.94999999;
	ace_hearing_lowerVolume = 0.1;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		allowedSlots[] = { 801,901,701,605 };
		modelSides[] = { 6 };
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = 0.15;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 7;
				passThrough = .2;
			};
		};
	};
};
class MET_Helmet_Airborne_Veteran : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Airborne Veteran Trooper Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_AB_VET_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_SPC : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Airborne Specialist Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_AB_CPL_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_NCO : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Airborne NCO Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_AB_SGT_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_SNCO : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Airborne SNCO Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_AB_FSGT_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_Officer : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Airborne Officer Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_AB_SGM_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_Medic : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Airborne Medic Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_AB_MED_Helmet_CO.paa"
	};
};

// ARF
class 3AS_ARF_Helmet;
class 212th_ARF_Helm;
class MET_Helmet_ARF_212th_Base : 212th_ARF_Helm
{
	scope = 0;
	displayName = "[16th] ARF Helmet";
	model = "\212th\Armor\212th_Helms\ARF_Helm.p3d";
	hiddenSelections[] =
	{
		"Camo"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_ARF_Helmet_CO.paa"
	};
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\212th\Armor\212th_Helms\ARF_Helm.p3d";
		modelSides[] = {3,1};
		hiddenSelections[] =
		{
			"camo"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
	/*subItems[]=
	{
		"nvg_16_arf_int"
	};*/
	subItems[] = {};
};
class MET_Helmet_ARF_Base : 3AS_ARF_Helmet
{
	scope = 2;
	displayName = "[16th] Goff Helmet";
	model = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
	hiddenSelections[] =
	{
		"Camo",
		"Camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_ARF_Helmet_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\ARF.rvmat"
	};
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
		modelSides[] = {3,1};
		hiddenSelections[] =
		{
			"Camo"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
	/*subItems[]=
	{
		"nvg_16_arf_int"
	};*/
	subItems[] = {};
};
class MET_Helmet_ARF_NCO : MET_Helmet_ARF_Base
{
	scope = 2;
	displayName = "[16th] Goff NCO Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_ARF_NCO_Helmet_CO.paa"
	};
};
	

// Pilot
class 3as_P2_Pilot_helmet;
class MET_Helmet_Pilot_Base : 3as_P2_Pilot_helmet
{
	scope = 2;
	displayName = "[16th] Pilot Helmet";
	model = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
	hiddenSelections[] =
	{
		"Camo",
		"Camo1",
		"Camo2",
		"Camo3",
		"Camo4",
		"Camo5"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_Pilot_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_Pilot_Helmet_CO.paa",
		"",
		"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_Pilot_Helmet_CO.paa",
		""
	};
	ace_hearing_protection = 0.94999999;
	ace_hearing_lowerVolume = 0.1;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
		hiddenSelections[] =
		{
			"Camo",
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		modelSides[] = {3,1};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
};


// Misc
class JLTS_CloneHelmetP2_illum;
class JLTS_CloneHelmetBARC;
class LST_Clone_Heavy_P2_Helmet;
class MET_Helmet_Trooper_Illum : JLTS_CloneHelmetP2_illum
{
	scope = 1;
	displayName = "[16th] Trooper Helmet (Glowing)";
	hiddenSelections[] =
	{
		"camo2",
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_Trooper_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_Trooper_Helmet_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
		""
	};
	model = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
	ace_hearing_protection = 0.94999999;
	ace_hearing_lowerVolume = 0.1;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		hiddenSelections[] =
		{
			"camo2",
			"camo1"
		};
		allowedSlots[] = { 801,901,701,605 };
		modelSides[] = { 6 };
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
};
class MET_Helmet_Trooper_BARC : JLTS_CloneHelmetBARC
{
	scope = 1;
	displayName = "[16th] BARC Helmet";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"MRC\JLTS\characters\CloneArmor2\data\Clone_helmet_BARC_co.paa"
	};
	model = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
	subItems[] = {};
	ace_hearing_protection = 0.94999999;
	ace_hearing_lowerVolume = 0.1;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
		hiddenSelections[] =
		{
			"camo1"
		};
		allowedSlots[] = { 801,901,701,605 };
		modelSides[] = { 6 };
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
};
class MET_Helmet_Trooper_RTO : LST_Clone_Heavy_P2_Helmet
{
	scope = 1;
	displayName = "[16th] RTO Helmet";
	hiddenSelections[] =
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_RTO_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Base\MET_RTO_Helmet_CO.paa"
	};
	model = "\Clone_Armor_Unit\Heavy_P2_Helmet.p3d";
	ace_hearing_protection = 0.94999999;
	ace_hearing_lowerVolume = 0.1;
	class ItemInfo : HeadgearItem
	{
		mass = 10;
		uniformModel = "\Clone_Armor_Unit\Heavy_P2_Helmet.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		allowedSlots[] = { 801,901,701,605 };
		modelSides[] = { 6 };
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 6;
				passThrough = .2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 6;
				passThrough = .2;
			};
		};
	};
};

// ==================================================================================================================
// Custom Helmets | MET_Helmet_[Branch]_[Base/Person/Rank]
// ==================================================================================================================
// Trooper
class MET_Helmet_Trooper_Arch : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Arch's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Arch_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Beige : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Beige's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Beige_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Ben : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Ben's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Ben_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Blackrose : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Blackrose's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Blackrose_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Blatt : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Blatt's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Blatt_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Blowfish : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Blowfish's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Blowfish_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Bopit : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Bopit's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Bopit_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Bravo : MET_Helmet_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Bravo's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Bravo_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Butcher : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Butcher's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Butcher_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Chet : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Chet's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Chet_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Chetiah : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Chetiah's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Chetiah_Helmet_CO.paa"
	};
};	
class MET_Helmet_Trooper_Cougar : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Cougar's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Cougar_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Creed : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Creed's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Creed_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Fish : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Fish's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Fish_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Frost : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Frost's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Frost_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Gambit : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Gambit's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Gambit_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Hazmat : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Hazmat's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Hazmat_Helmet_CO.paa"
	};
	optreHUDStyle = "Phase_2";
	optreVarietys[] =
	{
		"",
		"",
		""
	};
};
class MET_Helmet_Trooper_Hellwolf : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Hellwolf's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Hellwolf_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Hevy : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Hevy's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Hevy_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Hood : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Hood's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Hood_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Karma : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Karma's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Karma_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Kick : MET_Helmet_Trooper_Base
{
	scope = 0;
	displayName = "[16th] Kick's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Kick_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Krieg : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Krieg's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Krieg_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Longshot : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Longshot's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Longshot_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Maia : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Maia's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Maia_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Mace : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Mace's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Mace_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Maple : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Maple's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Maple_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Maxson : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Maxson's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Maxson_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Merlin : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Merlin's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Merlin_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Moldy : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Moldy's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Moldy_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Nix : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Nix's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Nix_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Noble : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Nobles's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Noble_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Orpheus : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Orpheus's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Orpheus_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Prez : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Prez's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Prez_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Ronin : MET_Helmet_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Ronin's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Ronin_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Roz : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Roz's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Roz_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Sam : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Sam's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Sam_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Six : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Six's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Six_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Ska : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Ska's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Ska_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Smith : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Smith's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Smith_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Spice : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Spice's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Spice_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Sunto : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Sunto's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Sunto_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Talk : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Talk's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Talk_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Vergil : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Vergil's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Vergil_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_William : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] William's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_William_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Winters : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Winters' Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Winters_Helmet_CO.paa"
	};
};
class MET_Helmet_Trooper_Wolf : MET_Helmet_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Wolf's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Wolf_Helmet_CO.paa"
	};
};

// Airborne 
class MET_Helmet_Airborne_Blackrose : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Blackrose's Airborne Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_AB_Blackrose_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_Jero : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Jeros's Airborne Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_AB_Jero_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_Noble : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Noble's Airborne Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_AB_Noble_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_Kick : MET_Helmet_Airborne_Base
{
	scope = 0;
	displayName = "[16th] Kick's Airborne Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_AB_Kick_Helmet_CO.paa"
	};
};
class MET_Helmet_Airborne_Vergil : MET_Helmet_Airborne_Base
{
	scope = 2;
	displayName = "[16th] Vergil's Airborne Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_AB_Vergil_Helmet_CO.paa"
	};
};

// ARF 
class MET_Helmet_ARF_Blue : MET_Helmet_ARF_Base
{
	scope = 2;
	displayName = "[16th] Blue's ARF Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_ARF_Blue_Helmet_CO.paa"
	};
};
class MET_Helmet_ARF_Chet : MET_Helmet_ARF_212th_Base
{
	scope = 2;
	displayName = "[16th] Chet's ARF Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_ARF_Chet_Helmet_CO.paa"
	};
};
class MET_Helmet_ARF_Convor : MET_Helmet_ARF_Base
{
	scope = 2;
	displayName = "[16th] Convor's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_ARF_Convor_Helmet_CO.paa"
	};
};
class MET_Helmet_ARF_Kix : MET_Helmet_ARF_Base
{
	scope = 2;
	displayName = "[16th] Kix's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_ARF_Kix_Helmet_CO.paa"
	};
};
class MET_Helmet_ARF_Maple : MET_Helmet_ARF_Base
{
	scope = 2;
	displayName = "[16th] Maple's ARF Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_ARF_Maple_Helmet_CO.paa"
	};
};
class MET_Helmet_ARF_Tavion : MET_Helmet_ARF_Base
{
	scope = 2;
	displayName = "[16th] Tavion's ARF Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_ARF_Tavion_Helmet_CO.paa"
	};
};

// Pilot 
class MET_Helmet_Pilot_Sunto : MET_Helmet_Pilot_Base
{
	scope = 0;
	displayName = "[16th] Sunto's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_PLT_Sunto_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_PLT_Sunto_Helmet_CO.paa",
		"",
		"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_PLT_Sunto_Helmet_CO.paa",
		""
	};
};
class MET_Helmet_Pilot_Fool : MET_Helmet_Pilot_Base
{
	scope = 2;
	displayName = "[16th] Fool's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_PLT_Fool_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_PLT_Fool_Helmet_CO.paa",
		"",
		"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_PLT_Fool_Helmet_CO.paa",
		""
	};
};

// Misc
class MET_Helmet_Trooper_Avalanche : MET_Helmet_Trooper_Illum
{
	scope = 2;
	displayName = "[16th] Avalanche's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Avalanche_Helmet_CO.paa",
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_Avalanche_Helmet_CO.paa"
	};
};
class MET_Helmet_BARC_Ronin : MET_Helmet_Trooper_BARC
{
	scope = 2;
	displayName = "[16th] Ronin's Helmet";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Helmets\Textures\Custom\MET_BARC_Ronin_Helmet_CO.paa"
	};
};