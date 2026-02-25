class CfgPatches
{
	class metal_rep_ammo_blasterboltglhe
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		ammo[]=
		{
		};
		requiredAddons[]=
		{
			"metal_weapons",
			"metal_rep_ammo",
			"metal_rep_ammo_base",
			"metal_rep_ammo_blasterboltglcore"
		};
	};
};
class CfgAmmo
{
	class MET_HE_LauncherGrenade;
	class MET_EMP_LauncherGrenade: MET_HE_LauncherGrenade
	{
		hit=0.0099999998;
		indirectHit=0.0099999998;
		explosive=0.0099999998;
		indirectHitRange=15;
		timeToLive=4;
		effectflare="FlareShell";
		effectfly="MET_GrenadeBlasterBoltGlow_White_Fly";
		fuseDistance=0;
		//ExplosionEffects="GrenadeExplosion";
		CraterEffects="GrenadeCrater";
		lightcolor[]={1,1,0.784};
		model="Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
		explosionEffects="JLTS_fx_exp_EMP";
		SoundSetExplosion[]=
		{
			"MET_GrenadeEMP_Exp_SoundSet",
			"MET_GrenadeEMP_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		JLTS_isEMPAmmo=1;
		ace_frag_enabled=0;
	};
};