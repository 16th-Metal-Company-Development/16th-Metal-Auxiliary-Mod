class CfgPatches
{
	class metal_rep_ammo_blasterboltdmr
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_blasterbolt_dmr",
			"MET_blasterbolt_dmr_Red",
			"MET_blasterbolt_dmr_Green",
			"MET_blasterbolt_dmr_Yellow"
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
	class MET_blasterbolt_base;
	class MET_blasterbolt_dmr: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		hit=55;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=0.8;
		timetolive=20;
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
		maxSpeed=1250;
	};
	class MET_blasterbolt_dmr_Red: MET_blasterbolt_dmr
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_dmr_Green: MET_blasterbolt_dmr
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_dmr_Yellow: MET_blasterbolt_dmr
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
};