class CfgPatches
{
	class metal_rep_ammo_glcluster
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_40HE_ClusterShot",
			"MET_25HE_ClusterShot",
			"MET_60HE_ClusterShot",
			"MET_60HE_ClusterWide"
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
	class MET_HE_LauncherGrenade;
	class MET_60HE;
	class MET_25HE_LauncherGrenade;
	class MET_40_GrenadeCluster_Sub1: MET_HE_LauncherGrenade
	{
		indirectHit = 15;
		indirectHitRange = 16;
		explosionTime = 1;
		effectfly="MET_GrenadeBlasterBoltGlow_White_Fly";
		lightcolor[]={1,1,0.784};
	};
	class MET_40_GrenadeCluster_Sub2: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.05;
	};
	class MET_40_GrenadeCluster_Sub3: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.1;
	};
	class MET_40_GrenadeCluster_Sub4: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.15;
	};
	class MET_40_GrenadeCluster_Sub5: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.2;
	};
	class MET_40_GrenadeCluster_Sub6: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.25;
	};
	class MET_40_GrenadeCluster_Sub7: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.3;
	};
	class MET_40_GrenadeCluster_Sub8: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.35;
	};
	class MET_40_GrenadeCluster_Sub9: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.4;
	};
	class MET_40_GrenadeCluster_Sub10: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.45;
	};
	class MET_40_GrenadeCluster_Sub11: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.5;
	};
	class MET_40_GrenadeCluster_Sub12: MET_40_GrenadeCluster_Sub1
	{
		explosionTime = 1.55;
	};
	class MET_40HE_ClusterShot: MET_HE_LauncherGrenade
	{
		submunitionAmmo[] = {"MET_40_GrenadeCluster_Sub1",0.167,"MET_40_GrenadeCluster_Sub2",0.167,"MET_40_GrenadeCluster_Sub3",0.167,"MET_40_GrenadeCluster_Sub4",0.167,"MET_40_GrenadeCluster_Sub5",0.167,"MET_40_GrenadeCluster_Sub6",0.167,"MET_40_GrenadeCluster_Sub7",0.167,"MET_40_GrenadeCluster_Sub8",0.167,"MET_40_GrenadeCluster_Sub9",0.167,"MET_40_GrenadeCluster_Sub10",0.167,"MET_40_GrenadeCluster_Sub11",0.167,"MET_40_GrenadeCluster_Sub12",0.167};
		submunitionInitSpeed = 14;
		submunitionConeAngle = 120;
		submunitionConeAngleHorizontal = 270;
		submunitionConeType[] = {"randomupcone",12};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		effectfly="MET_GrenadeBlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
	};
	class MET_25_GrenadeCluster_Sub1: MET_25HE_LauncherGrenade
	{
		indirectHit = 15;
		indirectHitRange = 16;
		explosionTime = 0.5;
		effectfly="MET_SmallGrenadeBlasterBoltGlow_White_Fly";
		lightcolor[]={1,1,0.784};
	};
	class MET_25_GrenadeCluster_Sub2: MET_25_GrenadeCluster_Sub1
	{
		explosionTime = 0.6;
	};
	class MET_25_GrenadeCluster_Sub3: MET_25_GrenadeCluster_Sub1
	{
		explosionTime = 0.7;
	};
	class MET_25HE_ClusterShot: MET_25HE_LauncherGrenade
	{
		submunitionAmmo[] = {"MET_25_GrenadeCluster_Sub1",0.33,"MET_25_GrenadeCluster_Sub2",0.33,"MET_25_GrenadeCluster_Sub3",0.33};
		submunitionInitSpeed = 6;
		submunitionConeAngle = 120;
		submunitionConeAngleHorizontal = 270;
		submunitionConeType[] = {"randomupcone",3};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		effectfly="MET_SmallGrenadeBlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
	};
	class MET_60_GrenadeCluster_Sub1: MET_60HE
	{
		indirectHit = 75;
		indirectHitRange = 16;
		explosionTime = 1;
	};
	class MET_60_GrenadeCluster_Sub2: MET_60_GrenadeCluster_Sub1
	{
		explosionTime = 1.1;
	};
	class MET_60_GrenadeCluster_Sub3: MET_60_GrenadeCluster_Sub1
	{
		explosionTime = 1.2;
	};
	class MET_60_GrenadeCluster_Sub4: MET_60_GrenadeCluster_Sub1
	{
		explosionTime = 1.3;
	};
	class MET_60_GrenadeCluster_Sub5: MET_60_GrenadeCluster_Sub1
	{
		explosionTime = 1.4;
	};
	class MET_60_GrenadeCluster_Sub6: MET_60_GrenadeCluster_Sub1
	{
		explosionTime = 1.5;
	};
	class MET_60HE_ClusterShot: MET_60HE
	{
		submunitionAmmo[] = {"MET_60_GrenadeCluster_Sub1",0.167,"MET_60_GrenadeCluster_Sub2",0.167,"MET_60_GrenadeCluster_Sub3",0.167,"MET_60_GrenadeCluster_Sub4",0.167,"MET_60_GrenadeCluster_Sub5",0.167,"MET_60_GrenadeCluster_Sub6",0.167};
		submunitionInitSpeed = 10;
		submunitionConeAngle = 120;
		submunitionConeAngleHorizontal = 270;
		submunitionConeType[] = {"randomupcone",6};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
	};
	class MET_60HE_ClusterWide: MET_60HE
	{
		submunitionAmmo[] = {"MET_60_GrenadeCluster_Sub1",0.167,"MET_60_GrenadeCluster_Sub2",0.167,"MET_60_GrenadeCluster_Sub3",0.167,"MET_60_GrenadeCluster_Sub4",0.167,"MET_60_GrenadeCluster_Sub5",0.167,"MET_60_GrenadeCluster_Sub6",0.167};
		submunitionInitSpeed = 20;
		submunitionConeAngle = 120;
		submunitionConeAngleHorizontal = 270;
		submunitionConeType[] = {"randomupcone",6};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
	};
};