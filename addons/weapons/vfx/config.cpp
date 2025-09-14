class CfgPatches
{
	class MET_VFX
	{
		author="16th Metal Company";
		name="MET VFX";
		requiRedAddons[]=
		{
			"A3_Data_F",
			"A3_anims_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies"
		};
		units[]={};
		magazines[]={};
		weapons[]={};
	};
};
class CfgCloudlets
{
	class Default;
	class GrenadeExp;
	class Missile4;
	class MET_SmokeBombEffect: Default
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
		interval=0.029999999;
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
		lifeTime=10;
		moveVelocity[]={0.2,0.1,0.1};
		rotationVelocity=10;
		weight=1.2776999;
		volume=1;
		rubbing=0;
		size[]={3,4,5};
		color[]=
		{
			{0.60000002,0.60000002,0.60000002,0.2},
			{0.60000002,0.60000002,0.60000002,0.050000001},
			{0.60000002,0.60000002,0.60000002,0}
		};
		animationSpeed[]={1.5,0.5};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0.039999999;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.60000002;
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={0.1,0.75,1};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.34999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MET_SmokeBombEffect2: MET_SmokeBombEffect
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
	class MET_Blaster_Hit_Exp: GrenadeExp
	{
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 0.5"
		};
		sizeCoef=0.5;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		sizeVar=0;
		lifeTime=0.050000001;
		ignoreWind="true";
	};
	class MET_ImpactSparks1: Default
	{
		interval=0.00089999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=1;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0;
		moveVelocity[]={0,4,0};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=3.0000001e-006;
		size[]={0.059999999,0};
		sizeCoef=0.5;
		color[]=
		{
			{1,0.5,0.15000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,5,1,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=2;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={1,3,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		ignoreWind="true";
	};
	class MET_ImpactSparks2: Default
	{
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=5;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=1;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.34999999;
		moveVelocity[]={0,1,0};
		rotationVelocity=1;
		weight=1000;
		volume=1e-006;
		rubbing=3.0000001e-006;
		size[]={0.25,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.5,0.15000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,5,1,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=2;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		moveVelocityVar[]={1,3,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		particleEffects="MET_ImpactFlames";
		ignoreWind="true";
	};
	class MET_GrenadeSparks: Default
	{
		interval=0.0060000001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.050000001;
		moveVelocity[]={0,20,0};
		rotationVelocity=1;
		weight=10000;
		volume=100;
		rubbing=0;
		size[]={0.175,0.185,0.19499999,0.2,0};
		color[]=
		{
			{1,1,1,-50}
		};
		animationSpeed[]={1000};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=1;
		positionVar[]={2,0.5,2};
		MoveVelocityVar[]={30,3,30};
		rotationVelocityVar=2;
		sizeVar=0;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		particleEffects="MET_ImpactFlames";
		ignoreWind="true";
	};
	class MET_ExplosionParticles: Default
	{
		interval="0.03 * interval + 0.03";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.15000001;
		moveVelocity[]={0,4,0};
		rotationVelocity=0;
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.1;
		size[]={6,8.5};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.33000001};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={2,1,2};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MET_FireBall: Default
	{
		interval="0.05 * interval + 0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.175;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.039999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 6"
		};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class MET_LaserSmoke: Missile4
	{
		rubbing=0.1;
		size[]={0.025,0.050000001};
		color[]=
		{
			{1,0,0,-4},
			{1,0,0,-3},
			{1,0,0,-2},
			{1,0,0,-1},
			{1,0,0,0}
		};
		emissiveColor[]=
		{
			{10,0,0,1}
		};
	};
};
class MET_ImpactFlames
{
	class Light1
	{
		simulation="light";
		type="SmallFlameLight";
		intensity=1;
		interval=1;
		position[]={0,0,0};
		lifeTime=7;
	};
	class Smoke1
	{
		simulation="particles";
		type="IEDFlameS";
		lifeTime=7;
	};
};
class CfgLights
{
	class MET_ImpactLight
	{
		diffuse[]={1,0.60000002,0.40000001};
		color[]={1,0.60000002,0.40000001};
		ambient[]={0,0,0,0};
		brightness=10;
		size=1;
		intensity=10000;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2.2;
			hardLimitStart=500;
			hardLimitEnd=1000;
		};
		position[]={0,3.5,0};
	};
	class MET_ImpactLight_Stun
	{
		diffuse[]={0,0,255};
		color[]={0,0,255};
		ambient[]={0,0,0,0};
		brightness=10;
		size=1;
		intensity=100;
		drawLight=0;
		blinking=1;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=2.2;
			hardLimitStart=500;
			hardLimitEnd=1000;
		};
		position[]={0,3.5,0};
	};
	class MET_SparksLight
	{
		diffuse[]={1,0.40000001,0};
		color[]={1,0.40000001,0};
		ambient[]={1,0.40000001,0.40000001,0};
		brightness=10;
		size=1;
		intensity=100;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=40;
			hardLimitEnd=80;
		};
		position[]={0,0,0};
	};
	class MET_Giant_BlasterboltLight_PaleBlue
	{
		color[]={0,0,0,0};
		diffuse[]={130, 199, 255,1};
		ambient[]={0,0,0,0.5};
		intensity=400000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="1e20 * 0.7";
			hardLimitEnd=1e+020;
		};
		dayLight=1;
		useFlare=1;
		flareSize=5;
		flareMaxDistance=6000;
		position[]={0,0,-1};
	};
	class MET_Giant_BlasterBoltLight_White: MET_Giant_BlasterboltLight_PaleBlue
	{
		diffuse[]={255,255,200,1};
	};
	class MET_Giant_BlasterboltLight_PaleGreen: MET_Giant_BlasterboltLight_PaleBlue
	{
		diffuse[]={106, 250, 106,1};
	};
	class MET_Giant_BlasterboltLight_PaleRed: MET_Giant_BlasterboltLight_PaleBlue
	{
		diffuse[]={255, 115, 123,1};
	};
	class MET_Giant_BlasterboltLight_PaleYellow: MET_Giant_BlasterboltLight_PaleBlue
	{
		diffuse[]={255, 253, 123,1};
	};
	class MET_Large_BlasterboltLight_Blue
	{
		color[]={0,0,0,0};
		diffuse[]={0,42,255,1};
		ambient[]={0,0,0,0.5};
		intensity=200000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="1e20 * 0.7";
			hardLimitEnd=1e+020;
		};
		dayLight=1;
		useFlare=1;
		flareSize=5;
		flareMaxDistance=6000;
		position[]={0,0,-1};
	};
	class MET_Large_BlasterboltLight_Blue_Green
	{
		color[]={0,0,0,0};
		diffuse[]={34,206,233,1};
		ambient[]={0,0,0,0.5};
		intensity=200000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="1e20 * 0.7";
			hardLimitEnd=1e+020;
		};
		dayLight=1;
		useFlare=1;
		flareSize=5;
		flareMaxDistance=6000;
		position[]={0,0,-1};
	};
	class MET_Large_BlasterboltLight_Green2
	{
		color[]={0,0,0,0};
		diffuse[]={34,206,147,1};
		ambient[]={0,0,0,0.5};
		intensity=200000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="1e20 * 0.7";
			hardLimitEnd=1e+020;
		};
		dayLight=1;
		useFlare=1;
		flareSize=5;
		flareMaxDistance=6000;
		position[]={0,0,-1};
	};
	class MET_Large_BlasterboltLight_Red: MET_Large_BlasterboltLight_Blue
	{
		diffuse[]={255,0,0,1};
		ambient[]={0,0,0,0.5};
		intensity=200000;
	};
	class MET_Large_BlasterboltLight_Green: MET_Large_BlasterboltLight_Blue
	{
		diffuse[]={0,255,0,1};
		ambient[]={0,0,0,0.5};
		intensity=100000;
	};
	class MET_Large_BlasterboltLight_Yellow: MET_Large_BlasterboltLight_Blue
	{
		diffuse[]={214,191,124,1};
		ambient[]={0,0,0,0.5};
		intensity=200000;
	};
	class MET_Medium_BlasterBoltLight_Blue
	{
		color[]={0,0,0,0};
		diffuse[]={0,42,255,1};
		ambient[]={0,0,0,0.5};
		intensity=30000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="1e20 * 0.7";
			hardLimitEnd=1e+020;
		};
		dayLight=1;
		useFlare=1;
		flareSize=3;
		flareMaxDistance=6000;
		position[]={0,0,-1};
	};
	class MET_Medium_BlasterBoltLight_Red: MET_Medium_BlasterBoltLight_Blue
	{
		diffuse[]={255,0,0,1};
	};
	class MET_Medium_BlasterBoltLight_White: MET_Medium_BlasterBoltLight_Blue
	{
		diffuse[]={255,255,200,1};
	};
	class MET_Medium_BlasterBoltLight_Green: MET_Medium_BlasterBoltLight_Blue
	{
		diffuse[]={0,255,0,1};
	};
	class MET_Medium_BlasterBoltLight_Yellow: MET_Medium_BlasterBoltLight_Blue
	{
		diffuse[]={214,191,124,1};
	};
	class MET_BlasterboltLight_Blue
	{
		color[]={0,0,0,0};
		diffuse[]={0,42,255,1};
		ambient[]={0,0,0,0.5};
		intensity=650;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="1e20 * 0.7";
			hardLimitEnd=1e+020;
		};
		dayLight=1;
		useFlare=1;
		flareSize=0.34999999;
		flareMaxDistance=6000;
		position[]={0,0,-1};
	};
	class MET_BlasterboltLight_Red: MET_BlasterboltLight_Blue
	{
		diffuse[]={255,0,0,1};
	};
	class MET_BlasterBoltOldRepLight_Blue: MET_BlasterboltLight_Blue
	{
		diffuse[]={7,110,176,1};
	};
	class MET_BlasterboltLight_Green: MET_BlasterboltLight_Blue
	{
		diffuse[]={0,255,0,1};
	};
	class MET_BlasterboltLight_White: MET_BlasterboltLight_Blue
	{
		diffuse[]={255,255,200,1};
	};
	class MET_BlasterboltLight_Yellow: MET_BlasterboltLight_Blue
	{
		diffuse[]={214,191,124,1};
	};
	class MET_BlasterboltLight_Stun
	{
		color[]={0,0,0,0};
		diffuse[]={0,0,255,1};
		ambient[]={0,0,0,0.5};
		intensity=650;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="1e20 * 0.7";
			hardLimitEnd=1e+020;
		};
		dayLight=1;
		useFlare=1;
		flareSize=0.34999999;
		flareMaxDistance=6000;
		position[]={0,0,-1};
	};
	class MET_FireEffectLight
	{
		name="FireEffectLight";
		diffuse[]={255,137,0};
		color[]={255,137,0};
		ambient[]={0,0,0,0.5};
		intensity=2500;
		blinking=0;
		drawLight=0;
		dayLight=1;
		class Attenuation
		{
			start=0;
			constant=3;
			linear=0;
			quadratic=32;
		};
		position[]={0,0.5,0};
	};
	class MET_MissileLight_Base
	{
		diffuse[]={1,1,1,1};
		color[]={0,0,0,0};
		ambient[]={0,0,0};
		brightness=100;
		size=1;
		intensity=25000;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=1;
			hardLimitStart=100;
			hardLimitEnd=200;
		};
	};
	class MET_MissileLight_Blue: MET_MissileLight_Base
	{
		color[]={0,42,255};
		diffuse[]={0,42,255,1};
		intensity=30000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class MET_MissileLight_Red: MET_MissileLight_Base
	{
		color[]={255,0,0};
		diffuse[]={255,0,0,1};
		intensity=30000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class MET_MissileLight_Green: MET_MissileLight_Base
	{
		color[]={0,255,0};
		diffuse[]={0,255,0,1};
		intensity=30000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class MET_MissileLight_Yellow: MET_MissileLight_Base
	{
		color[]={255,255,0};
		diffuse[]={255,255,0,1};
		intensity=30000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
};
class MET_ImpactEffect
{
	class Light1
	{
		simulation="light";
		type="MET_ImpactLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class SparksLight
	{
		simulation="light";
		type="MET_SparksLight";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactGrenadeExp
	{
		simulation="particles";
		type="MET_Blaster_Hit_Exp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.025;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="MET_ImpactSparks1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="MET_ImpactSparks2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
};
class MET_ImpactEffect_Stun
{
	class Light1
	{
		simulation="light";
		type="MET_ImpactLight_Stun";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Smoke1
	{
		simulation="particles";
		type="ImpactSmoke";
		lifeTime=0.2;
	};
};
class MET_SmokeEffect
{
	class MET_SmokeBomb
	{
		simulation="particles";
		type="MET_SmokeBombEffect";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class MET_SmokeBomb2
	{
		simulation="particles";
		type="MET_SmokeBombEffect2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
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
};
class MET_GrenadeExplosionEffect
{
	class GrenadeSparks
	{
		simulation="particles";
		type="MET_GrenadeSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class GrenadeSparks2
	{
		simulation="particles";
		type="MET_GrenadeSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class GrenadeSparks3
	{
		simulation="particles";
		type="MET_GrenadeSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Shards
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards1
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards3
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_0
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExp
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.5,0};
		intensity=0.0049999999;
		interval=1;
		lifeTime=0.5;
	};
	class ExplosionParticles
	{
		simulation="particles";
		type="MET_ExplosionParticles";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class FireBall
	{
		simulation="particles";
		type="MET_FireBall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="VehExpSmoke2Small";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};
class MET_MissileGlow_Blue_fly
{
	class Light
	{
		simulation="light";
		type="MET_MissileLight_Blue";
		position[]={0,0,0};
	};
	class GrenadeSparks
	{
		simulation="particles";
		type="MET_GrenadeSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Smoke
	{
		simulation="particles";
		type="Missile4";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
class MET_MissileGlow_Red_fly
{
	class Light
	{
		simulation="light";
		type="MET_MissileLight_Red";
		position[]={0,0,0};
	};
	class GrenadeSparks
	{
		simulation="particles";
		type="MET_GrenadeSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Smoke
	{
		simulation="particles";
		type="Missile4";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
class MET_MissileGlow_Green_fly
{
	class Light
	{
		simulation="light";
		type="MET_MissileLight_Green";
		position[]={0,0,0};
	};
	class GrenadeSparks
	{
		simulation="particles";
		type="MET_GrenadeSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Smoke
	{
		simulation="particles";
		type="Missile4";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
class MET_MissileGlow_Yellow_fly
{
	class Light
	{
		simulation="light";
		type="MET_MissileLight_Yellow";
		position[]={0,0,0};
	};
	class GrenadeSparks
	{
		simulation="particles";
		type="MET_GrenadeSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.1;
	};
	class Smoke
	{
		simulation="particles";
		type="Missile4";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
class MET_BlasterBoltGlow_Stun_Fly
{
	class Light
	{
		simulation="light";
		type="MET_BlasterboltLight_Stun";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Blue_Fly
{
	class Light
	{
		simulation="light";
		type="MET_BlasterBoltLight_Blue";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_LightBlue_Fly
{
	class Light
	{
		simulation="light";
		type="MET_BlasterBoltOldRepLight_Blue";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Red_Fly
{
	class Light
	{
		simulation="light";
		type="MET_BlasterBoltLight_Red";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Green_Fly
{
	class Light
	{
		simulation="light";
		type="MET_BlasterBoltLight_Green";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Yellow_Fly
{
	class Light
	{
		simulation="light";
		type="MET_BlasterBoltLight_Yellow";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_White_Fly
{
	class Light
	{
		simulation="light";
		type="MET_BlasterBoltLight_White";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Medium_Blue_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Medium_BlasterboltLight_Blue";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Medium_Red_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Medium_BlasterboltLight_Red";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Medium_Green_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Medium_BlasterboltLight_Green";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Medium_Yellow_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Medium_BlasterboltLight_Yellow";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Medium_White_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Medium_BlasterboltLight_White";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Giant_PaleBlue_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Giant_BlasterboltLight_PaleBlue";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Giant_PaleGreen_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Giant_BlasterboltLight_PaleGreen";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Giant_PaleRed_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Giant_BlasterboltLight_PaleRed";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Giant_PaleYellow_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Giant_BlasterboltLight_PaleYellow";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Giant_White_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Giant_BlasterBoltLight_White";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Large_Blue_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Large_BlasterBoltLight_Blue";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Large_Blue_Green_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Large_BlasterBoltLight_Blue_Green";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Large_Green2_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Large_BlasterBoltLight_Green2";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Large_Red_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Large_BlasterBoltLight_Red";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Large_Green_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Large_BlasterBoltLight_Green";
		position[]={0,0,1};
	};
};
class MET_BlasterBoltGlow_Large_Yellow_Fly
{
	class Light
	{
		simulation="light";
		type="MET_Large_BlasterBoltLight_Yellow";
		position[]={0,0,1};
	};
};
class MET_Laser_Red_fly
{
	class Light
	{
		simulation="light";
		type="MET_BlasterboltLight_Red";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="MET_LaserSmoke";
		position[]={0,0,0};
		intensity=1;
		qualityLevel=-1;
	};
};
class SmallFire;
class MET_FireEffect: SmallFire
{
	class Light1
	{
		simulation="light";
		type="MET_FireEffectLight";
	};
	class sound
	{
		simulation="sound";
		type="Fire";
	};
	class Fire1
	{
		simulation="particles";
		type="SmallFireF";
	};
	class Refract1
	{
		simulation="particles";
		type="SmallFireFRefract";
	};
	class Smoke1
	{
		simulation="particles";
		type="ImpactSmoke";
		lifeTime=0.2;
	};
};
class ACE_Medical_Injuries
{
	class wounds
	{
		class ThermalBurn
		{
			bleeding=0;
			pain=0.69999999;
			minDamage=0;
		};
		class Abrasion
		{
			bleeding=0.001;
			pain=0.40000001;
		};
		class VelocityWound
		{
			bleeding=0.2;
			pain=0.89999998;
			causeLimping=1;
			causeFracture=1;
		};
		class PunctureWound
		{
			bleeding=0.050000001;
			pain=0.40000001;
			causeLimping=1;
		};
		class Cut
		{
			bleeding=0.0099999998;
			pain=0.1;
		};
	};
	class damageTypes
	{
		thresholds[]=
		{
			{0.1,1}
		};
		selectionSpecific=1;
		class woundHandlers
		{
			ace_medical_damage="ace_medical_damage_fnc_woundsHandlerBase";
		};
		class plasma
		{
			thresholds[]=
			{
				{20,10},
				{4.5,2},
				{4.5,2},
				{3,1},
				{0,1}
			};
			selectionSpecific=1;
			class Avulsion
			{
				weighting[]=
				{
					{1,1},
					{0.34999999,0}
				};
			};
			class ThermalBurn
			{
				weighting[]=
				{
					{0.64999998,2},
					{0.24999999,1}
				};
			};
			class Contusion
			{
				weighting[]=
				{
					{0.34999999,0},
					{0.34999999,1}
				};
				sizeMultiplier=3.2;
				painMultiplier=0.80000001;
			};
			class VelocityWound
			{
				weighting[]=
				{
					{1.5,0},
					{1.5,1},
					{0.34999999,1},
					{0.34999999,0}
				};
				sizeMultiplier=0.89999998;
			};
		};
		class plasmashell
		{
			thresholds[]=
			{
				{20,10},
				{10,5},
				{10,5},
				{4.5,2},
				{2,2},
				{0.80000001,1},
				{0.2,1},
				{0,0}
			};
			selectionSpecific=0;
			class Avulsion
			{
				weighting[]=
				{
					{1.5,1},
					{1.1,0}
				};
			};
			class VelocityWound
			{
				weighting[]=
				{
					{1.5,0},
					{1.1,1},
					{0.69999999,0}
				};
			};
			class PunctureWound
			{
				weighting[]=
				{
					{0.89999998,0},
					{0.69999999,1},
					{0.34999999,0}
				};
			};
			class ThermalBurn
			{
				weighting[]=
				{
					{1,1},
					{0.34999999,0}
				};
				sizeMultiplier=1.2;
				painMultiplier=0.80000001;
			};
			class Cut
			{
				weighting[]=
				{
					{0.69999999,0},
					{0.34999999,1},
					{0.34999999,0}
				};
			};
			class Contusion
			{
				weighting[]=
				{
					{0.5,0},
					{0.34999999,1}
				};
				sizeMultiplier=2;
				painMultiplier=0.89999998;
			};
		};
	};
};
class cfgMods
{
	author="Thatcher";
	timepacked="1729031729";
};
