class CfgPatches
{
	class BHA_IFVs
	{
		units[]=
		{
			"BHA_BM21_Black"
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
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class LandVehicle;
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
		class EventHandlers;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
	};
	class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
	{
	};
	class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F
	{
	};
	class BHA_BM21_Black: O_APC_Tracked_02_cannon_F
	{
		displayName="BM-21 Stalker (Black)";
		scope=2;
		side=2;
		faction="BHA_Units";
		editorSubCategory="BHA_IFVs";
		crew="BHA_Acolytes_Acolyte";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_BM21_Black.jpg";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"CamoNet",
			"CamoSlat"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\IFVs\Data\apc_tracked_02_ext_01_black_co.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\IFVs\Data\apc_tracked_02_ext_02_black_co.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\IFVs\Data\rcws30_black_co.paa",
			"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
			"\HDC_Vehicles\APC's\Gorgon\Data\cage_blk_CO.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
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
							"SmokeLauncher"
						};
						magazines[]=
						{
							"SmokeLauncherMag"
						};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							0.56234133,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							0.56234133,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="Commander_APC_tracked_02_cannon_F_out";
						gunnerInAction="Commander_APC_tracked_02_cannon_F_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_OPFOR_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						gunnerForceOptics=0;
						usePip=2;
						turretFollowFreeLook=2;
						LODOpticsIn=0;
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						minOutElev=-20;
						maxOutElev=40;
						initOutElev=0;
						minOutTurn=-150;
						maxOutTurn=120;
						initOutTurn=0;
						animationSourceStickX="com_turret_control_x";
						animationSourceStickY="com_turret_control_y";
						gunnerLeftHandAnimName="com_turret_control";
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
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
						};
						class OpticsIn: Optics_Commander_02
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
						turretInfoType="RscOptics_MBT_02_commander";
						showCrewAim=1;
						startEngine=0;
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.079999998;
								material=-1;
								armorComponent="hit_com_turret";
								name="hit_com_turret_point";
								visual="vezVelitele";
								passThrough=0.40000001;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.039999999;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.15000001;
								isGun=1;
							};
						};
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						viewGunnerInExternal=1;
					};
				};
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"BHA_30mm_CTWS",
					"BHA_LMG_coax_ext",
					"missiles_titan"
				};
				magazines[]=
				{
					"140Rnd_30mm_MP_shells_Tracer_Orange",
					"140Rnd_30mm_MP_shells_Tracer_Orange",
					"60Rnd_30mm_APFSDS_shells_Tracer_Orange",
					"60Rnd_30mm_APFSDS_shells_Tracer_Orange",
					"200Rnd_762x51_Belt_Orange",
					"200Rnd_762x51_Belt_Orange",
					"200Rnd_762x51_Belt_Orange",
					"200Rnd_762x51_Belt_Orange",
					"200Rnd_762x51_Belt_Orange",
					"200Rnd_762x51_Belt_Orange",
					"200Rnd_762x51_Belt_Orange",
					"200Rnd_762x51_Belt_Orange",
					"2Rnd_GAT_missiles_O",
					"2Rnd_GAT_missiles_O"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				initElev=1;
				minElev=-16;
				maxElev=36;
				minCamElev=-90;
				maxCamElev=90;
				gunnerAction="Gunner_APC_tracked_02_cannon_F_out";
				gunnerInAction="Gunner_APC_tracked_02_cannon_F_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				startEngine=0;
				stabilizedInAxes=3;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel="";
				gunnerForceOptics=0;
				usePip=1;
				LODOpticsIn=0;
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_2";
				minOutElev=-20;
				maxOutElev=40;
				initOutElev=0;
				minOutTurn=-120;
				maxOutTurn=150;
				initOutTurn=0;
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control";
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh2";
				memoryPointGun[]=
				{
					"usti hlavne3"
				};
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
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
				class OpticsIn: Optics_Gunner_MBT_02
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
				turretInfoType="RscOptics_MBT_02_gunner";
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="vez";
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
						visual="zbran";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="BHA_30mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="BHA_30mm_CTWS";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_titan";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class showTracks
			{
				displayName="$STR_A3_animationsources_showtrackshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showTracks",
					1
				};
				mass=-50;
			};
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagshull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
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
			"showTracks",
			0,
			"showCamonetHull",
			0,
			"showBags",
			0,
			"showSLATHull",
			0
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\IFVs\Data\apc_tracked_02_ext_01_black_co.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\IFVs\Data\apc_tracked_02_ext_02_black_co.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\IFVs\Data\rcws30_black_co.paa",
					"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa",
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
			"Hex",
			0
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=10;
			};
		};
		class TransportBackpacks
		{
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
