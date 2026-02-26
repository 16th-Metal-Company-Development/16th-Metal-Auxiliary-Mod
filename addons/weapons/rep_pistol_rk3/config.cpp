class CfgPatches
{
	class met_rep_pistol_rk3
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_C_RK3"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_Imperial"
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
class Mode_FullAuto;
class CfgWeapons
{
	/*
	* RK3
	*/
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo
		{
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
		};
		class GunParticles;
	};
	class MET_C_RK3_Base_F : Pistol_Base_F
	{
		author = "$STR_3AS_Studio";
		reloadAction = "3AS_Vent_Reload_Pistol";
		magazines[] =
		{
			"MET_blaster_pistol_battery"
		};
		magazineWell[] =
		{
			"MET_DC17SA_MagWell"
		};
		magazineReloadSwitchPhase = 0.40000001;
		discreteDistanceInitIndex = 0;
		maxRecoilSway=0.02; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.2; //higher = More Weight
		aimTransitionSpeed=3; //higher = Faster Aim Transition
		dexterity=3; //higher = More Maneuverable
		initSpeed = -1;
		maxZeroing = 100;
		class GunParticles : GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class MuzzleSlot : MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {};
				iconPosition[] = {0,0.44999999};
				iconScale = 0.2;
			};
			class CowsSlot : CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
			};
		};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		distanceZoomMin = 400;
		distanceZoomMax = 400;
		descriptionShort = "RK3, 3rd Army Studios";
		selectionFireAnim = "zasleh";
		fireLightDiffuse[] = { 7,36,190,1 };
		fireLightIntensity = 0.02;
		flash = "gunfire";
		flashSize = 0.1;
		modes[] =
		{
			"Single",
			"FullAuto"
		};
		class Single : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"3AS_RK3_Shot_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"3AS_RK3_Shot_SoundSet"
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.1;
			magazineReloadTime = 2;
			dispersion = 0.0039900001;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		class FullAuto : Mode_FullAuto
		{
			sounds[] =
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"3AS_RK3_Shot_SoundSet"
				};
			};
			class SilencedSound : BaseSoundModeType
			{
				soundSetShot[] =
				{
					"3AS_RK3_Shot_SoundSet"
				};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.1;	
			magazineReloadTime = 2;
			dispersion = 0.0039900001;
			minRange = 5;
			minRangeProbab = 0.30000001;
			midRange = 25;
			midRangeProbab = 0.60000002;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		aiDispersionCOEFY = 6;
		aiDispersionCOEFX = 4;
		caseless[] =
		{
			"",
			1,
			1,
			1
		};
		soundBullet[] =
		{
			"caseless",
			1
		};
		drySound[] =
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[] =
		{
			"3as\3AS_Main\Sounds\Reload\Venting_Sound.ogg",
			2,
			1,
			30
		};
		ace_overheating_mrbs = 3000;
		ace_overheating_slowdownFactor = 1;
		ace_overheating_allowSwapBarrel = 0;
		ace_overheating_dispersion = 0.75;
	};

	class MET_C_RK3 : MET_C_RK3_Base_F
	{
		scope = 1;
		displayName = "[16th] RK3 Blaster";
		model = "\3AS\3AS_Weapons\Imperial\3AS_RK3.p3d";
		picture = "\3AS\3AS_Weapons\Imperial\data\UI\3as_rk3.paa";
		weaponInfoType = "RscWeaponZeroing";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 60;
		};
	};
};