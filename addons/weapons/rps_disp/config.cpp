class CfgPatches
{
	class Metal_disp
	{
		addonRootClass="A3_Weapons_F";
		units[]={};
		weapons[]=
		{
			"HDC_NLAW_F"
		};
		Addons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Launchers_NLAW"
		};
	};
};
class CBA_DisposableLaunchers
{
	HDC_NLAW_F[]=
	{
		"HDC_NLAW_Loaded",
		"HDC_NLAW_Used"
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_NLAW_F: Launcher_Base_F
	{
	};
	class HDC_NLAW_F: launch_NLAW_F
	{
		author="Digital";
		scope=1;
		scopeArsenal=1;
		displayName="[16th] RPS-6 Disposable (TESTING)";
		picture="\3AS\3AS_Weapons\RPS6\Data\UI\3as_rps6d.paa";
		model="\3AS\3AS_Weapons\RPS6\3AS_RPS6_G.p3d";
		baseWeapon="NLAW_F";
		magazines[]=
		{
			"HTA_NLAW_F"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3as_weapons\data\anim\rps6_hold.rtm"
		};
		magazineReloadTime=0.1;
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
	class HDC_NLAW_Loaded: HDC_NLAW_F
	{
		baseWeapon="HDC_NLAW_Loaded";
		scope=2;
		scopeArsenal=2;
		picture="\3AS\3AS_Weapons\RPS6\Data\UI\3as_rps6d.paa";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=280;
		};
	};
	class HDC_NLAW_Used: HDC_NLAW_F
	{
		displayName="[16th] RPS-6 Disposable (Spent)";
		baseWeapon="HDC_NLAW_Used";
		picture="\3AS\3AS_Weapons\RPS6\Data\UI\3as_rps6d.paa";
		scope=1;
		scopeArsenal=1;
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1660317168";
};
