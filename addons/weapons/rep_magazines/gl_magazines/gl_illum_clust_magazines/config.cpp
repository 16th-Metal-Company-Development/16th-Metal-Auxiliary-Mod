class CfgPatches
{
	class metal_rep_gl_illum_clust_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_ILLUM_Grenade_Clust",
			"MET_SUN_Grenade_Clust",
			"MET_RA_Grenade_Clust",
			"MET_ILLUM_B_Grenade_Clust",
			"MET_ILLUM_G_Grenade_Clust",
			"MET_ILLUM_R_Grenade_Clust",
			"MET_ILLUM_Y_Grenade_Clust",
			"MET_ILLUM_O_Grenade_Clust",
			"MET_ILLUM_P_Grenade_Clust",
			"MET_ILLUM_TU_Grenade_Clust",
			"MET_ILLUM_TE_Grenade_Clust",
			"MET_ILLUM_IR_Grenade_Clust",
			"MET_3Rnd_ILLUM_Grenade_Clust",
			"MET_3Rnd_ILLUM_B_Grenade_Clust",
			"MET_3Rnd_ILLUM_G_Grenade_Clust",
			"MET_3Rnd_ILLUM_R_Grenade_Clust",
			"MET_3Rnd_ILLUM_Y_Grenade_Clust",
			"MET_3Rnd_ILLUM_O_Grenade_Clust",
			"MET_3Rnd_ILLUM_P_Grenade_Clust",
			"MET_3Rnd_ILLUM_TU_Grenade_Clust",
			"MET_3Rnd_ILLUM_TE_Grenade_Clust",
			"MET_3Rnd_ILLUM_IR_Grenade_Clust"
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
	class MET_ILLUM_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Illumination Star Cluster";
		displayNameShort="[16th] White Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flw.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_LUM_Cluster";
		mass=6;
	};
	class MET_SUN_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		scope=1;
		author="Hazmat";
		count=1;
		displayName="[16th] THE SUN Star Cluster";
		displayNameShort="[16th] SUN Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flw.paa";
		descriptionShort="... Light my Darkness";
		ammo="MET_GL_Flare_SUN_Cluster";
		mass=6;
	};
	class MET_RA_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		scope=1;
		author="Hazmat";
		count=1;
		displayName="[16th] The power of RA Star Cluster";
		displayNameShort="[16th] RA Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flw.paa";
		descriptionShort="I SUMMON THEE";
		ammo="MET_GL_Flare_RA_Cluster";
		mass=6;
	};
	class MET_ILLUM_B_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Blue Illumination Star Cluster";
		displayNameShort="[16th] Blue Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flb.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_B_LUM_Cluster";
		mass=6;
	};
	class MET_ILLUM_G_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Green Illumination Star Cluster";
		displayNameShort="[16th] Green Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flg.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_G_LUM_Cluster";
		mass=6;
	};
	class MET_ILLUM_R_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Red Illumination Star Cluster";
		displayNameShort="[16th] Red Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flr.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_R_LUM_Cluster";
		mass=6;
	};
	class MET_ILLUM_Y_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Yellow Illumination Star Cluster";
		displayNameShort="[16th] Yellow Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_fly.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_Y_LUM_Cluster";
		mass=6;
	};
	class MET_ILLUM_O_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Orange Illumination Star Cluster";
		displayNameShort="[16th] Orange Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flo.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_O_LUM_Cluster";
		mass=6;
	};
	class MET_ILLUM_P_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Purple Illumination Star Cluster";
		displayNameShort="[16th] Purple Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flp.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_P_LUM_Cluster";
		mass=6;
	};
	class MET_ILLUM_TU_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		scope=1;
		count=1;
		displayName="[16th] Turquoise Illumination Star Cluster";
		displayNameShort="[16th] Turquoise Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flb.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_TU_LUM_Cluster";
		mass=6;
	};
	class MET_ILLUM_TE_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		scope=1;
		count=1;
		displayName="[16th] Teal Illumination Star Cluster";
		displayNameShort="[16th] Teal Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flg.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_TE_LUM_Cluster";
		mass=6;
	};
	class MET_ILLUM_IR_Grenade_Clust: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] IR Illumination Star Cluster";
		displayNameShort="[16th] IR Cluster";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flp.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_IR_LUM_Cluster";
		mass=6;
	};
	class MET_3Rnd_ILLUM_Grenade_Clust: MET_ILLUM_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_B_Grenade_Clust: MET_ILLUM_B_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Blue Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_G_Grenade_Clust: MET_ILLUM_G_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Green Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_R_Grenade_Clust: MET_ILLUM_R_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Red Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_Y_Grenade_Clust: MET_ILLUM_Y_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Yellow Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_O_Grenade_Clust: MET_ILLUM_O_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Orange Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_P_Grenade_Clust: MET_ILLUM_P_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Purple Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_TU_Grenade_Clust: MET_ILLUM_TU_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Turquoise Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_TE_Grenade_Clust: MET_ILLUM_TE_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Teal Illumination Star Cluster";
		mass=12;
	};
	class MET_3Rnd_ILLUM_IR_Grenade_Clust: MET_ILLUM_IR_Grenade_Clust
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round IR Illumination Star Cluster";
		mass=12;
	};
};