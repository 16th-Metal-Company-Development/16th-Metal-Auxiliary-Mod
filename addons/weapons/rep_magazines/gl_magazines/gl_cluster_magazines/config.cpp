class CfgPatches
{
	class metal_rep_gl_cluster_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_Clust_Grenade_shell",
			"MET_6Rnd_Clust_Grenade_shell",
			"MET_60mm_ClustHE_mag",
			"MET_60mm_WideClustHE_mag"
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
	class MET_Clust_Grenade_shell: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Cluster Grenade";
		displayNameShort="[16th] Cluster Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		descriptionShort="Cluster grenade";
		ammo="MET_40HE_ClusterShot";
		mass=16;
	};
	class MET_6Rnd_Clust_Grenade_shell: 3AS_6Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=6;
		displayName="[16th] 6 Round Cluster Grenade";
		displayNameShort="[16th] Cluster Grenades";
		descriptionShort="Impact grenade";
		ammo="MET_40HE_ClusterShot";
		mass=16;
	};
	class MET_60mm_ClustHE_mag: CA_Magazine
	{
		displayname="60mm Cluster Explosive";
		scope=2;
		ammo="MET_60HE_ClusterShot";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		model="\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		displaynamemagazine="[16th] 60mm High-Explosive";
		shortnamemagazine="60mm HE";
		displayNameMFDFormat="60mm HE";
		displayNameShort="60mm HE";
		count=1;
		mass=30;
		initspeed=100;
		tracersevery=1;
	};
	class MET_60mm_WideClustHE_mag: CA_Magazine
	{
		displayname="60mm Wide Cluster Explosive";
		scope=2;
		ammo="MET_60HE_ClusterWide";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		model="\MRC\JLTS\weapons\EPL2\EPL2_mag.p3d";
		displaynamemagazine="[16th] 60mm High-Explosive";
		shortnamemagazine="60mm HE";
		displayNameMFDFormat="60mm HE";
		displayNameShort="60mm HE";
		count=1;
		mass=30;
		initspeed=100;
		tracersevery=1;
	};
};