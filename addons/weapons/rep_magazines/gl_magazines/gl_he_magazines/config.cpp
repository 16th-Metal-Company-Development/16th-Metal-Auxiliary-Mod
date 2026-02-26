class CfgPatches
{
	class metal_rep_gl_he_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_HE_Grenade",
			"MET_Nuclear_Grenade",
			"MET_3Rnd_HE_Grenade_shell",
			"MET_6Rnd_HE_Grenade_shell",
			"MET_6Rnd_HE_RocketGrenade",
			"MET_60mm_HE_mag"
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
	class MET_HE_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] HE Grenade";
		displayNameShort="[16th] HE Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		descriptionShort="Impact grenade";
		ammo="MET_HE_LauncherGrenade";
		mass=6;
	};
	class MET_Nuclear_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		scope=1;
		count=1;
		displayName="[16th] Nuclear Grenade";
		displayNameShort="[16th] Nuclear Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		descriptionShort="Impact grenade";
		ammo="MET_Nuclear_LauncherGrenade";
		mass=8;
	};
	class MET_3Rnd_HE_Grenade_shell: 3AS_6Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round HE Grenade";
		displayNameShort="[16th] HE Grenades";
		descriptionShort="Impact grenade";
		ammo="MET_HE_LauncherGrenade";
		mass=12;
	};
	class MET_6Rnd_HE_Grenade_shell: 3AS_6Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=6;
		displayName="[16th] 6 Round HE Grenade";
		displayNameShort="[16th] HE Grenades";
		descriptionShort="Impact grenade";
		ammo="MET_HE_LauncherGrenade";
		mass=16;
	};
	class MET_6Rnd_HE_RocketGrenade: 3AS_6Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=6;
		displayName="[16th] 6 Round Rocket Grenade";
		displayNameShort="[16th] Rocket Grenades";
		descriptionShort="Impact grenade";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_proto.paa";
		ammo="MET_RocketGrenade_HE";
		initSpeed=300;
		mass=16;
	};
	class MET_60mm_HE_mag: CA_Magazine
	{
		displayname="60mm High Explosive";
		scope=2;
		ammo="MET_60HE";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		model="\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		displaynamemagazine="[16th] 60mm High-Explosive";
		shortnamemagazine="60mm HE";
		displayNameMFDFormat="60mm HE";
		displayNameShort="60mm HE";
		count=1;
		mass=20;
		initspeed=100;
		tracersevery=1;
	};
};