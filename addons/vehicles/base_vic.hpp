
// Change for Forced
class MET_LAAT_Mk2: 3as_LAAT_MK2
{
	displayName = "[16th] LAAT MK2";
	author = "Denal";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Thunder";
	typicalcargo[] = 
	{
		"MET_P2_AR"
	};
	hiddenSelections[] = 
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] = 
	{
		"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_Base.paa",
		"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_wings_base.paa",
		"z\16th\addons\vehicles\vics\LAAT\Weapons_CO.paa",
		"z\16th\addons\vehicles\vics\LAAT\Weapon_Details_CO.paa",
		"z\16th\addons\vehicles\vics\LAAT\16_Laat_Interior.paa"
	};
	class EventHandlers: DefaultEventHandlers
	{
		init = "[_this select 0] call MET_fnc_addCrates;";
	};
};
class MET_LAAT_Mk2_Lamps: 3as_LAAT_Mk2Lights
{
	displayName = "[16th] LAAT MK2 (Lamps)";
	author = "Denal";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Thunder";
	typicalcargo[] = 
	{
		"MET_P2_AR"
	};
	hiddenSelections[] = 
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] = 
	{
		"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_Base.paa",
		"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_wings_base.paa",
		"z\16th\addons\vehicles\vics\LAAT\Weapons_CO.paa",
		"z\16th\addons\vehicles\vics\LAAT\Weapon_Details_CO.paa",
		"z\16th\addons\vehicles\vics\LAAT\16_Laat_Interior.paa"
	};
	class EventHandlers: DefaultEventHandlers
	{
		init = "[_this select 0] call MET_fnc_addCrates;";
	};
};
class MET_LAAT_MK1: 3as_LAAT_MK1
{
	displayName = "[16th] LAAT MK1";
	author = "Denal";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Thunder";
	hiddenSelections[] = 
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] = 
	{
		"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_Base.paa",
		"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_wings_base.paa",
		"z\16th\addons\vehicles\vics\LAAT\Weapons_CO.paa",
		"z\16th\addons\vehicles\vics\LAAT\Weapon_Details_CO.paa",
		"z\16th\addons\vehicles\vics\LAAT\16_Laat_Interior.paa"
	};
	class EventHandlers: DefaultEventHandlers
	{
		init = "[_this select 0] call MET_fnc_addCrates;";
	};
};
class MET_ARC_170: 3as_arc_170_base
{
	displayName = "[16th] ARC 170";
	author = "Denal";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Thunder";
	
	hiddenSelections[] = 
	{
		"camo1",
		"camo2",
		"guns"
	};
	hiddenSelectionsTextures[] = 
	{
		"3as\3AS_ARC170\Data\units\501st_Main_Frame_CO.paa",
		"3as\3AS_ARC170\Data\units\501st_Wings_Engines_CO.paa",
		"3as\3AS_ARC170\Data\units\501st_Guns_CO.paa"
	};
};
class MET_Z95_Base: 3AS_Z95_Republic
{
	displayName = "[16th] Z95";
	author = "Denal";
	scope = 2;
	scopeCurator = 2;
	crew = "MET_P2_AR";
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Thunder";
	
