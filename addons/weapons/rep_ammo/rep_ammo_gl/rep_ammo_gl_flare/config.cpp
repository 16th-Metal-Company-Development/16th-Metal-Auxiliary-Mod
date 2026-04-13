class CfgPatches
{
	class metal_rep_ammo_glflare
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_GL_Flare_LUM_SubMun",
			"MET_GL_Flare_LUM",
			"MET_GL_Flare_SUN_SubMun",
			"MET_GL_Flare_SUN",
			"MET_GL_Flare_RA_SubMun",
			"MET_GL_Flare_RA",
			"MET_GL_Flare_B_LUM_SubMun",
			"MET_GL_Flare_B_LUM",
			"MET_GL_Flare_G_LUM_SubMun",
			"MET_GL_Flare_G_LUM",
			"MET_GL_Flare_R_LUM_SubMun",
			"MET_GL_Flare_R_LUM",
			"MET_GL_Flare_Y_LUM_SubMun",
			"MET_GL_Flare_Y_LUM",
			"MET_GL_Flare_O_LUM_SubMun",
			"MET_GL_Flare_O_LUM",
			"MET_GL_Flare_P_LUM_SubMun",
			"MET_GL_Flare_P_LUM",
			"MET_GL_Flare_TU_LUM_SubMun",
			"MET_GL_Flare_TU_LUM",
			"MET_GL_Flare_TE_LUM_SubMun",
			"MET_GL_Flare_TE_LUM",
			"MET_GL_Flare_IR_LUM_SubMun",
			"MET_GL_Flare_IR_LUM"
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
	class MET_GL_Flare_LUM_SubMun: F_40mm_White
	{
		audibleFire = 0;
		timeToLive = 90;
		effectFlare = "CounterMeasureFlare";
		useFlare=1;
		lightColor[] = {0.95,0.95,1,0.5};
		smokeColor[] = {1,1,1,0.5};
		intensity = 1500000;
        coefGravity = 1.5;
		size = 1;
		triggerSpeedCoef=1;
		brightness=12;
	};
	class MET_GL_Flare_LUM: MET_GL_Flare_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==The SUN
	===============================================*/
	class MET_GL_Flare_SUN_SubMun: MET_GL_Flare_LUM_SubMun
	{
		timeToLive = 60;
		lightColor[] = {1, 0.839, 0.647,0.5};
		intensity = 25000000;
		brightness = 25000000;
	};
	class MET_GL_Flare_SUN: MET_GL_Flare_SUN_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==The Power of RA
	===============================================*/
	class MET_GL_Flare_RA_SubMun: MET_GL_Flare_LUM_SubMun
	{
		timeToLive = 15;
		lightColor[] = {1, 1, 1,0.5};
		smokeColor[] = {1,1,1,0.5};
		intensity = 999999999999999;
		brightness = 999999999999999;
	};
	class MET_GL_Flare_RA: MET_GL_Flare_RA_SubMun
	{
		audibleFire = 1;
	};
	/*===============================================
	==Blue Flares
	===============================================*/
	class MET_GL_Flare_B_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {0.1183,0.1867,1,0.5};
	};
	class MET_GL_Flare_B_LUM: MET_GL_Flare_B_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==Green Flares
	===============================================*/
	class MET_GL_Flare_G_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {0.067, 0.89, 0.035,0};
	};
	class MET_GL_Flare_G_LUM: MET_GL_Flare_G_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==Red Flares
	===============================================*/
	class MET_GL_Flare_R_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {0.84380001,0.1383,0.1353,0};
	};
	class MET_GL_Flare_R_LUM: MET_GL_Flare_R_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==Yellow Flares
	===============================================*/
	class MET_GL_Flare_Y_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {0.949, 0.937, 0.094,0};
	};
	class MET_GL_Flare_Y_LUM: MET_GL_Flare_Y_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==Orange Flares
	===============================================*/
	class MET_GL_Flare_O_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {1, 0.565, 0,0};
	};
	class MET_GL_Flare_O_LUM: MET_GL_Flare_O_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==Purple Flares
	===============================================*/
	class MET_GL_Flare_P_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {0.478, 0, 1,0};
	};
	class MET_GL_Flare_P_LUM: MET_GL_Flare_P_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==Turquoise Flares
	===============================================*/
	class MET_GL_Flare_TU_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {0, 0.976, 1,0};
	};
	class MET_GL_Flare_TU_LUM: MET_GL_Flare_TU_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==Teal Flares
	===============================================*/
	class MET_GL_Flare_TE_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {0, 1, 0.769,0};
	};
	class MET_GL_Flare_TE_LUM: MET_GL_Flare_TE_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
	/*===============================================
	==IR Flares
	===============================================*/
	class MET_GL_Flare_IR_LUM_SubMun: MET_GL_Flare_LUM_SubMun
	{
		lightColor[] = {0.25,0.25,0.25,0};
        nvgOnly = 1;
		intensity = 2000000;
	};
	class MET_GL_Flare_IR_LUM: MET_GL_Flare_IR_LUM_SubMun
	{
		audibleFire = 1;
        coefGravity = 0.25;
	};
};