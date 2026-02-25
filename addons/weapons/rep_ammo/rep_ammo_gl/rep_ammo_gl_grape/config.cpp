class CfgPatches
{
	class metal_rep_ammo_glgrape
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_GrapeShot_blue",
			"MET_Grape_subminition_blue"
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
	class MET_pellet_blue;
	class MET_GrapeShot_blue: MET_pellet_blue
	{
		hit=150;
		simulationStep=9.9999997e-005;
		caliber = 200;
		submunitionAmmo="MET_pellet_subminition_blue";
		submunitionConeType[]=
		{
			"poissondisc",
			100
		};
		submunitionInitSpeed = 80;
		submunitionConeAngle=3;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
		cost=1;
	};
	class MET_Grape_subminition_blue: MET_slug_blue
	{
		deflecting=2;
		caliber = 200;
		hit = 100;
	};
};