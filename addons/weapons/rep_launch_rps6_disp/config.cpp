class CfgPatches
{
	class met_rep_launch_rps6_disp
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_RPS6_F"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_RPS6"
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
class CBA_DisposableLaunchers
{
	MET_RPS6_Base[]=
	{
		"MET_RPS6_F",
		"MET_RPS6_Used"
	};
};
class Mode_SemiAuto;

class CfgWeapons
{
	/*==============================================================================
	==RPS-6
	==============================================================================*/
	class 3AS_RPS6_Base;
	class MET_RPS6_Base: 3AS_RPS6_Base
	{
		author="$STR_3as_Studio";
		_generalMacro="launch_RPG32_F";
		scope=1;
		displayName="[16th] RPS-6 Disposible";
		model="\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
		picture="\3AS\3AS_Weapons\RPS6\Data\UI\3as_rps6d.paa";
		UiPicture="\3AS\3AS_Weapons\RPS6\Data\UI\3as_rps6d.paa";
		baseWeapon="MET_RPS6_F";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3as_weapons\data\anim\rps6_hold.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_rpg";
		maxZeroing=600;
		modelOptics="\A3\Weapons_F\acc\reticle_RPG_F";
		weaponInfoType="RscWeaponEmpty";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.1083;
				opticsZoomMax=0.1083;
				opticsZoomInit=0.1083;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		magazines[]=
		{
			"3AS_MK40_AT"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		magazineReloadTime=0.1;
		descriptionShort="$STR_A3_CfgWeapons_launch_LAW1";
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
	};
	class MET_RPS6_F: MET_RPS6_Base
	{
		scope=2;
		baseWeapon="MET_RPS6_F";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class MET_RPS6_Used: MET_RPS6_Base
	{
		scope=1;
		displayName="[16th] Spent RPS-6 Disposable";
		baseWeapon="MET_RPS6_Used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
};