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
			"MET_Bantha_Morter",
			"MET_Bantha_IFV",
			"MET_Bantha_Transport",
			"MET_ATTE_Rommel"
		};
		weapons[] = {};
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
		logo = "Vehicles_16\16th_logo.paa";
	};
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
	class Aux212_Bantha_C_Unarmed;

	#include "base_vic.hpp"
	#include "custom_vic.hpp"
};

class CfgFunctions {
	class MET {
		class SpawnPads {
			file = "vehicles_16\spawnpads";
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
			file = "vehicles_16\resupply";
			class addCrates {};
		};
	};
};