class CfgPatches
{
	class metal_plx
	{
		author="Hazmat";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"plx_16th"
		};
		magazines[]=
		{
			"metal_at_mag",
			"metal_aa_mag",
			"metal_ap_mag"
		};
		ammo[]=
		{
			"metal_Penetrator",
			"metal_at_missile",
			"metal_aa_missile",
			"metal_ap_missile"
		};
		requiredAddons[]=
		{
			"JLTS_weapons_PLX1",
			"JLTS_weapons_RPS6"
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
class TopDown;
class close;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class GunParticles;
class WeaponSlotsInfo;
class CfgWeapons
{
	class launch_B_Titan_Short_F;
	class plx_16th_base: launch_B_Titan_Short_F
	{
		class WeaponSlotsInfo;
		class Single
		{
			ace_missileGuidance_attackProfile="JAV_DIR";
		};
		class TopDown
		{
			ace_missileGuidance_attackProfile="JAV_TOP";
		};
		scope=1;
		author="Hazmat";
	};
	class plx_16th: launch_B_Titan_Short_F
	{
		scope=2;
		displayName="[16th] PLX-1";
		descriptionShort="PLX Multi Purpose Rocket Launcher";
		picture="\MRC\JLTS\weapons\PLX1\data\ui\PLX1_ui_ca.paa";
		model="\MRC\JLTS\weapons\PLX1\PLX1.p3d";
		modelOptics="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		inertia=1.2;
		//initSpeed=40;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\PLX1\anims\PLX1_handanim.rtm"
		};
		cameraDir="look";
		canLock=0;
		magazineWell[]={};
		magazines[]=
		{
			"metal_at_mag",
			"metal_aa_mag",
			"metal_ap_mag"
		};
		ace_overpressure_angle=45;
		ace_overpressure_damage=0.69999999;
		ace_overpressure_priority=1;
		ace_overpressure_range=10;
		ace_reloadlaunchers_enabled=1;
		ace_javelin_enabled=1;
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.087499999;
				opticsZoomMax=0.087499999;
				opticsZoomInit=0.087499999;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"TI"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.2,0.061538462,0.028571429};
				discreteInitIndex=0;
			};
		};
		class Library
		{
			libtextdesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
		};
	};
	class 3AS_PLX1_F;
	class MET_PLX1_AA: 3AS_PLX1_F
	{
		displayName="[16th] PLX-1 AA Missile Launcher Platform";
		magazines[]=
		{
			"metal_aa_alt_mag"
		};
		lockAcquire=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
		};
	};
	class MET_RPS6_AA: 3AS_PLX1_F
	{
		displayName="[16th] RPS-6 Smart Launcher";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_RPS6_fried";
		JLTS_repairTime=30;
		magazines[]=
		{
			"MET_AA_SINGLE",
			"MET_AP_SINGLE",
			"MET_AT_Single"
		};
		lockAcquire=1;
		picture="\MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		uiPicture="MRC\JLTS\weapons\RPS6\data\ui\rps6_ui_ca.paa";
		model="\MRC\JLTS\weapons\RPS6\rps6.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\RPS6\anims\RPS6_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\RPS6\data\rps6_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
		};
	};
};
class CfgMagazines
{
	class ls_mag_base;
	class 3AS_JLTS_MK39_AA;
	class MET_AA_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="RPS-6 AA Rocket";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";
		ammo = "metal_aa_missile_van";
		count=1;
		mass=40;
		initSpeed=40;
	};
	class MET_AP_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="RPS-6 AP Rocket";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		ammo="metal_ap_missile";
		count=1;
		mass=40;
		initSpeed=40;
	};
	class MET_AT_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="RPS-6 AT Rocket";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		ammo="metal_at_wire_missile";
		count=1;
		mass=50;
		initSpeed=40;
	};
	class metal_at_mag: ls_mag_base
	{
		scope=2;
		displayName="PLX AT Rack";
		count=3;
		model="\MRC\JLTS\weapons\PLX1\PLX1_mag.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		ammo="metal_at_missile";
		initSpeed=20;
		maxLeadSpeed=27.7778;
		type=256;
		mass=100;
	};
	class metal_ap_mag: metal_at_mag
	{
		displayName="PLX AP Rack";
		ammo="metal_ap_missile";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		initSpeed=50;		
		mass=80;
	};
	class metal_aa_mag: metal_at_mag
	{
		displayName="PLX AA Rack";
		ammo="metal_aa_missile";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";
		initSpeed=40;
		count=4;
		mass=100;
	};
	class metal_aa_alt_mag: 3AS_JLTS_MK39_AA
	{
		displayName="PLX AA Rack";
		ammo="metal_aa_missile_van";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";
		initSpeed=40;
		count=4;
		mass=100;
	};
};
class CfgAmmo
{
	class MissileBase;
	class RocketBase;
	class ammo_Penetrator_Base;
	class M_Titan_AT;
	class M_Titan_AP;
	class 3AS_M_MK39_AA;
	class metal_Penetrator: ammo_Penetrator_Base
	{
		hit=900;
		warheadName="TandemHEAT";
		caliber=27.333334;
	};
	class metal_at_missile: M_Titan_AT
	{
	/*	irLock=1;
		laserLock=0;
		airLock=0;
		manualControl=0;
		indirectHit=20;
		indirectHitRange=2;
		initTime=0.25;
		trackOversteer=1.5;
		trackLead=0.89999998;
		maneuvrability=20;*/
		//submunitionAmmo="3AS_ammo_Penetrator_MK43";
		hit=1400;
		submunitionAmmo="metal_Penetrator";
		effectsMissile="3AS_Rocket_effect_Blue_fly";
		soundFly[]=
		{
			"LF_Weapon_Unit\PLX\sounds\plx_fly.wss",
			6,
			1.5,
			700
		};
		class ace_missileguidance
		{
			enabled=1;
			pitchRate=120;
			yawRate=120;
			stabilityCoefficient=0.2;
			bangBangGuidance=0;
			canVanillaLock=0;
			defaultSeekerType="Optic";
			seekerTypes[]=
			{
				"Optic"
			};
			defaultSeekerLockMode="LOBL";
			seekerLockModes[]=
			{
				"LOBL"
			};
			defaultNavigationType="Direct";
			navigationTypes[]=
			{
				"Direct",
				"ZeroEffortMiss"
			};
			navigationGain=3;
			seekerAngle=180;
			seekerAccuracy=1;
			seekerMinRange=0;
			seekerMaxRange=2500;
			seekLastTargetPos=1;
			defaultAttackProfile="JAV_TOP";
			attackProfiles[]=
			{
				"JAV_TOP",
				"JAV_DIR"
			};
			useModeForAttackProfile=1;
			class navigationStates
			{
				class initial
				{
					transitionCondition="ace_missileguidance_fnc_javelin_midCourseTransition";
					navigationType="Direct";
				};
				class terminal
				{
					transitionCondition="";
					navigationType="ZeroEffortMiss";
				};
				states[]=
				{
					"initial",
					"terminal"
				};
			};
		};
	};
	class metal_ap_missile: M_Titan_AP
	{
		warheadName="HE";
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		effectsMissile="3AS_Rocket_effect_Yellow_fly";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		ace_frag_enabled=1;
		ace_frag_metal=4500;
		ace_frag_charge=500;
		ace_frag_gurney_c=2830;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_large"
		};
		ace_frag_skip=0;
		ace_frag_force=3;
		hit=80;
		indirectHit=70;
		indirectHitRange=6.5;
		explosive=1;
		soundFly[]=
		{
			"LF_Weapon_Unit\PLX\sounds\plx_fly.wss",
			6,
			1.5,
			700
		};
	};
	class metal_at_wire_missile: M_Titan_AP
	{
		warheadName="AT";
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		effectsMissile="3AS_Rocket_effect_Blue_fly";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		ace_frag_enabled=0;
		ace_frag_metal=00;
		ace_frag_charge=00;
		ace_frag_gurney_c=0;
		ace_frag_gurney_k="";
		ace_frag_classes[]={};
		ace_frag_skip=0;
		ace_frag_force=0;
		hit=1200;
		indirectHit=15;
		indirectHitRange=1;
		explosive=1;
		soundFly[]=
		{
			"LF_Weapon_Unit\PLX\sounds\plx_fly.wss",
			6,
			1.5,
			700
		};
	};
	class metal_aa_missile: M_Titan_AT
	{
		model="\A3\Weapons_F\Ammo\Rocket_01_fly_F";
		hit=550;
		indirectHit=550;
		indirectHitRange=1.5;
		proximityExplosionDistance=1;
		explosive=1;
		warheadName="SAM";
		simulationStep=0.0020000001;
		timeToLive=75;
		initTime=0.2;
		thrustTime=17;
		thrust=230;
		maxSpeed=686;
		fuseDistance=25;
		airFriction=0.2;
		sideAirFriction=0.34999999;
		trackOversteer=1.4;
		trackLead=0.89999998;
		maneuvrability=32;
		cost=500;
		aiAmmoUsageFlags="128 + 512";
		dangerRadiusHit=1000;
		suppressionRadiusHit=120;
		craterEffects="ATRocketCrater";
		explosionEffects="ATRocketExplosion";
		explosionSoundEffect="DefaultExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		effectsMissile="MET_ATRocket_Green_fly";
		muzzleEffect="";
		whistleDist=4;
		maxControlRange=10000;
		weaponLockSystem[]=
		{
			"1+2+16"
		};
		cmImmunity=1;
		cameraViewAvailable=1;
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		irLock=1;
		laserLock=0;
		airLock=0;
		manualControl=0;
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=4.9999999e-005;
			maxDeflection=1;
			incDeflection=4.9999999e-005;
			canVanillaLock=0;
			defaultSeekerType="Optic";
			seekerTypes[]=
			{
				"Optic"
			};
			defaultSeekerLockMode="LOBL";
			seekerLockModes[]=
			{
				"LOBL"
			};
			seekerAngle=270;
			seekerAccuracy=0.1;
			seekerMinRange=0;
			seekerMaxRange=2500;
			seekLastTargetPos=1;
			defaultAttackProfile="JAV_DIR";
			attackProfiles[]=
			{
				"JAV_TOP",
				"JAV_DIR"
			};
			useModeForAttackProfile=1;
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=-1;
						angleRangeHorizontal=20;
						angleRangeVertical=20;
						groundNoiseDistanceCoef=0;
						maxGroundNoiseDistance=0;
						minTrackableSpeed=0;
						maxTrackableSpeed=9999;
						minTrackableATL=20;
						minSpeedThreshold=0;
						maxSpeedThreshold=1;
						maxFogSeeThrough=0.94999999;
						aimDown=25;
						componentType="IRSensorComponent";
						color[]={1,0,0,1};
						allowsMarking=1;
						animDirection="";
						maxTrackableATL=1e+010;
					};
				};
			};
		};
	};
	class metal_aa_missile_van: 3AS_M_MK39_AA
	{
		hit=550;
		indirectHit=120;
		indirectHitRange=12;
		warheadName="AA";
		proximityExplosionDistance=10;
		maneuvrability=22;
		simulationStep=0.0020000001;
		trackOversteer=1;
		trackLead=0.94999999;
		aiAmmoUsageFlags=256;
		irLock=1;
		cost=1000;
		timeToLive=30;
		airFriction=0.145;
		sideAirFriction=0.1;
		maxSpeed=850;
		initTime=0.25;
		thrustTime=10;
		thrust=380;
		fuseDistance=50;
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		effectsMissileInit="";
		effectsMissile="MET_Rocket_effect_Green_fly";
	};
};