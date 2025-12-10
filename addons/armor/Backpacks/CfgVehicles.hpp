// ==================================================================================================================
// Base Backpacks | MET_[Backpack/Descriptor]_[Base/Variant]
// ==================================================================================================================
// Backpacks
class JLTS_Clone_backpack;
class MET_Backpack_Base : JLTS_Clone_backpack
{
	scope = 2;
	displayName = "[16th] Backpack";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Backpack_CO.paa"
	};
	maximumLoad = 300;
};
class MET_Backpack_Heavy : MET_Backpack_Base
{
	scope = 2;
	displayName = "[16th] Heavy Backpack";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Backpack_Heavy_CO.paa"
	};
	maximumLoad = 500;
};

class JLTS_Clone_backpack_eod;
class MET_Backpack_EOD : JLTS_Clone_backpack_eod
{
	scope = 2;
	displayName = "[16th] EOD Backpack";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Backpack_EOD_CO.paa"
	};
	maximumLoad = 400;
};

class JLTS_Clone_backpack_medic;
class MET_Backpack_Medic : JLTS_Clone_backpack_medic
{
	scope = 2;
	displayName = "[16th] Medic Backpack";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Backpack_MED_CO.paa"
	};
	maximumLoad = 400;
};

class JLTS_Clone_backpack_RTO;
class MET_Backpack_RTO : JLTS_Clone_backpack_RTO
{
	scope = 2;
	displayName = "[16th] RTO Backpack";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Backpack_RTO_CO.paa"
	};
	maximumLoad = 300;
};

class JLTS_Clone_belt_bag;
class MET_Beltbag_Base : JLTS_Clone_belt_bag
{
	scope = 2;
	displayName = "[16th] Beltpack";
	maximumLoad = 300;
};

// Cold Assault
class MET_Backpack_CA_Base : JLTS_Clone_backpack
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Backpack";
	model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
	hiddenSelectionsTextures[] =
	{
		"\JLTS_AE_GM\data\BaseTextures\Backpack\Backpack_ca.paa"
	};
	maximumLoad = 300;
};
class MET_Backpack_CA_Heavy : JLTS_Clone_backpack
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Heavy Backpack";
	model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
	hiddenSelectionsTextures[] =
	{
		"\JLTS_AE_GM\data\BaseTextures\Backpack\Backpack_ca.paa"
	};
	maximumLoad = 500;
};
class MET_Backpack_CA_EOD : JLTS_Clone_backpack_eod
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault EOD Backpack";
	model = "\JLTS_AE_GM\SEA_Backpack_GM_Base.p3d";
	hiddenSelectionsTextures[] =
	{
		"\JLTS_AE_GM\data\BaseTextures\Backpack\Backpack_EOD.paa"
	};
	maximumLoad = 500;
};
class MET_Backpack_CA_Medic : JLTS_Clone_backpack_medic
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Medic Backpack";
	model = "\JLTS_AE_GM\SEA_Backpack_GM_Medic.p3d";
	hiddenSelectionsTextures[] =
	{
		"\JLTS_AE_GM\data\BaseTextures\Backpack\Medic\BackpackMedic_ca.paa"
	};
	maximumLoad = 400;
};
class MET_Backpack_CA_RTO : JLTS_Clone_backpack_RTO
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault RTO Backpack";
	model = "\JLTS_AE_GM\SEA_Backpack_GM_RTO.p3d";
	hiddenselections[] =
	{
		"Camo1",
		"Camo2"
	};
	hiddenSelectionsTextures[] =
	{
		"\JLTS_AE_GM\data\BaseTextures\Backpack\RTO\Backpack_Base_ca.paa",
		"\JLTS_AE_GM\data\BaseTextures\Backpack\RTO\Backpack_RTO_ca.paa"
	};
	maximumLoad = 300;
};

// Mini-LRs
class JLTS_Clone_LR_attachment;
class MET_MiniLR_MK1 : JLTS_Clone_LR_attachment
{
	scope = 2;
	displayName = "[16th] RTO Mini Backpack Mk1";
	maximumLoad = 300;
};

class JLTS_Clone_RTO_pack;
class MET_MiniLR_MK2 : JLTS_Clone_RTO_pack
{
	scope = 2;
	displayName = "[16th] RTO Mini Backpack Mk2";
	maximumLoad = 300;
};

class Aux212_Clone_Radio_LR;
class MET_MiniLR_MK3 : Aux212_Clone_Radio_LR
{
	scope = 2;
	displayName = "[16th] RTO Mini Backpack Mk3";
	maximumLoad = 300;
};

// ARC
class Aux212_ARC_Backpack;
class MET_Backpack_ARC_212 : Aux212_ARC_Backpack
{
	author = "Hazmat";
	displayName = "[16th] ARC Backpack";
	scope = 2;
	maximumLoad = 750;
};

