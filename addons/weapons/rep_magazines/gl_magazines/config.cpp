class CfgPatches
{
	class metal_rep_gl_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_ProtonPack",
			"MET_HEATProtonPack",
			"MET_ClusterProtonPack",
			"MET_3Rnd_EMP_Grenade_shell"
		};
		requiredAddons[]=
		{
			"metal_weapons"
		};
	};
};
class CfgMagazines
{
	class MET_blaster_battery;
	class 3AS_6Rnd_HE_Grenade_shell;
	class MET_ProtonPack: MET_blaster_battery
	{
		author="Hazmat";
		scope=2;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		count=75;
		displayName="[16th] E403 HE Proton Pack";
		displayNameShort="E403 HE Proton Pack";
		descriptionShort="HE Proton Pack for the E403";
		ammo="MET_25HE_LauncherGrenade";
		tracersEvery=1;
		initSpeed=210;
		mass=100;
	};
	class MET_HEATProtonPack: MET_blaster_battery
	{
		author="Hazmat";
		scope=2;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_y.paa";
		count=75;
		displayName="[16th] E403 HEAT Proton Pack";
		displayNameShort="E403 HEAT Proton Pack";
		descriptionShort="HEAT Proton Pack for the E403";
		ammo="MET_25HEAT_LauncherGrenade";
		tracersEvery=1;
		initSpeed=210;
		mass=100;
	};
	class MET_ClusterProtonPack: MET_blaster_battery
	{
		author="Hazmat";
		scope=1;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_g.paa";
		count=25;
		displayName="[16th] E403 Cluster Proton Pack";
		displayNameShort="E403 Cluster Proton Pack";
		descriptionShort="Cluster Proton Pack for the E403";
		ammo="MET_25HE_ClusterShot";
		tracersEvery=1;
		initSpeed=210;
		mass=150;
	};
	class MET_3Rnd_EMP_Grenade_shell: 3AS_6Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=6;
		displayName="[16th] 6 Round EMP Grenade";
		displayNameShort="[16th] EMP Grenades";
		descriptionShort="EMP grenade. Useful against things like:<br /> Battle Droids<br /> Enemy Weapons<br /> Times when you shouldn't frag a room.";
		ammo="MET_EMP_LauncherGrenade";
		mass=12;
	};
};