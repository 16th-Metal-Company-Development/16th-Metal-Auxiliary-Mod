class CfgPatches
{
	class metal_rep_ammo_blasterbolt
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_blasterbolt",
			"MET_blasterbolt_light_blue",
			"MET_blasterbolt_Red",
			"MET_blasterbolt_Green",
			"MET_blasterbolt_Yellow",
			"MET_blasterbolt_Stealth"
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
	class MET_blasterbolt: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
		hit=20;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1.4;
		timetolive=8;
	};
	class MET_blasterbolt_light_blue: MET_blasterbolt
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0.03,0.43,0.69};
		effectfly="MET_BlasterBoltGlow_LightBlue_Fly";
	};
	class MET_blasterbolt_Red: MET_blasterbolt
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_Green: MET_blasterbolt
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_Yellow: MET_blasterbolt
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
	class MET_blasterbolt_Stealth: MET_blasterbolt
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		effectfly="MET_BlasterBoltGlow_Stealth_Fly";
		lightcolor[]={0.69,0.69,1};
		hit=40;
	};
};