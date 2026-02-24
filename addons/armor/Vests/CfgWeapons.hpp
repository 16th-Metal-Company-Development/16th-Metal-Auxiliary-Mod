// ==================================================================================================================
// Base Vests| MET_Vest_[Descriptor/Rank/Branch]_[Base/Variant]
// ==================================================================================================================
// Trooper
class JLTS_CloneVestAirborne;
class MET_Vest_Airborne_Base : JLTS_CloneVestAirborne
{
	scope = 2;
	displayname = "[16th] Airborne Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_AB_Kama_CO.paa",
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_AB_NCO_Rig_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};
class MET_Vest_Platoon_Medic : MET_Vest_Airborne_Base
{
	scope = 2;
	displayname = "[16th] Platoon Medic Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_AB_Kama_CO.paa",
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_MED_Rig_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

class JLTS_CloneVestAirborneNCO;
class MET_Vest_Senior_Platoon_Medic : JLTS_CloneVestAirborneNCO
{
	scope = 2;
	displayname = "[16th] Platoon Senior Medic Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_AB_Kama_CO.paa",
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_MED_Rig_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

class JLTS_CloneVestSuspender;
class MET_Vest_Basic : JLTS_CloneVestSuspender
{
	scope = 2;
	displayname = "[16th] Vest Basic";
	model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
	class ItemInfo : ItemInfo
	{
		uniformModel = "\ls\core\addons\characters_clone_legacy\vests\clone\ls_gar_clone_vest.p3d";
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};
class MET_Vest_Suspenders_Base : JLTS_CloneVestSuspender
{
	scope = 2;
	displayname = "[16th] Suspenders";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_Suspenders_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};
class MET_Vest_Suspenders_EOD : MET_Vest_Suspenders_Base
{
	scope = 2;
	displayname = "[16th] EOD Suspenders";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_Suspenders_EOD_CO.paa"
	};
};
class MET_Vest_Suspenders_MED : MET_Vest_Suspenders_Base
{
	scope = 2;
	displayname = "[16th] Medic Suspenders";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_Suspenders_MED_CO.paa"
	};
};

class JLTS_CloneVestHolster;
class MET_Vest_Holster : JLTS_CloneVestHolster
{
	scope = 2;
	displayname = "[16th] Holster";
	/*hiddenSelectionsTextures[]=
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\reg_vests\suspenders\trp_vest_suspenders_co.paa"
	};*/
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

class JLTS_CloneVestKama;
class MET_Vest_Sergeant_Base : JLTS_CloneVestKama
{
	scope = 2;
	displayname = "[16th] Sergeant Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_Sergeant_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

class JLTS_CloneVestReconNCO;
class MET_Vest_Corporal_Base : JLTS_CloneVestReconNCO
{
	scope = 2;
	displayname = "[16th] Corporal Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_Corporal_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

class JLTS_CloneVestReconOfficer;
class MET_Vest_SNCO_Base : JLTS_CloneVestReconOfficer
{
	scope = 2;
	displayname = "[16th] Staff NCO Vest";
	hiddenSelections[] = 
	{ 
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] = 
	{ 
		"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa",
		"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa" 
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 7;
				passThrough = .2;
			};
		};
	};
};

class JLTS_CloneVestOfficer;
class MET_Vest_Officer_L_Base : JLTS_CloneVestOfficer
{
	scope = 2;
	displayname = "[16th] Officer Vest (Left)";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_Officer_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 6;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 7;
				passThrough = .2;
			};
		};
	};
};

class JLTS_CloneVestOfficer2;
class MET_Vest_Officer_R_Base : JLTS_CloneVestOfficer2
{
	scope = 1;
	displayname = "[16th] Officer Vest (Right)";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_Officer_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 6;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 5;
				passThrough = .2;
			};
		};
	};
};

class JLTS_CloneVestCommander;
class MET_Vest_Commander_Base : JLTS_CloneVestCommander
{
	scope = 2;
	displayname = "[16th] Commanders Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_Officer_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 7;
				passThrough = .2;
			};
		};
	};
};
	

// Cold Assault
class SEA_Vest_GM_Base;
class MET_Vest_Cold_Base : SEA_Vest_GM_Base
{
	displayName = "[16th] Cold Assault Trooper Vest";
	author = "Hazmat";
	scope = 2;
	model = "\JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_CA_Base_CO.paa"
	};
	class ItemInfo : VestItem
	{
		uniformModel = "JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
		containerClass = "Supply100";
		hiddenSelections[] =
		{
			"camo1"
		};
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 5;
				passThrough = .2;
			};
		};
	};
};
class MET_Vest_Cold_NCO : MET_Vest_Cold_Base
{
	displayName = "[16th] Cold Assault NCO Vest";
	author = "Hazmat";
	scope = 2;
	model = "\JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_CA_NCO_CO.paa"
	};
};
class MET_Vest_Cold_Officer : MET_Vest_Cold_Base
{
	displayName = "[16th] Cold Assault Officer Vest";
	author = "Hazmat";
	scope = 2;
	model = "\JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_CA_OFF_CO.paa"
	};
};


// Airborne
class MET_Vest_Airborne_NCO : JLTS_CloneVestAirborneNCO
{
	scope = 2;
	displayname = "[16th] Airborne NCO Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_AB_Kama_CO.paa",
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_AB_NCO_Rig_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};


// ARC
class JLTS_CloneVestARC;
class MET_Vest_ARC_Base : JLTS_CloneVestARC
{
	scope = 2;
	displayname = "[16th] ARC Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Base\MET_Vest_ARC_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		containerClass = "Supply120";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 8;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 12;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 12;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 12;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 12;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 7;
				passThrough = .2;
			};
		};
	};
};
	

