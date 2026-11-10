class CfgPatches
{
	class metal_rep_gl_emp_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_12Rnd_EMP_Grenade_shell"
		};
		requiredAddons[]=
		{
			"metal_weapons"
		};
	};
};
class CfgMagazines
{
	class 3AS_6Rnd_HE_Grenade_shell;
	class MET_12Rnd_EMP_Grenade_shell: 3AS_6Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=12;
		displayName="[16th] 12 Round EMP Grenade";
		displayNameShort="[16th] EMP Grenades";
		descriptionShort="EMP grenade. Useful against things like:<br /> Battle Droids<br /> Enemy Weapons<br /> Times when you shouldn't frag a room.";
		ammo="MET_EMP_LauncherGrenade";
		mass=12;
	};
};