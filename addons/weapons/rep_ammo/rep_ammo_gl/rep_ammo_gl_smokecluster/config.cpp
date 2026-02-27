class CfgPatches
{
	class metal_rep_ammo_glsmokecluster
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_GL_Smoke_Clust_White",
			"MET_GL_Smoke_Clust_Blue",
			"MET_GL_Smoke_Clust_Green",
			"MET_GL_Smoke_Clust_Orange",
			"MET_GL_Smoke_Clust_Purple",
			"MET_GL_Smoke_Clust_Red",
			"MET_GL_Smoke_Clust_Teal",
			"MET_GL_Smoke_Clust_Turquoise",
			"MET_GL_Smoke_Clust_Yellow"
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
	class GrenadeHand;
	/*===============================================
	==White Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_White: GrenadeHand
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
		submunitionAmmo[] = {"Met_Ammo_smoke_white"};
		submunitionInitSpeed = 12;
		submunitionConeAngle[] = {15};
		submunitionConeAngleHorizontal = 360;
		submunitionConeType[] = {"randomupcone",10};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
		timeToLive = 10;
		deflectionslowdown = 0;
		deflecting = 0;
	};
	/*===============================================
	==Blue Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_Blue: MET_GL_Smoke_Clust_White
	{
		submunitionAmmo[] = {"Met_Ammo_smoke_blue"};
	};
	/*===============================================
	==Green Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_Green: MET_GL_Smoke_Clust_White
	{
		submunitionAmmo[] = {"Met_Ammo_smoke_green"};
	};
	/*===============================================
	==Orange Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_Orange: MET_GL_Smoke_Clust_White
	{
		submunitionAmmo[] = {"Met_Ammo_smoke_orange"};
	};
	/*===============================================
	==Purple Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_Purple: MET_GL_Smoke_Clust_White
	{
		submunitionAmmo[] = {"Met_Ammo_smoke_purple"};
	};
	/*===============================================
	==Red Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_Red: MET_GL_Smoke_Clust_White
	{
		submunitionAmmo[] = {"Met_Ammo_smoke_red"};
	};
	/*===============================================
	==Teal Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_Teal: MET_GL_Smoke_Clust_White
	{
		submunitionAmmo[] = {"Met_Ammo_smoke_teal"};
	};
	/*===============================================
	==Turquoise Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_Turquoise: MET_GL_Smoke_Clust_White
	{
		submunitionAmmo[] = {"Met_Ammo_smoke_turquoise"};
	};
	/*===============================================
	==Yellow Smoke Grenade
	===============================================*/
	class MET_GL_Smoke_Clust_Yellow: MET_GL_Smoke_Clust_White
	{
		submunitionAmmo[] = {"Met_Ammo_smoke_yellow"};
	};
};