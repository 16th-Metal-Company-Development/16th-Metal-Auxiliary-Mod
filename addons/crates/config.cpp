#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class crates_16
	{
		units[]=
		{
			"metal_ammo_mini",
            "metal_ammo_small",
            "metal_medical_small",
            "metal_medical_med",
            "metal_ammo_med",
            "metal_exp_med",
            "metal_medical_large",
            "metal_ammo_large",
            "metal_exp_large",
            "metal_hazmat",
            "Box_MET_Ammo",
            "Box_MET_Airborne",
            "Box_MET_FieldAssets",
            "Box_MET_Ordinance",
            "Box_MET_Mortars",
            "Box_MET_Rockets",
            "Box_MET_Engineer",
            "Box_MET_ARF",
            "Box_MET_Medical",
            "Box_MET_ARC",
            "Box_MET_CommandoGroup",
            "Box_MET_Turrets"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_characters_F",
		};
		author="DJ, LCDR Wolf, 212th Team";
		Name="crates_16";
	};
};
class ACEX_Fortify_Presets
{
    class sixteenth
    {
        displayName = "16th Engineers";
        objects[] = 
        {
            {"3AS_HeavyRepeater_Armoured",8},
            {"33AS_Shield_3_Prop",8},
            {"3AS_Shield_5_Prop",8},
            {"3AS_Shield_C_Prop",8},
            {"Land_lsb_fob_hBarrier_3",13},
            {"Land_lsb_fob_hBarrier_5",13},
            {"Land_lsb_fob_hBarrierWall_4",28},
            {"Land_lsb_fob_hBarrierWall_7",28},
            {"Land_lsb_fob_hBarrier_corridor",28},
            {"Land_lsb_fob_hBarrier_tower",28},
            {"land_3AS_gar_tall",8},
            {"ls_flag_republic",1},
            {"land_3AS_Imperial_Checkpoint_Long_Green",8},
            {"land_3AS_Imperial_Checkpoint_Green",8},
            {"Land_SignCommand_01_stop_F",1},
            {"RoadCone_F",1}};
    };
};
class CfgEditorCategories
{
	class CfgEditorSubcategoriesMETAux // Category class, you point to it in editorCategory property
	{
		displayName = "[16th] Metal Company"; // Name visible in the list
	};
};
class CfgEditorSubcategories
{
	class SubcategoryResupply // Category class, you point to it in editorSubcategory property
	{
		displayName = "Supply Crates"; // Name visible in the list
	};
};
class CfgVehicles
{
    class 3AS_Supply_Large_Prop;
    class 3AS_Supply_Large_Ammo_Prop;
    class 3AS_Supply_Large_Black_Prop;
    class 3AS_Supply_Large_Blue_Prop;
    class 3AS_Supply_Large_Medical_Prop;
    class 3AS_Supply_Large_Red_Prop;
    class 3AS_Supply_Large_Green_Prop;
    class 3AS_Supply_Large_Orange_Prop;
    class 3AS_Small_Box_2_Prop;
    class 3as_Small_Box_5_prop;
    class 3AS_Small_Box_6_Prop;
    class 3AS_Small_Box_9_Prop;
    class 3AS_Small_Box_9_Black_Prop;
    class 3AS_Small_Box_9_Blue_Prop;
    class 3AS_Small_Box_9_Grey_Prop;
    class SoxesProps_ResupplyBox;
    /*class metal_ammo_mini: 3AS_Small_Box_2_Prop
    {
		displayName="Ammo Resupply (Mini)";
        scope=2;
		scopecurator=2;
        scopeArsenal=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=250;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
        class TransportMagazines
		{
            class _xx_MET_DC15A_mag
            {
                count=20;
                magazine="MET_DC15A_mag";
            };
            class _xx_MET_blaster_pistol_battery
            {
                count=10;
                magazine="MET_blaster_pistol_battery";
            };
            class _xx_MET_Weapons_Mags_Thermal_Detonator
            {
                count=10;
                magazine="MET_Weapons_Mags_Thermal_Detonator";
            };
        };
    };
    class metal_ammo_small: 3AS_Small_Box_6_Prop
    {
		displayName="Ammo Resupply (Small)";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=250;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
        class TransportMagazines
		{
            class _xx_MET_DC15A_mag
            {
                count=30;
                magazine="MET_DC15A_mag";
            };
            class _xx_MET_DC15L_mag
            {
                count=10;
                magazine="MET_DC15L_mag";
            };
            class _xx_MET_blaster_battery
            {
                count=10;
                magazine="MET_blaster_battery";
            };
            class _xx_MET_blaster_battery_green
            {
                count=2;
                magazine="MET_blaster_battery_green";
            };
            class _xx_MET_slug_mag
            {
                count=10;
                magazine="MET_slug_mag";
            };
            class _xx_MET_pellet_mag
            {
                count=20;
                magazine="MET_pellet_mag";
            };
            class _xx_MET_Valken_mag
            {
                count=10;
                magazine="MET_Valken_mag";
            };
            class _xx_MET_DC15x_at_mag
            {
                count=5;
                magazine="MET_DC15x_at_mag";
            };
            class _xx_MET_DC15x_mag
            {
                count=10;
                magazine="MET_DC15x_mag";
            };
            class _xx_MET_blaster_pistol_battery
            {
                count=20;
                magazine="MET_blaster_pistol_battery";
            };
            class _xx_DBA_90mm_IK55_HEAT_x1_mag
            {
                count=10;
                magazine="DBA_90mm_IK55_HEAT_x1_mag";
            };
            class _xx_DBA_90mm_IK40_FRAG_x1_mag
            {
                count=5;
                magazine="DBA_90mm_IK40_FRAG_x1_mag";
            };
            class _xx_DBA_90mm_IK60_HEP_x1_mag
            {
                count=10;
                magazine="DBA_90mm_IK60_HEP_x1_mag";
            };
            class _xx_metal_at_mag
            {
                count=10;
                magazine="metal_at_mag";
            };
            class _xx_metal_ap_mag
            {
                count=5;
                magazine="metal_ap_mag";
            };
            class _xx_metal_aa_mag
            {
                count=5;
                magazine="metal_aa_mag";
            };
            class _xx_3AS_JLTS_MK39_AA
            {
                count=5;
                magazine="3AS_JLTS_MK39_AA";
            };
            class _xx_1Rnd_HE_Grenade_shell
            {
                count=20;
                magazine="1Rnd_HE_Grenade_shell";
            };
            class _xx_ACE_HuntIR_M203
            {
                count=10;
                magazine="ACE_HuntIR_M203";
            };
            class _xx_MET_Smoke_Blue
            {
                count=10;
                magazine="MET_Smoke_Blue";
            };
            class _xx_MET_Smoke_Red
            {
                count=10;
                magazine="MET_Smoke_Red";
            };
            class _xx_MET_Smoke_White
            {
                count=20;
                magazine="MET_Smoke_White";
            };
            class _xx_MET_Weapons_Mags_Thermal_Impacter
            {
                count=20;
                magazine="MET_Weapons_Mags_Thermal_Impacter";
            };
            class _xx_MET_Weapons_Mags_Thermal_Detonator
            {
                count=25;
                magazine="MET_Weapons_Mags_Thermal_Detonator";
            };
            class _xx_SquadShieldMagazine
            {
                count=2;
                magazine="SquadShieldMagazine";
            };
        };
    };
    class metal_medical_small: 3as_Small_Box_5_prop
    {
		displayName="Medical Resupply (Small)";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=250;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
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
    class metal_medical_med: 3AS_Supply_Large_Medical_Prop
    {
		displayName="Medical Resupply (Medium)";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=17000;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
        class TransportItems
		{
            class _xx_ACE_personalAidKit
            {
                count=2;
                name="ACE_personalAidKit";
            };
            class _xx_kat_Carbonate
            {
                count=10;
                name="kat_Carbonatec";
            };
            class _xx_kat_accuvac
            {
                count=2;
                name="kat_accuvac";
            };
            class _xx_kat_X_AED
            {
                count=2;
                name="kat_X_AED";
            };
            class _xx_LFP_item_bacta_bandage
            {
                count=500;
                name="LFP_item_bacta_bandage";
            };
            class _xx_ACE_plasmaIV_250
            {
                count=30;
                name="ACE_plasmaIV_250";
            };
            class _xx_ACE_plasmaIV_500
            {
                count=30;
                name="ACE_plasmaIV_500";
            };
            class _xx_ACE_plasmaIV
            {
                count=30;
                name="ACE_plasmaIV";
            };
            class _xx_kat_chestSeal
            {
                count=30;
                name="kat_chestSeal";
            };
            class _xx_LFP_item_injector_red
            {
                count=30;
                name="LFP_item_injector_red";
            };
            class _xx_ACE_painkillers
            {
                count=10;
                name="ACE_painkillers";
            };
            class _xx_kat_larynx
            {
                count=30;
                name="kat_larynx";
            };
            class _xx_ACE_tourniquet
            {
                count=50;
                name="ACE_tourniquet";
            };
            class _xx_ACE_splint
            {
                count=20;
                name="ACE_splint";
            };
        };
    };
    class metal_ammo_med: 3AS_Supply_Large_Ammo_Prop
    {
		displayName="Ammo Resupply (Medium)";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=5000;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
        class TransportMagazines
		{
            class _xx_MET_DC15A_mag
            {
                count=100;
                magazine="MET_DC15A_mag";
            };
            class _xx_MET_DC15L_mag
            {
                count=20;
                magazine="MET_DC15L_mag";
            };
            class _xx_MET_blaster_battery
            {
                count=20;
                magazine="MET_blaster_battery";
            };
            class _xx_MET_blaster_battery_green
            {
                count=2;
                magazine="MET_blaster_battery_green";
            };
            class _xx_MET_slug_mag
            {
                count=20;
                magazine="MET_slug_mag";
            };
            class _xx_MET_pellet_mag
            {
                count=30;
                magazine="MET_pellet_mag";
            };
            class _xx_MET_Valken_mag
            {
                count=20;
                magazine="MET_Valken_mag";
            };
            class _xx_MET_DC15x_at_mag
            {
                count=10;
                magazine="MET_DC15x_at_mag";
            };
            class _xx_MET_DC15x_mag
            {
                count=20;
                magazine="MET_DC15x_mag";
            };
            class _xx_MET_blaster_pistol_battery
            {
                count=50;
                magazine="MET_blaster_pistol_battery";
            };
            class _xx_DBA_90mm_IK55_HEAT_x1_mag
            {
                count=30;
                magazine="DBA_90mm_IK55_HEAT_x1_mag";
            };
            class _xx_DBA_90mm_IK40_FRAG_x1_mag
            {
                count=20;
                magazine="DBA_90mm_IK40_FRAG_x1_mag";
            };
            class _xx_DBA_90mm_IK60_HEP_x1_mag
            {
                count=20;
                magazine="DBA_90mm_IK60_HEP_x1_mag";
            };
            class _xx_metal_at_mag
            {
                count=20;
                magazine="metal_at_mag";
            };
            class _xx_metal_ap_mag
            {
                count=10;
                magazine="metal_ap_mag";
            };
            class _xx_metal_aa_mag
            {
                count=10;
                magazine="metal_aa_mag";
            };
            class _xx_3AS_JLTS_MK39_AA
            {
                count=10;
                magazine="3AS_JLTS_MK39_AA";
            };
            class _xx_1Rnd_HE_Grenade_shell
            {
                count=30;
                magazine="1Rnd_HE_Grenade_shell";
            };
            class _xx_ACE_HuntIR_M203
            {
                count=10;
                magazine="ACE_HuntIR_M203";
            };
            class _xx_MET_Smoke_Blue
            {
                count=10;
                magazine="MET_Smoke_Blue";
            };
            class _xx_MET_Smoke_Red
            {
                count=10;
                magazine="MET_Smoke_Red";
            };
            class _xx_MET_Smoke_White
            {
                count=40;
                magazine="MET_Smoke_White";
            };
            class _xx_MET_Weapons_Mags_Thermal_Impacter
            {
                count=20;
                magazine="MET_Weapons_Mags_Thermal_Impacter";
            };
            class _xx_MET_Weapons_Mags_Thermal_Detonator
            {
                count=60;
                magazine="MET_Weapons_Mags_Thermal_Detonator";
            };
            class _xx_SquadShieldMagazine
            {
                count=5;
                magazine="SquadShieldMagazine";
            };
        };
    };
    class metal_exp_med: 3AS_Supply_Large_Orange_Prop
    {
		displayName="Explosive Resupply (Medium)";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=5000;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
        class TransportMagazines
		{
            class _xx_DBA_90mm_IK55_HEAT_x1_mag
            {
                count=30;
                magazine="DBA_90mm_IK55_HEAT_x1_mag";
            };
            class _xx_DBA_90mm_IK40_FRAG_x1_mag
            {
                count=20;
                magazine="DBA_90mm_IK40_FRAG_x1_mag";
            };
            class _xx_DBA_90mm_IK60_HEP_x1_mag
            {
                count=20;
                magazine="DBA_90mm_IK60_HEP_x1_mag";
            };
            class _xx_metal_at_mag
            {
                count=20;
                magazine="metal_at_mag";
            };
            class _xx_metal_ap_mag
            {
                count=10;
                magazine="metal_ap_mag";
            };
            class _xx_metal_aa_mag
            {
                count=10;
                magazine="metal_aa_mag";
            };
            class _xx_3AS_JLTS_MK39_AA
            {
                count=10;
                magazine="3AS_JLTS_MK39_AA";
            };
            class _xx_MET_Weapons_Mags_Thermal_Impacter
            {
                count=40;
                magazine="MET_Weapons_Mags_Thermal_Impacter";
            };
            class _xx_MET_Weapons_Mags_Ctype
            {
                count=25;
                magazine="MET_Weapons_Mags_Ctype";
            };
            class _xx_MET_Weapons_Mags_Thermal_Imploder
            {
                count=50;
                magazine="MET_Weapons_Mags_Thermal_Imploder";
            };
            class _xx_MET_Weapons_Mags_Thermal_Detonator
            {
                count=150;
                magazine="MET_Weapons_Mags_Thermal_Detonator";
            };
            class _xx_SquadShieldMagazine
            {
                count=10;
                magazine="SquadShieldMagazine";
            };
        };
        class TransportItems
        {
            class _xx_3AS_DetPack
            {
                count=50;
                name="3AS_DetPack";
            };
        }
    };
    class metal_medical_large: 3AS_Small_Box_9_Grey_Prop
    {
		displayName="Medical Resupply (Large)";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=17000;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
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
    };
    class metal_ammo_large: 3AS_Small_Box_9_Black_Prop
    {
		displayName="Ammo Resupply (Large)";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=17000;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
        class TransportMagazines
		{
            class _xx_MET_DC15A_mag
            {
                count=250;
                magazine="MET_DC15A_mag";
            };
            class _xx_MET_DC15L_mag
            {
                count=30;
                magazine="MET_DC15L_mag";
            };
            class _xx_MET_blaster_battery
            {
                count=30;
                magazine="MET_blaster_battery";
            };
            class _xx_MET_blaster_battery_green
            {
                count=5;
                magazine="MET_blaster_battery_green";
            };
            class _xx_MET_slug_mag
            {
                count=50;
                magazine="MET_slug_mag";
            };
            class _xx_MET_pellet_mag
            {
                count=50;
                magazine="MET_pellet_mag";
            };
            class _xx_MET_Valken_mag
            {
                count=50;
                magazine="MET_Valken_mag";
            };
            class _xx_MET_DC15x_at_mag
            {
                count=10;
                magazine="MET_DC15x_at_mag";
            };
            class _xx_MET_DC15x_mag
            {
                count=50;
                magazine="MET_DC15x_mag";
            };
            class _xx_MET_blaster_pistol_battery
            {
                count=50;
                magazine="MET_blaster_pistol_battery";
            };
            class _xx_DBA_90mm_IK55_HEAT_x1_mag
            {
                count=30;
                magazine="DBA_90mm_IK55_HEAT_x1_mag";
            };
            class _xx_DBA_90mm_IK40_FRAG_x1_mag
            {
                count=20;
                magazine="DBA_90mm_IK40_FRAG_x1_mag";
            };
            class _xx_DBA_90mm_IK60_HEP_x1_mag
            {
                count=20;
                magazine="DBA_90mm_IK60_HEP_x1_mag";
            };
            class _xx_metal_at_mag
            {
                count=20;
                magazine="metal_at_mag";
            };
            class _xx_metal_ap_mag
            {
                count=10;
                magazine="metal_ap_mag";
            };
            class _xx_metal_aa_mag
            {
                count=10;
                magazine="metal_aa_mag";
            };
            class _xx_3AS_JLTS_MK39_AA
            {
                count=10;
                magazine="3AS_JLTS_MK39_AA";
            };
            class _xx_1Rnd_HE_Grenade_shell
            {
                count=40;
                magazine="1Rnd_HE_Grenade_shell";
            };
            class _xx_ACE_HuntIR_M203
            {
                count=20;
                magazine="ACE_HuntIR_M203";
            };
            class _xx_MET_Smoke_Blue
            {
                count=20;
                magazine="MET_Smoke_Blue";
            };
            class _xx_MET_Smoke_Red
            {
                count=20;
                magazine="MET_Smoke_Red";
            };
            class _xx_MET_Smoke_White
            {
                count=60;
                magazine="MET_Smoke_White";
            };
            class _xx_MET_Weapons_Mags_Thermal_Impacter
            {
                count=40;
                magazine="MET_Weapons_Mags_Thermal_Impacter";
            };
            class _xx_MET_Weapons_Mags_Thermal_Detonator
            {
                count=125;
                magazine="MET_Weapons_Mags_Thermal_Detonator";
            };
            class _xx_SquadShieldMagazine
            {
                count=12;
                magazine="SquadShieldMagazine";
            };
        };
    };
    class metal_exp_large: 3AS_Small_Box_9_Prop
    {
		displayName="Explosive Resupply (Large)";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=17000;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
        class TransportMagazines
		{
            class _xx_DBA_90mm_IK55_HEAT_x1_mag
            {
                count=60;
                magazine="DBA_90mm_IK55_HEAT_x1_mag";
            };
            class _xx_DBA_90mm_IK40_FRAG_x1_mag
            {
                count=40;
                magazine="DBA_90mm_IK40_FRAG_x1_mag";
            };
            class _xx_DBA_90mm_IK60_HEP_x1_mag
            {
                count=40;
                magazine="DBA_90mm_IK60_HEP_x1_mag";
            };
            class _xx_metal_at_mag
            {
                count=40;
                magazine="metal_at_mag";
            };
            class _xx_metal_ap_mag
            {
                count=20;
                magazine="metal_ap_mag";
            };
            class _xx_metal_aa_mag
            {
                count=20;
                magazine="metal_aa_mag";
            };
            class _xx_3AS_JLTS_MK39_AA
            {
                count=20;
                magazine="3AS_JLTS_MK39_AA";
            };
            class _xx_MET_Weapons_Mags_Thermal_Impacter
            {
                count=80;
                magazine="MET_Weapons_Mags_Thermal_Impacter";
            };
            class _xx_MET_Weapons_Mags_Ctype
            {
                count=50;
                magazine="MET_Weapons_Mags_Ctype";
            };
            class _xx_MET_Weapons_Mags_Thermal_Imploder
            {
                count=100;
                magazine="MET_Weapons_Mags_Thermal_Imploder";
            };
            class _xx_MET_Weapons_Mags_Thermal_Detonator
            {
                count=300;
                magazine="MET_Weapons_Mags_Thermal_Detonator";
            };
            class _xx_SquadShieldMagazine
            {
                count=20;
                magazine="SquadShieldMagazine";
            };
        };
        class TransportItems
        {
            class _xx_3AS_DetPack
            {
                count=50;
                name="3AS_DetPack";
            };
        }
    };
    class metal_hazmat: 3AS_Small_Box_9_Blue_Prop
    {
		displayName="Hazmat's Box o' goodies";
        scope=2;
		scopecurator=2;
		editorCategory="metal_EdCat_co";
		editorSubCategory="metal_co_EdSubCat_crates";
		maximumLoad=17000;
		transportMaxWeapons=12;
		transportMaxMagazines=69;
		transportMaxBackpacks=12;
        class TransportItems
		{
            class _xx_nvg_16_haz_range_1
            {
                count=1;
                name="nvg_16_haz_range_1";
            };
            class _xx_nvg_16_haz_range_2
            {
                count=1;
                name="nvg_16_haz_range_2";
            };
            class _xx_nvg_16_haz_range_3
            {
                count=1;
                name="nvg_16_haz_range_3";
            };
            class _xx_nvg_16_haz_range_4
            {
                count=1;
                name="nvg_16_haz_range_4";
            };
        };
        class TransportWeapons
		{
            class _xx_MET_DC15A
            {
                count=1;
                name="MET_DC15A";
            };
            class _xx_MET_DC15A_ugl
            {
                count=1;
                name="MET_DC15A_ugl";
            };
        };
    };*/
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
                name="ACE_personalAidKit";
                count=5;
            };
            class _xx_kat_Carbonate
            {
                name="kat_Carbonatec";
                count=40;
            };
            class _xx_kat_accuvac
            {
                name="kat_accuvac";
                count=5;
            };
            class _xx_kat_X_AED
            {
                name="kat_X_AED";
                count=5;
            };
            class _xx_LFP_item_bacta_bandage
            {
                name="LFP_item_bacta_bandage";
                count=2310;
            };
            class _xx_ACE_plasmaIV_250
            {
                name="ACE_plasmaIV_250";
                count=100;
            };
            class _xx_ACE_plasmaIV_500
            {
                name="ACE_plasmaIV_500";
                count=120;
            };
            class _xx_ACE_plasmaIV
            {
                name="ACE_plasmaIV";
                count=120;
            };
            class _xx_kat_chestSeal
            {
                name="kat_chestSeal";
                count=100;
            };
            class _xx_LFP_item_injector_red
            {
                name="LFP_item_injector_red";
                count=100;
            };
            class _xx_ACE_painkillers
            {
                name="ACE_painkillers";
                count=20;
            };
            class _xx_kat_larynx
            {
                name="kat_larynx";
                count=100;
            };
            class _xx_ACE_tourniquet
            {
                name="ACE_tourniquet";
                count=100;
            };
            class _xx_ACE_splint
            {
                name="ACE_splint";
                count=40;
            };
        };
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
                weapon = "MET_DC15A"; // Weapon class name
                count = 5; // Number of weapons
            };
            class _xx_MET_DC15A_ugl
            {
                weapon = "MET_DC15A_ugl"; // Weapon class name
                count = 5; // Number of weapons
            };
            class _xx_MET_WestarM5_F
            {
                weapon = "MET_WestarM5_F"; // Weapon class name
                count = 5; // Number of weapons
            };
            class _xx_MET_WestarM5_GL
            {
                weapon = "MET_WestarM5_GL"; // Weapon class name
                count = 5; // Number of weapons
            };
            class _xx_MET_DC19A
            {
                weapon = "MET_DC19A"; // Weapon class name
                count = 5; // Number of weapons
            };
            class _xx_MET_DC19
            {
                weapon = "MET_DC19"; // Weapon class name
                count = 5; // Number of weapons
            };
            class _xx_MET_DC19X
            {
                weapon = "MET_DC19X"; // Weapon class name
                count = 5; // Number of weapons
            };
            class _xx_MET_Chaingun
            {
                weapon = "MET_Chaingun"; // Weapon class name
                count = 5; // Number of weapons
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
	};
};