class CfgPatches
{
	class met_rep_smg_cinnagaran
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_Cinnagaran_Carbine_F",
			"MET_DC15SMG"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_Greenfor",
			"JLTS_weapons_DC15S"
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class MET_recoil_CinCar: recoil_default
	{
		muzzleOuter[]={0,0.5,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.150000004};
		temporary=0.0060000001;
	};
};
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
	class JLTS_DC15S: arifle_MX_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	/*==============================================================================
	==SMGs
	==============================================================================*/
	class 3AS_Cinnagaran_Carbine_Base_F;
	class 3AS_Cinnagaran_Carbine_F: 3AS_Cinnagaran_Carbine_Base_F
	{
		class WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
			class MuzzleSlot;
		};
	};
	class MET_Cinnagaran_Carbine_F: 3AS_Cinnagaran_Carbine_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_Cinnagaran_Carbine_F_fried";
		JLTS_repairTime=20;
		scope=2;
		displayName="[16th] Cinnagaran Carbine";
		recoil="MET_recoil_CinCar";
		magazines[]=
		{
			"MET_CinCar_Mag"
		};
		magazineWell[]=
		{
			"MET_CinCar_MagWell"
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		maxRecoilSway=0.08; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.65; //higher = Less Sway Over Time
		inertia=0.7; //higher = More Weight
		aimTransitionSpeed=0.9; //higher = Faster Aim Transition
		dexterity=1.4; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"MET_Optic_Cinnagaran_1_F"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"3AS_Flashlight_Cinnagaran_1_F"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.03;
			dispersion=0.00066000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Cinnagaran_SoundSet"
				};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.03;
			dispersion=0.00066000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			burst=5;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Cinnagaran_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.05;
			dispersion=0.00106;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_Cinnagaran_SoundSet"
				};
			};
		};
		
	};
	class MET_DC15SMG: JLTS_DC15S
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15SMG_fried";
		JLTS_repairTime=20;
		recoil="MET_recoil_CinCar";
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="MET_DC15SMG_shield";
		author="MrClock";
		scope=2;
		displayName="[16th] DC-15SMG MkI";
		descriptionShort="$STR_JLTS_descs_BlasterCarbine";
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15S\DC15S.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15S\anims\DC15S_handanim.rtm"
		};
		reloadAction="GestureReload_JLTS_DC15S";
		magazines[]=
		{
			"MET_DC15SMG_Mag"
		};
		magazineWell[]=
		{
			"MET_CinCar_MagWell"
		};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle
		{
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.03;
			dispersion=0.00066000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.03;
			dispersion=0.00066000002;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			burst=5;
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.05;
			dispersion=0.00106;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};
		class fullauto_medium: FullAuto
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			showToPlayer=0;
			burst=3;
			aiBurstTerminable=1;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
		};
		class single_medium_optics1: Single
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=1;
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
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
					"MRC\JLTS\weapons\DC15A\sounds\dc15a_fire",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			requiredOpticType=2;
			showToPlayer=0;
			minRange=100;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.60000002;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=700;
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class DC15scope_sights
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class DC15scope_scope: DC15scope_sights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsZoomMin=0.107;
				opticsZoomMax=0.107;
				opticsZoomInit=0.107;
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=400;
				distanceZoomMax=400;
				weaponInfoType="RscWeaponEmpty";
			};
		};
		maxRecoilSway=0.08; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.65; //higher = Less Sway Over Time
		inertia=0.7; //higher = More Weight
		aimTransitionSpeed=0.9; //higher = Faster Aim Transition
		dexterity=1.4; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={
					"MET_holo_optic",
					//"3AS_optic_holo_DC15S",
					"stbtn_Optic_Holo_One_Blue",
					"MET_optic_holo_scope",
					"MET_Optic_Holo_Two_Blue",
					"MET_Optic_Holo_Two_Red",
					"MET_Optic_Holo_Two_Yellow",
					"MET_Optic_Holo_Two_Green",
					"MET_Optic_Holo_One_Blue",
					"MET_Optic_Holo_One_Green",
					"MET_Optic_Holo_One_Red",
					"MET_Optic_Holo_One_Yellow"
				};
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
	class MET_DC15SMG_shield: MET_DC15SMG
	{
		displayName="[16th] DC-15SMG (Shield) MkI";
		baseWeapon="MET_DC15SMG";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="MET_DC15SMG";
		JLTS_friedItem="MET_DC15SMG_shield_fried";
		model="\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15S\data\DC15S_co.paa",
			"\MRC\JLTS\weapons\Shield\data\shield_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"
		};
		reloadAction="GestureReload";
		inertia=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=480;
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]=
				{
					"JLTS_riot_shield_attachment",
					"JLTS_riot_shield_212_attachment",
					"JLTS_riot_shield_501_attachment",
					"JLTS_riot_shield_101_attachment",
					"JLTS_riot_shield_CG_attachment",
					"JLTS_riot_shield_GD_attachment",
					"JLTS_riot_shield_droid_attachment"
				};
			};
		};
	};
	/*==============================================================================
	==SMGs (Fried)
	==============================================================================*/
	class MET_Cinnagaran_Carbine_F_fried: MET_Cinnagaran_Carbine_F
	{
		JLTS_isFried=1;
		baseWeapon="MET_Cinnagaran_Carbine_F_fried";
		displayName="[16th] Fried Cinnagaran Carbine";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
	class MET_DC15SMG_fried: MET_DC15SMG
	{
		JLTS_isFried=1;
		JLTS_shieldedWeapon="MET_DC15SMG_shield_fried";
		baseWeapon="MET_DC15SMG_fried";
		displayName="[16th] Fried DC-15SMG";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
		class Stun: Stun
		{
			displayName="$STR_JLTS_names_StunModeFried";
			magazines[]={};
			drySound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
				0.56234097,
				1,
				10
			};
		};
	};
	class MET_DC15SMG_shield_fried: MET_DC15SMG_shield
	{
		JLTS_isFried=1;
		JLTS_baseWeapon="MET_DC15SMG";
		baseWeapon="MET_DC15SMG_shield_fried";
		displayName="[16th] Fried DC-15SMG (Shield)";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
		class Stun: Stun
		{
			displayName="$STR_JLTS_names_StunModeFried";
			magazines[]={};
			drySound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
				0.56234097,
				1,
				10
			};
		};
	};
};
class CfgMagazineWells
{
	class MET_CinCar_MagWell
	{
		MET_CinCar_Mags[]=
		{
			"MET_CinCar_Mag",
			"MET_DC15SMG_Mag",
			"MET_DC15S_Mag"
		};
	};
};