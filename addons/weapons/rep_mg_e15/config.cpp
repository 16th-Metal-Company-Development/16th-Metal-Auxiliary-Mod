class CfgPatches
{
	class met_rep_mg_e15
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_E15"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"SFA_Weapons_R"
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
	};
	/*==============================================================================
	==E-15
	==============================================================================*/
	class MET_E15: LMG_Mk200_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="MET_E15_fried";
		JLTS_repairTime=40;
		author="Starforge Armory";
		scope=2;
		scopeArsenal=2;
		baseWeapon="MET_E15";
		reloadAction="";
		ace_clearJamAction="";
		autoReload="true";
		displayName="[16th] E-15 Assault cannon";
		descriptionShort="Assault Cannon";
		picture="\SFA_Main\SFA_Weapons_R\E15\data\ui\E15_ui.paa";
		model="SFA_Main\SFA_Weapons_R\E15\E15.p3d";
		WBK_UseHeavyWeaponFramework = "true";	
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFA_Main\SFA_Weapons_R\E15\data\E15_Assault_cannon_camo1_co.paa"
		};
		recoil="MET_recoil_Z6";
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SFA_Main\SFA_Weapons_R\Anim\E15_Assault_Cannon\E15_Assault_Cannon.rtm"
		};
		magazines[]=
		{
			"MET_E15_mag"
		};
		magazineWell[]=
		{
			"MET_E15_magwell"
		};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\Z6_reload.ogg",
			1.5,
			1,
			100
		};
		modes[]=
		{
			"slowerAuto",
			"Auto",
			"fullerAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: Mode_FullAuto
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
					"\SFA_Main\SFA_Weapons_R\BoltBlaster\data\SFX\boltblaster.wav",
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
			reloadTime=0.075000003;
			dispersion=0.00102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class Auto: Mode_FullAuto
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
					"SFA_Main\SFA_Weapons_R\E15\data\SFX\E15_Close.wav",
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
			reloadTime=0.06;
			dispersion=0.00102;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class fullerAuto: Auto
		{
			reloadTime=0.0461538462;
			dispersion=0.00104;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: Auto
		{
			reloadTime=0.0857142857;
			dispersion=0.001;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		maxRecoilSway=0.03; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.1; //higher = Less Sway Over Time
		inertia=1.6; //higher = More Weight
		aimTransitionSpeed=0.6; //higher = Faster Aim Transition
		dexterity=0.5; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=250;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"SFA_Holosight_blue"
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
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	/*==============================================================================
	==E-15 (Fried)
	==============================================================================*/
	class MET_E15_fried: MET_E15
	{
		baseWeapon="MET_E15_fried";
		displayName="[16th] Fried E-15";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		scopeArsenal=0;
		picture="\MRC\JLTS\weapons\Z6\data\ui\Z6_fried_ui_ca.paa";
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
	class MET_E15_MagWell
	{
		MET_E15_Magazines[]=
		{
			"MET_E15_Mag",
			"MET_DC15L_mag",
			"MET_DC15A_mag",
			"MET_CinCar_Mag",
			"MET_DC15SMG_Mag",
			"MET_DC15S_Mag",
			"MET_blaster_pistol_battery",
			"MET_Westar35SA_mag",
			"MET_blaster_battery_mand",
			"MET_blaster_battery",
			"MET_blaster_battery_green",
			"MET_Westar35C_Mag",
			"MET_Westar35S_Mag",
			"3AS_130Rnd_EM50_RedPlasma",
			"3AS_60Rnd_EM50_RedPlasma",
			"ls_magazine_e5c",
			"ls_magazine_e5",
			"JLTS_E5C_mag",
			"JLTS_E5",
			"Aux212_JLTS_E5_Mag",
			"Aux212_JLTS_E5C_Mag",
			"3AS_15Rnd_EM20_SE14R_Mag",
			"ls_magazine_rg4d",
			"JLTS_RG4D_mag",
			"MET_D200_Pistol_Mag",
			"MET_DLA13_Mag",
			"MET_EL34_mag",
			"Metal_E5_Mag",
			"Metal_E5_BX_Mag",
			"Metal_E5C_Mag",
			"Metal_RG4D_mag"
		};
		MET_E15_RandomMagazines[]=
		{
			
		};
	};
};