	hiddenSelections[] = 
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[] = 
	{
		"3AS\3AS_Z95\Data\blue_co.paa",
		"3AS\3AS_Z95\Data\cockpit_co.paa",
		"3AS\3AS_Z95\data\glass\glass_ca"
	};
};
class MET_Ywing_V1: 3AS_BTLB_Bomber
{
	displayName = "[16th] Y Wing ";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Thunder";
	hiddenselectionstextures[] = 
	{
		"3as\3AS_btlb\textures\chasis_shadow_co.paa",
		"3as\3AS_btlb\data\detail_co.paa",
		"3as\3AS_btlb\data\interior_co.paa"
	};
};
class MET_Tx130_Base_V1: 3as_saber_m1
{
	displayName = "[16th] Tx-130";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Reaper";
	hiddenSelectionsTextures[] = 
	{
		"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_hull_co.paa",
		"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_weapons_co.paa"
	};
};
class MET_Tx130_Super_v1: 3as_saber_super
{
	displayName = "[16th] Super Tx-130";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Reaper";
	hiddenSelectionsTextures[] = 
	{
		"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_hull_co.paa",
		"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_weapons_co.paa"
	};
};
class MET_Tx130_GL_v1: 3as_saber_m1G
{
	displayName = "[16th] Tx-130 GL";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Reaper";
	hiddenSelectionsTextures[] = 
	{
		"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_hull_co.paa",
		"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_weapons_co.paa"
	};
};
class MET_ATTE_Base: 3as_ATTE_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="[16th] AT-TE";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Reaper";
	hiddenselections[]= 
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		"camo11"
	};
	hiddenSelectionsTextures[] = 
	{
		"z\16th\addons\vehicles\vics\ATTE\16th_ATTE_Shell.paa",
		"3as\3as_ATTE\data\Textures\3as_ATTE_Cockpit_co.paa",
		"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
		"z\16th\addons\vehicles\vics\ATTE\16th_ATTE_Legs.paa",
		"3as\3as_ATTE\data\Textures\3as_ATTE_Glass_ca.paa",
		"3as\3as_ATTE\data\Textures\3as_atte_armor_co.paa"
	};
	armor = 650;
	class EventHandlers: DefaultEventHandlers
	{
		init = "[_this select 0] call MET_fnc_addCrates;";
	};
};
class MET_LAATCMK2: 3AS_LAATC
{
	displayName = "[16th] LAAT/C MK2";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Thunder";
	crew = "MET_P2_AR";
	hiddenSelectionsTextures[] = 
	{
		"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Hull_co.paa",
		"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Wings_co.paa",
		"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Top_co.paa",
		"z\16th\addons\vehicles\vics\LAAT_C\LAAT_C_Detail_Front_co.paa"
	};
	class TextureSources
	{
		class Republic
		{
			displayName="16th LAAT/C MK2";
			author="Charger";
			textures[]=
			{
				"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Hull_co.paa",
				"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Wings_co.paa",
				"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Top_co.paa",
				"z\16th\addons\vehicles\vics\LAAT_C\LAAT_C_Detail_Front_co.paa"
			};
		};
	};
};

// Infatry Banthas
class MET_Bantha_IFV: Aux212_Bantha_C_IFV
{
	scope=2;
	scopeCurator = 2;
	displayName="[16th] Bantha [IFV]";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Infantry";
	hiddenselections[]= 
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenselectionstextures[] = 
	{
		"z\16th\addons\vehicles\vics\Bantha\IFV\Bantha_C_IFV_Body_New_Co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
		"z\16th\addons\vehicles\vics\Bantha\IFV\Bantha_C_IFV_Turret_New_Co.paa"
	};
	crew="MET_P2_TRP2";
    typicalCargo[]={"MET_P2_TRP2"};

	armor = 350;

	#include "vics\Bantha\Bantha_StandardInventory.hpp"
	#include "vics\Bantha\Bantha_Intercoms.hpp"
};
class MET_Bantha_Transport: Aux212_Bantha_C_Unarmed
{
	scope=2;
	scopeCurator = 2;
	displayName="[16th] Bantha [Unarmed]";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Infantry";
	hiddenselections[]= 
	{
		"camo",
		"camo1"
	};
	hiddenselectionstextures[] = 
	{
		"z\16th\addons\vehicles\vics\Bantha\Unarmed\Bantha_C_Unarmed_Body_New_2_co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
	};
	crew="MET_P2_TRP2";
    typicalCargo[]={"MET_P2_TRP2"};

	armor = 350;

	#include "vics\Bantha\Bantha_StandardInventory.hpp"
	#include "vics\Bantha\Bantha_Intercoms.hpp"
};
class MET_Bantha_Assault: Aux212_Bantha_T_Assault
{
	scope=2;
	scopeCurator = 2;
	displayName="[16th] Bantha [Assault]";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Infantry";
	hiddenselections[]= 
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4"
	};
	hiddenselectionstextures[] = 
	{
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
		"z\16th\addons\vehicles\vics\Bantha\Assault\Bantha_T_Assault_Body_co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Base_Co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Main_Co.paa"
	};
	crew="MET_P2_TRP2";
    typicalCargo[]={"MET_P2_TRP2"};

	armor = 350;

	#include "vics\Bantha\Bantha_StandardInventory.hpp"
	#include "vics\Bantha\Bantha_Intercoms.hpp"
};

