class CfgPatches
{
	class metal_rep_ammo_blasterboltlow
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_blasterbolt_low",
			"MET_blasterbolt_low_Red",
			"MET_blasterbolt_low_Green",
			"MET_blasterbolt_low_Yellow",
			"MET_blasterbolt_low_Dual",
			"MET_blasterbolt_low_Stealth"
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
	class MET_blasterbolt_low: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		hit=15;
		indirectHit=0;
		explosive=1;
		indirectHitRange=0.5;
		caliber=1.2;
		timetolive=8;
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
	};
	class MET_blasterbolt_low_Red: MET_blasterbolt_low
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_low_Green: MET_blasterbolt_low
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_low_Yellow: MET_blasterbolt_low
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
	class MET_blasterbolt_low_Dual: MET_blasterbolt_low
	{
		model="\3AS\3AS_Weapons\Data\tracer_blue_dual.p3d";
	};
	class MET_blasterbolt_Stealth_low: MET_blasterbolt
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		effectfly="MET_BlasterBoltGlow_Stealth_Fly";
		lightcolor[]={0.69,0.69,1};
		hit=25;
	};
};