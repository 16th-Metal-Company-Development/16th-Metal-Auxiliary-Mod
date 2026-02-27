class CfgPatches
{
	class met_rep_snp_firepuncher
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"MET_16_weapon_firepuncher"
		};
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"ls_weapons_firepuncher"
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
	/*==============================================================================
	==Firepuncher 773
	==============================================================================*/
	class ls_weapon_firepuncher_base;
	class MET_16_weapon_firepuncher: ls_weapon_firepuncher_base
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="MET_16_weapon_firepuncher_fried";
		JLTS_repairTime=40;
		scope=2;
		scopeArsenal=2;
		author="Legion Studios";
		displayName="[16th] 773 Firepuncher";
		baseWeapon="MET_16_weapon_firepuncher";
		recoil="MET_recoil_VK38X";
		magazines[]=
		{
			"MET_ARC_773_mag"
		};
		magazineWell[]=
		{
			"MET_ARC_773_magwell"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.133333333;
			dispersion=0.00000000000001;
			minRange=5;
			minRangeProbab=0.3;
			midRange=20;
			midRangeProbab=0.6;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"ls_firepuncher_Shot_SoundSet",
					"ls_sniper_Tail_SoundSet"
				};
			};
			class SilencedSound
			{
				soundSetShot[]=
				{
					"ls_firepuncher_suppressed_Shot_SoundSet",
					"ls_sniper_Tail_SoundSet"
				};
			};
		};
		ls_weapons_adsSounds[]=
		{
			
			{
				"ls_weapons_sniperRifle_zoomIn01",
				"ls_weapons_sniperRifle_zoomIn02"
			},
			"ls_weapons_sniperRifle_zoomOut01"
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
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_blue_med.p3d"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
		};
		maxRecoilSway=0.4; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1; //higher = Less Sway Over Time
		inertia=1.8; //higher = More Weight
		aimTransitionSpeed=0.6; //higher = Faster Aim Transition
		dexterity=1; //higher = More Maneuverable
	};
	/*==============================================================================
	==Firepuncher 773 (Fried)
	==============================================================================*/
	class MET_16_weapon_firepuncher_fried: MET_16_weapon_firepuncher
	{
		baseWeapon="MET_16_weapon_firepuncher_fried";
		displayName="[16th] Fried Firepuncher 773";
		descriptionShort="$STR_JLTS_descs_BlasterFried";
		scope=1;
		scopeArsenal=0;
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
class CfgMagazineWells
{
	class MET_ARC_773_magwell
	{
		MET_ARC_773_mags[]=
		{
			"MET_ARC_773_mag",
			"MET_DC15x_at_mag"
		};
	};
};