class CfgPatches
{
	class metal_rps
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"DBA_RPS6_Testbed"
		};
		magazines[]=
		{
			"DBA_90mm_IK55_HEAT_x1_mag",
			"DBA_90mm_IK55T_THEAT_x1_mag",
			"DBA_90mm_IK60_HEP_x1_mag",
			"DBA_90mm_IK40_FRAG_x1_mag",
			"DBA_90mm_IK65_AB_x1_mag"
		};
		ammo[]=
		{
			"DBA_90mm_HEAT_Penetrator",
			"DBA_90mm_THEAT_Penetrator",
			"DBA_5mm_Flechette",
			"DBA_90mm_IK55_HEAT",
			"DBA_90mm_IK55T_THEAT",
			"DBA_90mm_IK60_HEP",
			"DBA_90mm_IK65_AB",
			"DBA_90mm_IK40_FRAG"
		};
	};
};
class UGL_F;
class Mode_SemiAuto;
class Mode_Burst: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Single;
class close;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class GunParticles;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class rps_16th: Launcher_Base_F
	{
		displayName="[16th] RPS-6";
		scope=2;
		descriptionShort="";
		baseWeapon="rps_16th";
		model="\3AS\3AS_Weapons\RPS6\3AS_RPS6_F.p3d";
		picture="\3AS\3AS_Weapons\RPS6\Data\UI\3as_rps6d.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3as_weapons\data\anim\rps6_hold.rtm"
		};
		sounds[]=
		{
			"StandardSound"
		};
		cameraDir="look";
		ace_overpressure_angle=45;
		ace_overpressure_range=10;
		ace_overpressure_damage=0.25;
		class Library
		{
			libtextdesc="";
		};
		magazines[]=
		{
			"DBA_90mm_IK55_HEAT_x1_mag",
			"DBA_90mm_IK55T_THEAT_x1_mag",
			"DBA_90mm_IK60_HEP_x1_mag",
			"DBA_90mm_IK40_FRAG_x1_mag",
			"DBA_90mm_IK65_AB_x1_mag"
		};
		magazineWell[]={};
		recoil="recoil_recoiless_weapon";
		reloadaction="ReloadRPG";
		modes[]=
		{
			"Single"
		};
		magazineReloadTime=6.5;
		class Single: Mode_SemiAuto
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
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			aiRateOfFire=7;
			aiRateOfFireDistance=600;
			dispersion=0.0014544399;
			recoil="recoil_single_law";
			minRange=50;
			minRangeProbab=0.40000001;
			midRange=500;
			midRangeProbab=0.80000001;
			maxRange=1000;
			maxRangeProbab=0.89999998;
		};
		maxZeroing=750;
		modelOptics="\a3\Weapons_F_Tank\acc\reticle_MRAWSNew.p3d";
		weaponInfoType="RscOpticsRangeFinderMRAWS";
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.1083;
				opticsZoomMax=0.1083;
				opticsZoomInit=0.1083;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="look";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class DBA_90mm_IK55_HEAT_x1_mag: CA_LauncherMagazine
	{
		displayname="IK55 HEAT";
		ammo="DBA_90mm_IK55_HEAT";
		scope=2;
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT55_F_ca.paa";
		displaynamemagazine="IK55 HEAT";
		shortnamemagazine="IK55 HEAT";
		displayNameMFDFormat="IK55 HEAT";
		displayNameShort="IK55 HEAT";
		mass=50;
		count=1;
		initspeed=345;
		tracersevery=1;
	};
	class DBA_90mm_IK55T_THEAT_x1_mag: CA_LauncherMagazine
	{
		displayname="IK55T Tandem Heat";
		scope=1;
		ammo="DBA_90mm_IK55T_THEAT";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HEAT_F_ca.paa";
		displaynamemagazine="IK55T Tandem Heat";
		shortnamemagazine="IK55T Tandem";
		displayNameMFDFormat="IK55T Tandem";
		displayNameShort="IK55T Tandem";
		mass=65;
		count=1;
		initspeed=280;
		tracersevery=1;
	};
	class DBA_90mm_IK60_HEP_x1_mag: CA_LauncherMagazine
	{
		displayname="IK60 High Explosive Plastic";
		ammo="DBA_90mm_IK60_HEP";
		scope=2;
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
		displaynamemagazine="IK60 High Explosive Plastic";
		shortnamemagazine="IK60 HEP";
		displayNameMFDFormat="IK60 HEP";
		displayNameShort="IK60 HEP";
		mass=40;
		count=1;
		initspeed=345;
		tracersevery=1;
	};
	class DBA_90mm_IK40_FRAG_x1_mag: CA_LauncherMagazine
	{
		displayname="IK40 Fragmentation";
		scope=2;
		ammo="DBA_90mm_IK40_FRAG";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
		displaynamemagazine="IK40 Fragmentation";
		shortnamemagazine="IK40 FRAG";
		displayNameMFDFormat="IK40 FRAG";
		displayNameShort="IK40 FRAG";
		mass=40;
		count=1;
		initspeed=345;
		tracersevery=1;
	};
	class DBA_90mm_IK65_AB_x1_mag: CA_LauncherMagazine
	{
		displayname="IK65 Canister";
		scope=1;
		ammo="DBA_90mm_IK65_AB";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
		displaynamemagazine="IK65 Canister";
		shortnamemagazine="IK65 CAN";
		displayNameMFDFormat="IK65 CAN";
		displayNameShort="IK65 CAN";
		mass=40;
		count=1;
		initspeed=345;
		tracersevery=1;
	};
};
class CfgAmmo
{
	class MissileBase;
	class RocketBase;
	class ammo_Penetrator_Base;
	class Sh_120mm_APFSDS;
	class B_762x54_Ball;
	class DBA_90mm_HEAT_Penetrator: ammo_Penetrator_Base
	{
		hit=650;
		warheadName="HEAT";
		caliber=28.333334;
	};
	class DBA_90mm_THEAT_Penetrator: ammo_Penetrator_Base
	{
		hit=800;
		warheadName="TandemHEAT";
		caliber=40;
	};
	class DBA_90mm_HEP_Penetrator: ammo_Penetrator_Base
	{
		hit=400;
		warheadName="HEAT";
		caliber=8.4666662;
	};
	class DBA_5mm_Flechette: B_762x54_Ball
	{
		hit=23;
		warheadName="AP";
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=42;
		audibleFire=42;
		initSpeed=510;
		coefGravity=0.80000001;
		timeToLive=3;
		explosionSoundEffect="DefaultExplosion";
		explosive=0;
		cost=500;
		CraterEffects="ExploAmmoCrater";
		explosionEffects="ExploAmmoExplosion";
		tracerStartTime=0.050000001;
		tracerScale=1.3;
		tracerEndTime=20;
		airFriction=0;
		muzzleEffect="";
		caliber=1.9607843;
		typicalSpeed=50;
		deflecting=20;
		model="\MRC\JLTS\weapons\Core\effects\laser_green.p3d";
		effectfly="3AS_PlasmaBolt_Green_Fly";
	};
	class DBA_90mm_IK55_HEAT: RocketBase
	{
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT55_F.p3d";
		warheadName="HEAT";
		submunitionAmmo="DBA_90mm_HEAT_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.1};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=1500;
		indirectHit=20;
		indirectHitRange=2.5;
		explosive=1;
		cost=30;
		coefGravity=0.1;
		caliber=1;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ATMissileExplosion";
		CraterEffects="ArtyShellCrater";
		effectsSmoke="SmokeShellWhite";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.1;
		thrustTime=0;
		thrust=0;
		fuseDistance=25;
		effectsMissile="missile2";
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class DBA_90mm_IK55T_THEAT: RocketBase
	{
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HEAT_F.p3d";
		warheadName="TandemHEAT";
		submunitionAmmo="DBA_90mm_THEAT_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=150;
		indirectHit=20;
		indirectHitRange=2;
		explosive=0.80000001;
		caliber=1;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		explosionEffects="ATMissileExplosion";
		CraterEffects="ArtyShellCrater";
		effectsSmoke="SmokeShellWhite";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=344;
		typicalspeed=10;
		initTime=0;
		thrustTime=0.25;
		thrust=180;
		fuseDistance=50;
		effectsMissile="missile2";
		whistleDist=4;
		coefGravity=1.15;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class DBA_90mm_IK60_HEP: RocketBase
	{
		warheadName="HE";
		submunitionAmmo="DBA_90mm_HEP_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.1};
		ace_frag_enabled=1;
		ace_frag_metal=600;
		ace_frag_charge=672.5;
		ace_frag_gurney_c=2440;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_small"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=650;
		indirectHit=350;
		indirectHitRange=8;
		explosive=1;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsSmoke="SmokeShellWhite";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=0.5;
		thrust=0.1;
		fuseDistance=25;
		effectsMissile="missile2";
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class DBA_90mm_IK40_FRAG: RocketBase
	{
		warheadName="HE";
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		ace_frag_enabled=1;
		ace_frag_metal=4500;
		ace_frag_charge=472.5;
		ace_frag_gurney_c=2830;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_large"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
		hit=50;
		indirectHit=90;
		indirectHitRange=10;
		explosive=0.80000001;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		effectsSmoke="SmokeShellWhite";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=0.5;
		thrust=0.1;
		fuseDistance=25;
		effectsMissile="missile2";
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class DBA_90mm_IK65_AB: RocketBase
	{
		warheadName="Flechette";
		submunitionAmmo="DBA_5mm_Flechette";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=550;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerDistance=-1;
		submunitionConeAngle=0.64999998;
		submunitionConeType[]=
		{
			"poissondisccenter",
			56
		};
		triggerTime=0;
		triggerOnImpact=0;
		deleteParentWhenTriggered=1;
		hit=0;
		indirectHit=0;
		indirectHitRange=3;
		explosive=0;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsSmoke="SmokeShellWhite";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=0.5;
		thrust=0.1;
		fuseDistance=10;
		effectsMissile="missile2";
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
};
class cfgMods
{
	author="5CentNickel";
	timepacked="1717460129";
};
