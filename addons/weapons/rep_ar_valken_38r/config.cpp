class CfgPatches
{
	class met_rep_ar_valken38r
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15L_F_Mk3"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"met_rep_mg_dc15l",
			"ShadowLegion_Aux_Weapons"
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
	class ShdwCmpny_Valken38R_Base_F;
	class ShdwCmpny_Valken38R_F: ShdwCmpny_Valken38R_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	/*==============================================================================
	==DC-15L
	==============================================================================*/
	class MET_Valken38r: ShdwCmpny_Valken38R_F
	{
		ACE_overheating_mrbs=80000; //Mean Rounds Between Stoppages (this will be scaled based on the barrel temp)
		ACE_Overheating_Dispersion[]={0,0.00079999998,0.0012000001,0.0024000001}; //Dispersion Factor, increases the dispersion of the projectile (this will be scaled based on the barrel temp)
		ACE_Overheating_SlowdownFactor[]={1,1,0.9,0.8}; //Slowdown Factor, reduces the velocity of the projectile (this will be scaled based on the barrel temp)
		ACE_Overheating_JamChance[]={0,0.00015000001,0.00075000001,0.0037499999};
		ACE_Overheating_allowSwapBarrel=0; // 1 to enable barrel swap. 0 to disable. Meant for machine guns where you can easily swap the barrel without dismantling the whole weapon.
		//ACE_Overheating_barrelClassname="ACE_LAMG_SpareBarrel";
		ace_overheating_jamTypesAllowed[] = {"Feed", "Dud"}; // Allowed and default values are ["Eject", "Extract", "Feed", "Fire", "Dud"]. In the example here a revolver does not eject, extract, or feed on each shot so those values are removed.
		ace_overheating_closedBolt = 0; // Closed bolt, can cook off from barrel heat.
        ace_overheating_barrelMass = 6; // Mass of the area heated by firing, not strictly just the barrel. Higher mass gives slower heat buildup and faster cooling. Default estimation is 55% of weapon weight in kg.
		ACE_clearJamAction = "GestureReloadMX"; // Custom jam clearing action. Default uses reload animation, use an empty string to undefine
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_Valken38r_fried";
		JLTS_repairTime=40;
		magazines[]=
		{
			"MET_DC15A_stendo_mag"
		};
		magazineWell[]=
		{
			"MET_Valken38r_MagWell"
		};
		author="$STR_3as_Studio";
		baseWeapon="MET_Valken38r";
		scope=2;
		displayName="[16th] Valken-38R";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="MET_recoil_DC15L";
		maxRecoilSway=0.03; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.4; //higher = Less Sway Over Time
		inertia=1.3; //higher = More Weight
		aimTransitionSpeed=0.9; //higher = Faster Aim Transition
		dexterity=0.8; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_optic_ACOG"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
		};
		modes[]=
		{
			"Single",
			"SlowAuto",
			"FastAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class Single: Mode_SemiAuto
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
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
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
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
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
				begin1[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin2[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin3[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin4[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin5[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin6[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
			};
		};
		class SlowAuto: Mode_FullAuto
		{
			reloadTime=0.109090909;
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
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
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
					"\Indecisive_Armoury_Sounds\Republic\DC15A.ogg",
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
				begin1[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin2[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin3[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin4[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin5[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				begin6[] = {"\ShadowLegion_Weapons\data\E-32\EE-3 single2_Supressed.ogg",1.12202,1,300};
				soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5,"begin5",0.5,"begin6",0.5};
			};
		};
		class FastAuto: SlowAuto
		{
			reloadTime=0.0705882353;
			dispersion=0.00079;
			textureType="fullAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close: FastAuto
		{
			reloadTime=0.0705882353;
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
	};
	/*==============================================================================
	==DC-15L (Fried)
	==============================================================================*/
	class MET_Valken38r_Mk3_fried: MET_Valken38r
	{
		baseWeapon="MET_Valken38r_Mk3_fried";
		displayName="[16th] Fried Valken-38r";
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
	class MET_Valken38r_MagWell
	{
		MET_Magazines[]=
		{
			"MET_DC15S_mag",
			"MET_DC15A_mag",
			"MET_DC15A_stendo_mag"
		};
	};
};