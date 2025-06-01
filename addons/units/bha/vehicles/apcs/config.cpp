class CfgPatches
{
	class BHA_APCs
	{
		units[]=
		{
			"BHA_AFV_Wheeled_01_cannon_F"
		};
		weapons[]={};
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
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
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
class RCWSOptics;
class CfgVehicles
{
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
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
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
				class Components;
			};
		};
		class AnimationSources;
		class Components;
		class EventHandlers;
	};
	class AFV_Wheeled_01_base_F: Wheeled_APC_F
	{
	};
	class B_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
	{
	};
	class BHA_AFV_Wheeled_01_cannon_F: B_AFV_Wheeled_01_cannon_F
	{
		displayName="Rooikat (Black)";
		scope=2;
		side=2;
		faction="BHA_Units";
		editorSubCategory="BHA_APCs";
		crew="BHA_Acolytes_Acolyte";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_AFV_Wheeled_01_cannon_F.jpg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\APCs\data\afv_wheeled_01_ext1_co.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\APCs\data\afv_wheeled_01_ext2_co.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\APCs\data\afv_wheeled_01_wheel_co.paa",
					"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
					"\HDC_Vehicles\APC's\Gorgon\Data\cage_blk_CO.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1,
			"Sand",
			0,
			"Green",
			0
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						commanding=2;
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						weapons[]=
						{
							"SmokeLauncher",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"SmokeLauncherMag",
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
						gunnerAction="Commander_AFV_Wheeled_01_out";
						gunnerInAction="Commander_AFV_Wheeled_01_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerForceOptics=0;
						turretFollowFreeLook=2;
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerLeftHandAnimName="com_turret_control_y";
						gunnerRightHandAnimName="com_turret_control_y";
						usepip=2;
						LODOpticsIn=0;
						isPersonTurret=0;
						personTurretAction="vehicle_turnout_2";
						minOutElev=-30;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-165;
						maxOutTurn=30;
						initOutTurn=0;
						class ViewGunner: ViewGunner
						{
							initAngleX=-5;
							initAngleY=0;
							initFov=0.89999998;
							minFov=0.25;
							maxFov=1.25;
							minAngleX=-65;
							maxAngleX=85;
							minAngleY=-150;
							maxAngleY=150;
							minMoveX=-0.075000003;
							maxMoveX=0.075000003;
							minMoveY=-0.075000003;
							maxMoveY=0.075000003;
							minMoveZ=-0.075000003;
							maxMoveZ=0.1;
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
								"NVG",
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
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftCommander
							{
								class Components: components
								{
									class VehicleMissileDisplay
									{
										componentType="TransportFeedDisplayComponent";
										source="Missile";
									};
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={4000,2000,1000,8000};
										resource="RscCustomInfoSensors";
									};
								};
							};
							class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightCommander
							{
								defaultDisplay="SensorDisplay";
								class Components: components
								{
									class VehicleMissileDisplay
									{
										componentType="TransportFeedDisplayComponent";
										source="Missile";
									};
									class SensorDisplay
									{
										componentType="SensorsDisplayComponent";
										range[]={4000,2000,1000,8000};
										resource="RscCustomInfoSensors";
									};
								};
							};
						};
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.5;
								material=-1;
								armorComponent="hit_com_turret";
								name="hit_com_turret_point";
								visual="-";
								passThrough=0;
								minimalHit=0.050000001;
								explosionShielding=1;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="-";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isGun=1;
							};
						};
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						gunnerHasFlares=1;
						viewGunnerInExternal=1;
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
					};
				};
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"BHA_cannon_120mm",
					"BHA_MMG_02_coax"
				};
				magazines[]=
				{
					"12Rnd_120mm_APFSDS_shells_Tracer_Orange",
					"8Rnd_120mm_HE_shells_Tracer_Orange",
					"8Rnd_120mm_HEAT_MP_T_Orange",
					"BHA_200Rnd_338_Orange_Mag",
					"BHA_200Rnd_338_Orange_Mag",
					"BHA_200Rnd_338_Orange_Mag",
					"BHA_200Rnd_338_Orange_Mag",
					"4Rnd_120mm_LG_cannon_missiles"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.19952622,
					1,
					15
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.19952622,
					1,
					15
				};
				commanding=1;
				gunnerAction="Gunner_AFV_Wheeled_01_out";
				gunnerInAction="Gunner_AFV_Wheeled_01_in";
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control_y";
				gunnerRightHandAnimName="turret_control_y";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				startEngine=0;
				gunnerForceOptics=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh2";
				LODOpticsIn=0;
				usepip=2;
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_2";
				minElev=-10;
				initElev=0;
				maxElev=20;
				minOutElev=-40;
				maxOutElev=60;
				initOutElev=0;
				minOutTurn=-30;
				maxOutTurn=165;
				initOutTurn=0;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{22,-180},
						{22,180}
					};
					limitsArrayBottom[]=
					{
						{-2.9000001,-180},
						{-3,-161.68671},
						{-3.3683,-150.68671},
						{-8.3683004,-145.68671},
						{-10,0},
						{-8.7173004,138.63721},
						{-2.7172999,150.63721},
						{-3,161.68671},
						{-2.9000001,180}
					};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-5;
					initAngleY=0;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
					minAngleX=-65;
					maxAngleX=85;
					minAngleY=-150;
					maxAngleY=150;
					minMoveX=-0.075000003;
					maxMoveX=0.075000003;
					minMoveY=-0.075000003;
					maxMoveY=0.075000003;
					minMoveZ=-0.075000003;
					maxMoveZ=0.1;
				};
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
				};
				class OpticsIn: Optics_Gunner_APC_01
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
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				showCrewAim=2;
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,1000,8000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class VehicleMissileDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Missile";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={4000,2000,1000,8000};
								resource="RscCustomInfoSensors";
							};
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
						armor=1;
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
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="BHA_cannon_120mm";
			};
			class muzzle_rot_cannon
			{
				source="ammorandom";
				weapon="BHA_cannon_120mm";
			};
			class muzzle_rot_HMG
			{
				source="ammorandom";
				weapon="BHA_MMG_02_coax";
			};
			class cannon_120mm_revolving
			{
				source="revolving";
				weapon="BHA_cannon_120mm";
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitMainGun_src
			{
				source="Hit";
				hitpoint="HitGun";
				raw=1;
			};
			class HitTurret_src
			{
				source="Hit";
				hitpoint="HitTurret";
				raw=1;
			};
			class HitComTurret_src
			{
				source="Hit";
				hitpoint="HitComTurret";
				raw=1;
			};
			class HitSLAT_Left_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_1";
				raw=1;
			};
			class HitSLAT_Left_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_2";
				raw=1;
			};
			class HitSLAT_Left_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_3";
				raw=1;
			};
			class HitSLAT_Right_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_1";
				raw=1;
			};
			class HitSLAT_Right_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_2";
				raw=1;
			};
			class HitSLAT_Right_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_3";
				raw=1;
			};
			class HitSLAT_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_back";
				raw=1;
			};
			class HitSLAT_front_src
			{
				source="Hit";
				hitpoint="HitSLAT_front";
				raw=1;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetCannon
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class showCamonetTurret
			{
				displayName="$STR_A3_animationsources_showcamonetturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showCamonetCannon",
					1
				};
				forceAnimate2[]=
				{
					"showCamonetCannon",
					0
				};
				mass=-50;
			};
			class showSLATHull
			{
				displayName="$STR_A3_animationsources_showslathull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showCamonetHull",
			0,
			"showCamonetCannon",
			0,
			"showCamonetTurret",
			0,
			"showSLATHull",
			0
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
