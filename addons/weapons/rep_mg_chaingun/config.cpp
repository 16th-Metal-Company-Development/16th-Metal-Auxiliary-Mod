class CfgPatches
{
	class met_rep_mg_chaingun
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_Chaingun",
			"MET_Chaingun_mkii"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_Chaingun"
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class MET_recoil_chain: recoil_default
	{
		muzzleOuter[]={0,0.5,0.6,0.6};
		kickBack[]={0.06,0.1};
		temporary=0.004;
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
	class Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	/*==============================================================================
	==Chaingun
	==============================================================================*/
	class MET_Chaingun: Launcher_Base_F
	{
		author="3AS";
		//_generalMacro="launch_RPG32_F";
		scope=2;
		scopeArsenal=1;
		displayName="[16th] Chaingun MkI";
		model="3AS\3AS_Weapons\Chaingun\Chaingun.p3d";
		picture="\3AS\3AS_Weapons\Chaingun\data\UI\3as_chaingun.paa";
		UiPicture="\3AS\3AS_Weapons\Chaingun\data\UI\3as_chaingun.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3as_Weapons\data\anim\chaingun_hold.rtm"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		reloadAction="";
		recoil="MET_recoil_chain";
		autoReload="true";
		maxZeroing=600;
		//modelOptics="";
		weaponInfoType="RscWeaponEmpty";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class HoloScope
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
		magazines[]=
		{
			"MET_Chaingun_AT_Drum_Mag",
			"MET_Chaingun_HE_Drum_Mag",
			"MET_Chaingun_Nuke_Drum_Mag"
		};
		modes[]=
		{
			"slowerAuto",
			"FullAuto",
			"fullerAuto",
			"maxAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
					0.316228,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"3AS\3AS_Main\Sounds\Z6\Z61.ogg",
					0.94999999,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.1
				};
			};
			reloadTime=0.1;
			dispersion=0.00174;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			soundBurst=0;
			burst=1;
			displayName="Full";
			textureType="fullAuto";
		};
		/*modes[]=
		{
			"slowerAuto",
			"Auto",
			"fullerAuto",
			"maxAuto"
		};*/
		class fullerAuto: FullAuto
		{
			reloadTime=0.05;
			dispersion=0.006;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: FullAuto
		{
			reloadTime=0.15;
			dispersion=0.006;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class maxAuto: FullAuto
		{
			reloadTime=0.006;
			dispersion=0.006;
			textureType="semi";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		ace_overpressure_angle=0;
		ace_overpressure_range=0;
		ace_overpressure_damage=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=300;
		};
	};
	class MET_Chaingun_mkii: Launcher_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_friedItem="MET_Chaingun_mkii_fried";
		JLTS_repairTime=25;
		author="3AS";
		cursor="srifle";
		_generalMacro="launch_RPG32_F";
		scope=2;
		scopeArsenal=2;
		displayName="[16th] Chaingun";
		model="3AS\3AS_Weapons\Chaingun\Chaingun.p3d";
		picture="\3AS\3AS_Weapons\Chaingun\data\UI\3as_chaingun.paa";
		UiPicture="\3AS\3AS_Weapons\Chaingun\data\UI\3as_chaingun.paa";
        magazineReloadTime = 0;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3as_Weapons\data\anim\chaingun_hold.rtm"
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
		reloadAction="";
		recoil="MET_recoil_chain";
		autoReload="true";
		reloadTime=0;
		weaponReloadingTime=0;
		maxZeroing=600;
		reloadMagazineSound[]=
		{
			"z\MET\addons\weapons\infantry_weap\sounds\republic\z-6\Z6_reload.ogg",
			1.5,
			1,
			100
		};
		//modelOptics="";
		weaponInfoType="RscWeaponEmpty";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class HoloScope
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
		magazines[]=
		{
			"MET_Chaingun_Light_Drum_Mag"
		};
		magazineWell[]=
		{
			"MET_Chaingun_MagWell"
		};
		modes[]=
		{
			"slowerAuto",
			"FullAuto",
			"fullerAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",
					0.316228,
					1,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"3AS\3AS_Main\Sounds\Z6\Z61.ogg",
					0.94999999,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.1
				};
			};
			reloadTime=0.1;
			dispersion=0.00174;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			soundBurst=0;
			burst=1;
			displayName="Full";
			textureType="fullAuto";
		};
		class fullerAuto: FullAuto
		{
			reloadTime=0.075;
			dispersion=0.006;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: FullAuto
		{
			reloadTime=0.15;
			dispersion=0.006;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		ace_overpressure_angle=0;
		ace_overpressure_range=0;
		ace_overpressure_damage=0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=300;
		};
	};
	class MET_Chaingun_mkii_fried: MET_Chaingun_mkii
	{
		baseWeapon="MET_Chaingun_mkii_fried";
		displayName="[16th] (Fried) Chaingun";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		scopeArsenal=0;
		picture="\MRC\JLTS\weapons\RPS6\data\ui\RPS6_fried_ui_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]={};
		magazineWell[]={};
		JLTS_isFried=1;
	};
};