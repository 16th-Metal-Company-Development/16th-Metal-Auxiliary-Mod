class CfgPatches
{
	class metal_other_weap
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"metal_dc15a"
		};
		magazines[]=
		{
		};
		ammo[]=
		{
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class 3AS_recoil_default;
	class MET_recoil_Z6: recoil_default
	{
		muzzleOuter[]={0,0.1,0.40000001,0.40000001};
		kickBack[]={0.059999999,0.090000004};
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
class Single;
class close;
class GunParticles;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SFA_rifle_base;
	class Pistol_Base_F;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class LMG_Mk200_F;
	class 3AS_PLX1_F;
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		class WeaponSlotsInfo;
	};
	class MET_D200: hgun_Pistol_heavy_02_F
	{
		scope=2;
		scopeArsenal=2;
		baseWeapon="MET_D200";
		model="\SFA_Main\SFA_Weapons_S\D200\D200.p3d";
		reloadAction="ReloadMagazine";
		magazines[]=
		{
			"MET_D200_Pistol_mag"
		};
		displayname="[BHA] D200 Blaster";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFA_Main\SFA_Weapons_S\D200\data\D200_co.paa"
		};
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			1,
			1,
			50
		};
		reloadMagazineSound[]=
		{
			"",
			0.80000001,
			1,
			10
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
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
					"SFA_Main\SFA_Weapons_S\D200\data\SFX\D200.wav",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"SFA_Main\SFA_Weapons_S\D200\data\SFX\D200.wav",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"SFA_Main\SFA_Weapons_S\D200\data\SFX\D200.wav",
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
			reloadTime=0.111;
			dispersion=0.00087;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=-1;
		recoil="recoil_pistol_zubr";
		maxRecoilSway=0.015;
		swayDecaySpeed=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					""
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]=
				{
					""
				};
			};
		};
	};
	class MET_DLA13_scope: ItemCore
	{
		displayName="DLA-13 scope";
		author="16th Aux Team";
		model="SFA_Main\SFA_Weapons_S\DLA13\DLA13_scope.p3d";
		scope=2;
		scopeArsenal=2;
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="\JMSLLTE_weapons\Scope\big_cross_red_full.p3d";
			class OpticsModes
			{
				class nctalkep
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.025;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={5,6};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
			inertia=0.1;
		};
	};
	class MET_DLA13: SFA_rifle_base
	{
		scope=2;
		scopeArsenal=2;
		author="16th Aux Team";
		canShootInWater=1;
		picture="\SFA_Main\SFA_Weapons_S\DLA13\data\ui\DLA13_ui.paa";
		model="\SFA_Main\SFA_Weapons_S\DLA13\DLA13.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
		reloadAction="ReloadMagazine";
		magazines[]=
		{
			"MET_DLA13_mag"
		};
		displayname="[BHA] DLA-13 Rifle";
		descriptionShort="Old Republic Rifle";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"Burst",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
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
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
				beginwater1[]=
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBeginwater[]=
				{
					"beginwater1",
					0.33000001
				};
			};
			reloadTime=0.12;
			dispersion=0.00058;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class Burst: Mode_Burst
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
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
				beginwater1[]=
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBeginwater[]=
				{
					"beginwater1",
					0.33000001
				};
			};
			reloadTime=0.105;
			burst=3;
			dispersion=0.00058;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=-1;
		recoil="recoil_pdw";
		maxRecoilSway=0.015;
		swayDecaySpeed=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_DLA13_scope"
				};
			};
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=1;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
	};
	class MET_DLA13_C: SFA_rifle_base
	{
		scope=2;
		scopeArsenal=2;
		author="16th Aux Team";
		canShootInWater=1;
		model="\SFA_Main\SFA_Weapons_S\DLA13\DLA13_c.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
		reloadAction="ReloadMagazine";
		magazines[]=
		{
			"MET_DLA13_mag"
		};
		displayname="[BHA] DLA-13 Carbine";
		descriptionShort="Old Republic Rifle";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
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
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
				beginwater1[]=
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBeginwater[]=
				{
					"beginwater1",
					0.33000001
				};
			};
			reloadTime=0.12;
			dispersion=0.00058;
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
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
				beginwater1[]=
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBeginwater[]=
				{
					"beginwater1",
					0.33000001
				};
			};
			reloadTime=0.105;
			dispersion=0.00058;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=-1;
		recoil="recoil_pdw";
		maxRecoilSway=0.015;
		swayDecaySpeed=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=1;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
	};
	class MET_DLA13_C2: SFA_rifle_base
	{
		scope=2;
		scopeArsenal=2;
		author="16th Aux Team";
		canShootInWater=1;
		model="\SFA_Main\SFA_Weapons_S\DLA13\DLA13_c2.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
		reloadAction="ReloadMagazine";
		magazines[]=
		{
			"MET_DLA13_mag"
		};
		displayname="[BHA] DLA-13 Carbine (No Stock)";
		descriptionShort="Old Republic Rifle";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
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
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
				beginwater1[]=
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBeginwater[]=
				{
					"beginwater1",
					0.33000001
				};
			};
			reloadTime=0.12;
			dispersion=0.00058;
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
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
				beginwater1[]=
				{
					"\SFA_Main\SFA_Weapons_S\DLA13\data\SFX\DLA13_fire.wav",
					1,
					1,
					1800
				};
				soundBeginwater[]=
				{
					"beginwater1",
					0.33000001
				};
			};
			reloadTime=0.105;
			dispersion=0.00058;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=-1;
		recoil="recoil_pdw";
		maxRecoilSway=0.015;
		swayDecaySpeed=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=1;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
	};
	class MET_DLA13_ugl: MET_DLA13
	{
		scopeArsenal=2;
		muzzles[]=
		{
			"this",
			"EGLM"
		};
		displayName="[BHA] DLA-13 GL";
		model="\SFA_Main\SFA_Weapons_S\DLA13\DLA13_gl.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SFA_Main\SFA_Weapons_S\DLA13\data\DLA13_GL_co.paa"
		};
		class EGLM: UGL_F
		{
			displayName="Grenade launcher";
			descriptionShort="UGL";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]=
			{
				"MET_light_proton_mag"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100,200,300,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_T20_rifle: SFA_rifle_base
	{
		scope=2;
		scopeArsenal=2;
		author="16th Aux Team";
		canShootInWater=1;
		model="SFA_Main\SFA_Weapons_N\T20\T20_Rifle.p3d";
		picture="SFA_Main\SFA_Weapons_N\T20\data\ui\t20_rifle_ui.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SFA_Main\SFA_Weapons_R\Anim\Boltblaster\boltblaster4.rtm"
		};
		reloadAction="ReloadMagazine";
		magazines[]=
		{
			"MET_T20_mag"
		};
		displayname="[BHA] T-20 Rifle ";
		descriptionShort="Old Republic Rifle";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFA_Main\SFA_Weapons_N\T20\data\T20_Rifle_co.paa"
		};
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_reload.wav",
			0.80000001,
			1,
			10
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.12;
			dispersion=0.0040099998;
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.2;
			dispersion=0.00058;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class Burst: Mode_Burst
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.105;
			burst=3;
			dispersion=0.024010001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=1.4;
		dexterity=1.7;
		initSpeed=-1;
		recoil="SFA_Rifle_recoil";
		maxRecoilSway=0.015;
		swayDecaySpeed=1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"SFA_Holosight_blue"
				};
			};
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="flash dir";
			direction="flash";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=1;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
	};
	class MET_T20_AC: LMG_Mk200_F
	{
		author="16th Aux Team";
		scope=2;
		scopeArsenal=2;
		baseWeapon="MET_T20_AC";
		displayName="[BHA] T-20 Assault cannon";
		descriptionShort="assault cannon";
		picture="SFA_Main\SFA_Weapons_N\T20\data\ui\t20_assault_ui.paa";
		model="SFA_Main\SFA_Weapons_N\T20\T20_Assault_Cannon.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFA_Main\SFA_Weapons_N\T20\data\T20_Assault_Cannon_co.paa"
		};
		recoil="recoil_pdw";
		WBK_UseHeavyWeaponFramework = true;	
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SFA_Main\SFA_Weapons_R\Anim\E15_Assault_Cannon\E15_Assault_Cannon.rtm"
		};
		magazines[]=
		{
			"MET_T20AC_mag",
			"MET_T20_mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_reload.wav",
			0.80000001,
			1,
			10
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: Mode_FullAuto
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
				soundSetShot[]=
				{
					"T20_Shot_SoundSet"
				};
			};
			reloadTime=0.15;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"SFA_Holosight_blue"
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
	class MET_E403: LMG_Mk200_F
	{
		author="16th Aux Team";
		scope=2;
		scopeArsenal=2;
		baseWeapon="MET_E403";
		displayName="[BHA] E-403 Assault cannon";
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
		WBK_UseHeavyWeaponFramework = true;	
		maxZeroing=1200;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SFA_Main\SFA_Weapons_R\Anim\E403\E403_anim.rtm"
		};
		magazines[]=
		{
			"MET_heavy_proton_mag",
			"MET_medium_proton_mag",
			"MET_light_proton_mag"
			//"MET_Test_proton_mag"
		};
		magazineWell[]={};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
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
			reloadTime=0.3;
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
			reloadTime=0.3;
			dispersion=0.00058;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		class EGLM: UGL_F
		{
			displayName="3rnd HE launcher";
			descriptionShort="";
			useModelOptics=0;
			useExternalOptic=0;
			initspeed=75;
			magazines[]=
			{
				"SFA_light_proton_mag"
			};
			magazineWell[]={};
			cameraDir="OP_look";
			discreteDistance[]={100};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
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
				reloadTime=0.15000001;
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
		};
		muzzles[]=
		{
			"this"
		};
		initspeed=80;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"SFA_Holosight_blue"
				};
			};
		};
	};
	class MET_EL34: LMG_Mk200_F
	{
		author="16th Aux Team";
		scope=2;
		scopeArsenal=2;
		baseWeapon="MET_EL34";
		displayName="[BHA] EL-34 Assault cannon";
		picture="\SFA_Main\SFA_Weapons_S\EL34\data\ui\EL34_ui.paa";
		descriptionShort="$STR_JLTS_descs_BlasterRotaryCannon";
		model="SFA_Main\SFA_Weapons_S\EL34\EL34.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFA_Main\SFA_Weapons_S\EL34\data\EL34_co.paa"
		};
		recoil="recoil_pdw";
		maxZeroing=1200;
		WBK_UseHeavyWeaponFramework = true;	
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SFA_Main\SFA_Weapons_R\Anim\E15_Assault_Cannon\E15_Assault_Cannon.rtm"
		};
		magazines[]=
		{
			"MET_EL34_mag"
		};
		magazineWell[]={};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: Mode_FullAuto
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
					"\SFA_Main\SFA_Weapons_S\EL34\data\SFX\EL43.wav",
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
			reloadTime=0.075000003;
			dispersion=0.0005102;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=264;
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
	class MET_X300_Sniper: SFA_rifle_base
	{
		author="16th AUX Team";
		scope=2;
		scopeArsenal=2;
		displayName="[BHA] X-300";
		descriptionShort="";
		picture="";
		model="\SFA_Main\SFA_Weapons_S\X300\X300.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFA_Main\SFA_Weapons_S\X300\data\X300_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"SFA_Main\SFA_Weapons_R\Anim\Boltblaster\boltblaster4.rtm"
		};
		magazines[]=
		{
			"MET_X300_Sniper_mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single"
		};
		fireLightDiffuse[]={0,0,1};
		drySound[]=
		{
			"\SFA_Main\SFA_Weapons_Core\data\sfx\SFA_dry.wav",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
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
					"SFA_Main\SFA_Weapons_S\X300\data\SFX\X300.wav",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.5;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00001;
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
					"SFA_Main\SFA_Weapons_S\X300\data\SFX\X300.wav",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			reloadTime=0.096000001;
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			dispersion=0.00001;
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
					"SFA_Main\SFA_Weapons_S\X300\data\SFX\X300.wav",
					2.5,
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
					"SFA_Main\SFA_Weapons_S\X300\data\SFX\X300.wav",
					2.5,
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
					"SFA_Main\SFA_Weapons_S\X300\data\SFX\X300.wav",
					2.5,
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
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\JMSLLTE_weapons\Scope\big_cross_red_full.p3d";
		class OpticsModes
		{
			class nctalkep
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.025;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600};
				discreteDistanceInitIndex=2;
				distanceZoomMin=100;
				distanceZoomMax=2600;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={5,6};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
			class Iron: nctalkep
			{
				opticsID=2;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=68;
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
	class 3AS_HH12_Base;
	class MET_HH12_SMRT: 3AS_PLX1_F
	{
		author="16th AUX Team";
		scope=2;
		scopeArsenal=2;
		displayName="[BHA] HH-12 Smart Launcher";
		_generalMacro="launch_Titan_short_base";
		class Library
		{
			libTextDesc="$STR_A3_cfgWeapons_launch_MPRL_short_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_launch_MPRL1";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_friedItem="JLTS_RPS6_fried";
		JLTS_repairTime=30;
		nameSound="aalauncher";
		weaponInfoType="RscOptics_titan";
		modelOptics="\A3\Weapons_F_Beta\acc\reticle_titan.p3d";
		magazines[]=
		{
			"BHA_AA_SINGLE",
			"BHA_AP_SINGLE",
			"BHA_AT_Single"
		};
		lockAcquire=1;
		model="3as\3AS_Weapons\Imperial\3AS_HH12.p3d";
		picture="3as\3AS_Weapons\Data\UI\3as_hh12.paa";
		UiPicture="3as\3AS_Weapons\Data\UI\3as_hh12.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Imperial\anims\HH12hand.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=150;
		};
		class OpticsModes
		{
			class StepScope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				opticsFlare=0;
				opticsZoomMin=0.083329998;
				opticsZoomMax=0.041669998;
				opticsZoomInit=0.083329998;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={0,1};
				opticsDisablePeripherialVision=1;
				discretefov[]={0.083329998,0.041669998};
				discreteInitIndex=0;
			};
		};
	};
};
class CfgMagazineWells
{
	
};
class CfgMagazines
{
	class JLTS_DC15A_mag;
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 100Rnd_65x39_caseless_mag;
	class MET_DC15x_mag;
	class MET_blaster_pistol_battery;
	class MET_DC15A_mag;
	class MET_HE_Grenade;
	class MET_DC15L_mag;
	class SFA_Base_mag;
	class 3AS_JLTS_MK39_AA;
	/*class MET_DC15A_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=40;
		displayName="[16th] DC-15A Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-15A, and DC-15L";
		ammo="MET_blasterbolt";
		tracersEvery=1;
	};*/
	class MET_D200_Pistol_mag: MET_blaster_pistol_battery
	{
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_o.paa";
		modelSpecialIsProxy=0;
		count=10;
		displayName="D200 Energy Cell";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_bullet_pistol_orange";
		tracersEvery=1;
		mass=10;
	};
	class MET_DLA13_mag: MET_DC15A_mag
	{
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_o.paa";
		modelSpecialIsProxy=0;
		count=60;
		displayName="DLA-13 Energy Cell";
		ammo="MET_bullet_carbine_orange";
		tracersEvery=1;
		mass=20;
	};
	class MET_T20_mag: MET_DC15A_mag
	{
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_o.paa";
		modelSpecialIsProxy=0;
		count=20;
		displayName="T-20 Energy Cell";
		ammo="MET_bullet_heavy_orange";
		tracersEvery=1;
		mass=30;
	};
	class MET_T20AC_mag: MET_DC15A_mag
	{
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=100;
		displayName="T-20 Heavy Energy Cell";
		ammo="MET_bullet_heavy_orange";
		tracersEvery=1;
		mass=150;
	};
	class MET_Test_proton_mag: SFA_Base_mag
	{
		author="Starforge Armory";
		picture="\SFA_Main\SFA_Weapons_R\ammo\icon\SFA_icon_mag.paa";
		modelSpecialIsProxy=0;
		count=6;
		displayName="E403 Proton mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_gl_orange";
		tracersEvery=1;
		initSpeed=920;
		mass=25;
	};
	class MET_light_proton_mag: SFA_Base_mag
	{
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		modelSpecialIsProxy=0;
		count=5;
		displayName="E403 light Proton mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_gl_orange";
		tracersEvery=1;
		initSpeed=320;
		mass=20;
	};
	class MET_medium_proton_mag: SFA_Base_mag
	{
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		modelSpecialIsProxy=0;
		count=50;
		displayName="E403 Medium Proton mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_gl_orange";
		tracersEvery=1;
		initSpeed=320;
		mass=200;
	};
	class MET_heavy_proton_mag: SFA_Base_mag
	{
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=100;
		displayName="E403 Heavy Proton mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_gl_orange";
		tracersEvery=1;
		initSpeed=320;
		mass=400;
	};
	class MET_EL34_mag: MET_DC15L_mag
	{
		author="16th Aux Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_o.paa";
		modelSpecialIsProxy=0;
		count=300;
		displayName="EL34 mag";
		displayNameShort="";
		descriptionShort="";
		ammo="MET_bullet_carbine_orange";
		tracersEvery=1;
		initSpeed=920;
		mass=100;
	};
	class MET_X300_Sniper_mag: MET_DC15x_mag
	{
		author="16th AUX Team";
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_o.paa";
		modelSpecialIsProxy=0;
		count=15;
		displayName="X300 Energy Cell";
		ammo="MET_bullet_Sniper_orange";
		tracersEvery=1;
		mass=40;
	};
	class BHA_AA_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="HH-12 AA Rocket";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";
		ammo = "bha_aa_missile_van";
		displayNameShort="Mk39 AA";
		count=1;
		mass=80;
		initSpeed=100;
	};
	class BHA_AP_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="HH-12 AP Rocket";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		ammo="bha_ap_missile";
		displayNameShort="Mk44 AP";
		count=1;
		mass=80;
		initSpeed=100;
	};
	class BHA_AT_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="HH-12 AT Rocket";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		ammo="bha_at_wire_missile";
		displayNameShort="Mk43 AT";
		count=1;
		mass=90;
		initSpeed=100;
	};
};
class CfgLights
{
	class 3AS_RocketLight;
	class MET_ATRocket_Orange: 3AS_RocketLight
	{
		color[]={1,0.584,0};
		diffuse[]={255,149,0,1};
		intensity=30000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class MET_ATRocket_Orange2: 3AS_RocketLight
	{
		color[]={1,0.384,0};
		diffuse[]={255,98,0,1};
		intensity=30000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class MET_ATRocket_Orange3: 3AS_RocketLight
	{
		color[]={1,0.835,0};
		diffuse[]={255,213,0,1};
		intensity=30000;
		dayLight=1;
		useFlare=1;
		flareSize=1.5;
		flareMaxDistance=6000;
	};
	class MET_plasmaBlue
	{
		color[]={0,0,0,0.5};
		diffuse[]={7,110,176,1};
		ambient[]={0,0,0,1};
		intensity=10000;
		class Attenuation
		{
			start=0;
			constant=0;
			linear=0;
			quadratic=255;
			hardLimitStart="100";
			hardLimitEnd=1000;
		};
		dayLight=1;
		useFlare=1;
		flareSize=1;
		flareMaxDistance=6000;
	};
	class MET_plasmaOrange: MET_plasmaBlue
	{
		diffuse[]={252,161,0,1};
	};
};
class MET_Rocket_effect_orange_fly
{
	class Light
	{
		simulation="light";
		type="MET_ATRocket_Orange";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
class MET_Rocket_effect_orange_fly2
{
	class Light
	{
		simulation="light";
		type="MET_ATRocket_Orange2";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
class MET_Rocket_effect_orange_fly3
{
	class Light
	{
		simulation="light";
		type="MET_ATRocket_Orange3";
		position[]={0,0,0};
	};
	class Smoke
	{
		simulation="particles";
		type="Missile3";
		position[]={0,0,0};
		qualityLevel=-1;
	};
};
class MET_plasma_orange
{
	class MET_Orange_plasma
	{
		simulation="light";
		type="MET_plasmaOrange";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=6;
	};
};
class CfgAmmo
{
	class HitEffects;
	class SFA_bullet_pistol_blue;
	class GrenadeBase;
	class SFA_bullet_carbine_blue;
	class SFA_bullet_Sniper_blue;
	class MET_bullet_pistol_orange: SFA_bullet_pistol_blue
	{
		author="16th AUX Team";
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		lightcolor[]={0.949, 0.631, 0};
		hit=80;
		flaresize=5;
		tracerscale=0.80000001;
		effectflare="FlareShell";
		tracerstarttime=0.050000001;
		tracerendtime=10;
		nvgonly=0;
		airlock=1;
		irtarget=1;
		effectfly="MET_plasma_orange";
		brightness=1100;
		timetolive=4;
		initTime=0;
		airfriction=0;
		coefgravity=0;
		deflecting=0;
		class HitEffects: HitEffects
		{
			Hit_Foliage_green="SFA_ImpactPlasma";
			Hit_Foliage_Dead="SFA_ImpactPlasma";
			Hit_Foliage_Green_big="SFA_ImpactPlasma";
			Hit_Foliage_Palm="SFA_ImpactPlasma";
			Hit_Foliage_Pine="SFA_ImpactPlasma";
			hitFoliage="SFA_ImpactPlasma";
			hitGlass="SFA_ImpactPlasma";
			hitGlassArmored="SFA_ImpactPlasma";
			hitWood="SFA_ImpactPlasma";
			hitMetal="SFA_ImpactPlasma";
			hitMetalPlate="SFA_ImpactPlasma";
			hitBuilding="SFA_ImpactPlasma";
			hitPlastic="SFA_ImpactPlasma";
			hitRubber="SFA_ImpactPlasma";
			hitTyre="SFA_ImpactPlasma";
			hitConcrete="SFA_ImpactPlasma";
			hitMan="SFA_ImpactPlasma";
			hitGroundSoft="SFA_ImpactPlasma";
			hitGroundRed="SFA_ImpactPlasma";
			hitGroundHard="SFA_ImpactPlasma";
			hitWater="SFA_ImpactPlasma";
			hitVirtual="SFA_ImpactPlasma";
			default_mat="SFA_ImpactPlasma";
		};
	};
	class MET_bullet_carbine_orange: SFA_bullet_carbine_blue
	{
		author="16th AUX Team";
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		lightcolor[]={1,0.584,0};
		hit=30;
		flaresize=5;
		tracerscale=1.1;
		effectflare="FlareShell";
		tracerstarttime=0;
		tracerendtime=10;
		nvgonly=0;
		typicalspeed=920;
		airlock=1;
		irtarget=1;
		cartridge="FxCartridge_CAS";
		effectfly="met_plasma_orange";
		brightness=1100;
		timetolive=4;
		initTime=0;
		airfriction=0;
		coefgravity=0;
		deflecting=0;
		class HitEffects: HitEffects
		{
			Hit_Foliage_green="SFA_ImpactPlasma";
			Hit_Foliage_Dead="SFA_ImpactPlasma";
			Hit_Foliage_Green_big="SFA_ImpactPlasma";
			Hit_Foliage_Palm="SFA_ImpactPlasma";
			Hit_Foliage_Pine="SFA_ImpactPlasma";
			hitFoliage="SFA_ImpactPlasma";
			hitGlass="SFA_ImpactPlasma";
			hitGlassArmored="SFA_ImpactPlasma";
			hitWood="SFA_ImpactPlasma";
			hitMetal="SFA_ImpactPlasma";
			hitMetalPlate="SFA_ImpactPlasma";
			hitBuilding="SFA_ImpactPlasma";
			hitPlastic="SFA_ImpactPlasma";
			hitRubber="SFA_ImpactPlasma";
			hitTyre="SFA_ImpactPlasma";
			hitConcrete="SFA_ImpactPlasma";
			hitMan="SFA_ImpactPlasma";
			hitGroundSoft="SFA_ImpactPlasma";
			hitGroundRed="SFA_ImpactPlasma";
			hitGroundHard="SFA_ImpactPlasma";
			hitWater="SFA_ImpactPlasma";
			hitVirtual="SFA_ImpactPlasma";
			default_mat="SFA_ImpactPlasma";
		};
	};
	class MET_bullet_heavy_orange: SFA_bullet_carbine_blue
	{
		author="16th AUX Team";
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		lightcolor[]={1,0.584,0};
		hit=50;
		flaresize=5;
		tracerscale=1.1;
		effectflare="FlareShell";
		tracerstarttime=0;
		tracerendtime=10;
		nvgonly=0;
		typicalspeed=920;
		airlock=1;
		irtarget=1;
		cartridge="FxCartridge_CAS";
		effectfly="met_plasma_orange";
		brightness=1100;
		timetolive=4;
		initTime=0;
		airfriction=0;
		coefgravity=0;
		deflecting=0;
		class HitEffects: HitEffects
		{
			Hit_Foliage_green="SFA_ImpactPlasma";
			Hit_Foliage_Dead="SFA_ImpactPlasma";
			Hit_Foliage_Green_big="SFA_ImpactPlasma";
			Hit_Foliage_Palm="SFA_ImpactPlasma";
			Hit_Foliage_Pine="SFA_ImpactPlasma";
			hitFoliage="SFA_ImpactPlasma";
			hitGlass="SFA_ImpactPlasma";
			hitGlassArmored="SFA_ImpactPlasma";
			hitWood="SFA_ImpactPlasma";
			hitMetal="SFA_ImpactPlasma";
			hitMetalPlate="SFA_ImpactPlasma";
			hitBuilding="SFA_ImpactPlasma";
			hitPlastic="SFA_ImpactPlasma";
			hitRubber="SFA_ImpactPlasma";
			hitTyre="SFA_ImpactPlasma";
			hitConcrete="SFA_ImpactPlasma";
			hitMan="SFA_ImpactPlasma";
			hitGroundSoft="SFA_ImpactPlasma";
			hitGroundRed="SFA_ImpactPlasma";
			hitGroundHard="SFA_ImpactPlasma";
			hitWater="SFA_ImpactPlasma";
			hitVirtual="SFA_ImpactPlasma";
			default_mat="SFA_ImpactPlasma";
		};
	};
	class MET_gl_orange: GrenadeBase
	{
		author="16th AUX Team";
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		lightcolor[]={1,0.584,0};
		flaresize=5;
		tracerscale=5;
		effectflare="FlareShell";
		tracerstarttime=0;
		tracerendtime=10;
		nvgonly=0;
		effectfly="met_plasma_orange";
		hit=200;
		indirecthit=25;
		indirecthitrange=12;
		warheadName="HE";
		visibleFire=1;
		audibleFire=30;
		visibleFireTime=3;
		dangerRadiusHit=60;
		suppressionRadiusHit=24;
		deflecting=0;
		airFriction=-0.001;
		fuseDistance=0;
		typicalSpeed=185;
		caliber=2;
		CraterEffects="GrenadeCrater";
		CraterWaterEffects="ImpactEffectsWaterExplosion";
		explosionEffects="GrenadeExplosion";
		whistleDist=28;
		coefgravity=1;
		aiAmmoUsageFlags="32 + 64 + 128 + 512";
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
			3.1622777,
			1,
			1500
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
			3.1622777,
			1,
			1500
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
			3.1622777,
			1,
			1500
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
			3.1622777,
			1,
			1500
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode
		{
			power=2;
			duration=1.2;
			frequency=20;
			distance=74.596397;
		};
		class CamShakeHit
		{
			power=2;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power=0;
			duration=0.2;
			frequency=20;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class MET_bullet_Sniper_orange: SFA_bullet_Sniper_blue
	{
		author="16th AUX Team";
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		lightcolor[]={1,0.584,0};
		hit=200;
		indirectHit=0;
		explosive=0;
		indirectHitRange=0.5;
		caliber=1.4;
		coefGravity=0;
		timetolive=8;
		waterFriction=-0.0099999998;
		deflecting=0;
		airfriction=0;
		tracerstarttime=0.050000001;
		tracerendtime=10;
		nvgonly=0;
		airlock=1;
		irtarget=1;
		brightness=1100;
		flaresize=5;
		tracerscale=1;
		effectfly="MET_plasma_orange";
		class HitEffects: HitEffects
		{
			Hit_Foliage_green="SFA_ImpactPlasma";
			Hit_Foliage_Dead="SFA_ImpactPlasma";
			Hit_Foliage_Green_big="SFA_ImpactPlasma";
			Hit_Foliage_Palm="SFA_ImpactPlasma";
			Hit_Foliage_Pine="SFA_ImpactPlasma";
			hitFoliage="SFA_ImpactPlasma";
			hitGlass="SFA_ImpactPlasma";
			hitGlassArmored="SFA_ImpactPlasma";
			hitWood="SFA_ImpactPlasma";
			hitMetal="SFA_ImpactPlasma";
			hitMetalPlate="SFA_ImpactPlasma";
			hitBuilding="SFA_ImpactPlasma";
			hitPlastic="SFA_ImpactPlasma";
			hitRubber="SFA_ImpactPlasma";
			hitTyre="SFA_ImpactPlasma";
			hitConcrete="SFA_ImpactPlasma";
			hitMan="SFA_ImpactPlasma";
			hitGroundSoft="SFA_ImpactPlasma";
			hitGroundRed="SFA_ImpactPlasma";
			hitGroundHard="SFA_ImpactPlasma";
			hitWater="SFA_ImpactPlasma";
			hitVirtual="SFA_ImpactPlasma";
			default_mat="SFA_ImpactPlasma";
		};
	};
	class M_Titan_AP;
	class bha_ap_missile: M_Titan_AP
	{
		warheadName="HE";
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		effectsMissile="MET_Rocket_effect_orange_fly3";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		ace_frag_enabled=1;
		ace_frag_metal=4500;
		ace_frag_charge=500;
		ace_frag_gurney_c=2830;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_large"
		};
		ace_frag_skip=0;
		ace_frag_force=3;
		hit=80;
		indirectHit=70;
		indirectHitRange=15;
		explosive=1;
		soundFly[]=
		{
			"LF_Weapon_Unit\PLX\sounds\plx_fly.wss",
			6,
			1.5,
			700
		};
	};
	class bha_at_wire_missile: M_Titan_AP
	{
		warheadName="AT";
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		effectsMissile="MET_Rocket_effect_orange_fly2";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		ace_frag_enabled=0;
		ace_frag_metal=00;
		ace_frag_charge=00;
		ace_frag_gurney_c=0;
		ace_frag_gurney_k="";
		ace_frag_classes[]={};
		ace_frag_skip=0;
		ace_frag_force=0;
		hit=12000;
		indirectHit=15;
		indirectHitRange=1;
		explosive=1;
		soundFly[]=
		{
			"LF_Weapon_Unit\PLX\sounds\plx_fly.wss",
			6,
			1.5,
			700
		};
	};
	class 3AS_M_MK39_AA;
	class bha_aa_missile_van: 3AS_M_MK39_AA
	{
		hit=2050;
		indirectHit=120;
		indirectHitRange=12;
		warheadName="AA";
		proximityExplosionDistance=10;
		maneuvrability=22;
		simulationStep=0.0020000001;
		trackOversteer=1;
		trackLead=0.94999999;
		aiAmmoUsageFlags=256;
		irLock=1;
		cost=1000;
		timeToLive=30;
		airFriction=0.145;
		sideAirFriction=0.1;
		maxSpeed=850;
		initTime=0.25;
		thrustTime=10;
		thrust=380;
		fuseDistance=50;
		CraterEffects="AAMissileCrater";
		explosionEffects="AAMissileExplosion";
		effectsMissileInit="";
		effectsMissile="MET_Rocket_effect_orange_fly";
	}
};