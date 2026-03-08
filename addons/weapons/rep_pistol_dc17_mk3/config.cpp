class CfgPatches
{
	class met_rep_pistol_dc17_mk3
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC17S_F_Mk3"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"met_rep_pistol_dc17",
			"ShadowLegion_Aux_Weapons"
		};
	};
};
/*
 _______ ______________ _______________ _______________ _________
 ____/ / ____/  ______/ ____/___   ___/ ____/  /   /  / ____/    |    / /
 ___/ /  ___/  /_____   _______/  /     ___/  /___/  /  ___/  /| |   / /
 __/ /   __/   ___  /   ______/  /      __/  ____   /   __/  / | |  / /
 _/ /    _/   /__/ /    _____/  /       _/  /   /  /    _/  /  | |_/ /
 /_/     /________/     ____/  /        /__/   /__/     /__/   |____/

*/
class JLTS_stun_muzzle;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class 3AS_MuzzleSlot_DC17S;
class 3AS_CowsSlot_DC17S;
class UnderBarrelSlot;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class CfgWeapons
{
	/*==============================================================================
	==DC-17
	==============================================================================*/
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
	};
	class ShdwCmpny_pistol_DC17Pistol_Base;
	class ShdwCmpny_pistol_DC17Pistol: ShdwCmpny_pistol_DC17Pistol_Base
	{
		class WeaponSlotsInfo;
	};
	class MET_DC17S_F_Mk3: ShdwCmpny_pistol_DC17Pistol
	{
		author="Hazmat";
		baseWeapon="MET_DC17S_F_Mk3";
		scope=2;
		displayName="[16th] DC-17SA MkIII";
		muzzles[]=
		{
			"this",
			"MET_FL_F"
		};
		class MET_FL_F: Rifle_Base_F
		{
			displayName="Flare Launcher";
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
		magazines[]=
		{
			"MET_blaster_pistol_battery"
		};
		magazineWell[]=
		{
			"MET_DC17SA_MagWell"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
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
				begin1[] = {"\ShadowLegion_Weapons\data\DC21\DC21_1.ogg",1.99526,1,600};
				begin2[] = {"\ShadowLegion_Weapons\data\DC21\DC21_2.ogg",1.99526,1,600};
				begin3[] = {"\ShadowLegion_Weapons\data\DC21\DC21_3.ogg",1.99526,1,600};
				begin4[] = {"\ShadowLegion_Weapons\data\DC21\DC21_4.ogg",1.99526,1,600};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.3,"begin4",0.3};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin2[] = {"ShadowLegion_Weapons\data\surpressed_2.ogg",2,1,200};
				begin3[] = {"ShadowLegion_Weapons\data\surpressed_3.ogg",2,1,200};
				begin4[] = {"ShadowLegion_Weapons\data\surpressed_4.ogg",2,1,200};
				begin5[] = {"ShadowLegion_Weapons\data\surpressed_5.ogg",2,1,200};
				begin6[] = {"ShadowLegion_Weapons\data\surpressed_6.ogg",2,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.1;
			dispersion=0.0039900001;
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
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\ShadowLegion_Weapons\data\DC21\DC21_1.ogg",1.99526,1,600};
				begin2[] = {"\ShadowLegion_Weapons\data\DC21\DC21_2.ogg",1.99526,1,600};
				begin3[] = {"\ShadowLegion_Weapons\data\DC21\DC21_3.ogg",1.99526,1,600};
				begin4[] = {"\ShadowLegion_Weapons\data\DC21\DC21_4.ogg",1.99526,1,600};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,200};
				soundBegin[] = {"begin1",0.3,"begin2",0.3,"begin3",0.3,"begin4",0.3};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,200};
				begin2[] = {"ShadowLegion_Weapons\data\surpressed_2.ogg",2,1,200};
				begin3[] = {"ShadowLegion_Weapons\data\surpressed_3.ogg",2,1,200};
				begin4[] = {"ShadowLegion_Weapons\data\surpressed_4.ogg",2,1,200};
				begin5[] = {"ShadowLegion_Weapons\data\surpressed_5.ogg",2,1,200};
				begin6[] = {"ShadowLegion_Weapons\data\surpressed_6.ogg",2,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
			};
			reloadTime=0.1333333333333333;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.00043000003;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
		};
		maxRecoilSway=0.02; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.2; //higher = More Weight
		aimTransitionSpeed=3; //higher = Faster Aim Transition
		dexterity=3; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=22;
			holsterScale=0.75;
			class MuzzleSlot: 3AS_MuzzleSlot_DC17S
			{
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class CowsSlot: 3AS_CowsSlot_DC17S
			{
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
	};
};