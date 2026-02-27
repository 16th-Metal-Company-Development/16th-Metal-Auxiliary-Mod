class CfgPatches
{
	class metal_inf_weap
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_blasterbolt"
		};
		requiredAddons[]=
		{
			"JLTS_weapons_DC15A",
			"JLTS_weapons_DC15S",
			"JLTS_weapons_DC15X",
			"JLTS_weapons_DC17SA",
			"JLTS_weapons_DP23",
			"JLTS_weapons_EPL2",
			"JLTS_weapons_PLX1",
			"JLTS_weapons_RPS6",
			"JLTS_weapons_Z6",
			"metal_weapons",
			"ls_weapons_zseries",
			"IDA_Republic"
		};
	};
};
//#include "XtdGearModels.hpp"
//#include "XtdGearInfos.hpp"
class Extended_FiredBIS_Eventhandlers
{
    class CAManBase
    {
		fired = "_this call FSNB_fnc_initNuclearPayload";
    };
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class 3AS_recoil_default;
	class MET_recoil_Z6: recoil_default
	{
		muzzleOuter[]={0,0.1,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.090000004};
		temporary=0.0060000001;
	};
	class MET_recoil_chain: recoil_default
	{
		muzzleOuter[]={0,0.5,0.6,0.6};
		kickBack[]={0.06,0.1};
		temporary=0.004;
	};
	class MET_recoil_CinCar: recoil_default
	{
		muzzleOuter[]={0,0.5,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.150000004};
		temporary=0.0060000001;
	};
	class MET_recoil_DC15C: recoil_default
	{
		muzzleOuter[]={0,0.6,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.150000004};
		temporary=0.0060000001;
	};
	class MET_recoil_DC17C: recoil_default
	{
		muzzleOuter[]={0,30,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.090000004};
		temporary=0.0060000001;
	};
	class MET_recoil_DC15L: recoil_default
	{
		muzzleOuter[]={0.1,0.5,0.40000001,0.60000001};
		kickBack[]={0.059999999,0.090000004};
		temporary=0.0060000001;
	};
	class recoil_dc15XM: Default
	{
		muzzleOuter[]={0.5,2,0.8,1};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.1,0.12};
		permanent=0.1;
		temporary=0.01;
	};
	class MET_recoil_DC15X: 3AS_recoil_default
	{
		muzzleOuter[]={0.4,1.5,0.80000001,0.80000001};
		kickBack[]={0.1,0.12};
		temporary=0.08;
	};
	class MET_recoil_VK38X : 3AS_recoil_default
	{
		muzzleOuter[] 	= {0.3,1.4,0.4,0.7};
		kickBack[] 		= {0.05,0.09};
		permanent		= 0.05;
		temporary 		= 0.005;
	};
};
class CBA_DisposableLaunchers
{
	MET_RPS6_Base[]=
	{
		"MET_RPS6_F",
		"MET_RPS6_Used"
	};
};
class UGL_F;
class Mode_SemiAuto;
class Mode_Burst: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
/*
 _______ ______________ _______________ _______________ _________
 ____/ / ____/  ______/ ____/___   ___/ ____/  /   /  / ____/    |    / /
 ___/ /  ___/  /_____   _______/  /     ___/  /___/  /  ___/  /| |   / /
 __/ /   __/   ___  /   ______/  /      __/  ____   /   __/  / | |  / /
 _/ /    _/   /__/ /    _____/  /       _/  /   /  /    _/  /  | |_/ /
 /_/     /________/     ____/  /        /__/   /__/     /__/   |____/

*/
class Single;
class close;
class GunParticles;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class 3AS_MuzzleSlot_DC17S;
class 3AS_CowsSlot_DC17S;
class CfgWeapons
{
	class LFP_rifle_base;
	class Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class JLTS_stun_muzzle;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class JLTS_DC15A: arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Long_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	/*==============================================================================
	==Westar M-5 Scope
	==============================================================================*/
	class MET_Optic_Scope_WestarM5: ItemCore
	{
		scope=2;
		displayName="[16th] Westar Scope";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\WestarM5\3AS_Westar_Scope_F.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_easy.p3d";
			class OpticsModes
			{
				class 3AS_Scope_Optics
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0138;
					opticsZoomMax=0.08;
					opticsZoomInit=0.75;
					distanceZoomMin=2000;
					distanceZoomMax=2000;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
					opticsFlare=1;
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_easy.p3d"
					};
					memoryPointCamera="opticView";
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				/*class 3AS_OverSights_Optic: 3AS_Scope_Optics
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
				};*/
			};
		};
	};
	class optic_MRCO;
	class ItemInfo;
	/*==============================================================================
	==Optics
	==============================================================================*/
	class InventoryMuzzleItem_Base_F;
	class MET_optic_DC15X_F: ItemCore
	{
		author="$STR_3as_Studio";
		scope=2;
		displayName="[16th] DC-15X Scope";
		picture="\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model="\3AS\3AS_Weapons\Republic\ACC\3AS_acco_DC15X_Scope_F.p3d";
		descriptionShort="$STR_3AS_Weapons_Republic_Optic_DC15X_Scope_DesShort";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=15;
			opticType=2;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_med.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					maxZeroing=2000;
					opticsZoomMin=0.0037499999;
					opticsZoomMax=0.1;
					opticsZoomInit=0.75;
					distanceZoomMin=2000;
					distanceZoomMax=2000;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_med.p3d"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
		inertia=0.2;
	};
	class MET_optic_DC15L_F: ItemCore
	{
		author="$STR_3as_Studio";
		scope=2;
		displayName="[16th] DC-15L MG Scope";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_MRCO_ca.paa";
		model="\3AS\3AS_Weapons\Republic\ACC\3AS_acco_DC15L_Scope_F.p3d";
		descriptionShort="$STR_3AS_Weapons_Republic_Optic_DC15L_Scope_DesShort";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\a3\weapons_f\acc\reticle_mrco_f";
			class OpticsModes
			{
				class cq
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsRadialBlur1",
						"OpticsBlur1"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin="0.25/3";
					opticsZoomMax="0.25/3";
					opticsZoomInit="0.25/3";
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
		inertia=0.1;
	};
	class MET_optic_DC15C_F: ItemCore
	{
		author="$STR_3as_Studio";
		scope=2;
		displayName="$STR_3AS_Weapons_Republic_Optic_DC15C_Scope_Display";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_MRCO_ca.paa";
		model="\3AS\3AS_Weapons\Republic\ACC\3AS_acco_DC15C_Scope_F.p3d";
		descriptionShort="$STR_3AS_Weapons_Republic_Optic_DC15C_Scope_DesShort";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			opticType=1;
			optics=1;
			modelOptics="\a3\weapons_f\acc\reticle_mrco_f";
			class OpticsModes
			{
				class cq
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				class scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsRadialBlur1",
						"OpticsBlur1"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.050000001;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
				/*class HoloScope: HoloSight
				{
					opticsID=3;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.050000001;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=550;
					weaponInfoType="RscWeaponEmpty";
				};*/
			};
		};
		inertia=0.1;
	};
	class MET_optic_DC15LE_F: ItemCore
	{
		author="$STR_3as_Studio";
		scope=2;
		displayName="[16th] DC-15LE Scope";
		picture="\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model="\3AS\3AS_Weapons\Republic\ACC\3AS_acco_DC15LE_Scope_F.p3d";
		descriptionShort="$STR_3AS_Weapons_Republic_Optic_DC15LE_Scope_DesShort";
		weaponInfoType="RscOptics_tws";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=15;
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_easy.p3d";
			class OpticsModes
			{
				class Scope
				{
					opticsID=1;
					opticsDisplayName="Scope";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.035;
					opticsZoomMax=0.1;
					opticsZoomInit=0.1;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_easy.p3d"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[] = {2, 3};
					opticsFlare=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Magnifier
				{
					opticsID=2;
					opticsDisplayName="Magnifier";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0037499999;
					opticsZoomMax=0.1;
					opticsZoomInit=0.1;
					//weaponInfoType="RscWeaponRangeZeroingModeFOV";
					//_generalMacro="optic_tws";
					memoryPointCamera="opticView1";
					modelOptics[]=
					{
						"\A3\Weapons_f\acc\reticle_tws"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[] = {2, 3};
					opticsFlare=1;
					distanceZoomMin=800;
					distanceZoomMax=800;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				/*class HoloScope: HoloSight
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.050000001;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=550;
					weaponInfoType="RscWeaponEmpty";
				};*/
			};
		};
		inertia=0.2;
	};
	class MET_optic_VK38X_F: ItemCore
	{
		author="$STR_3as_Studio";
		scope=2;
		displayName="[16th] Valken 38x Scope";
		picture="\A3\Weapons_F_EPB\Acc\Data\UI\gear_acco_sniper02_CA.paa";
		model="\3AS\3AS_Weapons\Republic\ACC\3AS_acco_VK38X_Scope_F.p3d";
		descriptionShort="$STR_3AS_Weapons_Republic_Optic_VK38X_Scope_DesShort";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=14;
			opticType=2;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_easy2.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsDisplayName="WFOV";
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera3",
						"OpticsBlur2"
					};
					opticsZoomMin=0.02;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;					
					distanceZoomMin=1000;
					distanceZoomMax=100;
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_easy2.p3d"
					};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={1,2};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
				};
			};
		};
		inertia=0.2;
	};
	class MET_holo_optic: optic_MRCO
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Holo Optic";
		model="\212th\Weapons\212th_JLTS_weapons\holo_optic.p3d";
		descriptionShort="Clone Trooper HUD Holo Sight";
		weaponInfoType="RscOptics_sos";
		class ItemInfo: ItemInfo
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\212th\Weapons\212th_JLTS_weapons\holo_optic.p3d";
			class OpticsModes
			{
				class holo_optic
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0.1;
	};
	class 3AS_optic_holo_DC15S;
	class MET_optic_holo_scope: MET_holo_optic
	{
		displayName="[16th] Holo Scope";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="z\MET\addons\weapons\holos\3AS_DC15S_Holo_f.p3d";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			modelOptics="z\MET\addons\weapons\holos\3AS_DC15S_Holo_f.p3d";
			optics=1;
			class OpticsModes
			{
				class DC15scope_sights
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;	
					modelOptics[]=
					{
						"z\MET\addons\weapons\holos\3AS_DC15S_Holo_f.p3d",
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class DC15scope_scope: DC15scope_sights
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_optic_holo_test: MET_holo_optic
	{
		displayName="[16th] Holo Scope";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="z\MET\addons\weapons\holos\met_holo_2.p3d";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			modelOptics="z\MET\addons\weapons\holos\3AS_DC15S_Holo_f.p3d";
			optics=1;
			class OpticsModes
			{
				class DC15scope_sights
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;	
					modelOptics[]=
					{
						"z\MET\addons\weapons\holos\3AS_DC15S_Holo_f.p3d",
					};
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class DC15scope_scope: DC15scope_sights
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class 3AS_Optic_Cinnagaran_1_F;
	class MET_Optic_Cinnagaran_1_F: 3AS_Optic_Cinnagaran_1_F
	{
		scope=2;
		displayName="[16th] Cinnagaran Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_green_full.p3d";
			class OpticsModes
			{
				class 3AS_Green_Optic1
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.2;
					opticsZoomInit=0.2;	
					distanceZoomMin=1000;
					distanceZoomMax=100;
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_green_full.p3d"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={1,2};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class 3AS_Green_Optic1_Top: 3AS_Green_Optic1
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
				};
			};
		};
	};
	class optic_Holosight;
	class stbtn_Optic_Holo_One_Blue: optic_Holosight
	{
		displayName="[21-73] Sharp Recticle Blue";
		author="Schlabbie";
		model="z\MET\addons\weapons\holos\met_holo_3.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_1_Blue.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.50;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class ACO_2: ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.1;
					opticsZoomMax=0.1;
					opticsZoomInit=0.1;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
			};
		};
		inertia=0;
	};
	class MET_Optic_Holo_One_Blue: optic_Holosight
	{
		displayName="Soft Recticle Blue";
		author="Schlabbie";
		model="JLTS_EA_Scopes\SEA_Scope_One_blue.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_1_Blue.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.30;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MET_scope: ACO
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
		inertia=0;
	};
	class MET_Optic_Holo_One_Red: optic_Holosight
	{
		displayName="Soft Recticle Red";
		author="Schlabbie";
		model="JLTS_EA_Scopes\SEA_Scope_One_red.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_1_red.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.30;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MET_scope: ACO
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_red2_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
		inertia=0;
	};
	class MET_Optic_Holo_One_Green: optic_Holosight
	{
		displayName="Soft Recticle Green";
		author="Schlabbie";
		model="JLTS_EA_Scopes\SEA_Scope_One_green.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_1_green.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.3;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MET_scope: ACO
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_green_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
		inertia=0;
	};
	class MET_Optic_Holo_One_Yellow: optic_Holosight
	{
		displayName="Soft Recticle Yellow";
		author="Schlabbie";
		model="JLTS_EA_Scopes\SEA_Scope_One_Yellow.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_1_Yellow.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.3;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MET_scope: ACO
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_yellow_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
		inertia=0;
	};
	class MET_Optic_Holo_Two_Blue: optic_Holosight
	{
		displayName="Sharp Recticle Blue";
		author="Schlabbie";
		model="JLTS_EA_Scopes\SEA_Scope_Two_blue.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_2_Blue.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.3;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MET_scope: ACO
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
		inertia=0;
	};
	class MET_Optic_Holo_Two_Red: MET_Optic_Holo_Two_Blue
	{
		displayName="Sharp Recticle Red";
		author="Schlabbie";
		model="JLTS_EA_Scopes\SEA_Scope_Two_red.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_2_Red.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.3;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MET_scope: ACO
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_red2_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
		inertia=0;
	};
	class MET_Optic_Holo_Two_Yellow: MET_Optic_Holo_Two_Blue
	{
		displayName="Sharp Recticle Yellow";
		author="Schlabbie";
		model="JLTS_EA_Scopes\SEA_Scope_Two_Yellow.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_2_Yellow.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.3;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MET_scope: ACO
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_yellow_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
		inertia=0;
	};
	class MET_Optic_Holo_Two_Green: MET_Optic_Holo_Two_Blue
	{
		displayName="Sharp Recticle Green";
		author="Schlabbie";
		model="JLTS_EA_Scopes\SEA_Scope_Two_green.p3d";
		picture="JLTS_EA_Scopes\Data\Scope_2_Green.paa";
		scope=2;
		descriptionShort="Holographic Scope";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=1;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class ACO
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.3;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"OpticsBlur1"
					};
				};
				class MET_scope: ACO
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.107;
					opticsZoomMax=0.107;
					opticsZoomInit=0.107;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_green_full.p3d",
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=400;
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
		inertia=0;
	};
	class ShadwCmpany_optic_Acog;
	class ShadwCmpany_Electroscope;
	class ShdwCmpny_Optic_Scope_WestarM5;
	class MET_optic_ACOG: ShadwCmpany_optic_Acog
	{
		displayName="[16th] ACOG";
		scope=2;
		descriptionShort="Holographic Scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class AMk1_Scope_nozoom
				{
					cameraDir = "";
					distanceZoomMax = 200;
					distanceZoomMin = 200;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsRadialBlur1","OpticsBlur1"};
					opticsZoomInit = 0.325;
					opticsZoomMax = 0.325;
					opticsZoomMin = 0.325;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class AMk1_scope
				{
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "opticview";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					opticsID = 2;
					opticsPPEffects[] = {"OpticsRadialBlur1","OpticsBlur1"};
					opticsZoomInit = 0.125;
					opticsZoomMax = 0.125;
					opticsZoomMin = 0.125;
					useModelOptics = 0;
					visionMode[] = {};
				};
				class AMkI
				{
					cameraDir = "";
					distanceZoomMax = 200;
					distanceZoomMin = 200;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 0;
					opticsFlare = 0;
					opticsID = 3;
					opticsPPEffects[] = {"Default"};
					opticsZoomInit = 0.75;
					opticsZoomMax = 1.25;
					opticsZoomMin = 0.25;
					useModelOptics = 0;
					visionMode[] = {};
				};
			};
		}
	};
};
class CfgMagazines
{
	class JLTS_DC15A_mag;
	class MET_BARC_Mag : JLTS_DC15A_mag
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		author = "Chet";
		scope = 1;
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 1000;
		displayName = "[16th] BARC Repeater Cell";
		displayNameShort = "BARC Repeater";
		descriptionShort = "Energy cell for the BARC";
		ammo = "MET_blasterbolt";
		mass = 250;
		tracersEvery = 1;
	};
};
class ACE_Medical_Injuries
{
	class damageTypes
	{
		class bullet;
		class metplasma:bullet
		{
            // bullets only create multiple wounds when the damage is very high
            thresholds[] = {{20, 10}, {4.5, 2}, {3, 1}, {0, 1}};
            selectionSpecific = 1;
            noBlood = 1;

