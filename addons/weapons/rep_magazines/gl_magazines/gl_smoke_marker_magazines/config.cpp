class CfgPatches
{
	class metal_rep_gl_smoke_marker_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_SMKMW_Grenade",
			"MET_SMKMB_Grenade",
			"MET_SMKMG_Grenade",
			"MET_SMKMM_Grenade",
			"MET_SMKMO_Grenade",
			"MET_SMKMP_Grenade",
			"MET_SMKMR_Grenade",
			"MET_SMKMTE_Grenade",
			"MET_SMKMTU_Grenade",
			"MET_SMKMY_Grenade",
			"MET_SMKMW_3GL_Grenade",
			"MET_SMKMB_3GL_Grenade",
			"MET_SMKMG_3GL_Grenade",
			"MET_SMKMM_3GL_Grenade",
			"MET_SMKMO_3GL_Grenade",
			"MET_SMKMP_3GL_Grenade",
			"MET_SMKMR_3GL_Grenade",
			"MET_SMKMTE_3GL_Grenade",
			"MET_SMKMTU_3GL_Grenade",
			"MET_SMKMY_3GL_Grenade"
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
	class 3Rnd_HE_Grenade_shell;
	class MET_SMKMW_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Marker White";
		displayNameShort="[16th] Marker White";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smw.paa";
		descriptionShort="Marking Smoke grenade";
		ammo="MET_MW_A";
		mass=6;
	};
	class MET_SMKMB_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Blue";
		displayNameShort="[16th] Marker Blue";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smb.paa";
		ammo="MET_MB_A";
	};
	class MET_SMKMG_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Green";
		displayNameShort="[16th] Marker Green";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smg.paa";
		ammo="MET_MG_A";
	};
	class MET_SMKMM_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Metal";
		displayNameShort="[16th] Marker Metal";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smb.paa";
		ammo="MET_MM_A";
	};
	class MET_SMKMO_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Orange";
		displayNameShort="[16th] Marker Orange";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smo.paa";
		ammo="MET_MO_A";
	};
	class MET_SMKMP_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Purple";
		displayNameShort="[16th] Marker Purple";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smp.paa";
		ammo="MET_MP_A";
	};
	class MET_SMKMR_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Red";
		displayNameShort="[16th] Marker Red";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smr.paa";
		ammo="MET_MR_A";
	};
	class MET_SMKMTE_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Teal";
		displayNameShort="[16th] Marker Teal";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smg.paa";
		ammo="MET_MTE_A";
	};
	class MET_SMKMTU_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Turquoise";
		displayNameShort="[16th] Marker Turquoise";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smb.paa";
		ammo="MET_MTU_A";
	};
	class MET_SMKMY_Grenade: MET_SMKMW_Grenade
	{
		displayName="[16th] Marker Yellow";
		displayNameShort="[16th] Marker Yellow";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smy.paa";
		ammo="MET_MY_A";
	};
	class MET_SMKMW_3GL_Grenade: 3Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3GL Marker White";
		displayNameShort="[16th] 3GL Marker White";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smw.paa";
		descriptionShort="3-round 3GL marking smoke magazine";
		ammo="MET_MW_A";
		mass=18;
	};
	class MET_SMKMB_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Blue";
		displayNameShort="[16th] 3GL Marker Blue";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smb.paa";
		ammo="MET_MB_A";
	};
	class MET_SMKMG_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Green";
		displayNameShort="[16th] 3GL Marker Green";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smg.paa";
		ammo="MET_MG_A";
	};
	class MET_SMKMM_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Metal";
		displayNameShort="[16th] 3GL Marker Metal";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smb.paa";
		ammo="MET_MM_A";
	};
	class MET_SMKMO_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Orange";
		displayNameShort="[16th] 3GL Marker Orange";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smo.paa";
		ammo="MET_MO_A";
	};
	class MET_SMKMP_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Purple";
		displayNameShort="[16th] 3GL Marker Purple";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smp.paa";
		ammo="MET_MP_A";
	};
	class MET_SMKMR_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Red";
		displayNameShort="[16th] 3GL Marker Red";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smr.paa";
		ammo="MET_MR_A";
	};
	class MET_SMKMTE_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Teal";
		displayNameShort="[16th] 3GL Marker Teal";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smg.paa";
		ammo="MET_MTE_A";
	};
	class MET_SMKMTU_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Turquoise";
		displayNameShort="[16th] 3GL Marker Turquoise";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smb.paa";
		ammo="MET_MTU_A";
	};
	class MET_SMKMY_3GL_Grenade: MET_SMKMW_3GL_Grenade
	{
		displayName="[16th] 3GL Marker Yellow";
		displayNameShort="[16th] 3GL Marker Yellow";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smy.paa";
		ammo="MET_MY_A";
	};
};
class CfgAmmo
{
	class G_40mm_Smoke;
	class MET_MW_Flare: G_40mm_Smoke
	{
		model="\A3\weapons_f\Ammo\UGL_Flare";
		airFriction=0;
		sideairFriction=0;
		triggerTime=9.9999999e-009;
		coefGravity=0.2;
		thrust=50;
		simulation="shotIlluminating";
		effectFlare="MET_MS_FlareShell";
		explosionTime=0.1;
		timetolive=120;
		initspeed=25;
		size=5;
		typicalSpeed=25;
		flare=1;
		lightColor[]={1,1,1,1};
		smokeColor[]={1,1,1,1};
		brightness=1;
		intensity=1;
		flareSize=1;
		flareAirFriction=0;
	};
	class MET_MW_A: MET_MW_Flare
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
		simulation="shotSmoke";
		effectsSmoke="MET_HandSmokeEffect";
		fuseDistance=0;
		submunitionAmmo="MET_MW_Flare";
		deleteParentWhenTriggered=0;
		initspeed=25;
		typicalSpeed=25;
		submunitionConeType[]=
		{
			"randomCenter",
			2
		};
		submunitionConeAngle=360;
		ACE_muzzleVelocities[]={25};
		triggerTime=1;
		smokeColor[]={1,1,1,1};
	};
	class MET_MB_Flare: MET_MW_Flare
	{
		lightColor[] = {0.1183, 0.1867 , 1, 0.5};
		smokeColor[]={0.1183, 0.1867, 1, 1};
	};
	class MET_MB_A: MET_MW_A
	{
		submunitionAmmo="MET_MB_Flare";
		smokeColor[]={0.1183, 0.1867, 1, 1};
	};
	class MET_MG_Flare: MET_MW_Flare
	{
		lightColor[] = {0.067, 0.89, 0.035,0};
		smokeColor[]={0.09, 0.58, 0.09, 1};
	};
	class MET_MG_A: MET_MW_A
	{
		submunitionAmmo="MET_MG_Flare";
		smokeColor[]={0.09, 0.58, 0.09, 1};
	};
	class MET_MM_Flare: MET_MW_Flare
	{
		lightColor[] = {0.1373, 0.1608, 0.2314, 1};
		smokeColor[] = {0.1373, 0.1608, 0.2314, 1};
	};
	class MET_MM_A: MET_MW_A
	{
		submunitionAmmo="MET_MM_Flare";
		smokeColor[] = {0.1373, 0.1608, 0.2314, 1};
	};
	class MET_MO_Flare: MET_MW_Flare
	{
		lightColor[] = {1, 0.565, 0, 0};
		smokeColor[]={1, 0.535, 0, 1};
	};
	class MET_MO_A: MET_MW_A
	{
		submunitionAmmo="MET_MO_Flare";
		smokeColor[]={1, 0.535, 0, 1};
	};
	class MET_MP_Flare: MET_MW_Flare
	{
		lightColor[] = {0.478, 0, 1,0};
		smokeColor[] = {0.631, 0, 0.631, 1};
	};
	class MET_MP_A: MET_MW_A
	{
		submunitionAmmo="MET_MP_Flare";
		smokeColor[] = {0.631, 0, 0.631, 1};
	};
	class MET_MR_Flare: MET_MW_Flare
	{
		lightColor[] = {0.84380001,0.1383,0.1353,0};
		smokeColor[] = {0.725, 0.1, 0.1, 1};
	};
	class MET_MR_A: MET_MW_A
	{
		submunitionAmmo="MET_MR_Flare";
		smokeColor[] = {0.725, 0.1, 0.1, 1};
	};
	class MET_MTE_Flare: MET_MW_Flare
	{
		lightColor[] = {0, 1, 0.769,0};
		smokeColor[] = {0, 0.9, 0.669, 1};
	};
	class MET_MTE_A: MET_MW_A
	{
		submunitionAmmo="MET_MTE_Flare";
		smokeColor[] = {0, 0.9, 0.669, 1};
	};
	class MET_MTU_Flare: MET_MW_Flare
	{
		lightColor[] = {0, 0.976, 1,0};
		smokeColor[] = {0, 0.876, 0.9, 1};
	};
	class MET_MTU_A: MET_MW_A
	{
		submunitionAmmo="MET_MTU_Flare";
		smokeColor[] = {0, 0.876, 0.9, 1};
	};
	class MET_MY_Flare: MET_MW_Flare
	{
		lightColor[] = {0.949, 0.937, 0.094,0};
		smokeColor[]={0.902, 0.8, 0, 1};
	};
	class MET_MY_A: MET_MW_A
	{
		submunitionAmmo="MET_MY_Flare";
		smokeColor[]={0.902, 0.8, 0, 1};
	};
};
class CfgMagazineWells
{
	class MET_GL_Magwell
	{
		MET_GL_MS[]=
		{
			"MET_SMKMW_Grenade",
			"MET_SMKMB_Grenade",
			"MET_SMKMG_Grenade",
			"MET_SMKMM_Grenade",
			"MET_SMKMO_Grenade",
			"MET_SMKMP_Grenade",
			"MET_SMKMTE_Grenade",
			"MET_SMKMTU_Grenade",
			"MET_SMKMY_Grenade"
		};
	};
	class MET_GL_Marker_Magwell
	{
		MET_GL_Marker_MS[]=
		{
			"MET_SMKMW_Grenade",
			"MET_SMKMB_Grenade",
			"MET_SMKMG_Grenade",
			"MET_SMKMM_Grenade",
			"MET_SMKMO_Grenade",
			"MET_SMKMP_Grenade",
			"MET_SMKMR_Grenade",
			"MET_SMKMTE_Grenade",
			"MET_SMKMTU_Grenade",
			"MET_SMKMY_Grenade"

		};
	};
	class MET_3GL_Magwell
	{
		MET_3GL_MS[]=
		{
			"MET_SMKMW_3GL_Grenade",
			"MET_SMKMB_3GL_Grenade",
			"MET_SMKMG_3GL_Grenade",
			"MET_SMKMM_3GL_Grenade",
			"MET_SMKMO_3GL_Grenade",
			"MET_SMKMP_3GL_Grenade",
			"MET_SMKMR_3GL_Grenade",
			"MET_SMKMTE_3GL_Grenade",
			"MET_SMKMTU_3GL_Grenade",
			"MET_SMKMY_3GL_Grenade"
		};
	};
};
class MET_MS_FlareShell
{
	class Light1
	{
		intensity=1;
		interval=1;
		position[]={0,0,0};
		simulation="light";
		type="FlareLight";
	};
};