// Hammer Bantha
class MET_Bantha_Mortar: Aux212_Bantha_C_Mortar_Base
{
	scope=2;
	scopeCurator = 2;
	displayName="[16th] Bantha [Mortar]";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Hammer";
	hiddenselections[]= 
	{
		"camo",
		"camo1",
		"camo2"
	};
	hiddenselectionstextures[] = 
	{
		"z\16th\addons\vehicles\vics\Bantha\Mortar\Bantha_C_Mortar_Body_New_Co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
		"z\16th\addons\vehicles\vics\Bantha\Mortar\Bantha_C_Mortar_Turret_New_Co.paa"
	};
	crew="MET_P2_TRP2";
    //typicalCargo[]={"MET_P2_TRP2"};
	typicalCargo[]=
	{
		"B_soldier_F"
	};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			weapons[]=
			{
				"MET_SGM120_Twin_Mortar_120mm"
			};
			magazines[]=
			{
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_shells",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_guided",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_IR_Flare_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white",
				"MET_2Rnd_120mm_Mo_Smoke_white"
			};
			minElev=-5;
			maxElev=80;
			initElev=10;
			elevationMode=3;
			memoryPointGunnerOptics="gunnerview2";
			usePip=2;
			turretInfoType="RscWeaponRangeArtilleryAuto";
			gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
			class OpticsIn: Optics_Gunner_APC_01
			{
				class Wide: Wide
				{
				};
			};
			memoryPointGun="z_gunR_muzzle";
			gunBeg="z_gunR_muzzle";
			gunEnd="z_gunR_chamber";
			soundServo[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
				0.56234133,
				1,
				30
			};
			soundServoVertical[]=
			{
				"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
				0.56234133,
				1,
				30
			};
			/*class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					memoryPointGunnerOutOptics="";
					memoryPointGunnerOptics="commanderview";
					commanderUsesPilotView=1;
					LODTurnedIn=1100;
					LODTurnedOut=1;
					gunBeg="Usti hlavne3";
					gunEnd="Konec hlavne3";
					memoryPointGun="usti hlavne3";
					minElev=-25;
					maxElev=60;
					initElev=0;
					minTurn=-360;
					maxTurn=360;
					initTurn=0;
					minCamElev=-90;
					maxCamElev=90;
					weapons[]=
					{
						"MET_Bantha_Commander_Turret",
						"Laserdesignator_vehicle"
					};
					magazines[]=
					{
						"MET_DC15L_Heavy_mag",
						"MET_DC15L_Heavy_mag",
						"MET_DC15L_Heavy_mag",
						"MET_DC15L_Heavy_mag",
						"MET_DC15L_Heavy_mag",
						"MET_DC15L_Heavy_mag",
						"Laserbatteries"
					};
					soundServo[]=
					{
						"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
						1,
						1,
						30
					};
					soundServoVertical[]=
					{
						"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
						1,
						1,
						30
					};
					outGunnerMayFire=0;
					inGunnerMayFire=1;
					forceHideGunner=0;
					forceHideCommander=1;
					usePip=2;
					gunnerAction="driver_apcwheeled1_out";
					gunnerInAction="Driver_APC_Wheeled_01_in";
					gunnerGetInAction="GetInAMV_cargo";
					gunnerGetOutAction="GetOutLow";
					gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
					gunnerForceOptics=0;
					gunnerOutOpticsModel="";
					gunnerOpticsEffect[]={};
					isPersonTurret=1;
					personTurretAction="vehicle_turnout_0";
					minOutElev=-10;
					maxOutElev=15;
					initOutElev=0;
					minOutTurn=-45;
					maxOutTurn=90;
					initOutTurn=0;
					class ViewGunner: ViewGunner
					{
						initAngleX=-10;
					};
					class ViewOptics: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.31;
						minFov=0.034000002;
						maxFov=0.31;
						visionMode[]=
						{
							"Normal",
							"TI"
						};
						thermalMode[]={2,3};
					};
					class OpticsIn: Optics_Commander_01
					{
						class Wide: Wide
						{
						};
						class Medium: Medium
						{
						};
						class Narrow: Narrow
						{
						};
					};
					turretInfoType="RscOptics_MBT_01_commander";
					showCrewAim=1;
					startEngine=0;
					class HitPoints
					{
						class HitTurret
						{
							armor="0.2,";
							material=-1;
							armorComponent="hit_gun_turret";
							name="hit_gun_turret";
							passThrough=0;
							minimalHit=0.1;
							explosionShielding=0.5;
							radius=0.5;
							isTurret=1;
						};
						class HitGun
						{
							armor=0.2;
							material=-1;
							armorComponent="hit_commander_gun";
							name="hit_commander_gun_Point";
							passThrough=0;
							minimalHit=0.1;
							explosionShielding=0.5;
							radius=0.5;
							isGun=1;
						};
					};
					stabilizedInAxes=3;
					maxHorizontalRotSpeed=1.8;
					maxVerticalRotSpeed=1.8;
					gunnerHasFlares=1;
					viewGunnerInExternal=1;
				};
			};*/
		};
	};

	armor = 350;

	#include "vics\Bantha\Bantha_MortarInventory.hpp"
	#include "vics\Bantha\Bantha_Intercoms.hpp"
};

