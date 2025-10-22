class CfgPatches
{
	class armor_16
	{
		units[]=
		{
			"armor_16th_trp_base"
		};
		weapons[]=
		{
			"Metal_UNSC_CH252D_Helmet",
			"armor_16th_trp",
			"helmet_16th_trp",
			"helmet_16th_ab_trp",
			"helmet_16th_arf",
			"helmet_16th_plt",
			"helmet_16th_ab_vtrp",
			"helmet_16th_ab_cpl",
			"helmet_16th_ab_sgt",
			"helmet_16th_ab_ssgt",
			"helmet_16th_ab_cfs",
			"helmet_16th_ab_sgm",
			"helmet_16th_ab_medic",
			"helmet_16th_ab_blackrose",
			"helmet_16th_ab_kick",
			"helmet_16th_ab_vergil",
			"helmet_16th_arf_nco",
			"helmet_16th_tavion_arf",
			"helmet_16th_cadet",
			"helmet_16th_vttrp",
			"helmet_16th_special",
			"helmet_16th_nco",
			"helmet_16th_snco",
			"helmet_16th_officer",
			"helmet_16th_medic",
			"helmet_16th_eod",
			"helmet_16th_arch",
			"helmet_16th_avalanche",
			"helmet_16th_ben",
			"helmet_16th_blackrose",
			"helmet_16th_blat",
			"helmet_16th_blowfish",
			"helmet_16th_blue_arf",
			"helmet_16th_bravo",
			"helmet_16th_butcher",
			"helmet_16th_chet",
			"helmet_16th_chetiah",
			"helmet_16th_convor",
			"helmet_16th_cougar",
			"helmet_16th_creed",
			"helmet_16th_fish",
			"helmet_16th_frost",
			"helmet_16th_gambit",
			"helmet_16th_hazmat",
			"helmet_16th_hevy",
			"helmet_16th_hood",
			"helmet_16th_karma",
			"helmet_16th_kick",
			"helmet_16th_kix",
			"helmet_16th_krieg",
			"helmet_16th_mace",
			"helmet_16th_maple",
			"helmet_16th_maple_arf",
			"helmet_16th_maxson",
			"helmet_16th_merlin",
			"helmet_16th_moldy",
			"helmet_16th_nix",
			"helmet_16th_noble",
			"helmet_16th_prez",
			"helmet_16th_ronin",
			"helmet_16th_ronin_barc",
			"helmet_16th_roz",
			"helmet_16th_sam",
			"helmet_16th_six",
			"helmet_16th_smith",
			"helmet_16th_spice",
			"helmet_16th_sunto",
			"helmet_16th_talk",
			"helmet_16th_vergil",
			"helmet_16th_william",
			"helmet_16th_winters",
			"helmet_16th_wolf",		
			"OPTRE_Metal_CH252D_Helmet",
			"vest_16_backpack_rack_ammo_bearer",
			"vest_16_backpack_rack_cls",
			"vest_16_backpack_rack_at",
			"vest_16_vest_suspenders",
			"vest_16_eod_vest_suspenders",
			"met_vest_holster",
			"vest_16_vest_recon_nco",
			"vest_16_vest_nco",
			"vest_16_vest_ab",
			"vest_16_vest_ab_med",
			"vest_16_vest_ab_nco",
			"vest_16_vest_ab_med_nco",
			"vest_16_vest_recon_officer",
			"vest_16_vest_commander",
			"vest_16_vest_commander_2lt",
			"vest_16_vest_commander_1lt",
			"vest_16_vest_commander_cpt",
			"vest_16_vest_officer",
			"vest_16_vest_officer_2lt",
			"vest_16_vest_officer_1lt",
			"vest_16_vest_officer_cpt",
			"vest_16_vest_avalanche",
			"vest_16_vest_arc",
			"vest_16_vest_ronin_arc",
			"vest_16_vest_mooose_arc",
			"vest_16_ca_trp",
			"vest_16_ca_nco",
			"vest_16_ca_off"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_characters_F"
		};
		author="DJ, LCDR Wolf, JLTS Team";
		Name="16th Metal Armor";
	};
};

#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"

