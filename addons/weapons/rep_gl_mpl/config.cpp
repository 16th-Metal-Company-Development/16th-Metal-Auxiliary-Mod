class CfgPatches
{
	class met_rep_gl_mpl
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_MPL_F",
			"MET_MPL60A_HM"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"3AS_Weapons_MPL"
		};
	};
};
#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
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
	==GLs
	==============================================================================*/
	class 3AS_MPL_Base_F;
	class 3AS_MPL_F: 3AS_MPL_Base_F
	{
		class WeaponSlotsInfo;
	};
	class MET_MPL_F: 3AS_MPL_F
	{
		scope=2;
		displayName="[16th] MPL-40";
		magazines[]=
		{
			"MET_3Rnd_HE_Grenade_shell"
		};
		magazineWell[]=
		{
			"MET_GL_Magwell",
			"MET_3GL_MagWell"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.5;
		};
	};
	class MET_MPL60A_HM: 3AS_MPL_F
	{
		author="3AS";
		scope=2;
		displayName="[16th] MPL-60A Hand Mortar";
		descriptionShort="MPL-60A Infantry Hand Mortar";
		model="3as\3AS_Weapons\MPL\3AS_MPL.p3d";
		picture="\3AS\3AS_Weapons\MPL\Data\UI\3as_mpl.paa";
		magazines[]=
		{
			"MET_60mm_HE_mag",
			"MET_60mm_HEAT_mag",
			"MET_60mm_ClustHE_mag",
			"MET_60mm_WideClustHE_mag"
		};
		magazineWell[]=
		{
			"MET_60_GL_Magwell",
		};
		reloadAction="3AS_GestureReloadMPL";
		magazineReloadSwitchPhase=0.40000001;
		recoil="3as_recoil_heavy";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.40000001;
		dexterity=1.6;
		maxZeroing=1000;
		cameraDir="OP_look";
		discreteDistance[]={80,105,120,150,180,205,225};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye_50",
			"OP_eye_75",
			"OP_eye_100",
			"OP_eye_150",
			"OP_eye_200",
			"OP_eye_250",
			"OP_eye_300"
		};
		discreteDistanceInitIndex=0;
		weaponInfoType="RscWeaponZeroing";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=59.5;
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3AS\3AS_Weapons\MPL\data\anims\MPLhand.rtm"
		};
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=3;
		/*modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.66666669;
			dispersion=0.0029088799;
			minRange=75;
			minRangeProbab=0.89999998;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",
					1,
					1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					1
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"swlw_rework\sounds\launcher\PLX_shot.wss",
					1,
					0.94999999,
					3500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
		};*/
		aiDispersionCoefY=6;
		aiDispersionCoefX=4;
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
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl.wss",
			0.316228,
			1,
			5
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL.wss",
			0.56234097,
			1,
			10
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl.wss",
			0.56234097,
			1,
			10
		};
	};
};
class CfgMagazineWells
{
	class MET_3GL_MagWell
	{
		MET_3GL_Mags[]=
		{
			"MET_3Rnd_HE_Grenade_shell",
			"MET_3Rnd_AT_Grenade_shell",
			"MET_Clust_Grenade_shell",
			"MET_6Rnd_Grape_Grenade",
			"MET_3Rnd_ILLUM_Grenade",
			"MET_3Rnd_ILLUM_Grenade_Clust",
			"MET_3Rnd_ILLUM_B_Grenade",
			"MET_3Rnd_ILLUM_B_Grenade_Clust",
			"MET_3Rnd_ILLUM_G_Grenade",
			"MET_3Rnd_ILLUM_G_Grenade_Clust",
			"MET_3Rnd_ILLUM_R_Grenade",
			"MET_3Rnd_ILLUM_R_Grenade_Clust",
			"MET_3Rnd_ILLUM_Y_Grenade",
			"MET_3Rnd_ILLUM_Y_Grenade_Clust",
			"MET_3Rnd_ILLUM_O_Grenade",
			"MET_3Rnd_ILLUM_O_Grenade_Clust",
			"MET_3Rnd_ILLUM_P_Grenade",
			"MET_3Rnd_ILLUM_P_Grenade_Clust",
			"MET_3Rnd_ILLUM_TU_Grenade",
			"MET_3Rnd_ILLUM_TU_Grenade_Clust",
			"MET_3Rnd_ILLUM_TE_Grenade",
			"MET_3Rnd_ILLUM_TE_Grenade_Clust",
			"MET_3Rnd_ILLUM_IR_Grenade",
			"MET_3Rnd_ILLUM_IR_Grenade_Clust",
			"MET_3Rnd_SMKW_Grenade",
			"MET_3Rnd_SMKB_Grenade",
			"MET_3Rnd_SMKG_Grenade",
			"MET_3Rnd_SMKO_Grenade",
			"MET_3Rnd_SMKP_Grenade",
			"MET_3Rnd_SMKR_Grenade",
			"MET_3Rnd_SMKTU_Grenade",
			"MET_3Rnd_SMKTE_Grenade",
			"MET_3Rnd_SMKY_Grenade"
		};
	};
	class MET_GL_MagWell
	{
		MET_GL_Mags[]=
		{
			"MET_HE_Grenade",
			"MET_Nuclear_Grenade",
			"MET_AT_Grenade",
			"MET_Grape_Grenade",
			"MET_SMKW_Grenade",
			"MET_SMKB_Grenade",
			"MET_SMKG_Grenade",
			"MET_SMKO_Grenade",
			"MET_SMKP_Grenade",
			"MET_SMKR_Grenade",
			"MET_SMKTU_Grenade",
			"MET_SMKTE_Grenade",
			"MET_SMKY_Grenade",
			"MET_SMKW_Clust_Grenade",
			"MET_SMKB_Clust_Grenade",
			"MET_SMKG_Clust_Grenade",
			"MET_SMKO_Clust_Grenade",
			"MET_SMKP_Clust_Grenade",
			"MET_SMKR_Clust_Grenade",
			"MET_SMKTU_Clust_Grenade",
			"MET_SMKTE_Clust_Grenade",
			"MET_SMKY_Clust_Grenade",
			"MET_SUN_Grenade",
			"MET_SUN_Grenade_Clust",
			"MET_RA_Grenade",
			"MET_RA_Grenade_Clust",
			"MET_ILLUM_Grenade",
			"MET_ILLUM_Grenade_Clust",
			"MET_ILLUM_B_Grenade",
			"MET_ILLUM_B_Grenade_Clust",
			"MET_ILLUM_G_Grenade",
			"MET_ILLUM_G_Grenade_Clust",
			"MET_ILLUM_R_Grenade",
			"MET_ILLUM_R_Grenade_Clust",
			"MET_ILLUM_Y_Grenade",
			"MET_ILLUM_Y_Grenade_Clust",
			"MET_ILLUM_O_Grenade",
			"MET_ILLUM_O_Grenade_Clust",
			"MET_ILLUM_P_Grenade",
			"MET_ILLUM_P_Grenade_Clust",
			"MET_ILLUM_TU_Grenade",
			"MET_ILLUM_TU_Grenade_Clust",
			"MET_ILLUM_TE_Grenade",
			"MET_ILLUM_TE_Grenade_Clust",
			"MET_ILLUM_IR_Grenade",
			"MET_ILLUM_IR_Grenade_Clust",
			"ACE_HuntIR_M203"
		};
	};
	class MET_60_GL_Magwell
	{
		MET_60mm_GL_Mags[]=
		{
			"MET_60mm_HE_mag",
			"MET_60mm_HEAT_mag"
		};
	};
	class MET_GL_MagWell_Pacifist
	{
		MET_GL_Mags[]=
		{
			"MET_SMKW_Grenade",
			"MET_SMKB_Grenade",
			"MET_SMKG_Grenade",
			"MET_SMKO_Grenade",
			"MET_SMKP_Grenade",
			"MET_SMKR_Grenade",
			"MET_SMKTU_Grenade",
			"MET_SMKTE_Grenade",
			"MET_SMKY_Grenade",
			"MET_SMKW_Clust_Grenade",
			"MET_SMKB_Clust_Grenade",
			"MET_SMKG_Clust_Grenade",
			"MET_SMKO_Clust_Grenade",
			"MET_SMKP_Clust_Grenade",
			"MET_SMKR_Clust_Grenade",
			"MET_SMKTU_Clust_Grenade",
			"MET_SMKTE_Clust_Grenade",
			"MET_SMKY_Clust_Grenade",
			"MET_SUN_Grenade",
			"MET_SUN_Grenade_Clust",
			"MET_RA_Grenade",
			"MET_RA_Grenade_Clust",
			"MET_ILLUM_Grenade",
			"MET_ILLUM_Grenade_Clust",
			"MET_ILLUM_B_Grenade",
			"MET_ILLUM_B_Grenade_Clust",
			"MET_ILLUM_G_Grenade",
			"MET_ILLUM_G_Grenade_Clust",
			"MET_ILLUM_R_Grenade",
			"MET_ILLUM_R_Grenade_Clust",
			"MET_ILLUM_Y_Grenade",
			"MET_ILLUM_Y_Grenade_Clust",
			"MET_ILLUM_O_Grenade",
			"MET_ILLUM_O_Grenade_Clust",
			"MET_ILLUM_P_Grenade",
			"MET_ILLUM_P_Grenade_Clust",
			"MET_ILLUM_TU_Grenade",
			"MET_ILLUM_TU_Grenade_Clust",
			"MET_ILLUM_TE_Grenade",
			"MET_ILLUM_TE_Grenade_Clust",
			"MET_ILLUM_IR_Grenade",
			"MET_ILLUM_IR_Grenade_Clust",
			"ACE_HuntIR_M203"
		};
	};
};