class CfgPatches
{
	class met_rep_optics
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_Optic_Scope_WestarM5",
			"MET_optic_DC15X_F",
			"MET_optic_DC15L_F",
			"MET_optic_DC15C_F",
			"MET_optic_DC15LE_F",
			"MET_optic_VK38X_F",
			"MET_holo_optic",
			"MET_optic_holo_test",
			"MET_Optic_Cinnagaran_1_F",
			"stbtn_Optic_Holo_One_Blue",
			"MET_Optic_Holo_One_Blue",
			"MET_Optic_Holo_One_Red",
			"MET_Optic_Holo_One_Green",
			"MET_Optic_Holo_One_Yellow",
			"MET_Optic_Holo_Two_Blue",
			"MET_Optic_Holo_Two_Red",
			"MET_Optic_Holo_Two_Yellow",
			"MET_Optic_Holo_Two_Green",
			"MET_optic_ACOG"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_WestarM5",
			"3AS_Weapons_Republic_DC15X",
			"3AS_Weapons_Republic_DC15L",
			"3AS_Weapons_Republic_DC15C",
			"3AS_Weapons_Republic_DC15A",
			"3AS_Weapons_Republic_Valken38X",
			"metal_weapons",
			"3AS_Weapons_Greenfor",
			"3AS_Weapons_ACC"
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
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
		inertia=0.3;
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