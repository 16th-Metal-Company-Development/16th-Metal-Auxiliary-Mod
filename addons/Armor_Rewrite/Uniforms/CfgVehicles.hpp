// ==================================================================================================================
// Base Armors | MET_Uniform_[Branch]_[Rank/Person]_[Base]
// ==================================================================================================================
// Trooper
class JLTS_Clone_P2_DC15A;
class MET_Uniform_Trooper_Base : JLTS_Clone_P2_DC15A
{
	scope = 2;
	displayName = "[16th] Trooper";
	uniformClass = "MET_Uniform_Trooper";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_Trooper_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_Trooper_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	class HitPoints : HitPoints
	{
		class HitFace
		{
			armor = 1;
			material = -1;
			name = "face_hub";
			passThrough = 0.2;
			radius = 0.079999998;
			explosionShielding = 0.1;
			minimalHit = 0.0099999998;
		};
		class HitNeck : HitFace
		{
			armor = 1;
			material = -1;
			name = "neck";
			passThrough = .2
				radius = 0.1;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
		};
		class HitHead : HitNeck
		{
			armor = 1;
			material = -1;
			name = "head";
			passThrough = .2
				radius = 0.2;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis : HitHead
		{
			armor = 6;
			material = -1;
			name = "pelvis";
			passThrough = .2
				radius = 0.23999999;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "";
		};
		class HitAbdomen : HitPelvis
		{
			armor = 6;
			material = -1;
			name = "spine1";
			passThrough = .2
				radius = 0.16;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitDiaphragm : HitAbdomen
		{
			armor = 6;
			material = -1;
			name = "spine2";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitChest : HitDiaphragm
		{
			armor = 6;
			material = -1;
			name = "spine3";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitBody : HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 0.2;
			radius = 0;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms : HitBody
		{
			armor = 6;
			material = -1;
			name = "arms";
			passThrough = 0.2;
			radius = 0.1;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class HitHands : HitArms
		{
			armor = 6;
			material = -1;
			name = "hands";
			passThrough = 0.3;
			radius = 0.1;
			explosionShielding = 1;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "HitArms";
		};
		class HitLegs : HitHands
		{
			armor = 6;
			material = -1;
			name = "legs";
			passThrough = 0.2;
			radius = 0.14;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class Incapacitated : HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 3;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
		class HitLeftArm
		{
			armor = 6;
			material = -1;
			name = "hand_l";
			passThrough = 0.2
				radius = 0.079999998;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
		};
		class HitRightArm : HitLeftArm
		{
			name = "hand_r";
		};
		class HitLeftLeg
		{
			armor = 6;
			material = -1;
			name = "leg_l";
			passThrough = 0.2
				radius = 0.1;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
		};
		class HitRightLeg : HitLeftLeg
		{
			name = "leg_r";
		};
	};
	armor = 2;
	armorStructural = 4;
	explosionShielding = .3;
	minTotalDamageThreshold = 0.001;
	impactDamageMultiplier = 0.5;
	class Wounds
	{
		tex[] = {};
		mat[] =
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
class MET_Uniform_Trooper_Cadet_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Cadet";
	uniformClass = "MET_Uniform_Trooper_Cadet";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_Cadet_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_Cadet_Uniform2_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
		"\MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Cadet",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Cadet",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Veteran_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Veteran Trooper";
	uniformClass = "MET_Uniform_Trooper_Veteran";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_VET_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_VET_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_SPC_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Specialist";
	uniformClass = "MET_Uniform_Trooper_SPC";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_SPC_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_SPC_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_SPC",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_SPC",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_NCO_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] NCO";
	uniformClass = "MET_Uniform_Trooper_NCO";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_NCO_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_NCO_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_NCO",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_NCO",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_SNCO_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] SNCO";
	uniformClass = "MET_Uniform_Trooper_SNCO";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_SNCO_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_SNCO_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_SNCO",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_SNCO",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Officer_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Officer";
	uniformClass = "MET_Uniform_Trooper_Officer";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_OFF_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_OFF_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Officer",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Officer",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Medic_Base : MET_Uniform_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Medic";
	uniformClass = "MET_Uniform_Trooper_Medic";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_MED_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_MED_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Medic",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Medic",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_EOD_Base : MET_Uniform_Trooper_Base
{
	scope = 2;
	displayName = "[16th] EOD";
	uniformClass = "MET_Uniform_Trooper_EOD";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_EOD_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_EOD_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_EOD",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_EOD",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};

// Cold Assault
class MET_Uniform_Cold_Trooper_Base : JLTS_Clone_P2_DC15A
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Trooper";
	editorPreview = "\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
	genericNames = "JLTS_Clones";
	faction = "JLTS_GAR";
	editorSubcategory = "SEA_Clones_GM";
	identityTypes[] =
	{
		"JLTS_voice_clone",
		"JLTS_head_clone",
		"JLTS_Clone_P2"
	};
	uniformClass = "MET_Uniform_Cold_Trooper";
	backpack = "";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"Uniform",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_Uniform2_CO.paa",
		"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
	};
	linkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	nakedUniform = "JLTS_CloneNaked_uniform";
	magazines[] =
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
	respawnMagazines[] =
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
	items[] =
	{
		"FirstAidKit"
	};
	respawnItems[] =
	{
		"FirstAidKit"
	};
	class HitPoints : HitPoints
	{
		class HitFace
		{
			armor = 1;
			material = -1;
			name = "face_hub";
			passThrough = 0.2;
			radius = 0.079999998;
			explosionShielding = 0.1;
			minimalHit = 0.0099999998;
		};
		class HitNeck : HitFace
		{
			armor = 1;
			material = -1;
			name = "neck";
			passThrough = .2
				radius = 0.1;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
		};
		class HitHead : HitNeck
		{
			armor = 1;
			material = -1;
			name = "head";
			passThrough = .2
				radius = 0.2;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis : HitHead
		{
			armor = 6;
			material = -1;
			name = "pelvis";
			passThrough = .2
				radius = 0.23999999;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "";
		};
		class HitAbdomen : HitPelvis
		{
			armor = 6;
			material = -1;
			name = "spine1";
			passThrough = .2
				radius = 0.16;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitDiaphragm : HitAbdomen
		{
			armor = 6;
			material = -1;
			name = "spine2";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitChest : HitDiaphragm
		{
			armor = 6;
			material = -1;
			name = "spine3";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitBody : HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 0.2;
			radius = 0;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms : HitBody
		{
			armor = 6;
			material = -1;
			name = "arms";
			passThrough = 0.2;
			radius = 0.1;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class HitHands : HitArms
		{
			armor = 6;
			material = -1;
			name = "hands";
			passThrough = 0.3;
			radius = 0.1;
			explosionShielding = 1;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "HitArms";
		};
		class HitLegs : HitHands
		{
			armor = 6;
			material = -1;
			name = "legs";
			passThrough = 0.2;
			radius = 0.14;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class Incapacitated : HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 3;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
		class HitLeftArm
		{
			armor = 6;
			material = -1;
			name = "hand_l";
			passThrough = 0.2
				radius = 0.079999998;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
		};
		class HitRightArm : HitLeftArm
		{
			name = "hand_r";
		};
		class HitLeftLeg
		{
			armor = 6;
			material = -1;
			name = "leg_l";
			passThrough = 0.2
				radius = 0.1;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
		};
		class HitRightLeg : HitLeftLeg
		{
			name = "leg_r";
		};
	};
	armor = 2;
	armorStructural = 4;
	explosionShielding = .3;
	minTotalDamageThreshold = 0.001;
	impactDamageMultiplier = 0.5;
	class Wounds
	{
		tex[] = {};
		mat[] =
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
class MET_Uniform_Cold_NCO_Base : JLTS_Clone_P2_DC15A
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault NCO";
	editorPreview = "\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
	genericNames = "JLTS_Clones";
	faction = "JLTS_GAR";
	editorSubcategory = "SEA_Clones_GM";
	identityTypes[] =
	{
		"JLTS_voice_clone",
		"JLTS_head_clone",
		"JLTS_Clone_P2"
	};
	uniformClass = "MET_Uniform_Cold_NCO";
	backpack = "";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"Uniform",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_NCO_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_NCO_Uniform2_CO.paa",
		"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
	};
	linkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	nakedUniform = "JLTS_CloneNaked_uniform";
	magazines[] =
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
	respawnMagazines[] =
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
	items[] =
	{
		"FirstAidKit"
	};
	respawnItems[] =
	{
		"FirstAidKit"
	};
	class HitPoints : HitPoints
	{
		class HitFace
		{
			armor = 1;
			material = -1;
			name = "face_hub";
			passThrough = 0.2;
			radius = 0.079999998;
			explosionShielding = 0.1;
			minimalHit = 0.0099999998;
		};
		class HitNeck : HitFace
		{
			armor = 1;
			material = -1;
			name = "neck";
			passThrough = .2
				radius = 0.1;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
		};
		class HitHead : HitNeck
		{
			armor = 1;
			material = -1;
			name = "head";
			passThrough = .2
				radius = 0.2;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis : HitHead
		{
			armor = 6;
			material = -1;
			name = "pelvis";
			passThrough = .2
				radius = 0.23999999;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "";
		};
		class HitAbdomen : HitPelvis
		{
			armor = 6;
			material = -1;
			name = "spine1";
			passThrough = .2
				radius = 0.16;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitDiaphragm : HitAbdomen
		{
			armor = 6;
			material = -1;
			name = "spine2";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitChest : HitDiaphragm
		{
			armor = 6;
			material = -1;
			name = "spine3";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitBody : HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 0.2;
			radius = 0;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms : HitBody
		{
			armor = 6;
			material = -1;
			name = "arms";
			passThrough = 0.2;
			radius = 0.1;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class HitHands : HitArms
		{
			armor = 6;
			material = -1;
			name = "hands";
			passThrough = 0.3;
			radius = 0.1;
			explosionShielding = 1;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "HitArms";
		};
		class HitLegs : HitHands
		{
			armor = 6;
			material = -1;
			name = "legs";
			passThrough = 0.2;
			radius = 0.14;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class Incapacitated : HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 3;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
		class HitLeftArm
		{
			armor = 6;
			material = -1;
			name = "hand_l";
			passThrough = 0.2
				radius = 0.079999998;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
		};
		class HitRightArm : HitLeftArm
		{
			name = "hand_r";
		};
		class HitLeftLeg
		{
			armor = 6;
			material = -1;
			name = "leg_l";
			passThrough = 0.2
				radius = 0.1;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
		};
		class HitRightLeg : HitLeftLeg
		{
			name = "leg_r";
		};
	};
	armor = 2;
	armorStructural = 4;
	explosionShielding = .3;
	minTotalDamageThreshold = 0.001;
	impactDamageMultiplier = 0.5;
	class Wounds
	{
		tex[] = {};
		mat[] =
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
class MET_Uniform_Cold_Officer_Base : JLTS_Clone_P2_DC15A
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Officer";
	editorPreview = "\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
	genericNames = "JLTS_Clones";
	faction = "JLTS_GAR";
	editorSubcategory = "SEA_Clones_GM";
	identityTypes[] =
	{
		"JLTS_voice_clone",
		"JLTS_head_clone",
		"JLTS_Clone_P2"
	};
	uniformClass = "MET_Uniform_Cold_Officer";
	backpack = "";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"Uniform",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_OFF_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_OFF_Uniform2_CO.paa",
		"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
	};
	linkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	nakedUniform = "JLTS_CloneNaked_uniform";
	magazines[] =
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
	respawnMagazines[] =
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
	items[] =
	{
		"FirstAidKit"
	};
	respawnItems[] =
	{
		"FirstAidKit"
	};
	class HitPoints : HitPoints
	{
		class HitFace
		{
			armor = 1;
			material = -1;
			name = "face_hub";
			passThrough = 0.2;
			radius = 0.079999998;
			explosionShielding = 0.1;
			minimalHit = 0.0099999998;
		};
		class HitNeck : HitFace
		{
			armor = 1;
			material = -1;
			name = "neck";
			passThrough = .2
				radius = 0.1;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
		};
		class HitHead : HitNeck
		{
			armor = 1;
			material = -1;
			name = "head";
			passThrough = .2
				radius = 0.2;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis : HitHead
		{
			armor = 6;
			material = -1;
			name = "pelvis";
			passThrough = .2
				radius = 0.23999999;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "";
		};
		class HitAbdomen : HitPelvis
		{
			armor = 6;
			material = -1;
			name = "spine1";
			passThrough = .2
				radius = 0.16;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitDiaphragm : HitAbdomen
		{
			armor = 6;
			material = -1;
			name = "spine2";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitChest : HitDiaphragm
		{
			armor = 6;
			material = -1;
			name = "spine3";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitBody : HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 0.2;
			radius = 0;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms : HitBody
		{
			armor = 6;
			material = -1;
			name = "arms";
			passThrough = 0.2;
			radius = 0.1;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class HitHands : HitArms
		{
			armor = 6;
			material = -1;
			name = "hands";
			passThrough = 0.3;
			radius = 0.1;
			explosionShielding = 1;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "HitArms";
		};
		class HitLegs : HitHands
		{
			armor = 6;
			material = -1;
			name = "legs";
			passThrough = 0.2;
			radius = 0.14;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class Incapacitated : HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 3;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
		class HitLeftArm
		{
			armor = 6;
			material = -1;
			name = "hand_l";
			passThrough = 0.2
				radius = 0.079999998;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
		};
		class HitRightArm : HitLeftArm
		{
			name = "hand_r";
		};
		class HitLeftLeg
		{
			armor = 6;
			material = -1;
			name = "leg_l";
			passThrough = 0.2
				radius = 0.1;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
		};
		class HitRightLeg : HitLeftLeg
		{
			name = "leg_r";
		};
	};
	armor = 2;
	armorStructural = 4;
	explosionShielding = .3;
	minTotalDamageThreshold = 0.001;
	impactDamageMultiplier = 0.5;
	class Wounds
	{
		tex[] = {};
		mat[] =
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
class MET_Uniform_Cold_Medic_Base : JLTS_Clone_P2_DC15A
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault Medic";
	editorPreview = "\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
	genericNames = "JLTS_Clones";
	faction = "JLTS_GAR";
	editorSubcategory = "SEA_Clones_GM";
	identityTypes[] =
	{
		"JLTS_voice_clone",
		"JLTS_head_clone",
		"JLTS_Clone_P2"
	};
	uniformClass = "MET_Uniform_Cold_Medic";
	backpack = "";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"Uniform",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_MED_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_Uniform2_CO.paa",
		"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
	};
	linkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	nakedUniform = "JLTS_CloneNaked_uniform";
	magazines[] =
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
	respawnMagazines[] =
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
	items[] =
	{
		"FirstAidKit"
	};
	respawnItems[] =
	{
		"FirstAidKit"
	};
	class HitPoints : HitPoints
	{
		class HitFace
		{
			armor = 1;
			material = -1;
			name = "face_hub";
			passThrough = 0.2;
			radius = 0.079999998;
			explosionShielding = 0.1;
			minimalHit = 0.0099999998;
		};
		class HitNeck : HitFace
		{
			armor = 1;
			material = -1;
			name = "neck";
			passThrough = .2
				radius = 0.1;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
		};
		class HitHead : HitNeck
		{
			armor = 1;
			material = -1;
			name = "head";
			passThrough = .2
				radius = 0.2;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis : HitHead
		{
			armor = 6;
			material = -1;
			name = "pelvis";
			passThrough = .2
				radius = 0.23999999;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "";
		};
		class HitAbdomen : HitPelvis
		{
			armor = 6;
			material = -1;
			name = "spine1";
			passThrough = .2
				radius = 0.16;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitDiaphragm : HitAbdomen
		{
			armor = 6;
			material = -1;
			name = "spine2";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitChest : HitDiaphragm
		{
			armor = 6;
			material = -1;
			name = "spine3";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitBody : HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 0.2;
			radius = 0;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms : HitBody
		{
			armor = 6;
			material = -1;
			name = "arms";
			passThrough = 0.2;
			radius = 0.1;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class HitHands : HitArms
		{
			armor = 6;
			material = -1;
			name = "hands";
			passThrough = 0.3;
			radius = 0.1;
			explosionShielding = 1;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "HitArms";
		};
		class HitLegs : HitHands
		{
			armor = 6;
			material = -1;
			name = "legs";
			passThrough = 0.2;
			radius = 0.14;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class Incapacitated : HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 3;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
		class HitLeftArm
		{
			armor = 6;
			material = -1;
			name = "hand_l";
			passThrough = 0.2
				radius = 0.079999998;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
		};
		class HitRightArm : HitLeftArm
		{
			name = "hand_r";
		};
		class HitLeftLeg
		{
			armor = 6;
			material = -1;
			name = "leg_l";
			passThrough = 0.2
				radius = 0.1;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
		};
		class HitRightLeg : HitLeftLeg
		{
			name = "leg_r";
		};
	};
	armor = 2;
	armorStructural = 4;
	explosionShielding = .3;
	minTotalDamageThreshold = 0.001;
	impactDamageMultiplier = 0.5;
	class Wounds
	{
		tex[] = {};
		mat[] =
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
class MET_Uniform_Cold_EOD_Base : JLTS_Clone_P2_DC15A
{
	author = "Hazmat";
	scope = 2;
	displayName = "[16th] Cold Assault EOD";
	editorPreview = "\MRC\JLTS\characters\CloneArmor\data\ui\editorPreviews\JLTS_Clone_P2_DC15A.jpg";
	genericNames = "JLTS_Clones";
	faction = "JLTS_GAR";
	editorSubcategory = "SEA_Clones_GM";
	identityTypes[] =
	{
		"JLTS_voice_clone",
		"JLTS_head_clone",
		"JLTS_Clone_P2"
	};
	uniformClass = "MET_Uniform_Cold_EOD";
	backpack = "";
	model = "JLTS_AE_GM\SEA_Uniform_GM_Fabric.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"Uniform",
		"insignia"
	};
	hiddenSelectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_EOD_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_CA_Uniform2_CO.paa",
		"\JLTS_AE_GM\data\BaseTextures\Uniform\Undersuit_co.paa"
	};
	linkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"SEA_HELMET_GM_Base",
		"SEA_Vest_GM_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	weapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	respawnWeapons[] =
	{
		"JLTS_DC15A_plastic",
		"JLTS_DC17SA",
		"Throw",
		"Put"
	};
	nakedUniform = "JLTS_CloneNaked_uniform";
	magazines[] =
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
	respawnMagazines[] =
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
	items[] =
	{
		"FirstAidKit"
	};
	respawnItems[] =
	{
		"FirstAidKit"
	};
	class HitPoints : HitPoints
	{
		class HitFace
		{
			armor = 1;
			material = -1;
			name = "face_hub";
			passThrough = 0.2;
			radius = 0.079999998;
			explosionShielding = 0.1;
			minimalHit = 0.0099999998;
		};
		class HitNeck : HitFace
		{
			armor = 1;
			material = -1;
			name = "neck";
			passThrough = .2
				radius = 0.1;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
		};
		class HitHead : HitNeck
		{
			armor = 1;
			material = -1;
			name = "head";
			passThrough = .2
				radius = 0.2;
			explosionShielding = 0.5;
			minimalHit = 0.0099999998;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis : HitHead
		{
			armor = 6;
			material = -1;
			name = "pelvis";
			passThrough = .2
				radius = 0.23999999;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "";
		};
		class HitAbdomen : HitPelvis
		{
			armor = 6;
			material = -1;
			name = "spine1";
			passThrough = .2
				radius = 0.16;
			explosionShielding = 3;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitDiaphragm : HitAbdomen
		{
			armor = 6;
			material = -1;
			name = "spine2";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitChest : HitDiaphragm
		{
			armor = 6;
			material = -1;
			name = "spine3";
			passThrough = 0.2;
			radius = 0.18000001;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
		};
		class HitBody : HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 0.2;
			radius = 0;
			explosionShielding = 6;
			visual = "injury_body";
			minimalHit = 0.0099999998;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms : HitBody
		{
			armor = 6;
			material = -1;
			name = "arms";
			passThrough = 0.2;
			radius = 0.1;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class HitHands : HitArms
		{
			armor = 6;
			material = -1;
			name = "hands";
			passThrough = 0.3;
			radius = 0.1;
			explosionShielding = 1;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
			depends = "HitArms";
		};
		class HitLegs : HitHands
		{
			armor = 6;
			material = -1;
			name = "legs";
			passThrough = 0.2;
			radius = 0.14;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
			depends = "0";
		};
		class Incapacitated : HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 3;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
		class HitLeftArm
		{
			armor = 6;
			material = -1;
			name = "hand_l";
			passThrough = 0.2
				radius = 0.079999998;
			explosionShielding = 3;
			visual = "injury_hands";
			minimalHit = 0.0099999998;
		};
		class HitRightArm : HitLeftArm
		{
			name = "hand_r";
		};
		class HitLeftLeg
		{
			armor = 6;
			material = -1;
			name = "leg_l";
			passThrough = 0.2
				radius = 0.1;
			explosionShielding = 3;
			visual = "injury_legs";
			minimalHit = 0.0099999998;
		};
		class HitRightLeg : HitLeftLeg
		{
			name = "leg_r";
		};
	};
	armor = 2;
	armorStructural = 4;
	explosionShielding = .3;
	minTotalDamageThreshold = 0.001;
	impactDamageMultiplier = 0.5;
	class Wounds
	{
		tex[] = {};
		mat[] =
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

// Airborne
class MET_Uniform_Airborne_Trooper_Base : MET_Uniform_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Airborne Trooper";
	uniformClass = "MET_Uniform_Airborne_Trooper";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Airborne_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Airborne_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Airborne_Veteran_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Airborne Veteran Trooper";
	uniformClass = "MET_Uniform_Airborne_Veteran";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_VET_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_VET_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Airborne_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Airborne_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Airborne_CPL_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Airborne Corporal";
	uniformClass = "MET_Uniform_Airborne_CPL";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_CPL_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_CPL_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Airborne_CPL",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Airborne_CPL",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Airborne_SGT_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Airborne Sergeant";
	uniformClass = "MET_Uniform_Airborne_SGT";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_SGT_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_SGT_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Airborne_SGT",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Airborne_SGT",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Airborne_SSGT_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Airborne Staff Sergeant";
	uniformClass = "MET_Uniform_Airborne_SSGT";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_SSGT_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_SSGT_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Airborne_SSGT",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Airborne_SSGT",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Airborne_FSGT_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Airborne First Sergeant";
	uniformClass = "MET_Uniform_Airborne_FSGT";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_FSGT_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_FSGT_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Airborne_FSGT",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Airborne_FSGT",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Airborne_SGM_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Airborne Sergeant Major";
	uniformClass = "MET_Uniform_Airborne_SGM";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_SGM_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_SGM_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Airborne_SGM",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Airborne_SGM",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Airborne_Medic_Base : MET_Uniform_Trooper_Base
{
	scope = 2;
	displayName = "[16th] Airborne Medic";
	uniformClass = "MET_Uniform_Airborne_Medic";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_MED_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_AB_MED_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Airborne_Medic",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Airborne_Medic",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};

// Goff
class MET_Uniform_ARF_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] ARF";
	uniformClass = "MET_Uniform_ARF";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_ARF_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_ARF_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_ARF_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_ARF_Base",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_ARF_NCO_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] ARF NCO";
	uniformClass = "MET_Uniform_ARF_NCO";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_ARF_NCO_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_ARF_NCO_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_ARF_NCO",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_ARF_NCO",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};

// Reaper
class MET_Uniform_Reaper_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Mechanized Trooper";
	uniformClass = "MET_Uniform_Reaper";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_REP_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_REP_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Reaper_NCO_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Mechanized NCO";
	uniformClass = "MET_Uniform_Reaper_NCO";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_REP_NCO_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_REP_NCO_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};

// Dragon
class MET_Uniform_Dragon_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Artillery Trooper";
	uniformClass = "MET_Uniform_Dragon";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_DRG_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_DRG_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Dragon_NCO_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Artillery NCO";
	uniformClass = "MET_Uniform_Dragon_NCO";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_DRG_NCO_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Base\MET_DRG_NCO_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Veteran",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};

// Misc
class JLTS_Clone_P2_marshalcommander;
class MET_Uniform_Marshal_Base : JLTS_Clone_P2_marshalcommander
{
	scope = 1;
	displayName = "[16th] Marshal";
	uniformClass = "MET_Uniform_Marshal";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Avalanche_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Avalanche_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"helmet_16th_avalanche",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"helmet_16th_avalanche",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};

// ==================================================================================================================
// Custom Armors | MET_Uniform_[Branch]_[Rank/Person]_[Base]
// ==================================================================================================================
// Trooper
class MET_Uniform_Trooper_Ben_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Ben";
	uniformClass = "MET_Uniform_Trooper_Ben";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Ben_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Ben_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Ben",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Ben",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Blackrose_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Blackrose";
	uniformClass = "MET_Uniform_Trooper_Blackrose";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Blackrose_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Blackrose_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Blackrose",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Blackrose",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Blatt_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Blatt";
	uniformClass = "MET_Uniform_Trooper_Blatt";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Blatt_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Blatt_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Blatt",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Blatt",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Cougar_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Cougar";
	uniformClass = "MET_Uniform_Trooper_Cougar";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Cougar_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Cougar_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Cougar",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Cougar",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Fool_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Fool";
	uniformClass = "MET_Uniform_Trooper_Fool";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Fool_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Fool_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Pilot_Fool",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Pilot_Fool",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Hazmat_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Hazmat";
	uniformClass = "MET_Uniform_Trooper_Hazmat";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Hazmat_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Hazmat_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Hazmat",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Hazmat",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Hood_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Hood";
	uniformClass = "MET_Uniform_Trooper_Hood";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Hood_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Hood_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Hood",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Hood",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Kix_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Kix";
	uniformClass = "MET_Uniform_Trooper_Kix";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Kix_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Kix_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_ARF_Kix",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_ARF_Kix",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Trooper_Moldy_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Moldy";
	uniformClass = "MET_Uniform_Trooper_Moldy";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Moldy_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Moldy_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Moldy",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Moldy",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Moldy_Zeus_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Moldy Zeus";
	uniformClass = "MET_Uniform_Trooper_Moldy_Zeus";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Moldy_Zeus_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Moldy_Zeus_Uniform2_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
		"\MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Moldy",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Moldy",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Nix_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Nix";
	uniformClass = "MET_Uniform_Trooper_Nix";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Nix_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Nix_Uniform1_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Nix",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Nix",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Noble_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Noble";
	uniformClass = "MET_Uniform_Trooper_Noble";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Noble_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Noble_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Noble",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Noble",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Prez_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Prez";
	uniformClass = "MET_Uniform_Trooper_Prez";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Prez_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Prez_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Prez",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Prez",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Ronin_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Ronin";
	uniformClass = "MET_Uniform_Trooper_Ronin";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Ronin_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Ronin_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Ronin",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Ronin",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Roz_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Roz";
	uniformClass = "MET_Uniform_Trooper_Roz";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Roz_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Roz_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Roz",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Roz",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Trooper_Six_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Six";
	uniformClass = "MET_Uniform_Trooper_Six";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Six_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Six_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Six",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Six",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Trooper_Sunto_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Sunto";
	uniformClass = "MET_Uniform_Trooper_Sunto";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Sunto_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Sunto_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Sunto",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Sunto",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Vergil_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Vergils";
	uniformClass = "MET_Uniform_Trooper_Vergil";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Vergil_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Vergil_Uniform2_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		"\MRC\JLTS\characters\CloneArmor\data\clone_armor1_clean.rvmat",
		"\MRC\JLTS\characters\CloneArmor\data\clone_armor2_clean.rvmat"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Vergil",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Vergil",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Winters_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Winters";
	uniformClass = "MET_Uniform_Trooper_Winters";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Winters_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Winters_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Winters",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Winters",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch"
	};
};
class MET_Uniform_Trooper_Maxson_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Maxson";
	uniformClass = "MET_Uniform_Trooper_Maxson";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Maxson_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Maxson_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Maxson",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Maxson",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};
class MET_Uniform_Trooper_Merlin_Base : MET_Uniform_Trooper_Base
{
	scope = 1;
	displayName = "[16th] Merlin";
	uniformClass = "MET_Uniform_Trooper_Merlin";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Merlin_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Merlin_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Merlin",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Merlin",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};	

// Misc
class MET_Uniform_Marshal_Avalanche_Base : JLTS_Clone_P2_marshalcommander
{
	scope = 1;
	displayName = "[16th] Avalanche";
	uniformClass = "MET_Uniform_Marshal_Avalanche";
	hiddenselectionsTextures[] =
	{
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Avalanche_Uniform1_CO.paa",
		"z\MET\addons\Armor_Rewrite\Uniforms\Textures\Custom\MET_Avalanche_Uniform2_CO.paa"
	};
	linkedItems[] =
	{
		"MET_Helmet_Trooper_Avalanche",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
	respawnLinkedItems[] =
	{
		"MET_Helmet_Trooper_Avalanche",
		"ItemMap",
		"JLTS_clone_comlink",
		"ItemCompass",
		"ItemWatch",
		"JLTS_CloneNVG"
	};
};