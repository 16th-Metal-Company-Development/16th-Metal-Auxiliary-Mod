class CfgPatches
{
	class met_rep_rifle_dc19e
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC21"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"ShadowLegion_Aux_Weapons"
		};
	};
};
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
	==DC-21
	==============================================================================*/
	class Pistol_Base_F;
	class ShdwCmpny_pistol_DC21_Base: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	class MET_DC21: ShdwCmpny_pistol_DC21_Base
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] DC-21";
		recoil="MET_recoil_Raff";
		magazines[]=
		{
			"MET_DC21_mag"
		};
		magazineWell[]=
		{
			"MET_DC21_MagWell"
		};
		modes[]=
		{
			"Single",
			"Burst"
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty.wss",
			2,
			1,
			20
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
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
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,150};
				begin2[] = {"ShadowLegion_Weapons\data\surpressed_2.ogg",2,1,150};
				begin3[] = {"ShadowLegion_Weapons\data\surpressed_3.ogg",2,1,150};
				begin4[] = {"ShadowLegion_Weapons\data\surpressed_4.ogg",2,1,150};
				begin5[] = {"ShadowLegion_Weapons\data\surpressed_5.ogg",2,1,150};
				begin6[] = {"ShadowLegion_Weapons\data\surpressed_6.ogg",2,1,150};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,150};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
				soundBeginWater[] = {"beginwater1",0.5};
			};
			burst=3;
			textureType="burst";
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
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC17.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[] = {"ShadowLegion_Weapons\data\surpressed_1.ogg",2,1,75};
				begin2[] = {"ShadowLegion_Weapons\data\surpressed_2.ogg",2,1,75};
				begin3[] = {"ShadowLegion_Weapons\data\surpressed_3.ogg",2,1,75};
				begin4[] = {"ShadowLegion_Weapons\data\surpressed_4.ogg",2,1,75};
				begin5[] = {"ShadowLegion_Weapons\data\surpressed_5.ogg",2,1,75};
				begin6[] = {"ShadowLegion_Weapons\data\surpressed_6.ogg",2,1,75};
				beginwater1[] = {"\ShadowLegion_Weapons\data\Underwater_Firing.ogg",1,1,75};
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
		maxRecoilSway=0.02; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.2; //higher = More Weight
		aimTransitionSpeed=3; //higher = Faster Aim Transition
		dexterity=3; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot : CowsSlot
			{
				compatibleItems[]=
				{
					"OPTRE_M6C_Scope"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"ShadwCmpany_Suppresor_Module_DC19",
					"ShdwCmpny_Barrel_Module_DC21",
					"ShadwCmpany_Suppresor_Module_DC21"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashlight_pistol"
				};
			};
		};
	};
};
class CfgMagazineWells
{
	class MET_DC21_MagWell
	{
		MET_DC21_Mags[]=
		{
			"MET_DC21_mag",
			"MET_DC21_Stealth_mag"
		};
		MET_DC17SA_Mags[]=
		{
			"MET_blaster_pistol_battery"
		};
	};
};