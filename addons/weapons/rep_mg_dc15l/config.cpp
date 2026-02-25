class CfgPatches
{
	class met_rep_mg_dc15l
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15L_F"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_Republic_DC15L"
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class MET_recoil_DC15L: recoil_default
	{
		muzzleOuter[]={0.1,0.5,0.40000001,0.60000001};
		kickBack[]={0.059999999,0.090000004};
		temporary=0.0060000001;
	};
};
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
	/*==============================================================================
	==DC-15L
	==============================================================================*/
	class MET_DC15L_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_DC15L_mag"
		};
		magazineWell[]=
		{
			"MET_DC15L_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DC15L_Library";
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15L\Data\Anims\New_DC15L_Handanim.rtm"
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="MET_recoil_DC15L";
		maxZeroing=1400;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		dexterity=1.4;
		initSpeed=-1;
		class GunParticles: GunParticles
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=170;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_optic_DC15L_F"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"3AS_bipod_DC15L_F"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsUnderBarrel
			{
				slot="UnderBarrelSlot";
				item="3AS_bipod_DC15L_F";
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_3AS_Weapons_Republic_DC15L_DesShort";
		modes[]=
		{
			"SlowAuto",
			"MediumAuto",
			"FastAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class SlowAuto: Mode_FullAuto
		{
			reloadTime=0.15;
			dispersion=0.00079;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			textureType="burst";
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
					"3AS_DC15L_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15L_Shot_SoundSet"
				};
			};
		};
		class MediumAuto: SlowAuto
		{
			reloadTime=0.0857142857142857;
			dispersion=0.00079;
			textureType="fullAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class FastAuto: SlowAuto
		{
			reloadTime=0.06;
			dispersion=0.00079;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close: MediumAuto
		{
			reloadTime=0.06;
			burst=12;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.3;
			midRange=50;
			midRangeProbab=0.9;
			maxRange=100;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=12;
			aiRateOfFire=1;
			aiRateOfFireDistance=100;
			minRange=50;
			minRangeProbab=0.8;
			midRange=100;
			midRangeProbab=0.9;
			maxRange=150;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			reloadTime=0.0857142857142857;
			burst=9;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=100;
			minRangeProbab=0.8;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=300;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=6;
			aiRateOfFire=3;
			aiRateOfFireDistance=400;
			minRange=200;
			minRangeProbab=1;
			midRange=400;
			midRangeProbab=0.85;
			maxRange=600;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			reloadTime=0.15;
			burst=6;
			aiRateOfFire=5;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=1000;
			midRangeProbab=0.7;
			maxRange=1500;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=1000;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
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
	class MET_DC15L_F: MET_DC15L_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15L_F_fried";
		JLTS_repairTime=40;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15L_F";
		scope=2;
		displayName="[16th] DC-15L";
		model="\3AS\3AS_Weapons\Republic\DC15L\3AS_DC15L_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15L\Data\UI\3as_dc15l.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	/*==============================================================================
	==DC-15L (Fried)
	==============================================================================*/
	class MET_DC15L_F_fried: MET_DC15L_F
	{
		baseWeapon="MET_DC15L_F_fried";
		displayName="[16th] Fried DC-15L";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
};
class CfgMagazineWells
{
	class MET_DC15L_MagWell
	{
		MET_Magazines[]=
		{
			"MET_DC15L_mag",
			"MET_DC15A_mag"
		};
	};
};