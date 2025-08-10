
class CfgPatches
{
	class MET_Emplacements
	{
		units[] = 
		{
			
		};
		weapons[] = 
		{

		};
		magazines[] =
		{
			"MET_20Rnd_82mm_Mo_shells",
            "MET_20Rnd_82mm_Mo_Flare_white",
            "MET_20Rnd_82mm_Mo_Flare_Red",
            "MET_20Rnd_82mm_Mo_Smoke_white"
		};
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies",
			"3AS_Main",
			"3AS_VehicleWeapons",
            "3AS_Static"
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
class CfgAmmo
{
    class FlareCore;
    class Sh_155mm_AMOS;
    class Sh_82mm_AMOS;
    class MET_Sh_120mm_AMOS: Sh_155mm_AMOS
    {
		displayname="Republic 120 MW HE Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Green2_Fly";

        hit = 225;
        indirectHit = 100;
        indirectHitRange = 60;
        ace_frag_enabled = 1;
        ace_frag_classes[] = {"ace_frag_medium", "ace_frag_medium_HD","ace_frag_large", "ace_frag_large_HD"};
        ace_frag_metal = 9600;
        ace_frag_charge = 1024;
        ace_frag_gurney_c = 2440;
        ace_frag_gurney_k = "1/2";
        ace_rearm_caliber = 120;
        //These are here as reference

        //155mm
        // hit = 340;
        // indirectHit = 125;
        // indirectHitRange = 30;
        // ace_frag_classes[] = {"ace_frag_large", "ace_frag_large", "ace_frag_large_HD", "ace_frag_large", "ace_frag_huge", "ace_frag_huge_HD", "ace_frag_huge"};
        // ace_frag_metal = 36000;
        // ace_frag_charge = 9979;
        // ace_frag_gurney_c = 2440;
        // ace_frag_gurney_k = "1/2";
        // ace_rearm_caliber = 155;
        // ace_vehicle_damage_incendiary = 0.4;

        //82mm
        // hit = 165;
        // indirectHit = 52;
        // indirectHitRange = 18;
        // ace_frag_enabled = 1;
        // ace_frag_classes[] = {"ace_frag_medium", "ace_frag_medium_HD"};
        // ace_frag_metal = 3200;
        // ace_frag_charge = 420;
        // ace_frag_gurney_c = 2440;
        // ace_frag_gurney_k = "1/2";
        // ace_rearm_caliber = 82;
    };
    class Flare_82mm_AMOS_White;
    class MET_Flare_120mm_AMOS_White: Flare_82mm_AMOS_White
    {
		displayname="Republic 120 MW Flare Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
		//effectFly="MET_BlasterBoltGlow_Large_Green2_Fly";
        //scifi means it lives longer and is brighter :)
        timeToLive = 90;
		effectFlare = "CounterMeasureFlare";
		lightColor[] = {1, 0.839, 0.647,0.5};
		smokeColor[] = {1,1,1,0.5};
		intensity = 25000000;
		brightness = 25000000;
        coefGravity = 1;
        ace_rearm_caliber = 120;
    };
    //------------------------------- IR Flare
    class MET_IR_Flare_120mm_AMOS_White: MET_Flare_120mm_AMOS_White
    {
        nvgOnly = 1;
    };
    //-------------------------------- Smoke
    class Smoke_82mm_AMOS_White;
    class MET_Smoke_120mm_AMOS_White: Smoke_82mm_AMOS_White
    {
		displayname="Republic 120 MW Smoke Mortar Shell";

		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
        submunitionAmmo = "MET_120mm_SmokeShellArty";
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell.p3d";
        ace_rearm_caliber = 120;
    };
    class SmokeShellArty;
    class MET_120mm_SmokeShellArty: SmokeShellArty
    {
        ace_rearm_caliber = 120;
        effectsSmoke = "OPTRE_122mm_Mortar_Impact_Smoke";//use the cool effect from bulldog but BIG
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell.p3d";
        class CamShakeHit
        {
            power = 40;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
    };
    //-------------------------------- Guided
    class Sh_82mm_AMOS_guided;
    class MET_Sh_120mm_AMOS_guided: Sh_82mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Yellow_Fly";
        submunitionAmmo = "MET_M_Mo_120mm_AT";
        hit = 175;
        ace_rearm_caliber = 120;
        irLock = 1;
        laserLock = 0;
    };
    class MissileBase;
    class M_Mo_82mm_AT:MissileBase
    {
        class Components;
    };
	class ammo_Penetrator_Base;
	class MET_120HEAT_Penetrator: ammo_Penetrator_Base
	{
		hit=3050;
		warheadName="TandemHEAT";
		caliber=20;
	};
    class MET_M_Mo_120mm_AT: M_Mo_82mm_AT
    {
        ace_rearm_caliber = 120;
		effectFly="MET_BlasterBoltGlow_Large_Yellow_Fly";