// Dragon Banthas
class MET_Bantha_MSV: Aux212_Bantha_E_MSV
{
	scope=2;
	scopeCurator = 2;
	displayName="[16th] Bantha [MSV]";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Dragon";
	hiddenselections[]= 
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		"camo6"
	};
	hiddenselectionstextures[] = 
	{
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
		"z\16th\addons\vehicles\vics\Bantha\MSV\Bantha_E_MSV_Body_co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Exterior_Co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Crane_Co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Crates_Co.paa",
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Crates_Co.paa"
	};
	crew="MET_P2_TRP2";
    typicalCargo[]={"MET_P2_TRP2"};

	armor = 350;

	#include "vics\Bantha\Bantha_MSVInventory.hpp"
	#include "vics\Bantha\Bantha_Intercoms.hpp"
};
class MET_Bantha_Cargo: Aux212_Bantha_T_Cargo
{
	scope=2;
	scopeCurator = 2;
	displayName="[16th] Bantha [Cargo]";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Dragon";
	hiddenselections[]= 
	{
		"camo1",
		"camo2"
	};
	hiddenselectionstextures[] = 
	{
		"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
		"z\16th\addons\vehicles\vics\Bantha\Cargo\Bantha_T_Cargo_Body_co.paa"
	};
	crew="MET_P2_TRP2";
    typicalCargo[]={"MET_P2_TRP2"};

	armor = 350;

	class TransportMagazines 
	{
		class _xx_MET_DC15S_mag {
			magazine = "MET_DC15S_mag";
			count = 15;
		};
		class _xx_MET_DC15A_mag {
			magazine = "MET_DC15A_mag";
			count = 15;
		};
		class _xx_SquadShieldMagazine {
			magazine = "SquadShieldMagazine";
			count = 2;
		};
		class _xx_MET_Weapons_Mags_Thermal_Detonator {
			magazine = "MET_Weapons_Mags_Thermal_Detonator";
			count = 5;
		};	
	};

	class TransportWeapons
	{
		class _xx_ACE_EntrenchingTool {
			weapon = "ACE_EntrenchingTool";
			count = 2;
		};
		class _xx_ToolKit {
			weapon = "ToolKit";
			count = 2;
		};
		class _xx_WBK_HeadLampItem_Narrow {
			weapon = "WBK_HeadLampItem_Narrow";
			count = 5;
		};
		class _xx_Aux212_Stun_Cuffs {
			weapon = "Aux212_Stun_Cuffs";
			count = 2;
		};
		


