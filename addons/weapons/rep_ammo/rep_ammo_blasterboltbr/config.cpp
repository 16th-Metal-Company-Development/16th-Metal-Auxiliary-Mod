class CfgPatches
{
	class metal_rep_ammo_blasterboltbr
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_blasterbolt_br",
			"MET_blasterbolt_br_Red",
			"MET_blasterbolt_br_Green",
			"MET_blasterbolt_br_Yellow",
			"MET_blasterbolt_br_Stealth"
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
	class MET_blasterbolt_br: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		hit=40;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1.4;
		timetolive=15;
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
		maxSpeed=1000;
	};
	class MET_blasterbolt_br_Red: MET_blasterbolt_br
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_br_Green: MET_blasterbolt_br
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_br_Yellow: MET_blasterbolt_br
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
	class MET_blasterbolt_br_Stealth: MET_blasterbolt_br
	{
		model="";
		effectfly="";
		lightcolor[]={0,0,0};
	};
};