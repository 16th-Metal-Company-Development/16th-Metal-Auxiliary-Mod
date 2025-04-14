class CfgPatches
{
	class MET_Denal_Resupply
	{
		author = "Denal";
		requiredaddons[] = 
		{
			"LS_statics_props",
			"3as_props"
		};
		requiredversion = 0.1;
		units[] = 
		{
			"MET_EmptyBox_F",
			"MET_EmptyBox_AMMO_F",
			"MET_EmptyBox_MED_F",
			"MET_EmptyBox_EXP_F",
			"MET_EmptyBox_RAD_F",
			"MET_AmmoBox_F",
			"MET_RocExpBox_F",
			"MET_MedicalBox_F",
			"MET_RadioBox_F",
            "Box_MET_Ammo",
            "Box_MET_Airborne",
            "Box_MET_FieldAssets",
            "Box_MET_Ordinance",
            "Box_MET_Mortars",
            "Box_MET_Rockets",
            "Box_MET_Engineer",
            "Box_MET_ARF",
            "Box_MET_ARC",
            "Box_MET_CommandoGroup",
            "Box_MET_Turrets"
		};
		weapons[] = {};
	};
};
class CfgEditorCategories
{
	class B_MET_Props_F
	{
		displayName = "16th Props";
	};
	class CfgEditorSubcategoriesMETAux // Category class, you point to it in editorCategory property
	{
		displayName = "[16th] Metal Company"; // Name visible in the list
	};
};
class CfgEditorSubcategories
{
	class O_MET_Props
	{
		displayName = "Supply Boxes";
	};
	class SubcategoryResupply // Category class, you point to it in editorSubcategory property
	{
		displayName = "Supply Crates"; // Name visible in the list
	};
};
class cfgVehicles
{
	class CBA_Extended_EventHandlers_base;
	class ls_carrybox_base;
	class 3AS_Supply_Large_Ammo_Prop;
	class 3AS_Supply_Large_Prop;
	class 3AS_Supply_Large_Medical_Prop;
	class 3AS_Supply_Large_Blue_Prop;
	class 3AS_Supply_Large_Black_Prop;	
	class 3AS_Supply_Large_Red_Prop;
	class 3AS_Small_Box_9_Prop;
	class 3AS_Small_Box_9_Black_Prop;
	class MET_EmptyBox_F: ls_carrybox_base
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "16th Empty Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.36,-0.1};
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_ignoreWeightCarry = 1;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_EmptyBox_AMMO_F: 3AS_Supply_Large_Ammo_Prop
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "16th Empty Ammo Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.36,-0.1};
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_ignoreWeightCarry = 1;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_EmptyBox_MED_F: 3AS_Supply_Large_Medical_Prop
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "16th Empty Medical Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.36,-0.1};
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_ignoreWeightCarry = 1;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_EmptyBox_EXP_F: 3AS_Supply_Large_Blue_Prop
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "16th Empty Explosives Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.36,-0.1};
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_ignoreWeightCarry = 1;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_EmptyBox_MOR_F: 3AS_Supply_Large_Black_Prop
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "16th Empty Mortar Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.36,-0.1};
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_ignoreWeightCarry = 1;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_EmptyBox_EWEB_F: 3AS_Small_Box_9_Black_Prop
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "16th Empty EWEB Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.36,-0.1};
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_ignoreWeightCarry = 1;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_EmptyBox_RAD_F: 3AS_Supply_Large_Red_Prop
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "16th Empty Radio Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.36,-0.1};
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_ignoreWeightCarry = 1;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_EmptyBox_EOD_F: 3AS_Supply_Large_Prop
	{
		scope = 0;
		scopeCurator = 0;
		displayName = "16th Empty EOD Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0,1.36,-0.1};
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0,1.2,0};
		ace_dragging_ignoreWeightCarry = 1;
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_AmmoBox_F: MET_EmptyBox_AMMO_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "16th Ammo Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons
		{
			class MET_DC15A_PLASTIC
			{
				count = 6;
				weapon = "MET_DC15A_PLASTIC";
			};
			class MET_DC15S
			{
				count = 6;
				weapon = "MET_DC15S";
			};
			class MET_DC17SA
			{
				count = 6;
				weapon = "MET_DC17SA";
			};
		};
		class TransportMagazines
		{
			class MET_DC15A_mag
			{
				count = 40;
				magazine = "MET_DC15A_mag";
			};
			class MET_DC15L_mag
			{
				count = 40;
				magazine = "MET_DC15L_mag";
			};
			class MET_pellet_mag
			{
				count = 40;
				magazine = "MET_pellet_mag";
			};
			class MET_blaster_pistol_battery
			{
				count = 40;
				magazine = "MET_blaster_pistol_battery";
			};
			class MET_DC15x_mag
			{
				count = 40;
				magazine = "MET_DC15x_mag";
			};
			class MET_Valken_mag
			{
				count = 40;
				magazine = "MET_Valken_mag";
			};
			//Grenades for the Grenadiers
			class 1Rnd_HE_Grenade_shell
			{
				count = 6;
				magazine = "1Rnd_HE_Grenade_shell";
			};
			class 3Rnd_HE_Grenade_shell
			{
				count = 6;
				magazine = "3Rnd_HE_Grenade_shell";
			};
			//Smoke Shells
			class 1Rnd_Smoke_Grenade_shell
			{
				count = 6;
				magazine = "1Rnd_Smoke_Grenade_shell";
			};
			class 3Rnd_Smoke_Grenade_shell
			{
				count = 6;
				magazine = "3Rnd_Smoke_Grenade_shell";
			};
			class 1Rnd_SmokeRed_Grenade_shell
			{
				count = 6;
				magazine = "1Rnd_SmokeRed_Grenade_shell";
			};
			class 3Rnd_SmokeRed_Grenade_shell
			{
				count = 6;
				magazine = "3Rnd_SmokeRed_Grenade_shell";
			};
			class 1Rnd_SmokeBlue_Grenade_shell
			{
				count = 6;
				magazine = "1Rnd_SmokeBlue_Grenade_shell";
			};
			class 3Rnd_SmokeBlue_Grenade_shell
			{
				count = 6;
				magazine = "3Rnd_SmokeBlue_Grenade_shell";
			};
			class 1Rnd_SmokePurple_Grenade_shell
			{
				count = 6;
				magazine = "1Rnd_SmokePurple_Grenade_shell";
			};
			class 3Rnd_SmokePurple_Grenade_shell
			{
				count = 6;
				magazine = "3Rnd_SmokePurple_Grenade_shell";
			};
			class ACE_40mm_Flare_white
			{
				count = 6;
				magazine = "ACE_40mm_Flare_white";
			};		
			class ACE_40mm_Flare_green
			{
				count = 6;
				magazine = "ACE_40mm_Flare_green";
			};
			class ACE_40mm_Flare_red
			{
				count = 6;
				magazine = "ACE_40mm_Flare_red";
			};
			class ACE_40mm_Flare_ir
			{
				count = 6;
				magazine = "ACE_40mm_Flare_ir";
			};															
			//End Grenades
			class MET_blaster_battery
			{
				count = 40;
				magazine = "MET_blaster_battery";
			};
		};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class MET_RocExpBox_F: MET_EmptyBox_EXP_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "16th Explosives Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons
		{
			class plx_16th
			{
				count = 5;
				weapon = "plx_16th";
			};
			class MET_PLX1_AA
			{
				count = 5;
				weapons = "MET_PLX1_AA";
			};
			class rps_16th
			{
				count = 5;
				weapon = "rps_16th";
			};
		};
		class TransportMagazines
		{
			class 3AS_ThermalDetonator
			{
				count = 16;
				magazine = "3AS_ThermalDetonator";
			};
			class 442_SmokeShellwhite
			{
				count = 16;
				magazine = "442_SmokeShellwhite";
			};
			class metal_at_mag
			{
				count = 16;
				magazine = "metal_at_mag";
			};
			class metal_aa_mag
			{
				count = 16;
				magazine = "metal_aa_mag";
			};
			class metal_ap_mag
			{
				count = 16;
				magazine = "metal_ap_mag";
			};
			class DBA_90mm_IK55_HEAT_x1_mag
			{
				count = 16;
				magazine = "DBA_90mm_IK55_HEAT_x1_mag";
			};
			class DBA_90mm_IK55T_THEAT_x1_mag
			{
				count = 16;
				magazine = "DBA_90mm_IK55T_THEAT_x1_mag";
			};
			class DBA_90mm_IK60_HEP_x1_mag
			{
				count = 16;
				magazine = "DBA_90mm_IK60_HEP_x1_mag";
			};
			class DBA_90mm_IK40_FRAG_x1_mag
			{
				count = 16;
				magazine = "DBA_90mm_IK40_FRAG_x1_mag";
			};
			class DBA_90mm_IK65_AB_x1_mag
			{
				count = 16;
				magazine = "DBA_90mm_IK65_AB_x1_mag";
			};
		};
		class TransportItems
		{
			class ToolKit
			{
				count = 10;
				name = "ToolKit";
			};
			class MineDetector
			{
				count = 10;
				name = "MineDetector";
			};
			class ACE_Clacker
			{
				count = 10;
				name = "ACE_Clacker";
			};
			class ACE_M26_Clacker
			{
				count = 10;
				name = "ACE_M26_Clacker";
			};
			class ACE_DefusalKit
			{
				count = 10;
				name = "ACE_DefusalKit";
			};
		};
		class TransportBackpacks{};
	};
	class MET_MedicalBox_F: MET_EmptyBox_MED_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "16th Medical Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{
			class SquadShieldMagazine
			{
				magazine = "SquadShieldMagazine";
				count = 4;
			};
		};
		class TransportItems
		{
			class LFP_item_bacta_bandage
			{
				name = "LFP_item_bacta_bandage";
				count = 150;
			};
			class kat_Carbonate
			{
				name = "kat_Carbonate";
				count = 50;
			};
			class ACE_personalAidKit
			{
				name = "ACE_personalAidKit";
				count = 50;
			};
			class kat_X_AED
			{
				name = "kat_X_AED";
				count = 5;
			};
			class kat_accuvac
			{
				name = "kat_accuvac";
				count = 5;
			};
			class kat_aatKit
			{
				name = "kat_aatKit";
				count = 10;
			};
			class kat_IV_16
			{
				name = "kat_IV_16";
				count = 50;
			};
			class kat_chestSeal
			{
				name = "kat_chestSeal";
				count = 50;
			};
			class kat_IO_FAST
			{
				name = "kat_IO_FAST";
				count = 50;
			};
			class kat_larynx
			{
				name = "kat_larynx";
				count = 50;
			};
			class kat_Pulseoximeter
			{
				name = "kat_Pulseoximeter";
				count = 5;
			};
			class LFP_item_injector_red
			{
				name = "LFP_item_injector_red";
				count = 20;
			};
			class LFP_item_injector_blue
			{
				name = "LFP_item_injector_blue";
				count = 20;
			};
			class kat_TXA
			{
				name = "kat_TXA";
				count = 50;
			};
			class ACE_adenosine
			{
				name = "ACE_adenosine";
				count = 20;
			};
			class kat_EACA
			{
				name = "kat_EACA";
				count = 50;
			};
			class kat_naloxone
			{
				name = "kat_naloxone";
				count = 15;
			};
			class kat_PainkillerItem
			{
				name = "kat_PiankillerItem";
				count = 25;
			};
			class ACE_splint
			{
				name = "ACE_splint";
				count = 50;
			};
			class ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 50;
			};
			class KAT_guedel
			{
				name = "Kat_guedel";
				count = 25;
			};
			class ACE_plasmaIV_250
			{
				name = "ACE_plasmaIV_250";
				count = 20;
			};
			class ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 20;
			};
			class ACE_plasmaIV
			{
				name = "ACE_plasmaIV";
				count = 20;
			};
			class ACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 20;
			};
			class ACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 20;
			};
		};
		class TransportBackpacks{};
	};
	class MET_RadioBox_F: MET_EmptyBox_RAD_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "16th Radio Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems
		{
			class TFAR_anprc152
			{
				name = "TFAR_anprc152";
				count = 50;
			};
			class JLTS_clone_comlink
			{
				name = "JLTS_clone_comlink";
				count = 50;
			};
			class SWLB_comlink
			{
				name = "SWLB_comlink";
				count = 50;
			};
			class ls_comlink_aur
			{
				name = "ls_comlink_aur";
				count = 50;
			};
		};
	};
	class MET_MortarBox_F: MET_EmptyBox_MOR_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "16th Mortar Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks
		{
			class 3AS_Republic_Mortar_Bag
			{
				backpack = "3AS_Republic_Mortar_Bag";
				count = 10;
			};
		};
	};
	class MET_EwebBox_F: MET_EmptyBox_EWEB_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "16th EWEB Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks
		{
			class 3AS_Republic_HR_Bag
			{
				backpack = "3AS_Republic_HR_Bag";
				count = 10;
			};
			class 3AS_Republic_HR_Shield_Bag
			{
				backpack = "3AS_Republic_HR_Shield_Bag";
				count = 10;
			};			
		};
	};		
	class MET_EODBox_F: MET_EmptyBox_EOD_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "16th EOD Resupply Box";
		editorCategory = "B_MET_Props_F";
		editorSubcategory = "O_MET_Props";
		transportMaxWeapons = 10000;
		transportMaxMagazines = 10000;
		transportMaxItems = 10000;
		transportMaxBackpacks = 10000;
		maximumload = 10000;
		class TransportWeapons{};
		class TransportMagazines{

			class OPTRE_c7_remote_throwable_sticky_mag
			{
				count = 10;
				magazine = "OPTRE_c7_remote_throwable_sticky_mag";
			};			
			class 3AS_DetPack
			{
				count = 10;
				magazine = "3AS_DetPack";
			};
			class 3AS_ThrowableCharge
			{
				count = 10;
				magazine = "3AS_ThrowableCharge";
			};
			class MET_Weapons_Mags_flashnade
			{
				count = 10;
				magazine = "MET_Weapons_Mags_flashnade";
			};			

		};
		class TransportItems{
			class ACE_DefusalKit
			{
				count = 12;
				name = "ACE_DefusalKit";
			};
			class MineDetector
			{
				count = 12;
				name = "MineDetector";
			};
			class ACE_M26_Clacker
			{
				count = 12;
				name = "ACE_M26_Clacker";
			};						
		};
		class TransportBackpacks{};
	};		
	/*class SoxesProps_ResupplyBox;
	class Box_MET_Base: SoxesProps_ResupplyBox
	{
		class UserActions;
		scope=1;
		scopecurator=2;
		author="Watchdog, Sox";
		displayname="[16th] Resupply Box (Base)";
		maximumLoad=1210;
		editorCategory="B_MET_Props_F";
		editorSubcategory="O_MET_Props";
		hiddenSelections[]=
		{
			"Camo"
		};
		class Damage
		{
			mat[]={};
		};
		ace_dragging_ignoreWeight=1;
		ace_dragging_ignoreWeightCarry=0;
	};
    class Box_MET_Ammo: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Ammo)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Ammo_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_MET_DC15A_mag
			{
				magazine="MET_DC15A_mag";
				count=50;
			};
            class _xx_MET_DC15L_mag
			{
				magazine="MET_DC15L_mag";
				count=30;
			};
			class _xx_MET_DC15C_mag
			{
				magazine="MET_DC15C_mag";
				count=50;
			};
			class _xx_MET_DC15x_mag
			{
				magazine="MET_DC15x_mag";
				count=10;
			};
			class _xx_MET_DC15x_at_mag
			{
				magazine="MET_DC15x_at_mag";
				count=5;
			};
			class _xx_MET_Valken_mag
			{
				magazine="MET_Valken_mag";
				count=20;
			};
			class _xx_MET_blaster_battery
			{
				magazine="MET_blaster_battery";
				count=20;
			};
			class _xx_MET_blaster_battery_green
			{
				magazine="MET_blaster_battery_green";
				count=5;
			};
			class _xx_MET_HE_Grenade
			{
				magazine="MET_HE_Grenade";
				count=50;
			};
			class _xx_MET_AT_Grenade
			{
				magazine="MET_AT_Grenade";
				count=30;
			};
			class _xx_MET_slug_mag
			{
				magazine="MET_slug_mag";
				count=15;
			};
			class _xx_MET_pellet_mag
			{
				magazine="MET_pellet_mag";
				count=15;
			};
			class _xx_MET_blaster_pistol_battery
			{
				magazine="MET_blaster_pistol_battery";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeBlue_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeGreen_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeOrange_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokePurple_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeRed_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_Smoke_Grenade_shell
			{
				magazine="OPTRE_1Rnd_Smoke_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeYellow_Grenade_shell";
				count=20;
			};
		};
		ace_dragging_ignoreWeightCarry=1;
	};
    class Box_MET_Airborne: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Airborne)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Airborne_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_MET_DC15A_mag
			{
				magazine="MET_DC15A_mag";
				count=30;
			};
            class _xx_MET_DC15L_mag
			{
				magazine="MET_DC15L_mag";
				count=30;
			};
			class _xx_MET_DC15C_mag
			{
				magazine="MET_DC15C_mag";
				count=80;
			};
			class _xx_MET_Valken_mag
			{
				magazine="MET_Valken_mag";
				count=20;
			};
			class _xx_MET_AA_SINGLE
			{
				magazine="MET_AA_SINGLE";
				count=20;
			};
			class _xx_MET_AP_SINGLE
			{
				magazine="MET_AP_SINGLE";
				count=10;
			};
			class _xx_MET_AT_SINGLE
			{
				magazine="MET_AT_SINGLE";
				count=20;
			};
			class _xx_MET_HE_Grenade
			{
				magazine="MET_HE_Grenade";
				count=50;
			};
			class _xx_MET_AT_Grenade
			{
				magazine="MET_AT_Grenade";
				count=30;
			};
			class _xx_MET_slug_mag
			{
				magazine="MET_slug_mag";
				count=15;
			};
			class _xx_MET_pellet_mag
			{
				magazine="MET_pellet_mag";
				count=15;
			};
			class _xx_MET_blaster_pistol_battery
			{
				magazine="MET_blaster_pistol_battery";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeBlue_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeGreen_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeOrange_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokePurple_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokePurple_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeRed_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeRed_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_Smoke_Grenade_shell
			{
				magazine="OPTRE_1Rnd_Smoke_Grenade_shell";
				count=20;
			};
			class _xx_OPTRE_1Rnd_SmokeYellow_Grenade_shell
			{
				magazine="OPTRE_1Rnd_SmokeYellow_Grenade_shell";
				count=20;
			};
		};
		ace_dragging_ignoreWeightCarry=1;
	};
    class Box_MET_FieldAssets: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Field Assets)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_FieldAssets_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_MET_Weapons_Mags_flashnade
			{
				magazine="MET_Weapons_Mags_flashnade";
				count=10;
			};
			class _xx_MET_Weapons_Mags_Thermal_Impacter
			{
				magazine="MET_Weapons_Mags_Thermal_Impacter";
				count=30;
			};
			class _xx_MET_Weapons_Mags_Thermal_Detonator
			{
				magazine="MET_Weapons_Mags_Thermal_Detonator";
				count=50;
			};
			class _xx_MET_Weapons_Mags_Thermal_Imploder
			{
				magazine="MET_Weapons_Mags_Thermal_Imploder";
				count=20;
			};
			class _xx_SquadShieldMagazine
			{
				magazine="SquadShieldMagazine";
				count=2;
			};
			class _xx_ShieldGrenade_Mag
			{
				magazine="ShieldGrenade_Mag";
				count=10;
			};
			class _xx_MET_Smoke_Blue
			{
				magazine="MET_Smoke_Blue";
				count=10;
			};
			class _xx_MET_Smoke_Green
			{
				magazine="MET_Smoke_Green";
				count=10;
			};
			class _xx_MET_Smoke_Orange
			{
				magazine="MET_Smoke_Orange";
				count=10;
			};
			class _xx_MET_Smoke_Purple
			{
				magazine="MET_Smoke_Purple";
				count=10;
			};
			class _xx_MET_Smoke_Red
			{
				magazine="MET_Smoke_Red";
				count=10;
			};
			class _xx_MET_Smoke_White
			{
				magazine="MET_Smoke_White";
				count=30;
			};
			class _xx_MET_Smoke_Yellow
			{
				magazine="MET_Smoke_Yellow";
				count=10;
			};
			class _xx_MET_LumaBlue
			{
				magazine="MET_LumaBlue";
				count=10;
			};
			class _xx_MET_LumaRed
			{
				magazine="MET_LumaRed";
				count=10;
			};
			class _xx_MET_LumaGreen
			{
				magazine="MET_LumaGreen";
				count=10;
			};
			class _xx_MET_LumaYellow
			{
				magazine="MET_LumaYellow";
				count=10;
			};
		};
		class TransportItems
		{
		};
		ace_dragging_ignoreWeightCarry=1;
	};
    class Box_MET_Ordinance: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Demolitions)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Ordinance_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_3AS_DetPack
			{
				magazine="3AS_DetPack";
				count=50;
			};
		};
	};
    class Box_MET_Mortars: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Mortars)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Mortars_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_3AS_JLTS_MK39_AA
			{
				magazine="3AS_JLTS_MK39_AA";
				count=0;
			};
		};
		class TransportBackpacks
		{
			class _xx_3AS_Republic_Mortar_Bag
			{
				backpack="3AS_Republic_Mortar_Bag";
				count=4;
			};
		};
	};
    class Box_MET_Medical: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Medical)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Medical_CO.paa"
		};
		class TransportItems
		{
            class _xx_ACE_personalAidKit
            {
                count=5;
                name="ACE_personalAidKit";
            };
            class _xx_kat_Carbonate
            {
                count=40;
                name="kat_Carbonatec";
            };
            class _xx_kat_accuvac
            {
                count=5;
                name="kat_accuvac";
            };
            class _xx_kat_X_AED
            {
                count=5;
                name="kat_X_AED";
            };
            class _xx_LFP_item_bacta_bandage
            {
                count=2310;
                name="LFP_item_bacta_bandage";
            };
            class _xx_ACE_plasmaIV_250
            {
                count=100;
                name="ACE_plasmaIV_250";
            };
            class _xx_ACE_plasmaIV_500
            {
                count=120;
                name="ACE_plasmaIV_500";
            };
            class _xx_ACE_plasmaIV
            {
                count=120;
                name="ACE_plasmaIV";
            };
            class _xx_kat_chestSeal
            {
                count=100;
                name="kat_chestSeal";
            };
            class _xx_LFP_item_injector_red
            {
                count=100;
                name="LFP_item_injector_red";
            };
            class _xx_ACE_painkillers
            {
                count=20;
                name="ACE_painkillers";
            };
            class _xx_kat_larynx
            {
                count=100;
                name="kat_larynx";
            };
            class _xx_ACE_tourniquet
            {
                count=100;
                name="ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count=40;
                name="ACE_splint";
            };
        };
		ace_dragging_ignoreWeightCarry=1;
	};
    class Box_MET_Rockets: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Rockets)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Rockets_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_metal_aa_mag
			{
				magazine="metal_aa_mag";
				count=15;
			};
			class _xx_metal_ap_mag
			{
				magazine="metal_ap_mag";
				count=15;
			};
			class _xx_metal_at_mag
			{
				magazine="metal_at_mag";
				count=20;
			};
			class _xx_3AS_JLTS_MK39_AA
			{
				magazine="3AS_JLTS_MK39_AA";
				count=15;
			};
			class _xx_DBA_90mm_IK40_FRAG_x1_mag
			{
				magazine="DBA_90mm_IK40_FRAG_x1_mag";
				count=20;
			};
			class _xx_DBA_90mm_IK55_HEAT_x1_mag
			{
				magazine="DBA_90mm_IK55_HEAT_x1_mag";
				count=30;
			};
			class _xx_DBA_90mm_IK60_HEP_x1_mag
			{
				magazine="DBA_90mm_IK60_HEP_x1_mag";
				count=20;
			};
			class _xx_MET_AA_SINGLE
			{
				magazine="MET_AA_SINGLE";
				count=10;
			};
			class _xx_MET_AP_SINGLE
			{
				magazine="MET_AP_SINGLE";
				count=10;
			};
			class _xx_MET_AT_SINGLE
			{
				magazine="MET_AT_SINGLE";
				count=10;
			};
		};
	};
    class Box_MET_Engineer: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Engineer)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Engineer_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_MET_pellet_mag
			{
				magazine="MET_pellet_mag";
				count=20;
			};
			class _xx_MET_slug_mag
			{
				magazine="MET_slug_mag";
				count=15;
			};
		};
		class TransportItems
		{
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
		class TransportBackpacks
		{
			class _xx_JLTS_portable_shield_gar_backpack
			{
				backpack="JLTS_portable_shield_gar_backpack";
				count=1;
			};
			class _xx_JLTS_UST_turret_GAR_backpack
			{
				backpack="JLTS_UST_turret_GAR_backpack";
				count=3;
			};
            class _xx_3AS_Republic_HR_Shield_Bag
            {
                backpack="3AS_Republic_HR_Shield_Bag";
				count=5;
            }
		};
	};
    class Box_MET_ARF: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (ARF)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Arf_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_ACE_HuntIR_M203
			{
				magazine="ACE_HuntIR_M203";
				count=10;
			};
			class _xx_MET_DC15A_mag
			{
				magazine="MET_DC15A_mag";
				count=20;
			};
			class _xx_MET_Valken_mag
			{
				magazine="MET_Valken_mag";
				count=10;
			};
			class _xx_MET_blaster_pistol_battery
			{
				magazine="MET_blaster_pistol_battery";
				count=15;
			};
			class _xx_MET_DC15x_mag
			{
				magazine="MET_DC15x_mag";
				count=10;
			};
			class _xx_MET_DC15x_at_mag
			{
				magazine="MET_DC15x_at_mag";
				count=5;
			};
		};
		class TransportItems
		{
			class _xx_kat_Carbonate
            {
                count=5;
                name="kat_Carbonatec";
            };
            class _xx_LFP_item_bacta_bandage
            {
                count=200;
                name="LFP_item_bacta_bandage";
            };
            class _xx_ACE_plasmaIV_250
            {
                count=10;
                name="ACE_plasmaIV_250";
            };
            class _xx_ACE_plasmaIV_500
            {
                count=10;
                name="ACE_plasmaIV_500";
            };
            class _xx_ACE_plasmaIV
            {
                count=10;
                name="ACE_plasmaIV";
            };
            class _xx_kat_chestSeal
            {
                count=10;
                name="kat_chestSeal";
            };
            class _xx_LFP_item_injector_red
            {
                count=10;
                name="LFP_item_injector_red";
            };
            class _xx_ACE_painkillers
            {
                count=5;
                name="ACE_painkillers";
            };
            class _xx_kat_larynx
            {
                count=5;
                name="kat_larynx";
            };
            class _xx_ACE_tourniquet
            {
                count=30;
                name="ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count=15;
                name="ACE_splint";
            };
		};
		class TransportBackpacks
		{
			class _xx_JLTS_UAV_prowler_gar_backpack
			{
				backpack="JLTS_UAV_prowler_gar_backpack";
				count=1;
			};
		};
	};
    class Box_MET_ARC: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (ARC)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Arc_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_MET_DC15A_mag
			{
				magazine="MET_DC15A_mag";
				count=50;
			};
			class _xx_MET_Chaingun_AT_Drum_Mag
			{
				magazine="MET_Chaingun_AT_Drum_Mag";
				count=20;
			};
			class _xx_MET_Chaingun_HE_Drum_Mag
			{
				magazine="MET_Chaingun_HE_Drum_Mag";
				count=20;
			};
			class _xx_MET_DC19X_Mag
			{
				magazine="MET_DC19X_Mag";
				count=20;
			};
			class _xx_MET_DC19E_mag
			{
				magazine="MET_DC19E_mag";
				count=30;
			};
			class _xx_MET_3Rnd_HE_Grenade_shell
			{
				magazine="MET_3Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_MET_3Rnd_AT_Grenade_shell
			{
				magazine="MET_3Rnd_AT_Grenade_shell";
				count=10;
			};
			class _xx_MET_6Rnd_AT_Grenade_shell
			{
				magazine="MET_6Rnd_AT_Grenade_shell";
				count=10;
			};
			class _xx_MET_6Rnd_HE_Grenade_shell
			{
				magazine="MET_6Rnd_HE_Grenade_shell";
				count=10;
			};
			class _xx_MET_6Rnd_HE_RocketGrenade
			{
				magazine="MET_6Rnd_HE_RocketGrenade";
				count=10;
			};
			class _xx_JLTS_stun_mag_long
			{
				magazine="JLTS_stun_mag_long";
				count=6;
			};
			class _xx_MET_Weapons_Mags_flashnade
			{
				magazine="MET_Weapons_Mags_flashnade";
				count=10;
			};
			class _xx_MET_Weapons_Mags_Thermal_Impacter
			{
				magazine="MET_Weapons_Mags_Thermal_Impacter";
				count=30;
			};
			class _xx_MET_Weapons_Mags_Thermal_Detonator
			{
				magazine="MET_Weapons_Mags_Thermal_Detonator";
				count=50;
			};
			class _xx_MET_Weapons_Mags_Thermal_Imploder
			{
				magazine="MET_Weapons_Mags_Thermal_Imploder";
				count=20;
			};
			class _xx_SquadShieldMagazine
			{
				magazine="SquadShieldMagazine";
				count=2;
			};
			class _xx_ShieldGrenade_Mag
			{
				magazine="ShieldGrenade_Mag";
				count=10;
			};
			class _xx_MET_Smoke_Blue
			{
				magazine="MET_Smoke_Blue";
				count=10;
			};
			class _xx_MET_Smoke_Green
			{
				magazine="MET_Smoke_Green";
				count=10;
			};
			class _xx_MET_Smoke_Orange
			{
				magazine="MET_Smoke_Orange";
				count=10;
			};
			class _xx_MET_Smoke_Purple
			{
				magazine="MET_Smoke_Purple";
				count=10;
			};
			class _xx_MET_Smoke_Red
			{
				magazine="MET_Smoke_Red";
				count=10;
			};
			class _xx_MET_Smoke_White
			{
				magazine="MET_Smoke_White";
				count=30;
			};
			class _xx_MET_Smoke_Yellow
			{
				magazine="MET_Smoke_Yellow";
				count=10;
			};
			class _xx_MET_LumaBlue
			{
				magazine="MET_LumaBlue";
				count=10;
			};
			class _xx_MET_LumaRed
			{
				magazine="MET_LumaRed";
				count=10;
			};
			class _xx_MET_LumaGreen
			{
				magazine="MET_LumaGreen";
				count=10;
			};
			class _xx_MET_LumaYellow
			{
				magazine="MET_LumaYellow";
				count=10;
			};
			class _xx_C12_Remote_Mag
			{
				magazine="C12_Remote_Mag";
				count=5;
			};
		};
        class TransportWeapons
		{
            class _xx_MET_DC15A
            {
                count=5;
                name="MET_DC15A";
            };
            class _xx_MET_DC15A_ugl
            {
                count=5;
                name="MET_DC15A_ugl";
            };
            class _xx_MET_WestarM5_F
            {
                count=5;
                name="MET_WestarM5_F";
            };
            class _xx_MET_WestarM5_GL
            {
                count=5;
                name="MET_WestarM5_GL";
            };
            class _xx_MET_DC19A
            {
                count=5;
                name="MET_DC19A";
            };
            class _xx_MET_DC19
            {
                count=5;
                name="MET_DC19";
            };
            class _xx_MET_DC19X
            {
                count=5;
                name="MET_DC19X";
            };
            class _xx_MET_Chaingun
            {
                count=5;
                name="MET_Chaingun";
            };
        };
		class TransportItems
		{
			class _xx_nvg_16_haz_range_1
            {
                count=5;
                name="nvg_16_haz_range_1";
            };
            class _xx_nvg_16_haz_range_2
            {
                count=5;
                name="nvg_16_haz_range_2";
            };
            class _xx_nvg_16_haz_range_3
            {
                count=5;
                name="nvg_16_haz_range_3";
            };
            class _xx_nvg_16_haz_range_4
            {
                count=5;
                name="nvg_16_haz_range_4";
            };
			class _xx_kat_Carbonate
            {
                count=5;
                name="kat_Carbonatec";
            };
            class _xx_LFP_item_bacta_bandage
            {
                count=200;
                name="LFP_item_bacta_bandage";
            };
            class _xx_ACE_plasmaIV_250
            {
                count=10;
                name="ACE_plasmaIV_250";
            };
            class _xx_ACE_plasmaIV_500
            {
                count=10;
                name="ACE_plasmaIV_500";
            };
            class _xx_ACE_plasmaIV
            {
                count=10;
                name="ACE_plasmaIV";
            };
            class _xx_kat_chestSeal
            {
                count=10;
                name="kat_chestSeal";
            };
            class _xx_LFP_item_injector_red
            {
                count=10;
                name="LFP_item_injector_red";
            };
            class _xx_ACE_painkillers
            {
                count=5;
                name="ACE_painkillers";
            };
            class _xx_kat_larynx
            {
                count=5;
                name="kat_larynx";
            };
            class _xx_ACE_tourniquet
            {
                count=30;
                name="ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count=15;
                name="ACE_splint";
            };
		};
	};
    class Box_MET_CommandoGroup: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Commando Group)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_FoxtrotGroup_CO.paa"
		};
		class TransportMagazines
		{
			class _xx_MET_DC17M_mag
			{
				magazine="MET_DC17M_mag";
				count=30;
			};
			class _xx_MET_DC17M_Red_mag
			{
				magazine="MET_DC17M_Red_mag";
				count=30;
			};
			class _xx_MET_DC17M_Sniper_mag
			{
				magazine="MET_DC17M_Sniper_mag";
				count=20;
			};
			class _xx_MET_DC17M_Sniper_Red_mag
			{
				magazine="MET_DC17M_Sniper_Red_mag";
				count=20;
			};
			class _xx_MET_DC17M_Grenade
			{
				magazine="MET_DC17M_Grenade";
				count=20;
			};
			class _xx_MET_dc15sa_battery
			{
				magazine="MET_dc15sa_battery";
				count=20;
			};
			class _xx_MET_dc15sa_red_battery
			{
				magazine="MET_dc15sa_red_battery";
				count=20;
			};
            
		};
		class TransportItems
		{
			class _xx_kat_Carbonate
            {
                count=5;
                name="kat_Carbonatec";
            };
            class _xx_LFP_item_bacta_bandage
            {
                count=200;
                name="LFP_item_bacta_bandage";
            };
            class _xx_ACE_plasmaIV_250
            {
                count=10;
                name="ACE_plasmaIV_250";
            };
            class _xx_ACE_plasmaIV_500
            {
                count=10;
                name="ACE_plasmaIV_500";
            };
            class _xx_ACE_plasmaIV
            {
                count=10;
                name="ACE_plasmaIV";
            };
            class _xx_kat_chestSeal
            {
                count=10;
                name="kat_chestSeal";
            };
            class _xx_LFP_item_injector_red
            {
                count=10;
                name="LFP_item_injector_red";
            };
            class _xx_ACE_painkillers
            {
                count=5;
                name="ACE_painkillers";
            };
            class _xx_kat_larynx
            {
                count=5;
                name="kat_larynx";
            };
            class _xx_ACE_tourniquet
            {
                count=30;
                name="ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count=15;
                name="ACE_splint";
            };
        };
	};
    class Box_MET_Turrets: Box_MET_Base
	{
		scope=2;
		scopecurator=2;
		displayname="[16th] Resupply Box (Turrets)";
		hiddenSelectionsTextures[]=
		{
			"\212th\Other\212_Box\Textures\ResupplyBox_Turrets_CO.paa"
		};
		class TransportMagazines
		{
		};
		class TransportBackpacks
		{
			class _xx_3AS_Republic_HR_Shield_Bag
			{
				backpack="3AS_Republic_HR_Shield_Bag";
				count=6;
			};
		};
	};*/
};