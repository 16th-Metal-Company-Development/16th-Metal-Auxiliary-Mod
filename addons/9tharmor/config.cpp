class CfgPatches
{
	class 9tharmorcompat
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"JLTS_characters_CloneArmor",
			"JLTS_characters_CloneArmor2",
			"JLTS_Core",
			"A3_Characters_F",
			"A3_Ui_F"
		};
	};
};

#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"

class CfgVehicles
{
	class B_Soldier_f;
	class JLTS_Clone_backpack;
	class JLTS_Clone_belt_bag;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_LR_attachment;
	class JLTS_Clone_P2_DC15A;

	// Backpacks
	class MET_9th_Backpack : JLTS_Clone_backpack
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		maximumload = 700;
		displayName = "[9th] Clone Backpack";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"z\16th\addons\9tharmor\Backpack\Textures\Backpack_Standard.paa"
		};
	};
	class MET_9th_Medical_Backpack : JLTS_Clone_backpack
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		maximumload = 700;
		displayName = "[9th] Clone Medical Backpack";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"z\16th\addons\9tharmor\Backpack\Textures\Backpack_Medical.paa"
		};
	};
	class Met_9th_EOD_Backpack : JLTS_Clone_backpack
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		maximumload = 700;
		displayName = "[9th] Clone EOD Backpack";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"z\16th\addons\9tharmor\Backpack\Textures\Backpack_EOD.paa"
		};
	};
	class MET_9th_Belt_Bag : JLTS_Clone_belt_bag
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		maximumload = 700;
		displayName = "[9th] Clone Trooper Belt Bag";
	};
	class MET_9th_Medical_Belt_Bag : JLTS_Clone_belt_bag
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		maximumload = 700;
		displayName = "[9th] Clone Trooper Belt Bag (Medical)";
		hiddenSelections[] =
		{
			"camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"z\16th\addons\9tharmor\Backpack\Textures\BeltBag_Medical.paa"
		};
	};
	class MET_9th_Mini_LR_Attachment : JLTS_Clone_LR_attachment
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		displayName = "[9th] Clone Mini LR Attachment";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 35000;
		tf_subtype = "digital_lr";
		maximumload = 700;
		mass = 11;
	};
	class MET_9th_RTO_Pack : JLTS_Clone_RTO_pack
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		displayName = "[9th] Clone Radio Pack";
		tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 35000;
		tf_subtype = "digital_lr";
		maximumload = 700;
		mass = 22;
	};
	class MET_9th_RTO_Backpack : JLTS_Clone_backpack_RTO
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		maximumload = 700;
		displayName = "[9th] Clone Radio Backpack (RTO)";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 35000;
		tf_subtype = "digital_lr";
		hiddenSelectionsTextures[] =
		{
			"z\16th\addons\9tharmor\Backpack\Textures\Backpack_RTO.paa"
		};
	};

	// Armor
	class MET_9th_INF_Armor : JLTS_Clone_P2_DC15A
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		displayName = "[9th] Phase 2 Trooper (CT)";
		faction = "JLTS_GAR";
		editorSubcategory = "JLTS_clones_white";
		identityTypes[] =
		{
			"LanguageENG_F",
			"Head_NATO"
		};
		uniformClass = "MET_9th_INF_Armor";
		backpack = "";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"z\16th\addons\9tharmor\Uniform\Textures\INF_Upper.paa",
			"z\16th\addons\9tharmor\Uniform\Textures\INF_Lower.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"z\16th\addons\9tharmor\Data\Textures\Armor\P2_Armor_Upper.rvmat",
			"z\16th\addons\9tharmor\Data\Textures\Armor\P2_Armor_Lower.rvmat"
		};
		linkedItems[] =
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"MET_9th_P2_Helmet"
		};
		respawnLinkedItems[] =
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemGPS",
			"MET_9th_P2_Helmet"
		};
		weapons[] =
		{
			"Throw",
			"Put"
		};
		respawnWeapons[] =
		{
			"Throw",
			"Put"
		};
		magazines[] =
		{
			""
		};
		respawnMagazines[] =
		{
			""
		};
		items[] =
		{
			"FirstAidKit"
		};
		respawnItems[] =
		{
			"FirstAidKit"
		};

		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.80000001;
				radius = 0.079999998;
				explosionShielding = 0.1;
				minimalHit = 0.0099999998;
			};
			class HitNeck : HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.80000001;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
			};
			class HitHead : HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.80000001;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.0099999998;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis : HitHead
			{
				armor = 8;
				material = -1;
				name = "pelvis";
				passThrough = 0.80000001;
				radius = 0.23999999;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "";
			};
			class HitAbdomen : HitPelvis
			{
				armor = 6;
				material = -1;
				name = "spine1";
				passThrough = 0.80000001;
				radius = 0.16;
				explosionShielding = 3;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor = 6;
				material = -1;
				name = "spine2";
				passThrough = 0.33000001;
				radius = 0.18000001;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitChest : HitDiaphragm
			{
				armor = 8;
				material = -1;
				name = "spine3";
				passThrough = "0.33000001radius = 0.18";
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
			};
			class HitBody : HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.0099999998;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms : HitBody
			{
				armor = 6;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class HitHands : HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
				depends = "HitArms";
			};
			class HitLegs : HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
				depends = "0";
			};
			class Incapacitated : HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 3;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor = 6;
				material = -1;
				name = "hand_l";
				passThrough = 1;
				radius = 0.079999998;
				explosionShielding = 3;
				visual = "injury_hands";
				minimalHit = 0.0099999998;
			};
			class HitRightArm : HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 6;
				material = -1;
				name = "leg_l";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 3;
				visual = "injury_legs";
				minimalHit = 0.0099999998;
			};
			class HitRightLeg : HitLeftLeg
			{
				name = "leg_r";
			};
		};
		armor = 2;
		armorStructural = 4;
		explosionShielding = 0.40000001;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
	};
};

class CfgWeapons
{
	class H_HelmetO_ViperSP_hex_F;
	class JLTS_CloneArmor;
	
	class UniformItem;

	// Helmet Base
	class JLTS_CloneHelmetP2 : H_HelmetO_ViperSP_hex_F
	{
		class ItemInfo;
	};
	class MET_9th_P2_Helmet : JLTS_CloneHelmetP2
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		displayName = "[9th] Phase 2 Standard Helmet";
		hiddenSelections[] =
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] =
		{
			"z\16th\addons\9tharmor\Helmet\Textures\P2_Standard.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"z\16th\addons\9tharmor\Data\Textures\Helmet\P2_Helmet.rvmat",
			"z\16th\addons\9tharmor\Data\Textures\Helmet\Helmet_Visor.rvmat"
		};

		subItems[] = {};
		ace_hearing_lowerVolume = 0.60000002;
		ace_hearing_protection = 0.85000002;

		class ItemInfo : ItemInfo
		{
			hiddenSelections[] =
			{
				"camo1",
				"camo2"
			};
			mass = 10;
			allowedSlots[] = { 801,901,701,605 };
			modelSides[] = { 6 };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.5;
				};
			};
		};
	};

	// Armor Base
	class MET_9th_INF_Armor : JLTS_CloneArmor
	{
		author = "MrClock & 9th Auxiliery";
		scope = 2;
		displayName = "[9th] Phase 2 Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformType = "Neopren";
			uniformClass = "MET_9th_INF_Armor";
			containerClass = "Supply150";
			mass = 40;
		};
	};
};