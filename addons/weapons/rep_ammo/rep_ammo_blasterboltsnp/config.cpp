class CfgPatches
{
	class metal_rep_ammo_blasterboltsnp
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
			"MET_blasterbolt_snp",
			"MET_blasterbolt_snp_Red",
			"MET_blasterbolt_snp_Green",
			"MET_blasterbolt_snp_Yellow",
			"MET_blasterbolt_snp_STLTH",
			"MET_blasterbolt_at",
			"MET_blasterbolt_at_Red",
			"MET_blasterbolt_at_Green",
			"MET_blasterbolt_at_Yellow",
			"MET_blasterbolt_antimat",
			"MET_blasterbolt_antimat_Red",
			"MET_blasterbolt_antimat_Green",
			"MET_blasterbolt_antimat_Yellow",
			"MET_blasterbolt_antimat_Orange",
			"MET_blasterbolt_antimatat",
			"MET_blasterbolt_antimatat_Red",
			"MET_blasterbolt_antimatat_Green",
			"MET_blasterbolt_antimatat_Yellow"
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
	class MET_blasterbolt_snp: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		hit=100;
		indirectHit=0;
		explosive=1;
		indirectHitRange=0.5;
		caliber=4.8;
		timetolive=80;
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
		maxSpeed=1650;
	};
	class MET_blasterbolt_snp_Red: MET_blasterbolt_snp
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_snp_Green: MET_blasterbolt_snp
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_snp_Yellow: MET_blasterbolt_snp
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
	class MET_blasterbolt_snp_STLTH: MET_blasterbolt_snp
	{
		model="";
		effectfly="";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_at: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		hit=300;
		indirectHit=0;
		explosive=1;
		indirectHitRange=0.5;
		caliber=50;
		timetolive=80;
		tracerendtime=80;
		effectfly="MET_BlasterBoltGlow_Medium_Blue_Fly";
		maxSpeed=1650;
	};
	class MET_blasterbolt_at_Red: MET_blasterbolt_at
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_at_Green: MET_blasterbolt_at
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_at_Yellow: MET_blasterbolt_at
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
	class MET_blasterbolt_antimat: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		hit=300;
		indirectHit=12;
		explosive=1;
		indirectHitRange=1;
		caliber=50;
		timetolive=80;
		tracerendtime=80;
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
		//maxSpeed=2650;
	};
	class MET_blasterbolt_antimat_Red: MET_blasterbolt_antimat
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Medium_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_antimat_Green: MET_blasterbolt_antimat
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Medium_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_antimat_Yellow: MET_blasterbolt_antimat
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Medium_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
	class MET_blasterbolt_antimat_Orange: MET_blasterbolt_antimat
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_plasmaOrange";
		lightcolor[]={0.949, 0.631, 0};
	};
	class MET_blasterbolt_antimatat: MET_blasterbolt_base
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		lightcolor[]={0,0.30000001,1};
		hit=950;
		indirectHit=6;
		explosive=1;
		indirectHitRange=0.5;
		caliber=200;
		timetolive=80;
		tracerendtime=80;
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
		maxSpeed=3000;
	};
	class MET_blasterbolt_antimatat_Red: MET_blasterbolt_antimatat
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Medium_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_antimatat_Green: MET_blasterbolt_antimat
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Medium_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_antimatat_Yellow: MET_blasterbolt_antimat
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Medium_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
};