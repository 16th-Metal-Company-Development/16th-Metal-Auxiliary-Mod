class CfgPatches
{
	class metal_rep_gl_grape_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_Grape_Grenade",
			"MET_6Rnd_Grape_Grenade",
			"MET_12Rnd_Grape_Grenade"
		};
		requiredAddons[]=
		{
			"metal_weapons"
		};
	};
};
class CfgMagazines
{
	class 1Rnd_HE_Grenade_shell;
	class MET_Grape_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Grapeshot";
		displayNameShort="[16th] Grapeshot";
		picture="\3AS\3AS_Weapons\Data\UI\3as_pellets_b.paa";
		descriptionShort="Fuck that Direction";
		ammo="MET_GrapeShot_blue";
		mass=6;
	};
	class MET_6Rnd_Grape_Grenade: MET_Grape_Grenade
	{
		count = 6;
		displayName = "[16th] 6 Round Grapeshot";
		mass = 12;
	};
	class MET_12Rnd_Grape_Grenade: MET_Grape_Grenade
	{
		count = 12;
		displayName = "[16th] 12 Round Grapeshot";
		mass = 16;
	};
};