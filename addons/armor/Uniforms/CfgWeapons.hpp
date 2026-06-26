// ==================================================================================================================
// Base Armors | MET_Uniform_[Branch]_[Rank/Person]
// ==================================================================================================================
// Trooper
class JLTS_CloneArmor;
class MET_Uniform_Trooper : JLTS_CloneArmor
{
	scope = 2;
	displayName = "[16th] Trooper Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Base";
		containerClass = "Supply150";
		mass = 40;
		modelSides[] = { 6 };
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = 0.5;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 8;
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.2;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 5;
				passThrough = 0.4;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 8;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 8;
				passThrough = 0.2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};
class MET_Uniform_Trooper_Cadet : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Cadet Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Cadet_Base";
	};
};
class MET_Uniform_Trooper_Veteran : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Veteran Trooper Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Veteran_Base";
	};
};
class MET_Uniform_Trooper_SPC : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Specialist Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_SPC_Base";
	};
};
class MET_Uniform_Trooper_NCO : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] NCO Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_NCO_Base";
	};
};
class MET_Uniform_Trooper_SNCO : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] SNCO Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_SNCO_Base";
	};
};
class MET_Uniform_Trooper_Officer : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Officer Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Officer_Base";
	};
};
class MET_Uniform_Trooper_Medic : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Medic Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Medic_Base";
	};
};
class MET_Uniform_Trooper_EOD : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] EOD Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_EOD_Base";
	};
};

// Cold Assault
class SEA_Uniform_GM_Fabric;
class MET_Uniform_Cold_Trooper : SEA_Uniform_GM_Fabric
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Trooper Armor";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "MET_Uniform_Cold_Trooper_Base";
		containerClass = "Supply150";
		mass = 40;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = 0.5;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 8;
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.2;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 5;
				passThrough = 0.4;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 8;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 8;
				passThrough = 0.2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};
class MET_Uniform_Cold_NCO : MET_Uniform_Cold_Trooper
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault NCO Armor";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "MET_Uniform_Cold_NCO_Base";
		containerClass = "Supply150";
		mass = 40;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = 0.5;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 8;
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.2;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 5;
				passThrough = 0.4;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 8;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 8;
				passThrough = 0.2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};
class MET_Uniform_Cold_Officer : MET_Uniform_Cold_Trooper
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Officer Armor";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "MET_Uniform_Cold_Officer_Base";
		containerClass = "Supply150";
		mass = 40;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = 0.5;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 8;
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.2;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 5;
				passThrough = 0.4;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 8;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 8;
				passThrough = 0.2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};
class MET_Uniform_Cold_Medic : SEA_Uniform_GM_Fabric
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Medic Armor";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "MET_Uniform_Cold_Medic_Base";
		containerClass = "Supply150";
		mass = 40;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = 0.5;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 8;
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.2;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 5;
				passThrough = 0.4;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 8;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 8;
				passThrough = 0.2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};
class MET_Uniform_Cold_EOD : SEA_Uniform_GM_Fabric
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault EOD Armor";
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "MET_Uniform_Cold_EOD_Base";
		containerClass = "Supply150";
		mass = 40;
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = 0.5;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 8;
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.2;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 5;
				passThrough = 0.4;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 8;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 8;
				passThrough = 0.2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};	

// Airborne
class MET_Uniform_Airborne_Trooper : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Airborne Trooper Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Airborne_Trooper_Base";
	};
};
class MET_Uniform_Airborne_Veteran : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Airborne Veteran Trooper Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Airborne_Veteran_Base";
	};
};
class MET_Uniform_Airborne_SPC : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Airborne Specialist Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Airborne_SPC_Base";
	};
};
class MET_Uniform_Airborne_NCO : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Airborne NCO Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Airborne_NCO_Base";
	};
};
class MET_Uniform_Airborne_SNCO : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Airborne SNCO Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Airborne_SNCO_Base";
	};
};
class MET_Uniform_Airborne_Officer : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Airborne Officer Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Airborne_Officer_Base";
	};
};
class MET_Uniform_Airborne_Medic : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Airborne Medic Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Airborne_Medic_Base";
	};
};

// Goff
class MET_Uniform_ARF : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Goff Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_ARF_Base";
	};
};
class MET_Uniform_ARF_NCO : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Goff NCO Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_ARF_NCO_Base";
	};
};

// Reaper
class MET_Uniform_Reaper : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Reaper Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Reaper_Base";
	};
};
class MET_Uniform_Reaper_NCO : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Reaper NCO Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Reaper_NCO_Base";
	};
};

