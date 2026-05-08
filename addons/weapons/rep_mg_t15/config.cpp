class CfgPatches
{
	class met_rep_mg_t15
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_T15"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"IDA_Republic"
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
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
	class UGL_F;
	class JLTS_stun_muzzle;
	class Rifle;
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
	class JLTS_DC15A: arifle_MX_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	/*==============================================================================
	==T-15 Heavy Repeating Blaster
	==============================================================================*/
	class IDA_Stun_Muzzle;
	class MET_T15: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="MET_T15_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		canShootInWater=1;
		displayName="[16th] T-15 Heavy Repeating Blaster";
		magazines[]=
		{
			"MET_T15_mag"
		};
		magazineWell[]={};
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_REPUBLIC\Data\T15\T15_ui.paa";
		model="Indecisive_Armoury_Weapons_REPUBLIC\Data\T15\Model\IDA_T15.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\EPL2\anims\EPL2_handanim.rtm"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="IDA_recoil_HeavyRepeatingBlaster";
		fireLightDiffuse[]={0.1,0.25,1};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"SlowAuto",
			"MediumAuto",
			"FastAuto",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class SlowAuto: Mode_FullAuto
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
					"\Indecisive_Armoury_Sounds\Republic\T15.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\T15.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\T15.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\T15.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\T15.ogg",
					1.25,
					0.89999998,
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
					"\Indecisive_Armoury_Sounds\Republic\T15.ogg",
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
			textureType="burst";
			reloadTime=0.3;
			dispersion=0.00050000002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class MediumAuto: SlowAuto
		{
			reloadTime=0.15;
			dispersion=0.00079;
			textureType="fullAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class FastAuto: SlowAuto
		{
			reloadTime=0.1;
			dispersion=0.00079;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close: MediumAuto
		{
			reloadTime=0.1;
			burst=7;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=100;
			minRange=50;
			minRangeProbab=0.3;
			midRange=100;
			midRangeProbab=0.9;
			maxRange=150;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=7;
			aiRateOfFire=1;
			aiRateOfFireDistance=200;
			minRange=100;
			minRangeProbab=0.8;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=300;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			reloadTime=0.15;
			burst=5;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			minRange=250;
			minRangeProbab=0.8;
			midRange=500;
			midRangeProbab=0.9;
			maxRange=750;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			reloadTime=0.3;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=3;
			aiRateOfFireDistance=400;
			minRange=500;
			minRangeProbab=1;
			midRange=1000;
			midRangeProbab=0.85;
			maxRange=1500;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			reloadTime=0.3;
			burst=3;
			aiRateOfFire=5;
			//requiredOpticType=2;
			minRange=1000;
			minRangeProbab=0.85;
			midRange=1500;
			midRangeProbab=0.7;
			maxRange=2000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=1000;
		};
		distanceZoomMin=400;
		distanceZoomMax=400;
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\Indecisive_Armoury_Weapons_REPUBLIC\Data\LowPower_Scope\IDA_LowPower_Scope_Blue.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
			class IDA_T15_Scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.125;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
			};
		};
		maxRecoilSway=0.04; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.2; //higher = Less Sway Over Time
		inertia=1.5; //higher = More Weight
		aimTransitionSpeed=0.6; //higher = Faster Aim Transition
		dexterity=0.6; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=170;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_Optic_Scope_WestarM5"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
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
	class MET_T15_Stun: MET_T15
	{
		IDA_StunWeapon="MET_T15";
		scope=1;
		canShootInWater=0;
		fireLightDiffuse[]={0,0,1};
		baseWeapon="IDA_T15_Stun";
		magazines[]=
		{
			"IDA_Stun_Cell"
		};
		muzzles[]=
		{
			"Stun"
		};
		class Stun: IDA_Stun_Muzzle
		{
		};
		weaponInfoType="RscWeaponZeroing";
	};
	/*==============================================================================
	==T-15 (Fried)
	==============================================================================*/
	class MET_T15_fried: MET_T15
	{
		baseWeapon="MET_T15_fried";
		displayName="[16th] Fried T-15";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		JLTS_isFried=1;
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
};