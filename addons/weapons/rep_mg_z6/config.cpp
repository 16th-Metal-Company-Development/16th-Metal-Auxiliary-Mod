class CfgPatches
{
	class met_rep_mg_z6
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_Z6",
			"MET_Z6_MkII",
			"MET_Z6_Para"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"JLTS_weapons_Z6",
			"IDA_Republic",
			"ls_weapons_zseries"
		};
	};
};
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
class CfgRecoils
{
	class recoil_default;
	class Default;
	class MET_recoil_Z6: recoil_default
	{
		muzzleOuter[]={0,0.1,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.090000004};
		temporary=0.0060000001;
	};
};
class UGL_F;
class Mode_SemiAuto;
class Mode_Burst: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
/*
 _______ ______________ _______________ _______________ _________
 ____/ / ____/  ______/ ____/___   ___/ ____/  /   /  / ____/    |    / /
 ___/ /  ___/  /_____   _______/  /     ___/  /___/  /  ___/  /| |   / /
 __/ /   __/   ___  /   ______/  /      __/  ____   /   __/  / | |  / /
 _/ /    _/   /__/ /    _____/  /       _/  /   /  /    _/  /  | |_/ /
 /_/     /________/     ____/  /        /__/   /__/     /__/   |____/

*/
class Single;
class close;
class GunParticles;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class 3AS_MuzzleSlot_DC17S;
class 3AS_CowsSlot_DC17S;
class CfgWeapons
{
	class Rifle;
	class Rifle_Long_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	/*==============================================================================
	==Z6
	==============================================================================*/
	class MET_Z6: LMG_Mk200_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_Z6_fried";
		JLTS_repairTime=40;
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		ace_overheating_jamTypesAllowed[]=
		{
			"Fire",
			"Dud"
		};
		author="Hazmat";
		canShootInWater=1;
		scope=2;
		autoReload="true";
		baseWeapon="MET_Z6";
		displayName="[16th] Z-6 Rotary Cannon Mk I";
		displayNameShort="A big weapon for big battles";
		descriptionShort="Rapid Fire. Reloads automatically.";
		picture="\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
		UiPicture="\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
		model="\MRC\JLTS\weapons\Z6\Z6.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\weapons\data\Z6_co.paa",
			"z\MET\addons\weapons\data\Z6_Barrel_co.paa",
			"z\MET\addons\weapons\data\Z6_Mag_co.paa"
		};
		magazines[]=
		{
			"MET_blaster_battery",
			"MET_blaster_battery_Red",
			"MET_blaster_battery_Green",
			"MET_blaster_battery_Yellow"
		};
		recoil="MET_recoil_Z6";
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"
		};
		reloadAction="";
		ace_clearJamAction="";
		magazineWell[]={
			"MET_Z6_MagWell"
		};
		fireLightDiffuse[]={0.1,0.25,1};
		drySound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\Z6_reload.ogg",
			1.5,
			1,
			100
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"slowerAuto",
			"Auto",
			"fullerAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
			//"maxAuto"
		};
		class Auto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1.015,
					1800
				};
				begin3[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.05;
			magazines[]=
			{
				//"MET_blaster_battery",
				"MET_blaster_battery_Red",
				"MET_blaster_battery_Green",
				"MET_blaster_battery_Yellow"
			};
			dispersion=0.005;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class fullerAuto: Auto
		{
			reloadTime=0.03;
			dispersion=0.006;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: Auto
		{
			reloadTime=0.075;
			dispersion=0.004;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close
		{
			displayName="close";
			multiplier=1.2;
			reloadTime=0.03;
			burst=26;
			dispersion = 0.00079;
			textureType = "fullAuto";
			aiRateOfFire=0.5;
			minRange=100;
			minRangeProbab=0.3;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=300;
			maxRangeProbab=0.9;
			showToPlayer=0;
			aiRateOfFireDistance=200;
		};
		class short: close
		{
			burst=26;
			aiRateOfFire=1;
			minRange=200;
			minRangeProbab=0.8;
			midRange=300;
			midRangeProbab=0.9;
			maxRange=400;
			maxRangeProbab=0.9;
			aiRateOfFireDistance=200;
		};
		class medium: close
		{
			reloadTime=0.05;
			burst=13;
			aiRateOfFire=2;
			minRange=300;
			minRangeProbab=0.8;
			midRange=400;
			midRangeProbab=0.9;
			maxRange=500;
			maxRangeProbab=0.9;
			aiRateOfFireDistance=500;
		};
		class far_optic1: medium
		{
			reloadTime=0.075;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=9;
			aiRateOfFire=3;
			minRange=300;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=0.85;
			maxRange=700;
			maxRangeProbab=0.75;
			aiRateOfFireDistance=500;
		};
		class far_optic2: far_optic1
		{
			reloadTime=0.075;
			burst=9;
			aiRateOfFire=5;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=750;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		/*class maxAuto: Auto
		{
			reloadTime=0.0060240963855422;
			dispersion=0.006;
			textureType="semi";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};*/
		maxRecoilSway=0.02; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1; //higher = Less Sway Over Time
		inertia=1.8; //higher = More Weight
		aimTransitionSpeed=0.6; //higher = Faster Aim Transition
		dexterity=0.4; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=270;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class MET_Z6_Hvy: MET_Z6
	{
		displayName="[16th] Z6 Rotary Cannon (Heavy)";
		baseWeapon = "MET_Z6_Hvy";
		WBK_UseHeavyWeaponFramework = "true";
	};
	/*==============================================================================
	==Z6 (Fried)
	==============================================================================*/
	class MET_Z6_fried: MET_Z6
	{
		baseWeapon="MET_Z6_fried";
		displayName="[16th] Fried Z6";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\Z6\data\ui\Z6_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		magazineWell[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
	/*==============================================================================
	==Z6 MkII
	==============================================================================*/
	class MET_Z6_MkII: arifle_MX_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_Z6_MkII_fried";
		JLTS_repairTime=40;
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		ace_overheating_jamTypesAllowed[]=
		{
			"Fire",
			"Dud"
		};
		author="Indecisive Armoury Team";
		canShootInWater=1;
		scope=2;
		autoReload="true";
		baseWeapon="MET_Z6_MkII";
		displayName="[16th] Z-6 Rotary Cannon Mk II";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_REPUBLIC\Data\Z6\Z6_ui.paa";
		model="Indecisive_Armoury_Weapons_REPUBLIC\Data\Z6\Model\IDA_Z6.p3d";
		magazines[]=
		{
			"MET_blaster_battery",
			"MET_blaster_battery_Red",
			"MET_blaster_battery_Green",
			"MET_blaster_battery_Yellow"
		};
		recoil="MET_recoil_Z6";
		magazineWell[]=
		{
			"MET_Z6_MagWell"
		};
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"
		};
		reloadAction="";
		ace_clearJamAction="";
		fireLightDiffuse[]={0.5,0.5,0.5};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\Z6_reload.ogg",
			1.5,
			1,
			100
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"slowerAuto",
			"Auto",
			"fullerAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
			//"maxAuto"
		};
		class Auto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			sounds[] = {"StandardSound"};
			class StandardSound {
				soundSetShot[] = {"ls_z6_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
			};
			reloadTime=0.05;
			magazines[]=
			{
				//"MET_blaster_battery",
				"MET_blaster_battery_Red",
				"MET_blaster_battery_Green",
				"MET_blaster_battery_Yellow"
			};
			dispersion=0.005;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class fullerAuto: Auto
		{
			reloadTime=0.03;
			dispersion=0.006;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: Auto
		{
			reloadTime=0.075;
			dispersion=0.004;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close
		{
			displayName="close";
			multiplier=1.2;
			reloadTime=0.03;
			dispersion = 0.00079;
			textureType = "fullAuto";
			burst=26;
			aiRateOfFire=0.5;
			minRange=100;
			minRangeProbab=0.3;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=300;
			maxRangeProbab=0.9;
			showToPlayer=0;
			aiRateOfFireDistance=200;
		};
		class short: close
		{
			burst=26;
			aiRateOfFire=1;
			minRange=200;
			minRangeProbab=0.8;
			midRange=300;
			midRangeProbab=0.9;
			maxRange=400;
			maxRangeProbab=0.9;
			aiRateOfFireDistance=200;
		};
		class medium: close
		{
			reloadTime=0.05;
			burst=13;
			aiRateOfFire=2;
			minRange=300;
			minRangeProbab=0.8;
			midRange=400;
			midRangeProbab=0.9;
			maxRange=500;
			maxRangeProbab=0.9;
			aiRateOfFireDistance=500;
		};
		class far_optic1: medium
		{
			reloadTime=0.075;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=9;
			aiRateOfFire=3;
			minRange=300;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=0.85;
			maxRange=700;
			maxRangeProbab=0.75;
			aiRateOfFireDistance=500;
		};
		class far_optic2: far_optic1
		{
			reloadTime=0.075;
			burst=9;
			aiRateOfFire=5;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=750;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		maxRecoilSway=0.02; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1; //higher = Less Sway Over Time
		inertia=1.8; //higher = More Weight
		aimTransitionSpeed=0.6; //higher = Faster Aim Transition
		dexterity=0.4; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=270;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class MET_Z6_MkII_Hvy: MET_Z6_MkII
	{
		displayName="[16th] Z6 Rotary Cannon Mk II (Heavy)";
		baseWeapon = "MET_Z6_MkII_Hvy";
		WBK_UseHeavyWeaponFramework = "true";
	};
	/*==============================================================================
	==Z6 MkII (Fried)
	==============================================================================*/
	class MET_Z6_MkII_fried: MET_Z6_MkII
	{
		baseWeapon="MET_Z6_MkII_fried";
		displayName="[16th] Fried Z6 MkII";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\Z6\data\ui\Z6_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		magazineWell[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
			0.56234097,
			1,
			10
		};
	};
	/*==============================================================================
	==Z-6 Funny
	==============================================================================*/
	class MET_Z6_SOF: LMG_Mk200_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_DP23_fried";
		JLTS_repairTime=25;
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		ace_overheating_jamTypesAllowed[]=
		{
			"Fire",
			"Dud"
		};
		author="Hazmat";
		inertia=0;
		canShootInWater=1;
		scope=2;
		scopeArsenal=0;
		autoReload="true";
		baseWeapon="MET_Z6";
		displayName="[16th] SOF Z6 rotary cannon";
		displayNameShort="A big weapon for big battles";
		descriptionShort="Rapid Fire. Reloads automatically.";
		picture="\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
		UiPicture="\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
		model="\MRC\JLTS\weapons\Z6\Z6.p3d";	
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"z\MET\addons\weapons\data\Z6_co.paa",
			"z\MET\addons\weapons\data\Z6_Barrel_co.paa",
			"z\MET\addons\weapons\data\Z6_Mag_co.paa"
		};
		magazines[]=
		{
			"MET_blaster_battery",
			"MET_blaster_battery_heavy",
			"MET_blaster_battery_Red",
			"MET_blaster_battery_Green",
			"MET_blaster_battery_Yellow"
		};
		recoil="MET_recoil_Z6";
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"
		};
		reloadAction="";
		ace_clearJamAction="";
		magazineWell[]={
			"MET_Z6_MagWell"
		};
		fireLightDiffuse[]={0.1,0.25,1};
		drySound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\Z6_reload.ogg",
			1.5,
			1,
			100
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"slowerAuto",
			"Auto",
			"fullerAuto",
			"maxAuto"
		};
		class Auto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1.015,
					1800
				};
				begin3[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1.01,
					1800
				};
				begin5[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\z6.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.05;
			magazines[]=
			{
				//"MET_blaster_battery",
				"MET_blaster_battery_Red",
				"MET_blaster_battery_Green",
				"MET_blaster_battery_Yellow"
			};
			dispersion=0.0049999999;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class fullerAuto: Auto
		{
			reloadTime=0.03;
			dispersion=0.006;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: Auto
		{
			reloadTime=0.075;
			dispersion=0.006;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class maxAuto: Auto
		{
			reloadTime=0.0060240963855422;
			dispersion=0.006;
			textureType="semi";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=270;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class METAL_Z6_Dumb: MET_Z6
	{
		baseWeapon="MET_Z6_Dumb";
		scope=0;
	};
	/*==============================================================================
	==Z6 Para
	==============================================================================*/
	class ls_weapon_z6_base;
	class ls_weapon_z6: ls_weapon_z6_base
	{
		class WeaponSlotsInfo;
	};
	class MET_Z6_Para: ls_weapon_z6
	{
		displayName="[16th] Z6 Para Rotary Cannon Mk I";
		baseWeapon = "MET_Z6_Para";
		recoil="MET_recoil_Z6";
		magazines[]=
		{
			"MET_z6_para_mag",
			"MET_z6_para_mag_green"
		};
		magazineWell[]=
		{
			"MET_Z6_Para_MagWell"
		};
		modes[]=
		{
			"slowerAuto",
			"Auto",
			"fullerAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
			//"maxAuto"
		};
		autoReload="true";
		reloadAction="";
		ace_clearJamAction="";
		reloadMagazineSound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\Z6_reload.ogg",
			1.5,
			1,
			100
		};
		class Auto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			sounds[] = {"StandardSound"};
			class StandardSound {
				soundSetShot[] = {"ls_z6_Shot_SoundSet", "ls_mediumBlaster_Tail_SoundSet"};
			};
			reloadTime=0.08; //750 RPM
			magazines[]=
			{
				//"MET_blaster_battery",
				"MET_blaster_battery_Red",
				"MET_blaster_battery_Green",
				"MET_blaster_battery_Yellow"
			};
			dispersion=0.003;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class fullerAuto: Auto
		{
			reloadTime=0.06; //1000
			dispersion=0.006;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: Auto
		{
			reloadTime=0.12; //600 RPM
			dispersion=0.004;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close
		{
			displayName="close";
			multiplier=1.2;
			reloadTime=0.0375;
			dispersion = 0.00079;
			textureType = "fullAuto";
			burst=26;
			aiRateOfFire=0.5;
			minRange=100;
			minRangeProbab=0.3;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=300;
			maxRangeProbab=0.9;
			showToPlayer=0;
			aiRateOfFireDistance=200;
		};
		class short: close
		{
			burst=26;
			aiRateOfFire=1;
			minRange=200;
			minRangeProbab=0.8;
			midRange=300;
			midRangeProbab=0.9;
			maxRange=400;
			maxRangeProbab=0.9;
			aiRateOfFireDistance=200;
		};
		class medium: close
		{
			reloadTime=0.06;
			burst=13;
			aiRateOfFire=2;
			minRange=300;
			minRangeProbab=0.8;
			midRange=400;
			midRangeProbab=0.9;
			maxRange=500;
			maxRangeProbab=0.9;
			aiRateOfFireDistance=500;
		};
		class far_optic1: medium
		{
			reloadTime=0.1;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=9;
			aiRateOfFire=3;
			minRange=300;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=0.85;
			maxRange=700;
			maxRangeProbab=0.75;
			aiRateOfFireDistance=500;
		};
		class far_optic2: far_optic1
		{
			reloadTime=0.1;
			burst=9;
			aiRateOfFire=5;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=750;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		maxRecoilSway=0.04; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.4; //higher = Less Sway Over Time
		inertia=1.4; //higher = More Weight
		aimTransitionSpeed=0.7; //higher = Faster Aim Transition
		dexterity=0.4; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_Z6_Para_Hvy: MET_Z6_Para
	{
		displayName="[16th] Z6 Para Rotary Cannon (Heavy)";
		baseWeapon = "MET_Z6_Para_Hvy";
		WBK_UseHeavyWeaponFramework = "true";
	};
	class 3AS_Z6_Base_F;
	class 3AS_Z6_F: 3AS_Z6_Base_F
	{
		class WeaponSlotsInfo;
	};
	class MET_Z6_Para_MkII: 3AS_Z6_F
	{
		displayName="[16th] Z6 Para Rotary Cannon Mk II";
		baseWeapon = "MET_Z6_Para_MkII";
		recoil="MET_recoil_Z6";
		magazines[]=
		{
			"MET_z6_para_mag",
			"MET_z6_para_mag_green"
		};
		magazineWell[]=
		{
			"MET_Z6_Para_MagWell"
		};
		modes[]=
		{
			"slowerAuto",
			"Auto",
			"fullerAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
			//"maxAuto"
		};
		autoReload="true";
		reloadAction="";
		ace_clearJamAction="";
		reloadMagazineSound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\Z6_reload.ogg",
			1.5,
			1,
			100
		};
		class Auto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			sounds[] = {"StandardSound"};
			class StandardSound {
				soundSetShot[] = {"3AS_Z6_SoundSet"};
			};
			reloadTime=0.0666666667; //900 RPM
			magazines[]=
			{
				//"MET_blaster_battery",
				"MET_blaster_battery_Red",
				"MET_blaster_battery_Green",
				"MET_blaster_battery_Yellow"
			};
			dispersion=0.003;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class fullerAuto: Auto
		{
			reloadTime=0.05; //1200 RPM
			dispersion=0.006;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: Auto
		{
			reloadTime=0.1; //650 RPM
			dispersion=0.004;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close
		{
			displayName="close";
			multiplier=1.2;
			reloadTime=0.0375;
			dispersion = 0.00079;
			textureType = "fullAuto";
			burst=26;
			aiRateOfFire=0.5;
			minRange=100;
			minRangeProbab=0.3;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=300;
			maxRangeProbab=0.9;
			showToPlayer=0;
			aiRateOfFireDistance=200;
		};
		class short: close
		{
			burst=26;
			aiRateOfFire=1;
			minRange=200;
			minRangeProbab=0.8;
			midRange=300;
			midRangeProbab=0.9;
			maxRange=400;
			maxRangeProbab=0.9;
			aiRateOfFireDistance=200;
		};
		class medium: close
		{
			reloadTime=0.06;
			burst=13;
			aiRateOfFire=2;
			minRange=300;
			minRangeProbab=0.8;
			midRange=400;
			midRangeProbab=0.9;
			maxRange=500;
			maxRangeProbab=0.9;
			aiRateOfFireDistance=500;
		};
		class far_optic1: medium
		{
			reloadTime=0.1;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=9;
			aiRateOfFire=3;
			minRange=300;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=0.85;
			maxRange=700;
			maxRangeProbab=0.75;
			aiRateOfFireDistance=500;
		};
		class far_optic2: far_optic1
		{
			reloadTime=0.1;
			burst=9;
			aiRateOfFire=5;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=750;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		maxRecoilSway=0.04; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.4; //higher = Less Sway Over Time
		inertia=1.4; //higher = More Weight
		aimTransitionSpeed=0.7; //higher = Faster Aim Transition
		dexterity=0.4; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_Z6_Para_MkII_Hvy: MET_Z6_Para_MkII
	{
		displayName="[16th] Z6 Para Rotary Cannon Mk II (Heavy)";
		baseWeapon = "MET_Z6_Para_MkII";
		WBK_UseHeavyWeaponFramework = "true";
	};
};
class CfgMagazineWells
{
	class MET_Z6_MagWell
	{
		MET_Z6Magazines[]=
		{
			"MET_blaster_battery",
			"MET_blaster_pistol_battery",
			"MET_DC15S_Mag",
			"MET_blaster_pistol_battery"
		};
	};
	class MET_Z6_Para_MagWell
	{
		MET_Z6ParaMagazines[]=
		{
			"MET_z6_para_mag",
			"MET_z6_para_mag_green",
			"MET_DC15S_Mag",
			"MET_blaster_pistol_battery"
		};
	};
};