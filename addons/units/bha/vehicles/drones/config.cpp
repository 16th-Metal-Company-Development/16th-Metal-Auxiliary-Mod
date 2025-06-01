class CfgPatches
{
	class BHA_Drones
	{
		units[]=
		{
			"BHA_UGV_01_rcws_F"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3Data",
			"A3_Weapons_F",
			"A3_Armor_F_Beta",
			"A3_Armor_F_Beta_APC_Tracked_01",
			"A3_Armor_F_Beta_APC_Tracked_02",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"A3_Armor_F_Beta_APC_Wheeled_02",
			"A3_Armor_F_EPB",
			"A3_Armor_F_EPB_APC_Tracked_03",
			"A3_Armor_F_EPB_MBT_03",
			"A3_Armor_F_EPC",
			"A3_Armor_F_EPC_MBT_01",
			"A3_Armor_F_Gamma",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Armor_F_Gamma_MBT_02",
			"A3_Armor_F_Tank",
			"A3_Armor_F_Tank_AFV_Wheeled_01",
			"A3_Armor_F_Tank_LT_01",
			"A3_Armor_F_Tank_MBT_04",
			"A3_Armor_F_Enoch_APC_Tracked_03",
			"A3_Soft_F",
			"A3_Soft_F_MRAP_01",
			"A3_Soft_F_MRAP_02",
			"A3_Soft_F_Beta",
			"A3_Soft_F_Beta_MRAP_03",
			"A3_Soft_F_Offroad_01",
			"A3_Soft_F_Exp_Offroad_02",
			"A3_Soft_F_Quadbike_01",
			"A3_Air_F_Beta_Heli_Attack_01",
			"A3_Air_F_EPC",
			"A3_Air_F_EPC_Plane_CAS_01",
			"A3_Air_F_EPC_Plane_CAS_02",
			"A3_Air_F_Exp",
			"A3_Air_F_Exp_VTOL_01",
			"A3_Air_F_Jets_Plane_Fighter_01",
			"A3_Air_F_Jets_Plane_Fighter_02",
			"A3_Air_F_Gamma_Plane_Fighter_03",
			"A3_Air_F_Jets_Plane_Fighter_04",
			"A3_Static_F",
			"A3_Static_F_HMG_02",
			"A3_Static_F_Jets_AAA_System_01",
			"A3_Drones_F_Soft_F_Gamma_UGV_01",
			"A3_Soft_F_Exp_LSV_01",
			"A3_Soft_F_Exp_LSV_02"
		};
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class ViewOptics;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class Components;
	};
	class UGV_01_base_F: Car_F
	{
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
	};
	class B_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
	};
	class BHA_UGV_01_rcws_F: B_UGV_01_rcws_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Drones";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_UGV_01_rcws_F.jpg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Drones\Data\UGV_01_ext_black_co.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Drones\Data\UGV_01_int_black_co.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Drones\Data\Turret_black_co.paa"
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="BHA_HMG_127_UGV";
			};
			class muzzle_rot_GMG
			{
				source="ammorandom";
				weapon="GMG_40mm";
			};
			class muzzle_hide_MG
			{
				source="reload";
				weapon="BHA_HMG_127_UGV";
			};
			class muzzle_hide_GMG
			{
				source="reload";
				weapon="GMG_40mm";
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="OtocVez";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.40000001;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="OtocHlaven";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
				isCopilot=0;
				dontCreateAI=0;
				body="mainTurret";
				gun="mainGun";
				memoryPointGunnerOptics="PiP1_pos";
				memoryPointGun="machinegun";
				gunnerForceOptics=1;
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
				turretInfoType="RscOptics_UGV_gunner";
				weapons[]=
				{
					"BHA_HMG_127_UGV",
					"GMG_40mm"
				};
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Orange",
					"96Rnd_40mm_G_belt"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",
					0.31622776,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",
					0.31622776,
					1,
					30
				};
				minElev=-10;
				maxElev=60;
				forceHideGunner=1;
				outGunnerMayFire=1;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				stabilizedInAxes=3;
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					initFov=0.46669999;
					maxFov=0.46669999;
					minFov=0.035;
					directionStabilized=1;
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_flatground_4";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_GETIN_POS_PASSENGER";
				gunnerCompartments="Compartment2";
				proxyIndex=1;
				maxElev=45;
				minElev=-5;
				maxTurn=95;
				minTurn=-60;
				isPersonTurret=1;
			};
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
