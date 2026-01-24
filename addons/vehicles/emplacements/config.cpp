
class CfgPatches
{
	class MET_Emplacements
	{
		units[] = 
		{
			"MET_AU_44_Mortar",
			"MET_AU_44_Mortar_Bag",
			"MET_Republic_Mortar",
			"MET_Republic_Mortar_Bag",
			"MET_01_arty_base_F",
			"MET_AV7",
			"MET_AV7_EdenOnly"
		};
		weapons[] = 
		{
			"MET_SGM120_Mortar_120mm",
			"MET_SGM120_Twin_Mortar_120mm",
			"MET_mortar_60mm",
			"MET_AV7_300mm_AMOS",
			"MET_Bantha_Commander_Turret"
		};
		magazines[] =
		{
			"MET_20Rnd_82mm_Mo_shells",
			"MET_20Rnd_82mm_Mo_Flare_white",
			"MET_20Rnd_82mm_Mo_Flare_Red",
			"MET_20Rnd_82mm_Mo_Smoke_white",
			"MET_10Rnd_120mm_Mo_shells",
			"MET_10Rnd_120mm_Mo_Flare_white",
			"MET_10Rnd_120mm_Mo_IR_Flare_white",
			"MET_10Rnd_120mm_Mo_Smoke_white",
			"MET_10Rnd_120mm_Mo_guided",
			"MET_10Rnd_120mm_Mo_LG",
			"MET_5Rnd_120mm_Mo_Cluster_HE",
			"MET_2Rnd_120mm_Mo_Extra_Cluster_HE",
			"MET_2Rnd_120mm_Mo_shells",
			"MET_2Rnd_120mm_Mo_Flare_white",
			"MET_2Rnd_120mm_Mo_IR_Flare_white",
			"MET_2Rnd_120mm_Mo_Smoke_white",
			"MET_2Rnd_120mm_Mo_guided",
			"MET_30Rnd_300mm_Mo_shells",
			"MET_DC15L_Heavy_mag"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies",
			"3AS_Main",
			"3AS_VehicleWeapons",
			"3AS_Static",
			"OPTRE_Weapons"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class CfgAmmo
{
    class FlareCore;
    class Sh_155mm_AMOS;
    class Sh_82mm_AMOS;
	class SubmunitionBase;
	class ShellBase;
    class SmokeShellArty;
	class B_20mm;
    //------------------------------- Blasters
	class MET_B_GreenPlasma_127_GPR: B_20mm
	{
		typicalSpeed=1000;
		coefGravity=0;
		/*hit=20;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1.4;*/
		bulletFly[]=
		{
			"bulletFly1",
			1
		};
		bulletFly1[]=
		{
			"",
			1.58489,
			1,
			30
		};
		timeToLive=10;
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=10;
		deflecting=0;
		model="3AS\3as_Weapons\Data\tracer_green";
		effectFly="3AS_PlasmaBolt_Medium_Green_Fly";
	};
	class MET_greenPlasma_aa_he: MET_B_GreenPlasma_127_GPR
	{
		hit=160;
		explosive=1;
		typicalSpeed=1500;
		tracerScale=1;
		effectFly="3AS_PlasmaBolt_Green_Fly";
	};
    //------------------------------- Missiles
	class M_PG_AT;
	class MET_Bantha_DAGR_Missile: M_PG_AT
	{
		scope=2;
		displayName="Bantha DAGR Missile";
		effectsMissile="Aux212_particle_effect_DAGR_fly";
	};
    //------------------------------- HE
	class MET_300mm_AMOS: ShellBase
	{
		hit=1200;
		indirectHit=800;
		indirectHitRange=50;
		warheadName="HE";
		dangerRadiusHit=1250;
		suppressionRadiusHit=120;
		typicalSpeed=800;
		caliber=10;
		deflecting=0;
		explosive=0.80000001;
		cost=300;
		model="\A3\weapons_f\ammo\shell";
		CraterEffects="HeavyBombCrater";
		ExplosionEffects="HeavyBombExplosion";
		whistleDist=60;
		artilleryLock=1;
		thrust=0;
		timeToLive=180;
		airFriction=0;
		sideairFriction=0;
		effectFly="MET_BlasterBoltGlow_Giant_PaleBlue_Fly";
		soundSetSonicCrack[]=
		{
			"3AS_Cannon_Flyby_SoundSet"
		};
		soundDefault1[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_1.ogg",
			6,
			1,
			1000
		};
		soundDefault2[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_2.ogg",
			6,
			1,
			1000
		};
		soundDefault3[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_3.ogg",
			6,
			1,
			1000
		};
		soundDefault4[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_4.ogg",
			6,
			1,
			1000
		};
		soundDefault5[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_5.ogg",
			6,
			1,
			1000
		};
		soundDefault6[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_6.ogg",
			6,
			1,
			1000
		};
		soundDefault7[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_7.ogg",
			6,
			1,
			1000
		};
		soundDefault8[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_8.ogg",
			6,
			1,
			1000
		};
		soundDefault9[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_9.ogg",
			6,
			1,
			1000
		};
		soundDefault10[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_10.ogg",
			6,
			1,
			1000
		};
		soundDefault11[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_11.ogg",
			6,
			1,
			1000
		};
		soundDefault12[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_12.ogg",
			6,
			1,
			1000
		};
		soundDefault13[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_13.ogg",
			6,
			1,
			1000
		};
		soundDefault14[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_14.ogg",
			6,
			1,
			1000
		};
		soundDefault15[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_15.ogg",
			6,
			1,
			1000
		};
		soundDefault16[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_16.ogg",
			6,
			1,
			1000
		};
		soundDefault17[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_17.ogg",
			6,
			1,
			1000
		};
		soundDefault18[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_18.ogg",
			6,
			1,
			1000
		};
		soundDefault19[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_19.ogg",
			6,
			1,
			1000
		};
		soundDefault20[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_20.ogg",
			6,
			1,
			1000
		};
		soundDefault21[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_21.ogg",
			6,
			1,
			1000
		};
		soundDefault22[]=
		{
			"3AS\3AS_VehicleWeapons\Impacts\Explosions\3AS_Explosion_22.ogg",
			6,
			1,
			1000
		};
		hitDefault[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitGround[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitGroundHard[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitGroundSoft[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitConcrete[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitBuilding[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitFoliage[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitWood[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitPlastic[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitRubber[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitTyre[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitMetal[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitIron[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitMetalInt[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitMetalPlate[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitArmor[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		hitArmorInt[]=
		{
			"soundDefault1",
			0.045449998,
			"soundDefault2",
			0.045449998,
			"soundDefault3",
			0.045449998,
			"soundDefault4",
			0.045449998,
			"soundDefault5",
			0.045449998,
			"soundDefault6",
			0.045449998,
			"soundDefault7",
			0.045449998,
			"soundDefault8",
			0.045449998,
			"soundDefault9",
			0.045449998,
			"soundDefault10",
			0.045449998,
			"soundDefault11",
			0.045449998,
			"soundDefault12",
			0.045449998,
			"soundDefault13",
			0.045449998,
			"soundDefault14",
			0.045449998,
			"soundDefault15",
			0.045449998,
			"soundDefault16",
			0.045449998,
			"soundDefault17",
			0.045449998,
			"soundDefault18",
			0.045449998,
			"soundDefault19",
			0.045449998,
			"soundDefault20",
			0.045449998,
			"soundDefault21",
			0.045449998,
			"soundDefault22",
			0.045449998
		};
		multiSoundHit[]=
		{
			"soundDefault1",
			0.045455001,
			"soundDefault2",
			0.045455001,
			"soundDefault3",
			0.045455001,
			"soundDefault4",
			0.045455001,
			"soundDefault5",
			0.045455001,
			"soundDefault6",
			0.045455001,
			"soundDefault7",
			0.045455001,
			"soundDefault8",
			0.045455001,
			"soundDefault9",
			0.045455001,
			"soundDefault10",
			0.045455001,
			"soundDefault11",
			0.045455001,
			"soundDefault12",
			0.045455001,
			"soundDefault13",
			0.045455001,
			"soundDefault14",
			0.045455001,
			"soundDefault15",
			0.045455001,
			"soundDefault16",
			0.045455001,
			"soundDefault17",
			0.045455001,
			"soundDefault18",
			0.045455001,
			"soundDefault19",
			0.045455001,
			"soundDefault20",
			0.045455001,
			"soundDefault21",
			0.045455001,
			"soundDefault22",
			0.045455001
		};
		class CamShakeExplode
		{
			power=31;
			duration=2.4000001;
			frequency=20;
			distance=339.599;
		};
		class CamShakeHit
		{
			power=155;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.52844;
			duration=2.4000001;
			frequency=20;
			distance=99.599197;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		ace_frag_classes[]=
		{
			"ace_frag_large",
			"ace_frag_large",
			"ace_frag_large_HD",
			"ace_frag_large",
			"ace_frag_huge",
			"ace_frag_huge_HD",
			"ace_frag_huge"
		};
		ace_frag_enabled=1;
		ace_frag_metal=30000;
		ace_frag_charge=9000;
		ace_frag_gurney_c=3500;
		ace_frag_gurney_k="1/2";
		ace_rearm_caliber=300;
	};
    //------------------------------- White Smoke
	class MET_Smoke_300mm_AMOS_White: SubmunitionBase
	{
		submunitionAmmo="MET_300mm_SmokeShellArty";
		submunitionConeType[]=
		{
			"poissondisc",
			8
		};
		effectFly="MET_BlasterBoltGlow_Giant_White_Fly";
		submunitionConeAngle=5;
		triggerDistance=100;
		cost=200;
		airFriction=0;
		muzzleEffect="";
		hit=300;
		class CamShakeFire
		{
			power=3.3097501;
			duration=2.2;
			frequency=20;
			distance=87.635597;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
    class MET_300mm_SmokeShellArty: SmokeShellArty
    {
        ace_rearm_caliber = 300;
        effectsSmoke = "HTASmokeEffect3";
		smokeColor[]={1,1,1,1};
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell.p3d";
        class CamShakeHit
        {
            power = 40;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
    };
    //-------------------------------- Smoke Cluster
    class MET_Smoke_Cluster_300mm_AMOS_White: MET_Smoke_300mm_AMOS_White
    {
		displayname="Republic 300 MW Smoke Cluster Mortar Shell";

		effectFly="MET_BlasterBoltGlow_Giant_White_Fly";
        submunitionAmmo = "MET_300mm_SmokeShellClust";
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell.p3d";
        ace_rearm_caliber = 300;
    };
	class GrenadeHand;
	class MET_300mm_SmokeShellClust: GrenadeHand
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
		submunitionAmmo[] = {"MET_300mm_SmokeShellArty"};
		submunitionInitSpeed = 28;
		submunitionConeAngle[] = {20,60};
		submunitionConeAngleHorizontal = 360;
		submunitionConeType[] = {"randomupcone",15};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
		timeToLive = 20;
		deflectionslowdown = 0;
		deflecting = 0;
	};
    //------------------------------- White Flare
    class Flare_82mm_AMOS_White;
    class MET_Flare_300mm_AMOS_White: Flare_82mm_AMOS_White
    {
		displayname="Republic 300 MW White Flare Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
		//effectFly="MET_BlasterBoltGlow_Large_Green2_Fly";
        //scifi means it lives longer and is brighter :)
        timeToLive = 90;
		effectFlare = "CounterMeasureFlare";
		lightColor[] = {1, 0.839, 0.647,0.5};
		smokeColor[] = {1,1,1,0.5};
		intensity = 30000000;
		brightness = 25000000;
        coefGravity = 1;
        ace_rearm_caliber = 120;
    };
    //------------------------------- IR Flare
    class MET_IR_Flare_300mm_AMOS_White: MET_Flare_300mm_AMOS_White
    {
		displayname="Republic 300 MW IR Flare Shell";
        nvgOnly = 1;
    };
    //-------------------------------- Guided
    class Sh_82mm_AMOS_guided;
    class MET_Sh_300mm_AMOS_guided: Sh_82mm_AMOS_guided
    {
		displayname="Republic 300 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Giant_PaleYellow_Fly";
        submunitionAmmo = "MET_M_Mo_300mm_AT";
        hit = 900;
        ace_rearm_caliber = 300;
        irLock = 1;
        laserLock = 0;
    };
    class MissileBase;
    class M_Mo_82mm_AT:MissileBase
    {
        class Components;
    };
	class ammo_Penetrator_Base;
	class MET_300HEAT_Penetrator: ammo_Penetrator_Base
	{
		effectFly="MET_BlasterBoltGlow_Giant_PaleYellow_Fly";
		hit=50000;
		warheadName="TandemHEAT";
		caliber=500;
	};
    class MET_M_Mo_300mm_AT: M_Mo_82mm_AT
    {
        ace_rearm_caliber = 300;
		effectFly="MET_BlasterBoltGlow_Large_Yellow_Fly";
		effectsMissile="3AS_Rocket_effect_Yellow_fly";

		submunitionAmmo="MET_300HEAT_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
        hit = 950;
        indirectHit = 165;
        indirectHitRange = 9;
        //maneuvrability = 10;

        //lets give it more lock angle
        missileLockCone = 70;
		missileKeepLockedCone = 70;
        irLock = 1;
		laserLock = 0;
		manualControl = 0;
		artilleryLock = 0;
		airLock = 1;
		groundLock = 1;
		dataLinkLock = 0;
		activeRadarLock = 0;
		passiveRadarLock = 0;
		antiRadiationLock = 0;

        //only angle changed
        class Components: Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class IRSensorComponent: SensorTemplateIR
                    {
                        class AirTarget
                        {
                            minRange = 200;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget
                        {
                            minRange = 200;
                            maxRange = 800;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 90;
                        angleRangeVertical = 90;
                    };
                };
            };
        };
    };
    //-------------------------------- Laser Guided
    class MET_Sh_300mm_AMOS_LG: MET_Sh_300mm_AMOS_guided
    {
		displayname="Republic 300 MW LG Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Giant_PaleYellow_Fly";
        ace_rearm_caliber = 300;
        submunitionAmmo = "MET_M_Mo_300mm_AT_LG";
        cost = 500;
        laserLock = 1;
        irLock = 0;
        muzzleEffect = "";
    };
    class MET_M_Mo_300mm_AT_LG: MET_M_Mo_300mm_AT
    {
        ace_rearm_caliber = 300;
        simulationStep = 0.002;
        weaponLockSystem = 4;
        //only changle changed
        class Components: Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class LaserSensorComponent: SensorTemplateLaser
                    {
                        class AirTarget
                        {
                            minRange = 800;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget
                        {
                            minRange = 800;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                    };
                };
            };
        };
    };
    //-------------------------------- Mine
	class MET_Mine_300mm_AMOS_range: SubmunitionBase
	{
		submunitionAmmo="Mo_ClassicMineRange";
		submunitionConeType[]=
		{
			"randomcenter",
			50
		};
		effectFly="MET_BlasterBoltGlow_Giant_PaleRed_Fly";
		submunitionConeAngle=30;
		triggerDistance=100;
		cost=500;
		airFriction=0;
		muzzleEffect="";
		hit=300;
		class CamShakeFire
		{
			power=3.52844;
			duration=2.4000001;
			frequency=20;
			distance=99.599197;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
    //-------------------------------- Funny Clusters
	class MET_Cluster_300mm_AMOS: SubmunitionBase
	{
		triggerDistance=200;
		triggerSpeedCoef[]={0.5,1};
		submunitionConeAngle=30;
		submunitionConeType[]=
		{
			"randomcenter",
			50
		};
		effectFly="MET_BlasterBoltGlow_Giant_PaleRed_Fly";
        submunitionAmmo[] = {"MET_60HE",0.70,"MET_60HEAT",0.20,"MET_40HE_ClusterShot",0.10};//70% HE, 20% HEAT, 10% cluster
		cost=200;
		airFriction=0;
		muzzleEffect="";
		hit=300;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01",
			1.7782794,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02",
			1.7782794,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03",
			1.7782794,
			1,
			2000
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04",
			1.7782794,
			1,
			2000
		};
		soundHit5[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05",
			1.7782794,
			1,
			2000
		};
		soundHit6[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06",
			1.7782794,
			1,
			2000
		};
		soundHit7[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07",
			1.7782794,
			1,
			2000
		};
		soundHit8[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08",
			1.7782794,
			1,
			2000
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.125,
			"soundHit2",
			0.125,
			"soundHit3",
			0.125,
			"soundHit4",
			0.125,
			"soundHit5",
			0.125,
			"soundHit6",
			0.125,
			"soundHit7",
			0.125,
			"soundHit8",
			0.125
		};
		class CamShakeFire
		{
			power=3.52844;
			duration=2.4000001;
			frequency=20;
			distance=99.599197;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
    //-------------------------------- Anti Tank Fuck You Clusters
	class MET_ATCluster_300mm_AMOS: SubmunitionBase
	{
		triggerDistance=200;
		triggerSpeedCoef[]={0.5,1};
		submunitionConeAngle=30;
		submunitionConeType[]=
		{
			"randomcenter",
			35
		};
		effectFly="MET_BlasterBoltGlow_Giant_PaleRed_Fly";
        submunitionAmmo[] = {"MET_M_Mo_300mm_AT",1};//100% AT Munitions
		cost=200;
		airFriction=0;
		muzzleEffect="";
		hit=300;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_01",
			1.7782794,
			1,
			2000
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_02",
			1.7782794,
			1,
			2000
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_03",
			1.7782794,
			1,
			2000
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_04",
			1.7782794,
			1,
			2000
		};
		soundHit5[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_05",
			1.7782794,
			1,
			2000
		};
		soundHit6[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_06",
			1.7782794,
			1,
			2000
		};
		soundHit7[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_07",
			1.7782794,
			1,
			2000
		};
		soundHit8[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Artillery_shell_explosion_08",
			1.7782794,
			1,
			2000
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.125,
			"soundHit2",
			0.125,
			"soundHit3",
			0.125,
			"soundHit4",
			0.125,
			"soundHit5",
			0.125,
			"soundHit6",
			0.125,
			"soundHit7",
			0.125,
			"soundHit8",
			0.125
		};
		class CamShakeFire
		{
			power=3.52844;
			duration=2.4000001;
			frequency=20;
			distance=99.599197;
		};
		class CamShakePlayerFire
		{
			power=0.02;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
    //------------------------------- HE
    class MET_Sh_120mm_AMOS: Sh_155mm_AMOS
    {
		displayname="Republic 120 MW HE Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Green2_Fly";

        hit = 225;
        indirectHit = 100;
        indirectHitRange = 30;
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ace_frag_medium", "ace_frag_medium_HD","ace_frag_large", "ace_frag_large_HD"};
        ace_frag_metal = 9600;
        ace_frag_charge = 2048;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 120;
        //These are here as reference

        //155mm
        // hit = 340;
        // indirectHit = 125;
        // indirectHitRange = 30;
        // ace_frag_classes[] = {"ace_frag_large", "ace_frag_large", "ace_frag_large_HD", "ace_frag_large", "ace_frag_huge", "ace_frag_huge_HD", "ace_frag_huge"};
        // ace_frag_metal = 36000;
        // ace_frag_charge = 9979;
        // ace_frag_gurney_c = 2440;
        // ace_frag_gurney_k = "1/2";
        // ace_rearm_caliber = 155;
        // ace_vehicle_damage_incendiary = 0.4;

        //82mm
        // hit = 165;
        // indirectHit = 52;
        // indirectHitRange = 18;
        // ace_frag_enabled = 1;
        // ace_frag_classes[] = {"ace_frag_medium", "ace_frag_medium_HD"};
        // ace_frag_metal = 3200;
        // ace_frag_charge = 420;
        // ace_frag_gurney_c = 2440;
        // ace_frag_gurney_k = "1/2";
        // ace_rearm_caliber = 82;
    };
    class MET_Flare_120mm_AMOS_White: Flare_82mm_AMOS_White
    {
		displayname="Republic 120 MW Flare Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
		//effectFly="MET_BlasterBoltGlow_Large_Green2_Fly";
        //scifi means it lives longer and is brighter :)
        timeToLive = 90;
		effectFlare = "CounterMeasureFlare";
		lightColor[] = {1, 0.839, 0.647,0.5};
		smokeColor[] = {1,1,1,0.5};
		intensity = 25000000;
		brightness = 25000000;
        coefGravity = 1;
        ace_rearm_caliber = 120;
    };
    //------------------------------- IR Flare
    class MET_IR_Flare_120mm_AMOS_White: MET_Flare_120mm_AMOS_White
    {
        nvgOnly = 1;
    };
    //-------------------------------- Smoke
    class Smoke_82mm_AMOS_White;
    class MET_Smoke_120mm_AMOS_White: Smoke_82mm_AMOS_White
    {
		displayname="Republic 120 MW Smoke Mortar Shell";

		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
        submunitionAmmo = "MET_120mm_SmokeShellArty";
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell.p3d";
        ace_rearm_caliber = 120;
    };
    class MET_120mm_SmokeShellArty: SmokeShellArty
    {
        ace_rearm_caliber = 120;
        effectsSmoke = "HTASmokeEffect2";
		smokeColor[]={1,1,1,1};
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell.p3d";
        class CamShakeHit
        {
            power = 40;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
    };
    //-------------------------------- Blue
    class MET_120mm_SmokeShellArty_Blue: MET_120mm_SmokeShellArty
    {
		smokeColor[]={0.1183,0.1867,1,1};
    };
    //-------------------------------- Turquoise
    class MET_120mm_SmokeShellArty_Turquoise: MET_120mm_SmokeShellArty
    {
		smokeColor[]={0, 0.976, 1,1};
    };
    //-------------------------------- Teal
    class MET_120mm_SmokeShellArty_Teal: MET_120mm_SmokeShellArty
    {
		smokeColor[]={0, 1, 0.769,1};
    };
	class MET_120mm_SmokeShellArty_green: MET_120mm_SmokeShellArty
	{
		smokeColor[]={0.03, 0.8, 0.02,1};
	};
	class MET_120mm_SmokeShellArty_orange: MET_120mm_SmokeShellArty
	{
		smokeColor[]={1, 0.565, 0,1};
	};
	class MET_120mm_SmokeShellArty_purple: MET_120mm_SmokeShellArty
	{
		smokeColor[]={0.478, 0, 1,1};
	};
	class MET_120mm_SmokeShellArty_red: MET_120mm_SmokeShellArty
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
	};
	class MET_120mm_SmokeShellArty_yellow: MET_120mm_SmokeShellArty
	{
		smokeColor[]={0.949, 0.937, 0.094,1};
	};
    //-------------------------------- Smoke Cluster
    class MET_Smoke_Cluster_120mm_AMOS_White: Smoke_82mm_AMOS_White
    {
		displayname="Republic 120 MW Smoke Cluster Mortar Shell";

		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
        submunitionAmmo = "MET_120mm_SmokeShellClust";
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell.p3d";
        ace_rearm_caliber = 120;
    };
	class MET_120mm_SmokeShellClust: GrenadeHand
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
		submunitionAmmo[] = {"MET_120mm_SmokeShellArty"};
		submunitionInitSpeed = 25;
		submunitionConeAngle[] = {10,30};
		submunitionConeAngleHorizontal = 360;
		submunitionConeType[] = {"randomupcone",15};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
		timeToLive = 20;
		deflectionslowdown = 0;
		deflecting = 0;
	};
    //-------------------------------- Pride Cluster
    class MET_Smoke_Cluster_120mm_AMOS_Pride: Smoke_82mm_AMOS_White
    {
		displayname="Republic 120 MW Smoke Cluster Mortar Shell";

		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
        submunitionAmmo = "MET_120mm_SmokeShellClust_Pride";
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell.p3d";
        ace_rearm_caliber = 120;
    };
	class MET_120mm_SmokeShellClust_Pride: GrenadeHand
	{
		model="\A3\weapons_f\Ammo\UGL_slug";
		submunitionAmmo[] = {"MET_120mm_SmokeShellArty_Blue",0.125,"MET_120mm_SmokeShellArty_Turquoise",0.125,"MET_120mm_SmokeShellArty_Teal",0.125,"MET_120mm_SmokeShellArty_green",0.125,"MET_120mm_SmokeShellArty_orange",0.125,"MET_120mm_SmokeShellArty_purple",0.125,"MET_120mm_SmokeShellArty_red",0.125,"MET_120mm_SmokeShellArty_yellow",0.125};//10% of each color
		submunitionInitSpeed = 25;
		submunitionConeAngle[] = {10,30};
		submunitionConeAngleHorizontal = 360;
		submunitionConeType[] = {"randomupcone",8};
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		submunitionAutoleveling = 1;
		submunitionDirectionType = "submunitionAutoleveling";
		directionalExplosion = 1;
		triggerOnImpact = 1;
		triggerDistance = 0;
		explosionTime = -1;
		timeToLive = 20;
		deflectionslowdown = 0;
		deflecting = 0;
	};
    //-------------------------------- Guided
    class MET_Sh_120mm_AMOS_guided: Sh_82mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Yellow_Fly";
        submunitionAmmo = "MET_M_Mo_120mm_AT";
        hit = 175;
        ace_rearm_caliber = 120;
        irLock = 1;
        laserLock = 0;
    };
	class MET_120HEAT_Penetrator: ammo_Penetrator_Base
	{
		hit=3050;
		warheadName="TandemHEAT";
		caliber=20;
	};
    class MET_M_Mo_120mm_AT: M_Mo_82mm_AT
    {
        ace_rearm_caliber = 120;
		effectFly="MET_BlasterBoltGlow_Large_Yellow_Fly";
		effectsMissile="3AS_Rocket_effect_Yellow_fly";

		submunitionAmmo="MET_120HEAT_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
        hit = 850;
        indirectHit = 65;
        indirectHitRange = 9;
        //maneuvrability = 10;

        //lets give it more lock angle
        missileLockCone = 70;
		missileKeepLockedCone = 70;
        irLock = 1;

        //only angle changed
        class Components: Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class IRSensorComponent: SensorTemplateIR
                    {
                        class AirTarget
                        {
                            minRange = 200;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget
                        {
                            minRange = 200;
                            maxRange = 800;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                    };
                };
            };
        };
    };
    //-------------------------------- Laser Guided
    class MET_Sh_120mm_AMOS_LG: MET_Sh_120mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Yellow_Fly";
        ace_rearm_caliber = 120;
        submunitionAmmo = "MET_M_Mo_120mm_AT_LG";
        cost = 500;
        laserLock = 1;
        irLock = 0;
        muzzleEffect = "";
    };
    class MET_M_Mo_120mm_AT_LG: MET_M_Mo_120mm_AT
    {
        ace_rearm_caliber = 120;
        simulationStep = 0.002;
        weaponLockSystem = 4;
        //only changle changed
        class Components: Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class LaserSensorComponent: SensorTemplateLaser
                    {
                        class AirTarget
                        {
                            minRange = 800;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget
                        {
                            minRange = 800;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                    };
                };
            };
        };
    };
    //------------------------------- Cluster HE cause aye lmao
    class MET_M_Mo_Cluster_HE: Sh_82mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Red_Fly";
        ace_rearm_caliber = 120;
        submunitionAmmo[] = {"MET_60HE",0.70,"MET_60HEAT",0.20,"MET_40HE_ClusterShot",0.10};//70% HE, 20% HEAT, 10% cluster
        submunitionConeType[] = { "randomcenter", 30 };
        submunitionConeAngle = 25;
        triggerDistance = 100;
        submunitionDirectionType = "SubmunitionModelDirection";
        cost = 200;
        muzzleEffect = "";      
    };
    //------------------------------- Oops All Clusters
    class MET_M_Mo_ExtraCluster_HE: Sh_82mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Red_Fly";
        ace_rearm_caliber = 120;
        submunitionAmmo[] = {"MET_40HE_ClusterShot",0.9,"MET_60HE_ClusterWide",0.1};//70% HE, 20% HEAT, 10% cluster
        submunitionConeType[] = { "randomcenter", 30 };
        submunitionConeAngle = 25;
        triggerDistance = 100;
        submunitionDirectionType = "SubmunitionModelDirection";
        cost = 200;
        muzzleEffect = "";      
    };
	//------------------------------- MET 60mm Shells
	class MET_60mm_HE_Mortar: Sh_82mm_AMOS
	{
		displayname="Republic HE Mortar Shell";
		effectFly="MET_BlasterBoltGlow_Medium_Blue_Fly";
		hit=140;
		indirectHit=90;
		indirectHitRange=15;
		cost=200;
		muzzleEffect="";
		warheadName="HE";
		dangerRadiusHit=400;
		suppressionRadiusHit=75;
		typicalSpeed=800;
		caliber=8;
		deflecting=0;
		explosive=0.6;
        ace_frag_metal = 120;  // Amount of metal being fragmented (grams)
        ace_frag_charge = 90;  // Amount of explosive filler (grams)
        ace_frag_gurney_c = 2300;  // Gurney velocity constant for explosive type
        ace_frag_gurney_k = 1/2;  // Gurney velocity shape factor
        ace_frag_classes[] = {"ACE_frag_medium_HD","ACE_frag_small_HD","ACE_frag_small"};  // Type of fragments
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled)
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled)
    
		/*class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};*/
	};
	class MET_60mm_Flare_White: FlareCore
	{
		effectFlare = "CounterMeasureFlare";
		lightColor[] = {0.95,0.95,1,0.5};
		smokeColor[] = {1,1,1,0.5};
		intensity = 2000000;
		brightness=12;
        coefGravity = 1.5;
		size = 1;
		timeToLive=300;
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		triggerTime=-1;
		triggerSpeedCoef=1;
		flareSize=40;
		flareAirFriction=-15.5;
		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
		class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class MET_60mm_Flare_Red: FlareCore
	{
		timeToLive=120;
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		triggerTime=-1;
		triggerSpeedCoef=1;
		lightColor[] = {0.84380001,0.1383,0.1353,0};
		smokeColor[] = {1,1,1,0.5};
		brightness=12;
		intensity = 2000000;
		flareSize=40;
		flareAirFriction=-2;
		fuseDistance=10;
		effectFly="MET_BlasterBoltGlow_Medium_Red_Fly";
		class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class MET_60mm_Smoke_White: Smoke_82mm_AMOS_White
	{
		displayname="Republic 60 MW Smoke Mortar Shell";

		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
		model="\A3\weapons_f\ammo\shell";
		submunitionAmmo="Met_Ammo_smoke_white";
	};
};
class CfgMagazines
{
    class VehicleMagazine;
    class 8Rnd_82mm_Mo_shells;
	class MET_500Rnd_Z20_HBB: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z20 Heavy Blaster Bolt";
		displayNameShort="Z20 H.B.B";
		picture="";
		ammo="MET_B_GreenPlasma_127_GPR";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class MET_1000Rnd_Z60_HAA: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z60 Heavy Blaster Bolt";
		displayNameShort="Z60 H.A.A";
		picture="";
		ammo="MET_greenPlasma_aa_he";
		mass=8;
		count=1000;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class 12Rnd_PG_missiles;
	class MET_Bantha_DAGR_Magazine: 12Rnd_PG_missiles
	{
		scope=2;
		displayName="Bantha DAGR Missiles";
		displayNameShort="DAGR";
		ammo="MET_Bantha_DAGR_Missile";
	};
	class MET_blaster_battery;
	class MET_Bantha_T_Assault_MG_Mag: MET_blaster_battery
	{
		scope=2;
		displayName="[16th] Bantha-T Assault (MG Mag)";
		ammo="MET_blasterbolt_low";
		count=300;
	};
	class MET_30Rnd_300mm_Mo_shells: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 High Explosive Shells";
		displayNameShort="HE";
		displayNameMFDFormat="HE";
		ammo="MET_300mm_AMOS";
		count=30;
		nameSound="heat";
		muzzleImpulseFactor[]={1.5,10};
	};
	class MET_12Rnd_300mm_Mo_smoke: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 Smoke Shells";
		displayNameShort="Smoke";
		displayNameMFDFormat="SMK";
		ammo="MET_Smoke_300mm_AMOS_White";
		count=12;
		nameSound="smoke";
		[]={1.2,8};
	};
	class MET_12Rnd_300mm_Mo_Clust_smoke: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 Cluster Smoke Shells";
		displayNameShort="Smoke";
		displayNameMFDFormat="SMK";
		ammo="MET_Smoke_Cluster_300mm_AMOS_White";
		count=12;
		nameSound="smoke";
		[]={1.2,8};
	};
	class MET_12Rnd_300mm_Mo_flare: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 Flare Shells";
		displayNameShort="Flare";
		displayNameMFDFormat="FLR";
		ammo="MET_Smoke_300mm_AMOS_White";
		count=12;
		nameSound="smoke";
		muzzleImpulseFactor[]={1.2,8};
	};
	class MET_4Rnd_300mm_Mo_guided: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 AT Guided Shells";
		displayNameShort="AT Guided";
		displayNameMFDFormat="ATG";
		ammo="MET_Sh_300mm_AMOS_guided";
		count=4;
		nameSound="heat";
		muzzleImpulseFactor[]={1.5,10};
	};
	class MET_4Rnd_300mm_Mo_LG: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 Laser Guided Shells";
		displayNameShort="Laser Guided";
		displayNameMFDFormat="LG";
		ammo="MET_Sh_300mm_AMOS_LG";
		count=4;
		nameSound="heat";
		muzzleImpulseFactor[]={1.5,10};
	};
	class MET_4Rnd_300mm_Mo_mine: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 Mine Dispenser Shells";
		displayNameShort="Mine";
		displayNameMFDFormat="MINE";
		ammo="MET_Mine_300mm_AMOS_range";
		count=4;
		nameSound="mine";
		muzzleImpulseFactor[]={1.2,8};
	};
	class MET_5Rnd_300mm_Mo_Cluster: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 Cluster Shells";
		displayNameShort="Cluster";
		displayNameMFDFormat="CLST";
		ammo="MET_Cluster_300mm_AMOS";
		count=5;
		nameSound="cluster";
		muzzleImpulseFactor[]={1.5,10};
	};
	class MET_5Rnd_300mm_Mo_ATCluster: VehicleMagazine
	{
		author="Hazmat";
		initSpeed=810;
		scope=2;
		displayName="AV7 Anti Tank Cluster Shells";
		displayNameShort="Cluster";
		displayNameMFDFormat="CLST";
		ammo="MET_ATCluster_300mm_AMOS";
		count=5;
		nameSound="cluster";
		muzzleImpulseFactor[]={1.5,10};
	};
    class MET_10Rnd_120mm_Mo_shells: 8Rnd_82mm_Mo_shells
    {
        author = "Hazmat";
        count = 10;
        ammo = "MET_Sh_120mm_AMOS";
        displayName = "HE Mortar Shells";
        displayNameShort = "HE";  
        displayNameMFDFormat = "HE";
        picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Flare_120mm_AMOS_White";
		displayName = "Flare Mortar Shells (White)";
		displayNameShort = "White Flare";
		displayNameMFDFormat = "FLR";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_IR_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_IR_Flare_120mm_AMOS_White";
		displayName = "IR Flare Mortar Shells (White)";
		displayNameShort = "IR Flare";
		displayNameMFDFormat = "IR";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Smoke_120mm_AMOS_White";
		displayName = "Smoke Mortar Shells (White)";
		displayNameShort = "White Smoke";
		displayNameMFDFormat = "SMK";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_Smoke_Cluster_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Smoke_Cluster_120mm_AMOS_White";
		displayName = "Smoke Cluster Mortar Shells (White)";
		displayNameShort = "White Smoke";
		displayNameMFDFormat = "SMK";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_Smoke_Cluster_pride: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 69;
		ammo = "MET_Smoke_Cluster_120mm_AMOS_Pride";
		displayName = "Smoke Cluster Mortar Shells (Pride)";
		displayNameShort = "White Smoke";
		displayNameMFDFormat = "SMK";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_guided: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Sh_120mm_AMOS_guided";
		displayName = "AT Guided Mortar Shells";
		displayNameShort = "AT Guided";
		displayNameMFDFormat = "ATG";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_LG: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Sh_120mm_AMOS_LG";
		displayName = "Laser Guided Mortar Shells";
		displayNameShort = "Laser Guided";
		displayNameMFDFormat = "LG";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_5Rnd_120mm_Mo_Cluster_HE: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 5;
		ammo = "MET_M_Mo_Cluster_HE";
		displayName = "Cluster HE Mortar Shells";
		displayNameShort = "Cluster HE";
		displayNameMFDFormat = "CLST";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_2Rnd_120mm_Mo_Extra_Cluster_HE: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 2;
		ammo = "MET_M_Mo_ExtraCluster_HE";
		displayName = "Double Cluster HE Mortar Shells";
		displayNameShort = "Cluster HE";
		displayNameMFDFormat = "Oopsies";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_2Rnd_120mm_Mo_shells: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 2;
		ammo = "MET_Sh_120mm_AMOS";
		displayName = "HE Mortar Shells (2rnd)";
		displayNameShort = "HE";
		displayNameMFDFormat = "HE";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_2Rnd_120mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 2;
		ammo = "MET_Flare_120mm_AMOS_White";
		displayName = "Flare Mortar Shells (White, 2rnd)";
		displayNameShort = "White Flare";
		displayNameMFDFormat = "FLR";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_2Rnd_120mm_Mo_IR_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 2;
		ammo = "MET_IR_Flare_120mm_AMOS_White";
		displayName = "IR Flare Mortar Shells (2rnd)";
		displayNameShort = "IR Flare";
		displayNameMFDFormat = "IR";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_2Rnd_120mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 2;
		ammo = "MET_Smoke_120mm_AMOS_White";
		displayName = "Smoke Mortar Shells (White, 2rnd)";
		displayNameShort = "White Smoke";
		displayNameMFDFormat = "SMK";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_2Rnd_120mm_Mo_guided: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 2;
		ammo = "MET_Sh_120mm_AMOS_guided";
		displayName = "AT Guided Mortar Shells (2rnd)";
		displayNameShort = "AT Guided";
		displayNameMFDFormat = "ATG";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_20Rnd_82mm_Mo_shells: VehicleMagazine
	{
		author="$STR_3as_Studio";
		displayName="HE Mortar Shells";
		displayNameShort="HE";
		displayNameMFDFormat="HE";
		scope=2;
		count=20;
		ammo="MET_60mm_HE_Mortar";
		nameSound="heat";
		muzzleImpulseFactor[]={0,0};
		initSpeed=200;
		ace_arsenal_hide=-1;
		ace_artillerytables_airFriction=-9.9999997e-005;
	};
	class MET_20Rnd_82mm_Mo_Flare_white: MET_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="MET_60mm_Flare_White";
		displayName="Flare Mortar Shell (White)";
		displayNameShort="White Flare";
	};
	class MET_20Rnd_82mm_Mo_Flare_Red: MET_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="MET_60mm_Flare_Red";
		displayName="Flare Mortar Shell (Red)";
		displayNameShort="Red Flare";
	};
	class MET_20Rnd_82mm_Mo_Smoke_white: MET_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="MET_60mm_Smoke_White";
		displayName="Smoke Mortar Shell (White)";
		displayNameShort="White Smoke";
	};
	class JLTS_DC15A_mag;
	class MET_DC15L_Heavy_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=500;
		displayName="[16th] DC-15L Energy Cell";
		displayNameShort="DC-15L Energy Cell";
		descriptionShort="Energy cell for the DC-15L";
		ammo="MET_blasterbolt";
		mass = 125;
		tracersEvery=1;
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class MGun;
class LMG_M200;
class CfgWeapons
{
    class CannonCore;
    class mortar_82mm: CannonCore
    {
        class Single1;
        class Single2;
        class Single3;
        class Burst1;
        class Burst2;
        class Burst3;
    };
	class LMG_RCWS;
	class MET_autocannon_Base_F: CannonCore
	{
		scope=1;
		cursor="EmptyCursor";
		cursorAim="cannon";
		nameSound="cannon";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			2.5118864,
			1,
			1800
		};
		soundContinuous=0;
		reloadTime=0.30000001;
		aiRateOfFire=0.60000002;
		magazineReloadTime=2;
		autoReload=1;
		ballisticsComputer="2 + 16";
		FCSMaxLeadSpeed=27.778;
		FCSZeroingDelay=1;
		canLock=0;
		autoFire=1;
		modes[]=
		{
			"player",
			"close",
			"short",
			"medium",
			"far"
		};
		shotFromTurret=0;
		showAimCursorInternal=0;
		class player: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
					1,
					1,
					1500
				};
				begin2[]=
				{
					"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
					1.5,
					1,
					1500
				};
				begin3[]=
				{
					"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
					0.80000001,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
			};
			soundContinuous=0;
			reloadTime=0.30000001;
			dispersion=0.00089999998;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: player
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=6;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=200;
			minRange=0;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.80000001;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=5;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.80000001;
			maxRange=1200;
			maxRangeProbab=0.80000001;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=3;
			aiRateOfFire=2;
			aiRateOfFireDispersion=3;
			aiRateOfFireDistance=1000;
			minRange=1000;
			minRangeProbab=0.80000001;
			midRange=1500;
			midRangeProbab=0.80000001;
			maxRange=2000;
			maxRangeProbab=0.69999999;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=2;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1800;
			minRange=1800;
			minRangeProbab=0.74000001;
			midRange=2400;
			midRangeProbab=0.64999998;
			maxRange=3000;
			maxRangeProbab=0.050000001;
		};
	};
	class MET_autocannon_Z20_HBB: MET_autocannon_Base_F
	{
		displayName="Z20 H.B.B";
		muzzles[]=
		{
			"HE"
		};
		class HE: MET_autocannon_Base_F
		{
			displayName="Z20 H.B.B";
			magazines[]=
			{
				"MET_500Rnd_Z20_HBB",
				"sci_500Rnd_Z20_HBB"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.2;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
						1,
						1,
						1500
					};
					begin2[]=
					{
						"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
						1.5,
						1,
						1500
					};
					begin3[]=
					{
						"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
						0.80000001,
						1,
						1500
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.34
					};
				};
			};
			class close: player
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=3;
				burstRangeMax=6;
				aiRateOfFire=1;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=200;
				minRange=0;
				minRangeProbab=0.1;
				midRange=400;
				midRangeProbab=0.69999999;
				maxRange=800;
				maxRangeProbab=0.80000001;
			};
			class short: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=5;
				aiRateOfFire=2;
				aiRateOfFireDispersion=2;
				aiRateOfFireDistance=600;
				minRange=600;
				minRangeProbab=0.75;
				midRange=800;
				midRangeProbab=0.80000001;
				maxRange=1200;
				maxRangeProbab=0.80000001;
			};
			class medium: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=3;
				aiRateOfFire=2;
				aiRateOfFireDispersion=3;
				aiRateOfFireDistance=1000;
				minRange=1000;
				minRangeProbab=0.80000001;
				midRange=1500;
				midRangeProbab=0.80000001;
				maxRange=2000;
				maxRangeProbab=0.69999999;
			};
			class far: close
			{
				aiBurstTerminable=1;
				showToPlayer=0;
				burst=1;
				burstRangeMax=1;
				aiRateOfFire=2;
				aiRateOfFireDispersion=4;
				aiRateOfFireDistance=1800;
				minRange=1800;
				minRangeProbab=0.74000001;
				midRange=2400;
				midRangeProbab=0.64999998;
				maxRange=3000;
				maxRangeProbab=0.050000001;
			};
		};
	};
	class MET_autocannon_Z60_EAA: MET_autocannon_Z20_HBB
	{
		displayName="Z60 H.A.A";
		muzzles[]=
		{
			"HE"
		};
		class HE: MET_autocannon_Base_F
		{
			displayName="Z60 H.A.A";
			magazines[]=
			{
				"MET_1000Rnd_Z60_HAA"
			};
			ballisticsComputer="2+4+8";
			class player: player
			{
				dispersion=0.0001;
				reloadTime=0.075000003;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
						1,
						1,
						1500
					};
					begin2[]=
					{
						"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
						1.5,
						1,
						1500
					};
					begin3[]=
					{
						"212th\Vehicles\212th_vehicleMain\data\Sound\bantha.wss",
						0.80000001,
						1,
						1500
					};
					soundBegin[]=
					{
						"begin1",
						0.33000001,
						"begin2",
						0.33000001,
						"begin3",
						0.34
					};
				};
			};
		};
		scope=1;
		soundContinuous=0;
		magazineReloadTime=5;
		autoReload=1;
		canLock=2;
		ballisticsComputer="2+4+8";
	};
	class MET_Bantha_T_Assault_MG: LMG_RCWS
	{
		displayName="[16th] MSM MK-II Blaster Cannon";
		scope=1;
		magazines[]=
		{
			"MET_Bantha_T_Assault_MG_Mag"
		};
		maxZeroing=2000;
		class GunParticles
		{
		};
		autoReload=1;
		magazineReloadTime=5;
		showAimCursorInternal=0;
		class manual: MGun
		{
			displayName="[16th] MSM MK-II Blaster Cannon";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1.015,
					1800
				};
				begin3[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.03;
			dispersion=0.006;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=16;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.69999999;
			midRange=400;
			midRangeProbab=0.75;
			maxRange=800;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=4;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=400;
			minRange=400;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.25;
			maxRange=2000;
			maxRangeProbab=0.050000001;
		};
	};
	class missiles_DAGR;
	class MET_Bantha_missiles_DAGR: missiles_DAGR
	{
		magazineReloadTime=2;
		autoReload=1;
		magazines[]=
		{
			"MET_Bantha_missiles_DAGR",
			"24Rnd_PG_missiles",
			"12Rnd_PG_missiles",
			"PylonRack_12Rnd_PG_missiles"
		};
	};
	class MET_AV7_300mm_AMOS: CannonCore
	{
		scope=1;
		displayName="[16th] AV7 Cannon";
		nameSound="cannon";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
				2.5118864,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",
			31.622778,
			1,
			15
		};
		reloadTime=7;
		magazineReloadTime=7;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"MET_30Rnd_300mm_Mo_shells",
			"MET_12Rnd_300mm_Mo_smoke",
			"MET_12Rnd_300mm_Mo_Clust_smoke",
			"MET_12Rnd_300mm_Mo_flare",
			"MET_4Rnd_300mm_Mo_guided",
			"MET_4Rnd_300mm_Mo_LG",
			"MET_4Rnd_300mm_Mo_mine",
			"MET_5Rnd_300mm_Mo_Cluster",
			"MET_5Rnd_300mm_Mo_ATCluster"
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Single4",
			"Single5",
			"Burst1",
			"Burst2",
			"Burst3",
			"Burst4",
			"Burst5"
		};
		class GunParticles
		{
			class Effect1
			{
				effectName="ArtilleryFired1";
				positionName="MainCannon_Barrel";
				directionName="MainCannon_Barrel_Dir";
			};
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single10";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			reloadTime=4;
			artilleryDispersion=3.2;
			artilleryCharge=0.19;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single20";
			artilleryCharge=0.30000001;
		};
		class Single3: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single30";
			artilleryCharge=0.47999999;
		};
		class Single4: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single40";
			artilleryCharge=0.80000001;
		};
		class Single5: Single1
		{
			displayName="$STR_A3_mortar_120mm_AMOS_Single50";
			artilleryCharge=1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst10";
			burst=6;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			soundBurst=0;
			reloadTime=6;
			minRange=800;
			minRangeProbab=0.5;
			midRange=1500;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.5;
			artilleryDispersion=5.3000002;
			artilleryCharge=0.19;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst20";
			minRange=2000;
			minRangeProbab=0.40000001;
			midRange=3000;
			midRangeProbab=0.60000002;
			maxRange=5200;
			maxRangeProbab=0.40000001;
			artilleryCharge=0.30000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst30";
			minRange=5200;
			minRangeProbab=0.30000001;
			midRange=8000;
			midRangeProbab=0.40000001;
			maxRange=13300;
			maxRangeProbab=0.30000001;
			artilleryCharge=0.47999999;
		};
		class Burst4: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst40";
			minRange=14600;
			minRangeProbab=0.2;
			midRange=25000;
			midRangeProbab=0.30000001;
			maxRange=37000;
			maxRangeProbab=0.2;
			artilleryCharge=0.80000001;
		};
		class Burst5: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_120mm_AMOS_Burst50";
			minRange=25000;
			minRangeProbab=0.1;
			midRange=40000;
			midRangeProbab=0.2;
			maxRange=58000;
			maxRangeProbab=0.1;
			artilleryCharge=1;
		};
	};
    class MET_SGM120_Mortar_120mm: mortar_82mm
    {
        displayname = "SGM-120 120MW";
        //Maybe we change sound if we get
            reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1, 1, 20};
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar", 1, 1, 20};
            soundServo[] = {"", 0.0001, 1};
        //

        reloadTime = 2;
        magazineReloadTime = 5;
        autoReload = 1;
        magazines[] = {
            "MET_10Rnd_120mm_Mo_shells",
			"MET_10Rnd_120mm_Mo_Flare_white",
			"MET_10Rnd_120mm_Mo_IR_Flare_white",
			"MET_10Rnd_120mm_Mo_Smoke_white",
			"MET_10Rnd_120mm_Mo_Smoke_Cluster_white",
			"MET_10Rnd_120mm_Mo_Smoke_Cluster_pride",
			"MET_10Rnd_120mm_Mo_guided",
			"MET_10Rnd_120mm_Mo_LG",
			"MET_5Rnd_120mm_Mo_Cluster_HE",
			"MET_2Rnd_120mm_Mo_Extra_Cluster_HE"
        };
        magazineWell[] = {}; //for ace reasons, this kinda doesnt help

        //Lets keep everything the same, except for dispersion, make that better cause scifi lol
        modes[] = {"Single1", "Single2", "Single3", "Burst1", "Burst2", "Burst3"};
        class Single1: Single1
        {
			displayName="Single (Close)";
            artilleryDispersion = 1;
            reloadTime = 2;
			artilleryCharge=0.4;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
        };
        class Single2: Single1
        {
			displayName="Single (Medium)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=0.9;
        };
        class Single3: Single1
        {
			displayName="Single (Far)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=1.4;
        };
        /*class Single4: Single1
        {
			displayName="Single (Farther)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=1.7;
        };
        class Single5: Single1
        {
			displayName="Single (Extreme)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=2.0;
        };*/
        class Burst1: Burst1
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
        class Burst2: Burst2
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
        class Burst3: Burst3
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
    };
	class MET_SGM120_Twin_Mortar_120mm: CannonCore
	{
		scope=1;
        displayname = "SGMT-120 120MW Twin Mortar";
        //Maybe we change sound if we get
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar", 1, 1, 20};
            soundServo[] = {"", 0.0001, 1};
        //
		nameSound="cannon";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class StandardSound
		{
			begin1[]=
			{
				"z\MET\addons\vehicles\sounds\big_nuetron_3.ogg",
				2.5118864,
				1,
				1500
			};
			soundBegin[]=
			{
				"begin1",
				1
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",
			31.622778,
			1,
			15
		};
		reloadTime=0.3;
		magazineReloadTime=3;
		autoReload=1;
		canLock=0;
        magazines[] = {
			"MET_2Rnd_120mm_Mo_shells",
			"MET_2Rnd_120mm_Mo_Flare_white",
			"MET_2Rnd_120mm_Mo_IR_Flare_white",
			"MET_2Rnd_120mm_Mo_Smoke_white",
			"MET_2Rnd_120mm_Mo_guided"
        };
		
        modes[] = {"Single1", "Single2", "Single3", "Single4", "Single5"/*, "Burst1", "Burst2", "Burst3"*/};
        class Single1: Mode_SemiAuto
        {
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"z\MET\addons\vehicles\sounds\big_nuetron_3.ogg",
					2.5118864,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadSound[]=
			{
				"A3\sounds_f\dummysound",
				1,
				1,
				20
			};
			displayName="Single (Close)";
            artilleryDispersion = 1;
            reloadTime = 0.3;
			artilleryCharge=0.5;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
        };
        class Single2: Single1
        {
			displayName="Single (Medium)";
            artilleryDispersion = 0.9;
			artilleryCharge=0.8;
        };
        class Single3: Single1
        {
			displayName="Single (Far)";
            artilleryDispersion = 0.9;
			artilleryCharge=1.1;
        };
        class Single4: Single1
        {
			displayName="Single (Farther)";
            artilleryDispersion = 0.9;
			artilleryCharge=1.4;
        };
        class Single5: Single1
        {
			displayName="Single (Extreme)";
            artilleryDispersion = 0.9;
			artilleryCharge=1.6;
        };
        /*class Burst1: Burst1
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
        class Burst2: Burst2
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
        class Burst3: Burst3
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };*/
		class GunParticles
		{
			class Effect1
			{
				effectName="ArtilleryFired1";
				positionName="Usti hlavne3";
				directionName="Konec hlavne3";
			};
			class Effect2
			{
				effectName="ArtilleryFiredL";
				positionName="Usti hlavne";
				directionName="Usti hlavne b";
			};
			class Effect3
			{
				effectName="ArtilleryFiredR";
				positionName="Usti hlavne";
				directionName="Usti hlavne b";
			};
		};
	};
	class MET_mortar_60mm: CannonCore
	{
		scope=1;
		displayname="[16th] Republic Mortar 60mm";
		nameSound="CannonCore";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"3AS_Mortar_SoundSet"
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",
			1,
			1,
			20
		};
		soundServo[]=
		{
			"",
			9.9999997e-005,
			1
		};
		reloadTime=1.8;
		magazineReloadTime=5;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"MET_20Rnd_82mm_Mo_shells",
			"MET_20Rnd_82mm_Mo_Flare_white",
			"MET_20Rnd_82mm_Mo_Flare_Red",
			"MET_20Rnd_82mm_Mo_Smoke_white"
		};
		ballisticsComputer=2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MortarFired";
				positionName="Usti Hlavne";
				directionName="Konec Hlavne";
			};
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Burst1",
			"Burst2",
			"Burst3"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_mortar_82mm_Single10";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Mortar_SoundSet"
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			reloadTime=1;
			artilleryDispersion=1.9;
			artilleryCharge=0.25;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single20";
			artilleryCharge=0.50;
		};
		class Single3: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single30";
			artilleryCharge=0.75;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst10";
			burst=4;
			aiBurstTerminable=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.2589254,
					1,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.2589254,
					1,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			soundServo[]=
			{
				"",
				9.9999997e-005,
				1
			};
			soundBurst=0;
			reloadTime=1.8;
			artilleryDispersion=2.2;
			artilleryCharge=0.34999999;
			minRange=60;
			minRangeProbab=0.5;
			midRange=290;
			midRangeProbab=0.69999999;
			maxRange=665;
			maxRangeProbab=0.5;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst20";
			artilleryCharge=0.69999999;
			minRange=230;
			minRangeProbab=0.40000001;
			midRange=1175;
			midRangeProbab=0.60000002;
			maxRange=2660;
			maxRangeProbab=0.40000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst30";
			artilleryCharge=1;
			minRange=540;
			minRangeProbab=0.30000001;
			midRange=2355;
			midRangeProbab=0.40000001;
			maxRange=5500;
			maxRangeProbab=0.30000001;
		};
	};
	class MET_Bantha_Commander_Turret: LMG_RCWS
	{
		displayName="[16th] DC-15L";
		scope=1;
		magazines[]=
		{
			"MET_DC15L_Heavy_mag"
		};
		maxZeroing=2000;
		class GunParticles
		{
		};
		autoReload=1;
		magazineReloadTime=3;
		showAimCursorInternal=0;
		class manual: MGun
		{
			displayName="[16th] DC-15L";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundsetshot[]=
				{
					"3AS_DC15L_Shot_SoundSet"
				};
			};
			reloadTime=0.06;
			dispersion=0.00079;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1.5;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.69999999;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=16;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=100;
			minRangeProbab=0.69999999;
			midRange=400;
			midRangeProbab=0.75;
			maxRange=800;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=4;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=400;
			minRange=400;
			minRangeProbab=0.75;
			midRange=800;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=800;
			minRange=800;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.25;
			maxRange=2000;
			maxRangeProbab=0.050000001;
		};
	};
};
class Bag_Base;
class Weapon_Bag_Base: Bag_Base
{
	class assembleInfo
	{
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Optics_Armored;
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
				class Hitpoints;
			};
		};
		class assembleInfo;
	};
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class SimpleObject;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class Eventhandlers;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class MBT_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
			};
		};
	};
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
			};
		};
	};
	class MET_01_arty_base_F: MBT_01_arty_base_F
	{
		features="Randomization: No      <br />Camo selections: 3 - hull, main turret, RCWS turret      <br />Script door sources: None      <br />Script animations: None      <br />Executed scripts: None      <br />Firing from vehicles: No      <br />Slingload: No      <br />Cargo proxy indexes: None";
		author="$STR_3AS_Studio";
		mapSize=11.37;
		simulation="tankX";
		enginePower=450;
		maxOmega=60;
		peakTorque=4832;
		torqueCurve[]=
		{
			{0,0},
			
			{
				"(1600/2640)",
				"(2650/2850)"
			},
			
			{
				"(1800/2640)",
				"(2800/2850)"
			},
			
			{
				"(1900/2640)",
				"(2850/2850)"
			},
			
			{
				"(2000/2640)",
				"(2800/2850)"
			},
			
			{
				"(2200/2640)",
				"(2750/2850)"
			},
			
			{
				"(2400/2640)",
				"(2600/2850)"
			},
			
			{
				"(2640/2640)",
				"(2350/2850)"
			}
		};
		thrustDelay=0.1;
		clutchStrength=160;
		brakeIdleSpeed=1.78;
		latency=0.1;
		tankTurnForce=230000;
		idleRpm=700;
		redRpm=2640;
		engineLosses=25;
		transmissionLosses=15;
		maxFordingDepth=5;
		canFloat=0;
		waterPPInVehicle=0;
		waterResistanceCoef=0.07;
		waterLeakiness=2.5;
		waterSpeedFactor=0.5;
		waterAngularDampingCoef=5;
		waterLinearDampingCoefY=2;
		waterLinearDampingCoefX=0.5;
		waterResistance=1;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R2",
				-3.9000001,
				"N",
				0,
				"D1",
				4.6999998,
				"D2",
				3.5,
				"D3",
				2.5999999,
				"D4",
				2,
				"D5",
				1.5,
				"D6",
				1.125,
				"D7",
				0.85000002
			};
			TransmissionRatios[]=
			{
				"High",
				15
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.1;
		};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=28;
				latStiffX=25;
				latStiffY=280;
				longitudinalStiffnessPerUnitGravity=100000;
				maxBrakeTorque=9000;
				sprungMass=2580;
				springStrength=64537;
				springDamperRate=25807;
				dampingRate=1;
				dampingRateInAir=8000;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.15000001;
				maxCompression=0.15000001;
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName="wheel_podkolol9";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				sprungMass=1500;
				springStrength=64537;
				springDamperRate=25807;
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				sprungMass=1500;
				springStrength=64537;
				springDamperRate=25807;
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				side="right";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName="wheel_podkolop9";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				sprungMass=1500;
				springStrength=64537;
				springDamperRate=25807;
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				sprungMass=1500;
				springStrength=64537;
				springDamperRate=25807;
				maxDroop=0;
				maxCompression=0;
			};
		};
		_generalMacro="MBT_01_arty_base_F";
		weaponsGroup1=2;
		weaponsGroup2="1 +   4";
		weaponsGroup3="8 +  16 +  32";
		weaponsGroup4="64 +   128";
		displayName="$STR_A3_CFGVEHICLES_MBT_01_ARTY_BASE0";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_mbt_01_arty_base_Library0";
		};
		model="3AS\3AS_AV7\model\3AS_av7";
		faction="metal_company";
		editorSubcategory="metal_co_EdSubCat_Dragon";
		icon="3as\3AS_AV7\data\UI\AV7_top_ca.paa";
		picture="3as\3AS_AV7\data\UI\AV7_side_ca.paa";
		forceHideDriver=1;
		driveraction="AV7_Driver";
		driverInaction="AV7_Driver";
		memorypointsgetindriver="getindriver";
		memorypointsgetindriverdir="getindriver_dir";
		getInRadius=10;
		transportSoldier=0;
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_AV7\data\AV7_co.paa"
		};
		unitInfoType="RscUnitInfoArtillery";
		armorStructural=4;
		artilleryScanner=1;
		ejectDeadDriver=1;
		viewDriverinExternal=1;
		extCameraPosition[]={0,7,-15};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3AS_AV7\data\av7.rvmat",
				"3as\3AS_AV7\data\av7.rvmat",
				"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat"
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L_pos";
				direction="Light_L_dir";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R_pos";
				direction="Light_R_dir";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};
		class MFD
		{
			class MFD_Gunner_Display_Damage
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="PuristaBold";
				class Bones
				{
				};
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Damage_Hull
					{
						type="text";
						source="static";
						text="HULL";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.039999999,0.18000001},
							1
						};
						right[]=
						{
							{0.064999998,0.18000001},
							1
						};
						down[]=
						{
							{0.039999999,0.44},
							1
						};
					};
					class Damage_Engine
					{
						type="text";
						source="static";
						text="ENG";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.11,0.18000001},
							1
						};
						right[]=
						{
							{0.13500001,0.18000001},
							1
						};
						down[]=
						{
							{0.11,0.44},
							1
						};
					};
					class Damage_Fuel
					{
						type="text";
						source="static";
						text="FUEL";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.178,0.18000001},
							1
						};
						right[]=
						{
							{0.20299999,0.18000001},
							1
						};
						down[]=
						{
							{0.178,0.44},
							1
						};
					};
					class Damage_Wheels
					{
						type="text";
						source="static";
						text="TRKS";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.039999999,0.55000001},
							1
						};
						right[]=
						{
							{0.064999998,0.55000001},
							1
						};
						down[]=
						{
							{0.039999999,0.81},
							1
						};
					};
					class Damage_Gun
					{
						type="text";
						source="static";
						text="GUN";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.11,0.55000001},
							1
						};
						right[]=
						{
							{0.13500001,0.55000001},
							1
						};
						down[]=
						{
							{0.11,0.81},
							1
						};
					};
					class Damage_Turret
					{
						type="text";
						source="static";
						text="TRT";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.178,0.55000001},
							1
						};
						right[]=
						{
							{0.20299999,0.55000001},
							1
						};
						down[]=
						{
							{0.178,0.81},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="PuristaBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
					class FuelScale
					{
						type="linear";
						source="fuel";
						sourceIndex=1;
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,0};
						maxPos[]={-0.090000004,0};
					};
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Main_Gun
					{
						type="text";
						source="static";
						text="MAIN GUN";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.273,0.18000001},
							1
						};
						right[]=
						{
							{0.29800001,0.18000001},
							1
						};
						down[]=
						{
							{0.273,0.44},
							1
						};
					};
					class Main_Gun_Ammo_count
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=2;
						sourceIndex=0;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.273,0.55000001},
							1
						};
						right[]=
						{
							{0.29800001,0.55000001},
							1
						};
						down[]=
						{
							{0.273,0.81},
							1
						};
					};
					class Main_Gun_Ammo_Type_text
					{
						type="text";
						source="static";
						text="TYPE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.18000001},
							1
						};
						right[]=
						{
							{0.41,0.18000001},
							1
						};
						down[]=
						{
							{0.38499999,0.44},
							1
						};
					};
					class Main_Gun_Ammo_Type
					{
						type="text";
						source="ammoFormat";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.38499999,0.55000001},
							1
						};
						right[]=
						{
							{0.41,0.55000001},
							1
						};
						down[]=
						{
							{0.38499999,0.81},
							1
						};
					};
					class Azimuth
					{
						type="text";
						source="static";
						text="GUN AZIM";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.60500002,0.18000001},
							1
						};
						right[]=
						{
							{0.63,0.18000001},
							1
						};
						down[]=
						{
							{0.60500002,0.44},
							1
						};
					};
					class Smoke
					{
						type="text";
						source="static";
						text="SMOKE";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.71700001,0.18000001},
							1
						};
						right[]=
						{
							{0.74199998,0.18000001},
							1
						};
						down[]=
						{
							{0.71700001,0.44},
							1
						};
					};
					class Fuel_background_white
					{
						color[]={0.2,0.2,0.2};
						alpha=0.1;
						condition="1";
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.787,0.69999999},
										1
									},
									
									{
										{0.87699997,0.69999999},
										1
									},
									
									{
										{0.87699997,0.89999998},
										1
									},
									
									{
										{0.787,0.89999998},
										1
									}
								}
							};
						};
					};
					class Fuel_background_green
					{
						color[]={0,0.69999999,0};
						condition="fuel>=0.5";
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.787,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.89999998},
										1
									},
									
									{
										{0.787,0.89999998},
										1
									}
								}
							};
						};
					};
					class Fuel_background_yellow
					{
						color[]={0.89999998,0.69999999,0};
						condition="fuel<0.5";
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.787,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.89999998},
										1
									},
									
									{
										{0.787,0.89999998},
										1
									}
								}
							};
						};
					};
					class Fuel_background_red
					{
						color[]={0.69999999,0,0};
						condition="fuel<0.3";
						class Background
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										{0.787,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.69999999},
										1
									},
									
									{
										"FuelScale",
										{0.87699997,0.89999998},
										1
									},
									
									{
										{0.787,0.89999998},
										1
									}
								}
							};
						};
					};
					class Fuel
					{
						type="text";
						source="static";
						text="FUEL";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.82999998,0.18000001},
							1
						};
						right[]=
						{
							{0.85500002,0.18000001},
							1
						};
						down[]=
						{
							{0.82999998,0.44},
							1
						};
					};
					class Fuel_number
					{
						type="text";
						source="fuel";
						sourceScale=100;
						sourceLength=1;
						scale=1;
						align="left";
						refreshRate=0.1;
						pos[]=
						{
							{0.83499998,0.40000001},
							1
						};
						right[]=
						{
							{0.86000001,0.40000001},
							1
						};
						down[]=
						{
							{0.83499998,0.66000003},
							1
						};
					};
					class Fuel_percent_sign
					{
						type="text";
						source="static";
						text="%";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.1;
						pos[]=
						{
							{0.84500003,0.40000001},
							1
						};
						right[]=
						{
							{0.87,0.40000001},
							1
						};
						down[]=
						{
							{0.84500003,0.66000003},
							1
						};
					};
				};
			};
			class MFD_Gunner_OnScreen
			{
				topLeft="PIP_GUN_TL";
				topRight="PIP_GUN_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="EtelkaMonospaceProBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={0.15000001,1,0.050000001};
					alpha=1;
					condition="1";
					class Azimuth_number
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.235},
							1
						};
						right[]=
						{
							{0.52499998,0.235},
							1
						};
						down[]=
						{
							{0.5,0.27200001},
							1
						};
					};
					class Elevation_Text
					{
						type="text";
						source="static";
						text="E: ";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.23,0.30000001},
							1
						};
						right[]=
						{
							{0.255,0.30000001},
							1
						};
						down[]=
						{
							{0.23,0.33700001},
							1
						};
					};
					class Elevation_Number
					{
						type="text";
						source="[y]turretworld";
						sourceScale=1;
						sourceLength=4;
						sourcePrecision=1;
						refreshRate=0;
						align="center";
						scale=1;
						pos[]=
						{
							{0.25999999,0.30000001},
							1
						};
						right[]=
						{
							{0.285,0.30000001},
							1
						};
						down[]=
						{
							{0.25999999,0.33700001},
							1
						};
					};
					class Lased_Range
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=4;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.5,0.64999998},
							1
						};
						right[]=
						{
							{0.52499998,0.64999998},
							1
						};
						down[]=
						{
							{0.5,0.68699998},
							1
						};
					};
					class VisionMode_Text
					{
						type="text";
						source="static";
						text="WFOV";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.75,0.64999998},
							1
						};
						right[]=
						{
							{0.77499998,0.64999998},
							1
						};
						down[]=
						{
							{0.75,0.68699998},
							1
						};
					};
					class VisionMode_String
					{
						type="text";
						source="visionMode";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.82499999,0.64999998},
							1
						};
						right[]=
						{
							{0.85000002,0.64999998},
							1
						};
						down[]=
						{
							{0.82499999,0.68699998},
							1
						};
					};
				};
			};
			class MFD_Gunner_Display_MainTurret
			{
				topLeft="mfd_gun_TL";
				topRight="mfd_gun_TR";
				bottomLeft="mfd_gun_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1};
				alpha=0.5;
				enableParallax=0;
				turret[]={0};
				font="PuristaBold";
				class material
				{
					ambient[]={1,1,1,1};
					diffuse[]={1,1,1,1};
					emissive[]={1000,1000,1000,1};
				};
				class Bones
				{
				};
				class Draw
				{
					color[]={1,1,1};
					alpha=1;
					condition="1";
					class Smoke_ammo
					{
						type="text";
						source="ammo";
						sourceScale=1;
						sourceLength=3;
						sourceIndex=2;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.72000003,0.55000001},
							1
						};
						right[]=
						{
							{0.745,0.55000001},
							1
						};
						down[]=
						{
							{0.72000003,0.81},
							1
						};
					};
					class Azimuth_number
					{
						type="text";
						source="[x]turretworld";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="center";
						refreshRate=0.1;
						pos[]=
						{
							{0.61000001,0.55000001},
							1
						};
						right[]=
						{
							{0.63499999,0.55000001},
							1
						};
						down[]=
						{
							{0.61000001,0.81},
							1
						};
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
				animationSourceHatch="";
				gunnerForceOptics=0;
				usePip=2;
				ejectDeadGunner=1;
				selectionFireAnim="zasleh";
				forceHideGunner=1;
				viewGunnerInExternal=1;
				gunBeg="MainCannon_Barrel";
				gunEnd="MainCannon_Chamber";
				gunnerAction="AV7_Driver";
				gunnerInAction="AV7_Driver";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control_y";
				gunnerRightHandAnimName="turret_control_y";
				memorypointsgetingunner="pos_driver";
				memorypointsgetingunnerdir="pos_driver_dir";
				LODTurnedIn=1000;
				LODOpticsIn=0;
				minElev=-5;
				maxElev=80;
				initElev=10;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",
					0.15848932,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",
					0.15848932,
					1,
					30
				};
				weapons[]=
				{
					"MET_AV7_300mm_AMOS"
				};
				magazines[]=
				{
					"MET_30Rnd_300mm_Mo_shells",
					"MET_30Rnd_300mm_Mo_shells",
					"MET_12Rnd_300mm_Mo_smoke",
					"MET_12Rnd_300mm_Mo_Clust_smoke",
					"MET_12Rnd_300mm_Mo_flare",
					"MET_4Rnd_300mm_Mo_guided",
					"MET_4Rnd_300mm_Mo_guided",
					"MET_4Rnd_300mm_Mo_LG",
					"MET_4Rnd_300mm_Mo_LG",
					"MET_4Rnd_300mm_Mo_mine",
					"MET_5Rnd_300mm_Mo_Cluster",
					"MET_5Rnd_300mm_Mo_ATCluster"
				};
				elevationMode=3;
				maxHorizontalRotSpeed=0.77999997;
				maxVerticalRotSpeed=0.25999999;
				memoryPointGunnerOptics="Gunnerview";
				cameraDir="look";
				turretInfoType="RscWeaponRangeArtilleryAuto";
				startengine=0;
				class OpticsIn: Optics_Gunner_MBT_01
				{
					class Wide: Wide
					{
						gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
						initFov=0.17399999;
						minFov=0.0077777999;
						maxFov=0.14;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="-";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
		class RenderTargets
		{
			class PIPGunner
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="gunnerView_dir";
					renderQuality=2;
					renderVisionMode=0;
					turret[]={0};
					fov=0.20345201;
				};
				BBoxes[]=
				{
					"PIP_GUN_TL",
					"PIP_GUN_TR",
					"PIP_GUN_BL",
					"PIP_GUN_BR"
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source="reload";
				weapon="3AS_AV7_300mm_AMOS";
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="3AS_AV7_300mm_AMOS";
			};
			class Legs
			{
				source="user";
				animPeriod=0;
				initPhase=0;
				mass=1;
				author="$STR_3AS_Studio";
				displayName="Toggle Legs";
			};
		};
		class Eventhandlers: Eventhandlers
		{
			postInit="if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class UserActions
		{
			class Deploy
			{
				displayName="Deploy Stabilizing Legs";
				position="action";
				radius=10;
				onlyForPlayer=0;
				condition="(this animationSourcePhase ""Legs"" == 0) AND (currentPilot this isEqualTo player) AND (alive this)";
				statement="this animateSource [""Legs"",1]";
			};
			class unDeploy: Deploy
			{
				displayName="Fold Stabilizing Legs";
				condition="(this animationSourcePhase ""Legs"" == 1) AND (currentPilot this isEqualTo player) AND (alive this)";
				statement="this animateSource [""Legs"",0]";
			};
		};
	};
	class MET_AV7: MET_01_arty_base_F
	{
		author="$STR_3AS_Studio";
		displayName="[16th] AV-7";
		scope=2;
		generalMacro="B_MBT_01_arty_base_F";
		crew="JLTS_Clone_P2_DC15S";
		typicalCargo[]=
		{
			"JLTS_Clone_P2_DC15S"
		};
		side=1;
	};
	class MET_AV7_EdenOnly: MET_01_arty_base_F
	{
		author="$STR_3AS_Studio";
		forceingarage=0;
		displayName="[16th] AV-7 (Eden ONLY // Legs Deployed)";
		scope=2;
		generalMacro="B_MBT_01_arty_base_F";
		crew="JLTS_Clone_P2_DC15S";
		typicalCargo[]=
		{
			"JLTS_Clone_P2_DC15S"
		};
		side=1;
		class AnimationSources: AnimationSources
		{
			class Legs
			{
				source="user";
				animPeriod=0;
				initPhase=1;
				mass=1;
				author="$STR_3AS_Studio";
				displayName="Toggle Legs";
				onPhaseChanged="_this call TAS_fnc_toggleLegs;";
			};
		};
	};
    class MET_AU_44_Mortar: Mortar_01_base_F
    {
        displayName = "AU-44";
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\AU_44_Mortar.p3d";
        author = "A2S";
        class SimpleObject
        {
            eden = 1;
            animate[] = {{"mainturret", 0}, {"maingun", 0}, {"computerAim", 0}, {"computerRotate", 0}, {"barRotate", 0}};
            hide[] = {};
            verticalOffset = 0.757;
            verticalOffsetWorld = 0.035;
            init = "''";
        };
        editorPreview = "\OPTRE_Misc\Image\OPTRE\Turrets\OPTRE_AU_44_Mortar.jpg";
        scope = 2;
        side = 1;
        faction = "metal_company";
        crew = "OPTRE_UNSC_Army_Soldier_Crewman_WDL";
        availableForSupportTypes[] = {"Artillery"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                elevationMode = 3;
                weapons[] = {"MET_SGM120_Mortar_120mm"};
                magazines[] = {
                    "MET_10Rnd_120mm_Mo_shells",
					"MET_10Rnd_120mm_Mo_shells",
					"MET_10Rnd_120mm_Mo_Flare_white",
					"MET_10Rnd_120mm_Mo_Flare_white",
					"MET_10Rnd_120mm_Mo_IR_Flare_white",
					"MET_10Rnd_120mm_Mo_IR_Flare_white",
					"MET_10Rnd_120mm_Mo_Smoke_white",
					"MET_10Rnd_120mm_Mo_Smoke_white",
					"MET_10Rnd_120mm_Mo_Smoke_Cluster_white",
					"MET_10Rnd_120mm_Mo_guided",
					"MET_10Rnd_120mm_Mo_LG",
					"MET_5Rnd_120mm_Mo_Cluster_HE",
					"MET_2Rnd_120mm_Mo_Extra_Cluster_HE"
                };

                minelev = -22.5;
                initelev = 0;
				maxelev = 22.5;

                disableSoundAttenuation = 0;
                soundElevation[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03", 0.316228, 1, 10};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03", 0.177828, 1, 10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03", 0.316228, 1, 30};
            };
        };
        class AnimationSources
        {
            class muzzle_hide_mortar
            {
                source = "reload";
                weapon = "MET_SGM120_Mortar_120mm";
            };
        };
        class assembleInfo
        {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {"MET_AU_44_Mortar_Bag"};
            primary = 0;
        };
        /*class ace_csw
		{
			enabled = 1;
			proxyWeapon = "OPTRE_CSW_SGM122_Mortar_122mm";
			magazineLocation = "_target selectionPosition 'magazine'";
			disassembleWeapon = "OPTRE_CSW_AU44_Mortar_Carry";
			disassembleTurret = "OPTRE_CSW_Mortar_Baseplate";
			desiredAmmo = 1;
			ammoLoadTime = 0.5;
			ammoUnloadTime = 1;
		};*/
        hiddenSelections[] = {
            "camo",
			"camoScreen"
        };
        hiddenSelectionsTextures[] = {
            "z\MET\addons\vehicles\emplacements\data\mortar_co_fuq_dat.paa",
            "OPTRE_Weapons_Turrets\au_44_mortar\data\computer_screen.paa"
        };
        hiddenSelectionsMaterials[] = {
            "OPTRE_Weapons_Turrets\AU_44_Mortar\data\mortar.rvmat",
            "OPTRE_Weapons_Turrets\AU_44_Mortar\data\mfd.rvmat"
        };
        #include "\OPTRE_Weapons_Turrets\AU_44_Mortar\_mfd.hpp"
    };
	class JLTS_Clone_backpack;
	class MET_AU_44_Mortar_Bag: JLTS_Clone_backpack
            {
                displayName = "[16th] AU-44 Mortar";
				author = "Hazmat";
                picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\both.paa";
				hiddenSelectionsTextures[]=
				{
					"z\MET\addons\armor\Backpacks\Textures\Unused\drag_backpack_co.paa"
				};
				maximumLoad=0;
				mass=1000;
                class assembleInfo
                {
                    assembleTo = "MET_AU_44_Mortar";
                    base = "";
                    displayName = "AU-44 Mortar";
                    dissasembleTo[] = {};
                    primary = 1;
                };
            };
	class MET_Republic_Mortar: B_Mortar_01_F
	{
		author="$STR_3AS_Studio";
		displayname="[16th] 60 MW Republic Mortar";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		editorPreview="\3as\3as_static\images\3AS_Republic_Mortar.jpg";
		crew="JLTS_Clone_P2_DC15S";
		icon="3AS\3as_static\Mortar\Data\ui\Mortar_top_ca.paa";
		picture="3AS\3as_static\Mortar\Data\ui\Mortar_side_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				weapons[]=
				{
					"MET_mortar_60mm"
				};
				magazines[]=
				{
					"MET_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_Red",
					"MET_20Rnd_82mm_Mo_Flare_Red",
					"MET_20Rnd_82mm_Mo_Smoke_white",
					"MET_20Rnd_82mm_Mo_Smoke_white"
				};
				elevationMode=3;
				gunnerforceoptics=1;
				class Hitpoints: Hitpoints
				{
				};
			};
		};
		class assembleInfo: assembleInfo
		{
			dissasembleTo[]=
			{
				"MET_Republic_Mortar_Bag"
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\base_co.paa",
			"\3as\3as_static\Mortar\data\tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		faction="metal_company";
		scopeCurator=2;
		class TextureSources
		{
			class Republic
			{
				displayName="Republic";
				author="$STR_3as_Studio";
				textures[]=
				{
					"\3as\3as_static\Mortar\data\base_co.paa",
					"\3as\3as_static\Mortar\data\tube_co.paa"
				};
				factions[]=
				{
					"3AS_REP",
					"3AS_CIS"
				};
			};
			class CIS
			{
				displayName="CIS";
				author="$STR_3as_Studio";
				textures[]=
				{
					"\3as\3as_static\Mortar\data\cis_base_co.paa",
					"\3as\3as_static\Mortar\data\cis_tube_co.paa"
				};
				factions[]=
				{
					"3AS_REP",
					"3AS_CIS"
				};
			};
		};
	};
	class MET_Republic_Mortar_Bag: Weapon_Bag_Base
	{
		faction="metal_company";
		model="\3as\3as_static\Mortar\model\mortarpack.p3d";
		author="$STR_3AS_Studio";
		_generalMacro="B_Mortar_01_weapon_F";
		scope=2;
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_DismantledWeapons";
		displayName="[16th] Folded 60MW Mortar";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\base_co.paa",
			"\3as\3as_static\Mortar\data\tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_mcamo.paa";
		mass=450;
		class assembleInfo: assembleInfo
		{
			base[]=
			{
				""
			};
			displayName="Mortar";
			assembleTo="MET_Republic_Mortar";
		};
	};
};