
class MET_LAAT_Mk2: 3as_LAAT_MK2
	{
		displayName = "[16th] LAAT MK2";
		author = "Denal";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Thunder";
		typicalcargo[] = 
		{
			"MET_P2_AR"
		};
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_Base.paa",
			"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_wings_base.paa",
			"z\16th\addons\vehicles\vics\LAAT\Weapons_CO.paa",
			"z\16th\addons\vehicles\vics\LAAT\Weapon_Details_CO.paa",
			"z\16th\addons\vehicles\vics\LAAT\16_Laat_Interior.paa"
		};
		class EventHandlers: DefaultEventHandlers
		{
			init = "[_this select 0] call MET_fnc_addCrates;";
		};
	};
	class MET_LAAT_Mk2_Lamps: 3as_LAAT_Mk2Lights
	{
		displayName = "[16th] LAAT MK2 (Lamps)";
		author = "Denal";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Thunder";
		typicalcargo[] = 
		{
			"MET_P2_AR"
		};
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_Base.paa",
			"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_wings_base.paa",
			"z\16th\addons\vehicles\vics\LAAT\Weapons_CO.paa",
			"z\16th\addons\vehicles\vics\LAAT\Weapon_Details_CO.paa",
			"z\16th\addons\vehicles\vics\LAAT\16_Laat_Interior.paa"
		};
		class EventHandlers: DefaultEventHandlers
		{
			init = "[_this select 0] call MET_fnc_addCrates;";
		};
	};
class MET_LAAT_MK1: 3as_LAAT_MK1
	{
		displayName = "[16th] LAAT MK1";
		author = "Denal";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Thunder";
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_Base.paa",
			"z\16th\addons\vehicles\vics\LAAT\16th_LAAT_wings_base.paa",
			"z\16th\addons\vehicles\vics\LAAT\Weapons_CO.paa",
			"z\16th\addons\vehicles\vics\LAAT\Weapon_Details_CO.paa",
			"z\16th\addons\vehicles\vics\LAAT\16_Laat_Interior.paa"
		};
		class EventHandlers: DefaultEventHandlers
		{
			init = "[_this select 0] call MET_fnc_addCrates;";
		};
	};
class MET_ARC_170: 3as_arc_170_base
	{
		displayName = "[16th] ARC 170";
		author = "Denal";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Thunder";
		
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"guns"
		};
		hiddenSelectionsTextures[] = 
		{
			"3as\3AS_ARC170\Data\units\501st_Main_Frame_CO.paa",
			"3as\3AS_ARC170\Data\units\501st_Wings_Engines_CO.paa",
			"3as\3AS_ARC170\Data\units\501st_Guns_CO.paa"
		};
	};
class MET_Z95_Base: 3AS_Z95_Republic
	{
		displayName = "[16th] Z95";
		author = "Denal";
		scope = 2;
		scopeCurator = 2;
		crew = "MET_P2_AR";
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Thunder";
		
		hiddenSelections[] = 
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[] = 
		{
			"3AS\3AS_Z95\Data\blue_co.paa",
			"3AS\3AS_Z95\Data\cockpit_co.paa",
			"3AS\3AS_Z95\data\glass\glass_ca"
		};
	};
class MET_Ywing_V1: 3AS_BTLB_Bomber
	{
		displayName = "[16th] Y Wing ";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Thunder";
		hiddenselectionstextures[] = 
		{
			"3as\3AS_btlb\textures\chasis_shadow_co.paa",
			"3as\3AS_btlb\data\detail_co.paa",
			"3as\3AS_btlb\data\interior_co.paa"
		};
	};
class MET_Tx130_Base_V1: 3as_saber_m1
	{
		displayName = "[16th] Tx-130";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Reaper";
		hiddenSelectionsTextures[] = 
		{
			"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_hull_co.paa",
			"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_weapons_co.paa"
		};
	};
class MET_Tx130_Super_v1: 3as_saber_super
	{
		displayName = "[16th] Super Tx-130";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Reaper";
		hiddenSelectionsTextures[] = 
		{
			"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_hull_co.paa",
			"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_weapons_co.paa"
		};
	};
class MET_Tx130_GL_v1: 3as_saber_m1G
	{
		displayName = "[16th] Tx-130 GL";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Reaper";
		hiddenSelectionsTextures[] = 
		{
			"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_hull_co.paa",
			"z\16th\addons\vehicles\vics\NEWTX130\16th_saber_weapons_co.paa"
		};
	};
class MET_ATTE_Base: 3as_ATTE_Base
	{
		scope=2;
		scopeCurator = 2;
		displayName="[16th] AT-TE";
		faction="metal_company";
		editorSubcategory="metal_co_EdSubCat_Reaper";
		hiddenselections[]= 
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo11"
		};
		hiddenSelectionsTextures[] = 
		{
			"z\16th\addons\vehicles\vics\ATTE\16th_ATTE_Shell.paa",
			"3as\3as_ATTE\data\Textures\3as_ATTE_Cockpit_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
			"z\16th\addons\vehicles\vics\ATTE\16th_ATTE_Legs.paa",
			"3as\3as_ATTE\data\Textures\3as_ATTE_Glass_ca.paa",
			"3as\3as_ATTE\data\Textures\3as_atte_armor_co.paa"
		};
		armor = 650;
		class EventHandlers: DefaultEventHandlers
		{
			init = "[_this select 0] call MET_fnc_addCrates;";
		};
	};
	class MET_LAATCMK2: 3AS_LAATC
	{
		displayName = "[16th] LAAT/C MK2";
		scope = 2;
		scopeCurator = 2;
		faction = "metal_company";
		editorSubcategory = "metal_co_EdSubCat_Thunder";
		crew = "MET_P2_AR";
		hiddenSelectionsTextures[] = 
		{
			"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Hull_co.paa",
			"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Wings_co.paa",
			"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Top_co.paa",
			"z\16th\addons\vehicles\vics\LAAT_C\LAAT_C_Detail_Front_co.paa"
		};
		class TextureSources
		{
			class Republic
			{
				displayName="16th LAAT/C MK2";
				author="Charger";
				textures[]=
				{
					"z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Hull_co.paa",
			        "z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Wings_co.paa",
			        "z\16th\addons\vehicles\vics\LAAT_C\16th_LAAT_C_MK2_Top_co.paa",
			        "z\16th\addons\vehicles\vics\LAAT_C\LAAT_C_Detail_Front_co.paa"
				};
			};
		};

	};