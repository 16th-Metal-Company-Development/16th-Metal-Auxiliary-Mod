class CfgPatches
{
	class BHA_Faction
	{
		units[]={};
		weapons[]={};
	};
};
class CfgFactionClasses
{
	class BHA_Units
	{
		displayName="Barysaw Holdings Authority";
		priority=1;
		side=2;
	};
};
class CfgEditorSubcategories
{
	class BHA_Apostles
	{
		displayName="Men (Apostles)";
	};
	class BHA_Acolytes
	{
		displayName="Men (Acolytes)";
	};
	class BHA_Initiates
	{
		displayName="Men (Initiates)";
	};
	class BHA_Cars
	{
		displayName="Cars";
	};
	class BHA_APCs
	{
		displayName="APCs";
	};
	class BHA_IFVs
	{
		displayName="IFVs";
	};
	class BHA_Tanks
	{
		displayName="Tanks";
	};
	class BHA_130Rnd_338_Mag
	{
		displayName="IFVs";
	};
	class BHA_Drones
	{
		displayName="Drones";
	};
	class BHA_Helis
	{
		displayName="Helicopters";
	};
	class BHA_Statics
	{
		displayName="Static";
	};
	class BHA_Trucks
	{
		displayName="Trucks";
	};
};
class CfgWeapons
{
	class arifle_MSBS65_black_F;
	class BHA_arifle_MSBS65_black_F: arifle_MSBS65_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
		};
	};
	class BHA_ini_arifle_MSBS65_black_F: arifle_MSBS65_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_holosight_blk_f";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_MSBS65_GL_black_F;
	class BHA_Acolyte_arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
		};
	};
	class BHA_Apostle_arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
		};
	};
	class BHA_ini_arifle_MSBS65_GL_black_F: arifle_MSBS65_GL_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_holosight_blk_f";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
		};
	};
	class arifle_MSBS65_UBS_black_F;
	class BHA_Apostles_arifle_MSBS65_UBS_black_F: arifle_MSBS65_UBS_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
		};
	};
	class LMG_Mk200_black_F;
	class BHA_LMG_Mk200_black_F: LMG_Mk200_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_holosight_blk_f";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_f_blk";
			};
		};
	};
	class MMG_02_black_F;
	class BHA_Acolyte_MMG_02_black_F: MMG_02_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ERCO_blk_F";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_f_blk";
			};
		};
	};
	class BHA_Apostle_MMG_02_black_F: MMG_02_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_tws_mg";
			};
		};
	};
	class arifle_MSBS65_Mark_black_F;
	class BHA_arifle_MSBS65_Mark_black_F: arifle_MSBS65_Mark_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_dms";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_flashlight";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_f_blk";
			};
		};
	};
	class BHA_Acolyte_arifle_MSBS65_Mark_black_F: arifle_MSBS65_Mark_black_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
		};
	};
	class srifle_DMR_02_F;
	class BHA_Acolyte_srifle_DMR_02_F: srifle_DMR_02_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_khs_blk";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_f_blk";
			};
		};
	};
	class BHA_Apostle_srifle_DMR_02_F: srifle_DMR_02_F
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_KHS_blk";
			};
		};
	};
};
class CfgVehicles
{
	class BHA_AssaultPack_blk;
	class BHA_Carryall_Black;
	class BHA_Kitbag_Black;
	class BHA_Black_Carryall_Rocket: BHA_Carryall_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				count=5;
				magazine="RPG32_F";
			};
		};
	};
	class BHA_Black_Carryall_Missile_Apostle: BHA_Carryall_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT
			{
				count=3;
				magazine="Vorona_HEAT";
			};
			class _xx_6Rnd_12Gauge_Slug
			{
				count=3;
				magazine="6Rnd_12Gauge_Slug";
			};
		};
	};
	class BHA_Black_Carryall_Missile_Acolyte: BHA_Carryall_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT
			{
				count=3;
				magazine="Vorona_HEAT";
			};
		};
	};
	class BHA_Black_Backpack_Deacon: BHA_AssaultPack_blk
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				count=10;
				magazine="1Rnd_HE_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				count=3;
				magazine="1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_UGL_FlareWhite_F
			{
				count=3;
				magazine="UGL_FlareWhite_F";
			};
		};
	};
	class BHA_Black_Carryall_Medic: BHA_Carryall_Black
	{
		scope=1;
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				count=1;
				name="adv_aceCPR_AED";
			};
			class _xx_ACE_surgicalKit
			{
				count=1;
				name="ACE_surgicalKit";
			};
			class _xx_ACE_personalAidKit
			{
				count=1;
				name="ACE_personalAidKit";
			};
			class _xx_ACE_bloodIV_500
			{
				count=20;
				name="ACE_bloodIV_500";
			};
			class _xx_ACE_elasticBandage
			{
				count=30;
				name="ACE_elasticBandage";
			};
			class _xx_ACE_fieldDressing
			{
				count=30;
				name="ACE_fieldDressing";
			};
			class _xx_ACE_quikclot
			{
				count=15;
				name="ACE_quikclot";
			};
			class _xx_ACE_splint
			{
				count=8;
				name="ACE_splint";
			};
			class _xx_ACE_tourniquet
			{
				count=8;
				name="ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count=10;
				name="ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count=10;
				name="ACE_epinephrine";
			};
			class _xx_ACE_adenosine
			{
				count=10;
				name="ACE_adenosine";
			};
		};
	};
	class BHA_Carryall_Black_Diviner: BHA_Carryall_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_6Rnd_12Gauge_Slug
			{
				count=6;
				magazine="6Rnd_12Gauge_Slug";
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				count=1;
				name="adv_aceCPR_AED";
			};
			class _xx_ACE_surgicalKit
			{
				count=1;
				name="ACE_surgicalKit";
			};
			class _xx_ACE_personalAidKit
			{
				count=1;
				name="ACE_personalAidKit";
			};
			class _xx_ACE_bloodIV_500
			{
				count=20;
				name="ACE_bloodIV_500";
			};
			class _xx_ACE_elasticBandage
			{
				count=30;
				name="ACE_elasticBandage";
			};
			class _xx_ACE_fieldDressing
			{
				count=30;
				name="ACE_fieldDressing";
			};
			class _xx_ACE_quikclot
			{
				count=15;
				name="ACE_quikclot";
			};
			class _xx_ACE_splint
			{
				count=8;
				name="ACE_splint";
			};
			class _xx_ACE_tourniquet
			{
				count=8;
				name="ACE_tourniquet";
			};
			class _xx_ACE_morphine
			{
				count=10;
				name="ACE_morphine";
			};
			class _xx_ACE_epinephrine
			{
				count=10;
				name="ACE_epinephrine";
			};
			class _xx_ACE_adenosine
			{
				count=10;
				name="ACE_adenosine";
			};
		};
	};
	class BHA_ini_Black_Backpack_kitbag_MG: BHA_Kitbag_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_BHA_200Rnd_65x39_cased_Box_Orange_Tracer
			{
				count=5;
				magazine="BHA_200Rnd_65x39_cased_Box_Orange_Tracer";
			};
		};
	};
	class BHA_Black_Backpack_kitbag_MMG: BHA_Kitbag_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_BHA_130Rnd_338_Mag
			{
				count=4;
				magazine="BHA_130Rnd_338_Mag";
			};
		};
	};
	class BHA_Black_Backpack_Carryall_MMG: BHA_Carryall_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_BHA_130Rnd_338_Mag
			{
				count=7;
				magazine="BHA_130Rnd_338_Mag";
			};
		};
	};
	class BHA_Black_Backpack_kitbag_GL: BHA_Kitbag_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				count=15;
				magazine="1Rnd_HE_Grenade_shell";
			};
		};
	};
	class BHA_aco_Black_Backpack_kitbag_GL: BHA_Kitbag_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				count=30;
				magazine="1Rnd_HE_Grenade_shell";
			};
		};
	};
	class BHA_Bishop_Black_Backpack_kitbag_GL: BHA_Kitbag_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				count=10;
				magazine="1Rnd_HE_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				count=3;
				magazine="1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_UGL_FlareWhite_F
			{
				count=3;
				magazine="UGL_FlareWhite_F";
			};
		};
	};
	class BHA_Archbishop_Black_Backpack_Carryall_GL: BHA_Carryall_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				count=10;
				magazine="1Rnd_HE_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				count=3;
				magazine="1Rnd_SmokeRed_Grenade_shell";
			};
			class _xx_UGL_FlareWhite_F
			{
				count=3;
				magazine="UGL_FlareWhite_F";
			};
			class _xx_16Rnd_9x21_Mag
			{
				count=3;
				magazine="30Rnd_65x39_caseless_msbs_mag_Orange_Tracer";
			};
		};
	};
	class BHA_Carryall_Black_Apostle: BHA_Carryall_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_6Rnd_12Gauge_Slug
			{
				count=7;
				magazine="6Rnd_12Gauge_Slug";
			};
			class _xx_16Rnd_9x21_Mag
			{
				count=3;
				magazine="16Rnd_9x21_Mag";
			};
		};
	};
	class BHA_Apostle_Black_Backpack_Carryall_MK: BHA_Carryall_Black
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_16Rnd_9x21_Mag
			{
				count=3;
				magazine="16Rnd_9x21_Mag";
			};
		};
	};
	class B_RadioBag_01_black_F;
	class HDC_RadioBag_01_black_F_SL: B_RadioBag_01_black_F
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_1Rnd_HE_Grenade_shell
			{
				count=8;
				magazine="1Rnd_HE_Grenade_shell";
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				count=2;
				magazine="1Rnd_Smoke_Grenade_shell";
			};
			class _xx_1Rnd_SmokeRed_Grenade_shell
			{
				count=2;
				magazine="1Rnd_SmokeRed_Grenade_shell";
			};
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
