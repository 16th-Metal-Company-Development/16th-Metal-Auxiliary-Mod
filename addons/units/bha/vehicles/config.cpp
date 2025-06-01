class CfgPatches
{
	class BHA_Vehicles
	{
		units[]={};
		weapons[]={};
	};
};
class CfgAmmo
{
	class B_127x99_Ball_Tracer_Yellow;
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
	};
};
class CfgMagazines
{
	class 200Rnd_127x99_mag_Tracer_Yellow;
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
	};
};
class CfgWeapons
{
	class HMG_127;
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
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
