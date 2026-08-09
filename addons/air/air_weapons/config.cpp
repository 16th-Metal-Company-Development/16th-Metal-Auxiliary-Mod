class CfgPatches
{
	class Metal_Air_Weapons
	{
		units[] = {};
		weapons[] = {};
		magazines[] ={};
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies",
            "Metal_Air_Ammo",
            "Metal_Air_Magazines"
		};
	};
};
class CfgSoundShaders
{
	class MET_LAAT_Shot_SoundShader
	{
		samples[]=
		{
			
			{
				"z\MET\addons\air\air_weapons\sounds\laat_cannon_shot.ogg",
				1
			},
			
			{
				"z\MET\addons\air\air_weapons\sounds\laat_cannon_shot2.ogg",
				1
			},
			
			{
				"z\MET\addons\air\air_weapons\sounds\laat_cannon_shot3.ogg",
				1
			}
		};
		volume=3;
		range=3500;
	};
	class MET_ARC_Shot_SoundShader
	{
		samples[]=
		{
			
			{
				"z\MET\addons\air\air_weapons\sounds\arc_cannon_shot1.ogg",
				1
			},
			
			{
				"z\MET\addons\air\air_weapons\sounds\arc_cannon_shot2.ogg",
				1
			},
			
			{
				"z\MET\addons\air\air_weapons\sounds\arc_cannon_shot3.ogg",
				1
			}
		};
		volume=3;
		range=2500;
	};
};
class CfgSoundSets
{
	class MET_LAAT_Shot_SoundSet
	{
		soundShaders[]=
		{
			"MET_LAAT_Shot_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
	class MET_ARC_Shot_SoundSet
	{
		soundShaders[]=
		{
			"MET_ARC_Shot_SoundShader"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		sound3DProcessingType="WeaponMediumShot3DProcessingType";
		distanceFilter="weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor=0.5;
		obstructionFactor=0.30000001;
		spatial=1;
		doppler=0;
		loop=0;
	};
};
class Mode_SemiAuto;
class CfgWeapons
{
	class CannonCore;
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF;
	};
	class MET_LAAT_Cannon_HE: Cannon_30mm_Plane_CAS_02_F
	{
		displayName="Medium Blaster Cannon";
		canLock=0;
		ballisticsComputer="2 + 4 + 8";
		burst=1;
		magazines[]=
		{
			"MET_LAAT_HE_Mag"
		};
		class GunParticles
		{
		};
		modes[]=
		{
			"Low",
			"High",
			"close",
			"near",
			"short",
			"medium",
			"far"
		};
		class Low: LowROF
		{
			reloadTime=0.15;
			displayName="";
			burst=1;
			textureType="burst";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MET_LAAT_Shot_SoundSet"
				};
			};
		};
		class High: Low
		{
			reloadTime=0.0375;
			textureType="fullAuto";
		}
		class close: LowROF
		{
			showToPlayer=0;
			burst=1;
			aiRateOfFire=0.75;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=150;
			midRangeProbab=0.88;
			maxRange=300;
			maxRangeProbab=0.30000001;
		};
		class near: close
		{
			aiRateOfFire=1.25;
			aiRateOfFireDistance=400;
			minRange=1;
			minRangeProbab=0.34999999;
			midRange=250;
			midRangeProbab=0.88;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class short: close
		{
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.30000001;
			midRange=400;
			midRangeProbab=0.88;
			maxRange=600;
			maxRangeProbab=0.30000001;
		};
		class medium: close
		{
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.30000001;
			midRange=700;
			midRangeProbab=0.77999997;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			aiRateOfFireDistance=1500;
			minRange=800;
			minRangeProbab=0.2;
			midRange=1000;
			midRangeProbab=0.60000002;
			maxRange=1500;
			maxRangeProbab=0.1;
		};
	};
	class MET_LAAT_Cannon_AP: MET_LAAT_Cannon_HE
	{
		magazines[]=
		{
			"MET_LAAT_AP_Mag"
		};
	};
	class MET_LAAT_Cannon: CannonCore
	{
		displayName = "Medium Blaster Cannon";
		muzzles[] = {"MET_LAAT_Cannon_HE_Muzzle", "MET_LAAT_Cannon_AP_Muzzle"};

		class MET_LAAT_Cannon_HE_Muzzle: MET_LAAT_Cannon_HE
		{
			displayName = "Medium Blaster Cannon (HE)";
		};
		class MET_LAAT_Cannon_AP_Muzzle: MET_LAAT_Cannon_AP
		{
			displayName = "Medium Blaster Cannon (AP)";
		};
	};
	class weapon_BIM9xLauncher;
	class MET_Mass_Driver_Missile_Launcher: weapon_BIM9xLauncher
	{
		displayName="Mass Driver Missile";
		magazines[]=
		{
			"MET_Mass_Driver_Missile_Rack"
		};
		model="a3\weapons_f\empty.p3d";
		lockAcquire = 1; // automatic acquisition of the closest target in missileLockCone
	};
	class weapon_AGM_65Launcher;
	class MET_Mass_Driver_Missile_Launcher_AT: weapon_AGM_65Launcher
	{
		displayName="Mass Driver Missile";
		magazines[]=
		{
			"MET_Mass_Driver_Missile_Rack_AT"
		};
		model="a3\weapons_f\empty.p3d";
		lockAcquire = 1; // automatic acquisition of the closest target in missileLockCone
	};
    class rockets_Skyfire;
	class mass_rocket_Launcher: rockets_Skyfire
	{
		displayName="[16th] Mass Rocket Launcher";
		magazines[]=
		{
			"MET_Mass_Rocket_Mag"
		};
		canLock=0;
		ballisticsComputer=8;
	};
	class MET_ARC_Medium_Cannon: Cannon_30mm_Plane_CAS_02_F
	{
		displayName="Blastech ME518 Medium Blaster Cannon";
		canLock=0;
		ballisticsComputer="4 + 2 + 8";
		magazines[]=
		{
			"MET_ARC_MediumMag"
		};
		reloadTime=0.059999999;
		class LowROF: LowROF
		{
			reloadTime=0.15;
			displayName="Blastech ME518 Medium Blaster Cannon";
			canLock=2;
			burst=2;
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"MET_ARC_Shot_SoundSet"
				};
			};
		};
		class GunParticles
		{
		};
	};
	class MET_ARC_Medium_Cannon_Rear: Cannon_30mm_Plane_CAS_02_F
	{
		displayName="Blastech LE396 Blaster Cannon";
		canLock=0;
		ballisticsComputer="4 + 2 + 8";
		magazines[]=
		{
			"MET_ARC_CannonMag"
		};
		reloadTime=0.059999999;
		class LowROF: LowROF
		{
			reloadTime=0.059999999;
			displayName="";
			burst=1;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_YwingBlaster_SoundSet"
				};
			};
		};
		class GunParticles
		{
		};
	};
};