// Misc
class Aux212_Backpack_Rack_Ammo_Bearer;
class MET_Vest_Rack_Ammo : Aux212_Backpack_Rack_Ammo_Bearer
{
	scope = 2;
	scopeArsenal = 2;
	displayname = "[16th] Backpack Rack (Ammo Bearer)";
	model = "\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_Ammo_Bearer\Backpack_Rack_Ammo_Bearer.p3d";
	picture = "\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Data\UI\Backpack_Rack_Ammo_Bearer_UI_ca.paa";
	class ItemInfo : VestItem
	{
		uniformModel = "\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_Ammo_Bearer\Backpack_Rack_Ammo_Bearer.p3d";
		containerClass = "Supply120";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

class Aux212_Backpack_Rack_CLS;
class MET_Vest_Rack_Medic : Aux212_Backpack_Rack_CLS
{
	scope = 2;
	scopeArsenal = 2;
	displayname = "[16th] Backpack Rack (Medic)";
	model = "\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_CLS\Backpack_Rack_CLS.p3d";
	picture = "212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Data\UI\Backpack_Rack_CLS_UI_ca.paa";
	class ItemInfo : VestItem
	{
		uniformModel = "\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_CLS\Backpack_Rack_CLS.p3d";
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

class Aux212_Backpack_Rack_AT;
class MET_Vest_Rack_AT : Aux212_Backpack_Rack_AT
{
	scope = 2;
	scopeArsenal = 2;
	displayname = "[16th] Backpack Rack (AT)";
	model = "\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_AT\Backpack_Rack_AT.p3d";
	picture = "\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Data\UI\Backpack_Rack_Ammo_Bearer_UI_ca.paa";
	class ItemInfo : VestItem
	{
		uniformModel = "\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_AT\Backpack_Rack_AT.p3d";
		containerClass = "Supply100";
		mass = 10;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = .2;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 6;
				passThrough = .2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 6;
				passThrough = .2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 6;
				passThrough = .2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 6;
				passThrough = .2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 6;
				passThrough = .2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

class Aux212_Heavy_Gunner_Vest_Standard;
class MET_Vest_Plates_Weapons : Aux212_Heavy_Gunner_Vest_Standard
{
	scope = 2;
	scopeArsenal = 2;
	displayname = "[16th] Weapons Squad Armor Plates";
	class ItemInfo : VestItem
	{
		containerClass = "Supply100";
		mass = 10;
	};
};

class Aux212_Heavy_Gunner_Vest_Team_Leader;
class MET_Vest_Plates_Reaper : Aux212_Heavy_Gunner_Vest_Team_Leader
{
	scope = 2;
	scopeArsenal = 2;
	displayname = "[16th] Reaper Armor Plates";
	class ItemInfo : VestItem
	{
		containerClass = "Supply100";
		mass = 10;
	};
};


// ==================================================================================================================
// Custom Vests | MET_Vest_[Descriptor/Rank/Branch]_[Person]
// ==================================================================================================================
// Trooper
class MET_Vest_Officer_R_Avalanche : MET_Vest_Officer_R_Base
{
	scope = 2;
	displayname = "[16th] Avalanche Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_Officer_Avalanche_CO.paa"
	};
};
class MET_Vest_Officer_L_Cougar : MET_Vest_Officer_L_Base
{
	scope = 2;
	displayname = "[16th] Cougar's Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_Officer_Cougar_CO.paa"
	};
};
class MET_Vest_Officer_L_Ronin : MET_Vest_Officer_L_Base
{
	scope = 2;
	displayname = "[16th] Ronin's Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_Officer_Ronin_CO.paa"
	};
};
class MET_Vest_Officer_L_Phoenix : MET_Vest_Officer_L_Base
{
	scope = 2;
	displayname = "[16th] Phoenix's Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_Officer_Phoenix_CO.paa"
	};
};
class MET_Vest_Commander_Merlin : MET_Vest_Commander_Base
{
	scope = 2;
	displayname = "[16th] Merlin's Vest";
};
class MET_Vest_SNCO_Vergil : JLTS_CloneVestAirborneNCO
{
	scope = 2;
	displayname = "[16th] Vergil's Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_SNCO_Kama_Vergil_CO.paa",
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_SNCO_Rig_Vergil_CO.paa"
	};
};

// ARC
class MET_Vest_ARC_Blackrose : MET_Vest_ARC_Base
{
	scope = 2;
	displayname = "[16th] Blackrose's ARC Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_ARC_Blackrose_CO.paa"
	};
};
class MET_Vest_ARC_Hazmat : MET_Vest_ARC_Base
{
	scope = 2;
	displayname = "[16th] Hazmat's ARC Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_ARC_Hazmat_CO.paa"
	};
};
class MET_Vest_ARC_Hood : MET_Vest_ARC_Base
{
	scope = 2;
	displayname = "[16th] Hood's ARC Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_ARC_Hood_CO.paa"
	};
};
class MET_Vest_ARC_Ronin : MET_Vest_ARC_Base
{
	scope = 2;
	displayname = "[16th] Ronin's ARC Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_ARC_Ronin_CO.paa"
	};
};
class MET_Vest_ARC_Six : MET_Vest_ARC_Base
{
	scope = 2;
	displayname = "[16th] Six's ARC Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_ARC_Six_CO.paa"
	};
};
class MET_Vest_ARC_Winters : MET_Vest_ARC_Base
{
	scope = 2;
	displayname = "[16th] Winter's ARC Vest";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Vests\Textures\Custom\MET_Vest_ARC_Winters_CO.paa"
	};
};
	

// Misc