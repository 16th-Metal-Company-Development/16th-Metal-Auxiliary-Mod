class CfgPatches
{
	class metal_rep_gl_heat_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_AT_Grenade",
			"MET_3Rnd_AT_Grenade_shell",
			"MET_6Rnd_AT_Grenade_shell",
			"MET_60mm_HEAT_mag"
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
	class 3AS_6Rnd_HE_Grenade_shell;
	class CA_Magazine;
	class MET_AT_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] HEAT Grenade";
		displayNameShort="[16th] HEAT Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_ap.paa";
		descriptionShort="Impact grenade";
		ammo="MET_HEAT_LauncherGrenade";
		mass=6;
	};
	class MET_3Rnd_AT_Grenade_shell: 3AS_6Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round HEAT Grenade";
		displayNameShort="[16th] HEAT Grenades";
		descriptionShort="Impact grenade";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_ap.paa";
		ammo="MET_HEAT_LauncherGrenade";
		mass=12;
	};
	class MET_6Rnd_AT_Grenade_shell: 3AS_6Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=6;
		displayName="[16th] 6 Round HEAT Grenade";
		displayNameShort="[16th] HEAT Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_ap.paa";
		descriptionShort="HEAT grenade";
		ammo="MET_HEAT_LauncherGrenade";
		mass=16;
	};
	class MET_60mm_HEAT_mag: CA_Magazine
	{
		displayname="60mm High Explosive Anti-Tank";
		scope=2;
		ammo="MET_60HEAT";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_ap.paa";
		model="\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		displaynamemagazine="[16th] 60mm High-Explosive Anti-Tank";
		shortnamemagazine="60mm HEAT";
		displayNameMFDFormat="60mm HEAT";
		displayNameShort="60mm HEAT";
		count=1;
		mass=20;
		initspeed=100;
		tracersevery=1;
	};
};