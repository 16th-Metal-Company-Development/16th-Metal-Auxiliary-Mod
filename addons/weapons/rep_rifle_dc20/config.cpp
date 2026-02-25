class CfgPatches
{
	class met_rep_rifle_dc20
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_DC20"
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
	class MET_recoil_DC15C: recoil_default
	{
		muzzleOuter[]={0,0.6,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.150000004};
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
	/*==============================================================================
	==DC-20 Survival Rifle
	==============================================================================*/
	class IDA_DC23;
	class MET_DC20: IDA_DC23
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_DC15A_fried";
		JLTS_repairTime=33;
		displayName="[16th] DC-20 Survival Rifle";
		descriptionShort="Blaster Rifle";
		magazines[]=
		{
			"MET_DC15A_mag"
		};
		magazineWell[]=
		{
			"MET_DC20_MagWell"
		};
		recoil="3AS_recoil_DC15S";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
		class OpticsModes
		{
			class DC20scope_sights
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
			class DC20scope_scope: DC20scope_sights
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
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				opticsZoomMin=0.1;
				opticsZoomMax=0.1;
				opticsZoomInit=0.1;
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				distanceZoomMin=400;
				distanceZoomMax=400;
			};
		};
		modes[]=
		{
			"Single",
			"LowAuto",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
			dispersion=0.00233;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
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
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
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
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
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
		};
		class LowAuto: Mode_FullAuto
		{
			reloadTime=0.2;
			dispersion=0.006;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			textureType="burst";
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
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
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
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
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
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.006;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
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
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
					1.25,
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
					"\Indecisive_Armoury_Sounds\INDEP\A260.ogg",
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
		};
	};
};
class CfgMagazineWells
{
	class MET_DC20_MagWell
	{
		MET_DC20Magazines_REP[]=
		{
			
			"MET_DC15A_mag",
			"MET_DC15S_Mag",
			"MET_DC19E_mag",
			"MET_DC15LE_mag",
			"MET_CinCar_Mag",
			"MET_DC15SMG_Mag",
			"MET_Valken_mag",
			"MET_blaster_pistolC_battery",
			"MET_blaster_pistol_battery",
			"MET_dual_blaster_pistol_battery",
			"MET_blaster_pistol_Red_battery",
			"MET_DC17M_mag",
			"MET_DC17M_Red_mag",
			"MET_DC17M_Sniper_mag",
			"MET_DC17M_Sniper_Red_mag",
			"MET_dc15sa_battery",
			"MET_dc15sa_red_battery"
		};
		MET_DC20Magazines_BAR[]=
		{
			"MET_D200_Pistol_Mag",
			"MET_DLA13_Mag",
			"MET_T20_Mag",
			"MET_X300_Sniper_mag"
		};
		MET_DC20Magazines_212[]=
		{
			"Aux212_JLTS_E5_Mag",
			"Aux212_JLTS_E5S_Mag"
		};
		MET_DC20Magazines_IDA[]=
		{
			"IDA_Blaster_Cell_Power3_40Rnd_Red",
			"IDA_Blaster_Cell_Power5_5Rnd_Red"
		};
		MET_DC20Magazines_LS[]=
		{
			"ls_magazine_e5",
			"ls_magazine_rg4d",
			"ls_magazine_mercenarySniper",
			"ls_magazine_westar35sa",
			"ls_magazine_westar35s",
			"ls_magazine_westar35c"
		};
		MET_DC20Magazines_MAND[]=
		{
			"MET_773_mag",
			"MET_Westar35C_Mag",
			"MET_Westar35S_Mag",
			"MET_Westar35SA_mag"
		};
		MET_DC20Magazines_JLTS[]=
		{
			"JLTS_E5_mag",
			"JLTS_E5S_mag",
			"JLTS_RG4D_mag"
		};
		MET_DC20Magazines_3as[]=
		{
			"3AS_60Rnd_EM50_RedPlasma",
			"3AS_10Rnd_EM90_Mag",
			"3AS_15Rnd_EM20_SE14R_Mag"
		};
		MET_DC20Magazines_MET_Droid[]=
		{
			"Metal_E5_mag",
			"Metal_E5_BX_mag",
			"Metal_E5S_mag",
			"Metal_RG4D_mag"
		};
	};
};