class JLTS_Clone_ARC_backpack;
class MET_Backpack_ARC_JLTS : JLTS_Clone_ARC_backpack
{
	author = "Hazmat";
	displayName = "[16th] ARC Backpack (JLTS)";
	scope = 2;
	maximumLoad = 750;
};

class B_Kitbag_rgr;
class MET_Backpack_ARC : B_Kitbag_rgr
{
	author = "Hazmat";
	scope = 2;
	maximumload = 750;
	displayName = "[16th] ARC Backpack";
	model = "z\MET\addons\Armor_Rewrite\Backpacks\Models\ARC_Backpack.p3d";
	picture = "z\MET\addons\Armor_Rewrite\Data\UI\ARC_Backpack_UI_ca.paa";
	hiddenSelections[] = { "camo1" };
	hiddenSelectionsTextures[] = { "z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\ARC_Backpack_CO.paa" };
	hiddenSelectionsMaterials[] = { "z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\ARC_Backpack.rvmat" };
	containerClass = "Supply250";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "JLTS_clone_rto_radio_dialog";
	tf_subtype = "digital_lr";
	tf_range = 35000;
};

// Jetpack
class JLTS_Clone_jumppack_JT12;
class MET_Jetpack_Base : JLTS_Clone_jumppack_JT12
{
	scope = 2;
	displayName = "[16th] JT-12";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Jetpack_CO.paa"
	};
	maximumLoad = 200;
	BNA_KC_jetpacks_isJetpack = 1;
	BNA_KC_jetpacks_speed = 4;
	BNA_KC_jetpacks_strength = 15;
	BNA_KC_jetpacks_fuel = 200;
	BNA_KC_jetpacks_canHover = 1;
	BNA_KC_jetpacks_effectPoints[] =
	{
		{-0.15051,-0.219357,-0.247619},
		{0.15051,-0.219357,-0.247619}
	};
	BNA_KC_jetpacks_effects[] =
	{
		"BNA_KC_cloudlet_jetpackFire_blue",
		"BNA_KC_cloudlet_jetpackSmoke"
	};
	BNA_KC_jetpacks_effectSound = "\ORA\BNA_KC\addons\jetpacks\data\audio\Jetpack_Loop.wss";
	BNA_KC_jetpacks_lightColor[] = { 0,0.1,0.39999998 };
	BNA_KC_jetpacks_freefallHeight = 500;
};
class MET_Jetpack_Medic : MET_Jetpack_Base
{
	scope = 2;
	displayName = "[16th] JT-12 (Medic)";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Jetpack_Medic_CO.paa"
	};
	maximumLoad = 250;
};
class MET_Jetpack_RTO : MET_Jetpack_Base
{
	scope = 2;
	displayName = "[16th] JT-12 (RTO)";
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Jetpack_CO.paa"
	};
	maximumLoad = 200;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
	tf_encryptionCode = "tf_west_radio_code";
	tf_dialog = "rt1523g_radio_dialog";
	tf_subtype = "digital_lr";
};