		class _xx_LFP_item_bacta_bandage {
			weapon = "LFP_item_bacta_bandage";
			count = 20;
		};
		class _xx_kat_suction {
			weapon = "kat_suction";
			count = 1;
		};
		class _xx_kat_AED {
			weapon = "kat_AED";
			count = 1;
		};
		class _xx_kat_larynx {
			weapon = "kat_larynx";
			count = 5;
		};
		class _xx_kat_chestSeal {
			weapon = "kat_chestSeal";
			count = 5;
		};
		class _xx_ACE_epinephrine {
			weapon = "ACE_epinephrine";
			count = 10;
		};
		class _xx_ACE_morphine {
			weapon = "ACE_morphine";
			count = 10;
		};
		class _xx_ACE_splint {
			weapon = "ACE_splint";
			count = 5;
		};
		class _xx_ACE_tourniquet {
			weapon = "ACE_tourniquet";
			count = 5;
		};
		class _xx_ACE_plasmaIV {
			weapon = "ACE_plasmaIV";
			count = 5;
		};
	};

	class TransportItems 
	{

	};

	#include "vics\Bantha\Bantha_Intercoms.hpp"

	ace_cargo_hasCargo = 1;
	ace_cargo_space = 6;
	crateList[] = {
        "Box_MET_Ammo",
        "Box_MET_Medical",
        "Box_MET_Rockets"
    };
	class EventHandlers: DefaultEventHandlers 
	{
        init = "_veh = _this select 0; if (local _veh) then { _veh spawn { private _veh = _this; private _cfg = configFile >> 'CfgVehicles' >> typeOf _veh; private _crateList = getArray (_cfg >> 'crateList'); { [_x, _veh] call ace_cargo_fnc_loadItem } forEach _crateList; }; };";
    };
};

// BARCs
class MET_BARC: 3AS_Barc_501
{
	displayName = "[16th] BARC Speeder";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Goff";
	crew = "3AS_Clone_ARF";

	brakeTorque = 10000;
	acceleration = 60;
	accelAidForceSpd = 8.0;
	maxSpeed = 180;
	normalSpeedForwardCoef = __EVAL(70/180);
	slowSpeedForwardCoef = __EVAL(30/180);

	class Wheels 
	{
		class LF 
		{
			boneName = "wheel_1_1_damper";
			boundary = "wheel_1_1_bound";
			center = "wheel_1_1_axis";
			dampingRate = 0.4;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {[0,1.75],[0.5,1.35],[1,1.2]};
			latStiffX = 25;
			latStiffY = 200;
			mass = 50;
			maxBrakeTorque = 3000;
			maxCompression = 0.5;
			maxDroop = 0.5;
			maxHandBrakeTorque = 165000;
			MOI = 18;
			side = "left";
			springDamperRate = 8125;
			springStrength = 62500;
			sprungMass = 625;
			steering = 1;
			suspForceAppPointOffset = "wheel_1_1_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_1_1_axis";
			width = "0.2";
		};

		class LR 
		{
			boneName = "wheel_1_2_damper";
			boundary = "wheel_1_2_bound";
			center = "wheel_1_2_axis";
			dampingRate = 0.4;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {[0,1.75],[0.5,1.35],[1,1.2]};
			latStiffX = 25;
			latStiffY = 200;
			mass = 50;
			maxBrakeTorque = 2000;
			maxCompression = 0.5;
			maxDroop = 0.5;
			maxHandBrakeTorque = 150000;
			MOI = 18;
			side = "left";
			springDamperRate = 8125;
			springStrength = 62500;
			sprungMass = 625;
			steering = 0;
			suspForceAppPointOffset = "wheel_1_2_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_1_2_axis";
			width = "0.2";
		};

		class RF 
		{
			boneName = "wheel_2_1_damper";
			boundary = "wheel_2_1_bound";
			center = "wheel_2_1_axis";
			dampingRate = 0.4;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {[0,1.75],[0.5,1.35],[1,1.2]};
			latStiffX = 25;
			latStiffY = 200;
			mass = 50;
			maxBrakeTorque = 3000;
			maxCompression = 0.5;
			maxDroop = 0.5;
			maxHandBrakeTorque = 165000;
			MOI = 18;
			side = "right";
			springDamperRate = 8125;
			springStrength = 62500;
			sprungMass = 625;
			steering = 1;
			suspForceAppPointOffset = "wheel_2_1_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_2_1_axis";
			width = "0.2";
		};

