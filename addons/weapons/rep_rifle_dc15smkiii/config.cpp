class CfgPatches
{
	class met_rep_rifle_dc15s
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15S",
			"MET_DC15S_F",
			"MET_DC15S_GL"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"met_rep_rifle_dc15s",
			"ShadowLegion_Aux_Weapons"
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
	==DC-15S LEGACY
	==============================================================================*/
	class JLTS_DC15S: arifle_MX_Base_F
	{
		class GunParticles;
		class WeaponSlotsInfo;
	};
	class MET_DC15S: JLTS_DC15S
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15S_fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="MET_DC15S_shield";
		author="MrClock";
		scope=2;
		displayName="[16th] DC-15S MkI";
		descriptionShort="$STR_JLTS_descs_BlasterCarbine";
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15S\DC15S_new.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15S\data\new\DC15S_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15S\anims\DC15S_handanim.rtm"
		};
		reloadAction="GestureReload_JLTS_DC15S";
		magazines[]=
		{
			"MET_DC15S_Mag"
		};
		magazineWell[]=
		{
			"MET_DC15S_MagWell"
		};
		maxRecoilSway=0.06; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.9; //higher = Less Sway Over Time
		inertia=0.5; //higher = More Weight
		aimTransitionSpeed=1; //higher = Faster Aim Transition
		dexterity=1.6; //higher = More Maneuverable
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
			"FullAuto",
			"fullauto_medium",
			"single_medium_optics1",
			"single_far_optics2"
		};
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
			reloadTime=0.075;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
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
			reloadTime=0.075;
			dispersion=0.00087;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={
					"MET_holo_optic",
					//"3AS_optic_holo_DC15S",
					"MET_optic_holo_scope",
					"MET_optic_holo_test",
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
	class MET_DC15S_shield: MET_DC15S
	{
		displayName="[16th] DC-15S (Shield) MkI";
		baseWeapon="MET_DC15S";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="MET_DC15S";
		JLTS_friedItem="MET_DC15S_shield_fried";
		model="\MRC\JLTS\weapons\DC15S\DC15S_shielded.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15S\data\new\DC15S_co.paa",
			"\MRC\JLTS\weapons\Shield\data\shield_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15S\anims\DC15S_shielded_handanim.rtm"
		};
		reloadAction="GestureReload";
		maxRecoilSway=1; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=0.2; //higher = Less Sway Over Time
		inertia=2; //higher = More Weight
		aimTransitionSpeed=0.8; //higher = Faster Aim Transition
		dexterity=0.7; //higher = More Maneuverable
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=500;
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
	==DC-15S LEGACY (Fried)
	==============================================================================*/
	class MET_DC15S_fried: MET_DC15S
	{
		JLTS_isFried=1;
		JLTS_shieldedWeapon="MET_DC15S_shield_fried";
		baseWeapon="MET_DC15S_fried";
		displayName="[16th] Fried DC-15S";
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
	class MET_DC15S_shield_fried: MET_DC15S_shield
	{
		JLTS_isFried=1;
		JLTS_baseWeapon="MET_DC15S";
		baseWeapon="MET_DC15S_shield_fried";
		displayName="[16th] Fried DC-15S (Shield)";
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
	/*==============================================================================
	==DC-15S
	==============================================================================*/
	class MET_DC15S_Base_F: Rifle_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_DC15S_fried";
		JLTS_repairTime=20;
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_DC15S_Mag"
		};
		magazineWell[]=
		{
			"MET_DC15S_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DC15S_Library";
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="3AS_recoil_DC15S";
		maxZeroing=0;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.06; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.9; //higher = Less Sway Over Time
		inertia=0.5; //higher = More Weight
		aimTransitionSpeed=1; //higher = Faster Aim Transition
		dexterity=1.6; //higher = More Maneuverable
		initSpeed=-1;
		class GunParticles: GunParticles
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
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
		distanceZoomMin=300;
		distanceZoomMax=300;
		descriptionShort="$STR_3AS_Weapons_Republic_DC15S_DesShort";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15S\Data\Anim\New_DC15S_Handanim.rtm"
		};
		modes[]=
		{
			"FullAuto",
			"Single",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			reloadTime=0.075;
			dispersion=0.00087;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075;
			dispersion=0.00087;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=350;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
		};
		class close: FullAuto
		{
			burst=8;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=20;
			minRange=10;
			minRangeProbab=0.3;
			midRange=20;
			midRangeProbab=0.9;
			maxRange=30;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=6;
			aiRateOfFire=2;
			aiRateOfFireDistance=50;
			minRange=25;
			minRangeProbab=0.8;
			midRange=50;
			midRangeProbab=0.9;
			maxRange=75;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			burst=4;
			aiRateOfFire=4;
			aiRateOfFireDistance=100;
			minRange=50;
			minRangeProbab=0.8;
			midRange=100;
			midRangeProbab=0.9;
			maxRange=150;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			//reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=2;
			aiRateOfFire=8;
			aiRateOfFireDistance=200;
			minRange=100;
			minRangeProbab=1;
			midRange=200;
			midRangeProbab=0.85;
			maxRange=400;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			//reloadTime=0.15;
			burst=1;
			aiRateOfFire=16;
			//requiredOpticType=2;
			minRange=200;
			minRangeProbab=0.85;
			midRange=400;
			midRangeProbab=0.7;
			maxRange=600;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=400;
		};
		class GL_1GL_F: UGL_F
		{
			displayName="UBGL";
			descriptionShort="Underbarrel Grenade Launcher";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"MET_HE_Grenade"
			};
			magazineWell[]=
			{
				"UGL_40x36",
				"MET_GL_MagWell"
			};
			cameraDir="OP_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload.wss",
				1,
				1,
				10
			};
		};
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class Holosights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
			class Holoscope: Holosights
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
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty.wss",
			2,
			1,
			20
		};
		/*reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\Old\Blaster_reload.wss",
			1,
			1,
			30
		};*/
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_DC15S_F: MET_DC15S_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15S_F_fried";
		JLTS_repairTime=20;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15S_F";
		scope=2;
		displayName="[16th] DC-15S MkII";
		model="\3AS\3AS_Weapons\Republic\DC15S\3AS_DC15S_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15S\Data\UI\3as_dc15s.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	/*==============================================================================
	==DC-15S MkII (Fried)
	==============================================================================*/
	class MET_DC15S_F_fried: MET_DC15S_F
	{
		JLTS_isFried=1;
		baseWeapon="MET_DC15S_F_fried";
		displayName="[16th] Fried DC-15S MkII";
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
	/*==============================================================================
	==DC-15S GL
	==============================================================================*/
	class MET_DC15S_GL: MET_DC15S_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15S_GL_fried";
		JLTS_repairTime=25;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15S_GL";
		scope=2;
		displayName="[16th] DC-15S MkII GL";
		model="\3AS\3AS_Weapons\Republic\DC15S\3AS_DC15S_GL.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15S\Data\UI\3as_dc15sgl.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15S\Data\Anim\New_DC15SGL_Handanim.rtm"
		};
		muzzles[]=
		{
			"this",
			"GL_1GL_F"
		};
		maxRecoilSway=0.08; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.65; //higher = Less Sway Over Time
		inertia=0.7; //higher = More Weight
		aimTransitionSpeed=0.9; //higher = Faster Aim Transition
		dexterity=1.4; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
		};
	};
	/*==============================================================================
	==DC-15S GL MkII (Fried)
	==============================================================================*/
	class MET_DC15S_GL_fried: MET_DC15S_GL
	{
		JLTS_isFried=1;
		baseWeapon="MET_DC15S_GL_fried";
		displayName="[16th] Fried DC-15S MkII GL";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15S\data\ui\DC15S_fried_ui_ca.paa";
		magazines[]={};
		magazineWell[]={};
		muzzles[]=
		{
			"this"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx.wss",
			0.56234097,
			1,
			10
		};
	};
};
class CfgMagazineWells
{
	class MET_DC15S_MagWell
	{
		MET_LightMagazines[]=
		{
			"MET_DC15S_Mag"
		};
	};
};