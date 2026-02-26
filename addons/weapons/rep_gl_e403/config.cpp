class CfgPatches
{
	class met_rep_gl_e403
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_E403AC2"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"SFA_Weapons_R"
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
	/*==============================================================================
	==E-403
	==============================================================================*/
	class MET_E403AC2: LMG_Mk200_F
	{
		author="16th Aux Team";
		scope=2;
		scopeArsenal=2;
		baseWeapon="MET_E403AC2";
		displayName="[16th] E-403 Assault cannon";
		picture="\SFA_Main\SFA_Weapons_R\E403\data\ui\E403_ui.paa";
		model="SFA_Main\SFA_Weapons_R\E403\E403.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFA_Main\SFA_Weapons_R\E403\data\E403_co.paa"
		};
		recoil="recoil_pdw";
		WBK_UseHeavyWeaponFramework = "true";	
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SFA_Main\SFA_Weapons_R\Anim\E403\E403_anim.rtm"
		};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		cameraDir="OP_look";
		discreteInitIndex=0;
		discretedistance[]={100,200,300,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3",
			"OP_eye4"
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		magazines[]=
		{
			"MET_ProtonPack"
		};
		magazineWell[]=
		{
			"MET_E403_magwell"
		};
		modes[]=
		{
			"LowAuto",
			"Auto",
			"HighAuto"
		};
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		initSpeed = 210;
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
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"\SFA_Main\SFA_Weapons_R\E403\data\sfx\E403.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.25;
			dispersion=0.0030149999;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class LowAuto: Auto
		{
			textureType="burst";
			reloadTime=0.375;
			dispersion=0.003015;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class HighAuto: Auto
		{
			textureType="fastAuto";
			reloadTime=0.1875;
			dispersion=0.003015;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		maxRecoilSway=0.02; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1; //higher = Less Sway Over Time
		inertia=1.8; //higher = More Weight
		aimTransitionSpeed=0.6; //higher = Faster Aim Transition
		dexterity=0.4; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=300;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
};
class CfgMagazineWells
{
	class MET_E403_magwell
	{
		MET_E403_Magazines[]=
		{
			"MET_ProtonPack",
			"MET_HEATProtonPack",
			"MET_ClusterProtonPack"
		};
	};
};