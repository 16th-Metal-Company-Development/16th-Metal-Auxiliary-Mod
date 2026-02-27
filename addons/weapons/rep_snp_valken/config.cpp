class CfgPatches
{
	class met_rep_snp_valken
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_Valken38X_F"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_Republic_Valken38X"
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class 3AS_recoil_default;
	class MET_recoil_VK38X : 3AS_recoil_default
	{
		muzzleOuter[] 	= {0.3,1.4,0.4,0.7};
		kickBack[] 		= {0.05,0.09};
		permanent		= 0.05;
		temporary 		= 0.005;
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
	==Valken-38X
	==============================================================================*/
	class MET_Valken38X_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_Valken_mag"
		};
		magazineWell[]=
		{
			"MET_Valken_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_VK38X_Library";
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		cursor="srifle";
		recoil="MET_recoil_VK38X";
		maxZeroing=1400;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.6; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=0.8; //higher = Less Sway Over Time
		inertia=2; //higher = More Weight
		aimTransitionSpeed=0.5; //higher = Faster Aim Transition
		dexterity=0.9; //higher = More Maneuverable
		initSpeed=-1;
		class GunParticles: GunParticles
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"MET_optic_VK38X_F"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
					"3AS_bipod_VK38X_F"
				};
			};
		};
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="$STR_3AS_Weapons_Republic_VK38X_DesShort";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
		modes[]=
		{
			"Single",
			"single_close_optics1",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.3;
			dispersion=0.00000000001;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
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
					"z\MET\addons\weapons\infantry_weap\sounds\valken.ogg",
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
					"z\MET\addons\weapons\infantry_weap\sounds\valken.ogg",
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
		class single_close_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class single_medium_optics1: Single
		{
			showToPlayer=0;
			requiredOpticType=1;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		class single_far_optics2: Single
		{
			showToPlayer=0;
			requiredOpticType=2;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=600;
			midRangeProbab=0.40000001;
			maxRange=900;
			maxRangeProbab=0.050000001;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
		};
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		modelOptics="3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
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
	class MET_Valken38X_F: MET_Valken38X_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_Valken38X_F_fried";
		JLTS_repairTime=40;
		author="$STR_3as_Studio";
		baseWeapon="MET_Valken38X_F";
		scope=2;
		displayName="[16th] Valken-38X";
		model="\3AS\3AS_Weapons\Republic\Valken38X\3AS_Valken38X_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\Valken38X\Data\UI\3as_valken38x.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_optic_VK38X_F";
			};
			class LinkedItemsUnderBarrel
			{
				slot="UnderBarrelSlot";
				item="3AS_bipod_VK38X_F";
			};
		};
	};
	/*==============================================================================
	==Valken-38x (Fried)
	==============================================================================*/
	class MET_Valken38X_F_fried: MET_Valken38X_F
	{
		baseWeapon="MET_Valken38X_F_fried";
		displayName="[16th] Fried Valken-38X";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		scopeArsenal=0;
		picture="\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
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
	class MET_Valken_MagWell
	{
		MET_Valken_Mags[]=
		{
			"MET_Valken_mag"
		};
	};
};