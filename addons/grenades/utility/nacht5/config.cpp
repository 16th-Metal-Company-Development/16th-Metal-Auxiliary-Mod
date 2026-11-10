class cfgPatches
{
	class Met_Nacht5_Smokes
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]={};
		magazines[]=
		{
			"MET_Nacht_White",
			"MET_Nacht_Blue",
			"MET_Nacht_Metal",
			"MET_Nacht_Purple",
			"MET_Nacht_Yellow",
			"MET_Nacht_Red",
			"MET_Nacht_Green",
			"MET_Nacht_Orange",
			"MET_Nacht_Turquoise",
			"MET_Nacht_Teal"
		};
	};
};
class CfgWeapons
{
	class Default;
	class GrenadeLauncher: Default
	{
		class ThrowMuzzle;
	};
	class Throw: GrenadeLauncher
	{
		muzzles[]+=
		{
			"MET_Nacht_White_ThrowMuzzle",
			"MET_Nacht_Metal_ThrowMuzzle",
			"MET_Nacht_Purple_ThrowMuzzle",
			"MET_Nacht_Yellow_ThrowMuzzle",
			"MET_Nacht_Red_ThrowMuzzle",
			"MET_Nacht_Green_ThrowMuzzle",
			"MET_Nacht_Blue_ThrowMuzzle",
			"MET_Nacht_Orange_ThrowMuzzle",
			"MET_Nacht_Turquoise_ThrowMuzzle",
			"MET_Nacht_Teal_ThrowMuzzle",
			"MET_Nacht_CIS_ThrowMuzzle"
		};
		class MET_Nacht_White_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_White"
			};
		};
		class MET_Nacht_Metal_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Metal"
			};
		};
		class MET_Nacht_Purple_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Purple"
			};
		};
		class MET_Nacht_Yellow_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Yellow"
			};
		};
		class MET_Nacht_Red_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Red"
			};
		};
		class MET_Nacht_Green_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Green"
			};
		};
		class MET_Nacht_Blue_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Blue"
			};
		};
		class MET_Nacht_Orange_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Orange"
			};
		};
		class MET_Nacht_Turquoise_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Turquoise"
			};
		};
		class MET_Nacht_Teal_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_Teal"
			};
		};
		class MET_Nacht_CIS_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht_CIS"
			};
		};
	};
};
class CfgMagazines
{
	class 3AS_Smoke_Base;
	class MET_Nacht_White: 3AS_Smoke_Base
	{
		scope=2;
		author="16th Aux Team";
		displayName="[16th] Nacht-5 (White)";
		displayNameShort="Nacht-5 (White)";
		descriptionShort="Nacht-5 (White)";
		//ammo="3AS_SmokeShellBase";
		ammo="MET_SMOKE_WHITE";
	};
	class MET_Nacht_Blue: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Blue)";
		displayNameShort="Nacht-5 (Blue)";
		descriptionShort="Nacht-5 (Blue)";
		//ammo="3AS_SmokeShellBlue";
		ammo="MET_SMOKE_BLUE";
	};
	class MET_Nacht_Green: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Green)";
		displayNameShort="Nacht-5 (Green)";
		descriptionShort="Nacht-5 (Green)";
		//ammo="3AS_SmokeShellGreen";
		ammo="MET_SMOKE_GREEN";
	};
	class MET_Nacht_Metal: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Metal)";
		displayNameShort="Nacht-5 (Metal)";
		descriptionShort="Nacht-5 (Metal)";
		//ammo="3AS_SmokeShellMetal";
		ammo="MET_SMOKE_METAL";
	};
	class MET_Nacht_Orange: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Orange)";
		displayNameShort="Nacht-5 (Orange)";
		descriptionShort="Nacht-5 (Orange)";
		//ammo="3AS_SmokeShellOrange";
		ammo="MET_SMOKE_ORANGE";
	};
	class MET_Nacht_Purple: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Purple)";
		displayNameShort="Nacht-5 (Purple)";
		descriptionShort="Nacht-5 (Purple)";
		//ammo="3AS_SmokeShellPurple";
		ammo="MET_SMOKE_PURPLE";
	};
	class MET_Nacht_Red: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Red)";
		displayNameShort="Nacht-5 (Red)";
		descriptionShort="Nacht-5 (Red)";
		//ammo="3AS_SmokeShellRed";
		ammo="MET_SMOKE_RED";
	};
	class MET_Nacht_Teal: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Teal)";
		displayNameShort="Nacht-5 (Teal)";
		descriptionShort="Nacht-5 (Teal)";
		//ammo="3AS_SmokeShellOrange";
		ammo="MET_SMOKE_TEAL";
	};
	class MET_Nacht_Turquoise: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Turquoise)";
		displayNameShort="Nacht-5 (Turquoise)";
		descriptionShort="Nacht-5 (Turquoise)";
		//ammo="3AS_SmokeShellOrange";
		ammo="MET_SMOKE_TURQUOISE";
	};
	class MET_Nacht_Yellow: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (Yellow)";
		displayNameShort="Nacht-5 (Yellow)";
		descriptionShort="Nacht-5 (Yellow)";
		//ammo="3AS_SmokeShellYellow";
		ammo="MET_SMOKE_YELLOW";
	};
	class MET_Nacht_CIS: MET_Nacht_White
	{
		displayName="[16th] Nacht-5 (CIS)";
		displayNameShort="Nacht-5 (CIS)";
		descriptionShort="Nacht-5 (CIS)";
		//ammo="3AS_SmokeShellCIS";
		ammo="MET_SMOKE_CIS";
	};
};
class CfgCloudLets
{
	class Default;
	class MET_HandSmokeEffect: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.03;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=20;
		moveVelocity[]={1,0.3,0.3};
		rotationVelocity=1;
		weight=1.28;
		volume=1;
		rubbing=0.05;
		size[]={0.5,3,12};
		color[]=
		{
			{0.6,0.6,0.6,0.2},
			{0.6,0.6,0.6,0.05},
			{0.6,0.6,0.6,0}
		};
		animationSpeed[]={1.5,0.5};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0.04;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.6;
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.5,0.5,0.5};
		rotationVelocityVar=20;
		sizeVar=1;
		colorVar[]={0,0,0,0.35};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MET_HandSmokeEffect2: MET_HandSmokeEffect
	{
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=4;
		particleFSLoop=0;
		color[]=
		{
			{0.6,0.6,0.6,1},
			{0.6,0.6,0.6,0.5},
			{0.6,0.6,0.6,0}
		};
	};
	class FireSparksSmall;
	class MET_LowSparks: FireSparksSmall
	{
		size[]={0.02,0.06,0.02};
		lifeTime=0.34999999;
		interval=0.05;
		color[]=
		{
			{1,0.95,0.8,0.9},
			{1,0.6,0.25,0.5},
			{0.7,0.2,0.05,0}
		};
	};
};
class MET_HandSmokeEffect
{
	class MET_HandSmokePlume
	{
		simulation="particles";
		type="MET_HandSmokeEffect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class MET_HandSmokePlume2
	{
		simulation="particles";
		type="MET_HandSmokeEffect2";
		position[]={0,0,0};
		intensity=2;
		interval=2;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_LowSparks";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class MET_SignalSmoke
{
	class SmokeShell
	{
		simulation="particles";
		type="Aux212SignalSmokeShellBase";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="Aux212SignalSmokeShellBaseUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="Aux212SignalSmokeFlareCoreWhite";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="Aux212SignalSmokeFlareLightWhite1";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="Aux212SignalSmokeFlareLightWhite2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class CfgAmmo
{
	class SmokeShell;
	// class SmokeShellOrange;
	class MET_SMOKE_WHITE: SmokeShell
	{
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		smokeColor[]={1,1,1,1};
		effectsSmoke="MET_HandSmokeEffect";
		SmokeShellSoundHit1[]=
		{
			"z\MET\addons\grenades\data\sounds\smoke_explode.wss",
			"+10db",
			1,
			500
		};
		SmokeShellSoundLoop1[]=
		{
			"z\MET\addons\grenades\data\sounds\smoke_loop.wss",
			"+3db",
			1,
			150
		};
		grenadeFireSound[]=
		{
			"SmokeShellSoundHit1",
			1
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			1
		};
		/*soundHit[]=
		{
			"",
			0,
			1
		};
		SmokeShellSoundHit1[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_1",
			1.2589254,
			1,
			100
		};
		SmokeShellSoundHit2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_2",
			1.2589254,
			1,
			100
		};
		SmokeShellSoundHit3[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_3",
			1.2589254,
			1,
			100
		};
		SmokeShellSoundLoop1[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop1",
			0.12589253,
			1,
			70
		};
		SmokeShellSoundLoop2[]=
		{
			"A3\Sounds_F\weapons\smokeshell\smoke_loop2",
			0.12589253,
			1,
			70
		};
		grenadeFireSound[]=
		{
			"SmokeShellSoundHit1",
			0.25,
			"SmokeShellSoundHit2",
			0.25,
			"SmokeShellSoundHit3",
			0.5
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			0.5,
			"SmokeShellSoundLoop2",
			0.5
		};*/
	};
	class MET_SMOKE_BLUE: MET_SMOKE_WHITE
	{
		smokeColor[]={0.1183, 0.1867, 1, 1};
	};
	class MET_SMOKE_GREEN: MET_SMOKE_WHITE
	{
		smokeColor[]={0.09, 0.58, 0.09, 1};
	};
	class MET_SMOKE_METAL: MET_SMOKE_WHITE
	{
		smokeColor[]={0.1373, 0.1608, 0.2314, 1};
	};
	class MET_SMOKE_ORANGE: MET_SMOKE_WHITE
	{
		smokeColor[]={1, 0.535, 0, 1};
	};
	class MET_SMOKE_PURPLE: MET_SMOKE_WHITE
	{
		smokeColor[]={0.631, 0, 0.631, 1};
	};
	class MET_SMOKE_RED: MET_SMOKE_WHITE
	{
		smokeColor[]={0.725, 0.1, 0.1, 1};
	};
	class MET_SMOKE_TEAL: MET_SMOKE_WHITE
	{
		smokeColor[]={0, 0.9, 0.669, 1};
	};
	class MET_SMOKE_TURQUOISE: MET_SMOKE_WHITE
	{
		smokeColor[]={0, 0.876, 0.9, 1};
	};
	class MET_SMOKE_YELLOW: MET_SMOKE_WHITE
	{
		smokeColor[]={0.902, 0.8, 0, 1};
	};
	class MET_SMOKE_CIS: MET_SMOKE_WHITE
	{
		smokeColor[]={0.686, 0.686, 1, 1};
	};
	/*class Met_Ammo_smoke_turquoise: Met_Ammo_smoke_white
	{
		smokeColor[]={0, 0.976, 1,1};
		effectsSmoke="HTASmokeEffect";
	};
	class Met_Ammo_smoke_teal: Met_Ammo_smoke_white
	{
		smokeColor[]={0, 1, 0.769,1};
		effectsSmoke="HTASmokeEffect";
	};
	class Met_Ammo_smoke_green: Met_Ammo_smoke_white
	{
		smokeColor[]={0.03, 0.8, 0.02,1};
		effectsSmoke="HTASmokeEffect";
	};
	class Met_Ammo_smoke_orange: Met_Ammo_smoke_white
	{
		smokeColor[]={1, 0.565, 0,1};
		effectsSmoke="HTASmokeEffect";
	};
	class Met_Ammo_smoke_purple: Met_Ammo_smoke_white
	{
		smokeColor[]={0.478, 0, 1,1};
		effectsSmoke="HTASmokeEffect";
	};
	class Met_Ammo_smoke_red: Met_Ammo_smoke_white
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke="HTASmokeEffect";
	};
	class Met_Ammo_smoke_yellow: Met_Ammo_smoke_white
	{
		smokeColor[]={0.949, 0.937, 0.094,1};
		effectsSmoke="HTASmokeEffect";
	};
	/*	class MetAux_Weapons_Ammo_smoke_white: SmokeShell
	{
		simulation="shotSmokeX";
		smokeColor[]={1,1,1,1};
		effectsSmoke="MetAux_particle_effect_SmokeShellWhite";
		model="kobra\442_weapons\explosive\basic_smoke.p3d";
		SmokeShellSoundHit1[]=
		{
			"z\MET\addons\grenades\data\sounds\smoke_explode.wss",
			"+10db",
			1,
			500
		};
		SmokeShellSoundLoop1[]=
		{
			"z\MET\addons\grenades\data\sounds\smoke_loop.wss",
			"+3db",
			1,
			150
		};
		grenadeFireSound[]=
		{
			"SmokeShellSoundHit1",
			1
		};
		grenadeBurningSound[]=
		{
			"SmokeShellSoundLoop1",
			1
		};
	};
	class MetAux_Weapons_Ammo_smoke_purple: MetAux_Weapons_Ammo_smoke_white
	{
		smokeColor[]={0.4341,0.1388,0.41439998,1};
		effectsSmoke="MetAux_particle_effect_SmokePurple";
	};
	class MetAux_Weapons_Ammo_smoke_yellow: MetAux_Weapons_Ammo_smoke_white
	{
		smokeColor[]={0.98830003,0.86059999,0.071900003,1};
		effectsSmoke="MetAux_particle_effect_SmokeYellow";
	};
	class MetAux_Weapons_Ammo_smoke_red: MetAux_Weapons_Ammo_smoke_white
	{
		smokeColor[]={0.84380001,0.1383,0.1353,1};
		effectsSmoke="MetAux_particle_effect_SmokeRed";
	};
	class MetAux_Weapons_Ammo_smoke_green: MetAux_Weapons_Ammo_smoke_white
	{
		smokeColor[]={0.1383,0.84380001,0.1353,1};
		effectsSmoke="MetAux_particle_effect_SmokeGreen";
	};
	class MetAux_Weapons_Ammo_smoke_blue: MetAux_Weapons_Ammo_smoke_white
	{
		smokeColor[]={0.1183,0.1867,1,1};
		effectsSmoke="MetAux_particle_effect_SmokeBlue";
	};
	class MetAux_Weapons_Ammo_smoke_orange: MetAux_Weapons_Ammo_smoke_white
	{
		smokeColor[]={0.91320002,0.1763,0.0070000002,0.80000001};
		effectsSmoke="SmokeShellOrangeEffect";
	};
	class MetAux_Weapons_Ammo_smoke_MASH: SmokeShellOrange
	{
		model="\kobra\442_weapons\explosive\basic_smoke.p3d";
		rd501_fired_script_enabled=1;
		rd501_fired_script="_this call RD501_fnc_internal_CRML_launchMissileFromMashGrenade;";
	};*/
};
class CfgSoundShaders
{
	class MetAux_SoundShader_smokenade_closeExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\smoke_explode.wss",
				1
			}
		};
		volume=2;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{70,0}
		};
	};
	class MetAux_SoundShader_smokenade_midExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\smoke_explode.wss",
				1
			}
		};
		volume=2;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{500,0},
			{2200,0}
		};
	};
};
class CfgSoundSets
{
	class MetAux_soundset_rep_thermal_detonator_exp;
	class MetAux_soundset_smokenade_exp: MetAux_soundset_rep_thermal_detonator_exp
	{
		soundShaders[]=
		{
			"MetAux_SoundShader_smokenade_closeExp",
			"MetAux_SoundShader_smokenade_midExp"
		};
	};
};
class MetAux_particle_effect_SmokeShellWhite
{
	class SmokeShell
	{
		intensity=20;
		interval=10;
		position[]={0,0,0};
		simulation="particles";
		type="MetAux_cloudlet_smokeshell_white";
	};
	class SmokeShell2: SmokeShell
	{
		type="MetAux_cloudlet_smokeshell_white2";
	};
	class SmokeShell2UW: SmokeShell
	{
		type="MetAux_cloudlet_SmokeShellWhite2UW";
	};
	class SmokeShellUW: SmokeShell
	{
		type="MetAux_cloudlet_SmokeShellWhiteUW";
	};
};
class MetAux_particle_effect_SmokePurple: MetAux_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type="MetAux_cloudlet_smokeshell_purple";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MetAux_cloudlet_smokeshell_purple2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type="MetAux_cloudlet_SmokeShellpurple2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type="MetAux_cloudlet_SmokeShellpurpleUW";
	};
};
class MetAux_particle_effect_SmokeYellow: MetAux_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type="MetAux_cloudlet_smokeshell_yellow";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MetAux_cloudlet_smokeshell_yellow2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type="MetAux_cloudlet_SmokeShellyellow2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type="MetAux_cloudlet_SmokeShellyellowUW";
	};
};
class MetAux_particle_effect_SmokeRed: MetAux_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type="MetAux_cloudlet_smokeshell_red";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MetAux_cloudlet_smokeshell_red2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type="MetAux_cloudlet_SmokeShellred2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type="MetAux_cloudlet_SmokeShellredUW";
	};
};
class MetAux_particle_effect_SmokeGreen: MetAux_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type="MetAux_cloudlet_smokeshell_green";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MetAux_cloudlet_smokeshell_green2";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type="MetAux_cloudlet_SmokeShellgreen2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type="MetAux_cloudlet_SmokeShellgreenUW";
	};
};
class MetAux_particle_effect_SmokeBlue: MetAux_particle_effect_SmokeShellWhite
{
	class SmokeShell: SmokeShell
	{
		type="MetAux_cloudlet_smokeshell_blue";
	};
	class SmokeShell2: SmokeShell2
	{
		type="MetAux_cloudlet_smokeshell_blue";
	};
	class SmokeShell2UW: SmokeShell2UW
	{
		type="MetAux_cloudlet_SmokeShellblue2UW";
	};
	class SmokeShellUW: SmokeShellUW
	{
		type="MetAux_cloudlet_SmokeShellblueUW";
	};
};
class MetAux_particle_effect_SmokeShellWhiteWater
{
	colorCoef[]={0,0,0,1};
	interval=0.25;
};
class MetAux_particle_effect_SmokeShellPurpleWater
{
	colorCoef[]={0,0,0,1};
	interval=0.25;
};
class MetAux_particle_effect_SmokeShellYellowWater
{
	colorCoef[]={0,0,0,1};
	interval=0.25;
};
class MetAux_particle_effect_SmokeShellRedWater
{
	colorCoef[]={0,0,0,1};
	interval=0.25;
};
class MetAux_particle_effect_SmokeShellGreenWater
{
	colorCoef[]={0,0,0,1};
	interval=0.25;
};
class MetAux_particle_effect_SmokeShellBlueWater
{
	colorCoef[]={0,0,0,1};
	interval=0.25;
};
/*class CfgCloudlets
{
	class SmokeShellWhite;
	class SmokeShellWhiteWater;
	class SmokeShellWhite2;
	class SmokeShellWhiteUW;
	class SmokeShellWhite2UW;
	class MetAux_cloudlet_smokeshell_white: SmokeShellWhite
	{
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		blockAIVisibility=1;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.60000002,0.60000002,0.60000002,0}
		};
		moveVelocity[]={0.2,0.5,0.1};
		size[]={0.46000001,4.5,18};
		MoveVelocityVar[]={0.69999999,0.40000001,0.69999999};
	};
	class MetAux_cloudlet_smokeshell_purple: MetAux_cloudlet_smokeshell_white
	{
		color[]=
		{
			{0.4341,0.1388,0.41439998,0.2},
			{0.4341,0.1388,0.41439998,0.050000001},
			{0.4341,0.1388,0.41439998,0}
		};
	};
	class MetAux_cloudlet_smokeshell_yellow: MetAux_cloudlet_smokeshell_white
	{
		color[]=
		{
			{0.98830003,0.86059999,0.071900003,0.2},
			{0.98830003,0.86059999,0.071900003,0.050000001},
			{0.98830003,0.86059999,0.071900003,0}
		};
	};
	class MetAux_cloudlet_smokeshell_red: MetAux_cloudlet_smokeshell_white
	{
		color[]=
		{
			{0.84380001,0.1383,0.1353,0.2},
			{0.84380001,0.1383,0.1353,0.050000001},
			{0.84380001,0.1383,0.1353,0}
		};
	};
	class MetAux_cloudlet_smokeshell_green: MetAux_cloudlet_smokeshell_white
	{
		color[]=
		{
			{0.21250001,0.62580001,0.48909998,0.2},
			{0.21250001,0.62580001,0.48909998,0.050000001},
			{0.21250001,0.62580001,0.48909998,0}
		};
	};
	class MetAux_cloudlet_smokeshell_blue: MetAux_cloudlet_smokeshell_white
	{
		color[]=
		{
			{0.1183,0.1867,1,0.2},
			{0.1183,0.1867,1,0.050000001},
			{0.1183,0.1867,1,0}
		};
	};
	class MetAux_cloudlet_smokeshell_white2: MetAux_cloudlet_smokeshell_white
	{
		particleFSNtieth=16;
		particleFSIndex=12;
		particleFSFrameCount=4;
		particleFSLoop=0;
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,1},
			{0.60000002,0.60000002,0.60000002,0.5},
			{0.60000002,0.60000002,0.60000002,0}
		};
	};
	class MetAux_cloudlet_smokeshell_Purple2: MetAux_cloudlet_smokeshell_white2
	{
		color[]=
		{
			{0.4341,0.1388,0.41439998,0.2},
			{0.4341,0.1388,0.41439998,0.050000001},
			{0.4341,0.1388,0.41439998,0}
		};
	};
	class MetAux_cloudlet_smokeshell_Yellow2: MetAux_cloudlet_smokeshell_white2
	{
		color[]=
		{
			{0.98830003,0.86059999,0.071900003,0.2},
			{0.98830003,0.86059999,0.071900003,0.050000001},
			{0.98830003,0.86059999,0.071900003,0}
		};
	};
	class MetAux_cloudlet_smokeshell_Red2: MetAux_cloudlet_smokeshell_white2
	{
		color[]=
		{
			{0.84380001,0.1383,0.1353,0.2},
			{0.84380001,0.1383,0.1353,0.050000001},
			{0.84380001,0.1383,0.1353,0}
		};
	};
	class MetAux_cloudlet_smokeshell_Green2: MetAux_cloudlet_smokeshell_white2
	{
		color[]=
		{
			{0.21250001,0.62580001,0.48909998,0.2},
			{0.21250001,0.62580001,0.48909998,0.050000001},
			{0.21250001,0.62580001,0.48909998,0}
		};
	};
	class MetAux_cloudlet_smokeshell_Blue2: MetAux_cloudlet_smokeshell_white2
	{
		color[]=
		{
			{0.1183,0.1867,1,0.2},
			{0.1183,0.1867,1,0.050000001},
			{0.1183,0.1867,1,0}
		};
	};
	class MetAux_cloudlet_SmokeShellWhiteUW: SmokeShellWhiteUW
	{
		color[]=
		{
			{1,1,1,1}
		};
		randomDirectionIntensity=0.2;
		MoveVelocityVar[]={0.5,0.5,0.5};
	};
	class MetAux_cloudlet_SmokeShellPurpleUW: MetAux_cloudlet_SmokeShellWhiteUW
	{
		color[]=
		{
			{0.4341,0.1388,0.41439998,1}
		};
	};
	class MetAux_cloudlet_SmokeShellYellowUW: MetAux_cloudlet_SmokeShellWhiteUW
	{
		color[]=
		{
			{0.98830003,0.86059999,0.071900003,1}
		};
	};
	class MetAux_cloudlet_SmokeShellRedUW: MetAux_cloudlet_SmokeShellWhiteUW
	{
		color[]=
		{
			{0.84380001,0.1383,0.1353,1}
		};
	};
	class MetAux_cloudlet_SmokeShellGreenUW: MetAux_cloudlet_SmokeShellWhiteUW
	{
		color[]=
		{
			{0.21250001,0.62580001,0.48909998,1}
		};
	};
	class MetAux_cloudlet_SmokeShellBlueUW: MetAux_cloudlet_SmokeShellWhiteUW
	{
		color[]=
		{
			{0.1183,0.1867,1,1}
		};
	};
	class MetAux_cloudlet_SmokeShellWhite2UW: SmokeShellWhite2UW
	{
		postEffects="MetAux_particle_effect_SmokeShellWhiteWater";
	};
	class MetAux_cloudlet_SmokeShellPurple2UW: MetAux_cloudlet_SmokeShellWhite2UW
	{
		postEffects="MetAux_particle_effect_SmokeShellPurpleWater";
	};
	class MetAux_cloudlet_SmokeShellYellow2UW: MetAux_cloudlet_SmokeShellWhite2UW
	{
		postEffects="MetAux_particle_effect_SmokeShellYellowWater";
	};
	class MetAux_cloudlet_SmokeShellRed2UW: MetAux_cloudlet_SmokeShellWhite2UW
	{
		postEffects="MetAux_particle_effect_SmokeShellRedWater";
	};
	class MetAux_cloudlet_SmokeShellGreen2UW: MetAux_cloudlet_SmokeShellWhite2UW
	{
		postEffects="MetAux_particle_effect_SmokeShellGreenWater";
	};
	class MetAux_cloudlet_SmokeShellBlue2UW: MetAux_cloudlet_SmokeShellWhite2UW
	{
		postEffects="MetAux_particle_effect_SmokeShellBlueWater";
	};
};*/