		class RR 
		{
			boneName = "wheel_2_2_damper";
			boundary = "wheel_2_2_bound";
			center = "wheel_2_2_axis";
			dampingRate = 0.4;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {[0,1.75],[0.5,1.35],[1,1.2]};
			latStiffX = 25;
			latStiffY = 200;
			mass = 50;
			maxBrakeTorque = 2000;
			maxCompression = 0.5;
			maxDroop = 0.5;
			maxHandBrakeTorque = 150000;
			MOI = 18;
			side = "right";
			springDamperRate = 8125;
			springStrength = 62500;
			sprungMass = 625;
			steering = 0;
			suspForceAppPointOffset = "wheel_2_2_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_2_2_axis";
			width = "0.2";
		};
	};

	hiddenselections[]= 
	{
		"camo"
	};
	hiddenSelectionsTextures[] = 
	{
		"3AS\3AS_LightVics\3AS_BARC\data\barc_501_co.paa"
	};

	class TransportMagazines 
	{
		class _xx_MET_Valken_mag {
			magazine = "MET_Valken_mag";
			count = 5;
		};
		class _xx_MET_DC15x_mag {
			magazine = "MET_DC15x_mag";
			count = 5;
		};
		class _xx_MET_DC15x_at_mag {
			magazine = "MET_DC15x_at_mag";
			count = 1;
		};
		class _xx_MET_blaster_pistol_battery {
			magazine = "MET_blaster_pistol_battery";
			count = 5;
		};

	};

	class TransportWeapons
	{
		class _xx_ACE_EntrenchingTool {
			weapon = "ACE_EntrenchingTool";
			count = 1;
		};
		class _xx_WBK_HeadLampItem_Narrow {
			weapon = "WBK_HeadLampItem_Narrow";
			count = 2;
		};		


		class _xx_LFP_item_bacta_bandage {
			weapon = "LFP_item_bacta_bandage";
			count = 20;
		};
		class _xx_kat_larynx {
			weapon = "kat_larynx";
			count = 2;
		};
		class _xx_kat_chestSeal {
			weapon = "kat_chestSeal";
			count = 2;
		};
		class _xx_ACE_epinephrine {
			weapon = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine {
			weapon = "ACE_morphine";
			count = 2;
		};
		class _xx_ACE_splint {
			weapon = "ACE_splint";
			count = 2;
		};
		class _xx_ACE_tourniquet {
			weapon = "ACE_tourniquet";
			count = 2;
		};
		class _xx_ACE_plasmaIV {
			weapon = "ACE_plasmaIV";
			count = 1;
		};
	};

	class TransportItems 
	{

	};
};
class MET_BARC_SideCar: 3AS_BarcSideCar
{
	displayName = "[16th] BARC Speeder w/ Sidecar";
	model = "3as\3AS_LightVics\3AS_BARC\model\barc_speeder_sidecar.p3d";
	scope = 2;
	scopeCurator = 2;
	faction = "metal_company";
	editorSubcategory = "metal_co_EdSubCat_Goff";
	crew = "3AS_Clone_ARF";
    typicalCargo[] = {"3AS_Clone_ARF"};

	brakeTorque = 10000;
	acceleration = 25;
	accelAidForceSpd = 8.0;
	maxSpeed = 180;
	normalSpeedForwardCoef = __EVAL(70/180);
	slowSpeedForwardCoef = __EVAL(30/180);

