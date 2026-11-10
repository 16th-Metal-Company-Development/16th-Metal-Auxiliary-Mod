class cfgPatches
{
	class Met_Nacht8_Smokes
	{
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
		units[]={};
		weapons[]={};
		magazines[]=
		{
			"MET_Nacht8_White",
			"MET_Nacht8_Blue",
			"MET_Nacht8_Green",
			"MET_Nacht8_Metal",
			"MET_Nacht8_Orange",
			"MET_Nacht8_Purple",
			"MET_Nacht8_Red",
			"MET_Nacht8_Turquoise",
			"MET_Nacht8_Teal",
			"MET_Nacht8_Yellow",
			"MET_Nacht8_CIS"
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
			"MET_Nacht8_White_ThrowMuzzle",
			"MET_Nacht8_Blue_ThrowMuzzle",
			"MET_Nacht8_Green_ThrowMuzzle",
			"MET_Nacht8_Metal_ThrowMuzzle",
			"MET_Nacht8_Orange_ThrowMuzzle",
			"MET_Nacht8_Purple_ThrowMuzzle",
			"MET_Nacht8_Red_ThrowMuzzle",
			"MET_Nacht8_Turquoise_ThrowMuzzle",
			"MET_Nacht8_Teal_ThrowMuzzle",
			"MET_Nacht8_Yellow_ThrowMuzzle",
			"MET_Nacht8_CIS_ThrowMuzzle"
		};
		class MET_Nacht8_White_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_White"
			};
		};
		class MET_Nacht8_Blue_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Blue"
			};
		};
		class MET_Nacht8_Green_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Green"
			};
		};
		class MET_Nacht8_Metal_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Metal"
			};
		};
		class MET_Nacht8_Orange_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Orange"
			};
		};
		class MET_Nacht8_Purple_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Purple"
			};
		};
		class MET_Nacht8_Red_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Red"
			};
		};
		class MET_Nacht8_Turquoise_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Turquoise"
			};
		};
		class MET_Nacht8_Teal_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Teal"
			};
		};
		class MET_Nacht8_Yellow_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_Yellow"
			};
		};
		class MET_Nacht8_CIS_ThrowMuzzle: ThrowMuzzle
		{
			magazines[]=
			{
				"MET_Nacht8_CIS"
			};
		};
	};
};
class CfgMagazines
{
	class 3AS_Smoke_Base;
	class MET_Nacht8_White: 3AS_Smoke_Base
	{
		scope=2;
		author="16th Aux Team";
		displayName="[16th] Nacht-8 (White)";
		displayNameShort="Nacht-8 (White)";
		descriptionShort="Nacht-8 (White)";
		//ammo="3AS_SmokeShellBase";
		ammo="MET_SIGNAL_WHITE";
	};
	class MET_Nacht8_Blue: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Blue)";
		displayNameShort="Nacht-8 (Blue)";
		descriptionShort="Nacht-8 (Blue)";
		//ammo="3AS_SmokeShellBlue";
		ammo="MET_SIGNAL_BLUE";
	};
	class MET_Nacht8_Green: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Green)";
		displayNameShort="Nacht-8 (Green)";
		descriptionShort="Nacht-8 (Green)";
		//ammo="3AS_SmokeShellGreen";
		ammo="MET_SIGNAL_GREEN";
	};
	class MET_Nacht8_Metal: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Metal)";
		displayNameShort="Nacht-8 (Metal)";
		descriptionShort="Nacht-8 (Metal)";
		//ammo="3AS_SmokeShellMetal";
		ammo="MET_SIGNAL_METAL";
	};
	class MET_Nacht8_Orange: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Orange)";
		displayNameShort="Nacht-8 (Orange)";
		descriptionShort="Nacht-8 (Orange)";
		//ammo="3AS_SmokeShellOrange";
		ammo="MET_SIGNAL_ORANGE";
	};
	class MET_Nacht8_Purple: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Purple)";
		displayNameShort="Nacht-8 (Purple)";
		descriptionShort="Nacht-8 (Purple)";
		//ammo="3AS_SmokeShellPurple";
		ammo="MET_SIGNAL_PURPLE";
	};
	class MET_Nacht8_Red: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Red)";
		displayNameShort="Nacht-8 (Red)";
		descriptionShort="Nacht-8 (Red)";
		//ammo="3AS_SmokeShellRed";
		ammo="MET_SIGNAL_RED";
	};
	class MET_Nacht8_Teal: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Teal)";
		displayNameShort="Nacht-8 (Teal)";
		descriptionShort="Nacht-8 (Teal)";
		//ammo="3AS_SmokeShellOrange";
		ammo="MET_SIGNAL_TEAL";
	};
	class MET_Nacht8_Turquoise: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Turquoise)";
		displayNameShort="Nacht-8 (Turquoise)";
		descriptionShort="Nacht-8 (Turquoise)";
		//ammo="3AS_SmokeShellOrange";
		ammo="MET_SIGNAL_TURQUOISE";
	};
	class MET_Nacht8_Yellow: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (Yellow)";
		displayNameShort="Nacht-8 (Yellow)";
		descriptionShort="Nacht-8 (Yellow)";
		//ammo="3AS_SmokeShellYellow";
		ammo="MET_SIGNAL_YELLOW";
	};
	class MET_Nacht8_CIS: MET_Nacht8_White
	{
		displayName="[16th] Nacht-8 (CIS)";
		displayNameShort="Nacht-8 (CIS)";
		descriptionShort="Nacht-8 (CIS)";
		//ammo="3AS_SmokeShellCIS";
		ammo="MET_SIGNAL_CIS";
	};
};
class CfgCloudlets
{
	class SmokeShellWhite;
	class MET_Nacht8SignalBase: SmokeShellWhite
	{
		moveVelocity[]={0.003,0.003,0.005};
		MoveVelocityVar[]={0.02,0.02,0.01};
		weight=1.05;
		size[]={0.01,4,6};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0.03;
		rotationVelocityVar=15;
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		lifeTime=8;
		color[]=
		{
			{0.95,0.95,0.95,0.85},
			{0.8,0.8,0.8,0.55},
			{0.7,0.7,0.7,0.25}
		};
		emissiveColor[]=
		{
			{28,28,26,1},
			{14,14,13,1},
			{3,3,2.5,1}
		};
	};
	class SmokeShellWhiteUW;
	class MET_Nacht8SignalBaseUW: SmokeShellWhiteUW
	{
		moveVelocity[]={0.002,0.002,0.004};
		MoveVelocityVar[]={0.02,0.02,0.01};
		weight=1.1;
		size[]={0.01,3,5};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0.03;
		rotationVelocityVar=15;
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		lifeTime=5;
		color[]=
		{
			{0.95,0.95,0.95,0.85},
			{0.8,0.8,0.8,0.55},
			{0.6,0.6,0.6,0.25}
		};
		emissiveColor[]=
		{
			{28,28,26,1},
			{14,14,13,1},
			{3,3,2.5,1}
		};
	};
	class MET_Nacht8SignalBlue: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{3,6,28,1},
			{1.5,3,14,1},
			{0.3,0.5,3,1}
		};
	};
	class MET_Nacht8SignalBlueUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{3,6,28,1},
			{1.5,3,14,1},
			{0.3,0.5,3,1}
		};
	};
	class MET_Nacht8SignalGreen: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{4,28,6,1},
			{2,14,3,1},
			{0.4,3,0.5,1}
		};
	};
	class MET_Nacht8SignalGreenUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{4,28,6,1},
			{2,14,3,1},
			{0.4,3,0.5,1}
		};
	};
	class MET_Nacht8SignalMetal: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{3,6,28,1},
			{1.5,3,14,1},
			{0.3,0.5,3,1}
		};
	};
	class MET_Nacht8SignalMetalUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{3,6,28,1},
			{1.5,3,14,1},
			{0.3,0.5,3,1}
		};
	};
	class MET_Nacht8SignalOrange: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{28,10,2,1},
			{14,5,1,1},
			{3,1,0.2,1}
		};
	};
	class MET_Nacht8SignalOrangeUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{28,10,2,1},
			{14,5,1,1},
			{3,1,0.2,1}
		};
	};
	class MET_Nacht8SignalPurple: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{18,4,28,1},
			{9,2,14,1},
			{2,0.4,3,1}
		};
	};
	class MET_Nacht8SignalPurpleUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{18,4,28,1},
			{9,2,14,1},
			{2,0.4,3,1}
		};
	};
	class MET_Nacht8SignalRed: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{28,4,2,1},
			{14,2,1,1},
			{3,0.4,0.2,1}
		};
	};
	class MET_Nacht8SignalRedUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{28,4,2,1},
			{14,2,1,1},
			{3,0.4,0.2,1}
		};
	};
	class MET_Nacht8SignalTeal: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{2,28,20,1},
			{1,14,8,1},
			{0.5,3,1,1}
		};
	};
	class MET_Nacht8SignalTealUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{2,28,20,1},
			{1,14,8,1},
			{0.5,3,1,1}
		};
	};
	class MET_Nacht8SignalTurquoise: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{4,24,28,1},
			{2,12,14,1},
			{0.4,2.5,3,1}
		};
	};
	class MET_Nacht8SignalTurquoiseUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{4,24,28,1},
			{2,12,14,1},
			{0.4,2.5,3,1}
		};
	};
	class MET_Nacht8SignalYellow: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{28,24,4,1},
			{14,12,2,1},
			{3,2.5,0.4,1}
		};
	};
	class MET_Nacht8SignalYellowUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{28,24,4,1},
			{14,12,2,1},
			{3,2.5,0.4,1}
		};
	};
	class MET_Nacht8SignalCIS: MET_Nacht8SignalBase
	{
		emissiveColor[]=
		{
			{28,4,2,1},
			{14,2,1,1},
			{3,0.4,0.2,1}
		};
	};
	class MET_Nacht8SignalCISUW: MET_Nacht8SignalBaseUW
	{
		emissiveColor[]=
		{
			{15,15,28,1},
			{5,5,14,1},
			{0.3,0.3,3,1}
		};
	};
	class FireSparksSmall;
	class MET_Nacht8SignalFlareCore: FireSparksSmall
	{
		size[]={0.12,0.06,0.02};
		lifeTime=0.35;
		interval=0.02;
		color[]=
		{
			{1,0.95,0.8,0.9},
			{1,0.6,0.25,0.5},
			{0.7,0.2,0.05,0}
		};
	};
};
class CfgLights
{
	class MET_NACHT8_SIGNAL_WHITE
	{
		color[]={1,1,0.95,1};
		ambient[]={0.18,0.18,0.16,1};
		intensity=350;
		brightness=3;
		drawLight=1;
		dayLight=1;
		useFlare=1;
		flareSize=10;
		flareMaxDistance=200;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=0.015;
			hardLimitStart=100;
			hardLimitEnd=200;
		};
	};
	class MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.85,0.9,1,1};
		ambient[]={0.1,0.12,0.16,1};
		intensity=180;
		brightness=2;
		drawLight=1;
		dayLight=1;
		useFlare=0;
		flareSize=0;
		flareMaxDistance=0;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=0.012;
			hardLimitStart=50;
			hardLimitEnd=125;
		};
	};
	class MET_NACHT8_SIGNAL_BLUE: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0.1183, 0.1867, 1, 1};
		ambient[]={0.1583,0.2267,1,1};
	};
	class MET_NACHT8_SIGNAL_BLUE2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.0783,0.1267,0.84,1};
		ambient[]={0.1283,0.1567,0.9,1};
	};
	class MET_NACHT8_SIGNAL_GREEN: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0.067, 0.89, 0.035, 1};
		ambient[]={0.027, 0.082, 0.005, 1};
	};
	class MET_NACHT8_SIGNAL_GREEN2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.047,0.76,0.015,1};
		ambient[]={0.027,0.60,0.005,1};
	};
	class MET_NACHT8_SIGNAL_METAL: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0.1373, 0.1608, 0.2314, 1};
		ambient[]={0.1773, 0.2008, 0.2714, 1};
	};
	class MET_NACHT8_SIGNAL_METAL2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.1073, 0.1008, 0.1914,1};
		ambient[]={0.1373, 0.1308, 0.2314,1};
	};
	class MET_NACHT8_SIGNAL_ORANGE: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={1, 0.565, 0, 1};
		ambient[]={0.85, 0.505, 0, 1};
	};
	class MET_NACHT8_SIGNAL_ORANGE2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.83, 0.485, 0,1};
		ambient[]={0.7,0.425,0,1};
	};
	class MET_NACHT8_SIGNAL_PURPLE: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0.478, 0, 1, 1};
		ambient[]={0.378, 0, 0.9, 1};
	};
	class MET_NACHT8_SIGNAL_PURPLE2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.83, 0, 0.88,1};
		ambient[]={0.75,0,0.8,1};
	};
	class MET_NACHT8_SIGNAL_RED: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0.8438, 0.1383, 0.1353, 1};
		ambient[]={0.5838, 0.1183, 0.1253, 1};
	};
	class MET_NACHT8_SIGNAL_RED2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.6638, 0.1183, 0.1253,1};
		ambient[]={0.4838, 0.0983, 0.1203,1};
	};
	class MET_NACHT8_SIGNAL_TEAL: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0, 1, 0.769, 1};
		ambient[]={0, 0.93, 0.729, 1};
	};
	class MET_NACHT8_SIGNAL_TEAL2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0, 0.87, 0.749,1};
		ambient[]={0, 0.81, 0.729,1};
	};
	class MET_NACHT8_SIGNAL_TURQUOISE: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0, 0.976, 1, 1};
		ambient[]={0, 0.856, 0.87, 1};
	};
	class MET_NACHT8_SIGNAL_TURQUOISE2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0, 0.836, 0.85, 1};
		ambient[]={0, 0.736, 0.75, 1};
	};
	class MET_NACHT8_SIGNAL_YELLOW: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0.949, 0.937, 0.094, 1};
		ambient[]={0.809, 0.817, 0.054, 1};
	};
	class MET_NACHT8_SIGNAL_YELLOW2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.779, 0.777, 0.054,1};
		ambient[]={0.629, 0.657, 0.024,1};
	};
	class MET_NACHT8_SIGNAL_CIS: MET_NACHT8_SIGNAL_WHITE
	{
		color[]={0.686, 0.686, 1, 1};
		ambient[]={0.726, 0.726, 1, 1};
	};
	class MET_NACHT8_SIGNAL_CIS2: MET_NACHT8_SIGNAL_WHITE2
	{
		color[]={0.656, 0.656, 0.84, 1};
		ambient[]={0.686, 0.686, 0.88, 1};
	};
};
class Nacht8SmokeEffectWhite
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalBase";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalBaseUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_WHITE";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_WHITE2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectBlue
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalBlue";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalBlueUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_BLUE";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_BLUE2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectGreen
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalGreen";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalGreenUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_GREEN";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_GREEN2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectMetal
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalMetal";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalMetalUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_METAL";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_METAL2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectOrange
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalOrange";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalOrangeUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_ORANGE";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_ORANGE2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectPurple
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalPurple";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalPurpleUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_PURPLE";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_PURPLE2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectRed
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalRed";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalRedUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_RED";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_RED2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectTeal
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalTeal";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalTealUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_TEAL";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_TEAL2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectTurquoise
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalTurquoise";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalTurquoiseUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_TURQUOISE";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_TURQUOISE2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectYellow
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalYellow";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalYellowUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_YELLOW";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_YELLOW2";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
};
class Nacht8SmokeEffectCIS
{
	class SmokeShell
	{
		simulation="particles";
		type="MET_Nacht8SignalCIS";
		position[]={0,0.125,0};
		intensity=0.025;
		interval=1000;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="MET_Nacht8SignalCISUW";
		position[]={0,0.125,0};
		intensity=0.2;
		interval=4.5;
	};
	class FlareCore
	{
		simulation="particles";
		type="MET_Nacht8SignalFlareCore";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light1
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_CIS";
		position[]={0,0.125,0};
		intensity=1;
		interval=1;
		lifeTime=300;
	};
	class Light2
	{
		simulation="light";
		type="MET_NACHT8_SIGNAL_CIS2";
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
	class MET_SIGNAL_WHITE: SmokeShell
	{
		model="3AS\3AS_Equipment\model\3AS_smokegrenade.p3d";
		smokeColor[]={1,1,1,1};
		effectsSmoke="Nacht8SmokeEffectWhite";
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
	class MET_SIGNAL_BLUE: MET_SIGNAL_WHITE
	{
		smokeColor[]={0.1183, 0.1867, 1, 1};
		effectsSmoke="Nacht8SmokeEffectBlue";
	};
	class MET_SIGNAL_GREEN: MET_SIGNAL_WHITE
	{
		smokeColor[]={0.09, 0.58, 0.09, 1};
		effectsSmoke="Nacht8SmokeEffectGreen";
	};
	class MET_SIGNAL_METAL: MET_SIGNAL_WHITE
	{
		smokeColor[]={0.1373, 0.1608, 0.2314, 1};
		effectsSmoke="Nacht8SmokeEffectMetal";
	};
	class MET_SIGNAL_ORANGE: MET_SIGNAL_WHITE
	{
		smokeColor[]={1, 0.535, 0, 1};
		effectsSmoke="Nacht8SmokeEffectOrange";
	};
	class MET_SIGNAL_PURPLE: MET_SIGNAL_WHITE
	{
		smokeColor[]={0.631, 0, 0.631, 1};
		effectsSmoke="Nacht8SmokeEffectPurple";
	};
	class MET_SIGNAL_RED: MET_SIGNAL_WHITE
	{
		smokeColor[]={0.725, 0.1, 0.1, 1};
		effectsSmoke="Nacht8SmokeEffectRed";
	};
	class MET_SIGNAL_TEAL: MET_SIGNAL_WHITE
	{
		smokeColor[]={0, 0.9, 0.669, 1};
		effectsSmoke="Nacht8SmokeEffectTeal";
	};
	class MET_SIGNAL_TURQUOISE: MET_SIGNAL_WHITE
	{
		smokeColor[]={0, 0.876, 0.9, 1};
		effectsSmoke="Nacht8SmokeEffectTurquoise";
	};
	class MET_SIGNAL_YELLOW: MET_SIGNAL_WHITE
	{
		smokeColor[]={0.902, 0.8, 0, 1};
		effectsSmoke="Nacht8SmokeEffectYellow";
	};
	class MET_SIGNAL_CIS: MET_SIGNAL_WHITE
	{
		smokeColor[]={0.686, 0.686, 1, 1};
		effectsSmoke="Nacht8SmokeEffectCIS";
	};
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