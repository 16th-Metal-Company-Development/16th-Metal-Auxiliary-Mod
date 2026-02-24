class CfgPatches
{
	class metal_inf_weap
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC15A_LEG",
			"MET_DC15A_LEG_ugl",
			"MET_DC15A_PLASTIC",
			"MET_DC15A_ugl_plastic",
			"MET_DC15A_F",
			"MET_DC15LE",
			"MET_DC15A_GL"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"JLTS_weapons_DC15A",
			"3AS_Weapons_Republic_DC15A"
		};
	};
};
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
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
	==DC-15A Legacy
	==============================================================================*/
	class MET_DC15A_LEG: JLTS_DC15A
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="MET_DC15A_LEG_fried";
		JLTS_repairTime=30;
		author="MrClock";
		scope=2;
		displayName="[16th] DC-15A MkI (Wood Stock)";
		descriptionShort="$STR_JLTS_descs_BlasterRifle";
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ui_ca.paa";
		UiPicture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC15A\anims\DC15A_handanim.rtm"
		};
		reloadAction="GestureReload_JLTS_DC15A";
		magazines[]=
		{
			"MET_DC15A_mag"
		};
		magazineWell[]=
		{
			"MET_DC15A_MagWell"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
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
			reloadTime=0.1333333333333333;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00043000003;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
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
			reloadTime=0.1333333333333333;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.00043000003;
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
			dispersion=0.00073000003;
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
			dispersion=0.00073000003;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=650;
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
			dispersion=0.00073000003;
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
		irLaserPos="laser pos";
		irLaserEnd="laser dir";
		irDistance=5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_Optic_Holo_Two_Blue",
					"MET_Optic_Holo_Two_Red",
					"MET_Optic_Holo_Two_Yellow",
					"MET_Optic_Holo_Two_Green",
					"MET_Optic_Holo_One_Blue",
					"MET_Optic_Holo_One_Green",
					"MET_Optic_Holo_One_Red",
					"MET_Optic_Holo_One_Yellow"
				};
				iconPicture="";
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
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class DC19scope_sights
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;// Roughly 4x
				opticsZoomMax=1.25;//Roughly 2x
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class DC19scope_scope: DC19scope_sights
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
				opticsZoomMin=0.050000001;
				opticsZoomMax=0.107;
				opticsZoomInit=0.107;
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=400;
				distanceZoomMax=550;
				weaponInfoType="RscWeaponEmpty";
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
	class MET_DC15A_LEG_ugl: MET_DC15A_LEG
	{
		JLTS_friedItem="MET_DC15A_LEG_ugl_fried";
		JLTS_repairTime=35;
		displayName="[16th] DC-15A Mk I UBGL (Wood Stock)";
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ugl_ui_ca.paa";	
		model="\MRC\JLTS\weapons\DC15A\DC15A_ugl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15A\data\DC15A_co.paa",
			"\MRC\JLTS\weapons\DC15A\data\DC15A_ugl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		class EGLM: UGL_F
		{
			displayName="$STR_JLTS_names_GL";
			descriptionShort="$STR_JLTS_names_UGL";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
			magazines[]=
			{
				"MET_HE_Grenade",
				"MET_AT_Grenade",
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
			};
			magazineWell[]=
			{
				"UGL_40x36",
				"MET_GL_MagWell"
			};
		};
		irLaserPos="";
		irLaserEnd="";
		irDistance=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=125;
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
	class MET_DC15A_PLASTIC: MET_DC15A_LEG
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15A_plastic_fried";
		JLTS_repairTime=30;
		displayName="[16th] DC-15A MkI";
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_plastic.p3d";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15A\data\DC15A_plastic_co.paa"
		};
	};
	class MET_DC15A_ugl_plastic: MET_DC15A_LEG_ugl
	{
		JLTS_friedItem="MET_DC15A_ugl_plastic_fried";
		displayName="[16th] DC-15A Mk I UBGL";
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_ugl_plastic_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_ugl_plastic.p3d";
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC15A\data\DC15A_plastic_co.paa",
			"\MRC\JLTS\weapons\DC15A\data\DC15A_ugl_co.paa"
		};
	};
	/*==============================================================================
	==DC-15A Legacy (Fried)
	==============================================================================*/
	class MET_DC15A_LEG_fried: MET_DC15A_LEG
	{
		baseWeapon="MET_DC15A_LEG_fried";
		displayName="[16th] Fried DC-15A Mk I (Wood Stock)";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_fried_ui_ca.paa";
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
		class Stun: Stun
		{
			displayName="$STR_JLTS_names_StunModeFried";
			magazines[]={};
			drySound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
				0.56234097,
				1,
				10
			};
		};
	};
	class MET_DC15A_LEG_ugl_fried: MET_DC15A_LEG_ugl
	{
		baseWeapon="MET_DC15A_LEG_ugl_fried";
		displayName="[16th] Fried DC-15A Mk I UBGL (Wood Stock)";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_fried_ui_ca.paa";
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
	class MET_DC15A_plastic_fried: MET_DC15A_PLASTIC
	{
		baseWeapon="MET_DC15A_plastic_fried";
		displayName="[16th] Fried DC-15A Mk I";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";
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
		class Stun: Stun
		{
			displayName="$STR_JLTS_names_StunModeFried";
			magazines[]={};
			drySound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\Mx\dry_Mx",
				0.56234097,
				1,
				10
			};
		};
	};
	class MET_DC15A_ugl_plastic_fried: MET_DC15A_ugl_plastic
	{
		baseWeapon="MET_DC15A_ugl_plastic_fried";
		displayName="[16th] Fried DC-15A Mk I UBGL";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";
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
	==DC-15A
	==============================================================================*/
	class MET_DC15A_Base_F: Rifle_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		//JLTS_friedItem="JLTS_DC15A_fried";
		JLTS_repairTime=33;
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_DC15A_mag"
		};
		magazineWell[]=
		{
			"MET_DC15A_MagWell"
		};
		magazineReloadSwitchPhase=0.5;
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DC15A_Library";
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		maxZeroing=0;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.60000002;
		aimTransitionSpeed=0.80000001;
		dexterity=1.4;
		initSpeed=-1;
		class GunParticles: GunParticles
		{
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPicture="";
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
		descriptionShort="$STR_3AS_Weapons_Republic_DC15A_DesShort";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15A\Data\Anim\New_DC15a_Handanim.rtm"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
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
			class SilencedSound: BaseSoundModeType
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
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Burst: Mode_Burst
		{
			burst=3;
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
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
			class SilencedSound: BaseSoundModeType
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
		class Single: Mode_SemiAuto
		{
			reloadTime=0.15;
			dispersion=0.00058;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
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
			class SilencedSound: BaseSoundModeType
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
		class close: FullAuto
		{
			burst=5;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.3;
			midRange=20;
			midRangeProbab=0.9;
			maxRange=50;
			maxRangeProbab=0.9;
			showToPlayer=0;
		};
		class short: close
		{
			burst=4;
			aiRateOfFire=2;
			aiRateOfFireDistance=200;
			minRange=50;
			minRangeProbab=0.8;
			midRange=200;
			midRangeProbab=0.9;
			maxRange=350;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			burst=4;
			aiRateOfFire=4;
			aiRateOfFireDistance=350;
			minRange=200;
			minRangeProbab=0.8;
			midRange=350;
			midRangeProbab=0.9;
			maxRange=500;
			maxRangeProbab=0.9;
		};
		class far_optic1: medium
		{
			//reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=8;
			aiRateOfFireDistance=500;
			minRange=400;
			minRangeProbab=1;
			midRange=500;
			midRangeProbab=0.85;
			maxRange=600;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			//reloadTime=0.15;
			burst=2;
			aiRateOfFire=16;
			//requiredOpticType=2;
			minRange=500;
			minRangeProbab=0.85;
			midRange=750;
			midRangeProbab=0.7;
			maxRange=1000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=8;
		aiDispersionCoefX=5;
		class EGLM: UGL_F
		{
			displayName="[16th] UBGL";
			descriptionShort="Under Barrel Grenade Launcher";
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
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class HoloSight
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
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class HoloScope: HoloSight
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
				opticsZoomMin=0.050000001;
				opticsZoomMax=0.107;
				opticsZoomInit=0.107;
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=400;
				distanceZoomMax=550;
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
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		/*reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",
			1,
			1,
			30
		};*/
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_DC15A_F: MET_DC15A_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15A_F_fried";
		JLTS_repairTime=30;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15A_F";
		//JLTS_friedItem="JLTS_DC15A_fried";
		scope=2;
		displayName="[16th] DC-15A MkII";
		model="\3AS\3AS_Weapons\Republic\DC15A\3AS_DC15A_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15A\Data\UI\3as_dc15a.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	/*==============================================================================
	==DC-15LE
	==============================================================================*/
	class MET_DC15LE: MET_DC15A_Base_F
	{
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15LE";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15LE_fried";
		JLTS_repairTime=30;
		scope=2;
		displayName="[16th] DC-15LE";
		model="\3AS\3AS_Weapons\Republic\DC15A\3AS_DC15A_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15A\Data\UI\3as_dc15a.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		magazines[]=
		{
			"MET_DC15LE_mag"
		};
		magazineWell[]=
		{
			"MET_DC15LE_MagWell"
		};
		modes[]=
		{
			"Single",
			"Burst",
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
			class SilencedSound: BaseSoundModeType
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
			reloadTime=0.15;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.00029;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Burst: Mode_Burst
		{
			textureType="dual";
			burst=2;
			reloadTime=0.03;
			dispersion=0.00029;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
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
			class SilencedSound: BaseSoundModeType
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
		class Single: Mode_SemiAuto
		{
			reloadTime=0.15;
			dispersion=0.00029;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
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
			class SilencedSound: BaseSoundModeType
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
		class close: Single
		{
			burst=2;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
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
			burst=2;
			aiRateOfFire=2;
			aiRateOfFireDistance=250;
			minRange=100;
			minRangeProbab=0.8;
			midRange=250;
			midRangeProbab=0.9;
			maxRange=400;
			maxRangeProbab=0.9;
		};
		class medium: close
		{
			burst=1;
			aiRateOfFire=4;
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
			//reloadTime=0.15;
			//requiredOpticType=1;
			showToPlayer=0;
			burst=1;
			aiRateOfFire=8;
			aiRateOfFireDistance=1000;
			minRange=500;
			minRangeProbab=1;
			midRange=1000;
			midRangeProbab=0.85;
			maxRange=1500;
			maxRangeProbab=0.75;
		};
		class far_optic2: far_optic1
		{
			//reloadTime=0.15;
			burst=1;
			aiRateOfFire=16;
			//requiredOpticType=2;
			minRange=1000;
			minRangeProbab=0.85;
			midRange=1500;
			midRangeProbab=0.7;
			maxRange=2000;
			maxRangeProbab=0.5;
			aiRateOfFireDistance=1000;
		};
		aiDispersionCoefY=2;
		aiDispersionCoefX=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_optic_DC15LE_F"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					"3AS_muzzle_DC15LE_F"
				};
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
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_optic_DC15LE_F";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="3AS_muzzle_DC15LE_F";
			};
		};
	};
	/*==============================================================================
	==DC-15A GL
	==============================================================================*/
	class MET_DC15A_GL: MET_DC15A_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_DC15A_GL_fried";
		JLTS_repairTime=30;
		author="$STR_3as_Studio";
		baseWeapon="MET_DC15A_GL";
		scope=2;
		displayName="[16th] DC-15A GL MkII";
		model="\3AS\3AS_Weapons\Republic\DC15A\3AS_DC15A_GL.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC15A\Data\UI\3as_dc15agl.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Republic\DC15A\Data\Anim\New_DC15aGL_Handanim.rtm"
		};
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=120;
		};
	};
	/*==============================================================================
	==DC-15A Mk II (Fried)
	==============================================================================*/
	class MET_DC15A_F_fried: MET_DC15A_F
	{
		baseWeapon="MET_DC15A_F_fried";
		displayName="[16th] Fried DC-15A Mk II";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_plastic_fried_ui_ca.paa";
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
	class MET_DC15LE_fried: MET_DC15LE
	{
		baseWeapon="MET_DC15LE_fried";
		displayName="[16th] Fried DC-15LE Mk II";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";
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
	class MET_DC15A_GL_fried: MET_DC15A_GL
	{
		baseWeapon="MET_DC15A_GL_fried";
		displayName="[16th] Fried DC-15A Mk II UBGL";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		picture="\MRC\JLTS\weapons\DC15A\data\ui\DC15A_UGL_plastic_fried_ui_ca.paa";
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
class CfgMagazineWells
{
	class MET_DC15A_MagWell
	{
		MET_Magazines[]=
		{
			"MET_DC15A_mag"
		};
	};
	class MET_DC15LE_MagWell
	{
		MET_HeavyMagazines[]=
		{
			"MET_DC15LE_mag"
		};
	};
};