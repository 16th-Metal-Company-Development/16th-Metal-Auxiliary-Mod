#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class MET_MainBuild
	{
		units[] = 
		{
			"MET_LAAT_Mk2",
			"MET_LAAT_MK1",
			"MET_Oryx",
			"LAAT_I_248th",
			"MET_ARC_170",
			"MET_V_wing",
			"MET_Z95_Base",
			"MET_V19_V1",
			"MET_warden_v1",
			"MET_Warthog_MG",
			"MET_Warthog_Unarmed",
			"MET_Warthog_Rocket",
			"MET_Warthog_Trasnport",
			"MET_Warthog_Gauss",
			"MET_Ywing_V1",
			"MET_LAATC",
			"MET_LSLAAT",
			"MET_Tx130_Base_V1",
			"MET_Tx130_Super_v1",
			"MET_Tx130_GL_v1",
			"MET_ATAT",
			"MET_Republic_Transport",
			"MET_ATTE_Base",
			"MET_Juggernaut",
			"MET_Lightning_LAAT",
			"MET_LSLAAT_cerb",
			"MET_Z95_Defect",
			"MET_Z95_Monarch",
			"MET_Ywing_Director",
			"MET_ATTE_Nuke",
			"MET_Nuclass",
			"MET_ATAP_Base",
			"MET_Uber_LAAT",
			"MET_LAATCMK2",
			"MET_Bantha_C_IFV",
			"MET_Bantha_C_Unarmed",
			"MET_Bantha_C_MG",
			"MET_Bantha_C_Mortar",
			"MET_Bantha_C_AA",
			"MET_Bantha_E_MSV",
			"MET_Bantha_T_Cargo",
			"MET_Bantha_T_Assault",
			"MET_ATTE_Rommel",
			"MET_BARC",
			"MET_BARC_SideCar",
			"MET_ISP",
			"MET_ISP_Transport"
		};
		weapons[] = 
		{

		};
		magazines[] =
		{
			
		};
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies"
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class MET_Mod3 : Mod_Base
	{
		logo = "z\16th\addons\vehicles\16th_logo.paa";
	};
};
class DefaultEventHandlers;
class EventHandlers;
class Components;
class SensorTemplateIR;
class SensorTemplateNV;
class SensorTemplateLaser;
class SensorTemplateActiveRadar;
class SensorTemplatePassiveRadar;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class AnimationSources;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class cfgvehicles
{
	class O_APC_Tracked_02_cannon_F;
	class O_MBT_04_command_F;
	class B_MBT_01_TUSK_F;
	class I_APC_Wheeled_03_cannon_F;
	class DefaultEventHandlers;
	class HMCS;
	class 3as_LAAT_MK2;
	class 3as_LAAT_MK1;
	class 3as_Vwing_base;
	class 3as_arc_170_base;
	class 3AS_Z95_Republic;
	class 3as_saber_m1;
	class 3AS_LAATC;
	class 3as_saber_super;
	class 3as_saber_m1G;
	class ls_ground_barc;
	class 3as_LAAT_Mk2Lights;
	class ls_barc_base;
	class 3AS_Nuclass;
	class 3as_ATTE_Base;
	class 3AS_Jug;
	class 3AS_ATAT_Base;
	class 3as_V19_base;
	class 3as_Vulture_dynamicLoadout;
	class 3as_Vulture_dynamicLoadout_AA;
	class 3AS_BTLB_Bomber;
	class 3as_deka_static;
	class 3as_OG9Turret;
	class 3as_deka_static_sniper;
	class 3as_FlakCannon;
	class 3as_Particlecannon;
	class 3as_FieldCannon;
	class lsd_heli_laatc;
	class eventhandlers;
	class UserActionsM;
	class USAF_AC130U;
	class lsd_heli_laati;
	class lsd_heli_laati_transport;
	class lsd_heli_laati_ab;
	class 3AS_Patrol_LAAT_Republic;
	class JMSLLTE_TIEfighter_veh_F;
	class JMSLLTE_TIEinterceptor_veh_F;
	class JMSLLTE_TIEbomber_veh_F;
	class OPTRE_M12_LRV;
	class OPTRE_M12_FAV;
	class OPTRE_M12_FAV_APC;
	class OPTRE_M12A1_LRV;
	class OPTRE_M12G1_LRV;
	class OPTRE_M494;
	class HitPoints;
	class HitHull;
	class HitEngine;
	class HitFace;
	class HitNeck;
	class HitHead;
	class HitPelvis;
	class HitHands;
	class HitAbdomen;
	class HitDiaphragm;
	class HitChest;
	class HitBody;
	class HitArms;
	class HitLegs;
	class Incapacitated;
	class 3AS_Republic_Transport_01_Base;
	class B_APC_Tracked_01_CRV_F;
	class IRTurret;
	class NewTurret;
	class 3AS_nuclass_f;
	class 3AS_ATAP_Base;
	class Aux212_Bantha_C_IFV;
	class Aux212_Bantha_C_Mortar;
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Metal_Bantha_T_Assault_Turret
{
	class Wide: RCWSOptics
	{
		initFov="(36 / 120)";
		minFov="(36 / 120)";
		maxFov="(36 / 120)";
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
		gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
		gunnerOpticsEffect[]={};
	};
	class Medium: Wide
	{
		gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
		initFov="(150 * 0.05625 / 120)";
		minFov="(150 * 0.05625 / 120)";
		maxFov="(150 * 0.05625 / 120)";
	};
};
	class 3AS_Barc_501;
	class 3AS_BarcSideCar;
	class 3AS_ISP;
	class 3AS_ISP_Transport;

