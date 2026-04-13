class CfgPatches
{
	class met_rep_rifle_dc15amk3
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15A_Mk3"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"met_rep_rifle_dc15a",
			"ShadowLegion_Aux_Weapons"
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
	class ShdwCmpny_DC15A_F;
	class ShdwCmpny_DC15A_Infantry: ShdwCmpny_DC15A_F
	{
		class WeaponSlotsInfo;
	};
	/*==============================================================================
	==DC-15A
	==============================================================================*/
	class MET_DC15A_Base_F: Rifle_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		//JLTS_friedItem="JLTS_DC15A_fried";
		JLTS_repairTime=33;
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_DC15A_mag"
		};
		magazineWell[]=
		{
			"MET_DC15A_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DC15A_Library";
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		maxZeroing=0;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.08; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.6; //higher = Less Sway Over Time
		inertia=1; //higher = More Weight
		aimTransitionSpeed=0.7; //higher = Faster Aim Transition
		dexterity=1.1; //higher = More Maneuverable
		initSpeed=-1;
		class GunParticles: GunParticles
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
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
		descriptionShort="$STR_3AS_Weapons_Republic_DC15A_DesShort";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15A\Data\Anim\New_DC15a_Handanim.rtm"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Burst: Mode_Burst
		{
			burst=3;
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class close: FullAuto
		{
			burst=5;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.3;
			midRange=20;
			midRangeProbab=0.9;
			maxRange=50;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=4;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.8;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=350;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			burst=4;
			aiRateOfFire=4;
			aiRateOfFireDistance=350;
			minRange=200;
			minRangeProbab=0.8;
			midRange=350;
			midRangeProbab=0.9;
			maxRange=500;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			//reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=8;
			aiRateOfFireDistance=500;
			minRange=400;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=0.85;
			maxRange=600;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			//reloadTime=0.15;
			burst=2;
			aiRateOfFire=16;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=8;
		aiDispersionCoefX=5;
		class EGLM: UGL_F
		{
			displayName="[16th] UBGL";
			descriptionShort="Under Barrel Grenade Launcher";
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
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload.wss",
				1,
				1,
				10
			};
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class HoloSight
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
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class HoloScope: HoloSight
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
			"\3AS\3AS_Main\Sounds\Blaster_empty.wss",
			2,
			1,
			20
		};
		/*reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",
			1,
			1,
			30
		};*/
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_DC15A_Mk3: ShdwCmpny_DC15A_Infantry
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15A_F_fried";
		JLTS_repairTime=30;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15A_Mk3";
		//JLTS_friedItem="JLTS_DC15A_fried";
		scope=2;
		displayName="[16th] DC-15A MkIII";
		magazines[]=
		{
			"MET_DC15A_mag"
		};
		magazineWell[]=
		{
			"MET_DC15A_MagWell"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
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
		modes[]=
		{
			"Single",
			"FullAuto",
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
				begin1[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				begin2[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				begin3[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				begin4[] = {"ShadowLegion_Weapons\data\DC15_2.ogg",1,1,900};
				begin5[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				begin6[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin2[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin3[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin4[] = {"ShadowLegion_Weapons\data\surpressed_2.ogg",2,1,200};
				begin5[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin6[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Burst: Mode_Burst
		{
			burst=3;
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				begin2[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				begin3[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				begin4[] = {"ShadowLegion_Weapons\data\DC15_2.ogg",1,1,900};
				begin5[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				begin6[] = {"ShadowLegion_Weapons\data\DC15_1.ogg",1,1,900};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin2[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin3[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin4[] = {"ShadowLegion_Weapons\data\surpressed_2.ogg",2,1,200};
				begin5[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin6[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
			};
		};
		class close: FullAuto
		{
			burst=5;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.3;
			midRange=20;
			midRangeProbab=0.9;
			maxRange=50;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=4;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.8;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=350;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			burst=4;
			aiRateOfFire=4;
			aiRateOfFireDistance=350;
			minRange=200;
			minRangeProbab=0.8;
			midRange=350;
			midRangeProbab=0.9;
			maxRange=500;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			//reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=8;
			aiRateOfFireDistance=500;
			minRange=400;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=0.85;
			maxRange=600;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			//reloadTime=0.15;
			burst=2;
			aiRateOfFire=16;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=8;
		aiDispersionCoefX=5;
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class HoloSight
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
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class HoloScope: HoloSight
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
			};
		};
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
	};
	/*==============================================================================
	==DC-15A Mk II (Fried)
	==============================================================================*/
	class MET_DC15A_Mk3_fried: MET_DC15A_Mk3
	{
		baseWeapon="MET_DC15A_Mk3_fried";
		displayName="[16th] Fried DC-15A Mk III";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
};
class CfgMagazineWells
{
	class MET_DC15A_MagWell
	{
		MET_Magazines[]=
		{
			"MET_DC15A_mag"
		};
	};
	class MET_DC15LE_MagWell
	{
		MET_HeavyMagazines[]=
		{
			"MET_DC15LE_mag"
		};
	};
};