            class Avulsion {
                // at damage, weight. between points, weight is interpolated then wound is chosen by weighted random.
                // as with thresholds, but result is not rounded (decimal values used as-is)
                weighting[] = {{1, 1}, {0.35, 0}};
                /*
                damageMultiplier = 1;
                sizeMultiplier = 1;
                bleedingMultiplier = 1;
                painMultiplier = 1;
                fractureMultiplier = 1;
                */
            };
            class Contusion {
                weighting[] = {{0.35, 0}, {0.35, 1}};
                // bruises caused by bullets hitting the plate are big
                sizeMultiplier = 3.2;
                // increase the pain to allow for bruises to actually knock out on repeated hits
                painMultiplier = 2.2;
            };
            class VelocityWound {
                // velocity wounds are only in the 0.35-1.5 range
                weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};
                // velocity wounds will tend to be medium or large
                sizeMultiplier = 0.9;
            };
            class ThermalBurn {
                weighting[] = {{0.35, 0}, {0.35, 1}};
            };
        };
	};
};
class CfgLights
{
	class 3AS_RocketLight;
	class MET_ATRocket_Green: 3AS_RocketLight
	{
		color[]={0.22, 0.984, 0.11};
		diffuse[]={56,251,28,1};
		intensity=30000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class MET_BlasterboltLightChaingun_Blue: 3AS_RocketLight
	{
		color[]={0, 0.164, 1};
		diffuse[]={0,42,255,1};
		intensity=5000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class MET_BlasterboltLightChaingun_red: 3AS_RocketLight
	{
		color[]={0,0,0,0};
		diffuse[]={255,0,0,1};
		ambient[]={0,0,0,0.5};
		intensity=850;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
};
class MET_Rocket_effect_Green_fly
{
	class Light
	{
		simulation="light";
		type="MET_ATRocket_Green";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
class MET_chaingunglow
{
	class Light
	{
		simulation="light";
		type="MET_BlasterboltLightChaingun_Blue";
		position[]={0,0,0};
	};
};
class MET_chaingunglow_Red
{
	class Light
	{
		simulation="light";
		type="MET_BlasterboltLightChaingun_Red";
		position[]={0,0,0};
	};
};