	class Turrets
	{
		class MainTurret: NewTurret
		{
			stabilizedInAxes=4;
			hasgunner=1;
			startEngine=0;
			body="MainTurret";
			gun="MainGun";
			animationSourceBody="mainTurret";
			animationSourceGun="mainGun";
			gunnerAction="BARC_Gunner";
			gunnerGetInAction="GetInLow";
			gunnerGetOutAction="GetOutLow";
			ejectDeadGunner=1;
			memoryPointGun[]=
			{
				"usti hlavne3"
			};
			outGunnerMayFire=1;
			inGunnerMayFire=1;
			gunBeg="usti hlavne3";
			gunEnd="konec hlavne3";
			weapons[]=
			{
				"MET_BARC_SideCar_Repeater"
			};
			magazines[]=
			{
				"MET_BARC_Mag"
			};
			turretFollowFreeLook=1;
			soundServoVertical[]=
			{
				"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",
				1.4125376,
				1,
				30
			};
			discreteDistance[]={100,200,300};
			discreteDistanceInitIndex=2;
			gunnerName="Gunner";
			proxytype="CPgunner";
			proxyIndex=1;
			gunnerRightHandAnimName="HandR";
			gunnerLeftHandAnimName="HandL";
			memoryPointGunnerOptics="usti hlavne3";
			gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
			maxHorizontalRotSpeed=1.8;
			maxVerticalRotSpeed=1.8;
			soundServo[]=
			{
				"A3\Sounds_F\vehicles\armor\noises\servo_best",
				"db-40",
				1,
				50
			};
			turretInfoType="RscOptics_crows";
			gunnerForceOptics=0;
			commanding=1;
			primaryGunner=1;
			primaryObserver=1;
			LODTurnedIn=1100;
			LODTurnedOut=1100;
			usePip=1;
			minTurn=-50;
			maxTurn=50;
			initTurn=0;
			minElev=-5;
			maxElev=20;
			initElev=0;
			class ViewOptics
			{
				initAngleX=0;
				minAngleX=-30;
				maxAngleX=30;
				initAngleY=0;
				minAngleY=-100;
				maxAngleY=100;
				initFov=0.30000001;
				minFov=0.07;
				maxFov=0.34999999;
			};
			class ViewGunner
			{
				initAngleX = 5;
				minAngleX = -65;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				initFov = 0.75;
				minFov = 0.25;
				maxFov = 1.1;
			};
		};
	};

	class Wheels 
	{
		class LF 
		{
			boneName = "wheel_1_1_damper";
			boundary = "wheel_1_1_bound";
			center = "wheel_1_1_axis";
			dampingRate = 0.4;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {[0,1.75],[0.5,1.35],[1,1.2]};
			latStiffX = 25;
			latStiffY = 200;
			mass = 50;
			maxBrakeTorque = 3000;
			maxCompression = 0.5;
			maxDroop = 0.5;
			maxHandBrakeTorque = 165000;
			MOI = 18;
			side = "left";
			springDamperRate = 8125;
			springStrength = 62500;
			sprungMass = 625;
			steering = 1;
			suspForceAppPointOffset = "wheel_1_1_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_1_1_axis";
			width = "0.2";
		};

		class LR 
		{
			boneName = "wheel_1_2_damper";
			boundary = "wheel_1_2_bound";
			center = "wheel_1_2_axis";
			dampingRate = 0.4;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {[0,1.75],[0.5,1.35],[1,1.2]};
			latStiffX = 25;
			latStiffY = 200;
			mass = 50;
			maxBrakeTorque = 3000;
			maxCompression = 0.5;
			maxDroop = 0.5;
			maxHandBrakeTorque = 150000;
			MOI = 18;
			side = "left";
			springDamperRate = 8125;
			springStrength = 62500;
			sprungMass = 625;
			steering = 0;
			suspForceAppPointOffset = "wheel_1_2_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_1_2_axis";
			width = "0.2";
		};

		class RF 
		{
			boneName = "wheel_2_1_damper";
			boundary = "wheel_2_1_bound";
			center = "wheel_2_1_axis";
			dampingRate = 0.4;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {[0,1.75],[0.5,1.35],[1,1.2]};
			latStiffX = 25;
			latStiffY = 200;
			mass = 50;
			maxBrakeTorque = 2000;
			maxCompression = 0.5;
			maxDroop = 0.5;
			maxHandBrakeTorque = 165000;
			MOI = 18;
			side = "right";
			springDamperRate = 8125;
			springStrength = 62500;
			sprungMass = 625;
			steering = 1;
			suspForceAppPointOffset = "wheel_2_1_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_2_1_axis";
			width = "0.2";
		};

