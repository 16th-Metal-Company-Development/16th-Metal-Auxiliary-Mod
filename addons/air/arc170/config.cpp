class CfgPatches
{
	class Metal_ARC170
	{
		units[] = 
		{
            "MET_ARC_170_test"
		};
		weapons[] = {};
		magazines[] ={};
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies",
            "metal_rep_ammo",
			"Metal_Air_Weapons",
			"Metal_Air_Magazines",
			"Metal_Air_Ammo",
            "3AS_ARC_170"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
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
class Optics_Gunner_MBT_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_03: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
		class NewTurret;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Eventhandlers;
		class ViewPilot;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class Turrets
		{
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
			};
			class HitEngine: HitHull
			{
			};
			class HitAvionics: HitHull
			{
			};
			class HitFuel: HitHull
			{
			};
			class HitLAileron: HitHull
			{
			};
			class HitRAileron: HitLAileron
			{
			};
			class HitLCRudder: HitHull
			{
			};
			class HitLCElevator: HitHull
			{
			};
			class HitRElevator: HitHull
			{
			};
		};
		class AnimationSources: AnimationSources
		{
		};
		class Components: Components
		{
		};
		class UserActions;
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent;
		};
	};
	class MET_ARC_170_Base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		author="$STR_3AS_Studio";
		class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="";
				turret[]={-2};
				class Bones
				{
					class HUDCenter
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class HorizonBankSource
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.2831001;
						max=6.2831001;
						minAngle=-360;
						maxAngle=360;
					};
					class HorizonDiveSource
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,2.5};
						maxPos[]={0.5,-1.5};
					};
					class VelocityVector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ForwardVector
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.234,0.23};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class SliderDiveSource
					{
						type="linear";
						source="horizonDive";
						min="RAD(-10)";
						max="RAD(10)";
						minPos[]={0.105,0.38};
						maxPos[]={0.105,0.54000002};
					};
					class SliderDiveSource30: SliderDiveSource
					{
						min="RAD(10)";
						max="RAD(30)";
						minPos[]={0,-0.039999999};
						maxPos[]=
						{
							0,
							"0)"
						};
					};
					class SliderDiveSource90: SliderDiveSource30
					{
						min="RAD(30)";
						max="RAD(90)";
						minPos[]={0,-0.039999999};
					};
					class SliderDiveSource30m: SliderDiveSource
					{
						min="RAD(-30)";
						max="RAD(-10)";
						minPos[]={0,0};
						maxPos[]={0,0.039999999};
					};
					class SliderDiveSource90m: SliderDiveSource30m
					{
						min="RAD(-90)";
						max="RAD(-30)";
						maxPos[]={0,0.039999999};
					};
					class SliderAltitudeSource
					{
						type="linear";
						source="altitudeAGL";
						sourceOffset=-3;
						min=0;
						max=1000;
						minPos[]={0.88499999,0.2};
						maxPos[]={0.88499999,0.375};
					};
					class GForceSource
					{
						type="linear";
						source="gmeter";
						sourceScale=0.15000001;
						min=-1;
						max=3;
						minPos[]={0.105,0.69999999};
						maxPos[]={0.105,0.86000001};
					};
					class SliderVSpeedSource
					{
						type="linear";
						source="vspeed";
						min=-15;
						max=15;
						minPos[]={0.79500002,0.60000002};
						maxPos[]={0.79500002,0.83999997};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ImpactPointRockets
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.565};
						pos10[]={0.73400003,0.79500002};
					};
					class WPPoint
					{
						type="vector";
						source="WPPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class rtdRPM1
					{
						type="linear";
						source="rpm";
						min=0.1;
						max=1;
						minPos[]={0,-0.075000003};
						maxPos[]={0,0};
					};
					class rtdRPM2: rtdRPM1
					{
						source="rpm";
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class ThrustVectoringRotation
					{
						type="rotational";
						source="vtolvectoring";
						sourceScale=100;
						center[]={0.059999999,0.145};
						min=0;
						max=100;
						minAngle=0;
						maxAngle=-90;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=0.46000001;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98290598;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class HorizonBankRotFull
					{
						type="rotational";
						source="horizonBank";
						center[]={0,0};
						min=-3.1415999;
						max=3.1415999;
						minAngle=-180;
						maxAngle=180;
						aspectRatio=1;
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1toview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
					};
					class Airport2: Airport1
					{
						source="airportCorner2toview";
					};
					class Airport3: Airport1
					{
						source="airportCorner3toview";
					};
					class Airport4: Airport1
					{
						source="airportCorner4toview";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.57020003,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.56900001};
					};
				};
				class Draw
				{
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="(1 - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37))*on";
					class VelocityLine
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HUDCenter",
								1
							},
							
							{
								"VelocityVector",
								1
							},
							{},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,0.0049145301},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0049999999,0},
								1
							},
							
							{
								"VelocityVector",
								{-0.0043299999,-0.0024572599},
								1
							},
							
							{
								"VelocityVector",
								{-0.0024999999,-0.0042559798},
								1
							},
							
							{
								"VelocityVector",
								{0,-0.0049145301},
								1
							},
							{}
						};
					};
					class Static
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0,0},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,-0.0099999998},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.088,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,-0.015},
								1
							},
							
							{
								"SliderDiveSource90",
								1,
								"SliderDiveSource30",
								1,
								"SliderDiveSource",
								1,
								"SliderDiveSource30m",
								1,
								"SliderDiveSource90m",
								1,
								{0.029999999,0.015},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.1,0.62},
								1
							},
							{},
							
							{
								{0.1,0.30000001},
								1
							},
							
							{
								{0.079999998,0.30000001},
								1
							},
							{},
							
							{
								{0.1,0.34},
								1
							},
							
							{
								{0.079999998,0.34},
								1
							},
							{},
							
							{
								{0.1,0.38},
								1
							},
							
							{
								{0.079999998,0.38},
								1
							},
							{},
							
							{
								{0.1,0.46000001},
								1
							},
							
							{
								{0.079999998,0.46000001},
								1
							},
							{},
							
							{
								{0.1,0.54000002},
								1
							},
							
							{
								{0.079999998,0.54000002},
								1
							},
							{},
							
							{
								{0.1,0.57999998},
								1
							},
							
							{
								{0.079999998,0.57999998},
								1
							},
							{},
							
							{
								{0.1,0.62},
								1
							},
							
							{
								{0.079999998,0.62},
								1
							},
							{},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0,0},
								1
							},
							
							{
								"GForceSource",
								{0.015,-0.0099999998},
								1
							},
							
							{
								"GForceSource",
								{0.015,0.0099999998},
								1
							},
							{},
							
							{
								{0.1,0.68800002},
								1
							},
							
							{
								{0.1,0.81999999},
								1
							},
							{},
							
							{
								{0.1,0.69999999},
								1
							},
							
							{
								{0.079999998,0.69999999},
								1
							},
							{},
							
							{
								{0.1,0.74000001},
								1
							},
							
							{
								{0.079999998,0.74000001},
								1
							},
							{},
							
							{
								{0.1,0.77999997},
								1
							},
							
							{
								{0.079999998,0.77999997},
								1
							},
							{},
							
							{
								{0.1,0.81999999},
								1
							},
							
							{
								{0.079999998,0.81999999},
								1
							},
							{},
							
							{
								{0.46000001,0.07},
								1
							},
							
							{
								{0.54000002,0.07},
								1
							},
							
							{
								{0.54000002,0.035},
								1
							},
							
							{
								{0.46000001,0.035},
								1
							},
							
							{
								{0.46000001,0.07},
								1
							},
							{},
							
							{
								{0.15000001,0.115},
								1
							},
							
							{
								{0.85000002,0.115},
								1
							},
							{},
							
							{
								{0,0.95999998},
								1
							},
							
							{
								{1.1,0.95999998},
								1
							},
							{},
							
							{
								{0.47999999,0.5},
								1
							},
							
							{
								{0.49000001,0.5},
								1
							},
							{},
							
							{
								{0.50999999,0.5},
								1
							},
							
							{
								{0.51999998,0.5},
								1
							},
							{},
							
							{
								{0.5,0.49000001},
								1
							},
							
							{
								{0.5,0.47999999},
								1
							},
							{},
							
							{
								{0.5,0.50999999},
								1
							},
							
							{
								{0.5,0.51999998},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{-0.02,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{-0.0099999998,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0.0099999998,0},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0.02,0},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,-0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,-0.02},
								1
							},
							{},
							
							{
								"WeaponAim",
								1,
								{0,0.0099999998},
								1
							},
							
							{
								"WeaponAim",
								1,
								{0,0.02},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.16500001,7.0890902e-009},
								1
							},
							
							{
								"HUDCenter",
								{-0.22,9.45212e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.16500001,-1.9339701e-009},
								1
							},
							
							{
								"HUDCenter",
								{0.22,-2.57863e-009},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{-0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.082500003,0.140452},
								1
							},
							
							{
								"HUDCenter",
								{0.096249998,0.16385999},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{-0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.142894,0.081089698},
								1
							},
							
							{
								"HUDCenter",
								{0.16671,0.094604701},
								1
							},
							{},
							
							{
								"HUDCenter",
								{-0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{-0.155564,0.152904},
								1
							},
							{},
							
							{
								"HUDCenter",
								{0.116673,0.114678},
								1
							},
							
							{
								"HUDCenter",
								{0.155563,0.152904},
								1
							},
							{},
							
							{
								{0.033333302,0.14866699},
								1
							},
							
							{
								{0.054000001,0.162},
								1
							},
							
							{
								{0.13500001,0.162},
								1
							},
							
							{
								{0.13500001,0.14866699},
								1
							},
							
							{
								{0.126333,0.139667},
								1
							},
							
							{
								{0.118,0.139667},
								1
							},
							
							{
								{0.093333296,0.129333},
								1
							},
							
							{
								{0.033333302,0.129333},
								1
							},
							
							{
								{0.015666701,0.111},
								1
							},
							
							{
								{0.0086666699,0.115333},
								1
							},
							
							{
								{0.0116667,0.13600001},
								1
							},
							{}
						};
					};
					class DiveNumber
					{
						type="text";
						source="horizondive";
						sourceScale=57.29578;
						sourceOffset=0;
						align="left";
						scale=1;
						pos[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.00-0.011"
							},
							1
						};
						right[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.12,
								"0.00-0.011"
							},
							1
						};
						down[]=
						{
							"SliderDiveSource90",
							1,
							"SliderDiveSource30",
							1,
							"SliderDiveSource",
							1,
							"SliderDiveSource30m",
							1,
							"SliderDiveSource90m",
							1,
							
							{
								0.085000001,
								"0.03-0.011"
							},
							1
						};
					};
					class VSpeedGroup
					{
						condition="on";
						class VSpeedNumber
						{
							type="text";
							source="vspeed";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.82+0.07",
									0.72799999
								},
								1
							};
							right[]=
							{
								
								{
									"0.86+0.07",
									0.72799999
								},
								1
							};
							down[]=
							{
								
								{
									"0.82+0.07",
									0.76300001
								},
								1
							};
						};
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.84899998,0.75999999},
									1
								},
								
								{
									{0.92900002,0.75999999},
									1
								},
								
								{
									{0.92900002,0.72500002},
									1
								},
								
								{
									{0.84899998,0.72500002},
									1
								},
								
								{
									{0.84899998,0.75999999},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupUp
					{
						condition="vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.71499997},
									1
								},
								
								{
									{0.90899998,0.71499997},
									1
								},
								
								{
									{0.889,0.69499999},
									1
								},
								
								{
									{0.86900002,0.71499997},
									1
								},
								{}
							};
						};
					};
					class VSpeedGroupDown
					{
						condition="-vspeed";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.86900002,0.76999998},
									1
								},
								
								{
									{0.90899998,0.76999998},
									1
								},
								
								{
									{0.889,0.79000002},
									1
								},
								
								{
									{0.86900002,0.76999998},
									1
								},
								{}
							};
						};
					};
					class AltGroup
					{
						condition="1000 - altitudeAGL";
						class Static
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.0089999996,0},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,-0.0099999998},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.024,0.0099999998},
									1
								},
								{},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.093000002,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,-0.015},
									1
								},
								
								{
									"SliderAltitudeSource",
									{0.035,0.015},
									1
								},
								{},
								
								{
									{0.889,0.2},
									1
								},
								
								{
									{0.889,0.375},
									1
								},
								{},
								
								{
									{0.87900001,0.2},
									1
								},
								
								{
									{0.89899999,0.2},
									1
								},
								{},
								
								{
									{0.87900001,0.375},
									1
								},
								
								{
									{0.89899999,0.375},
									1
								},
								{}
							};
						};
						class AltNumber
						{
							type="text";
							source="altitudeAGL";
							sourceScale=1;
							sourceOffset=-3;
							align="left";
							scale=1;
							pos[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.00-0.011"
								},
								1
							};
							right[]=
							{
								"SliderAltitudeSource",
								
								{
									0.11,
									"0.00-0.011"
								},
								1
							};
							down[]=
							{
								"SliderAltitudeSource",
								
								{
									0.085000001,
									"0.03-0.011"
								},
								1
							};
						};
						class AltStatic50
						{
							type="text";
							source="static";
							text="1000";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.88499999,0.171},
								1
							};
							right[]=
							{
								{0.92500001,0.171},
								1
							};
							down[]=
							{
								{0.88499999,0.20100001},
								1
							};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]=
						{
							{0.13,0.22},
							1
						};
						down[]=
						{
							{0.13,0.25999999},
							1
						};
						right[]=
						{
							{0.2,0.22},
							1
						};
					};
					class Angle_90
					{
						type="text";
						source="static";
						text="90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.285},
							1
						};
						right[]=
						{
							{0.11,0.285},
							1
						};
						down[]=
						{
							{0.07,0.315},
							1
						};
					};
					class Angle_30
					{
						type="text";
						source="static";
						text="30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.32499999},
							1
						};
						right[]=
						{
							{0.11,0.32499999},
							1
						};
						down[]=
						{
							{0.07,0.35499999},
							1
						};
					};
					class Angle_10
					{
						type="text";
						source="static";
						text="10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.36500001},
							1
						};
						right[]=
						{
							{0.11,0.36500001},
							1
						};
						down[]=
						{
							{0.07,0.39500001},
							1
						};
					};
					class Angle_0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.44499999},
							1
						};
						right[]=
						{
							{0.11,0.44499999},
							1
						};
						down[]=
						{
							{0.07,0.47499999},
							1
						};
					};
					class Angle_10m
					{
						type="text";
						source="static";
						text="-10";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.52499998},
							1
						};
						right[]=
						{
							{0.11,0.52499998},
							1
						};
						down[]=
						{
							{0.07,0.55500001},
							1
						};
					};
					class Angle_30m
					{
						type="text";
						source="static";
						text="-30";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.565},
							1
						};
						right[]=
						{
							{0.11,0.565},
							1
						};
						down[]=
						{
							{0.07,0.59500003},
							1
						};
					};
					class Angle_90m
					{
						type="text";
						source="static";
						text="-90";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.60500002},
							1
						};
						right[]=
						{
							{0.11,0.60500002},
							1
						};
						down[]=
						{
							{0.07,0.63499999},
							1
						};
					};
					class GMeterStatic3
					{
						type="text";
						source="static";
						text="3";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.68300003},
							1
						};
						right[]=
						{
							{0.11,0.68300003},
							1
						};
						down[]=
						{
							{0.07,0.713},
							1
						};
					};
					class GMeterStatic2
					{
						type="text";
						source="static";
						text="2";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.72299999},
							1
						};
						right[]=
						{
							{0.11,0.72299999},
							1
						};
						down[]=
						{
							{0.07,0.75300002},
							1
						};
					};
					class GMeterStatic1
					{
						type="text";
						source="static";
						text="1";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.76300001},
							1
						};
						right[]=
						{
							{0.11,0.76300001},
							1
						};
						down[]=
						{
							{0.07,0.79299998},
							1
						};
					};
					class GMeterStatic0
					{
						type="text";
						source="static";
						text="0";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.07,0.80299997},
							1
						};
						right[]=
						{
							{0.11,0.80299997},
							1
						};
						down[]=
						{
							{0.07,0.833},
							1
						};
					};
					class CollectiveNumber
					{
						type="text";
						source="throttle";
						sourceScale=100;
						align="left";
						scale=1;
						pos[]=
						{
							{0.889,0.46000001},
							1
						};
						right[]=
						{
							{0.93900001,0.46000001},
							1
						};
						down[]=
						{
							{0.889,0.495},
							1
						};
					};
					class CollectiveText
					{
						type="text";
						source="static";
						text="%";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.89899999,0.46000001},
							1
						};
						right[]=
						{
							{0.949,0.46000001},
							1
						};
						down[]=
						{
							{0.89899999,0.495},
							1
						};
					};
					class ThrustVectoring
					{
						condition="1+vtolvectoring";
						class VectorigNumber
						{
							type="text";
							source="vtolvectoring";
							sourceScale=90;
							align="left";
							scale=1;
							pos[]=
							{
								{0.102,0.14},
								1
							};
							right[]=
							{
								{0.127,0.14},
								1
							};
							down[]=
							{
								{0.102,0.155},
								1
							};
						};
						class VectoringArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,-0.0060000001},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.044,0},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,0.0060000001},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.034000002,-0.0060000001},
									1
								},
								{},
								
								{
									"ThrustVectoringRotation",
									{-0.044,0},
									1
								},
								
								{
									"ThrustVectoringRotation",
									{-0.0040000002,0},
									1
								},
								{}
							};
						};
					};
					class ThrustVectoringAuto
					{
						condition="-vtolvectoring";
						class VectorigNumber
						{
							type="text";
							source="static";
							sourceScale=1;
							text="AUTO";
							align="left";
							scale=1;
							pos[]=
							{
								{0.103,0.14},
								1
							};
							right[]=
							{
								{0.123,0.14},
								1
							};
							down[]=
							{
								{0.103,0.155},
								1
							};
						};
					};
					class EngineRPM
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.88999999,0.5},
								1
							},
							
							{
								{0.88999999,0.66000003},
								1
							},
							{},
							
							{
								{0.92000002,0.5},
								1
							},
							
							{
								{0.86000001,0.5},
								1
							},
							{},
							
							{
								{0.92000002,0.66000003},
								1
							},
							
							{
								{0.86000001,0.66000003},
								1
							},
							{},
							
							{
								{0.91000003,0.54000002},
								1
							},
							
							{
								{0.87,0.54000002},
								1
							},
							{},
							
							{
								{0.91000003,0.57999998},
								1
							},
							
							{
								{0.87,0.57999998},
								1
							},
							{},
							
							{
								{0.91000003,0.62},
								1
							},
							
							{
								{0.87,0.62},
								1
							},
							{}
						};
					};
					class EngineRPMLines
					{
						type="line";
						width=5;
						points[]=
						{
							
							{
								
								{
									"0.90+0.01",
									0.66000003
								},
								1
							},
							
							{
								"rtdrpm1",
								
								{
									"0.90+0.01",
									0.66000003
								},
								1
							},
							{},
							
							{
								
								{
									"0.86+0.01",
									0.66000003
								},
								1
							},
							
							{
								"rtdrpm2",
								
								{
									"0.86+0.01",
									0.66000003
								},
								1
							},
							{},
							{}
						};
					};
					class RPM60Text
					{
						type="text";
						source="static";
						text="60";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92500001,0.64499998},
							1
						};
						right[]=
						{
							{0.95499998,0.64499998},
							1
						};
						down[]=
						{
							{0.92500001,0.67000002},
							1
						};
					};
					class RPM80Text
					{
						type="text";
						source="static";
						text="80";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92500001,0.60500002},
							1
						};
						right[]=
						{
							{0.95499998,0.60500002},
							1
						};
						down[]=
						{
							{0.92500001,0.63},
							1
						};
					};
					class RPM100Text
					{
						type="text";
						source="static";
						text="100";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92500001,0.565},
							1
						};
						right[]=
						{
							{0.95499998,0.565},
							1
						};
						down[]=
						{
							{0.92500001,0.58999997},
							1
						};
					};
					class RPM120Text
					{
						type="text";
						source="static";
						text="120";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.92500001,0.52499998},
							1
						};
						right[]=
						{
							{0.95499998,0.52499998},
							1
						};
						down[]=
						{
							{0.92500001,0.55000001},
							1
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							
							{
								"0.80-0.302",
								"0.082-0.043"
							},
							1
						};
						right[]=
						{
							
							{
								"0.84-0.302",
								"0.082-0.043"
							},
							1
						};
						down[]=
						{
							
							{
								"0.80-0.302",
								"0.117-0.043"
							},
							1
						};
					};
					class HeadingRotationArrow
					{
						condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.51999998,0.079999998},
									1
								},
								
								{
									{0.5,0.11},
									1
								},
								
								{
									{0.47999999,0.079999998},
									1
								},
								
								{
									{0.51999998,0.079999998},
									1
								},
								{}
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.001"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.001"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.001"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.47799999,0.075000003},
									1
								},
								
								{
									{0.52200001,0.075000003},
									1
								},
								
								{
									{0.55199999,0.094999999},
									1
								},
								
								{
									{0.52200001,0.115},
									1
								},
								
								{
									{0.47799999,0.115},
									1
								},
								
								{
									{0.44800001,0.094999999},
									1
								},
								
								{
									{0.47799999,0.075000003},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						horizontal=1;
						source="heading";
						sourceScale=0.1;
						sourceoffset=0;
						width=3;
						NeverEatSeaWeed=1;
						top=0.15000001;
						center=0.5;
						bottom=0.85000002;
						lineXleft=0.114;
						lineYright=0.12;
						lineXleftMajor=0.114;
						lineYrightMajor=0.13;
						majorLineEach=2;
						numberEach=6;
						step=0.5;
						stepSize=0.034482799;
						align="center";
						scale=1;
						pos[]={0.15000001,0.13};
						right[]={0.20999999,0.13};
						down[]={0.15000001,0.17};
					};
					class HorizonBanking
					{
						type="line";
						width=3;
						clipTL[]={0,0.1};
						clipBR[]={1,0.89999998};
						points[]=
						{
							
							{
								"HorizonBankSource",
								{0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{0.050000001,0},
								1
							},
							{},
							
							{
								"HorizonBankSource",
								{-0.16,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.1,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.085000001,-0.015},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.07,0},
								1
							},
							
							{
								"HorizonBankSource",
								{-0.050000001,0},
								1
							},
							{}
						};
					};
					class CoordXNumber
					{
						type="text";
						source="coordinateX";
						sourceScale=0.0099999998;
						sourceLength=3;
						sourceOffset=-0.5;
						align="right";
						scale=1;
						pos[]=
						{
							{0.80900002,0.96100003},
							1
						};
						right[]=
						{
							{0.85900003,0.96100003},
							1
						};
						down[]=
						{
							{0.80900002,0.99599999},
							1
						};
					};
					class CoordYNumber: CoordXNumber
					{
						source="coordinateY";
						pos[]=
						{
							{0.89899999,0.96100003},
							1
						};
						right[]=
						{
							{0.949,0.96100003},
							1
						};
						down[]=
						{
							{0.89899999,0.99599999},
							1
						};
					};
					class Time: CoordXNumber
					{
						source="time";
						text="%X";
						align="left";
						pos[]=
						{
							{0.60500002,0.96100003},
							1
						};
						right[]=
						{
							{0.65499997,0.96100003},
							1
						};
						down[]=
						{
							{0.60500002,0.99599999},
							1
						};
					};
					class CurrentWeapon
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.889},
							1
						};
						right[]=
						{
							{1.029,0.889},
							1
						};
						down[]=
						{
							{0.97899997,0.92400002},
							1
						};
					};
					class CurrentAmmo: CurrentWeapon
					{
						source="ammo";
						align="left";
						pos[]=
						{
							{0.97899997,0.921},
							1
						};
						right[]=
						{
							{1.029,0.921},
							1
						};
						down[]=
						{
							{0.97899997,0.95599997},
							1
						};
					};
					class CoordXText
					{
						type="text";
						source="static";
						text="GRID:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.65499997,0.96100003},
							1
						};
						right[]=
						{
							{0.70499998,0.96100003},
							1
						};
						down[]=
						{
							{0.65499997,0.99599999},
							1
						};
					};
					class CoordYText
					{
						type="text";
						source="static";
						text="";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.875,0.96100003},
							1
						};
						right[]=
						{
							{0.92500001,0.96100003},
							1
						};
						down[]=
						{
							{0.875,0.99599999},
							1
						};
					};
					class LightsGroup
					{
						condition="lights";
						class LightsText
						{
							type="text";
							source="static";
							text="LIGHT";
							align="left";
							scale=1;
							pos[]=
							{
								{0.149,0.96100003},
								1
							};
							right[]=
							{
								{0.199,0.96100003},
								1
							};
							down[]=
							{
								{0.149,0.99599999},
								1
							};
						};
					};
					class CollisionLights
					{
						condition="collisionlights";
						class CollisionLightsText
						{
							type="text";
							source="static";
							text="COLL";
							align="left";
							scale=1;
							pos[]=
							{
								{0.30899999,0.96100003},
								1
							};
							right[]=
							{
								{0.359,0.96100003},
								1
							};
							down[]=
							{
								{0.30899999,0.99599999},
								1
							};
						};
					};
					class WeaponsLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="LOCKING";
							align="center";
							scale=1;
							pos[]=
							{
								{0.215,0.87970102},
								1
							};
							right[]=
							{
								{0.27500001,0.87970102},
								1
							};
							down[]=
							{
								{0.215,0.928846},
								1
							};
						};
					};
					class TargetInfo
					{
						condition="missilelocked";
						class TargetLockedText
						{
							type="text";
							source="static";
							text="TARGET ACQUIRED";
							scale=1;
							sourceScale=1;
							align="center";
							pos[]=
							{
								{0.19499999,0.85900003},
								1
							};
							right[]=
							{
								{0.235,0.85900003},
								1
							};
							down[]=
							{
								{0.19499999,0.88999999},
								1
							};
						};
						class TimeOfFlightText
						{
							type="text";
							source="static";
							text="TOF:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.127+0.13",
									0.889
								},
								1
							};
							right[]=
							{
								{0.30199999,0.889},
								1
							};
							down[]=
							{
								
								{
									"0.127+0.13",
									0.92400002
								},
								1
							};
						};
						class DistanceText
						{
							type="text";
							source="static";
							text="DISTANCE:";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.125+0.13",
									0.921
								},
								1
							};
							right[]=
							{
								{0.30000001,0.921},
								1
							};
							down[]=
							{
								
								{
									"0.125+0.13",
									0.95599997
								},
								1
							};
						};
						class TOF_source: CurrentWeapon
						{
							source="missileflighttime";
							align="right";
							pos[]=
							{
								{0.26899999,0.889},
								1
							};
							right[]=
							{
								{0.31900001,0.889},
								1
							};
							down[]=
							{
								{0.26899999,0.92400002},
								1
							};
						};
						class TargetDistance: CurrentWeapon
						{
							source="targetDist";
							sourceLength=0;
							sourcePrecision=1;
							sourceScale=0.001;
							align="right";
							pos[]=
							{
								{0.26899999,0.921},
								1
							};
							right[]=
							{
								{0.31900001,0.921},
								1
							};
							down[]=
							{
								{0.26899999,0.95599997},
								1
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21623901},
								1
							};
							right[]=
							{
								{0.54500002,0.21623901},
								1
							};
							down[]=
							{
								{0.48500001,0.265385},
								1
							};
						};
					};
					class GearGroup
					{
						type="group";
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.889},
								1
							};
							right[]=
							{
								{0.54000002,0.889},
								1
							};
							down[]=
							{
								{0.5,0.92400002},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								points[]=
								{
									
									{
										"ILS_W",
										{-0.23999999,0},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.23999999,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{-0.23999999,0.0235897},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0176923},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0176923},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{0,0.0235897},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0176923},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0176923},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.23999999,-0.0235897},
										1
									},
									
									{
										"ILS_W",
										{0.23999999,0.0235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.235897},
										1
									},
									
									{
										"ILS_H",
										{0,0.235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,-0.235897},
										1
									},
									
									{
										"ILS_H",
										{0.024,-0.235897},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,-0.117949},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,-0.117949},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0},
										1
									},
									
									{
										"ILS_H",
										{0.024,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.017999999,0.117949},
										1
									},
									
									{
										"ILS_H",
										{0.017999999,0.117949},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.024,0.235897},
										1
									},
									
									{
										"ILS_H",
										{0.024,0.235897},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class MGun
					{
						condition="-2+mgun*ImpactDistance";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0275214},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.028000001},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class Rockets
					{
						condition="-2+rocket*ImpactDistance";
						class Cross
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0393162},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.02,-0.024},
									1
								},
								
								{
									"ImpactPoint",
									{0.025,-0.030999999},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0020000001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0020000001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Circle
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0275214},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0344017},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.035},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.028000001},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0294872},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.029544,-0.0051189698},
									1
								},
								
								{
									"ImpactPoint",
									{-0.028191,-0.0100846},
									1
								},
								
								{
									"ImpactPoint",
									{-0.025979999,-0.0147436},
									1
								},
								
								{
									"ImpactPoint",
									{-0.022980001,-0.0189544},
									1
								},
								
								{
									"ImpactPoint",
									{-0.019284001,-0.022587201},
									1
								},
								
								{
									"ImpactPoint",
									{-0.015,-0.0255359},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01026,-0.0277091},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0052080001,-0.029038999},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0294872},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.079999998},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,-0.079999998},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,-0.039999999},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0982906},
									1
								},
								
								{
									"ImpactPoint",
									{0.01736,-0.096796602},
									1
								},
								
								{
									"ImpactPoint",
									{0.034200002,-0.0923637},
									1
								},
								
								{
									"ImpactPoint",
									{0.050000001,-0.085119702},
									1
								},
								
								{
									"ImpactPoint",
									{0.064280003,-0.075290598},
									1
								},
								
								{
									"ImpactPoint",
									{0.0766,-0.063181199},
									1
								},
								
								{
									"ImpactPoint",
									{0.086599998,-0.0491453},
									1
								},
								
								{
									"ImpactPoint",
									{0.093970001,-0.033615399},
									1
								},
								
								{
									"ImpactPoint",
									{0.098480001,-0.0170632},
									1
								},
								
								{
									"ImpactPoint",
									{0.1,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.098480001,0.0170632},
									1
								},
								
								{
									"ImpactPoint",
									{0.093970001,0.033615399},
									1
								},
								
								{
									"ImpactPoint",
									{0.086599998,0.0491453},
									1
								},
								
								{
									"ImpactPoint",
									{0.0766,0.063181199},
									1
								},
								
								{
									"ImpactPoint",
									{0.064280003,0.075290598},
									1
								},
								
								{
									"ImpactPoint",
									{0.050000001,0.085119702},
									1
								},
								
								{
									"ImpactPoint",
									{0.034200002,0.0923637},
									1
								},
								
								{
									"ImpactPoint",
									{0.01736,0.096796602},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0982906},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01736,0.096796602},
									1
								},
								
								{
									"ImpactPoint",
									{-0.034200002,0.0923637},
									1
								},
								
								{
									"ImpactPoint",
									{-0.050000001,0.085119702},
									1
								},
								
								{
									"ImpactPoint",
									{-0.064280003,0.075290598},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0766,0.063181199},
									1
								},
								
								{
									"ImpactPoint",
									{-0.086599998,0.0491453},
									1
								},
								
								{
									"ImpactPoint",
									{-0.093970001,0.033615399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.098480001,0.0170632},
									1
								},
								
								{
									"ImpactPoint",
									{-0.1,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.098480001,-0.0170632},
									1
								},
								
								{
									"ImpactPoint",
									{-0.093970001,-0.033615399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.086599998,-0.0491453},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0766,-0.063181199},
									1
								},
								
								{
									"ImpactPoint",
									{-0.064280003,-0.075290598},
									1
								},
								
								{
									"ImpactPoint",
									{-0.050000001,-0.085119702},
									1
								},
								
								{
									"ImpactPoint",
									{-0.034200002,-0.0923637},
									1
								},
								
								{
									"ImpactPoint",
									{-0.01736,-0.096796602},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.0982906},
									1
								},
								{},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.0196581},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,-0.0137607},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									
									{
										"+ 0.02",
										0
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0.014,0.0137607},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0.0196581},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,0.0137607},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									
									{
										"- 0.02",
										0
									},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{-0.014,-0.0137607},
									1
								},
								
								{
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,-0.0196581},
									1
								},
								{},
								
								{
									"VelocityVector",
									0.001,
									"ImpactPoint",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								},
								
								{
									"VelocityVector",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="left";
							scale=1;
							pos[]=
							{
								{0.935,0.79713702},
								1
							};
							right[]=
							{
								{0.97500002,0.79713702},
								1
							};
							down[]=
							{
								{0.935,0.83448702},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text=">";
							align="center";
							scale=2;
							pos[]=
							{
								{0.94999999,0.79713702},
								1
							};
							right[]=
							{
								{0.97000003,0.79713702},
								1
							};
							down[]=
							{
								{0.94999999,0.83448702},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.95999998,0.79713702},
								1
							};
							right[]=
							{
								{1,0.79713702},
								1
							};
							down[]=
							{
								{0.95999998,0.83448702},
								1
							};
						};
						class WP
						{
							width=1;
							type="line";
							points[]=
							{
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0.015,
										-0.035
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										0,
										0
									},
									1
								},
								
								{
									"wppoint",
									1,
									
									{
										"HorizonBankRotFull",
										-0.015,
										-0.035
									},
									1
								}
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.73400003,0.73000002};
						width=2;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,-0.0019658101},
								1
							},
							
							{
								{0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,0.0019658101},
								1
							},
							
							{
								{-0.0020000001,-0.0019658101},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.0196581},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.0196581},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.0294872},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.0294872},
									1
								}
							};
						};
					};
				};
			};
			class HMD_CMPilot: AirplaneHUD
			{
				turret[]={-1};
				class Draw
				{
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="on - (cameraHeadingDiffY<=-28) + (abs(cameraHeadingDiffX)>=37)";
					class CMName
					{
						type="text";
						source="cmweapon";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.86900002,0.84899998},
							1
						};
						right[]=
						{
							{0.91900003,0.84899998},
							1
						};
						down[]=
						{
							{0.86900002,0.884},
							1
						};
					};
					class CMCount
					{
						type="text";
						source="cmammo";
						sourceScale=1;
						align="left";
						scale=1;
						pos[]=
						{
							{0.97899997,0.84899998},
							1
						};
						right[]=
						{
							{1.029,0.84899998},
							1
						};
						down[]=
						{
							{0.97899997,0.884},
							1
						};
					};
				};
			};
		};
		USAF_TGP_Inbuilt=1;
		class USAF_Afterburner
		{
			force=700;
			maxSpeed=2200;
			throttleEngage=0.89999998;
			fuelUsage=0.0024999999;
			/*animShow[]=
			{
				"afterburner_show"
			};
			animStretch="afterburner_stretch";*/
		};
		irTarget=1;
		irTargetSize=0.94999999;
		radarTarget=1;
		radarTargetSize=0.89999998;
		allowTabLock=1;
		driverCanSee=31;
		canUseScanners=1;
		showAllTargets=2;
		memoryPointGun[]=
		{
			"Usti hlavne L",
			"Usti hlavne R"
		};
		simulation="airplaneX";
		vtol=4;
		scope=1;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		model="3as\3AS_ARC170\model\ARC_170.p3d";
		displayName="[16th] ARC-170X";
		crew="JLTS_Clone_P2_DC15S";
		icon="3as\3AS_ARC170\Data\ui\ARC_top_ca.paa";
		picture="3as\3AS_ARC170\Data\ui\ARC_side_ca.paa";
		selectionFireAnim="zasleh";
		side=1;
		driverCanEject=1;
		cargoCanEject=0;
		laserScanner=1;
		faction="BLU_F";
		weapons[]=
		{
			"MET_ARC_Medium_Cannon",
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"MET_ARC_MediumMag",
			"MET_ARC_MediumMag",
			"120Rnd_CMFlare_Chaff_Magazine",
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine"
		};
		memoryPointDriverOptics="PilotCamera_1";
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=4;
				explosionShielding=3;
				name="HitHull";
				passThrough=1;
				visual="Hit_Hull";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
				material=-1;
			};
			class HitEngine: HitHull
			{
				armor=3;
				explosionShielding=4;
				name="HitEngine";
				passThrough=1;
				visual="Hit_Engine";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
			class HitFuel: HitHull
			{
				armor=4.5;
				explosionShielding=4;
				name="HitFuel";
				passThrough=0.80000001;
				visual="";
				radius=0.30000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitLAileron: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLAileron";
				passThrough=0.30000001;
				visual="Hit_AileronL";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="HitLAileron_Link";
			};
			class HitRAileron: HitLAileron
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRAileron";
				passThrough=0.30000001;
				visual="Hit_AileronR";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="HitRAileron_Link";
			};
			class HitLCRudder: HitHull
			{
				armor=2;
				explosionShielding=3;
				name="HitLCRudder";
				passThrough=0.30000001;
				visual="Hit_RudderC";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
			class HitLCElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCElevator";
				passThrough=0.30000001;
				visual="Hit_ElevatorL";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
			class HitRElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRElevator";
				passThrough=0.30000001;
				visual="Hit_ElevatorR";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
		};
		class RenderTargets
		{
			class PIPGunner
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="gunnerview2";
					pointDirection="gunnerview2_dir";
					renderQuality=2;
					renderVisionMode=0;
					turret[]={1};
					fov=0.20345201;
				};
				BBoxes[]=
				{
					"PIP_GUN_TL",
					"PIP_GUN_TR",
					"PIP_GUN_BL",
					"PIP_GUN_BR"
				};
			};
			class PIPGunnerRear
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="gunnerview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.20345201;
				};
				BBoxes[]=
				{
					"PIP_GUN2_TL",
					"PIP_GUN2_TR",
					"PIP_GUN2_BL",
					"PIP_GUN2_BR"
				};
			};
		};
		class Turrets
		{
			class Reargun: NewTurret
			{
				isCopilot=0;
				canEject=1;
				startEngine=0;
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
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=0;
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerinaction="Plane_Fighter_03_pilot";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				memorypointgunneroptics="gunnerview";
				memorypointsgetingunner="pos gunner";
				memorypointsgetingunnerdir="pos gunner dir";
				stabilizedInAxes=3;
				gunneraction="Plane_Fighter_03_pilot";
				gunnerforceoptics=0;
				gunnerName="Rear Gunner";
				proxyIndex=3;
				proxytype="CPGunner";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				animationsourcebody="MainTurret";
				animationsourcegun="Maingun";
				animationsourcehatch="";
				body="MainTurret";
				gun="Maingun";
				memoryPointGun="konec hlavne b";
				gunBeg="usti hlavne b";
				gunEnd="konec hlavne b";
				selectionFireAnim="zasleh3";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				precisegetinout=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[]=
				{
					"MET_ARC_Medium_Cannon_Rear",
					"CMFlareLauncher"
				};
				magazines[]=
				{
					"MET_ARC_CannonMag",
					"240Rnd_CMFlare_Chaff_Magazine"
				};
				minElev=-5;
				maxturn=270;
				minturn=90;
				maxElev=60;
				initTurn=180;
				initElev=0;
				enableManualFire=0;
				LODTurnedOut=1000;
				LODTurnedIn=1000;
				elevationMode=0;
				turretFollowFreeLook=2;
				class HitPoints
				{
				};
			};
			class LaserPilot: Reargun
			{
				commanding=-1;
				memorypointgunneroptics="gunnerview2";
				gunnerForceOptics=0;
				enableManualFire=1;
				primaryGunner=0;
				body="Mainturret2";
				gun="maingun2";
				animationSourceBody="mainturret2";
				animationSourceGun="maingun2";
				weapons[]=
				{
					"MET_ARC_Medium_Cannon_Rear"
				};
				magazines[]=
				{
					"MET_ARC_CannonMag",
					"MET_ARC_CannonMag"
				};
				gunnerName="Co-pilot";
				gunBeg="usti hlavne b2";
				gunEnd="konec hlavne b2";
				memoryPointGun="konec hlavne b2";
				selectionFireAnim="zasleh4";
				usepip=2;
				class OpticsIn: Optics_Gunner_MBT_03
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
				proxyIndex=2;
				minElev=-90;
				maxturn=240;
				minturn=120;
				maxElev=0;
				initTurn=180;
				initElev=-10;
				maxHorizontalRotSpeed=3;
				maxVerticalRotSpeed=3;
				class HitPoints
				{
				};
			};
		};
		class Eventhandlers: Eventhandlers
		{
			postInit="if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
			fired="_this call BIS_Effects_EH_Fired; _this execVM '\USAF_missilebox\scr\fall.sqf'; _this spawn USAF_GPS_DIALOG_fnc_firedGPS; _this spawn USAF_EXT_FUEL_fnc_auxilary_fueltank_control;";
		};
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"guns"
		};
		hiddenselectionstextures[]=
		{
			"",
			"",
			"",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3AS_ARC170\Data\Main_Frame.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"3as\3AS_ARC170\Data\Wings.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"3as\3AS_ARC170\Data\Guns.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_destruct.rvmat"
			};
		};
		insideSoundCoef=0.2;
		destrType="DestructWreck";
		driveraction="Plane_Fighter_03_pilot";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=50;
						angleRangeVertical=37;
						maxTrackableSpeed=100;
						componentType="IRSensorComponent";
						typeRecognitionDistance=2000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=26;
						angleRangeVertical=20;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="pilotCameraRotY";
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=12000;
							maxRange=12000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=150;
						angleRangeVertical=90;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=4000;
						angleRangeHorizontal=45;
						angleRangeVertical=45;
						groundNoiseDistanceCoef=0.2;
					};
					class AntiRadiationSensorComponent: SensorTemplateAntiRadiation
					{
						class AirTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						maxTrackableATL=100;
						maxTrackableSpeed=60;
						angleRangeHorizontal=70;
						angleRangeVertical=60;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
					};
					class NVSensorComponent: SensorTemplateNV
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoAirborneMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={16000,8000,4000,2000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class TransportPylonsComponent
			{
				UIPicture="3as\3AS_ARC170\data\ui\pylon_arc.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"B_BIM9X_DUAL_RAIL",
							"B_AGM65_RAIL",
							"REP_AGM_RAIL",
							"B_MISSILE_PYLON",
							"B_USAF_AIM9M_Pylon",
							"B_AIM9M_DUAL_RAIL",
							"B_USAF_AIM9X_Pylon",
							"B_AIM9X_DUAL_RAIL",
							"B_USAF_AIM_120_Pylon",
							"B_AIM120_DUAL_RAIL",
							"B_BOMB_GBU12",
							"B_BOMB_2GBU12_BRU57",
							"B_BOMB_3GBU12",
							"B_BOMB_GBU24",
							"B_BOMB_GBU28",
							"B_BOMB_GBU31",
							"B_BOMB_GBU32",
							"B_BOMB_GBU38",
							"B_BOMB_2GBU38",
							"B_BOMB_GBU49",
							"B_BOMB_2GBU49",
							"B_BOMB_GBU54",
							"B_BOMB_2GBU54",
							"B_BOMB_GBU39",
							"B_BOMB_GBU53",
							"B_BOMB_CBU87",
							"B_BOMB_CBU89",
							"B_BOMB_CBU97",
							"B_BOMB_CBU103",
							"B_BOMB_CBU104",
							"B_BOMB_CBU105",
							"B_BOMB_MK20",
							"B_BOMB_MK77",
							"B_BOMB_MK82",
							"B_BOMB_MK82SE",
							"B_BOMB_MK84",
							"B_BOMB_AGM154A",
							"B_BOMB_2AGM154A",
							"B_BOMB_AGM154B",
							"B_BOMB_2AGM154B",
							"B_BOMB_AGM154C",
							"B_BOMB_2AGM154C",
							"AGM_158",
							"B_USAF_AARGMER",
							"B_USAF_AARGMER_2"
						};
						attachment="PylonRack_Missile_BIM9X_x2";
						priority=10;
						maxweight=5000;
						UIposition[]={0.5,0.25};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"ARC_AGM_PYLON",
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON",
							"B_USAF_AIM9M_Pylon",
							"B_AIM9M_DUAL_RAIL",
							"B_USAF_AIM9X_Pylon",
							"B_AIM9X_DUAL_RAIL",
							"B_USAF_AIM_120_Pylon",
							"B_AIM120_DUAL_RAIL",
							"B_BOMB_GBU12",
							"B_BOMB_2GBU12_BRU57",
							"B_BOMB_3GBU12",
							"B_BOMB_GBU24",
							"B_BOMB_GBU28",
							"B_BOMB_GBU31",
							"B_BOMB_GBU32",
							"B_BOMB_GBU38",
							"B_BOMB_2GBU38",
							"B_BOMB_GBU49",
							"B_BOMB_2GBU49",
							"B_BOMB_GBU54",
							"B_BOMB_2GBU54",
							"B_BOMB_GBU39",
							"B_BOMB_GBU53",
							"B_BOMB_CBU87",
							"B_BOMB_CBU89",
							"B_BOMB_CBU97",
							"B_BOMB_CBU103",
							"B_BOMB_CBU104",
							"B_BOMB_CBU105",
							"B_BOMB_MK20",
							"B_BOMB_MK77",
							"B_BOMB_MK82",
							"B_BOMB_MK82SE",
							"B_BOMB_MK84",
							"B_BOMB_AGM154A",
							"B_BOMB_2AGM154A",
							"B_BOMB_AGM154B",
							"B_BOMB_2AGM154B",
							"B_BOMB_AGM154C",
							"B_BOMB_2AGM154C",
							"AGM_158",
							"B_USAF_AARGMER",
							"B_USAF_AARGMER_2"
						};
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						priority=9;
						maxweight=5000;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"B_AMRAAM_D_RAIL",
							"B_AGM65_RAIL",
							"B_AGM65_DUAL_RAIL",
							"B_HARM_RAIL",
							"ARC_AGM_PYLON",
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON",
							"B_USAF_AIM9M_Pylon",
							"B_AIM9M_DUAL_RAIL",
							"B_USAF_AIM9X_Pylon",
							"B_AIM9X_DUAL_RAIL",
							"B_USAF_AIM_120_Pylon",
							"B_AIM120_DUAL_RAIL",
							"B_BOMB_GBU12",
							"B_BOMB_2GBU12_BRU57",
							"B_BOMB_3GBU12",
							"B_BOMB_GBU24",
							"B_BOMB_GBU28",
							"B_BOMB_GBU31",
							"B_BOMB_GBU32",
							"B_BOMB_GBU38",
							"B_BOMB_2GBU38",
							"B_BOMB_GBU49",
							"B_BOMB_2GBU49",
							"B_BOMB_GBU54",
							"B_BOMB_2GBU54",
							"B_BOMB_GBU39",
							"B_BOMB_GBU53",
							"B_BOMB_CBU87",
							"B_BOMB_CBU89",
							"B_BOMB_CBU97",
							"B_BOMB_CBU103",
							"B_BOMB_CBU104",
							"B_BOMB_CBU105",
							"B_BOMB_MK20",
							"B_BOMB_MK77",
							"B_BOMB_MK82",
							"B_BOMB_MK82SE",
							"B_BOMB_MK84",
							"B_BOMB_AGM154A",
							"B_BOMB_2AGM154A",
							"B_BOMB_AGM154B",
							"B_BOMB_2AGM154B",
							"B_BOMB_AGM154C",
							"B_BOMB_2AGM154C",
							"AGM_158",
							"B_USAF_AARGMER",
							"B_USAF_AARGMER_2"
						};
						attachment="PylonRack_Missile_AMRAAM_D_x1";
						priority=7;
						maxweight=5000;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons6: pylons5
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=5;
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"3AS_PylonRack_ARC_6Rnd_Missile_AGM",
							"3AS_PylonRack_ARC_6Rnd_Missile_AGM",
							"PylonRack_Missile_AMRAAM_D_x1",
							"PylonRack_Missile_AMRAAM_D_x1"
						};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_Missile_BIM9X_x1",
							"PylonRack_Missile_BIM9X_x1",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"3AS_PylonRack_ARC_6Rnd_Missile_AGM",
							"3AS_PylonRack_ARC_6Rnd_Missile_AGM"
						};
					};
				};
			};
		};
		class USAF_ServiceMenu
		{
			enabled=1;
			loadOutCustomization=1;
			openBays=1;
			addBaysToggle=1;
			cameraPos[]=
			{
				{0.382,-0.248,-0.46599999},
				370.04599,
				9.7089996,
				25.368
			};
			animationToggles[]={};
		};
		USAF_TGP_Allowed=1;
		USAF_TGP_MFDPIP=14;
		USAF_TGP_MFDPIP_OVERLAY=17;
		driveoncomponent[]={};
		camouflage=8;
		audible=10;
		accuracy=0.2;
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		mFact=0;
		tBody=0;
		radartype=4;
		lockdetectionsystem="2 + 8 + 4";
		incommingmissliedetectionsystem=16;
		acceleration=200;
		maxSpeed=615;
		landingAoa="6 * 3.1415 / 180";
		landingSpeed=215;
		stallSpeed=50;
		stallWarningTreshold=0.1;
		armor=175;
		armorStructured=1;
		draconicTorqueYCoef[]={0,1.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		draconicForceYCoef=6;
		envelope[]={0.1,0.19,0.28999999,1.6,1.9,2.5899999,4,5.3000002,6.9099998,8.75,9.8000002,9.5,9.3999996,8.6000004,8.1999998,8};
		draconicForceXCoef=6;
		draconicForceZCoef=6.5;
		draconicTorqueXCoef=2.0999999;
		angleOfIndicence=0.079999998;
		airFriction0[]={75,50,12};
		airFriction1[]={75,50,12};
		airFriction2[]={75,50,12};
		altNoForce=13000;
		altFullForce=10000;
		elevatorCoef[]={0.2,0.38999999,0.50999999,0.60000002,0.68000001,0.75,0.80000001,0.85000002,0.89999998,0.74000001,0.30000001};
		elevatorSensitivity=0.89999998;
		elevatorControlsSensitivityCoef=4;
		aileronCoef[]={0.5,0.69999999,1,1,1.2,1.15,1.1};
		aileronSensitivity=2;
		aileronControlsSensitivityCoef=3;
		rudderCoef[]={1.6,2,2,2.9000001,2.8,2,1};
		rudderInfluence=0.89999998;
		rudderControlsSensitivityCoef=6;
		thrustCoef[]={1.8,1.9,1.95,2,2.5,3,3.5,2.5,2,1.7,1.5,1.1,1,1,1};
		irScanRangeMin=10;
		irScanRangeMax=10000;
		irScanToEyeFactor=8;
		fuelCapacity=2000;
		wheelSteeringSensitivity=1.5;
		maxOmega=2000;
		airBrake=90;
		airBrakeFrictionCoef=75;
		flaps=1;
		flapsFrictionCoef=0.31999999;
		gearsUpFrictionCoef=0.60000002;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0066};
		airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
		memoryPointLRocket="P Raketa";
		memoryPointRRocket="L Raketa";
		type="VAir";
		cost=10000000;
		threat[]={0.2,1,0.89999998};
		VTOLPitchInfluence=1;
		VTOLRollInfluence=10;
		VTOLYawInfluence=12;
		explosionShielding=5.25;
		class camShakeGForce
		{
			power=1;
			frequency=20;
			distance=0;
			minSpeed=1;
		};
		minGForce=0.30000001;
		maxGForce=10;
		gForceShakeAttenuation=0.5;
		class AnimationSources: AnimationSources
		{
			class SFoil
			{
				source="user";
				animPeriod=2.7;
				initPhase=1;
			};
			class Muzzle_Flash
			{
				source="ammorandom";
				weapon="MET_ARC_Medium_Cannon";
			};
			class Muzzle_Flash2
			{
				source="ammorandom";
				weapon="MET_ARC_Medium_Cannon_Rear";
			};
			class Muzzle_Flash3
			{
				source="ammorandom";
				weapon="MET_ARC_Medium_Cannon_Rear";
			};
			class recoil_source
			{
				source="reload";
				weapon="MET_ARC_Medium_Cannon_Rear";
			};
		};
		class UserActions: UserActions
		{
			class deploySfoils
			{
				displayName="Fold S-Foils";
				position="action";
				radius=10;
				onlyForPlayer=0;
				condition="(this animationSourcePhase ""SFoil"" == 0) AND (currentPilot this isEqualTo player) AND (alive this)";
				statement="this animateSource [""SFoil"",1]; playSound3D [""z\MET\addons\air\arc170\sounds\sfoils.ogg"", this];";
				//statement="this animateSource [""SFoil"",1]";
			};
			class undeploySfoils: deploySfoils
			{
				displayName="Deploy S-Foils";
				condition="(this animationSourcePhase ""SFoil"" == 1) AND (currentPilot this isEqualTo player) AND (alive this)";
				statement="this animateSource [""SFoil"",0]; playSound3D [""z\MET\addons\air\arc170\sounds\sfoils.ogg"", this];";
				//statement="this animateSource [""SFoil"",0]";
			};
			/*class ALX
			{
				displayName="<t color='#FF0077'>Activate Cloaking</t>";
				onlyforplayer=0;
				position="pilotcontrol";
				priority=-1000;
				radius=25;
				showWindow=0;
				condition="driver this == player && {[false] call USAF_ECM_fnc_alx}";
				statement="[true] spawn USAF_ECM_fnc_alx";
			};*/
			class ECM
			{
				displayName="(EWS) Electronic Warfare System";
				onlyforplayer=0;
				position="pilotcontrol";
				radius=25;
				showWindow=0;
				condition="driver this == player && {(isEngineOn this)}";
				statement="[this] spawn USAF_ECM_fnc_ECM_INIT;";
			};
			class USAF_GPS_targeting_system
			{
				displayName="GPS/INS Guidance System";
				shortcut="User3";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				condition="(driver this == player) && {[this] call USAF_GPS_DIALOG_fnc_isGPSDialogAvailable}";
				statement="createDialog 'USAF_GPS_DIALOG'";
			};
			class USAF_HOB_Setting
			{
				displayName="Configure Height of Burst";
				shortcut="";
				position="pilotcontrol";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
				condition="(driver this == player) && {[this] call USAF_HOB_DIALOG_fnc_isHOBDialogAvailable}";
				statement="createDialog 'USAF_HOB_DIALOG'";
			};
		};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName="WingVortices";
				position="body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName="WingVortices";
				position="body_vapour_R_E";
			};
		};
		class Exhausts
		{
			class Exhaust_main
			{
				position="exhaust1";
				direction="Exhaust1_dir";
				effect="ExhaustsEffectPlane";
			};
			class Exhaust_main2
			{
				position="exhaust2";
				direction="Exhaust2_dir";
				effect="ExhaustsEffectPlane";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={7000,7500,10000,1};
				ambient[]={100,100,100};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light";
				selection="";
				innerAngle=20;
				outerAngle=60;
				coneFadeCoef=10;
				intensity=50;
				useFlare=1;
				dayLight=0;
				FlareSize=4;
				size=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=4;
					hardLimitStart=150;
					hardLimitEnd=300;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[]={0.80000001,0,0};
				ambient[]={0.079999998,0,0};
				intensity=75;
				name="PositionLight_red_1_pos";
				drawLight=1;
				drawLightSize=0.15000001;
				drawLightCenterSize=0.039999999;
				activeLight=0;
				blinking=0;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class PositionGreen: PositionRed
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="PositionLight_green_1_pos";
			};
			class PositionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="PositionLight_white_1_pos";
				drawLightSize=0.2;
			};
			class CollisionRed: PositionRed
			{
				color[]={0.89999998,0.15000001,0.1};
				ambient[]={0.090000004,0.015,0.0099999998};
				name="CollisionLight_red_1_pos";
				blinking=1;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=0;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
			};
			class CollisionWhite: PositionRed
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="CollisionLight_white_1_pos";
				blinking=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=0;
				drawLightSize=0.2;
				drawLightCenterSize=0.039999999;
			};
		};
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin",
			"db0",
			1,
			40
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			"db0",
			1,
			40
		};
		soundDammage[]=
		{
			"",
			"db-5",
			1
		};
		soundEngineOnInt[]=
		{
			"z\MET\addons\Air\arc170\sounds\engine_start.ogg",
			"db-0",
			1
		};
		soundEngineOnExt[]=
		{
			"z\MET\addons\Air\arc170\sounds\engine_start.ogg",
			"db5",
			1,
			500
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int",
			"db-0",
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext",
			"db5",
			1,
			500
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			"db-20",
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			"db-20",
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			"db-2",
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			"db-2",
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			"db-4",
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			"db-4",
			1,
			100
		};
		class scrubLandInt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\air\noises\wheelsInt",
				"db0",
				1,
				100
			};
			frequency=1;
			volume="(scrubLand factor[0.01, 0.20])";
		};
		class Sounds
		{
			class EngineIdleOut
			{
				sound[]=
				{
					"z\MET\addons\Air\arc170\sounds\engine_idle.ogg",
					0.7,
					1,
					3000
				};
				frequency="1";
				volume="engineOn*camPos*(1 - (rpm factor [0.15, 0.55]))";
			};

			class EngineLowOut
			{
				sound[]=
				{
					"z\MET\addons\Air\arc170\sounds\loop.ogg",
					1,
					1,
					4000
				};
				frequency="(rpm interpolate [0,1,0.4,1]) * (thrust interpolate [0,1,1.0,2.0])";
				volume="engineOn*camPos*(rpm interpolate [0.2,0.7,0,1])*(thrust interpolate [0.3,0.9,0,1])";
			};

			class EngineMidOut
			{
				sound[]=
				{
					"z\MET\addons\Air\arc170\sounds\loop.ogg",
					1.4,
					1,
					4500
				};
				frequency="1";
				volume="engineOn*camPos*(rpm interpolate [0.45,0.9,0,1])*(thrust interpolate [0.4,1.0,0,1])";
			};

			class EngineMidHighOut
			{
				sound[]=
				{
					"z\MET\addons\Air\arc170\sounds\engine_mid_hi.ogg",
					1.6,
					1,
					4700
				};
				frequency="1";
				volume="engineOn*camPos*(rpm interpolate [0.6,0.9,0,1])*(thrust interpolate [0.6,1.0,0,1])";
			};

			class EngineHighOut
			{
				sound[]=
				{
					"z\MET\addons\Air\arc170\sounds\engine_hi.ogg",
					2,
					1,
					5000
				};
				frequency="1";
				volume="engineOn*camPos*(rpm interpolate [0.7,1,0,1])*(thrust factor[0.5,1.0])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"z\MET\addons\Air\arc170\sounds\engine_hi.ogg",
					1,
					1,
					5000
				};
				frequency="1";
				volume="engineOn*camPos*(rpm interpolate [0.5,1,0,1])*(thrust factor[0.3,1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"z\MET\addons\Air\arc170\sounds\wind_noise.ogg",
					"db-5",
					1,
					800
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"3AS\3as_arc170\Sounds\FighterInt.ogg",
					0.80000001,
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"3AS\3as_arc170\Sounds\FighterInt.ogg",
					0.80000001,
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int",
					"db0",
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					"db-6",
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
		class TextureSources
		{
			class Republic
			{
				displayName="Republic";
				author="$STR_3AS_Studio";
				textures[]=
				{
					"3as\3AS_ARC170\Data\Main_Frame_CO.paa",
					"3as\3AS_ARC170\Data\Wings_Engines_CO.paa",
					"3as\3AS_ARC170\Data\Guns_CO.paa"
				};
				factions[]=
				{
					"3AS_Rep"
				};
			};
			class Blue
			{
				displayName="Blue";
				author="$STR_3AS_Studio";
				textures[]=
				{
					"3as\3AS_ARC170\Data\units\501st_Main_Frame_CO.paa",
					"3as\3AS_ARC170\Data\units\501st_Wings_Engines_CO.paa",
					"3as\3AS_ARC170\Data\units\501st_Guns_CO.paa"
				};
				factions[]=
				{
					"3AS_Rep"
				};
			};
			class Green: Blue
			{
				displayName="Green";
				textures[]=
				{
					"3as\3AS_ARC170\Data\units\101st_Main_Frame_CO.paa",
					"3as\3AS_ARC170\Data\units\101st_Wings_Engines_CO.paa",
					"3as\3AS_ARC170\Data\units\101st_Guns_CO.paa"
				};
			};
			class Orange: Blue
			{
				displayName="Orange";
				textures[]=
				{
					"3as\3AS_ARC170\Data\units\212th_Main_Frame_CO.paa",
					"3as\3AS_ARC170\Data\units\212th_Wings_Engines_CO.paa",
					"3as\3AS_ARC170\Data\units\212th_Guns_CO.paa"
				};
			};
			class Yellow: Blue
			{
				displayName="Yellow";
				textures[]=
				{
					"3as\3AS_ARC170\Data\units\327th_Main_Frame_CO.paa",
					"3as\3AS_ARC170\Data\units\327th_Wings_Engines_CO.paa",
					"3as\3AS_ARC170\Data\units\327th_Guns_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Republic",
			1,
			"Blue",
			0,
			"Green",
			0,
			"Orange",
			0,
			"Yellow",
			0
		};
	};
	class MET_ARC_170_test: MET_ARC_170_Base
	{
		author="$STR_3AS_Studio";
		displayName="[16th] ARC-170";
		editorPreview="\3AS\3AS_ARC170\images\3AS_ARC_170_Republic";
		scope=2;
		scopeCurator=2;
		crew="3AS_Clone_P2_Pilot";
		side=1;
		faction = "metal_company";
		hiddenselections[]=
		{
			"3as\3AS_ARC170\Data\Main_Frame_CO.paa",
			"3as\3AS_ARC170\Data\Wings_Engines_CO.paa",
			"3as\3AS_ARC170\Data\Guns_CO.paa"
		};
	};
};