// Jumpack
class JLTS_Clone_jumppack_mc;
class MET_Jumppack_Base : JLTS_Clone_jumppack_mc
{
	author = "Hazmat";
	scope = 2;
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
	displayName = "[16th] Jump Pack";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Jumppack_CO.paa"
	};
	maximumLoad = 250;
	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 0;
	tf_range = 10000;
	tf_subtype = "digital_lr";
	sc_jumppack = 1;
	sc_particles[] =
	{
		{0,-0.175,-0.15}
	};
	RD501_jumppack_is_jumppack = 0;
	RD501_jumppack_spam_delay = 1;
	RD501_jumppack_energy_capacity = 100;
	RD501_jumppack_recharge = 4;
	RD501_jumppack_jump_effect_script = "RD501_jumppack_fnc_effect_jt_21";
	RD501_jumppack_effect_points[] =
	{

		{
			"spine3",
			{0,-0.30000001,-0.1}
		}
	};
	RD501_jumppack_sound_ignite[] =
	{
		"RD501_Jumppack\sounds\cdv21Start.ogg"
	};
	RD501_jumppack_sound_land[] =
	{
		"RD501_Jumppack\sounds\cdv21End.ogg"
	};
	RD501_jumppack_sound_idle[] =
	{
		"RD501_Jumppack\sounds\cdv21Idle.ogg"
	};
	RD501_jumppack_skin_group[] =
	{
		"default_texture_group"
	};
	RD501_jumppack_jump_types[] =
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
	NSM_jumppack_is_jumppack = 0;
	NSM_jumppack_spam_delay = 1;
	NSM_jumppack_energy_capacity = 100;
	NSM_jumppack_recharge = 4;
	NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
	NSM_jumppack_effect_points[] =
	{

		{

			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		}
	};
	NSM_jumppack_sound_ignite[] =
	{
		"NSM_Main\sounds\cdv21Start.ogg"
	};
	NSM_jumppack_sound_land[] =
	{
		"NSM_Main\sounds\cdv21End.ogg"
	};
	NSM_jumppack_sound_idle[] =
	{
		"NSM_Main\sounds\cdv21Idle.ogg"
	};
	NSM_jumppack_jump_types[] =
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
class MET_Jumppack_RTO : JLTS_Clone_jumppack_mc
{
	author = "Hazmat";
	scope = 2;
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
	displayName = "[16th] Jump Pack (RTO)";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Jumppack_CO.paa"
	};
	maximumLoad = 250;
	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 1;
	tf_range = 10000;
	tf_subtype = "digital_lr";
	sc_jumppack = 1;
	sc_particles[] =
	{
		{0,-0.175,-0.15}
	};
	RD501_jumppack_is_jumppack = 0;
	RD501_jumppack_spam_delay = 1;
	RD501_jumppack_energy_capacity = 100;
	RD501_jumppack_recharge = 4;
	RD501_jumppack_jump_effect_script = "RD501_jumppack_fnc_effect_jt_21";
	RD501_jumppack_effect_points[] =
	{

		{
			"spine3",
			{0,-0.30000001,-0.1}
		}
	};
	RD501_jumppack_sound_ignite[] =
	{
		"RD501_Jumppack\sounds\cdv21Start.ogg"
	};
	RD501_jumppack_sound_land[] =
	{
		"RD501_Jumppack\sounds\cdv21End.ogg"
	};
	RD501_jumppack_sound_idle[] =
	{
		"RD501_Jumppack\sounds\cdv21Idle.ogg"
	};
	RD501_jumppack_skin_group[] =
	{
		"default_texture_group"
	};
	RD501_jumppack_jump_types[] =
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
	NSM_jumppack_is_jumppack = 0;
	NSM_jumppack_spam_delay = 1;
	NSM_jumppack_energy_capacity = 100;
	NSM_jumppack_recharge = 4;
	NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
	NSM_jumppack_effect_points[] =
	{

		{

			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		}
	};
	NSM_jumppack_sound_ignite[] =
	{
		"NSM_Main\sounds\cdv21Start.ogg"
	};
	NSM_jumppack_sound_land[] =
	{
		"NSM_Main\sounds\cdv21End.ogg"
	};
	NSM_jumppack_sound_idle[] =
	{
		"NSM_Main\sounds\cdv21Idle.ogg"
	};
	NSM_jumppack_jump_types[] =
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
class MET_Jumppack_Medic : JLTS_Clone_jumppack_mc
{
	author = "Hazmat";
	scope = 2;
	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\Clone_jumppack_mc_ui_ca.paa";
	displayName = "[16th] Jump Pack (Medic)";
	hiddenSelections[] =
	{
		"camo1"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Backpacks\Textures\Base\MET_Jumppack_Medic_CO.paa"
	};
	maximumLoad = 300;
	tf_dialog = "JLTS_clone_lr_programmer_radio_dialog";
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_encryptionCode = "tf_west_radio_code";
	tf_hasLRradio = 0;
	tf_range = 10000;
	tf_subtype = "digital_lr";
	sc_jumppack = 1;
	sc_particles[] =
	{
		{0,-0.175,-0.15}
	};
	RD501_jumppack_is_jumppack = 0;
	RD501_jumppack_spam_delay = 1;
	RD501_jumppack_energy_capacity = 100;
	RD501_jumppack_recharge = 4;
	RD501_jumppack_jump_effect_script = "RD501_jumppack_fnc_effect_jt_21";
	RD501_jumppack_effect_points[] =
	{

		{
			"spine3",
			{0,-0.30000001,-0.1}
		}
	};
	RD501_jumppack_sound_ignite[] =
	{
		"RD501_Jumppack\sounds\cdv21Start.ogg"
	};
	RD501_jumppack_sound_land[] =
	{
		"RD501_Jumppack\sounds\cdv21End.ogg"
	};
	RD501_jumppack_sound_idle[] =
	{
		"RD501_Jumppack\sounds\cdv21Idle.ogg"
	};
	RD501_jumppack_skin_group[] =
	{
		"default_texture_group"
	};
	RD501_jumppack_jump_types[] =
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
	NSM_jumppack_is_jumppack = 0;
	NSM_jumppack_spam_delay = 1;
	NSM_jumppack_energy_capacity = 100;
	NSM_jumppack_recharge = 4;
	NSM_jumppack_jump_effect_script = "NSM_jumppack_effect_fnc_jt_21";
	NSM_jumppack_effect_points[] =
	{

		{

			{
				"spine3",
				{0,-0.30000001,-0.1}
			}
		}
	};
	NSM_jumppack_sound_ignite[] =
	{
		"NSM_Main\sounds\cdv21Start.ogg"
	};
	NSM_jumppack_sound_land[] =
	{
		"NSM_Main\sounds\cdv21End.ogg"
	};
	NSM_jumppack_sound_idle[] =
	{
		"NSM_Main\sounds\cdv21Idle.ogg"
	};
	NSM_jumppack_jump_types[] =
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