class CfgPatches
{
	class metal_rep_sg_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_slug_mag",
			"MET_pellet_mag",
			"MET_Doomsday_mag",
			"MET_DP12_slug_mag",
			"MET_DP12_pellet_mag"
		};
		requiredAddons[]=
		{
			"metal_weapons"
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class MET_slug_mag: CA_Magazine
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] DP-23 Energy Cell (Slugs)";
		displayNameShort="DP-23 Slugs";
		descriptionShort="Slugs for the DP-23";
		picture="\3AS\3AS_Weapons\Data\UI\3as_shotgun_b.paa";
		model="\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		ammo="MET_slug_blue";
		initSpeed=450;
		count=10;
		mass=15;
		tracerEvery=1;
		lastRoundsTracer=8;
	};
	class MET_pellet_mag: CA_Magazine
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] DP-23 Energy Cell (Pellets)";
		displayNameShort="DP-23 Pellets";
		descriptionShort="Pellets for the DP-23";
		picture="\3AS\3AS_Weapons\Data\UI\3as_pellets_b.paa";
		model="\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		ammo="MET_pellet_blue";
		initSpeed=380;
		count=10;
		mass=15;
		tracerEvery=1;
		lastRoundsTracer=8;
	};
	class MET_Doomsday_mag: CA_Magazine
	{
		author="Hazmat";
		scope=2;
		scopeArsenal=1;
		displayName="[16th] DP-23 Energy Cell (Doomsday)";
		displayNameShort="DP-23 Doomsday";
		descriptionShort="Doomsday Pellets for the DP-23";
		picture="z\MET\addons\weapons\data\3as_doomsday_g.paa";
		model="\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		ammo="MET_pellet_doomsday";
		WBK_PlasmaKill_Color_String_Int = "Green";
		WBK_UseDisintegrate = "true";
		initSpeed=380;
		count=5;
		mass=30;
		tracerEvery=1;
		lastRoundsTracer=8;
	};
	class MET_DP12_slug_mag: CA_Magazine
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] DP-12 Energy Cell (Slugs)";
		displayNameShort="DP-12 Slugs";
		descriptionShort="Slugs for the DP-12";
		picture="\3AS\3AS_Weapons\Data\UI\3as_shotgun_b.paa";
		model="\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		ammo="MET_DP12_slug_blue";
		initSpeed=450;
		count=32;
		mass=20;
		tracerEvery=1;
		lastRoundsTracer=8;
	};
	class MET_DP12_pellet_mag: CA_Magazine
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] DP-12 Energy Cell (Pellets)";
		displayNameShort="DP-12 Pellets";
		descriptionShort="Pellets for the DP-12";
		picture="\3AS\3AS_Weapons\Data\UI\3as_pellets_b.paa";
		model="\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
		ammo="MET_DP12_pellet_blue";
		initSpeed=380;
		count=32;
		mass=20;
		tracerEvery=1;
		lastRoundsTracer=8;
	};
};