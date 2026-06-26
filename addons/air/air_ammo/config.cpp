class CfgPatches
{
	class Metal_Air_Ammo
	{
		units[] = {};
		weapons[] = {};
		magazines[] ={};
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies"
		};
	};
};
class ace_missileguidance;
class CfgAmmo
{
	class B_40mm_APFSDS;
	class B_40mm_GPR;
	class Metal_LAAT_HE_Cannon_Shell: B_40mm_GPR
	{
		displayname="Medium Blaster Cannon";
		warheadName="GP Plasma";
		hit=100;
		indirecthit=50;
		indirecthitrange=5;
		caliber=4.6;
		airlock=1;
		model="3as\3as_weapons\data\tracer_green.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Green_Fly";
		aiAmmoUsageFlags="64+ 128 + 512";
		soundSetSonicCrack[]=
		{
			"3AS_HeavyPlasma_Flyby_SoundSet"
		};
	};
	class Metal_LAAT_AP_Cannon_Shell: B_40mm_APFSDS
	{
		displayname="Medium Blaster Cannon";
		warheadName="AP Plasma";
		hit=250;
		indirecthit=20;
		indirecthitrange=1;
		caliber=55;
		airlock=1;
		model="3as\3as_weapons\data\tracer_green.p3d";
		effectFly="3AS_PlasmaBolt_Medium_Green_Fly";
		aiAmmoUsageFlags="64+ 128 + 512";
		soundSetSonicCrack[]=
		{
			"3AS_HeavyPlasma_Flyby_SoundSet"
		};
	};
	class ammo_Missile_BIM9X;
	class Metal_Mass_Driver_Missile: ammo_Missile_BIM9X
	{
		displayname="Mass Driver Missile";
        displayNameShort = "MDM";
        description = "Mass Driver Missile";
        descriptionShort = "MDM";
		warheadName="AA";
		hit=1500;
		model="\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
		effectFly="3AS_Rocket_effect_Blue_fly";
		effectsMissile="3AS_Rocket_effect_Blue_fly";
		indirecthit=500;
		indirecthitrange=10;
		caliber=95;
		airLock = 2; // Locks air and Ground targets
		autoSeekTarget = 1; // Automatically Lock and Engage Target
		cmImmunity = 0.85; // Projectile is immune to countermeasures
		lockSeekRadius = 180;
		/*flightProfiles[] = { "Direct", "TopDown" };
		class Direct
		{
		};
		class TopDown : Direct
		{
			ascendHeight = 150.0;
			descendDistance = 200.0;
			minDistance = 150.0;
			ascendAngle = 70.0;
		};*/
		irLock = 1;
		laserLock = 0;
		lockType = 0; // Fire and Forget (currently all guided weapons)
		missileKeepLockedCone = 300;	// off-boresight capabilities, missile can attempt a full turn in order to hunt targets behind
		missileLockCone = 180;	// 180 Degrees of locking
		maneuvrability = 30; // Maneuverability of the missile
		missileLockMaxDistance = 16000; // missile won't be able to lock targets further than than 16km away
		missileLockMinDistance = 25; // missile won't be able to lock a target closer than 25m
		nvLock = 0; // Can lock onto IR Grenades
		trackLead = 1; // Missile intercepts
		trackOversteer = 1; // Missiles flies straight to its target
		cameraViewAvailable = 1; // pilot can see the missile's flight from missile's perspective
		weaponLockDelay = 0; // Immediate lock if the locking conditions are met
        /*class ace_missileguidance: ace_missileguidance {
            canVanillaLock = 1;
            enabled = 1; // Missile Guidance must be explicitly enabled
            seekLastTargetPos = 1;
            defaultSeekerType = "MillimeterWaveRadar";
            seekerTypes[] = { "MillimeterWaveRadar" };
            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = { "LOBL" };

            activeRadarEngageDistance = 1000;
            seekerMaxRange = 2000; // distance that the hellfire internal radar can scan
        };*/
		// Begin ACE guidance Configs
        /*class ace_missileguidance {
            enabled = 1; // Explicit enabling of the system

            pitchRate = 30; // How many degrees/second the missile can pitch
            yawRate = 30; // How many degrees/second this missile can yaw

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH"; // Default seeker type
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS" };

            defaultSeekerLockMode = "LOAL"; // Default lock mode
            seekerLockModes[] = { "LOAL", "LOBL" };

            defaultNavigationType = "AugmentedProportionalNavigation"; // Default navigation type
            navigationTypes[] = { "ZeroEffortMiss", "AugmentedProportionalNavigation" }; // Navigation types this missile can use

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 360;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;         // Minimum range from the missile which the seeker can visually search
            seekerMaxRange = 8000;      // Maximum range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "hellfire"; // Default attack profile
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"}; // Possible attack profiles

            // State machine defining what navigation type to use in this missiles phase
            class navigationStates {
                class initial {
                    transitionCondition = "my_fnc_navigationTransition"; // Condition needed to transition to next state
                    navigationType = "AugmentedProportionalNavigation"; // Navigation type to use in this state
                };
                class terminal {
                    transitionCondition = "";
                    navigationType = "ZeroEffortMiss";
                };
                // transitions from initial -> termimal
                states[] = {"initial", "terminal"};
            };
        };

        // Vanilla lock system vars
        weaponLockSystem = "8";
        maneuvrability = 0; // no maneuvrability so that default guidance doesnt work

        flightProfiles[] = {};
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class MillimeterWaveRadar {
                        componentType = "ActiveRadarSensorComponent";
                        class AirTarget {
                            minRange = 0;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 0;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance     = 4000;
                        angleRangeHorizontal        = 70;
                        angleRangeVertical          = 70;
                        groundNoiseDistanceCoef     = 0; // relevant to AA missiles - not really for this
                        maxGroundNoiseDistance      = 250;
                        minSpeedThreshold           = 0;
                        maxSpeedThreshold           = 600;
                        nightRangeCoef = 1;
                        maxFogSeeThrough = 0.8;
                    };
                };
            };
        };*/
	};
	class ammo_Penetrator_Base;
	class metal_Penetrator: ammo_Penetrator_Base
	{
		hit=900;
		warheadName="TandemHEAT";
		caliber=30;
	};
	class M_Scalpel_AT;
	class Metal_Mass_Driver_Missile_AT: M_Scalpel_AT
	{
		displayname="Mass Driver Missile";
        displayNameShort = "MDM";
        description = "Mass Driver Missile";
        descriptionShort = "MDM";
		warheadName="AT";
		hit=1500;
		model="\A3\Weapons_F\Ammo\Missile_AT_02_fly_F";
		effectFly="3AS_Rocket_effect_Blue_fly";
		effectsMissile="3AS_Rocket_effect_Blue_fly";
		indirecthit=500;
		indirecthitrange=10;
		caliber=45;
		submunitionAmmo="metal_Penetrator";
		airLock = 0; // Locks air and Ground targets
		autoSeekTarget = 1; // Automatically Lock and Engage Target
		cmImmunity = 0.75; // Projectile is immune to countermeasures
		lockSeekRadius = 180;
		/*flightProfiles[] = { "Direct", "TopDown" };
		class Direct
		{
		};
		class TopDown : Direct
		{
			ascendHeight = 150.0;
			descendDistance = 200.0;
			minDistance = 150.0;
			ascendAngle = 70.0;
		};*/
		irLock = 1;
		laserLock = 1;
		lockType = 0; // Fire and Forget (currently all guided weapons)
		missileKeepLockedCone = 360;	// off-boresight capabilities, missile can attempt a full turn in order to hunt targets behind
		missileLockCone = 180;	// 180 Degrees of locking
		maneuvrability = 30; // Maneuverability of the missile
		missileLockMaxDistance = 16000; // missile won't be able to lock targets further than than 16km away
		missileLockMinDistance = 25; // missile won't be able to lock a target closer than 25m
		nvLock = 1; // Can lock onto IR Grenades
		trackLead = 1; // Missile intercepts
		trackOversteer = 1; // Missiles flies straight to its target
		cameraViewAvailable = 1; // pilot can see the missile's flight from missile's perspective
		weaponLockDelay = 0; // Immediate lock if the locking conditions are met
        /*class ace_missileguidance: ace_missileguidance {
            canVanillaLock = 1;
            enabled = 1; // Missile Guidance must be explicitly enabled
            seekLastTargetPos = 1;
            defaultSeekerType = "MillimeterWaveRadar";
            seekerTypes[] = { "MillimeterWaveRadar" };
            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = { "LOBL" };

            activeRadarEngageDistance = 1000;
            seekerMaxRange = 2000; // distance that the hellfire internal radar can scan
        };*/
		// Begin ACE guidance Configs
        /*class ace_missileguidance {
            enabled = 1; // Explicit enabling of the system

            pitchRate = 30; // How many degrees/second the missile can pitch
            yawRate = 30; // How many degrees/second this missile can yaw

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH"; // Default seeker type
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS" };

            defaultSeekerLockMode = "LOAL"; // Default lock mode
            seekerLockModes[] = { "LOAL", "LOBL" };

            defaultNavigationType = "AugmentedProportionalNavigation"; // Default navigation type
            navigationTypes[] = { "ZeroEffortMiss", "AugmentedProportionalNavigation" }; // Navigation types this missile can use

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 360;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;         // Minimum range from the missile which the seeker can visually search
            seekerMaxRange = 8000;      // Maximum range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "hellfire"; // Default attack profile
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"}; // Possible attack profiles

            // State machine defining what navigation type to use in this missiles phase
            class navigationStates {
                class initial {
                    transitionCondition = "my_fnc_navigationTransition"; // Condition needed to transition to next state
                    navigationType = "AugmentedProportionalNavigation"; // Navigation type to use in this state
                };
                class terminal {
                    transitionCondition = "";
                    navigationType = "ZeroEffortMiss";
                };
                // transitions from initial -> termimal
                states[] = {"initial", "terminal"};
            };
        };

        // Vanilla lock system vars
        weaponLockSystem = "8";
        maneuvrability = 0; // no maneuvrability so that default guidance doesnt work

        flightProfiles[] = {};
        class Components {
            class SensorsManagerComponent {
                class Components {
                    class MillimeterWaveRadar {
                        componentType = "ActiveRadarSensorComponent";
                        class AirTarget {
                            minRange = 0;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        class GroundTarget {
                            minRange = 0;
                            maxRange = 16000;
                            objectDistanceLimitCoef = -1;
                            viewDistanceLimitCoef = -1;
                        };
                        typeRecognitionDistance     = 4000;
                        angleRangeHorizontal        = 70;
                        angleRangeVertical          = 70;
                        groundNoiseDistanceCoef     = 0; // relevant to AA missiles - not really for this
                        maxGroundNoiseDistance      = 250;
                        minSpeedThreshold           = 0;
                        maxSpeedThreshold           = 600;
                        nightRangeCoef = 1;
                        maxFogSeeThrough = 0.8;
                    };
                };
            };
        };*/
	};
};