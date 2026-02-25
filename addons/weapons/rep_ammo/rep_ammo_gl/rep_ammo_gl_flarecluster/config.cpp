class CfgPatches
{
	class metal_rep_ammo_glflarecluster
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_GL_Flare_LUM_Cluster",
			"MET_GL_Flare_SUN_Cluster",
			"MET_GL_Flare_RA_Cluster",
			"MET_GL_Flare_B_LUM_Cluster",
			"MET_GL_Flare_G_LUM_Cluster",
			"MET_GL_Flare_R_LUM_Cluster",
			"MET_GL_Flare_Y_LUM_Cluster",
			"MET_GL_Flare_O_LUM_Cluster",
			"MET_GL_Flare_P_LUM_Cluster",
			"MET_GL_Flare_TU_LUM_Cluster",
			"MET_GL_Flare_TE_LUM_Cluster",
			"MET_GL_Flare_IR_LUM_Cluster"
		};
		requiredAddons[]=
		{
			"metal_weapons",
			"metal_rep_ammo",
			"metal_rep_ammo_base",
			"metal_rep_ammo_glcore"
		};
	};
};
class CfgAmmo
{
	class F_40mm_White;
	/*===============================================
	==White Flare
	===============================================*/
	class MET_GL_Flare_LUM_Cluster: F_40mm_White
	{
		submunitionAmmo[] = {"MET_GL_Flare_LUM_SubMun"};
		submunitionInitSpeed = 250;
		submunitionConeAngle[] = {360};
		submunitionConeAngleHorizontal = 360;
		submunitionConeType[] = {"randomupcone",6};
		//submunitionConeType[] = {"randomverticalcone", 6};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = 2;
	};
	/*===============================================
	==The SUN
	===============================================*/
	class MET_GL_Flare_SUN_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_SUN_SubMun"};
	};
	/*===============================================
	==The Power of RA
	===============================================*/
	class MET_GL_Flare_RA_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_RA_SubMun"};
	};
	/*===============================================
	==Blue Flare
	===============================================*/
	class MET_GL_Flare_B_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_B_LUM_SubMun"};
	};
	/*===============================================
	==Green Flare
	===============================================*/
	class MET_GL_Flare_G_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_G_LUM_SubMun"};
	};
	/*===============================================
	==Red Flare
	===============================================*/
	class MET_GL_Flare_R_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_R_LUM_SubMun"};
	};
	/*===============================================
	==Yellow Flare
	===============================================*/
	class MET_GL_Flare_Y_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_Y_LUM_SubMun"};
	};
	/*===============================================
	==Orange Flare
	===============================================*/
	class MET_GL_Flare_O_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_O_LUM_SubMun"};
	};
	/*===============================================
	==Purple Flare
	===============================================*/
	class MET_GL_Flare_P_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_P_LUM_SubMun"};
	};
	/*===============================================
	==Turquoise Flare
	===============================================*/
	class MET_GL_Flare_TU_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_TU_LUM_SubMun"};
	};
	/*===============================================
	==Teal Flare
	===============================================*/
	class MET_GL_Flare_TE_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_TE_LUM_SubMun"};
	};
	/*===============================================
	==IR Flare
	===============================================*/
	class MET_GL_Flare_IR_LUM_Cluster: MET_GL_Flare_LUM_Cluster
	{
		submunitionAmmo[] = {"MET_GL_Flare_IR_LUM_SubMun"};
	};
};