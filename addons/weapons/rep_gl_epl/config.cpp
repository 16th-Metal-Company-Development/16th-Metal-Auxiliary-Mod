class CfgPatches
{
	class met_rep_gl_mpl
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_EPL2"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"JLTS_weapons_EPL2"
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
	==GLs
	==============================================================================*/
	class arifle_MX_Base_F;
	class JLTS_EPL2: arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
	};
	class MET_EPL2: JLTS_EPL2
	{
		scope=2;
		displayName="[16th] EPL-2";
		magazines[]=
		{
			"MET_3Rnd_EMP_Grenade_shell"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
};