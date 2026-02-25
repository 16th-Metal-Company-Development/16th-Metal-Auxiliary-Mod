class CfgPatches
{
	class met_rep_pistol_rk3
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_pistol_DC15SA_F"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_DC15SA"
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
class CfgWeapons
{
	/*==============================================================================
	==DC-15SA
	==============================================================================*/
	class 3AS_pistol_DC15SA_Base_F;
	class 3AS_pistol_DC15SA_F: 3AS_pistol_DC15SA_Base_F
	{
		class WeaponSlotsInfo;
	};
	class MET_pistol_DC15SA_F:3AS_pistol_DC15SA_F
	{
		scope=2;
		author="";
		magazines[]=
		{
			"MET_dc15sa_battery"
		};
		magazineWell[]=
		{
			"MET_DC15SA_MagWell"
		};
		displayName="[16th] DC-15SA";
		model="3AS\3AS_Weapons\DC15SA\3AS_DC15SA_F.p3d";
		picture="\3AS\3AS_Weapons\DC15SA\data\UI\3as_dc15sa.paa";
		weaponInfoType="RscWeaponZeroing";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=2;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.5;
				opticsZoomMax=1;
				opticsZoomInit=1;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class DC15scope_scope: Ironsights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsZoomMin=0.107;
				opticsZoomMax=0.107;
				opticsZoomInit=0.107;
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=400;
				distanceZoomMax=400;
				weaponInfoType="RscWeaponEmpty";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=25;
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