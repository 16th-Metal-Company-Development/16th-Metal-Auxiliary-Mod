class CfgPatches
{
	class met_rep_rifle_westarm5
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_WestarM5_F",
			"MET_WestarM5_blockii_F",
			"MET_WestarM5_GL",
			"MET_WestarM5_blockii_GL",
			"MET_WestarM5_blockii_UBSG",
			"MET_WestarM5_blockii_UBSGB"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_WestarM5"
		};
	};
};
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	/*==============================================================================
	==Westar M-5
	==============================================================================*/
	class MET_WestarM5_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_DC15A_mag"
		};
		magazineWell[]=
		{
			"MET_WestarM5_MagWell"
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="MET_recoil_Westar";
		maxRecoilSway=0.04; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.7; //higher = More Weight
		aimTransitionSpeed=1.5; //higher = Faster Aim Transition
		dexterity=2; //higher = More Maneuverable
		initSpeed=-1;
		maxZeroing=100;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"MET_Optic_Scope_WestarM5"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="Westar-M5, 3rd Army Studios";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\WestarM5\Data\Anim\WestarM5_handanim.rtm"
		};
		selectionFireAnim="zasleh";
		fireLightDiffuse[]={7,36,190,1};
		fireLightIntensity=0.02;
		flash="gunfire";
		flashSize=0.1;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.0666666667;
			dispersion=0.00000000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.05;
			dispersion=0.00059000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.0666666667;
			dispersion=0.00059000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class Burst_medium: Burst
		{
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class MET_WestarM5_GL_F: UGL_F
		{
			displayName="[3AS] WestarM5-GL";
			descriptionShort="GL for the WestarM5 Platform";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"MET_3Rnd_HE_Grenade_shell",
				"MET_3Rnd_AT_Grenade_shell",
				"MET_6Rnd_HE_Grenade_shell",
				"MET_6Rnd_Clust_Grenade_shell",
				"MET_12Rnd_Grape_Grenade",
				"MET_6Rnd_AT_Grenade_shell",
				"MET_6Rnd_HE_RocketGrenade",
				"MET_HE_Grenade",
				"MET_AT_Grenade",
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell"
			};
			magazineWell[]=
			{
				"MET_GL_MagWell",
				"MET_3GL_MagWell"
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
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
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
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};*/
	};
	class MET_WestarM5_F: MET_WestarM5_Base_F
	{
		scope=2;
		displayName="[16th] Westar-M5";
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_F.p3d";
		picture="\3AS\3AS_Weapons\WestarM5\Data\UI\3as_westar.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
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
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsZoomMin=0.050000001;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	/*==============================================================================
	==Westar M-5 Block II
	==============================================================================*/
	class MET_WestarM5_blockii_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_DC15A_mag"
		};
		magazineWell[]=
		{
			"MET_WestarM5_MagWell"
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="MET_recoil_Westar";
		maxRecoilSway=0.04; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.7; //higher = More Weight
		aimTransitionSpeed=1.5; //higher = Faster Aim Transition
		dexterity=2; //higher = More Maneuverable
		initSpeed=-1;
		maxZeroing=100;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"MET_Optic_Scope_WestarM5"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight",
					"acc_pointer_IR"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="Westar-M5, 3rd Army Studios";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\WestarM5\Data\Anim\WestarM5_handanim.rtm"
		};
		selectionFireAnim="zasleh";
		fireLightDiffuse[]={7,36,190,1};
		fireLightIntensity=0.02;
		flash="gunfire";
		flashSize=0.1;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"FullerAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.0666666667;
			dispersion=0.00000000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class Burst: Mode_Burst
		{
			textureType="dual";
			burst=2;
			reloadTime=0.03;
			dispersion=0.00059000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					""
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.00059000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
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
					"3AS_Westar_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Plasma_Shot_SoundSet"
				};
			};
		};
		class fullerAuto: FullAuto
		{
			reloadTime=0.05;
			dispersion=0.006;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class Burst_medium: Burst
		{
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class MET_WestarM5_GL_F: UGL_F
		{
			displayName="[3AS] WestarM5-GL";
			descriptionShort="GL for the WestarM5 Platform";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"MET_3Rnd_HE_Grenade_shell",
				"MET_3Rnd_AT_Grenade_shell",
				"MET_6Rnd_HE_Grenade_shell",
				"MET_6Rnd_Clust_Grenade_shell",
				"MET_12Rnd_Grape_Grenade",
				"MET_6Rnd_AT_Grenade_shell",
				"MET_6Rnd_HE_RocketGrenade",
				"MET_HE_Grenade",
				"MET_AT_Grenade",
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell"
			};
			magazineWell[]=
			{
				"MET_GL_MagWell",
				"MET_3GL_MagWell"
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
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
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
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};*/
	};
	class MET_WestarM5_blockii_F: MET_WestarM5_blockii_Base_F
	{
		scope=2;
		displayName="[16th] Westar-M5 Block II";
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_F.p3d";
		picture="\3AS\3AS_Weapons\WestarM5\Data\UI\3as_westar.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
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
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsZoomMin=0.050000001;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	/*==============================================================================
	==Westar M-5 GL
	==============================================================================*/
	class MET_WestarM5_GL: MET_WestarM5_Base_F
	{
		scope=2;
		displayName="[16th] Westar-M5 GL";
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
		picture="\3AS\3AS_Weapons\WestarM5\Data\UI\3as_westargl.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		muzzles[]=
		{
			"this",
			"MET_WestarM5_GL_F"
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
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
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsZoomMin=0.050000001;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	/*==============================================================================
	==Westar M-5 Block II GL
	==============================================================================*/
	class MET_WestarM5_blockii_GL: MET_WestarM5_blockii_Base_F
	{
		scope=2;
		displayName="[16th] Westar-M5 Block II GL";
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
		picture="\3AS\3AS_Weapons\WestarM5\Data\UI\3as_westargl.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		muzzles[]=
		{
			"this",
			"MET_WestarM5_GL_F"
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
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
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsZoomMin=0.050000001;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	/*==============================================================================
	==Westar M-5 Block II UBSG
	==============================================================================*/
	class MET_WestarM5_blockii_UBSG: MET_WestarM5_blockii_Base_F
	{
		scope=2;
		displayName="[16th] Westar-M5 Block II UBSG";
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
		picture="\3AS\3AS_Weapons\WestarM5\Data\UI\3as_westargl.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class MET_WestarM5_UBSG_F: Rifle_Base_F
		{
			displayName="Westar-M5 UBSG";
			magazines[]=
			{
				"MET_slug_mag",
				"MET_pellet_mag"
			};
			magazineWell[]=
			{
				"MET_DP23_MagWell"
			};
			discreteDistance[]={50};
			discreteDistanceInitIndex=0;
			maxZeroing=50;
			ballisticsComputer=0;
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			cursor="sgun";
			recoil="recoil_MSBS65_ubs";
			fireSpreadAngle=0.94999999;
			autoFire=0;
			reloadTime=0.34999999;
			reloadAction="GestureReloadMSBS_UBS";
			modes[]=
			{
				"Single"
			};
			aiDispersionCoefY=2;
			aiDispersionCoefX=2;
			class Single: Mode_SemiAuto
			{
				reloadTime=0.30000001;
				dispersion=0.01245;
				minRange=2;
				minRangeProbab=0.94999999;
				midRange=30;
				midRangeProbab=0.94999999;
				maxRange=100;
				maxRangeProbab=0.30000001;
				aiRateOfFire=1;
				aiRateOfFireDistance=30;
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
						"z\MET\addons\weapons\infantry_weap\sounds\dp23.ogg",
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
		};
		muzzles[]=
		{
			"this",
			"MET_WestarM5_UBSG_F"
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
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
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsZoomMin=0.050000001;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	/*==============================================================================
	==Westar M-5 Block II UBSG
	==============================================================================*/
	class MET_WestarM5_blockii_UBSGB: MET_WestarM5_blockii_Base_F
	{
		scope=2;
		displayName="[16th] Westar-M5 Block II UBSG-12";
		model="3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";
		picture="\3AS\3AS_Weapons\WestarM5\Data\UI\3as_westargl.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class MET_WestarM5_UBSGB_F: Rifle_Base_F
		{
			displayName="Westar-M5 UBSG-12";
			magazines[]=
			{
				"MET_dp12_slug_mag",
				"MET_dp12_pellet_mag"
			};
			magazineWell[]=
			{
				"MET_DP12_MagWell"
			};
			discreteDistance[]={50};
			discreteDistanceInitIndex=0;
			maxZeroing=50;
			ballisticsComputer=0;
			muzzlePos="usti granatometu";
			muzzleEnd="konec granatometu";
			cursor="sgun";
			recoil="recoil_MSBS65_ubs";
			fireSpreadAngle=0.94999999;
			autoFire=0;
			reloadTime=0.34999999;
			reloadAction="GestureReloadMSBS_UBS";
			modes[]=
			{
				"Single"
			};
			aiDispersionCoefY=2;
			aiDispersionCoefX=2;
			class Single: Mode_SemiAuto
			{
				reloadTime=0.30000001;
				dispersion=0.01245;
				minRange=2;
				minRangeProbab=0.94999999;
				midRange=30;
				midRangeProbab=0.94999999;
				maxRange=100;
				maxRangeProbab=0.30000001;
				aiRateOfFire=1;
				aiRateOfFireDistance=30;
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
						"z\MET\addons\weapons\infantry_weap\sounds\dp12_1.ogg",
						1,
						1,
						1800
					};
					begin2[]=
					{
						"z\MET\addons\weapons\infantry_weap\sounds\dp12_2.ogg",
						1,
						1,
						1800
					};
					begin3[]=
					{
						"z\MET\addons\weapons\infantry_weap\sounds\dp12_3.ogg",
						1,
						1,
						1800
					};
					begin4[]=
					{
						"z\MET\addons\weapons\infantry_weap\sounds\dp12_4.ogg",
						1,
						1,
						1800
					};
					begin5[]=
					{
						"z\MET\addons\weapons\infantry_weap\sounds\dp12_5.ogg",
						1,
						1,
						1800
					};
					soundBegin[]=
					{
						"begin1",0.2,
						"begin2",0.2,
						"begin3",0.2,
						"begin4",0.2,
						"begin5",0.2
					};
				};
			};
		};
		muzzles[]=
		{
			"this",
			"MET_WestarM5_UBSGB_F"
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.375;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Scope: Ironsights
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
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsZoomMin=0.050000001;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=130;
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
};
class CfgMagazineWells
{
	class MET_WestarM5_MagWell
	{
		MET_WestarM5_Mags[]=
		{
			"MET_DC15A_mag",
			"MET_DC15S_Mag",
			"MET_DC15LE_mag",
			"MET_DC15SMG_Mag",
			"MET_blaster_pistol_battery",
			"JLTS_E5_mag",
			"3AS_60Rnd_EM50_RedPlasma",
			"Aux212_JLTS_E5_Mag",
			"ls_magazine_e5",
			"Metal_E5_Mag",
			"Metal_E5_BX_Mag"
		};
	};
};