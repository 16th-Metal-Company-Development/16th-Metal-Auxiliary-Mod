class CfgPatches
{
	class BHA_Vehicles
	{
		units[]={};
		weapons[]={};
		requiredaddons[]=
		{
			"sc_vtol",
			"sc_units",
			"sc_wheeled",
			"BHA_Weapons",
			"A3_Weapons_F"
		};
	};
};
class CfgAmmo
{
	/*class B_127x99_Ball_Tracer_Yellow;
	class BHA_127x99_Ball_Tracer_Orange: B_127x99_Ball_Tracer_Yellow
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_30mm_MP_Tracer_Green;
	class B_30mm_MP_Tracer_Orange: B_30mm_MP_Tracer_Green
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_30mm_APFSDS_Tracer_Green;
	class B_30mm_APFSDS_Tracer_Orange: B_30mm_APFSDS_Tracer_Green
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_762x51_Tracer_Green;
	class B_762x51_Tracer_Orange: B_762x51_Tracer_Green
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_762x51_Minigun_Tracer_Yellow_splash;
	class B_762x51_Minigun_Tracer_Orange_splash: B_762x51_Minigun_Tracer_Yellow_splash
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_20mm;
	class BHA_20mm_Orange: B_20mm
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class B_127x99_Ball_Tracer_Red;
	class B_338_NM_Ball;
	class BHA_338_NM_Ball: B_338_NM_Ball
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class Sh_120mm_APFSDS_Tracer_Red;
	class BHA_120mm_APFSDS_Tracer_Orange: Sh_120mm_APFSDS_Tracer_Red
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerScale=3;
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class Sh_120mm_HE_Tracer_Red;
	class BHA_120mm_HE_Tracer_Orange: Sh_120mm_HE_Tracer_Red
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerScale=3;
		tracerStartTime=0.1;
		tracerEndTime=3;
	};
	class Sh_120mm_HEAT_MP_T_Red;
	class BHA_120mm_HEAT_MP_T_Orange: Sh_120mm_HEAT_MP_T_Red
	{
		model="\HDC_Weapons\data\tracer_orange";
		tracerScale=3;
		tracerStartTime=0.1;
		tracerEndTime=3;
	};*/
	class B_20mm;
	class B_20mm_AP;
	class MET_B_OrangePlasma_127_GPR: B_20mm
	{
		hit=35;
		indirectHit=15;
		indirectHitRange=3;
		explosive=1;
		caliber=1.8;
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
		model="3AS\3as_Weapons\Data\tracer_yellow";
		effectFly="MET_plasma_orange";
	};
	class MET_B_OrangePlasma_127_AP: B_20mm_AP
	{
		hit=650;
		indirectHit=11;
		indirectHitRange=0.2;
		explosive=1;
		caliber=9;
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
		model="3AS\3as_Weapons\Data\tracer_yellow";
		effectFly="MET_plasma_orange";
	};
	class B_40mm_GPR;
	class MET_B_OrangePlasma_40_GPR: B_40mm_GPR
	{
		hit=75;
		indirectHit=25;
		indirectHitRange=6;
		explosive=1;
		caliber=1.8;
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
		model="3AS\3as_Weapons\Data\tracer_yellow";
		effectFly="MET_plasma_orange";
	};
	class B_40mm_AP;
	class MET_B_OrangePlasma_40_AP: B_40mm_AP
	{
		hit=850;
		indirectHit=16;
		indirectHitRange=0.2;
		explosive=1;
		caliber=9;
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
		model="3AS\3as_Weapons\Data\tracer_yellow";
		effectFly="MET_plasma_orange";
	};
	class ShellBase;
	class BHA_Mass_Driver_Shell: ShellBase
	{
		aiAmmoUsageFlags="64 + 128 + 256 + 512";
		allowAgainstInfantry=1;
		hit=800;
		indirectHit=60;
		indirectHitRange=6;
		warheadName="AP";
		dangerRadiusHit=160;
		suppressionRadiusHit=32;
		explosive=0.1;
		cost=300;
		airFriction=-3.96e-005;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="BombExplosion";
		typicalSpeed=1550;
		caliber=35;
		deflecting=0;
		timeToLive=15;
		whistleOnFire=1;
		whistleDist=14;
		model="\3AS\3AS_Weapons\Data\tracer_shell_yellow";
		tracerScale=3;
		tracerStartTime=0;
		tracerEndTime=15;
		muzzleEffect="";
		explosionSoundEffect="DefaultExplosion";
		effectFly="MET_plasma_orange_big";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01",
			1.7782794,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02",
			1.7782794,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03",
			1.7782794,
			1,
			1800
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04",
			1.7782794,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class HitEffects
		{
			hitMetal="ImpactMetalSabotBig";
			hitMetalPlate="ImpactMetalSabotBig";
			hitBuilding="ImpactConcreteSabot";
			hitConcrete="ImpactConcreteSabot";
			hitGroundSoft="ImpactEffectsGroundSabot";
			hitGroundHard="ImpactEffectsGroundSabot";
			hitWater="ImpactEffectsWater";
			default_mat="ImpactEffectsGroundSabot";
		};
		soundSetSonicCrack[]=
		{
			"3AS_Cannon_Flyby_SoundSet"
		};
		class CamShakeExplode
		{
			power=24;
			duration=2.5999999;
			frequency=20;
			distance=143.636;
		};
		class CamShakeHit
		{
			power=180;
			duration=0.80000001;
			frequency=20;
			distance=1;
		};
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
		ace_frag_enabled=1;
		ace_frag_metal=23000;
		ace_frag_charge=3148;
		ace_frag_gurney_c=2830;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_medium",
			"ACE_frag_medium_HD"
		};
	};
};
class CfgMagazines
{
	/*class 200Rnd_127x99_mag_Tracer_Yellow;
	class 200Rnd_127x99_mag_Tracer_Orange: 200Rnd_127x99_mag_Tracer_Yellow
	{
		ammo="BHA_127x99_Ball_Tracer_Orange";
	};
	class 140Rnd_30mm_MP_shells_Tracer_Green;
	class 140Rnd_30mm_MP_shells_Tracer_Orange: 140Rnd_30mm_MP_shells_Tracer_Green
	{
		ammo="B_30mm_MP_Tracer_Orange";
	};
	class 60Rnd_30mm_APFSDS_shells_Tracer_Green;
	class 60Rnd_30mm_APFSDS_shells_Tracer_Orange: 60Rnd_30mm_APFSDS_shells_Tracer_Green
	{
		ammo="B_30mm_APFSDS_Tracer_Orange";
	};
	class 200Rnd_762x51_Belt_Green;
	class 200Rnd_762x51_Belt_Orange: 200Rnd_762x51_Belt_Green
	{
		ammo="B_762x51_Tracer_Orange";
	};
	class 5000Rnd_762x51_Yellow_Belt;
	class 5000Rnd_762x51_Orange_Belt: 5000Rnd_762x51_Yellow_Belt
	{
		ammo="B_762x51_Minigun_Tracer_Orange_splash";
	};
	class 300Rnd_20mm_shells;
	class PylonWeapon_300Rnd_20mm_shells_Orange: 300Rnd_20mm_shells
	{
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Twin_Cannon_20mm.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		ammo="BHA_20mm_Orange";
		hardpoints[]=
		{
			"BHA_20MM_TWIN_CANNON"
		};
		pylonWeapon="BHA_Twin_Cannon_20mm";
		mass=230;
	};
	class 200Rnd_127x99_mag_Tracer_Red;
	class 12Rnd_120mm_APFSDS_shells_Tracer_Red;
	class 12Rnd_120mm_APFSDS_shells_Tracer_Orange: 12Rnd_120mm_APFSDS_shells_Tracer_Red
	{
		ammo="BHA_120mm_APFSDS_Tracer_Orange";
	};
	class 8Rnd_120mm_HE_shells_Tracer_Red;
	class 8Rnd_120mm_HE_shells_Tracer_Orange: 8Rnd_120mm_HE_shells_Tracer_Red
	{
		ammo="BHA_120mm_HE_Tracer_Orange";
	};
	class 8Rnd_120mm_HEAT_MP_T_Red;
	class 8Rnd_120mm_HEAT_MP_T_Orange: 8Rnd_120mm_HEAT_MP_T_Red
	{
		ammo="BHA_120mm_HEAT_MP_T_Orange";
	};
	class 200Rnd_338_Mag;
	class BHA_200Rnd_338_Orange_Mag: 200Rnd_338_Mag
	{
		ammo="BHA_338_NM_Ball";
	};*/
	class MET_DC15A_mag;
	class MET_DC15L_mag;
	class VehicleMagazine;
	class MET_T20AC_vic_mag: MET_DC15A_mag
	{
		scope=2;
		scopeArsenal=0;
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=300;
		displayName="T-20 Heavy Energy Cell";
		ammo="MET_bullet_heavy_orange";
		tracersEvery=1;
		mass=150;
	};
	class MET_EL34_vic_mag: MET_DC15L_mag
	{
		scope=2;
		scopearsenal=0;
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=1000;
		displayName="EL-34 Mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_bullet_carbine_orange";
		tracersEvery=1;
		initSpeed=920;
		mass=100;
	};
	class MET_500Rnd_Z36_HBC: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z36 Heavy Blaster Bolt";
		displayNameShort="Z36 H.B.C";
		picture="";
		ammo="MET_B_OrangePlasma_127_HBC";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class MET_500Rnd_Z36_HBC_AP: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z36 Heavy Blaster Bolt AP";
		displayNameShort="Z36 H.B.C";
		picture="";
		ammo="MET_B_OrangePlasma_127_AP";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class MET_500Rnd_Z38_HBC: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z38 Heavy Blaster Bolt";
		displayNameShort="Z38 H.B.C";
		picture="";
		ammo="MET_B_OrangePlasma_40_GPR";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class MET_500Rnd_Z38_HBC_AP: VehicleMagazine
	{
		scope=2;
		displayName="Bantha Z38 Heavy Blaster Bolt AP";
		displayNameShort="Z38 H.B.C";
		picture="";
		ammo="MET_B_OrangePlasma_40_AP";
		mass=8;
		count=500;
		tracersEvery=1;
		lastRoundsTracer=60;
		timeToLive=10;
		tracerScale=2;
		tracerStartTime=0;
	};
	class BHA_30Rnd_Mass_Driver_shells: VehicleMagazine
	{
		author="Hazmat";
		scope=2;
		displayName="30 Round Mass Driver Shells";
		displayNameShort="Mass Driver Shells";
		displayNameMFDFormat="AP";
		ammo="BHA_Mass_Driver_Shell";
		count=30;
		initSpeed=1680;
		maxLeadSpeed=250;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,3};
	};
	class SFA_Base_mag;
	class MET_vic_proton_mag: SFA_Base_mag
	{
		scope=2;
		scopeArsenal=0;
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=200;
		displayName="E403 Heavier Proton mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_gl_orange";
		tracersEvery=1;
		initSpeed=320;
		mass=400;
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class MGun;
class GunParticles;
class CfgWeapons
{
	/*class HMG_127;
	class BHA_HMG_127: HMG_127
	{
		magazines[]=
		{
			"200Rnd_127x99_mag_Tracer_Orange"
		};
	};
	class autocannon_Base_F;
	class autocannon_30mm_CTWS;
	class BHA_30mm_CTWS: autocannon_30mm_CTWS
	{
		muzzles[]=
		{
			"HE",
			"AP"
		};
		class HE: autocannon_Base_F
		{
			displayName="Mk44 Bushmaster II";
			magazines[]=
			{
				"140Rnd_30mm_MP_shells_Tracer_Orange"
			};
		};
		class AP: autocannon_Base_F
		{
			displayName="Mk44 Bushmaster II";
			magazines[]=
			{
				"60Rnd_30mm_APFSDS_shells_Tracer_Orange"
			};
		};
		class GunParticles
		{
			class Effect
			{
				effectName="AutoCannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
			class Shell
			{
				positionName="shell_eject_pos";
				directionName="shell_eject_dir";
				effectName="HeavyGunCartridge1";
			};
		};
	};
	class LMG_coax_ext;
	class BHA_LMG_coax_ext: LMG_coax_ext
	{
		magazines[]=
		{
			"200Rnd_762x51_Belt_Orange"
		};
	};
	class M134_minigun;
	class BHA_M134_minigun: M134_minigun
	{
		magazines[]=
		{
			"5000Rnd_762x51_Orange_Belt"
		};
	};
	class Twin_Cannon_20mm;
	class BHA_Twin_Cannon_20mm: Twin_Cannon_20mm
	{
		magazines[]=
		{
			"PylonWeapon_300Rnd_20mm_shells_Orange"
		};
	};
	class HMG_127_UGV;
	class BHA_HMG_127_UGV: HMG_127_UGV
	{
		magazines[]=
		{
			"200Rnd_127x99_mag_Tracer_Orange"
		};
	};
	class cannon_120mm;
	class BHA_cannon_120mm: cannon_120mm
	{
		magazines[]=
		{
			"12Rnd_120mm_APFSDS_shells_Tracer_Orange",
			"8Rnd_120mm_HE_shells_Tracer_Orange",
			"8Rnd_120mm_HEAT_MP_T_Orange",
			"4Rnd_120mm_LG_cannon_missiles"
		};
	};
	class MMG_02_coax;
	class BHA_MMG_02_coax: MMG_02_coax
	{
		magazines[]=
		{
			"BHA_200Rnd_338_Orange_Mag"
		};
	};*/
    class CannonCore;
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
	class HMG_127;
	class BHA_MG: HMG_127
	{
		displayName = "HMG";
		magazines[] = { "MET_T20AC_mag", "MET_T20AC_vic_mag" };
		reloadTime = 0.1;
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		class manual: Mode_FullAuto
		{
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class BHA_MG2: HMG_127
	{
		displayName = "HMG";
		magazines[] = { "MET_T20AC_mag", "MET_T20AC_vic_mag" };
		reloadTime = 0.1;
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		class GunParticles: GunParticles
		{
			class effect1
			{
				positionName="usti hlavne1";
				directionName="konec hlavne1";
				effectName="MachineGunCloud";
			};
		};
		class manual: Mode_FullAuto
		{
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class HMG_127_APC;
	class BHA_MG3: HMG_127_APC
	{
		displayName = "HMG";
		magazines[] = { "MET_T20AC_mag", "MET_T20AC_vic_mag" };
		reloadTime = 0.1;
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		class GunParticles: GunParticles
		{
			class effect1
			{
				positionName="usti hlavne3";
				directionName="konec hlavne3";
				effectName="MachineGunCloud";
			};
		};
		class manual: Mode_FullAuto
		{
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class missiles_titan;
	class BHA_missiles_TOW: missiles_titan
	{
		displayName = "Twin HH-12 Mounted Launcher";
		magazines[] = { "BHA_AA_Dub", "BHA_AT_DUB", "BHA_AP_DUB" };
		reloadTime = 2.0;
		autoFire = 0;
		cursor = "missile";
		/*modes[] = { "manual" };
		class manual: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"3AS\3AS_Weapons\PLX1\Sounds\PLX_Fire.ogg",
					3.1622777,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime = 2.0;
			dispersion = 0.001;
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 2500;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
		};*/
	};
	class BHA_EL34_Gatling: HMG_127
	{
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		displayName="EL-36 Rotary Cannon";
		magazines[] = { "MET_EL34_mag", "MET_EL34_vic_mag" };
		class manual: MGun
		{
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
					"\SFA_Main\SFA_Weapons_S\EL34\data\SFX\EL43.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.03;
			dispersion=0.0012000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.03;
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
	class missiles_SAAMI;
	class BHA_Missiles_SAAMI: missiles_SAAMI
	{
		displayName = "Twin HH-12 Mounted Launcher";
		magazines[]=
		{
			"BHA_AA_Dub"
		};
	};
	class cannon_20mm;
	class MET_autocannon_Z36_HBC: cannon_20mm
	{
		displayName="Z36 HBC";
		class GunParticles: GunParticles
		{
			class SmokeEffect1
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="AutoCannonFired";
			};
		};
		class HE: MET_autocannon_Base_F
		{
			displayName="Z36 H.B.C HE";
			magazines[]=
			{
				"MET_500Rnd_Z36_HBC"
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
						"z\16th\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
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
		class AP: MET_autocannon_Base_F
		{
			displayName="Z36 H.B.C AP";
			magazines[]=
			{
				"MET_500Rnd_Z36_HBC_AP"
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
						"z\16th\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
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
	class autocannon_40mm_CTWS;
	class BHA_autocannon_40mm_HE: autocannon_40mm_CTWS
	{
		class GunParticles: GunParticles
		{
			class Effect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="AutoCannonFired";
			};
			class SmokeEffect2
			{
				positionName="usti hlavne1";
				directionName="usti hlavne1";
				effectName="AutoCannonFired";
			};
		};
		class HE: MET_autocannon_Base_F
		{
			displayName="Z38 H.B.C HE";
			magazines[]=
			{
				"MET_500Rnd_Z38_HBC"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.15;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
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
		class AP: MET_autocannon_Base_F
		{
			displayName="Z38 H.B.C AP";
			magazines[]=
			{
				"MET_500Rnd_Z38_HBC_AP"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.15;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
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
		magazines[]=
		{
			"MET_500Rnd_Z38_HBC"
		};
	};
	/*class BHA_autocannon_40mm_AP: autocannon_40mm_CTWS
	{
		class GunParticles: GunParticles
		{
			class Effect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="AutoCannonFired";
			};
			class SmokeEffect2
			{
				positionName="usti hlavne1";
				directionName="usti hlavne1";
				effectName="AutoCannonFired";
			};
		};
		class AP: MET_autocannon_Base_F
		{
			displayName="Z38 H.B.C AP";
			magazines[]=
			{
				"MET_500Rnd_Z38_HBC_AP"
			};
			class player: player
			{
				dispersion=0;
				reloadTime=0.15;
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					begin1[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_1.ogg",
						1,
						1,
						1900
					};
					begin2[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_2.ogg",
						1,
						1,
						1900
					};
					begin3[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_3.ogg",
						1,
						1,
						1900
					};
					begin4[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_4.ogg",
						1,
						1,
						1900
					};
					begin5[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_5.ogg",
						1,
						1,
						1900
					};
					begin6[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_6.ogg",
						1,
						1,
						1900
					};
					begin7[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_7.ogg",
						1,
						1,
						1900
					};
					begin8[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_8.ogg",
						1,
						1,
						1900
					};
					begin9[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_9.ogg",
						1,
						1,
						1900
					};
					begin10[]=
					{
						"z\16th\addons\vehicles\sounds\cannon_10.ogg",
						1,
						1,
						1900
					};
					soundBegin[]=
					{
						"begin1", 0.1,
						"begin2", 0.1,
						"begin3", 0.1,
						"begin4", 0.1,
						"begin5", 0.1,
						"begin6", 0.1,
						"begin7", 0.1,
						"begin8", 0.1,
						"begin9", 0.1,
						"begin10", 0.1
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
		magazines[]=
		{
			"MET_500Rnd_Z38_HBC_AP"
		};
	};*/
	class BHA_Mass_Driver_Cannon: CannonCore
	{
		scope=1;
		displayName="[BHA] Mass Driver Cannon";
		cursor="EmptyCursor";
		cursorAim="cannon";
		showAimCursorInternal=0;
		nameSound="cannon";
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\Cannon_120mm_Reload_01",
			2.5118864,
			1,
			10
		};
		magazines[]=
		{
			"BHA_30Rnd_Mass_Driver_shells"
		};
		reloadTime=6;
		magazineReloadTime=6;
		autoReload=1;
		canLock=0;
		ballisticsComputer="2 + 8 + 16";
		FCSMaxLeadSpeed=250;
		FCSZeroingDelay=1;
		aiDispersionCoefY=2;
		aiDispersionCoefX=2;
		autoFire=0;
		modes[]=
		{
			"player",
			"topDown",
			"close",
			"short",
			"medium",
			"far"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="CannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
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
					"z\16th\addons\vehicles\sounds\laser_cannon.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			soundContinuous=0;
			reloadTime=6;
			magazineReloadTime=6;
			autoReload=1;
			autoFire=0;
			dispersion=0.00056999997;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class TopDown: player
		{
			textureType="topDown";
			displayName="$STR_A3_FireMode_TopDown0";
			minRange=150;
			minRangeProbab=0.40000001;
			midRange=400;
			midRangeProbab=0.94999999;
			maxRange=8000;
			maxRangeProbab=0.94999999;
		};
		class close: player
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=0.5;
			aiRateOfFireDistance=500;
			minRange=5;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.85000002;
		};
		class short: close
		{
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=6;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=1000;
			minRange=500;
			minRangeProbab=0.30000001;
			midRange=1000;
			midRangeProbab=0.85000002;
			maxRange=1500;
			maxRangeProbab=0.85000002;
		};
		class medium: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=8;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=1250;
			minRange=1000;
			minRangeProbab=0.60000002;
			midRange=1500;
			midRangeProbab=0.85000002;
			maxRange=2000;
			maxRangeProbab=0.80000001;
		};
		class far: close
		{
			dispersion=0.00071250001;
			showToPlayer=0;
			burst=1;
			burstRangeMax=1;
			aiRateOfFire=10;
			aiRateOfFireDispersion=8;
			aiRateOfFireDistance=1500;
			minRange=1500;
			minRangeProbab=0.75;
			midRange=2000;
			midRangeProbab=0.80000001;
			maxRange=3500;
			maxRangeProbab=0.050000001;
		};
	};
	class BHA_E403_Vic: HMG_127
	{
		displayName = "GMG";
		magazines[] = { "MET_heavy_proton_mag", "MET_vic_proton_mag" };
		reloadTime = 0.1;
		autoFire = 1;
		cursor = "mg";
		modes[] = { "manual", "close", "short", "medium" };
		magazineReloadTime=6;
		class GunParticles: GunParticles
		{
			class effect1
			{
				positionName="usti hlavne1";
				directionName="konec hlavne1";
				effectName="AutoCannonFired";
			};
		};
		class manual: Mode_FullAuto
		{
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
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.3;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
	};
	class LMG_RCWS;
	class BHA_L1_Gatling: LMG_RCWS
	{
		displayName="L1 Gatling Laser";
		canLock=0;
		reloadTime=1;
		maxholdstervalue=2;
		ballisticsComputer="4 + 2 + 8";
		magazines[]=
		{
			"MET_500Rnd_Z38_HBC"
		};
		class GunParticles
		{
		};
		class manual: MGun
		{
			displayName="L1 Gatling";
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\closure\sfx7",
					0.56234133,
					1,
					40
				};
				closure2[]=
				{
					"A3\sounds_f\weapons\closure\sfx8",
					0.56234133,
					1,
					40
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_01",
					1,
					1,
					2100
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
				soundsetshot[]=
				{
					"SFA_LS1_SoundSet"
				};
			};
			soundContinuous=0;
			soundBurst=0;
			reloadTime=0.2;
			dispersion=0.0016;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class close: manual
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=8;
			burstRangeMax=16;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=50;
			minRange=0;
			minRangeProbab=0.80000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=6;
			burstRangeMax=12;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=150;
			minRange=20;
			minRangeProbab=0.69999999;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=12;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=250;
			minRange=150;
			minRangeProbab=0.69999999;
			midRange=600;
			midRangeProbab=0.64999998;
			maxRange=800;
			maxRangeProbab=0.1;
		};
		class far: close
		{
			aiBurstTerminable=1;
			showToPlayer=0;
			burst=3;
			burstRangeMax=8;
			aiRateOfFire=4;
			aiRateOfFireDispersion=4;
			aiRateOfFireDistance=600;
			minRange=600;
			minRangeProbab=0.64999998;
			midRange=800;
			midRangeProbab=0.40000001;
			maxRange=1200;
			maxRangeProbab=0.1;
		};
	};
	class missiles_DAGR;
	class BHA_Rockets_Mantis: missiles_DAGR
	{
		magazines[]=
		{
			"BHA_AP_OCT",
			"BHA_AT_OCT"
		};
	};
};