		class RR 
		{
			boneName = "wheel_2_2_damper";
			boundary = "wheel_2_2_bound";
			center = "wheel_2_2_axis";
			dampingRate = 0.4;
			dampingRateDamaged = 1;
			dampingRateDestroyed = 1000;
			frictionVsSlipGraph[] = {[0,1.75],[0.5,1.35],[1,1.2]};
			latStiffX = 25;
			latStiffY = 200;
			mass = 50;
			maxBrakeTorque = 2000;
			maxCompression = 0.5;
			maxDroop = 0.5;
			maxHandBrakeTorque = 150000;
			MOI = 18;
			side = "right";
			springDamperRate = 8125;
			springStrength = 62500;
			sprungMass = 625;
			steering = 0;
			suspForceAppPointOffset = "wheel_2_2_axis";
			suspTravelDirection[] = {0,-1,0};
			tireForceAppPointOffset = "wheel_2_2_axis";
			width = "0.2";
		};
	};

	hiddenselections[]= 
	{
		"camo",
		"camo2"
	};
	hiddenSelectionsTextures[] = 
	{
		"3AS\3AS_LightVics\3AS_BARC\data\barc_501_co.paa",
		"3AS\3AS_LightVics\3AS_BARC\data\sidecar\GUNNER501_co.paa"
	};

	class TransportMagazines 
	{
		class _xx_MET_Valken_mag {
			magazine = "MET_Valken_mag";
			count = 5;
		};
		class _xx_MET_DC15x_mag {
			magazine = "MET_DC15x_mag";
			count = 5;
		};
		class _xx_MET_DC15x_at_mag {
			magazine = "MET_DC15x_at_mag";
			count = 1;
		};
		class _xx_MET_blaster_pistol_battery {
			magazine = "MET_blaster_pistol_battery";
			count = 5;
		};

	};

	class TransportWeapons
	{
		class _xx_ACE_EntrenchingTool {
			weapon = "ACE_EntrenchingTool";
			count = 1;
		};
		class _xx_WBK_HeadLampItem_Narrow {
			weapon = "WBK_HeadLampItem_Narrow";
			count = 2;
		};		


		class _xx_LFP_item_bacta_bandage {
			weapon = "LFP_item_bacta_bandage";
			count = 15;
		};
		class _xx_kat_larynx {
			weapon = "kat_larynx";
			count = 2;
		};
		class _xx_kat_chestSeal {
			weapon = "kat_chestSeal";
			count = 2;
		};
		class _xx_ACE_epinephrine {
			weapon = "ACE_epinephrine";
			count = 2;
		};
		class _xx_ACE_morphine {
			weapon = "ACE_morphine";
			count = 2;
		};
		class _xx_ACE_splint {
			weapon = "ACE_splint";
			count = 2;
		};
		class _xx_ACE_tourniquet {
			weapon = "ACE_tourniquet";
			count = 2;
		};
		class _xx_ACE_plasmaIV {
			weapon = "ACE_plasmaIV";
			count = 1;
		};
	};

	class TransportItems 
	{

	};
};

// ISPs
class MET_ISP: 3AS_ISP
{
	scope=2;
	scopeCurator=2;
	displayName="[16th] Swamp Speeder";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Infantry";
	hiddenselections[]= 
	{
		"camo1",
		"camo2"
	};
	hiddenselectionstextures[] = 
	{
		"z\16th\addons\vehicles\vics\ISP\ISP_Base_New_co.paa",
		"3as\3AS_LightVics\3AS_ISP\textures\ISP_Screens_co.paa",
	};
	crew="MET_P2_TRP2";
    typicalCargo[]={"MET_P2_TRP2"};

	#include "vics\Bantha\Bantha_StandardInventory.hpp"
	#include "vics\Bantha\Bantha_Intercoms.hpp"
};

class MET_ISP_Transport: 3AS_ISP_Transport
{
	scope=2;
	scopeCurator=2;
	displayName="[16th] Swamp Speeder [Unarmed]";
	faction="metal_company";
	editorSubcategory="metal_co_EdSubCat_Infantry";
	hiddenselections[]= 
	{
		"camo1",
		"camo2"
	};
	hiddenselectionstextures[] = 
	{
		"z\16th\addons\vehicles\vics\ISP\ISP_Base_New_Logo_co.paa",
		"3as\3AS_LightVics\3AS_ISP\textures\ISP_Screens_co.paa",
	};
	crew="MET_P2_TRP2";
    typicalCargo[]={"MET_P2_TRP2"};

	#include "vics\Bantha\Bantha_StandardInventory.hpp"
	#include "vics\Bantha\Bantha_Intercoms.hpp"
};