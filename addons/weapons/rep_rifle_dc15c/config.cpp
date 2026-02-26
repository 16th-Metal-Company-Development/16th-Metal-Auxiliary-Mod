class CfgPatches
{
	class met_rep_rifle_dc15c
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15C_F",
			"MET_DC15C_GL"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_Republic_DC15C"
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
	==DC-15C
	==============================================================================*/
	class MET_DC15C_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_DC15S_Mag"
		};
		magazineWell[]=
		{
			"MET_DC15S_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DC15C_Library";
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="MET_recoil_DC15C";
		maxZeroing=0;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.08; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.65; //higher = Less Sway Over Time
		inertia=0.7; //higher = More Weight
		aimTransitionSpeed=0.9; //higher = Faster Aim Transition
		dexterity=1.4; //higher = More Maneuverable
		initSpeed=-1;
		class GunParticles: GunParticles
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_optic_DC15C_F"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_3AS_Weapons_Republic_DC15C_DesShort";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15C\Data\Anim\New_DC15C_Handanim.rtm"
		};
		modes[]=
		{
			"Single",
			"Burst",
			//"FullAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			reloadTime=0.12;
			dispersion=0.00029;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			reloadTime=0.075;
			dispersion=0.00029;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.12;
			dispersion=0.00029;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15C_Shot_SoundSet"
				};
			};
		};
		class close: Burst
		{
			burst=3;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=25;
			minRange=15;
			minRangeProbab=0.3;
			midRange=25;
			midRangeProbab=0.9;
			maxRange=35;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=3;
			aiRateOfFire=1;
			aiRateOfFireDistance=50;
			minRange=25;
			minRangeProbab=0.8;
			midRange=50;
			midRangeProbab=0.9;
			maxRange=75;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			burst=3;
			aiRateOfFire=2;
			aiRateOfFireDistance=100;
			minRange=50;
			minRangeProbab=0.8;
			midRange=100;
			midRangeProbab=0.9;
			maxRange=150;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			//reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=1;
			aiRateOfFire=3;
			aiRateOfFireDistance=200;
			minRange=100;
			minRangeProbab=1;
			midRange=200;
			midRangeProbab=0.85;
			maxRange=400;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			//reloadTime=0.15;
			burst=1;
			aiRateOfFire=5;
			//requiredOpticType=2;
			minRange=200;
			minRangeProbab=0.85;
			midRange=400;
			midRangeProbab=0.7;
			maxRange=600;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=400;
		};
		class ELGM: UGL_F
		{
			displayName="UBGL";
			descriptionShort="Underbarrel Grenade Launcher";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"MET_HE_Grenade"
			};
			magazineWell[]=
			{
				"UGL_40x36",
				"MET_GL_MagWell"
			};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class HoloScope: Ironsights
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
				opticsZoomMin=0.107;
				opticsZoomMax=0.107;
				opticsZoomInit=0.107;
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=400;
				distanceZoomMax=400;
				weaponInfoType="RscWeaponEmpty";
			};
		};
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		/*reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};*/
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_DC15C_F: MET_DC15C_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15C_fried";
		JLTS_repairTime=25;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15C_F";
		scope=2;
		displayName="[16th] DC-15C";
		model="\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15C\Data\UI\3as_dc15c.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	/*==============================================================================
	==DC-15C (Fried)
	==============================================================================*/
	class MET_DC15C_fried: MET_DC15C_F
	{
		JLTS_isFried=1;
		baseWeapon="MET_DC15C_fried";
		displayName="[16th] Fried DC-15C";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
	/*==============================================================================
	==DC-15C GL
	==============================================================================*/
	class MET_DC15C_GL: MET_DC15C_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15C_GL_fried";
		JLTS_repairTime=30;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15C_GL";
		scope=2;
		displayName="[16th] DC-15C GL";
		model="\3AS\3AS_Weapons\Republic\DC15C\3AS_DC15C_GL.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15C\Data\UI\3as_dc15cgl.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		muzzles[]=
		{
			"this",
			"ELGM"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15C\Data\Anim\New_DC15CGL_Handanim.rtm"
		};
		maxRecoilSway=0.09; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.4; //higher = Less Sway Over Time
		inertia=0.8; //higher = More Weight
		aimTransitionSpeed=0.8; //higher = Faster Aim Transition
		dexterity=1.3; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
		};
	};
	/*==============================================================================
	==DC-15C GL (Fried)
	==============================================================================*/
	class MET_DC15C_GL_fried: MET_DC15C_GL
	{
		JLTS_isFried=1;
		baseWeapon="MET_DC15C_GL_fried";
		displayName="[16th] Fried DC-15C GL";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		muzzles[]=
		{
			"this"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
};