class HitPoints;
class CfgWeapons
{
	class ItemInfo;
	class HeadgearItem;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetP2_illum;
	class 3as_P2_Pilot_helmet;
	class JLTS_CloneHelmetAB;
	class 3AS_ARF_Helmet;
	class JLTS_CloneHelmetBARC;
	class helmet_16th_trp: JLTS_CloneHelmetP2
	{
		scope=2;
		displayName="[16th] Trooper Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\rifleman\trooper_helmet_co.paa"
		};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=.2;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=.2;
				};
			};
		};
	};
	class helmet_16th_ab_trp: JLTS_CloneHelmetAB
	{
		scope=2;
		displayName="[16th] Airborne Trooper Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\rifleman\ab_ct_helmet_co.paa"
		};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.15;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=7;
					passThrough=.2;
				};
			};
		};
	};
	class helmet_16th_ab_vtrp: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Airborne Veteran Trooper Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\vt\ab_vct_helmet_co.paa"
		};
	};
	class helmet_16th_ab_cpl: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Airborne Corporal Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_cpl_helmet_co.paa"
		};
	};
	class helmet_16th_ab_sgt: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Airborne Sergeant Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_sgt_helmet_co.paa"
		};
	};
	class helmet_16th_ab_ssgt: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Airborne Staff Sergeant Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_ssgt_helmet_co.paa"
		};
	};
	class helmet_16th_ab_cfs: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Airborne First Sergeant Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_cfs_helmet_co.paa"
		};
	};
	class helmet_16th_ab_sgm: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Airborne Sergeant Major Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_sgm_helmet_co.paa"
		};
	};
	class helmet_16th_ab_medic: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Airborne Medic Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\medic\ab_medic_helmet_co.paa"
		};
	};
	class helmet_16th_trp_illum: JLTS_CloneHelmetP2_illum
	{
		scope=1;
		displayName="[16th] Trooper Helmet (Glowing)";
		hiddenSelections[]=
		{
			"camo2",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\rifleman\trooper_helmet_co.paa",
			"z\16th\addons\armor\data\infantry\rifleman\trooper_helmet_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat",
			""
		};
		model="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor\CloneHelmetP2.p3d";
			hiddenSelections[]=
			{
				"camo2",
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=.2;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=.2;
				};
			};
		};
	};
	class helmet_16th_barc: JLTS_CloneHelmetBARC
	{
		scope=1;
		displayName="[16th] BARC Helmet";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"MRC\JLTS\characters\CloneArmor2\data\Clone_helmet_BARC_co.paa"
		};
		model="\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
		subItems[]={};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=.2;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=.2;
				};
			};
		};
	};
	class helmet_16th_arf: 3AS_ARF_Helmet
	{
		scope=2;
		displayName="[16th] Goff Helmet";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\arf\arf_helmet_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="3AS\3AS_Characters\Clones\Headgear\3AS_Clone_ARF.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=.2;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=.2;
				};
			};
		};
		/*subItems[]=
		{
			"nvg_16_arf_int"
		};*/
		subItems[]={};
	};
	class helmet_16th_arf_nco: helmet_16th_arf
	{
		scope=2;
		displayName="[16th] Goff NCO Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\arf\arf_nco_helmet_co.paa"
		};
	};
	class helmet_16th_tavion_arf: helmet_16th_arf
	{
		scope=2;
		displayName="[16th] Tavion's ARF Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\tavion_helmet_co.paa"
		};
	};
	class helmet_16th_plt: 3as_P2_Pilot_helmet
	{
		scope=2;
		displayName="[16th] Pilot Helmet";
		model="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\aviation\plt_cxp_helmet_co.paa",
			"z\16th\addons\armor\data\aviation\plt_cxp_helmet_co.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"z\16th\addons\armor\data\aviation\plt_cxp_helmet_co.paa",
			""
		};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1",
				"Camo2",
				"Camo3",
				"Camo4",
				"Camo5"
			};
			modelSides[]={3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=.2;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=.2;
				};
			};
		};
	};
	class helmet_16th_plt_sunto: helmet_16th_plt
	{
		scope=0;
		displayName="[16th] Sunto's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\plt_sunton_helmet_co.paa",
			"z\16th\addons\armor\data\custom\plt_sunton_helmet_co.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"z\16th\addons\armor\data\custom\plt_sunton_helmet_co.paa",
			""
		};
	};
	class helmet_16th_plt_fool: helmet_16th_plt
	{
		scope=2;
		displayName="[16th] Fool's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\plt_Fool_helmet_co.paa",
			"z\16th\addons\armor\data\custom\plt_Fool_helmet_co.paa",
			"",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa",
			"z\16th\addons\armor\data\custom\plt_Fool_helmet_co.paa",
			""
		};
	};
	class helmet_16th_cadet: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Cadet Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\rifleman\cadet_helmet_co.paa"
		};
	};
	class helmet_16th_vttrp: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Veteran Trooper Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\vetrifleman\veteran_helmet_co.paa"
		};
	};
	class helmet_16th_special: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Specialist Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\vetrifleman\specialist_helmet_co.paa"
		};
	};
	class helmet_16th_nco: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] NCO Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\ncos\nco_helmet_co.paa"
		};
	};
	class helmet_16th_snco: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] SNCO Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\ncos\snco_helmet_co.paa"
		};
	};
	class helmet_16th_officer: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Officer Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\officers\officer_helmet_co.paa"
		};
	};
	class helmet_16th_medic: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Medic Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\specialists\medic_helmet_co.paa"
		};
	};
	class helmet_16th_eod: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] EOD Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\specialists\eod_helmet_co.paa"
		};
	};
	/*==================================================================================================================================================
	==Custom Helmets Start
	==================================================================================================================================================*/
	class helmet_16th_ab_blackrose: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Blackrose's Airborne Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\blackrose_ab_helmet_co.paa"
		};
	};
	class helmet_16th_ab_kick: helmet_16th_ab_trp
	{
		scope=0;
		displayName="[16th] Kick's Airborne Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\kick_ab_helmet_co.paa"
		};
	};
	class helmet_16th_ab_vergil: helmet_16th_ab_trp
	{
		scope=2;
		displayName="[16th] Vergil's Airborne Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\vergil_ab_helmet_co.paa"
		};
	};
	class helmet_16th_arch: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Arch's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\arch_helmet_co.paa"
		};
	};
	class helmet_16th_avalanche: helmet_16th_trp_illum
	{
		scope=2;
		displayName="[16th] Avalanche's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\dj_helmet_co.paa",
			"z\16th\addons\armor\data\custom\dj_helmet_co.paa"
		};
	};
	class helmet_16th_beige: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Beige's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\beige_helmet_co.paa"
		};
	};
	class helmet_16th_ben: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Ben's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\ben_helmet_co.paa"
		};
	};
	class helmet_16th_blackrose: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Blackrose's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\blackrose_helmet_co.paa"
		};
	};
	class helmet_16th_blat: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Blatt's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\blatt_helmet_co.paa"
		};
	};
	class helmet_16th_blowfish: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Blowfish's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\blowfish_helmet_co.paa"
		};
	};
	class helmet_16th_blue_arf: helmet_16th_arf
	{
		scope=2;
		displayName="[16th] Blue's ARF Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\blue_arf_helmet_co.paa"
		};
	};
	class helmet_16th_bopit: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Bopit's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\bopit_helmet_co.paa"
		};
	};
	class helmet_16th_bravo: helmet_16th_trp
	{
		scope=1;
		displayName="[16th] Bravo's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\bravo_helmet_co.paa"
		};
	};
	class helmet_16th_butcher: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Butcher's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\butcher_helmet_co.paa"
		};
	};
	class helmet_16th_chet: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Chet's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\chet_helmet_co.paa"
		};
	};
	class helmet_16th_chetiah: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Chetiah's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\chetiah_helmet_co.paa"
		};
	};
	class helmet_16th_convor: helmet_16th_arf
	{
		scope=2;
		displayName="[16th] Convor's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\convor_helmet_co.paa"
		};
	};
	class helmet_16th_cougar: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Cougar's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\cougar_helmet_co.paa"
		};
	};
	class helmet_16th_creed: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Creed's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\creed_helmet_co.paa"
		};
	};
	class helmet_16th_fish: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Fish's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\fish_helmet_co.paa"
		};
	};
	class helmet_16th_frost: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Frost's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\frost_helmet_co.paa"
		};
	};
	class helmet_16th_gambit: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Gambit's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\gambit_helmet_co.paa"
		};
	};
	class helmet_16th_hazmat: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Hazmat's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\hazmat_helmet_co.paa"
		};
		optreHUDStyle="Phase_2";
		optreVarietys[]=
		{
			"",
			"",
			""
		};
	};
	class OPTRE_UNSC_CH252D_Helmet_Base;
	class Metal_UNSC_CH252D_Helmet: OPTRE_UNSC_CH252D_Helmet_Base
	{
		dlc="OPTRE";
		scope=2;
		scopeArsenal=2;
		author="Article 2 Studios";
		displayName="[16th] CH252D Helmet [Basic]";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"H_Ghillie"
		};
		hiddenSelectionsTextures[]=
		{
			"optre_unsc_units\army\data\odst_helmet_co.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"optre_unsc_units\army\data\soft_packs_co.paa"
		};
		//optreHUDStyle="Phase_2";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"H_Ghillie"
			};
			hiddenSelectionsTextures[]=
			{
				"optre_unsc_units\army\data\odst_helmet_co.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_co.paa",
				"optre_unsc_units\army\data\ghillie_woodland_co.paa",
				"optre_unsc_units\army\data\soft_packs_co.paa"
			};
		};
	};
	class OPTRE_UNSC_CH252D_Helmet_Stripes;
	class Metal_UNSC_CH252D_Helmet_Stripes: OPTRE_UNSC_CH252D_Helmet_Stripes
	{
		dlc="";
		author="Article 2 Studios";
		displayName="CH252D Helmet [Stripes]";
		optreHUDStyle="Phase_2";
	};
	class helmet_16th_hellwolf: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Hellwolf's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\hellwolf_helmet_co.paa"
		};
	};
	class helmet_16th_hevy : helmet_16th_trp
	{
		scope = 2;
		displayName = "[16th] Hevy's Helmet";
		hiddenSelectionsTextures[] =
		{
			"z\16th\addons\armor\data\custom\hevy_helmet_co.paa"
		};
	};
	class helmet_16th_hood: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Hood's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\hood_helmet_co.paa"
		};
	};
	class helmet_16th_karma: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Karma's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\karma_helmet_co.paa"
		};
	};
	class helmet_16th_kick: helmet_16th_trp
	{
		scope=0;
		displayName="[16th] Kick's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\kick_helmet_co.paa"
		};
	};
	class helmet_16th_kix: helmet_16th_arf
	{
		scope=2;
		displayName="[16th] Kix's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\kix_helmet_co.paa"
		};
	};
	class helmet_16th_krieg: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Krieg's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\krieg_helmet_co.paa"
		};
	};
	class helmet_16th_maia: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Maia's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\maia_helmet_co.paa"
		};
	};
	class helmet_16th_mace: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Mace's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\mace_helmet_co.paa"
		};
	};
	class helmet_16th_maple: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Maple's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\maple_helmet_new_co.paa"
		};
	};	
	class helmet_16th_maple_arf: helmet_16th_arf
	{
		scope=2;
		displayName="[16th] Maple's ARF Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\maple_arf_helmet_co.paa"
		};
	};
	class helmet_16th_maxson: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Maxson's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\maxson_helmet_co.paa"
		};
	};
	class helmet_16th_merlin: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Merlin's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\merlin_helmet_co.paa"
		};
	};
	class helmet_16th_moldy: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Moldy's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\moldy_helmet_co.paa"
		};
	};
	class helmet_16th_nix: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Nix's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\nix_helmet_co.paa"
		};
	};
	class helmet_16th_noble: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Nobles's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\noble_helmet_co.paa"
		};
	};
	class helmet_16th_prez: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Prez's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\prez_helmet_co.paa"
		};
	};
	class helmet_16th_ronin: helmet_16th_trp
	{
		scope=1;
		displayName="[16th] Ronin's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\ronin_helmet_co.paa"
		};
	};
	class helmet_16th_ronin_barc: helmet_16th_barc
	{
		scope=2;
		displayName="[16th] Ronin's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\ronin_helmet_barc_co.paa"
		};
	};
	class helmet_16th_roz: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Roz's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\roz_helmet_co.paa"
		};
	};
	class helmet_16th_sam: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Sam's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\sam_helmet_new_co.paa"
		};
	};
	class helmet_16th_six: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Six's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\six_helmet_co.paa"
		};
	};
	class helmet_16th_ska: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Ska's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\ska_helmet_co.paa"
		};
	};
	class helmet_16th_smith: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Smith's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\smith_helmet_co.paa"
		};
	};
	class helmet_16th_spice: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Spice's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\spice_helmet_co.paa"
		};
	};
	class helmet_16th_sunto: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Sunto's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\sunto_helmet_co.paa"
		};
	};
	class helmet_16th_talk: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Talk's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\talk_helmet_co.paa"
		};
	};
	class helmet_16th_vergil: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Vergil's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\vergil_helmet_co.paa"
		};
	};
	class helmet_16th_william: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] William's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\william_helmet_co.paa"
		};
	};
	class helmet_16th_winters: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Winters' Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\winters_helmet_co.paa"
		};
	};
	class helmet_16th_wolf: helmet_16th_trp
	{
		scope=2;
		displayName="[16th] Wolf's Helmet";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\wolf_helmet_co.paa"
		};
	};
	/*==================================================================================================================================================
	==Custom Helmets End
	==================================================================================================================================================*/
	class SEA_HELMET_GM_Base;
	class SEA_HELMET_GM_IllumBase;
	class helmet_16th_sm_trp: SEA_HELMET_GM_IllumBase
	{
		author="Hazmat";
		model="JLTS_AE_GM\SEA_Helmet_GM_Base.p3d";
		displayName="[16th] Cold Assault Trooper Helmet";
		scope=2;
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\trooper\snowman_helmet_co.paa",
			"z\16th\addons\armor\data\snowmen\trooper\snowman_helmet_co_glow.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE_GM\SEA_Helmet_GM_Base.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Visor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=.2;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=.2;
				};
			};
		};
	};
	class helmet_16_sm_nco: SEA_HELMET_GM_Base
	{
		author="Hazmat";
		scope=2;
		model="JLTS_AE_GM\SEA_Helmet_GM_Modular.p3d";
		displayName="[16th] Cold Assault NCO Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\nco\snowman_helmet_nco_co.paa",
			"z\16th\addons\armor\data\snowmen\trooper\snowman_helmet_co_glow.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		subItems[]={};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE_GM\SEA_Helmet_GM_Modular.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Visor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=.2;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=.2;
				};
			};
		};
	};
	class helmet_16_sm_off: SEA_HELMET_GM_Base
	{
		author="Hazmat";
		scope=2;
		model="JLTS_AE_GM\SEA_Helmet_GM_Modular.p3d";
		displayName="[16th] Cold Assault Officer Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\officer\snowman_helmet_off_co.paa",
			"z\16th\addons\armor\data\snowmen\trooper\snowman_helmet_co_glow.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		ace_hearing_protection=0.94999999;
		ace_hearing_lowerVolume=0.1;
		subItems[]={};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE_GM\SEA_Helmet_GM_Modular.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Visor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=.2;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=6;
					passThrough=.2;
				};
			};
		};
	};
	class helmet_16_sm_rto: SEA_HELMET_GM_Base
	{
		author="Hazmat";
		scope=2;
		model="JLTS_AE_GM\SEA_Helmet_GM_RTO.p3d";
		displayName="[16th] Cold Assault RTO Helmet";
		hiddenSelections[]=
		{
			"Camo1",
			"Visor"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\trooper\snowman_helmet_rto_co.paa",
			"z\16th\addons\armor\data\snowmen\trooper\snowman_helmet_co_glow.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		ace_hearing_lowerVolume=.3;
		ace_hearing_protection=0.35000002;
		subItems[]=
		{
			"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="JLTS_AE_GM\SEA_Helmet_GM_RTO.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Camo1",
				"Visor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class JLTS_CloneVestSuspender;
	class vest_16_basic: JLTS_CloneVestSuspender
	{
		scope=2;
		displayname="[16th] Vest Basic";
		picture="\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
		model="\SWLB_clones\SWLB_clone_basic_armor.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ls\core\addons\characters_clone_legacy\vests\clone\ls_gar_clone_vest.p3d";
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class VestItem;
	class Aux212_Backpack_Rack_Ammo_Bearer;
	class vest_16_backpack_rack_ammo_bearer: Aux212_Backpack_Rack_Ammo_Bearer
	{
		scope=2;
		scopeArsenal=2;
		displayname="[16th] Backpack Rack (Ammo Bearer)";
		model="\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_Ammo_Bearer\Backpack_Rack_Ammo_Bearer.p3d";
		picture="\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Data\UI\Backpack_Rack_Ammo_Bearer_UI_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel="\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_Ammo_Bearer\Backpack_Rack_Ammo_Bearer.p3d";
			containerClass="Supply120";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class Aux212_Backpack_Rack_CLS;
	class vest_16_backpack_rack_cls: Aux212_Backpack_Rack_CLS
	{
		scope=2;
		scopeArsenal=2;
		displayname="[16th] Backpack Rack (Medic)";
		model="\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_CLS\Backpack_Rack_CLS.p3d";
		picture="212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Data\UI\Backpack_Rack_CLS_UI_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel="\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_CLS\Backpack_Rack_CLS.p3d";
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class Aux212_Backpack_Rack_AT;
	class vest_16_backpack_rack_at: Aux212_Backpack_Rack_AT
	{
		scope=2;
		scopeArsenal=2;
		displayname="[16th] Backpack Rack (AT)";
		model="\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_AT\Backpack_Rack_AT.p3d";
		picture="\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Data\UI\Backpack_Rack_Ammo_Bearer_UI_ca.paa";
		class ItemInfo: VestItem
		{
			uniformModel="\212th\Armor\212th_Armor\212th_Vests\Aux212_Backpack_Racks\Aux212_Backpack_Rack_AT\Backpack_Rack_AT.p3d";
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class Aux212_Heavy_Gunner_Vest_Standard
	{
		class VestItem;
	};
	class MET_Heavy_Gunner_Vest_Standard: Aux212_Heavy_Gunner_Vest_Standard
	{
		scope=2;
		scopeArsenal=2;
		displayname="[16th] Weapons Squad Armor Plates";
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class Aux212_Heavy_Gunner_Vest_Team_Leader
	{
		class VestItem;
	};
	class MET_Heavy_Gunner_Vest_Reaper: Aux212_Heavy_Gunner_Vest_Team_Leader
	{
		scope=2;
		scopeArsenal=2;
		displayname="[16th] Reaper Armor Plates";
		class ItemInfo: VestItem
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class 16_vest_suspenders: JLTS_CloneVestSuspender
	{
		scope=2;
		displayname="[16th] Suspenders";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\suspenders\trp_vest_suspenders_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class 16_eod_vest_suspenders: JLTS_CloneVestSuspender
	{
		scope=2;
		displayname="[16th] EOD Suspenders";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\suspenders\eod_vest_suspenders_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class JLTS_CloneVestHolster;
	class met_vest_holster: JLTS_CloneVestHolster
	{
		scope=2;
		displayname="[16th] Holster";
		/*hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\suspenders\trp_vest_suspenders_co.paa"
		};*/
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class JLTS_CloneVestRecon;
	class JLTS_CloneVestReconNCO;
	class 16_vest_recon_nco: JLTS_CloneVestReconNCO
	{
		scope=2;
		displayname="[16th] Corporal Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_nco\trp_cpl_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class JLTS_CloneVestKama;
	class 16_vest_nco: JLTS_CloneVestKama
	{
		scope=2;
		displayname="[16th] Sergeant Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_nco\trp_sgt_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class JLTS_CloneVestAirborne;
	class 16_vest_ab: JLTS_CloneVestAirborne
	{
		scope=2;
		displayname="[16th] Airborne Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\ab_nco\ab_nco_kama_co.paa",
			"z\16th\addons\armor\data\gear\reg_vests\ab_nco\ab_nco_rig_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class 16_vest_ab_med: JLTS_CloneVestAirborne
	{
		scope=2;
		displayname="[16th] Platoon Medic Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\ab_nco\ab_nco_kama_co.paa",
			"z\16th\addons\armor\data\gear\reg_vests\ab_nco\ab_med_rig_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class JLTS_CloneVestAirborneNCO;
	class 16_vest_ab_nco: JLTS_CloneVestAirborneNCO
	{
		scope=2;
		displayname="[16th] Airborne NCO Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\ab_nco\ab_nco_kama_co.paa",
			"z\16th\addons\armor\data\gear\reg_vests\ab_nco\ab_nco_rig_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class 16_vest_ab_med_nco: JLTS_CloneVestAirborneNCO
	{
		scope=2;
		displayname="[16th] Platoon Senior Medic Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\ab_nco\ab_nco_kama_co.paa",
			"z\16th\addons\armor\data\gear\reg_vests\ab_nco\ab_med_rig_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class JLTS_CloneVestReconOfficer;
	class 16_vest_recon_officer: JLTS_CloneVestReconOfficer
	{
		scope=2;
		displayname="[16th] Staff NCO Vest";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=7;
					passThrough=.2;
				};
			};
		};
	};
	class JLTS_CloneVestCommander;
	class 16_vest_commander: JLTS_CloneVestCommander
	{
		scope=2;
		displayname="[16th] Merlin's Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_off\trp_ofc_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=7;
					passThrough=.2;
				};
			};
		};
	};
	class 16_vest_commander_2lt: 16_vest_commander
	{
		scope=0;
		displayname="[16th] Commander Vest (2LT)";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_off\trp_2lt_vest_co.paa"
		};
	};
	class 16_vest_commander_1lt: 16_vest_commander
	{
		scope=0;
		displayname="[16th] Commander Vest (1LT)";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_off\trp_1lt_vest_co.paa"
		};
	};
	class 16_vest_commander_cpt: 16_vest_commander
	{
		scope=0;
		displayname="[16th] Commander Vest (CPT)";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_off\trp_cpt_vest_co.paa"
		};
	};
	class JLTS_CloneVestOfficer;
	class 16_vest_officer: JLTS_CloneVestOfficer
	{
		scope=2;
		displayname="[16th] Officer Vest (Left)";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_off\trp_ofc_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=7;
					passThrough=.2;
				};
			};
		};
	};
	class 16_vest_officer_2lt: 16_vest_officer
	{
		scope=1;
		displayname="[16th] Officer Vest (2LT) (Left)";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_off\trp_2lt_vest_co.paa"
		};
	};
	class 16_vest_officer_1lt: 16_vest_officer
	{
		scope=2;
		displayname="[16th] Ronin's Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\custom_vests\ronin\ronin_officer_vest_co.paa"
		};
	};
	class 16_vest_officer_cpt: 16_vest_officer
	{
		scope=2;
		displayname="[16th] Cougar's Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_off\trp_cpt_vest_co.paa"
		};
	};
	class JLTS_CloneVestOfficer2;
	class 16_vest_officer2: JLTS_CloneVestOfficer2
	{
		scope=1;
		displayname="[16th] Officer Vest (Right)";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\trp_off\trp_ofc_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply100";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=6;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=5;
					passThrough=.2;
				};
			};
		};
	};
	class 16_vest_avalanche: 16_vest_officer2
	{
		scope=2;
		displayname="[16th] Avalanche Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\custom_vests\dj\dj_vest_co.paa"
		};
	};
	class JLTS_CloneVestARC;
	class vest_16th_arc: JLTS_CloneVestARC
	{
		scope=2;
		displayname="[16th] ARC Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\reg_vests\arc_vest\16th_arc_vest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=12;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=12;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=12;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=7;
					passThrough=.2;
				};
			};
		};
	};
	class vest_ronin_arc: vest_16th_arc
	{
		scope=2;
		displayname="[16th] Ronin's ARC Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\ronin_arc_vest_co.paa"
		};
	};
	class vest_mooose_arc: vest_16th_arc
	{
		scope=2;
		displayname="[16th] Winter's ARC Vest";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\moose_arc_vest_co.paa"
		};
	};
	class SEA_Vest_GM_Base;
	class vest_16_ca_trp: SEA_Vest_GM_Base
	{
		displayName="[16th] Cold Assault Trooper Vest";
		author="Hazmat";
		scope=2;
		model="\JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\trooper\Vest_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
			containerClass="Supply100";
			hiddenSelections[]=
			{
				"camo1"
			};
			mass=10;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=.2;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=6;
					passThrough=.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=6;
					passThrough=.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=6;
					passThrough=.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=6;
					passThrough=.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=6;
					passThrough=.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=5;
					passThrough=.2;
				};
			};
		};
	};
	class vest_16_ca_nco: vest_16_ca_trp
	{
		displayName="[16th] Cold Assault NCO Vest";
		author="Hazmat";
		scope=2;
		model="\JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\nco\snowman_vest_nco_co.paa"
		};
	};
	class vest_16_ca_off: vest_16_ca_trp
	{
		displayName="[16th] Cold Assault Officer Vest";
		author="Hazmat";
		scope=2;
		model="\JLTS_AE_GM\SEA_Vest_GM_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\officer\snowman_vest_off_co.paa"
		};
	};
	class JLTS_CloneArmor;
	class armor_16th_trp: JLTS_CloneArmor
	{
		scope=2;
		displayName="[16th] Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_trp_base";
			containerClass="Supply150";
			mass=40;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class armor_16th_arf: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Goff Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_arf_base";
		};
	};
	class armor_16th_arf_nco: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Goff NCO Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_arf_nco_base";
		};
	};
	class armor_16th_cadet: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Cadet Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_cadet_base";
		};
	};
	class armor_16th_arty: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Dragon Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_arty_base";
		};
	};
	class armor_16th_arty_nco: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Dragon NCO Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_arty_nco_base";
		};
	};
	class armor_16th_mechanized: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Reaper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_mechanized_base";
		};
	};
	class armor_16th_mechanized_nco: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Reaper NCO Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_mechanized_nco_base";
		};
	};
	class armor_16th_vttrp: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Veteran Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_vttrp_base";
		};
	};
	class armor_16th_special: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Specialist Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_special_base";
		};
	};
	class armor_16th_nco: armor_16th_trp
	{
		scope=2;
		displayName="[16th] NCO Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_nco_base";
		};
	};
	class armor_16th_snco: armor_16th_trp
	{
		scope=2;
		displayName="[16th] SNCO Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_snco_base";
		};
	};
	class armor_16th_officer: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Officer Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_officer_base";
		};
	};
	class armor_16th_med: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Medic Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_med_base";
		};
	};
	class armor_16th_eod: armor_16th_trp
	{
		scope=2;
		displayName="[16th] EOD Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_eod_base";
		};
	};
	class armor_16th_ab_trp: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Airborne Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ab_trp_base";
		};
	};
	class armor_16th_ab_vtrp: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Airborne Veteran Trooper Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ab_vtrp_base";
		};
	};
	class armor_16th_ab_cpl: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Airborne Corporal Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ab_cpl_base";
		};
	};
	class armor_16th_ab_sgt: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Airborne Sergeant Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ab_sgt_base";
		};
	};
	class armor_16th_ab_ssgt: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Airborne Staff Sergeant Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ab_ssgt_base";
		};
	};
	class armor_16th_ab_cfs: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Airborne First Sergeant Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ab_cfs_base";
		};
	};
	class armor_16th_ab_sgm: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Airborne Sergeant Major Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ab_sgm_base";
		};
	};
	class armor_16th_ab_medic: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Airborne Medic Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ab_medic_base";
		};
	};
	class armor_16th_ben: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Ben's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ben_base";
		};
	};
	class armor_16th_blackrose: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Blackrose's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_blackrose_base";
		};
	};
	class armor_16th_blatt: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Blatt's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_blatt_base";
		};
	};
	class armor_16th_cooger: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Cougar's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_cooger_base";
		};
	};
	class armor_16th_fool: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Fool's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_fool_base";
		};
	};
	class armor_16th_hazmat: armor_16th_cadet
	{
		scope=2;
		displayName="[16th] Hazmat's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_hazmat_base";
		};
	};
	class armor_16th_hood: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Hood's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_hood_base";
		};
	};
	class armor_16th_kix: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Kix's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_kix_base";
		};
	};
	class armor_16th_moldy: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Moldy Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_moldy_base";
		};
	};
	class armor_16th_moldy_zeus: armor_16th_cadet
	{
		scope=2;
		displayName="[16th] Moldy Zeus Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_moldyz_base";
		};
	};
	class armor_16th_nix: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Nix's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_nix_base";
		};
	};
	class armor_16th_Noble: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Noble's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_noble_base";
		};
	};
	class armor_16th_prez: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Prez's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_prez_base";
		};
	};
	class armor_16th_ronin: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Ronin's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_ronin_base";
		};
	};
	class armor_16th_roz : armor_16th_trp
	{
		scope = 2;
		displayName = "[16th] Roz's Armor";
		class ItemInfo : ItemInfo
		{
			uniformclass = "armor_16th_roz_base";
		};
	};
	class armor_16th_six: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Six's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_six_base";
		};
	};
	class armor_16th_sunto: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Sunto's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_sunto_base";
		};
	};
	class armor_16th_vergil: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Vergil's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_vergil_base";
		};
	};
	class armor_16th_winters: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Winters's Armor";
		class ItemInfo: ItemInfo
		{
			uniformclass="armor_16th_winters_base";
		};
	};
	class JLTS_CloneArmorMC;
	class armor_16th_avalanche: JLTS_CloneArmorMC
	{
		scope=2;
		displayName="[16th] Avalanche's Armor";
		class ItemInfo: ItemInfo
		{
			uniformClass="armor_16th_avalanche_base";
			containerClass="Supply150";
			mass=40;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class armor_16th_maxson: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Maxson's Armor";
		class ItemInfo: ItemInfo
		{
			uniformClass="armor_16th_maxson_base";
			containerClass="Supply150";
			mass=40;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class armor_16th_merlin: armor_16th_trp
	{
		scope=2;
		displayName="[16th] Merlin's Armor";
		class ItemInfo: ItemInfo
		{
			uniformClass="armor_16th_merlin_base";
			containerClass="Supply150";
			mass=40;
			modelSides[]={6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class SEA_Uniform_GM_Fabric;
	class UniformItem;
	class armor_16_ca_trp: SEA_Uniform_GM_Fabric
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Trooper Armor";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="armor_16_ca_trp_base";
			containerClass="Supply150";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class armor_16_ca_eod: SEA_Uniform_GM_Fabric
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault EOD Armor";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="armor_16_ca_eod_base";
			containerClass="Supply150";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class armor_16_ca_med: SEA_Uniform_GM_Fabric
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Medic Armor";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="armor_16_ca_med_base";
			containerClass="Supply150";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class armor_16_ca_nco: armor_16_ca_trp
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault NCO Armor";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="armor_16_ca_nco_base";
			containerClass="Supply150";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class armor_16_ca_off: armor_16_ca_trp
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Officer Armor";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="armor_16_ca_off_base";
			containerClass="Supply150";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=5;
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=8;
					passThrough=0.2;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.2;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=5;
					passThrough=0.4;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=8;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=8;
					passThrough=0.2;
					depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
			};
		};
	};
	class JLTS_CloneNVG;
	class nvg_16th_macro: JLTS_CloneNVG
	{
		scope=2;
		displayName="[16th] Macrobinoculars";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\trp_nvg_co.paa"
		};
	};
	class nvg_16th_macro_eod: JLTS_CloneNVG
	{
		scope=2;
		displayName="[16th] EOD Macrobinoculars";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\eod_nvg_co.paa"
		};
	};
	class nvg_16th_macro_med: JLTS_CloneNVG
	{
		scope=2;
		displayName="[16th] Medic Macrobinoculars";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\med_nvg_co.paa"
		};
	};
	class JLTS_CloneNVG_spec;
	class nvg_16th_macro_down: JLTS_CloneNVG_spec
	{
		scope=2;
		displayName="[16th] Macrobinoculars (Down)";
		modelOptics="\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\trp_nvg_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
	};
	class JLTS_NVG_droid_chip_1;
	class nvg_16th_chip: JLTS_NVG_droid_chip_1
	{
		scope=2;
		displayName="[16th] Clone NV Chip";
		modelOptics="\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\trp_nvg_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG"
		};
	};
	class JLTS_NVG_droid_chip_2;
	class nvg_16th_adv_chip_1: JLTS_NVG_droid_chip_2
	{
		scope=2;
		displayName="[16th] Clone Thermal Chip (White Hot)";
		modelOptics="\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\trp_nvg_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
	};
	class nvg_16th_adv_chip_2: JLTS_NVG_droid_chip_2
	{
		scope=2;
		displayName="[16th] Clone Thermal Chip (Green Hot)";
		modelOptics="\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\trp_nvg_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2,3};
	};
	class nvg_16th_adv_chip_3: JLTS_NVG_droid_chip_2
	{
		scope=2;
		displayName="[16th] Clone Thermal Chip (Red Hot)";
		modelOptics="\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\trp_nvg_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={4,5};
	};
	class nvg_16th_adv_chip_4: JLTS_NVG_droid_chip_2
	{
		scope=2;
		displayName="[16th] Clone Thermal Chip (Multi)";
		modelOptics="\MRC\JLTS\characters\CloneArmor\CloneNVG_regular_optic.p3d";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\trp_nvg_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={6,7};
	};
	class JLTS_CloneNVGCC;
	class nvg_16th_cc: JLTS_CloneNVGCC
	{
		scope=2;
		displayName="[16th] Commander Visor";
	};
	class SEA_Equipment_GM_Rangefinder;
	class nvg_16_ca_rangefinder: SEA_Equipment_GM_Rangefinder
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Rangefinder";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_range_ui_ca.paa";
		modelOptics="\a3\weapons_f\empty.p3d";
		model="JLTS_AE_GM\SEA_Equipment_Rangefinder_Off.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\nco\snowman_rangefinder_co.paa"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		class ItemInfo
		{
			type=616;
			uniformModel="JLTS_AE_GM\SEA_Equipment_Rangefinder_On.p3d";
			modelOff="JLTS_AE_GM\SEA_Equipment_Rangefinder_Off.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1"
			};
		};
	};
	class NVGoggles;
	class nvg_16_arf_int: NVGoggles
	{
		scope=1;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2,3};
		modelOptics="";
	};
	class JLTS_CloneNVGRange;
	class nvg_16_arc_range: JLTS_CloneNVGRange
	{
		scope=2;
		displayName="[16th] Rangefinder (ARC)";
		modelOptics="";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\metal_nvg_range_g_w_co.paa"
		};
	};
	class nvg_16_nco_range: JLTS_CloneNVGRange
	{
		scope=2;
		displayName="[16th] Rangefinder (NCO)";
		modelOptics="";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\metal_nvg_range_nco_co.paa"
		};
	};
	class nvg_16_off_range: JLTS_CloneNVGRange
	{
		scope=2;
		displayName="[16th] Rangefinder (Officer)";
		modelOptics="";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\metal_nvg_range_co.paa"
		};
	};
	class nvg_16_haz_range_1: JLTS_CloneNVGRange
	{
		scope=2;
		scopeArsenal=1;
		displayName="[16th] Hazmat's Rangefinder (W)";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1};
		modelOptics="";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\metal_nvg_range_g_b_co.paa"
		};
	};
	class nvg_16_haz_range_2: JLTS_CloneNVGRange
	{
		scope=2;
		scopeArsenal=1;
		displayName="[16th] Hazmat's Rangefinder (G)";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={2,3};
		modelOptics="";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\metal_nvg_range_g_b_co.paa"
		};
	};
	class nvg_16_haz_range_3: JLTS_CloneNVGRange
	{
		scope=2;
		scopeArsenal=1;
		displayName="[16th] Hazmat's Rangefinder (O)";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={4,5};
		modelOptics="";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\metal_nvg_range_g_b_co.paa"
		};
	};
	class nvg_16_haz_range_4: JLTS_CloneNVGRange
	{
		scope=2;
		scopeArsenal=1;
		displayName="[16th] Hazmat's Rangefinder (M)";
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={6,7};
		modelOptics="";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\visors\metal_nvg_range_g_b_co.paa"
		};
	};
};
class CfgVehicles
{
	class JLTS_Clone_P2_DC15A;
	class armor_16th_trp_base: JLTS_Clone_P2_DC15A
	{
		scope=2;
		displayName="[16th] Trooper";
		uniformClass="armor_16th_trp";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\rifleman\trooper_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\rifleman\trooper_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_trp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_trp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.2;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=.2
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=.2
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=.2
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=.2
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.2;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.2;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.3;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.2;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=0.2
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=0.2
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=.3;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class armor_16th_cadet_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Cadet";
		uniformClass="armor_16th_cadet";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\rifleman\cadet_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\rifleman\cadet_uniform2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
			"\MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
		};
		linkedItems[]=
		{
			"helmet_16th_cadet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_cadet",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_arf_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] ARF";
		uniformClass="armor_16th_arf";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\arf\arf_uniform1_co.paa",
			"z\16th\addons\armor\data\arf\arf_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_arf",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_arf",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_arf_nco_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] ARF NCO";
		uniformClass="armor_16th_arf_nco";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\arf\arf_nco_uniform1_co.paa",
			"z\16th\addons\armor\data\arf\arf_nco_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_arf_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_arf_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_arty_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Artillery Trooper";
		uniformClass="armor_16th_arty";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\artillery\arty_uniform1_co.paa",
			"z\16th\addons\armor\data\artillery\arty_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_arty_nco_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Artillery NCO";
		uniformClass="armor_16th_arty_nco";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\artillery\arty_nco_uniform1_co.paa",
			"z\16th\addons\armor\data\artillery\arty_nco_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_mechanized_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Mechanized Trooper";
		uniformClass="armor_16th_mechanized";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\mechanized\reaper_uniform1_co.paa",
			"z\16th\addons\armor\data\mechanized\reaper_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_mechanized_nco_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Mechanized NCO";
		uniformClass="armor_16th_mechanized_nco";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\mechanized\reaper_nco_uniform1_co.paa",
			"z\16th\addons\armor\data\mechanized\reaper_nco_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_vttrp_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Veteran Trooper";
		uniformClass="armor_16th_vttrp";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\vetrifleman\veteran_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\vetrifleman\veteran_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_vttrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_special_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Specialist";
		uniformClass="armor_16th_special";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\vetrifleman\specialist_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\vetrifleman\specialist_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_special",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_special",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_nco_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] NCO";
		uniformClass="armor_16th_nco";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\ncos\nco_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\ncos\nco_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_snco_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] SNCO";
		uniformClass="armor_16th_snco";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\ncos\snco_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\ncos\snco_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_snco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_snco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_officer_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Officer";
		uniformClass="armor_16th_officer";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\officers\officer_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\officers\officer_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_officer",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_officer",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_med_base: armor_16th_trp_base
	{
		scope=2;
		displayName="[16th] Medic";
		uniformClass="armor_16th_med";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\specialists\medic_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\specialists\medic_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_med",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_med",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_eod_base: armor_16th_trp_base
	{
		scope=2;
		displayName="[16th] EOD";
		uniformClass="armor_16th_eod";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\infantry\specialists\eod_uniform1_co.paa",
			"z\16th\addons\armor\data\infantry\specialists\eod_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_eod",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_eod",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_ab_trp_base: armor_16th_trp_base
	{
		scope=2;
		displayName="[16th] Airborne Trooper";
		uniformClass="armor_16th_ab_trp";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\rifleman\ab_ct_uniform1_co.paa",
			"z\16th\addons\armor\data\airborne\rifleman\ab_ct_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ab_trp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ab_trp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_ab_vtrp_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Airborne Veteran Trooper";
		uniformClass="armor_16th_ab_vtrp";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\vt\ab_vct_uniform1_co.paa",
			"z\16th\addons\armor\data\airborne\vt\ab_vct_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ab_vtrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ab_vtrp",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_ab_cpl_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Airborne Corporal";
		uniformClass="armor_16th_ab_cpl";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_cpl_uniform1_co.paa",
			"z\16th\addons\armor\data\airborne\ncos\ab_cpl_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ab_cpl",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ab_cpl",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_ab_sgt_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Airborne Sergeant";
		uniformClass="armor_16th_ab_sgt";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_sgt_uniform1_co.paa",
			"z\16th\addons\armor\data\airborne\ncos\ab_sgt_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ab_sgt",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ab_sgt",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_ab_ssgt_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Airborne Staff Sergeant";
		uniformClass="armor_16th_ab_ssgt";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_ssgt_uniform1_co.paa",
			"z\16th\addons\armor\data\airborne\ncos\ab_ssgt_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ab_ssgt",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ab_ssgt",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_ab_cfs_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Airborne First Sergeant";
		uniformClass="armor_16th_ab_cfs";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_cfs_uniform1_co.paa",
			"z\16th\addons\armor\data\airborne\ncos\ab_cfs_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ab_cfs",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ab_cfs",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_ab_sgm_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Airborne Sergeant Major";
		uniformClass="armor_16th_ab_sgm";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\ncos\ab_sgm_uniform1_co.paa",
			"z\16th\addons\armor\data\airborne\ncos\ab_sgm_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ab_sgm",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ab_sgm",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_ab_medic_base: armor_16th_trp_base
	{
		scope=2;
		displayName="[16th] Airborne Medic";
		uniformClass="armor_16th_ab_medic";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\airborne\medic\ab_medic_uniform1_co.paa",
			"z\16th\addons\armor\data\airborne\medic\ab_medic_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ab_medic",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ab_medic",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_ronin_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Ronin";
		uniformClass="armor_16th_ronin";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\ronin_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\ronin_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ronin",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ronin",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_roz_base : armor_16th_trp_base
	{
		scope = 1;
		displayName = "[16th] Roz";
		uniformClass = "armor_16th_roz";
		hiddenselectionsTextures[] =
		{
			"z\16th\addons\armor\data\custom\roz_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\roz_uniform2_co.paa"
		};
		linkedItems[] =
		{
			"helmet_16th_roz",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[] =
		{
			"helmet_16th_roz",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_moldyz_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Moldy Zeus";
		uniformClass="armor_16th_moldy_zeus";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\moldy_zeus_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\moldy_zeus_uniform2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
			"\MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
		};
		linkedItems[]=
		{
			"helmet_16th_moldy",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_moldy",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_moldy_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Moldy";
		uniformClass="armor_16th_moldy";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\moldy_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\moldy_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_moldy",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_moldy",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_blatt_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Blatt";
		uniformClass="armor_16th_blatt";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\blatt_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\blatt_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_blatt",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_blatt",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_ben_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Ben";
		uniformClass="armor_16th_ben";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\ben_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\ben_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_ben",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_ben",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_blackrose_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Blackrose";
		uniformClass="armor_16th_blackrose";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\blackrose_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\blackrose_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_blackrose",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_blackrose",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_prez_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Prez";
		uniformClass="armor_16th_prez";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\prez_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\prez_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_prez",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_prez",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_hazmat_base: armor_16th_cadet_base
	{
		scope=1;
		displayName="[16th] Hazmat";
		uniformClass="armor_16th_hazmat";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\hazmat_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\hazmat_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_hamat",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_hamat",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_hood_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Hood";
		uniformClass="armor_16th_hood";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\hood_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\hood_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_hood",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_hood",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_kix_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Kix";
		uniformClass="armor_16th_kix";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\kix_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\kix_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_kix",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_kix",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_winters_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Winters";
		uniformClass="armor_16th_winters";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\winters_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\winters_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_winters",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_winters",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_six_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Six";
		uniformClass="armor_16th_six";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\six_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\six_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_six",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_six",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
	};
	class armor_16th_vergil_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Vergils";
		uniformClass="armor_16th_vergil";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\vergil_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\vergil_uniform2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
			"\MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
		};
		linkedItems[]=
		{
			"helmet_16th_vergil",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_vergil",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class JLTS_Clone_P2_marshalcommander;
	class armor_16th_avalanche_base: JLTS_Clone_P2_marshalcommander
	{
		scope=1;
		displayName="[16th] Avalanche";
		uniformClass="armor_16th_avalanche";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\dj_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\dj_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_avalanche",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_avalanche",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_maxson_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Maxson";
		uniformClass="armor_16th_maxson";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\maxson_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\maxson_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_maxson",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_maxson",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_merlin_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Merlin";
		uniformClass="armor_16th_merlin";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\merlin_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\merlin_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_merlin",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_merlin",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_cooger_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Cougar";
		uniformClass="armor_16th_cooger";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\cougar_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\cougar_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_merlin",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_merlin",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_fool_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Fool";
		uniformClass="armor_16th_fool";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\fool_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\fool_uniform1_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_sunto_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Sunto";
		uniformClass="armor_16th_sunto";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\sunto_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\sunto_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_nix_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Nix";
		uniformClass="armor_16th_nix";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\nix_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\nix_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_nix",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_nix",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16th_noble_base: armor_16th_trp_base
	{
		scope=1;
		displayName="[16th] Noble";
		uniformClass="armor_16th_noble";
		hiddenselectionsTextures[]=
		{
			"z\16th\addons\armor\data\custom\noble_uniform1_co.paa",
			"z\16th\addons\armor\data\custom\noble_uniform2_co.paa"
		};
		linkedItems[]=
		{
			"helmet_16th_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
		respawnLinkedItems[]=
		{
			"helmet_16th_nco",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch",
			"JLTS_CloneNVG"
		};
	};
	class armor_16_ca_trp_base: JLTS_Clone_P2_DC15A
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Trooper";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		genericNames="JLTS_Clones";
		faction="JLTS_GAR";
		editorSubcategory="SEA_Clones_GM";
		identityTypes[]=
		{
			"JLTS_voice_clone",
			"JLTS_head_clone",
			"JLTS_Clone_P2"
		};
		uniformClass="armor_16_ca_trp";
		backpack="";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Uniform",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\trooper\snowman_uniform_1_co.paa",
			"z\16th\addons\armor\data\snowmen\trooper\snowman_uniform_2_fab_co.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
		};
		linkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		nakedUniform="JLTS_CloneNaked_uniform";
		magazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.2;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=.2
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=.2
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=.2
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=.2
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.2;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.2;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.3;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.2;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=0.2
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=0.2
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=.3;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class armor_16_ca_eod_base: JLTS_Clone_P2_DC15A
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault EOD";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		genericNames="JLTS_Clones";
		faction="JLTS_GAR";
		editorSubcategory="SEA_Clones_GM";
		identityTypes[]=
		{
			"JLTS_voice_clone",
			"JLTS_head_clone",
			"JLTS_Clone_P2"
		};
		uniformClass="armor_16_ca_eod";
		backpack="";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Uniform",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\trooper\snowman_uniform_eod_1_co.paa",
			"z\16th\addons\armor\data\snowmen\trooper\snowman_uniform_2_fab_co.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
		};
		linkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		nakedUniform="JLTS_CloneNaked_uniform";
		magazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.2;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=.2
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=.2
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=.2
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=.2
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.2;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.2;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.3;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.2;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=0.2
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=0.2
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=.3;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class armor_16_ca_med_base: JLTS_Clone_P2_DC15A
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Medic";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		genericNames="JLTS_Clones";
		faction="JLTS_GAR";
		editorSubcategory="SEA_Clones_GM";
		identityTypes[]=
		{
			"JLTS_voice_clone",
			"JLTS_head_clone",
			"JLTS_Clone_P2"
		};
		uniformClass="armor_16_ca_med";
		backpack="";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Uniform",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\trooper\snowman_uniform_medic_1_co.paa",
			"z\16th\addons\armor\data\snowmen\trooper\snowman_uniform_2_fab_co.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
		};
		linkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		nakedUniform="JLTS_CloneNaked_uniform";
		magazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.2;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=.2
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=.2
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=.2
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=.2
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.2;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.2;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.3;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.2;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=0.2
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=0.2
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=.3;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class armor_16_ca_nco_base: JLTS_Clone_P2_DC15A
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault NCO";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		genericNames="JLTS_Clones";
		faction="JLTS_GAR";
		editorSubcategory="SEA_Clones_GM";
		identityTypes[]=
		{
			"JLTS_voice_clone",
			"JLTS_head_clone",
			"JLTS_Clone_P2"
		};
		uniformClass="armor_16_ca_nco";
		backpack="";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Uniform",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\nco\snowman_uniform_nco_1_co.paa",
			"z\16th\addons\armor\data\snowmen\nco\snowman_uniform_nco_fab_2_co.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
		};
		linkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		nakedUniform="JLTS_CloneNaked_uniform";
		magazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.2;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=.2
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=.2
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=.2
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=.2
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.2;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.2;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.3;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.2;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=0.2
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=0.2
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=.3;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class armor_16_ca_off_base: JLTS_Clone_P2_DC15A
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Officer";
		editorPreview="\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
		genericNames="JLTS_Clones";
		faction="JLTS_GAR";
		editorSubcategory="SEA_Clones_GM";
		identityTypes[]=
		{
			"JLTS_voice_clone",
			"JLTS_head_clone",
			"JLTS_Clone_P2"
		};
		uniformClass="armor_16_ca_off";
		backpack="";
		model="JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"Uniform",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\snowmen\officer\snowman_uniform_off_1_co.paa",
			"z\16th\addons\armor\data\snowmen\officer\snowman_uniform_off_2_fab_co.paa",
			"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
		};
		linkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		respawnLinkedItems[]=
		{
			"SEA_HELMET_GM_Base",
			"SEA_Vest_GM_Base",
			"ItemMap",
			"JLTS_clone_comlink",
			"ItemCompass",
			"ItemWatch"
		};
		weapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"JLTS_DC15A_plastic",
			"JLTS_DC17SA",
			"Throw",
			"Put"
		};
		nakedUniform="JLTS_CloneNaked_uniform";
		magazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC15A_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"JLTS_DC17SA_mag",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green",
			"JLTS_stun_mag_long",
			"JLTS_stun_mag_long",
			"HandGrenade",
			"HandGrenade"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.2;
				radius=0.079999998;
				explosionShielding=0.1;
				minimalHit=0.0099999998;
			};
			class HitNeck: HitFace
			{
				armor=1;
				material=-1;
				name="neck";
				passThrough=.2
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=.2
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.0099999998;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=6;
				material=-1;
				name="pelvis";
				passThrough=.2
				radius=0.23999999;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=.2
				radius=0.16;
				explosionShielding=3;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=6;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitChest: HitDiaphragm
			{
				armor=6;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18000001;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=0.2;
				radius=0;
				explosionShielding=6;
				visual="injury_body";
				minimalHit=0.0099999998;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=6;
				material=-1;
				name="arms";
				passThrough=0.2;
				radius=0.1;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=6;
				material=-1;
				name="hands";
				passThrough=0.3;
				radius=0.1;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.0099999998;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=6;
				material=-1;
				name="legs";
				passThrough=0.2;
				radius=0.14;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=3;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=6;
				material=-1;
				name="hand_l";
				passThrough=0.2
				radius=0.079999998;
				explosionShielding=3;
				visual="injury_hands";
				minimalHit=0.0099999998;
			};
			class HitRightArm: HitLeftArm
			{
				name="hand_r";
			};
			class HitLeftLeg
			{
				armor=6;
				material=-1;
				name="leg_l";
				passThrough=0.2
				radius=0.1;
				explosionShielding=3;
				visual="injury_legs";
				minimalHit=0.0099999998;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=.3;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"A3\Characters_F\Common\Data\basicbody.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"A3\Characters_F\Common\Data\basicbody_injury.rvmat",
				"a3\characters_f\heads\data\hl_white.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
				"A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
			};
		};
	};
	class ItemInfo;
	class JLTS_Clone_backpack;
	class JLTS_Clone_belt_bag;
	class backpack_16th: JLTS_Clone_backpack
	{
		scope=2;
		displayName="[16th] Backpack";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\trp_backpack_co.paa"
		};
		maximumLoad=300;
	};
	class beltpack_16th: JLTS_Clone_belt_bag
	{
		scope=2;
		displayName="[16th] Beltpack";
		maximumLoad=300;
	};
	class backpack_16th_heavy: backpack_16th
	{
		scope=2;
		displayName="[16th] Heavy Backpack";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\at_backpack_co.paa"
		};
		maximumLoad=500;
	};
	class JLTS_Clone_backpack_eod;
	class backpack_16th_eod: JLTS_Clone_backpack_eod
	{
		scope=2;
		displayName="[16th] EOD Backpack";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\eod_backpack_co.paa"
		};
		maximumLoad=400;
	};
	class JLTS_Clone_backpack_medic;
	class backpack_16th_medic: JLTS_Clone_backpack_medic
	{
		scope=2;
		displayName="[16th] Medic Backpack";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\med_backpack_co.paa"
		};
		maximumLoad=400;
	};
	class JLTS_Clone_backpack_RTO;
	class backpack_16th_rto: JLTS_Clone_backpack_RTO
	{
		scope=2;
		displayName="[16th] RTO Backpack";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\rto_backpack_co.paa"
		};
		maximumLoad=300;
	};
	class JLTS_Clone_LR_attachment;
	class backpack_16th_mini_rto_1: JLTS_Clone_LR_attachment
	{
		scope=2;
		displayName="[16th] RTO Mini Backpack Mk1";
		maximumLoad=300;
	};
	class JLTS_Clone_RTO_pack;
	class backpack_16th_mini_rto_2: JLTS_Clone_RTO_pack
	{
		scope=2;
		displayName="[16th] RTO Mini Backpack Mk2";
		maximumLoad=300;
	};
	class Aux212_Clone_Radio_LR;
	class backpack_16th_mini_rto_3: Aux212_Clone_Radio_LR
	{
		scope=2;
		displayName="[16th] RTO Mini Backpack Mk3";
		maximumLoad=300;
	};
	class backpack_16_ca_base: JLTS_Clone_backpack
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Backpack";
		model="\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\JLTS_AE_GM\data\BaseTextures\Backpack\Backpack_ca.paa"
		};
		maximumLoad=300;
	};
	class backpack_16_ca_Heavy: JLTS_Clone_backpack
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Heavy Backpack";
		model="\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\JLTS_AE_GM\data\BaseTextures\Backpack\Backpack_ca.paa"
		};
		maximumLoad=500;
	};
	class backpack_16_ca_EOD: JLTS_Clone_backpack_eod
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault EOD Backpack";
		model="\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
		hiddenSelectionsTextures[]=
		{
			"\JLTS_AE_GM\data\BaseTextures\Backpack\Backpack_EOD.paa"
		};
		maximumLoad=500;
	};
	class backpack_16_ca_Medic: JLTS_Clone_backpack_medic
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault Medic Backpack";
		model="\JLTS_AE_GM\SEA_Backpack_GM_Medic.p3d";
		hiddenSelectionsTextures[]=
		{
			"\JLTS_AE_GM\data\BaseTextures\Backpack\Medic\BackpackMedic_ca.paa"
		};
		maximumLoad=400;
	};
	class backpack_16_ca_RTO: JLTS_Clone_backpack_RTO
	{
		author="Hazmat";
		scope=2;
		displayName="[16th] Cold Assault RTO Backpack";
		model="\JLTS_AE_GM\SEA_Backpack_GM_RTO.p3d";
		hiddenselections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\JLTS_AE_GM\data\BaseTextures\Backpack\RTO\Backpack_Base_ca.paa",
			"\JLTS_AE_GM\data\BaseTextures\Backpack\RTO\Backpack_RTO_ca.paa"
		};
		maximumLoad=300;
	};
	class Aux212_ARC_Backpack;
	class MET_ARC_Backpack_212: Aux212_ARC_Backpack
	{
		author="Hazmat";
		displayName="[16th] ARC Backpack";
		scope=2;
		maximumLoad=750;
	};
	class JLTS_Clone_ARC_backpack;
	class MET_ARC_Backpack_JLTS: JLTS_Clone_ARC_backpack
	{
		author="Hazmat";
		displayName="[16th] ARC Backpack (JLTS)";
		scope=2;
		maximumLoad=750;
	};
	class B_Kitbag_rgr;
	class MET_ARC_Backpack: B_Kitbag_rgr
	{
		author = "Hazmat";
		scope = 2;
		maximumload = 750;
		displayName = "[16th] ARC Backpack";
		model = "z\16th\addons\armor\ARC_Backpack.p3d";
		picture = "z\16th\addons\armor\data\UI\ARC_Backpack_UI_ca.paa";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"z\16th\addons\armor\data\gear\backpacks\ARC_Backpack_CO.paa"};
		hiddenSelectionsMaterials[] = {"z\16th\addons\armor\data\gear\backpacks\ARC_Backpack.rvmat"};
		containerClass = "Supply250";
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "JLTS_clone_rto_radio_dialog";
		tf_subtype = "digital_lr";
		tf_range = 35000;
	};
	class JLTS_Clone_jumppack_JT12;
	class jetpack_16th: JLTS_Clone_jumppack_JT12
	{
		scope=2;
		displayName="[16th] JT-12";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\jt12_backpack_co.paa"
		};
		maximumLoad=200;
		BNA_KC_jetpacks_isJetpack=1;
		BNA_KC_jetpacks_speed=4;
		BNA_KC_jetpacks_strength=15;
		BNA_KC_jetpacks_fuel=200;
		BNA_KC_jetpacks_canHover=1;
		BNA_KC_jetpacks_effectPoints[]=
		{
			{-0.15051,-0.219357,-0.247619},
			{0.15051,-0.219357,-0.247619}
		};
		BNA_KC_jetpacks_effects[]=
		{
			"BNA_KC_cloudlet_jetpackFire_blue",
			"BNA_KC_cloudlet_jetpackSmoke"
		};
		BNA_KC_jetpacks_effectSound="\ORA\BNA_KC\addons\jetpacks\data\audio\Jetpack_Loop.wss";
		BNA_KC_jetpacks_lightColor[]={0,0.1,0.39999998};
		BNA_KC_jetpacks_freefallHeight=500;
	};
	class jetpack_16th_medic: jetpack_16th
	{
		scope=2;
		displayName="[16th] JT-12 (Medic)";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\jt12_backpack_medic_co.paa"
		};
		maximumLoad=250;
	};
	class jetpack_16th_ro: jetpack_16th
	{
		scope=2;
		displayName="[16th] JT-12 (RTO)";
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\jt12_backpack_co.paa"
		};
		maximumLoad=200;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
	};
	class JLTS_Clone_jumppack_mc;
	class jumppack_16th: JLTS_Clone_jumppack_mc
	{
		author="Hazmat";
		scope=2;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		displayName="[16th] Jump Pack";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\jump_backpack_trooper_co.paa"
		};
		maximumLoad=250;
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=0;
		tf_range=10000;
		tf_subtype="digital_lr";
		sc_jumppack=1;
		sc_particles[]=
		{
			{0,-0.175,-0.15}
		};
		RD501_jumppack_is_jumppack=0;
		RD501_jumppack_spam_delay=1;
		RD501_jumppack_energy_capacity=100;
		RD501_jumppack_recharge=4;
		RD501_jumppack_jump_effect_script="RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		RD501_jumppack_sound_ignite[]=
		{
			"RD501_Jumppack\sounds\cdv21Start.ogg"
		};
		RD501_jumppack_sound_land[]=
		{
			"RD501_Jumppack\sounds\cdv21End.ogg"
		};
		RD501_jumppack_sound_idle[]=
		{
			"RD501_Jumppack\sounds\cdv21Idle.ogg"
		};
		RD501_jumppack_skin_group[]=
		{
			"default_texture_group"
		};
		RD501_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			}
		};
		NSM_jumppack_is_jumppack=0;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=100;
		NSM_jumppack_recharge=4;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[]=
		{
			
			{
				
				{
					"spine3",
					{0,-0.30000001,-0.1}
				}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			}
		};
	};
	class jumppack_16th_RTO: JLTS_Clone_jumppack_mc
	{
		author="Hazmat";
		scope=2;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		displayName="[16th] Jump Pack (RTO)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\jump_backpack_trooper_co.paa"
		};
		maximumLoad=250;
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=10000;
		tf_subtype="digital_lr";
		sc_jumppack=1;
		sc_particles[]=
		{
			{0,-0.175,-0.15}
		};
		RD501_jumppack_is_jumppack=0;
		RD501_jumppack_spam_delay=1;
		RD501_jumppack_energy_capacity=100;
		RD501_jumppack_recharge=4;
		RD501_jumppack_jump_effect_script="RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		RD501_jumppack_sound_ignite[]=
		{
			"RD501_Jumppack\sounds\cdv21Start.ogg"
		};
		RD501_jumppack_sound_land[]=
		{
			"RD501_Jumppack\sounds\cdv21End.ogg"
		};
		RD501_jumppack_sound_idle[]=
		{
			"RD501_Jumppack\sounds\cdv21Idle.ogg"
		};
		RD501_jumppack_skin_group[]=
		{
			"default_texture_group"
		};
		RD501_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			}
		};
		NSM_jumppack_is_jumppack=0;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=100;
		NSM_jumppack_recharge=4;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[]=
		{
			
			{
				
				{
					"spine3",
					{0,-0.30000001,-0.1}
				}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			}
		};
	};
	class jumppack_16th_med: JLTS_Clone_jumppack_mc
	{
		author="Hazmat";
		scope=2;
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
		displayName="[16th] Jump Pack (Medic)";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"z\16th\addons\armor\data\gear\backpacks\jump_backpack_medic_co.paa"
		};
		maximumLoad=300;
		tf_dialog="JLTS_clone_lr_programmer_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=0;
		tf_range=10000;
		tf_subtype="digital_lr";
		sc_jumppack=1;
		sc_particles[]=
		{
			{0,-0.175,-0.15}
		};
		RD501_jumppack_is_jumppack=0;
		RD501_jumppack_spam_delay=1;
		RD501_jumppack_energy_capacity=100;
		RD501_jumppack_recharge=4;
		RD501_jumppack_jump_effect_script="RD501_jumppack_fnc_effect_jt_21";
		RD501_jumppack_effect_points[]=
		{
			
			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		};
		RD501_jumppack_sound_ignite[]=
		{
			"RD501_Jumppack\sounds\cdv21Start.ogg"
		};
		RD501_jumppack_sound_land[]=
		{
			"RD501_Jumppack\sounds\cdv21End.ogg"
		};
		RD501_jumppack_sound_idle[]=
		{
			"RD501_Jumppack\sounds\cdv21Idle.ogg"
		};
		RD501_jumppack_skin_group[]=
		{
			"default_texture_group"
		};
		RD501_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			}
		};
		NSM_jumppack_is_jumppack=0;
		NSM_jumppack_spam_delay=1;
		NSM_jumppack_energy_capacity=100;
		NSM_jumppack_recharge=4;
		NSM_jumppack_jump_effect_script="NSM_jumppack_effect_fnc_jt_21";
		NSM_jumppack_effect_points[]=
		{
			
			{
				
				{
					"spine3",
					{0,-0.30000001,-0.1}
				}
			}
		};
		NSM_jumppack_sound_ignite[]=
		{
			"NSM_Main\sounds\cdv21Start.ogg"
		};
		NSM_jumppack_sound_land[]=
		{
			"NSM_Main\sounds\cdv21End.ogg"
		};
		NSM_jumppack_sound_idle[]=
		{
			"NSM_Main\sounds\cdv21Idle.ogg"
		};
		NSM_jumppack_jump_types[]=
		{
			
			{
				"Forward Jump",
				{12,20,50,0,0,0}
			},
			
			{
				"Short Jump",
				{12,5,30,0,1,0}
			}
		};
	};
};
class cfgMods
{
	author="LCDR Wolf";
	timepacked="1739555473";
};