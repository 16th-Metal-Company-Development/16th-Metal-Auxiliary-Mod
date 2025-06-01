class CfgPatches
{
	class BHA_Cars
	{
		units[]=
		{
			"BHA_mrap_03_f",
			"BHA_mrap_03_gmg_f",
			"BHA_mrap_03_hmg_f"
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
class CfgVehicles
{
	class I_MRAP_03_F;
	class I_MRAP_03_gmg_F;
	class BHA_mrap_03_f: I_MRAP_03_F
	{
		displayName="Fennek (Unarmed)";
		scope=2;
		faction="BHA_Units";
		editorSubCategory="BHA_Cars";
		crew="BHA_Acolytes_Acolyte";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_mrap_03_f.jpg";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Cars\data\mrap_03_ext_co.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Drones\Data\turret_black_co.paa"
		};
	};
	class BHA_mrap_03_gmg_f: I_MRAP_03_gmg_F
	{
		displayName="Fennek (GMG)";
		scope=2;
		faction="BHA_Units";
		editorSubCategory="BHA_Cars";
		crew="BHA_Acolytes_Acolyte";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_mrap_03_gmg_f.jpg";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Cars\data\mrap_03_ext_co.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Drones\Data\turret_black_co.paa"
		};
	};
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				disableSoundAttenuation=0;
				class ViewOptics;
				class Components;
				class ViewGunner;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class ViewPilot;
		class AnimationSources;
		class Components;
	};
	class MRAP_03_base_F: Car_F
	{
		class Turrets: Turrets
		{
			class CommanderTurret: MainTurret
			{
				gunnerName="$STR_POSITION_COMMANDER";
				proxyType="CPCommander";
				commanding=2;
				primaryGunner=0;
				primaryObserver=1;
				body="obsTurret";
				gun="obsGun";
				animationSourceBody="obsTurret";
				animationSourceGun="obsGun";
				animationSourceElevation="obsElevation";
				gunBeg="PIP0_dir";
				gunEnd="PIP0_pos";
				memoryPointGunnerOptics="PIP0_dir";
				weapons[]=
				{
					"Laserdesignator_vehicle",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"Laserbatteries",
					"SmokeLauncherMag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",
					0.17782794,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",
					0.17782794,
					1,
					10
				};
				soundElevation[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03_elevation",
					0.31622776,
					1,
					10
				};
				gunnerAction="commander_MRAP_03";
				usePip=1;
				gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Optics_Commander_01_F.p3d";
				Laser=1;
				turretInfoType="RscOptics_Strider_commander";
				gunnerForceOptics=0;
				minElev=-18;
				maxElev=40;
				memoryPointsGetInGunner="pos commander";
				memoryPointsGetInGunnerDir="pos commander dir";
				gunnerGetInAction="GetInMRAP_03";
				gunnerGetOutAction="GetOutLow";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.155;
					minFov=0.034000002;
					maxFov=0.155;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={2,3};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-10;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.2;
						material=-1;
						name="commander_turret_hit";
						visual="commander_turret_hit";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=1;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.2;
						material=-1;
						name="commander_gun_hit";
						visual="commander_gun_hit";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=1;
						radius=0.25;
					};
				};
				gunnerDoor="";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
					};
				};
			};
		};
	};
	class MRAP_03_hmg_base_F: MRAP_03_base_F
	{
	};
	class I_MRAP_03_hmg_F: MRAP_03_hmg_base_F
	{
	};
	class BHA_mrap_03_hmg_f: I_MRAP_03_hmg_F
	{
		displayName="Fennek (HMG)";
		scope=2;
		faction="BHA_Units";
		editorSubCategory="BHA_Cars";
		crew="BHA_Acolytes_Acolyte";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_mrap_03_hmg_f.jpg";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Cars\data\mrap_03_ext_co.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Drones\Data\turret_black_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"BHA_HMG_127"
				};
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Orange",
					"200Rnd_127x99_mag_Tracer_Orange"
				};
				selectionFireAnim="zasleh";
				gunnerAction="gunner_MRAP_03";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",
					0.17782794,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03",
					0.17782794,
					1,
					10
				};
				stabilizedInAxes=3;
				animationSourceStickX="joystick_gunner_x";
				animationSourceStickY="joystick_gunner_y";
				gunnerLeftHandAnimName="";
				gunnerRightHandAnimName="joystick_gunner";
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				usePip=1;
				commanding=1;
				minElev=-20;
				maxElev=20;
				headAimDown=10;
				class ViewOptics: RCWSOptics
				{
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-10;
					initFov=0.89999998;
					minFov=0.25;
					maxFov=1.25;
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor=-250;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="otocvez";
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
						visual="otochlaven";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.2;
						isGun=1;
					};
				};
				gunnerDoor="";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehicleCommanderDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Commander";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class Components: components
						{
							class VehicleCommanderDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="Commander";
							};
						};
					};
				};
			};
			class CommanderTurret: CommanderTurret
			{
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class Components: components
						{
							class VehiclePrimaryGunnerDisplay
							{
								componentType="TransportFeedDisplayComponent";
								source="PrimaryGunner";
							};
						};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="BHA_HMG_127";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="BHA_HMG_127";
			};
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
