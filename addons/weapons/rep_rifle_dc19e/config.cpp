class CfgPatches
{
	class met_rep_rifle_dc19e
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC19",
			"MET_DC19MkII",
			"MET_DC19MkIIFolded"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"ShadowLegion_Aux_Weapons"
		};
	};
};
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
class CfgRecoils
{
	class recoil_default;
	class Default;
	class MET_recoil_DC15C: recoil_default
	{
		muzzleOuter[]={0,0.6,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.150000004};
		temporary=0.0060000001;
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
	class UGL_F;
	class JLTS_stun_muzzle;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	/*==============================================================================
	==DC-19E
	==============================================================================*/
	/*class MET_LFP_rifle_base: Rifle
	{
		author="Last Force Project";
		scope=1;
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class MET_DC19: MET_LFP_rifle_base
	{
		scope=2;
		model="z\MET\addons\weapons\infantry_weap\models\dc19_mlod.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"LF_Weapon_Unit\dc15s\anims\dc15s_testhand.rtm"
		};
		picture="z\MET\addons\weapons\data\dc19\tex\dc19.paa";
		magazines[]=
		{
			"MET_DC19E_mag"
		};
		displayname="DC-19 carbine";
		descriptionShort="Clone trooper carbine";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"z\MET\addons\weapons\data\dc19\sounds\DC19.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"z\MET\addons\weapons\data\dc19\sounds\DC19.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"z\MET\addons\weapons\data\dc19\sounds\DC19.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				beginwater1[]=
				{
					"z\MET\addons\weapons\data\dc19\sounds\DC19.wss",
					1,
					1,
					1800
				};
				soundBeginWater[]=
				{
					"beginwater1",
					0.33000001
				};
			};
			reloadTime=0.15000001;
			dispersion=9.9900001e-007;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"z\MET\addons\weapons\data\dc19\sounds\DC19.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"z\MET\addons\weapons\data\dc19\sounds\DC19.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"z\MET\addons\weapons\data\dc19\sounds\DC19.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				beginwater1[]=
				{
					"z\MET\addons\weapons\data\dc19\sounds\DC19.wss",
					1,
					1,
					1800
				};
				soundBeginWater[]=
				{
					"beginwater1",
					0.33000001
				};
			};
			reloadTime=0.15000001;
			dispersion=0.0004545;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=-1;
		canShootInWater=1;
		recoil="LFP_recoil";
		maxRecoilSway=0.015;
		swayDecaySpeed=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: Cowsslot
			{
				compatibleItems[]=
				{
					""
				};
			};
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class DC19scope_sights
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
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class DC19scope_scope: DC19scope_sights
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera2",
					"OpticsBlur3"
				};
				opticsZoomMin=0.0625;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex=1;
				distanceZoomMin=300;
				distanceZoomMax=1200;
				discretefov[]=
				{
					"0.25/3",
					"0.25/6",
					"0.25/9",
					"0.25/12",
					"0.25/15"
				};
				discreteInitIndex=0;
				memoryPointCamera="eye";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
	};*/
	/*==============================================================================
	==DC-19E MkII
	==============================================================================*/
	class ShdwCmpny_DC19_F: Rifle_Base_F
	{
		class WeaponSlotsInfo
		{
			class Cowsslot;
			class MuzzleSlot;
			class PointerSlot;
		};
	};
	class MET_DC19MkII: ShdwCmpny_DC19_F
	{
		author="Hazmat";
		scope=2;
		magazines[]=
		{
			"MET_DC19E_mag",
			"MET_DC15A_mag"
		};
		magazineWell[]=
		{
			"MET_DC19_MagWell"
		};
		displayname="[16th] DC-19E MkII";
		descriptionShort="Stealth Carbine";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		drySound[]=
		{
			"LF_Weapon_Unit\main\sounds\dc15_empty.wss",
			0.39810717,
			1,
			20
		};
		recoil="3AS_recoil_DC15S";
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin2[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin3[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_2.ogg",1,1,900};
				begin4[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin5[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin6[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin7[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_3.ogg",1,1,200};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5,"begin7",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin2[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin3[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin4[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin5[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin6[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			reloadTime=0.0857142857;
			dispersion=0.0004;
			minRange=0;
			minRangeProbab=0.9;
			midRange=15;
			midRangeProbab=0.7;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin2[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin3[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_2.ogg",1,1,900};
				begin4[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin5[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin6[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin7[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_3.ogg",1,1,200};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5,"begin7",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin2[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin3[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin4[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin5[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin6[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			burst=2;
			textureType="dual";
			reloadTime=0.0666666667;
			dispersion=0.0004;
			minRange=0;
			minRangeProbab=0.9;
			midRange=15;
			midRangeProbab=0.7;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin2[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin3[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_2.ogg",1,1,900};
				begin4[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin5[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin6[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_1.ogg",1,1,900};
				begin7[] = {"ShadowLegion_Weapons\data\DC15\DC15C2\DC15A3_Auto_3.ogg",1,1,200};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5,"begin7",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin2[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin3[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin4[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin5[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				begin6[] = {"ShadowLegion_Weapons\data\DC19Surpressed.ogg",2,1,300};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			reloadTime=0.0857142857;
			dispersion=0.0004;
			minRange=0;
			minRangeProbab=0.9;
			midRange=15;
			midRangeProbab=0.7;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
			class CowsSlot: Cowsslot
			{
				compatibleItems[]=
				{
					"MET_optic_ACOG",
					"ShadwCmpany_Electroscope",
					"ShdwCmpny_Optic_Scope_WestarM5"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"ShadwCmpany_Suppresor_Module_DC19"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_DC19MkIIFolded: MET_DC19MkII
	{
		model = "\ShadowLegion_Weapons\data\DC15\DC19\models\DC19_S_Folded.p3d";
		displayName="[16th] DC-19E MkII (Folded)";
	};
};
class CfgMagazineWells
{
	class MET_DC19_MagWell
	{
		MET_DC19_Mags[]=
		{
			"MET_DC19E_mag"
		};
		MET_DC15_Mags[]=
		{
			"MET_DC15A_mag",
			"MET_DC15S_mag"
		};
	};
};