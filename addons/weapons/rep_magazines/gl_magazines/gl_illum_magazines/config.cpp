class CfgPatches
{
	class metal_rep_gl_illum_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_ILLUM_Grenade",
			"MET_SUN_Grenade",
			"MET_RA_Grenade",
			"MET_ILLUM_B_Grenade",
			"MET_ILLUM_G_Grenade",
			"MET_ILLUM_R_Grenade",
			"MET_ILLUM_Y_Grenade",
			"MET_ILLUM_O_Grenade",
			"MET_ILLUM_P_Grenade",
			"MET_ILLUM_TU_Grenade",
			"MET_ILLUM_TE_Grenade",
			"MET_ILLUM_IR_Grenade",
			"MET_3Rnd_ILLUM_Grenade",
			"MET_3Rnd_ILLUM_B_Grenade",
			"MET_3Rnd_ILLUM_G_Grenade",
			"MET_3Rnd_ILLUM_R_Grenade",
			"MET_3Rnd_ILLUM_Y_Grenade",
			"MET_3Rnd_ILLUM_O_Grenade",
			"MET_3Rnd_ILLUM_P_Grenade",
			"MET_3Rnd_ILLUM_TU_Grenade",
			"MET_3Rnd_ILLUM_TE_Grenade",
			"MET_3Rnd_ILLUM_IR_Grenade"
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
	class MET_ILLUM_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Illumination Flare";
		displayNameShort="[16th] White Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flw.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_LUM";
		mass=6;
	};
	class MET_SUN_Grenade: 1Rnd_HE_Grenade_shell
	{
		scope=1;
		author="Hazmat";
		count=1;
		displayName="[16th] THE SUN";
		displayNameShort="[16th] SUN";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flw.paa";
		descriptionShort="By the Emperors Light...";
		ammo="MET_GL_Flare_SUN";
		mass=6;
	};
	class MET_RA_Grenade: 1Rnd_HE_Grenade_shell
	{
		scope=1;
		author="Hazmat";
		count=1;
		displayName="[16th] The power of RA";
		displayNameShort="[16th] RA";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flw.paa";
		descriptionShort="RA!";
		ammo="MET_GL_Flare_RA";
		mass=6;
	};
	class MET_ILLUM_B_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Blue Illumination Flare";
		displayNameShort="[16th] Blue Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flb.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_B_LUM";
		mass=6;
	};
	class MET_ILLUM_G_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Green Illumination Flare";
		displayNameShort="[16th] Green Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flg.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_G_LUM";
		mass=6;
	};
	class MET_ILLUM_R_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Red Illumination Flare";
		displayNameShort="[16th] Red Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flr.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_R_LUM";
		mass=6;
	};
	class MET_ILLUM_Y_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Yellow Illumination Flare";
		displayNameShort="[16th] Yellow Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_fly.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_Y_LUM";
		mass=6;
	};
	class MET_ILLUM_O_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Orange Illumination Flare";
		displayNameShort="[16th] Orange Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flo.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_O_LUM";
		mass=6;
	};
	class MET_ILLUM_P_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Purple Illumination Flare";
		displayNameShort="[16th] Purple Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flp.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_P_LUM";
		mass=6;
	};
	class MET_ILLUM_TU_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		scope=1;
		count=1;
		displayName="[16th] Turquoise Illumination Flare";
		displayNameShort="[16th] Turquoise Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flb.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_TU_LUM";
		mass=6;
	};
	class MET_ILLUM_TE_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		scope=1;
		count=1;
		displayName="[16th] Teal Illumination Flare";
		displayNameShort="[16th] Teal Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flg.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_TE_LUM";
		mass=6;
	};
	class MET_ILLUM_IR_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] IR Illumination Flare";
		displayNameShort="[16th] IR Flare";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_flp.paa";
		descriptionShort="Flare";
		ammo="MET_GL_Flare_IR_LUM";
		mass=6;
	};
	class MET_3Rnd_ILLUM_Grenade: MET_ILLUM_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_B_Grenade: MET_ILLUM_B_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Blue Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_G_Grenade: MET_ILLUM_G_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Green Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_R_Grenade: MET_ILLUM_R_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Red Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_Y_Grenade: MET_ILLUM_Y_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Yellow Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_O_Grenade: MET_ILLUM_O_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Orange Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_P_Grenade: MET_ILLUM_P_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Purple Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_TU_Grenade: MET_ILLUM_TU_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Turquoise Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_TE_Grenade: MET_ILLUM_TE_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Teal Illumination Flare";
		mass=12;
	};
	class MET_3Rnd_ILLUM_IR_Grenade: MET_ILLUM_IR_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round IR Illumination Flare";
		mass=12;
	};
};