// Dragon
class MET_Uniform_Dragon : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Dragon Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Dragon_Base";
	};
};
class MET_Uniform_Dragon_NCO : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Dragon NCO Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Dragon_NCO_Base";
	};
};

// Misc
class JLTS_CloneArmorMC;
class MET_Uniform_Marshal : JLTS_CloneArmorMC
{
	scope = 1;
	displayName = "[16th] Marshal Commanders Armor";
	class ItemInfo : ItemInfo
	{
		uniformClass = "MET_Uniform_Marshal_Base";
		containerClass = "Supply150";
		mass = 40;
		modelSides[] = { 6 };
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 5;
				passThrough = 0.5;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 8;
				passThrough = 0.2;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 8;
				passThrough = 0.2;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 5;
				passThrough = 0.4;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 8;
				passThrough = 0.2;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 8;
				passThrough = 0.2;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 8;
				passThrough = 0.2;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 8;
				passThrough = 0.2;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 8;
				passThrough = 0.2;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
		};
	};
};

// ==================================================================================================================
// Custom Armors | MET_Uniform_[Branch]_[Rank/Person]
// ==================================================================================================================
// Trooper
class MET_Uniform_Trooper_Ben : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Ben's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Ben_Base";
	};
};
class MET_Uniform_Trooper_Blackrose : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Blackrose's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Blackrose_Base";
	};
};
class MET_Uniform_Trooper_Blatt : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Blatt's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Blatt_Base";
	};
};
class MET_Uniform_Trooper_Bopit : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Bopit's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Bopit_Base";
	};
};
class MET_Uniform_Trooper_Cougar : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Cougar's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Cougar_Base";
	};
}
class MET_Uniform_Trooper_Convor : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Convor's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Convor_Base";
	};
};
class MET_Uniform_Trooper_Beige : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Beige's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Beige_Base";
	};
};
class MET_Uniform_Trooper_Sam : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Sam's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Sam_Base";
	};
};
class MET_Uniform_Trooper_Fool : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Fool's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Fool_Base";
	};
};
class MET_Uniform_Trooper_Phoenix : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Phoenix's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Phoenix_Base";
	};
};
class MET_Uniform_Trooper_Cerberus : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Cerberus's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Cerberus_Base";
	};
};
class MET_Uniform_Trooper_Hazmat : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Hazmat's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Hazmat_Base";
	};
};
class MET_Uniform_Trooper_Hood : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Hood's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Hood_Base";
	};
};
class MET_Uniform_Trooper_Kix : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Kix's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Kix_Base";
	};
};
class MET_Uniform_Trooper_Moldy : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Moldy Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Moldy_Base";
	};
};
class MET_Uniform_Trooper_Moldy_Zeus : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Moldy Zeus Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Moldy_Zeus_Base";
	};
};
class MET_Uniform_Trooper_Nix : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Nix's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Nix_Base";
	};
};
class MET_Uniform_Trooper_Noble : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Noble's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Noble_Base";
	};
};
class MET_Uniform_Trooper_Prez : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Prez's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Prez_Base";
	};
};
class MET_Uniform_Trooper_Ronin : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Ronin's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Ronin_Base";
	};
};
class MET_Uniform_Trooper_Roz : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Roz's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Roz_Base";
	};
};
class MET_Uniform_Trooper_Six : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Six's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Six_Base";
	};
};
class MET_Uniform_Trooper_Sunto : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Sunto's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Sunto_Base";
	};
};
class MET_Uniform_Trooper_Vergil : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Vergil's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Vergil_Base";
	};
};
class MET_Uniform_Trooper_Winters : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Winters's Armor";
	class ItemInfo : ItemInfo
	{
		uniformclass = "MET_Uniform_Trooper_Winters_Base";
	};
};
class MET_Uniform_Trooper_Maxson : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Maxson's Armor";
	class ItemInfo : ItemInfo
	{
		uniformClass = "MET_Uniform_Trooper_Maxson_Base";
	};
};
class MET_Uniform_Trooper_Merlin : MET_Uniform_Trooper
{
	scope = 2;
	displayName = "[16th] Merlin's Armor";
	class ItemInfo : ItemInfo
	{
		uniformClass = "MET_Uniform_Trooper_Merlin_Base";
	};
};

// Misc
class MET_Uniform_Marshal_Avalanche : MET_Uniform_Marshal
{
	scope = 1;
	displayName = "[16th] Avalanche's Armor";
	class ItemInfo : ItemInfo
	{
		uniformClass = "MET_Uniform_Marshal_Avalanche_Base";
	};
};