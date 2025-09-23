class CfgPatches
{
	class WBK_Inciniration
	{
		name="WBK_ZombieCreatures";
		author="WebKnight";
		requiredVersion=1.6;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"a3_anims_f"
		};
		units[]={};
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class HubShootingRangeKneel_move1;
		class melting_human_1: HubShootingRangeKneel_move1
		{
			boundingSphere=2;
			minPlayTime=0.88999999;
			relSpeedMin=0.60000002;
			relSpeedMax=1;
			interpolationspeed=6;
			interpolationrestart=1;
			looped=0;
			aimPrecision=3;
			ignoreMinPlayTime[]={};
			duty=-0.5;
			actions="NoActions";
			file="\WBK_PlasmaAlikeEffect\animations\WBK_HumanMelt_1.rtm";
			speed=-2;
			stamina=-0.1;
			showHandGun=0;
			mask="BodyFull";
			leftHandIKBeg=0;
			leftHandIKCurve[]={0};
			leftHandIKEnd=0;
			rightHandIKBeg=0;
			rightHandIKCurve[]={0};
			rightHandIKEnd=0;
			weaponIK=0;
			enableOptics=0;
			showWeaponAim=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			leaning="empty";
			aimingBody="empty";
			aiming="empty";
			limitGunMovement=9.1000004;
			headBobMode=1;
			headBobStrength=-1;
			forceAim=1;
			head="headDefault";
			canPullTrigger=0;
			enableDirectControl=0;
			weaponLowered=0;
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]={};
			connectFrom[]={};
			interpolateFrom[]={};
			InterpolateTo[]={};
			ragdoll=0;
		};
		class melting_human_2: melting_human_1
		{
			file="\WBK_PlasmaAlikeEffect\animations\WBK_HumanMelt_2.rtm";
			speed=-1.5;
		};
		class melting_human_3: melting_human_1
		{
			file="\WBK_PlasmaAlikeEffect\animations\WBK_HumanMelt_3.rtm";
			speed=-1.5;
		};
	};
};
class CfgVehicles
{
	class Land_Can_V3_F;
	class WBK_PileOfAsh: Land_Can_V3_F
	{
		displayName="Ash";
		model="WBK_PlasmaAlikeEffect\models\pileOfAsh.p3d";
	};
	class WBK_PileOfAsh_Big: Land_Can_V3_F
	{
		displayName="Ash Big";
		model="WBK_PlasmaAlikeEffect\models\pileOfAsh_big.p3d";
	};
};
class CfgSounds
{
	sounds[]={};
	class wbk_plasmadeath
	{
		name="wbk_plasmadeath";
		sound[]=
		{
			"\WBK_PlasmaAlikeEffect\sounds\plasmadeath.ogg",
			3.1622777,
			1
		};
		titles[]={};
	};
	class wbk_melta_death_1
	{
		name="wbk_melta_death_1";
		sound[]=
		{
			"\WBK_PlasmaAlikeEffect\sounds\acid_death_human_1.ogg",
			3.1622777,
			1
		};
		titles[]={};
	};
	class wbk_melta_death_2
	{
		name="wbk_melta_death_2";
		sound[]=
		{
			"\WBK_PlasmaAlikeEffect\sounds\acid_death_human_2.ogg",
			3.1622777,
			1
		};
		titles[]={};
	};
	class wbk_melta_death_3
	{
		name="wbk_melta_death_3";
		sound[]=
		{
			"\WBK_PlasmaAlikeEffect\sounds\acid_death_human_3.ogg",
			3.1622777,
			1
		};
		titles[]={};
	};
};
class Extended_Killed_Eventhandlers
{
	class CAManBase
	{
		class WBK_PlasmaDamage_Death
		{
			onRespawn="true";
			killed="_target = _this select 0; _killer = _this select 1; if ((_target != _killer) && (local _target) && (((currentWeapon _killer) in WBK_PlasmaKill_Weapons) || (getText (configFile >> 'CfgWeapons' >> currentWeapon _killer >> 'WBK_UseDisintegrate') != '') || (getText (configFile >> 'CfgMagazines' >> currentMagazine _killer >> 'WBK_UseDisintegrate') != '') || (getText (configFile >> 'CfgAmmo' >> getText (configFile >> 'CfgMagazines' >> currentMagazine _killer >> 'ammo') >> 'WBK_UseDisintegrate') != ''))) then {WBK_PlasmaKill_Color_String_Int = getText (configFile >> 'CfgMagazines' >> currentMagazine _killer >> 'WBK_PlasmaKill_Color_String_Int'); [_target,_killer] remoteExec ['WBK_PlasmaDeath_Regular',0];};"
		};
		class WBK_MeltaDamage_Death
		{
			onRespawn="true";
			killed="_target = _this select 0; _killer = _this select 1; if ((_target != _killer) && (local _target) && (((currentWeapon _killer) in WBK_MeltaKill_Weapons) || (getText (configFile >> 'CfgWeapons' >> currentWeapon _killer >> 'WBK_UseMelting') != '') || (getText (configFile >> 'CfgMagazines' >> currentMagazine _killer >> 'WBK_UseMelting') != '') || (getText (configFile >> 'CfgAmmo' >> getText (configFile >> 'CfgMagazines' >> currentMagazine _killer >> 'ammo') >> 'WBK_UseMelting') != ''))) then {_target spawn WBK_MeltaDeath;};";
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class WBK_PlasmaDamage_PreInit
	{
		init="call compile preprocessFileLineNumbers '\WBK_PlasmaAlikeEffect\scripts\XEH_preInit.sqf'";
	};
};
