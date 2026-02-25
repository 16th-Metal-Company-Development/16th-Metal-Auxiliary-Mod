class CfgPatches
{
	class met_rep_snp_dc15xm
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15XM"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"LF_Weapon_Unit_DC15Xm"
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class recoil_dc15XM: Default
	{
		muzzleOuter[]={0.5,2,0.8,1};
		muzzleInner[]={0,0,0.1,0.1};
		kickBack[]={0.1,0.12};
		permanent=0.1;
		temporary=0.01;
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
	class LFP_rifle_base;
	/*==============================================================================
	==DC-15XM
	==============================================================================*/
	class WeaponSlotsInfo;
	class MET_DC15XM: LFP_rifle_base
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="MET_DC15XM_fried";
		JLTS_repairTime=40;
		scope=2;
		model="LF_Weapon_Unit\dc15xm\dc15xm.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"LF_Weapon_Unit\dc15xm\anim\dc15xm.rtm"
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		picture="\LF_Weapon_Unit\dc15xm\ui\dc15xm_co.paa";
		magazines[]=
		{
			"MET_DC15xm_mag",
			"MET_DC15xm_mag_red",
			"MET_DC15xm_mag_Yellow",
			"MET_DC15xm_mag_Orange",
			"MET_DC15xm_at_mag"
		};
		recoil="recoil_dc15XM";
		//WBK_UseDisintegrate = "true";
		//WBK_UseMelting = "true";
		cursor="srifle";
		displayname="[16th] DC-15XM";
		descriptionShort="Anti Material Rifle";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"LF_Weapon_Unit\main\sounds\dc15_empty.wss",
			1,
			1,
			50
		};
		/*reloadMagazineSound[]=
		{
			"LF_Weapon_Unit\main\sounds\dc15_reload.wss",
			0.80000001,
			1,
			10
		};*/
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
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
					"z\MET\addons\weapons\infantry_weap\sounds\dc15xm.ogg",
					200,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=1.2;
			dispersion=0.00000000000001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=20;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=-1;
		maxRecoilSway=0.015;
		swayDecaySpeed=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=380;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					""
				};
			};
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_med.p3d";
		class OpticsModes
		{
			class Snip
			{
				opticsID=1;
				opticsDisplayName="WFOV";
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				maxZeroing=2000;
				opticsZoomMin=0.0037499999;
				opticsZoomMax=0.1;
				opticsZoomInit=0.75;
				distanceZoomMin=2000;
				distanceZoomMax=2000;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				memoryPointCamera="opticView";
				modelOptics[] =
				{
					"z\MET\addons\weapons\scopes\big_cross_blue_med.p3d"
				};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
	};
	/*==============================================================================
	==DC-15XM (Fried)
	==============================================================================*/
	class MET_DC15XM_fried: MET_DC15XM
	{
		baseWeapon="MET_DC15XM_fried";
		displayName="[16th] Fried DC-15XM";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15X\data\ui\DC15X_fried_ui_ca.paa";
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
};