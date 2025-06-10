class CfgPatches
{
	class armor_16
	{
		units[]=
		{
		};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_characters_F"
		};
		author="DJ, LCDR Wolf, JLTS Team";
		Name="16th Metal Armor";
	};
};

class HitPoints;
class CfgWeapons
{
	class ItemInfo;
	class HeadgearItem;
	/*==================================================================================================================================================
	==Initiates
	==================================================================================================================================================*/
	class SC_Helmet_WD_Green_VU;
    class MET_Helmet_WD_Black_VU: SC_Helmet_WD_Green_VU
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Initiate Helmet";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\helmet_black_co.paa"
		};
        class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="\sc_equipment\data\watchdog\wd_helmet_heavy_noGlasses.p3d";
			modelSides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=16;
					passThrough=0.3;
				};
				class Face
				{
					hitPointName="HitFace";
					armor=10;
					passThrough=0.3;
				};
			};
		};
	};
    class VestItem;
    class SC_Vest_WD_Basic_Green;
	class MET_Vest_WD_Basic_Black: SC_Vest_WD_Basic_Green
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Initiate Vest (Basic)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\vest_black_co.paa"
		};
        class ItemInfo: VestItem
		{
			uniformModel="\sc_equipment\data\watchdog\wd_vest_basic.p3d";
			containerClass="Supply80";
			mass=50;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=62;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=62;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=14;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
			};
		};
	};
    class SC_Vest_WD_Medium_Green;
    class MET_Vest_WD_Medium_Black: SC_Vest_WD_Medium_Green
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Initiate Vest (Medium)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\vest_black_co.paa"
		};
        class ItemInfo: VestItem
		{
			uniformModel="\sc_equipment\data\watchdog\wd_vest_medium.p3d";
			containerClass="Supply180";
			mass=80;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=6;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=62;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=62;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=14;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=14;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
    /*==================================================================================================================================================
	==Acolytes
	==================================================================================================================================================*/
	class SC_MDF_Helmet;
	class MET_MDF_Helmet_Black: SC_MDF_Helmet
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Helmet (Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFHelmet\Black\Material.001_CO.paa"
		};
        class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="MDF\MDFHelmet.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=30;
					passThrough=0.4;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=22;
					passThrough=0.4;
				};
			};
		};
	};
    class SC_MDF_Heavy;
	class MET_MDF_Heavy_Black: SC_MDF_Heavy
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Armor";
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFTorso\Black\DefaultMaterial_CO.paa",
			"MDF\MDFLegs\Black\DefaultMaterial_CO.paa"
		};
        class ItemInfo: ItemInfo
		{
			uniformModel="MDF\MDFHeavy.p3d";
			containerClass="Supply200";
			mass=110;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=18;
					passThrough=0.4;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=20;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=88;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=88;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.3;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.4;
				};
			};
		};
	};
    /*==================================================================================================================================================
	==Apostles
	==================================================================================================================================================*/
    class SC_Helmet_SEN_Night_SL;
	class MET_Helmet_SEN_SL_Black: SC_Helmet_SEN_Night_SL
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Apostle Helmet";
        class ItemInfo: HeadgearItem
		{
			mass=35;
			uniformModel="\sc_equipment\data\sentinel\sen_helmet_sl.p3d";
			modelSides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=40;
					passThrough=0.3;
				};
				class Face
				{
					hitPointName="HitFace";
					armor=30;
					passThrough=0.3;
				};
			};
		};
	};
    class SC_Vest_SEN_Heavy_Night;
	class MET_Vest_SEN_Heavy_Black: SC_Vest_SEN_Heavy_Night
	{
		scope=2;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Apostle Vest";
        class ItemInfo: VestItem
		{
			uniformModel="\sc_equipment\data\sentinel\sen_vest_heavy.p3d";
			containerClass="Supply200";
			mass=100;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=22;
					passThrough=0.4;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.3;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=108;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=100;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=100;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=30;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=30;
					passThrough=0.3;
				};
			};
		};
	};
    /*==================================================================================================================================================
	==Bots
	==================================================================================================================================================*/
    class UniformItem;
    class Uniform_Base;
    class MET_Warbot_Uniform: Uniform_Base
	{
		scope=2;
		scopeArsenal=1;
		scopeCurator=2;
		author="Moose (Scion Conflict Mod Team)";
		picture="sc_newequipment2\icon_sc_ca.paa";
		displayName="BHA Warbot Gen II";
		descriptionshort="Generation II Warbots, manufactured by the Atlas Corporation";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\Warbot\Torso\DefaultMaterial_CO.paa",
			"Uniforms\Warbot\Legs\DefaultMaterial_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[]={0,1,2,3};
			uniformClass="WarbotUniform_dummy";
			containerClass="Supply30";
			mass=45;
			allowedSlots[]={701,801,901};
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=18;
					passThrough=0.4;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=20;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=88;
					passThrough=0.4;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=88;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=30;
					passThrough=0.3;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=20;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough=0.4;
				};
			};
		};
	};
    class SC_Gen2WarbotHead;
	class MET_Gen2WarbotHead_NoFS: SC_Gen2WarbotHead
	{
		displayName="Gen II Warbot Head (No Faceshield)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_newequipment2\WarbotHead\DefaultMaterial_CO.paa",
			""
		};
        
		class ItemInfo: HeadgearItem
		{
			mass=25;
			uniformModel="sc_newequipment2\WarbotHead.p3d";
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=45;
					passThrough=0.3;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=35;
					passThrough=0.4;
				};
			};
		};
	};
    class Vest_Camo_Base;
    class MET_EliminatorUpArmorVest: Vest_Camo_Base
	{
		_generalMacro="MEt_EliminatorUpArmorVest";
		scope=2;
		scopeArsenal=1;
		scopeCurator=2;
		weaponPoolAvailable=1;
		author="Moose (Scion Conflict Mod Team)";
		displayName="Eliminator MKI UpArmored Plating";
		picture="\sc_newequipment2\icon_sc_ca.paa";
		model="sc_newequipment2\eliminatoruparmor.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_newequipment2\UpArmor\DefaultMaterial_CO.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="sc_newequipment2\eliminatoruparmor.p3d";
			containerClass="Supply160";
			mass=30;
			modelsides[]={0,1,2,3};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=30;
					passThrough=0.35;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=30;
					passThrough=0.35;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=100;
					passThrough=0.3;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=100;
					passThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=50;
					passThrough=0.3;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=40;
					passThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.3;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=40;
					passThrough=0.35;
				};
			};
		};
	};
};
class CfgVehicles
{
	/*==================================================================================================================================================
	==Initiates
	==================================================================================================================================================*/
	class SC_Backpack_WD_Green;
	class MET_Backpack_WD_Black: SC_Backpack_WD_Green
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		author="Scion Conflict Mod Team";
		displayName="Initiate Backpack";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\backpack_black_co.paa"
		};
		maximumLoad=300;
		mass=35;
	};
    class MET_Backpack_ATWD_Black: SC_Backpack_WD_Green
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=1;
		author="Scion Conflict Mod Team";
		displayName="Initiate Backpack";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\watchdog\textures\backpack_black_co.paa"
		};
		class TransportMagazines
		{
			class _xx_BHA_AT_SINGLE
			{
				count=2;
				magazine="BHA_AT_SINGLE";
			};
            class _xx_BHA_AP_SINGLE
			{
				count=1;
				magazine="BHA_AP_SINGLE";
			};
		};
		maximumLoad=500;
		mass=35;
	};
    /*==================================================================================================================================================
	==Acolytes
	==================================================================================================================================================*/
	class SC_MDFBackpack;
    class MET_MDFBackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=300;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
	};
    class MET_MDFMEDBackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=300;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
        class TransportItems
		{
			class _xx_LFP_item_bacta_bandage
			{
				count=80;
				magazine="LFP_item_bacta_bandage";
			};
            class _xx_Medikit
			{
				count=1;
				magazine="Medikit";
			};
		};
	};
    class MET_MDFMGBackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=300;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
        class TransportMagazines
		{
			class _xx_MET_T20AC_mag
			{
				count=5;
				magazine="MET_EL34_mag";
			};
		};
	};
    class MET_MDFATBackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=600;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_BHA_AT_SINGLE
			{
				count=3;
				magazine="BHA_AT_SINGLE";
			};
            class _xx_BHA_AP_SINGLE
			{
				count=2;
				magazine="BHA_AP_SINGLE";
			};
		};
	};
    class MET_MDFAABackpack_Black: SC_MDFBackpack
	{
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
		displayName="Acolyte Backpack";
		descriptionshort="Backpack used by the BHA Acolytes.";
		maximumLoad=600;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"MDF\MDFBackpack\Black\DefaultMaterial_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_BHA_AA_SINGLE
			{
				count=5;
				magazine="BHA_AA_SINGLE";
			};
            class _xx_BHA_AP_SINGLE
			{
				count=1;
				magazine="BHA_AP_SINGLE";
			};
		};
	};
    /*==================================================================================================================================================
	==Apostles
	==================================================================================================================================================*/
	class SC_SentinelPack_Night;
    class MET_SentinelPack_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
    };
    class MET_SentinelPackMED_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
        class TransportItems
		{
			class _xx_LFP_item_bacta_bandage
			{
				count=80;
				magazine="LFP_item_bacta_bandage";
			};
            class _xx_Medikit
			{
				count=1;
				magazine="Medikit";
			};
		};
    };
    class MET_SentinelPackAT_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
		class TransportMagazines
		{
			class _xx_BHA_AT_SINGLE
			{
				count=5;
				magazine="BHA_AT_SINGLE";
			};
            class _xx_BHA_AP_SINGLE
			{
				count=1;
				magazine="BHA_AP_SINGLE";
			};
		};
    };
    class MET_SentinelPackMG_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
		class TransportMagazines
		{
			class _xx_MET_T20AC_mag
			{
				count=5;
				magazine="MET_T20AC_mag";
			};
		};
    };
    class MET_SentinelPackGMG_Night_Black: SC_SentinelPack_Night
    {
		scope=1;
		scopeArsenal=0;
		scopeCurator=0;
        displayName="Apostle Backpack";
		descriptionshort="Backpack used by the Elite Apostles.";
		maximumLoad=800;
		class TransportMagazines
		{
			class _xx_MET_heavy_proton_mag
			{
				count=2;
				magazine="MET_heavy_proton_mag";
			};
		};
    };
    /*==================================================================================================================================================
	==Bots
	==================================================================================================================================================*/
	class O_V_Soldier_hex_F;
    class WarbotUniform_dummy: O_V_Soldier_hex_F
	{
		scope=1;
		modelSides[]={0,1,2,3};
		displayName="Warbot Gen II Chasis-Body";
		model="Uniforms\warbot.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\Warbot\Torso\DefaultMaterial_CO.paa",
			"Uniforms\Warbot\Legs\DefaultMaterial_CO.paa"
		};
	};
    class Bag_Base;
    class MET_Backpack_Warbot: Bag_Base
	{
		scope=1;
		scopeArsenal=1;
		scopeCurator=2;
		author="Scion Conflict Mod Team";
		displayName="Warbot Backpack Extension";
		descriptionshort="Backpack extension for Mk2 Warbots.";
		hiddenSelections[]=
		{
			"camo_backpack"
		};
		hiddenSelectionsTextures[]=
		{
			"sc_equipment\data\warbot\textures\backpack_co.paa"
		};
		picture="\sc_equipment\data\icons\icon_sc_ca.paa";
		model="sc_equipment\data\warbot\gen2_backpack.p3d";
		maximumLoad=600;
		mass=50;
	};
};