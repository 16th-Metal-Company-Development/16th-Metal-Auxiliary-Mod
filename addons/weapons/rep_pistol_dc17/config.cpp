class CfgPatches
{
	class met_rep_pistol_dc17
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
			"JLTS_weapons_DC17SA",
			"3AS_Weapons_Republic_DC17S"
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
class JLTS_stun_muzzle;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class 3AS_MuzzleSlot_DC17S;
class 3AS_CowsSlot_DC17S;
class UnderBarrelSlot;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class CfgWeapons
{
	/*==============================================================================
	==DC-17
	==============================================================================*/
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class GunParticles;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class hgun_P07_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	class JLTS_DC17SA: hgun_P07_F
	{
		class WeaponSlotsInfo;
	};
	class MET_DC17SA: JLTS_DC17SA
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_DC17SA_fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="MET_DC17SA_shield";
		author="MrClock";
		displayName="[16th] DC-17SA MkI";
		descriptionShort="$STR_JLTS_descs_BlasterPistol";
		scope=2;
		baseWeapon="MET_DC17SA";
		picture="\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		drySound[]=
		{
			"MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
			5,
			1,
			10
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"MET_blaster_pistol_battery",
			"JLTS_EMP_mag"
		};
		magazineWell[]=
		{
			"DC17SA_mag_well"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		fireLightDiffuse[]={0,0,1};
		muzzles[]=
		{
			"this",
			"Stun"
		};
		class Stun: JLTS_stun_muzzle
		{
			reloadAction="GestureReloadPistol";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07.wss",
				1,
				1,
				10
			};
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
					"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.12;
			dispersion=0.0029;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
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
					"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.1333333333333333;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.00043000003;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
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
					"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",
					3,
					0.89999998,
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
			//burst=3;
			aiBurstTerminable=1;
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
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.2; //higher = More Weight
		aimTransitionSpeed=3; //higher = Faster Aim Transition
		dexterity=3; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={
					"MET_holo_optic",
					//"3AS_optic_holo_DC15S",
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
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"MET_DC17SA_flashlight"
				};
			};
			
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_DC17C: JLTS_DC17SA
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_DC17SA_fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		recoil="MET_recoil_DC17C";
		JLTS_shieldedWeapon="MET_DC17SA_shield";
		author="MrClock";
		displayName="[16th] DC-17C";
		descriptionShort="$STR_JLTS_descs_BlasterPistol";
		scope=2;
		baseWeapon="MET_DC17C";
		picture="\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"MET_blaster_pistolC_battery",
			"JLTS_EMP_mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
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
			reloadAction="GestureReloadPistol";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07.wss",
				1,
				1,
				10
			};
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
					"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.12;
			dispersion=0.0029;
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
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.2; //higher = More Weight
		aimTransitionSpeed=3; //higher = Faster Aim Transition
		dexterity=3; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={
					"MET_holo_optic",
					"3AS_optic_holo_DC15S"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"MET_DC17SA_flashlight"
				};
			};
			
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_DC17B: JLTS_DC17SA
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_DC17SA_fried";
		JLTS_repairTime=20;
		JLTS_canHaveShield=1;
		JLTS_shieldedWeapon="MET_DC17B_shield";
		author="MrClock";
		displayName="[16th] DC-17B";
		descriptionShort="$STR_JLTS_descs_BlasterPistol";
		scope=2;
		scopeArsenal=0;
		baseWeapon="MET_DC17B";
		picture="\MRC\JLTS\weapons\DC17SA\data\ui\DC17SA_ui_ca.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		magazines[]=
		{
			"MET_blaster_pistol_battery",
			"MET_blaster_battery",
			"JLTS_EMP_mag"
		};
		magazineWell[]={};
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
			reloadAction="GestureReloadPistol";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07.wss",
				1,
				1,
				10
			};
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
					"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.12;
			dispersion=0.0029;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
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
					"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",
					3,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.04;
			dispersion=0.00043000003;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
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
					"MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",
					3,
					0.89999998,
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
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.2; //higher = More Weight
		aimTransitionSpeed=3; //higher = Faster Aim Transition
		dexterity=3; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={
					"MET_holo_optic",
					"3AS_optic_holo_DC15S"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"MET_DC17SA_flashlight"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_DC17SA_flashed: JLTS_DC17SA
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsPointer
			{
				slot="PointerSlot";
				item="MET_DC17SA_flashlight";
			};
		};
	};
	class MET_DC17SA_shield: MET_DC17SA
	{
		displayName="[16th] DC-17SA Shielded";
		baseWeapon="MET_DC17SA_shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="MET_DC17SA";
		JLTS_friedItem="JLTS_DC17SA_shield_fried";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=440;
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
	class MET_DC17B_shield: MET_DC17B
	{
		displayName="[16th] DC-17B Shielded";
		baseWeapon="MET_DC17B_shield";
		scope=1;
		JLTS_isShielded=1;
		JLTS_baseWeapon="MET_DC17B";
		JLTS_friedItem="JLTS_DC17SA_shield_fried";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_shielded.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\DC17SA\anims\DC17SA_shielded_handanim.rtm"
		};
		inertia=0.80000001;
		recoil="recoil_pdw";
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=440;
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
	class MET_DC17S_Base_F: Pistol_Base_F
	{
		author="Hazmat";
		magazines[]=
		{
			"MET_blaster_pistol_battery"
		};
		magazineWell[]=
		{
			"MET_DC17SA_MagWell"
		};
		class Library
		{
			libTextDesc="$STR_3AS_Weapons_Republic_DC17S_Library";
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class 3AS_FL_F: Rifle_Base_F
		{
			displayName="Flare Launcher";
			cursor="srifle";
			reloadAction="GestureReloadARX2";
			magazines[]=
			{
				//"3AS_1Rnd_EC80_Flechette"
			};
			magazineWell[]=
			{
				"MET_GL_MagWell_Pacifist"
			};
			recoil="3as_recoil_heavy";
			maxZeroing=100;
			class GunParticles: GunParticles
			{
			};
			modes[]=
			{
				"Single"
			};
			class Single: Mode_SemiAuto
			{
				reloadTime=0.1;
				dispersion=0.00133;
				minRange=1;
				minRangeProbab=0.1;
				midRange=25;
				midRangeProbab=0.80000001;
				maxRange=50;
				maxRangeProbab=0.15000001;
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
						"3AS_DP23_Shot_SoundSet"
					};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_DP23_Shot_SoundSet"
					};
				};
				aiRateOfFire=1;
				aiRateOfFireDistance=20;
			};
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
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
					"3AS_DC17_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.1;
			dispersion=0.0039900001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
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
					"3AS_DC17_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DC15S_Shot_SoundSet"
				};
			};
			reloadTime=0.1333333333333333;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.00043000003;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
		};
		maxRecoilSway=0.02; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=2; //higher = Less Sway Over Time
		inertia=0.2; //higher = More Weight
		aimTransitionSpeed=3; //higher = Faster Aim Transition
		dexterity=3; //higher = More Maneuverable
		fireLightDiffuse[]={7,36,190,1};
		fireLightIntensity=0.02;
		flashSize=0.1;
		initSpeed=-1;
		recoil="3as_recoil_light";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=22;
			holsterScale=0.75;
			class MuzzleSlot: 3AS_MuzzleSlot_DC17S
			{
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class CowsSlot: 3AS_CowsSlot_DC17S
			{
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
		};
		descriptionShort="$STR_3AS_Weapons_Republic_DC17S_DesShort";
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
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_DC17S_F: MET_DC17S_Base_F
	{
		author="Hazmat";
		baseWeapon="MET_DC17S_F";
		scope=2;
		displayName="[16th] DC-17SA MkII";
		muzzles[]=
		{
			"this",
			"3AS_FL_F"
		};
		model="\3AS\3AS_Weapons\Republic\DC17S\3AS_DC17S_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC17S\Data\UI\3as_dc17s.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	class MET_DC17S_Dual_F: MET_DC17S_Base_F
	{
		author="$STR_3as_Studio";
		baseWeapon="MET_DC17S_Dual_F";
		cursor="";
		cursorAim="gl";
		scope=2;
		displayName="[16th] Dual DC-17SA MkII";
		model="\3AS\3AS_Weapons\Republic\DC17S\3AS_DC17S_Dual_F.p3d";
		picture="\3AS\3AS_Weapons\Republic\DC17S\Data\UI\3as_dc17s.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3AS\3AS_Weapons\Republic\DC17S\Data\Anim\DC17S_Dual_Handanim.rtm"
		};
		reloadAction="3AS_GestureReloadDualDC17S";
		magazines[]=
		{
			"MET_dual_blaster_pistol_battery"
		};
		magazineWell[]=
		{
			"MET_DC17SA_Dual_MagWell"
		};
		muzzles[]=
		{
			"this",
			"3AS_FL_F"
		};
		modes[]=
		{
			"Burst"
		};
		class Burst: Mode_Burst
		{
			textureType="dual";
			burst=2;
			reloadTime=0.06;
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
				soundSetShot[]=
				{
					"3AS_DC17_Shot_SoundSet"
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
		maxRecoilSway=0.03; //smaller = Easier to Control During Sustained fire
		swayDecaySpeed=1.9; //higher = Less Sway Over Time
		inertia=0.3; //higher = More Weight
		aimTransitionSpeed=3; //higher = Faster Aim Transition
		dexterity=3; //higher = More Maneuverable
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=40;
			class MuzzleSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class CowsSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.47,0.55000001};
				iconScale=0.30000001;
			};
		};
	};
};
class CfgMagazineWells
{
	class MET_DC17SA_MagWell
	{
		MET_DC17SA_Mags[] =
		{
			"MET_blaster_pistol_battery"
		};
	};
	class MET_DC17SA_Dual_MagWell
	{
		MET_DC17SA_Dual_MagWell[]=
		{
			"MET_dual_blaster_pistol_battery",
		};
	};
};