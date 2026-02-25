class CfgPatches
{
	class metal_rep_ammo_blasterboltsg
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_slug_blue",
			"MET_pellet_blue",
			"MET_pellet_subminition_blue",
			"MET_dp12_slug_blue",
			"MET_dp12_pellet_blue",
			"MET_dp12_pellet_subminition_blue",
			"MET_Doomsday_HE",
			"MET_pellet_doomsday",
			"MET_pellet_subminition_doomsday"
		};
		requiredAddons[]=
		{
			"metal_weapons",
			"metal_rep_ammo",
			"metal_rep_ammo_base"
		};
	};
};
class CfgAmmo
{
	class 3AS_PlasmaBase;
	class MET_slug_blue: 3AS_PlasmaBase
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		hit=90;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1;
		timetolive=4;
		tracerendtime=4;
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
	};
	class MET_pellet_blue: MET_slug_blue
	{
		hit=45;
		simulationStep=9.9999997e-005;
		cartridge="";
		submunitionAmmo="MET_pellet_subminition_blue";
		submunitionConeType[]=
		{
			"poissondisc",
			15
		};
		submunitionConeAngle=0.4;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
		cost=1;
	};
	class MET_pellet_subminition_blue: MET_slug_blue
	{
		hit=45;
		deflecting=2;
	};
	class MET_dp12_slug_blue: MET_slug_blue
	{
		hit=45;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=0.8;
	};
	class MET_dp12_pellet_blue: MET_dp12_slug_blue
	{
		hit=15;
		simulationStep=9.9999997e-005;
		cartridge="";
		submunitionAmmo="MET_dp12_pellet_subminition_blue";
		submunitionConeType[]=
		{
			"poissondisc",
			20
		};
		submunitionConeAngle=0.5;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
		cost=1;
	};
	class MET_dp12_pellet_subminition_blue: MET_dp12_slug_blue
	{
		hit=15;
		deflecting=2;
	};
	class MET_Doomsday_HE: MET_blasterbolt_base
	{
		// Example values, adjust as needed for your mod
		hit = 120;
		indirectHit = 40;
		indirectHitRange = 3;
		explosive = 1;
		ExplosionEffects = "ExploAmmoExplosion";
		CraterEffects = "ExploAmmoCrater";
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
		// Standard Arma 3 20mm HE uses these effects
		class HitEffects
		{
			hitGround = "ImpactShell20mm";
			hitGroundSoft = "ImpactShell20mm";
			hitGroundHard = "ImpactShell20mm";
			hitWater = "ImpactShell20mm";
			hitMan = "ImpactShell20mm";
			hitBuilding = "ImpactShell20mm";
			hitArmor = "ImpactShell20mm";
			hitMetal = "ImpactShell20mm";
			hitMetalPlate = "ImpactShell20mm";
			hitGlass = "ImpactShell20mm";
			hitGlassArmoRed = "ImpactShell20mm";
			hitWood = "ImpactShell20mm";
			hitPlastic = "ImpactShell20mm";
			hitRubber = "ImpactShell20mm";
			hitTyre = "ImpactShell20mm";
			hitFoliage = "ImpactShell20mm";
			hitVirtual = "ImpactShell20mm";
			default_mat = "ImpactShell20mm";
		};
	};
	class MET_pellet_doomsday: MET_Doomsday_HE
	{
		hit=95;
		simulationStep=9.9999997e-005;
		cartridge="";
		submunitionAmmo="MET_pellet_subminition_doomsday";
		submunitionConeType[]=
		{
			"poissondisc",
			10
		};
		submunitionConeAngle=0.4;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
		cost=1;
	};
	class MET_pellet_subminition_doomsday: MET_Doomsday_HE
	{
		hit=95;
		deflecting=2;
	};
};