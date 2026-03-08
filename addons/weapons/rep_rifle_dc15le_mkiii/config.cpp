class CfgPatches
{
	class met_rep_rifle_dc15lemkiii
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15LE_MkIII"
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
	class ShdwCmpny_DC15LE_Base;
	class ShdwCmpny_DC15LE_F: ShdwCmpny_DC15LE_Base
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	/*==============================================================================
	==DC-15LE
	==============================================================================*/
	class MET_DC15LE_MkIII: ShdwCmpny_DC15LE_F
	{
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15LE_MkIII";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15LE_MkIII_fried";
		JLTS_repairTime=30;
		scope=2;
		displayName="[16th] DC-15LE Mk III";
		magazines[]=
		{
			"MET_DC15LE_mag"
		};
		magazineWell[]=
		{
			"MET_DC15LE_MagWell"
		};
		modes[]=
		{
			"Single",
			"Burst",
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
			reloadTime=0.15;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.00029;
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
			textureType="dual";
			burst=2;
			reloadTime=0.03;
			dispersion=0.00029;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
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
		class Single: Mode_SemiAuto
		{
			reloadTime=0.15;
			dispersion=0.00029;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
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
		class close: Single
		{
			burst=2;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=50;
			minRangeProbab=0.3;
			midRange=100;
			midRangeProbab=0.9;
			maxRange=150;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=2;
			aiRateOfFire=2;
			aiRateOfFireDistance=250;
			minRange=100;
			minRangeProbab=0.8;
			midRange=250;
			midRangeProbab=0.9;
			maxRange=400;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			burst=1;
			aiRateOfFire=4;
			aiRateOfFireDistance=500;
			minRange=250;
			minRangeProbab=0.8;
			midRange=500;
			midRangeProbab=0.9;
			maxRange=750;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			//reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=1;
			aiRateOfFire=8;
			aiRateOfFireDistance=1000;
			minRange=500;
			minRangeProbab=1;
			midRange=1000;
			midRangeProbab=0.85;
			maxRange=1500;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			//reloadTime=0.15;
			burst=1;
			aiRateOfFire=16;
			//requiredOpticType=2;
			minRange=1000;
			minRangeProbab=0.85;
			midRange=1500;
			midRangeProbab=0.7;
			maxRange=2000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=1000;
		};
		aiDispersionCoefY=2;
		aiDispersionCoefX=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"ShdwCmpny_Optic_LEScope_DC15A",
					"ShdwCmpny_Optic_LEScope_DC15A_mk2",
					"ShadwCmpany_Electroscope_Standalone"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"3AS_muzzle_DC15LE_F",
					"ShdwCmpny_Muzzle_LE_DC15A_Unsur"
				};
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
	};
	/*==============================================================================
	==DC-15A Mk II (Fried)
	==============================================================================*/
	class MET_DC15LE_MkIII_fried: MET_DC15LE_MkIII
	{
		baseWeapon="MET_DC15LE_MkIII_fried";
		displayName="[16th] Fried DC-15LE Mk III";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";
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