	#include "bantha.hpp"
	#include "base_vic.hpp"
	#include "custom_vic.hpp"
};

class CfgFunctions {
	class MET {
		class SpawnPads {
			file = "z\16th\addons\vehicles\spawnpads";
			class spawnCargo {};
			class spawnVehicle {};
			class addSpawnEntry {};
			class addCargoEntry {};
			class setPodDirection {};
			class addOrientPod {};
			class addAirSpawn {};
			class addCustomAirSpawn {};
			class addGroundSpawn {};
			class addPodSpawn {};
			class addCargoSpawn {};
			class addSupportPad {};
		};
		class Resupply {
			file = "z\16th\addons\vehicles\resupply";
			class addCrates {};
		};
	};
};

class CfgWeapons 
{
	class CannonCore;

	class MET_BARC_Repeater : CannonCore
	{
		scope = 1;
		displayName = "BARC Repeater";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] =
		{
			"MET_BARC_Mag"
		};
		canLock = 2;
		ballisticsComputer = 2;
		modes[] =
		{
			"manual",
			"close",
			"short",
			"medium",
			"far"
		};
		class manual : CannonCore
		{
			displayName = "BARC Repeater";
			autoFire = 1;
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"z\16th\addons\vehicles\vics\BARC\BARC_Repeater_SideCar",
					1.1220185,
					1,
					1100
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
				closure1[] = {};
				soundClosure[] =
				{
					"closure1",
					0.5
				};
			};
			reloadTime = 0.30000001;
			dispersion = 0.0022;
			soundContinuous = 0;
			soundBurst = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.0099999998;
			midRange = 2;
			midRangeProbab = 0.0099999998;
			maxRange = 3;
			maxRangeProbab = 0.0099999998;
			textureType = "fullAuto";
		};
		class close : manual
		{
			showToPlayer = 0;
			burst = 15;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.050000001;
			midRange = 200;
			midRangeProbab = 0.69999999;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short : close
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.69999999;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium : close
		{
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.69999999;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far : close
		{
			burst = 4;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.40000001;
			maxRange = 1500;
			maxRangeProbab = 0.0099999998;
		};
	};
	class MET_BARC_SideCar_Repeater : MET_BARC_Repeater
	{
		class manual : manual
		{
			reloadTime = 0.1;
			dispersion = 0.0011;
		};
	};
};