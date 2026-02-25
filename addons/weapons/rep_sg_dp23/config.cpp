class CfgPatches
{
	class met_rep_sg_dp23
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DP23_F",
			"MET_DP23_GL",
			"MET_DP12_F",
			"MET_JLTS_DP23",
			"MET_JLTS_DP12"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"JLTS_weapons_DP23",
			"3AS_Weapons_Republic_DP23"
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
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};/*==============================================================================
	==DP-23
	==============================================================================*/
	class MET_DP23_Base_F: Rifle_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		//JLTS_friedItem="JLTS_DP23_fried";
		JLTS_repairTime=25;
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_pellet_mag",
			"MET_slug_mag"
		};
		magazineWell[]=	
		{
			"MET_DP23_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DP23_Library";
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="3as_recoil_heavy";
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
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
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
		descriptionShort="$STR_3AS_Weapons_Republic_DP23_DesShort";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DP23\Data\Anim\New_DP23_handanim.rtm"
		};
		modes[]=
		{
			"Single",
			"Single_close",
			"Single_far"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.3;
			dispersion=0.0001;
			minRange=1;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
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
			class SilencedSound: BaseSoundModeType
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
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
		};
		class Single_Close: Single
		{
			showToPlayer=0;
			minRange=50;
			minRangeProbab=0.1;
			midRange=170;
			midRangeProbab=0.80000001;
			maxRange=250;
			maxRangeProbab=0.15000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class Single_Far: Single_Close
		{
			minRange=220;
			minRangeProbab=0.1;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.15000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=300;
		};
		class 3AS_FL_F: Rifle_Base_F
		{
			displayName="UBGL";
			cursor="srifle";
			reloadAction="GestureReloadARX2";
			magazines[]=
			{
				//"3AS_1Rnd_EC80_Flechette"
			};
			magazineWell[]=
			{
				"MET_GL_MagWell_Pacifist"
			};
			recoil="3as_recoil_heavy";
			maxZeroing=100;
			class GunParticles: GunParticles
			{
			};
			modes[]=
			{
				"Single"
			};
			class Single: Mode_SemiAuto
			{
				reloadTime=0.1;
				dispersion=0.00133;
				minRange=1;
				minRangeProbab=0.1;
				midRange=25;
				midRangeProbab=0.80000001;
				maxRange=50;
				maxRangeProbab=0.15000001;
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
						"3AS_DP23_Shot_SoundSet"
					};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_DP23_Shot_SoundSet"
					};
				};
				aiRateOfFire=1;
				aiRateOfFireDistance=20;
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
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
	class MET_DP23_F: MET_DP23_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DP23_MkII_fried";
		JLTS_repairTime=25;
		author="$STR_3as_Studio";
		baseWeapon="MET_DP23_F";
		scope=2;
		displayName="[16th] DP-23 MkII";
		model="\3AS\3AS_Weapons\Republic\DP23\3AS_DP23_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DP23\Data\UI\3as_dp23.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	/*==============================================================================
	==DP-23 GL
	==============================================================================*/
	class MET_DP23_GL: MET_DP23_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DP23_GL_fried";
		JLTS_repairTime=25;
		author="$STR_3as_Studio";
		baseWeapon="MET_DP23_GL";
		scope=2;
		displayName="[16th] DP-23 MkII GL";
		model="\3AS\3AS_Weapons\Republic\DP23\3AS_DP23_GL.p3d";
		picture="\3AS\3AS_Weapons\Republic\DP23\Data\UI\3as_dp23gl.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DP23\Data\Anim\New_DP23GL_handanim.rtm"
		};
		muzzles[]=
		{
			"this",
			"3AS_FL_F"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
	/*==============================================================================
	==DP-23 MkII (Fried)
	==============================================================================*/
	class MET_DP23_MkII_fried: MET_DP23_F
	{
		JLTS_isFried=1;
		baseWeapon="MET_DP23_MkII_fried";
		displayName="[16th] (Fried) DP-23 Scattergun MkII";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
	class MET_DP23_GL_fried: MET_DP23_GL
	{
		JLTS_baseWeapon="MET_DP23_GL_fried";
		JLTS_isFried=1;
		displayName="[16th] (Fried) DP-23 (GL) MkII";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
	};
	/*==============================================================================
	==DP-12 Mk II
	==============================================================================*/
	class MET_DP12_F: MET_DP23_Base_F
	{
		author="$STR_3as_Studio";
		baseWeapon="MET_DP12_F";
		scope=2;
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DP12_fried";
		JLTS_repairTime=25;
		displayName="[16th] DP-12 MkII";
		model="\3AS\3AS_Weapons\Republic\DP23\3AS_DP23_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DP23\Data\UI\3as_dp23.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		recoil="MET_recoil_CinCar";
		magazines[]=
		{
			"MET_DP12_pellet_mag",
			"MET_DP12_slug_mag"
		};
		magazineWell[]=	
		{
			"MET_DP12_MagWell"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.2;
			dispersion=0.0001;
			minRange=1;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
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
			class SilencedSound: BaseSoundModeType
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
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.2;
			dispersion=0.0001;
			minRange=1;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
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
			class SilencedSound: BaseSoundModeType
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
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
		};
	};
	/*==============================================================================
	==DP-12 MkII (Fried)
	==============================================================================*/
	class MET_DP12_fried: MET_DP12_F
	{
		JLTS_isFried=1;
		baseWeapon="MET_DP12_fried";
		displayName="[16th] (Fried) DP-12 Scattergun MkI";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
	/*==============================================================================
	==DP-23 MkI
	==============================================================================*/
	class JLTS_DP23: arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
		class Single;
	};
	class MET_JLTS_DP23: JLTS_DP23
	{
		scope=2;
		displayName="[16th] DP-23 Scattergun MkI";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_JLTS_DP23_fried";
		JLTS_repairTime=25;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="MET_DP23_shield";
		magazines[]=
		{
			"MET_pellet_mag",
			"MET_slug_mag"
		};
		magazineWell[]=	
		{
			"MET_DP23_MagWell"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_holo_optic",
					//"3AS_optic_holo_DC15S",
					"MET_optic_holo_scope",
					"MET_Optic_Holo_Two_Blue",
					"MET_Optic_Holo_Two_Red",
					"MET_Optic_Holo_Two_Yellow",
					"MET_Optic_Holo_Two_Green",
					"MET_Optic_Holo_One_Blue",
					"MET_Optic_Holo_One_Green",
					"MET_Optic_Holo_One_Red",
					"MET_Optic_Holo_One_Yellow"
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
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		class Single: Mode_SemiAuto
		{
			
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
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
			class SilencedSound: BaseSoundModeType
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
			reloadTime=0.3;
			dispersion=0.00003000003;
			minRange=1;
			minRangeProbab=0.5;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=60;
			maxRangeProbab=0.30000001;
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
	};
	class MET_DP23_shield: MET_JLTS_DP23
	{
		displayName="[16th] DP-23 (Shield) MkI";
		baseWeapon="MET_DP23_shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="MET_JLTS_DP23";
		JLTS_friedItem="JLTS_DP23_shield_fried";
		model="\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DP23\data\DP23_co.paa",
			"\MRC\JLTS\weapons\Shield\data\shield_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=500;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
	};
	/*==============================================================================
	==DP-23 MkI (Fried)
	==============================================================================*/
	class MET_JLTS_DP23_fried: MET_JLTS_DP23
	{
		JLTS_isFried=1;
		JLTS_shieldedWeapon="MET_DP23_shield_fried";
		baseWeapon="MET_JLTS_DP23_fried";
		displayName="[16th] (Fried) DP-23 Scattergun MkI";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
	class MET_DP23_shield_fried: MET_DP23_shield
	{
		JLTS_baseWeapon="MET_DP23_fried";
		JLTS_isFried=1;
		baseWeapon="MET_DP23_shield_fried";
		displayName="[16th] (Fried) DP-23 (Shield) MkI";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
	/*==============================================================================
	==DP-12 MkI
	==============================================================================*/
	class MET_JLTS_DP12: JLTS_DP23
	{
		scope=2;
		displayName="[16th] DP-12 Scattergun MkI";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_JLTS_DP12_fried";
		JLTS_repairTime=25;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="MET_DP12_shield";
		recoil="MET_recoil_CinCar";
		magazines[]=
		{
			"MET_DP12_pellet_mag",
			"MET_DP12_slug_mag"
		};
		magazineWell[]=	
		{
			"MET_DP12_MagWell"
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_holo_optic",
					//"3AS_optic_holo_DC15S",
					"MET_optic_holo_scope",
					"MET_Optic_Holo_Two_Blue",
					"MET_Optic_Holo_Two_Red",
					"MET_Optic_Holo_Two_Yellow",
					"MET_Optic_Holo_Two_Green",
					"MET_Optic_Holo_One_Blue",
					"MET_Optic_Holo_One_Green",
					"MET_Optic_Holo_One_Red",
					"MET_Optic_Holo_One_Yellow"
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
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.2;
			dispersion=0.0001;
			minRange=1;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
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
			class SilencedSound: BaseSoundModeType
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
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.2;
			dispersion=0.0001;
			minRange=1;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
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
			class SilencedSound: BaseSoundModeType
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
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
		};
	};
	class MET_DP12_shield: MET_JLTS_DP12
	{
		displayName="[16th] DP-12 (Shield) MkI";
		baseWeapon="MET_DP12_shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="MET_JLTS_DP12";
		JLTS_friedItem="MET_DP12_shield_fried";
		model="\MRC\JLTS\weapons\DP23\DP23_shielded.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DP23\data\DP23_co.paa",
			"\MRC\JLTS\weapons\Shield\data\shield_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DP23\anims\DP23_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=500;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
	};
	/*==============================================================================
	==DP-12 MkI (Fried)
	==============================================================================*/
	class MET_JLTS_DP12_fried: MET_JLTS_DP12
	{
		JLTS_isFried=1;
		JLTS_shieldedWeapon="MET_DP12_shield_fried";
		baseWeapon="MET_JLTS_DP12_fried";
		displayName="[16th] (Fried) DP-12 Scattergun MkI";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
	class MET_DP12_shield_fried: MET_DP12_shield
	{
		JLTS_baseWeapon="MET_DP12_fried";
		JLTS_isFried=1;
		baseWeapon="MET_DP12_shield_fried";
		displayName="[16th] (Fried) DP-12 (Shield) MkI";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DP23\data\ui\DP23_fried_ui_ca.paa";
		magazines[]={};
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
	class MET_DP23_MagWell
	{
		MET_DP23Magazines[]=
		{
			"MET_pellet_mag",
			"MET_slug_mag",
			"MET_Doomsday_mag"
		};
	};
	class MET_DP12_MagWell
	{
		MET_DP12Magazines[]=
		{
			"MET_DP12_pellet_mag",
			"MET_DP12_slug_mag"
		};
	};
};