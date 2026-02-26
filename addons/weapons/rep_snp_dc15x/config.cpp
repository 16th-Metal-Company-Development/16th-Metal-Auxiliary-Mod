class CfgPatches
{
	class met_rep_snp_dc15x
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15X_F",
			"MET_DC15X_Special_Purp"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"JLTS_weapons_DC15X",
			"3AS_Weapons_Republic_DC15X",
			"3AS_Weapons_Republic",
			"met_rep_optics",
			"metal_rep_snp_magazines"
		};
	};
};
class CfgRecoils
{
	class 3AS_recoil_default;
	class MET_recoil_DC15X: 3AS_recoil_default
	{
		muzzleOuter[]={0.4,1.5,0.80000001,0.80000001};
		kickBack[]={0.1,0.12};
		temporary=0.08;
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
	==DC-15X
	==============================================================================*/
	class MET_DC15X_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_DC15x_mag",
			"MET_DC15x_at_mag"
		};
		magazineWell[]=
		{
			"MET_DC15x_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DC15X_Library";
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="MET_recoil_DC15X";
		cursor="srifle";
		maxZeroing=1400;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=1.1;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		initSpeed=-1;
		class GunParticles: GunParticles
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=280;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_optic_DC15X_F"
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
					"3AS_bipod_DC15X_F"
				};
			};
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_3AS_Weapons_Republic_DC15X_DesShort";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15X\Data\Anim\New_DC15X_handanim.rtm"
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.80000001;
			dispersion=0.000000000000000001;
			minRange=2;
			minRangeProbab=0.1;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=350;
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
				soundSetShot[]=
				{
					"3AS_DLT19X_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DLT19X_Shot_SoundSet"
				};
			};
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
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
	class MET_DC15X_F: MET_DC15X_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15X_F_fried";
		JLTS_repairTime=40;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15X_F";
		scope=2;
		displayName="[16th] DC-15X";
		model="\3AS\3AS_Weapons\Republic\DC15X\3AS_DC15X_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15X\Data\UI\3as_dc15x.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_optic_DC15X_F";
			};
			class LinkedItemsUnderBarrel
			{
				slot="UnderBarrelSlot";
				item="3AS_bipod_DC15X_F";
			};
		};
	};
	/*==============================================================================
	==DC-15X (Fried)
	==============================================================================*/
	class MET_DC15X_F_fried: MET_DC15X_F
	{
		baseWeapon="MET_DC15X_F_fried";
		displayName="[16th] Fried DC-15X";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
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
	/*==============================================================================
	==DC-15X (Special Purpose)
	==============================================================================*/
	class JLTS_DC15X: arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
	};
	class MET_DC15X_Special_Purp: JLTS_DC15X
	{
		displayName="[16th] DC-15X (Special Purpose)";
		scope=2;
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
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"ShadwCmpany_Suppresor_Module_DC15",
					"ShadwCmpany_Suppresor_Module_DC19",
					"ShadwCmpany_Suppresor_WestarM5",
					"ShadwCmpany_Suppresor_Barrel_DCX19",
					"ShadwCmpany_Suppresor_Barrel_DMR_DCX19",
					"ShadwCmpany_Suppresor_Module_DC21"
				};
			};
		};
	};
};
class CfgMagazineWells
{
	class MET_dc15x_MagWell
	{
		MET_CinCar_Mags[]=
		{
			"MET_DC15x_mag",
			"MET_DC15x_at_mag"
		};
	};
};