		submunitionAmmo="MET_120HEAT_Penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
        hit = 850;
        indirectHit = 65;
        indirectHitRange = 9;
        //maneuvrability = 10;

        //lets give it more lock angle
        missileLockCone = 70;
		missileKeepLockedCone = 70;
        irLock = 1;

        //only angle changed
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
                            minRange = 200;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = 1;
                        };
                        class GroundTarget
                        {
                            minRange = 200;
                            maxRange = 800;
                            objectDistanceLimitCoef = 1;
                            viewDistanceLimitCoef = 1;
                        };
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                    };
                };
            };
        };
    };
    //-------------------------------- Laser Guided
    class MET_Sh_120mm_AMOS_LG: MET_Sh_120mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Yellow_Fly";
        ace_rearm_caliber = 120;
        submunitionAmmo = "MET_M_Mo_120mm_AT_LG";
        cost = 500;
        laserLock = 1;
        irLock = 0;
        muzzleEffect = "";
    };
    class MET_M_Mo_120mm_AT_LG: MET_M_Mo_120mm_AT
    {
        ace_rearm_caliber = 120;
        simulationStep = 0.002;
        weaponLockSystem = 4;
        //only changle changed
        class Components: Components
        {
            class SensorsManagerComponent
            {
                class Components
                {
                    class LaserSensorComponent: SensorTemplateLaser
                    {
                        class AirTarget
                        {
                            minRange = 800;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget
                        {
                            minRange = 800;
                            maxRange = 800;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        angleRangeHorizontal = 60;
                        angleRangeVertical = 60;
                    };
                };
            };
        };
    };
    //------------------------------- Cluster HE cause aye lmao
    class MET_M_Mo_Cluster_HE: Sh_82mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Red_Fly";
        ace_rearm_caliber = 120;
        submunitionAmmo[] = {"MET_60HE",0.70,"MET_60HEAT",0.20,"MET_40HE_ClusterShot",0.10};//70% HE, 20% HEAT, 10% cluster
        submunitionConeType[] = { "randomcenter", 40 };
        submunitionConeAngle = 25;
        triggerDistance = 100;
        submunitionDirectionType = "SubmunitionModelDirection";
        cost = 200;
        muzzleEffect = "";      
    };
    //------------------------------- Oops All Clusters
    class MET_M_Mo_ExtraCluster_HE: Sh_82mm_AMOS_guided
    {
		displayname="Republic 120 MW AT Mortar Shell";

        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\shell_throwable.p3d";
		effectFly="MET_BlasterBoltGlow_Large_Red_Fly";
        ace_rearm_caliber = 120;
        submunitionAmmo[] = {"MET_40HE_ClusterShot",0.9,"MET_60HE_ClusterWide",0.1};//70% HE, 20% HEAT, 10% cluster
        submunitionConeType[] = { "randomcenter", 40 };
        submunitionConeAngle = 25;
        triggerDistance = 100;
        submunitionDirectionType = "SubmunitionModelDirection";
        cost = 200;
        muzzleEffect = "";      
    };
	//------------------------------- MET 60mm Shells
	class MET_60mm_HE_Mortar: Sh_82mm_AMOS
	{
		displayname="Republic HE Mortar Shell";
		effectFly="MET_BlasterBoltGlow_Medium_Blue_Fly";
		hit=140;
		indirectHit=90;
		indirectHitRange=30;
		cost=200;
		muzzleEffect="";
		warheadName="HE";
		dangerRadiusHit=400;
		suppressionRadiusHit=75;
		typicalSpeed=800;
		caliber=8;
		deflecting=0;
		explosive=0.6;
        ace_frag_metal = 120;  // Amount of metal being fragmented (grams)
        ace_frag_charge = 60;  // Amount of explosive filler (grams)
        ace_frag_gurney_c = 2300;  // Gurney velocity constant for explosive type
        ace_frag_gurney_k = 1/2;  // Gurney velocity shape factor
        ace_frag_classes[] = {"ACE_frag_medium_HD","ACE_frag_small_HD","ACE_frag_small"};  // Type of fragments
        ace_frag_skip = 0;  // (Optional) Skip fragmentation for this ammo type (0-disabled, 1-enabled)
        ace_frag_force = 1;  // (Optional) Force fragmentation system (0-disabled, 1-enabled)
    
		/*class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};*/
	};
	class MET_60mm_Flare_White: FlareCore
	{
		effectFlare = "CounterMeasureFlare";
		lightColor[] = {0.95,0.95,1,0.5};
		smokeColor[] = {1,1,1,0.5};
		intensity = 2000000;
		brightness=12;
        coefGravity = 1.5;
		size = 1;
		timeToLive=300;
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		triggerTime=-1;
		triggerSpeedCoef=1;
		flareSize=40;
		flareAirFriction=-15.5;
		effectFly="MET_BlasterBoltGlow_Medium_White_Fly";
		class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class MET_60mm_Flare_Red: FlareCore
	{
		timeToLive=120;
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[]={30,60,120,180,240,300,360};
		aimAboveDefault=4;
		triggerTime=-1;
		triggerSpeedCoef=1;
		lightColor[] = {0.84380001,0.1383,0.1353,0};
		smokeColor[] = {1,1,1,0.5};
		brightness=12;
		intensity = 2000000;
		flareSize=40;
		flareAirFriction=-2;
		fuseDistance=10;
		effectFly="MET_BlasterBoltGlow_Medium_Red_Fly";
		class CamShakeExplode
		{
			power=16.4;
			duration=1.8;
			frequency=20;
			distance=216.44299;
		};
		class CamShakeHit
		{
			power=82;
			duration=0.60000002;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=3.0092199;
			duration=1.8;
			frequency=20;
			distance=72.4431;
		};
		class CamShakePlayerFire
		{
			power=0.0099999998;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class MET_60mm_Smoke_White: MET_60mm_HE_Mortar
	{
		model="\A3\weapons_f\ammo\shell";
		submunitionAmmo="SmokeShellArty";
	};
};
class CfgMagazines
{
    class VehicleMagazine;
    class 8Rnd_82mm_Mo_shells;
    class MET_10Rnd_120mm_Mo_shells: 8Rnd_82mm_Mo_shells
    {
        author = "Hazmat";
        count = 10;
        ammo = "MET_Sh_120mm_AMOS";
        displayName = "HE Mortar Shells";
        displayNameShort = "HE";  
        displayNameMFDFormat = "HE";
        picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Flare_120mm_AMOS_White";
		displayName = "Flare Mortar Shells (White)";
		displayNameShort = "White Flare";
		displayNameMFDFormat = "FLR";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_IR_Flare_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_IR_Flare_120mm_AMOS_White";
		displayName = "IR Flare Mortar Shells (White)";
		displayNameShort = "IR Flare";
		displayNameMFDFormat = "IR";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Smoke_120mm_AMOS_White";
		displayName = "Smoke Mortar Shells (White)";
		displayNameShort = "White Smoke";
		displayNameMFDFormat = "SMK";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_guided: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Sh_120mm_AMOS_guided";
		displayName = "AT Guided Mortar Shells";
		displayNameShort = "AT Guided";
		displayNameMFDFormat = "ATG";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_10Rnd_120mm_Mo_LG: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 10;
		ammo = "MET_Sh_120mm_AMOS_LG";
		displayName = "Laser Guided Mortar Shells";
		displayNameShort = "Laser Guided";
		displayNameMFDFormat = "LG";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_5Rnd_120mm_Mo_Cluster_HE: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 5;
		ammo = "MET_M_Mo_Cluster_HE";
		displayName = "Cluster HE Mortar Shells";
		displayNameShort = "Cluster HE";
		displayNameMFDFormat = "CLST";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_2Rnd_120mm_Mo_Extra_Cluster_HE: 8Rnd_82mm_Mo_shells
	{
		author = "Hazmat";
		count = 2;
		ammo = "MET_M_Mo_ExtraCluster_HE";
		displayName = "Double Cluster HE Mortar Shells";
		displayNameShort = "Cluster HE";
		displayNameMFDFormat = "CLST";
		picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\shell.paa";
	};
	class MET_20Rnd_82mm_Mo_shells: VehicleMagazine
	{
		author="$STR_3as_Studio";
		displayName="HE Mortar Shells";
		displayNameShort="HE";
		displayNameMFDFormat="HE";
		scope=2;
		count=20;
		ammo="MET_60mm_HE_Mortar";
		nameSound="heat";
		muzzleImpulseFactor[]={0,0};
		initSpeed=200;
		ace_arsenal_hide=-1;
		ace_artillerytables_airFriction=-9.9999997e-005;
	};
	class MET_20Rnd_82mm_Mo_Flare_white: MET_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="MET_60mm_Flare_White";
		displayName="Flare Mortar Shell (White)";
		displayNameShort="White Flare";
	};
	class MET_20Rnd_82mm_Mo_Flare_Red: MET_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="MET_60mm_Flare_Red";
		displayName="Flare Mortar Shell (Red)";
		displayNameShort="Red Flare";
	};
	class MET_20Rnd_82mm_Mo_Smoke_white: MET_20Rnd_82mm_Mo_shells
	{
		author="$STR_3as_Studio";
		ammo="MET_60mm_Smoke_White";
		displayName="Smoke Mortar Shell (White)";
		displayNameShort="White Smoke";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
    class CannonCore;
    class mortar_82mm: CannonCore
    {
        class Single1;
        class Single2;
        class Single3;
        class Burst1;
        class Burst2;
        class Burst3;
    };
    class MET_SGM120_Mortar_120mm: mortar_82mm
    {
        displayname = "SGM-120 120MW";
        //Maybe we change sound if we get
            reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar", 1, 1, 20};
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar", 1, 1, 20};
            soundServo[] = {"", 0.0001, 1};
        //

        reloadTime = 2;
        magazineReloadTime = 5;
        autoReload = 1;
        magazines[] = {
            "MET_10Rnd_120mm_Mo_shells",
			"MET_10Rnd_120mm_Mo_Flare_white",
			"MET_10Rnd_120mm_Mo_IR_Flare_white",
			"MET_10Rnd_120mm_Mo_Smoke_white",
			"MET_10Rnd_120mm_Mo_guided",
			"MET_10Rnd_120mm_Mo_LG",
			"MET_5Rnd_120mm_Mo_Cluster_HE",
			"MET_2Rnd_120mm_Mo_Extra_Cluster_HE"
        };
        magazineWell[] = {}; //for ace reasons, this kinda doesnt help

        //Lets keep everything the same, except for dispersion, make that better cause scifi lol
        modes[] = {"Single1", "Single2", "Single3", "Burst1", "Burst2", "Burst3"};
        class Single1: Single1
        {
			displayName="Single (Close)";
            artilleryDispersion = 1;
            reloadTime = 2;
			artilleryCharge=0.4;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
        };
        class Single2: Single1
        {
			displayName="Single (Medium)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=0.9;
        };
        class Single3: Single1
        {
			displayName="Single (Far)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=1.4;
        };
        /*class Single4: Single1
        {
			displayName="Single (Farther)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=1.7;
        };
        class Single5: Single1
        {
			displayName="Single (Extreme)";
            artilleryDispersion = 0.9;
            reloadTime = 2;
			artilleryCharge=2.0;
        };*/
        class Burst1: Burst1
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
        class Burst2: Burst2
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
        class Burst3: Burst3
        {
            artilleryDispersion = 1;
            reloadTime = 2;
        };
    };
	class MET_mortar_60mm: CannonCore
	{
		scope=1;
		displayname="[16th] Republic Mortar 60mm";
		nameSound="CannonCore";
		cursor="mortar";
		cursorAim="EmptyCursor";
		sounds[]=
		{
			"StandardSound"
		};
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"3AS_Mortar_SoundSet"
			};
		};
		reloadSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",
			1,
			1,
			20
		};
		soundServo[]=
		{
			"",
			9.9999997e-005,
			1
		};
		reloadTime=1.8;
		magazineReloadTime=5;
		autoReload=1;
		canLock=0;
		magazines[]=
		{
			"MET_20Rnd_82mm_Mo_shells",
			"MET_20Rnd_82mm_Mo_Flare_white",
			"MET_20Rnd_82mm_Mo_Flare_Red",
			"MET_20Rnd_82mm_Mo_Smoke_white"
		};
		ballisticsComputer=2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName="MortarFired";
				positionName="Usti Hlavne";
				directionName="Konec Hlavne";
			};
		};
		modes[]=
		{
			"Single1",
			"Single2",
			"Single3",
			"Burst1",
			"Burst2",
			"Burst3"
		};
		class Single1: Mode_SemiAuto
		{
			displayName="$STR_A3_mortar_82mm_Single10";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Mortar_SoundSet"
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			reloadTime=1;
			artilleryDispersion=1.9;
			artilleryCharge=0.25;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
		class Single2: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single20";
			artilleryCharge=0.50;
		};
		class Single3: Single1
		{
			displayName="$STR_A3_mortar_82mm_Single30";
			artilleryCharge=0.75;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst10";
			burst=4;
			aiBurstTerminable=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",
					1.2589254,
					1,
					250
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",
					1.2589254,
					1,
					250
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			reloadSound[]=
			{
				"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",
				1,
				1,
				20
			};
			soundServo[]=
			{
				"",
				9.9999997e-005,
				1
			};
			soundBurst=0;
			reloadTime=1.8;
			artilleryDispersion=2.2;
			artilleryCharge=0.34999999;
			minRange=60;
			minRangeProbab=0.5;
			midRange=290;
			midRangeProbab=0.69999999;
			maxRange=665;
			maxRangeProbab=0.5;
		};
		class Burst2: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst20";
			artilleryCharge=0.69999999;
			minRange=230;
			minRangeProbab=0.40000001;
			midRange=1175;
			midRangeProbab=0.60000002;
			maxRange=2660;
			maxRangeProbab=0.40000001;
		};
		class Burst3: Burst1
		{
			showToPlayer=0;
			displayName="$STR_A3_mortar_82mm_Burst30";
			artilleryCharge=1;
			minRange=540;
			minRangeProbab=0.30000001;
			midRange=2355;
			midRangeProbab=0.40000001;
			maxRange=5500;
			maxRangeProbab=0.30000001;
		};
	};
};
class Bag_Base;
class Weapon_Bag_Base: Bag_Base
{
	class assembleInfo
	{
	};
};
class CfgVehicles
{
    
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Mortar_01_base_F: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
				};
				class Hitpoints;
			};
		};
		class assembleInfo;
	};
	class B_Mortar_01_F: Mortar_01_base_F
	{
		class SimpleObject;
	};
    class MET_AU_44_Mortar: Mortar_01_base_F
    {
        displayName = "AU-44";
        model = "\OPTRE_Weapons_Turrets\AU_44_Mortar\AU_44_Mortar.p3d";
        author = "A2S";
        class SimpleObject
        {
            eden = 1;
            animate[] = {{"mainturret", 0}, {"maingun", 0}, {"computerAim", 0}, {"computerRotate", 0}, {"barRotate", 0}};
            hide[] = {};
            verticalOffset = 0.757;
            verticalOffsetWorld = 0.035;
            init = "''";
        };
        editorPreview = "\OPTRE_Misc\Image\OPTRE\Turrets\OPTRE_AU_44_Mortar.jpg";
        scope = 2;
        side = 1;
        faction = "metal_EdCat_co";
        crew = "OPTRE_UNSC_Army_Soldier_Crewman_WDL";
        availableForSupportTypes[] = {"Artillery"};
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                elevationMode = 3;
                weapons[] = {"MET_SGM120_Mortar_120mm"};
                magazines[] = {
                    "MET_10Rnd_120mm_Mo_shells",
					"MET_10Rnd_120mm_Mo_shells",
					"MET_10Rnd_120mm_Mo_Flare_white",
					"MET_10Rnd_120mm_Mo_Flare_white",
					"MET_10Rnd_120mm_Mo_IR_Flare_white",
					"MET_10Rnd_120mm_Mo_IR_Flare_white",
					"MET_10Rnd_120mm_Mo_Smoke_white",
					"MET_10Rnd_120mm_Mo_Smoke_white",
					"MET_10Rnd_120mm_Mo_guided",
					"MET_10Rnd_120mm_Mo_LG",
					"MET_5Rnd_120mm_Mo_Cluster_HE",
					"MET_2Rnd_120mm_Mo_Extra_Cluster_HE"
                };

                minelev = -22.5;
                initelev = 0;
				maxelev = 22.5;

                disableSoundAttenuation = 0;
                soundElevation[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03", 0.316228, 1, 10};
				soundServo[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03", 0.177828, 1, 10};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP03", 0.316228, 1, 30};
            };
        };
        class AnimationSources
        {
            class muzzle_hide_mortar
            {
                source = "reload";
                weapon = "OPTRE_SGM122_Mortar_122mm";
            };
        };
        class assembleInfo
        {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = {"MET_AU_44_Mortar_Bag"};
            primary = 0;
        };
        /*class ace_csw
		{
			enabled = 1;
			proxyWeapon = "OPTRE_CSW_SGM122_Mortar_122mm";
			magazineLocation = "_target selectionPosition 'magazine'";
			disassembleWeapon = "OPTRE_CSW_AU44_Mortar_Carry";
			disassembleTurret = "OPTRE_CSW_Mortar_Baseplate";
			desiredAmmo = 1;
			ammoLoadTime = 0.5;
			ammoUnloadTime = 1;
		};*/
        hiddenSelections[] = {
            "camo",
			"camoScreen"
        };
        hiddenSelectionsTextures[] = {
            "z\16th\addons\vehicles\emplacements\data\mortar_co_fuq_dat.paa",
            "OPTRE_Weapons_Turrets\au_44_mortar\data\computer_screen.paa"
        };
        hiddenSelectionsMaterials[] = {
            "OPTRE_Weapons_Turrets\AU_44_Mortar\data\mortar.rvmat",
            "OPTRE_Weapons_Turrets\AU_44_Mortar\data\mfd.rvmat"
        };
        #include "\OPTRE_Weapons_Turrets\AU_44_Mortar\_mfd.hpp"
    };
	class JLTS_Clone_backpack;
	class MET_AU_44_Mortar_Bag: JLTS_Clone_backpack
            {
                displayName = "[16th] AU-44 Mortar";
				author = "Hazmat";
                picture = "\OPTRE_Weapons_Turrets\AU_44_Mortar\data\icons\both.paa";
				hiddenSelectionsTextures[]=
				{
					"z\16th\addons\armor\data\gear\backpacks\drag_backpack_co.paa"
				};
				maximumLoad=0;
				mass=1000;
                class assembleInfo
                {
                    assembleTo = "MET_AU_44_Mortar";
                    base = "";
                    displayName = "AU-44 Mortar";
                    dissasembleTo[] = {};
                    primary = 1;
                };
            };
	class MET_Republic_Mortar: B_Mortar_01_F
	{
		author="$STR_3AS_Studio";
		displayname="[16th] 60 MW Republic Mortar";
		model="3AS\3as_static\Mortar\model\republicmortar.p3d";
		editorPreview="\3as\3as_static\images\3AS_Republic_Mortar.jpg";
		crew="JLTS_Clone_P2_DC15S";
		icon="3AS\3as_static\Mortar\Data\ui\Mortar_top_ca.paa";
		picture="3AS\3as_static\Mortar\Data\ui\Mortar_side_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initelev=0;
				maxelev=40;
				minelev=-15;
				initturn=0;
				maxturn=360;
				minturn=-360;
				weapons[]=
				{
					"MET_mortar_60mm"
				};
				magazines[]=
				{
					"MET_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_shells",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_white",
					"MET_20Rnd_82mm_Mo_Flare_Red",
					"MET_20Rnd_82mm_Mo_Flare_Red",
					"MET_20Rnd_82mm_Mo_Smoke_white",
					"MET_20Rnd_82mm_Mo_Smoke_white"
				};
				elevationMode=3;
				gunnerforceoptics=1;
				class Hitpoints: Hitpoints
				{
				};
			};
		};
		class assembleInfo: assembleInfo
		{
			dissasembleTo[]=
			{
				"MET_Republic_Mortar_Bag"
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"3as\3as_static\mortar\data\base.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_01_destruct.rvmat",
				"3as\3as_static\mortar\data\tube.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_damage.rvmat",
				"A3\Static_F_Gamma\data\StaticTurret_02_destruct.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\base_co.paa",
			"\3as\3as_static\Mortar\data\tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		faction="metal_EdCat_co";
		scopeCurator=2;
		class TextureSources
		{
			class Republic
			{
				displayName="Republic";
				author="$STR_3as_Studio";
				textures[]=
				{
					"\3as\3as_static\Mortar\data\base_co.paa",
					"\3as\3as_static\Mortar\data\tube_co.paa"
				};
				factions[]=
				{
					"3AS_REP",
					"3AS_CIS"
				};
			};
			class CIS
			{
				displayName="CIS";
				author="$STR_3as_Studio";
				textures[]=
				{
					"\3as\3as_static\Mortar\data\cis_base_co.paa",
					"\3as\3as_static\Mortar\data\cis_tube_co.paa"
				};
				factions[]=
				{
					"3AS_REP",
					"3AS_CIS"
				};
			};
		};
	};
	class MET_Republic_Mortar_Bag: Weapon_Bag_Base
	{
		faction="metal_EdCat_co";
		model="\3as\3as_static\Mortar\model\mortarpack.p3d";
		author="$STR_3AS_Studio";
		_generalMacro="B_Mortar_01_weapon_F";
		scope=2;
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_DismantledWeapons";
		displayName="[16th] Folded 60MW Mortar";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\3as\3as_static\Mortar\data\base_co.paa",
			"\3as\3as_static\Mortar\data\tube_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\3as\3as_static\Mortar\data\base.rvmat",
			"\3as\3as_static\Mortar\data\tube.rvmat"
		};
		picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Small_mcamo.paa";
		mass=450;
		class assembleInfo: assembleInfo
		{
			base[]=
			{
				""
			};
			displayName="Mortar";
			assembleTo="MET_Republic_Mortar";
		};
	};
};