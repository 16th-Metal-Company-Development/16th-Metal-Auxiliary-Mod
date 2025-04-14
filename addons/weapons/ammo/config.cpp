class CfgPatches
{
	class HTA_Weapons_Core
	{
		units[]={};
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Weapons_F"
		};
	};
};
// Hours Wasted on making this POS work - 14
class CfgAmmo
{
	class ACE_NLAW;
	class METAL_NLAW_AT_F: ACE_NLAW
	{
		flightProfiles[]=
		{
			"Direct",
			"Overfly"
		};
		class Direct
		{
			launchAngle=0.8;
		};
		class Overfly: Direct
		{
			launchAngle=0;
			overflyElevation=2.5;
		};
	};
	class HTA_NLAW_AT_F: ACE_NLAW
	{
		maxSpeed=290;
		class EventHandlers
		{
			fired="_this call ace_nlaw_fnc_onFired";
		};
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=0.00050000002;
			maxDeflection=0.0099999998;
			incDeflection=0.00050000002;
			canVanillaLock=0;
			hit=600;
			indirectHit=20;
			defaultSeekerLockMode="LOBL";
			defaultSeekerType="ace_nlaw_seeker";
			defaultAttackProfile="ace_nlaw_directAttack";
			effectsMissile="3AS_Rocket_effect_Blue_fly";
			seekerLockModes[]=
			{
				"LOBL"
			};
			seekerTypes[]=
			{
				"ace_nlaw_seeker"
			};
			seekLastTargetPos=0;
			seekerAngle=45;
			seekerAccuracy=1;
			seekerMinRange=0;
			seekerMaxRange=10;
			defaultAttacProfile="DIR";
			attackProfiles[]=
			{
				"ace_nlaw_directAttack",
				"ace_nlaw_overflyTopAttack"
			};
			useModeForAttackProfile=1;
			showHintOnCycle=1;
		};
	};
	/*class METAL_NLAW_AT_F: ACE_NLAW
	{
		effectsMissile="3AS_Rocket_effect_Blue_fly";
	};*/
};
class CfgCloudLets
{
	class ACE_NLAW;
	class HTA_NLAW_AT_F: ACE_NLAW
	{
		maxSpeed=290;
		class EventHandlers
		{
			fired="_this call ace_nlaw_fnc_onFired";
		};
		class ace_missileguidance
		{
			enabled=1;
			minDeflection=0.00050000002;
			maxDeflection=0.0099999998;
			incDeflection=0.00050000002;
			canVanillaLock=0;
			hit=600;
			indirectHit=20;
			defaultSeekerLockMode="LOBL";
			defaultSeekerType="ace_nlaw_seeker";
			defaultAttackProfile="ace_nlaw_directAttack";
			seekerLockModes[]=
			{
				"LOBL"
			};
			seekerTypes[]=
			{
				"ace_nlaw_seeker"
			};
			seekLastTargetPos=0;
			seekerAngle=45;
			seekerAccuracy=1;
			seekerMinRange=0;
			seekerMaxRange=10;
			defaultAttacProfile="DIR";
			attackProfiles[]=
			{
				"ace_nlaw_directAttack",
				"ace_nlaw_overflyTopAttack"
			};
			useModeForAttackProfile=1;
			showHintOnCycle=1;
		};
	};
	class METAL_NLAW_AT_F: ACE_NLAW
	{
		effectsMissile="3AS_Rocket_effect_Blue_fly";
	};
};
class CfgMagazines
{
	class NLAW_F;
	class HTA_NLAW_F: NLAW_F
	{
		author="Hazmat";
		displayName="Self Guiding AT Rocket";
		modelSpecial="";
		model="\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		descriptionShort="Fire and let it do the rest";
		displaynameshort="SGAT";
		ammo="METAL_NLAW_AT_F";
	};
};
class CfgMagazineWells
{
	class HDC_NLAW
	{
		HDC_Magazines[]=
		{
			"HTA_NLAW_F"
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1660317168";
};
