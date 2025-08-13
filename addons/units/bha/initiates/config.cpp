class CfgPatches
{
	class BHA_Initiates
	{
		units[]=
		{
			"BHA_Initiates_Initiate",
			"BHA_Initiates_Trutheseeker",
			"BHA_Initiates_Annihilator",
			"BHA_warbot",
			"BHA_SuicideBot_Soldier_Base"
		};
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
		displayName="Transports";
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
class CfgVehicles
{
	class I_Soldier_base_F;
	class BHA_warbot: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="BHA_Units";
		editorSubCategory="BHA_Initiates";
		uniformClass="MET_Warbot_Uniform";
		displayName="Warbot";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		backpack="MET_Backpack_Warbot";
		Weapons[]=
		{
			"MET_DLA13_C2",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_DLA13_C2",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"BHA_Smoke_Black_Mag",
			"MET_Smoke_Black",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[]=
		{
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"BHA_Smoke_Black_Mag",
			"MET_Smoke_Black",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		Items[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"LFP_Skirata_Knife"
		};
		respawnItems[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"LFP_Skirata_Knife"
		};
		linkedItems[]=
		{
			"ItemRadio",
			"MET_Gen2WarbotHead_NoFS",
			"MET_EliminatorUpArmorVest"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"MET_Gen2WarbotHead_NoFS",
			"MET_EliminatorUpArmorVest"
		};
		/*aimingAccuracy[] = { 0.9, 1, 1, 1 }; // Higher accuracy for elite units
		aimingShake[] = { 0.5, 0.5, 0.5, 0.5 }; // Less shaking, more stable aim
		aimingSpeed[] = { 1, 1.5, 1, 1 }; // Faster aiming speed
		commanding[] = { 1, 1, 1, 1 }; // Quick command responses
		courage[] = { 1, 1, 1, 1 }; // High courage
		general[] = { 1, 1, 1, 1 }; // General skill (includes things like awareness)
		reloadSpeed[] = { 0.9, 0.8, 1, 1 }; // Faster reload
		spotDistance[] = { 1, 1, 1, 1 }; // Good spotting range
		spotTime[] = { 0.7, 0.8, 1, 1 }; // Faster spotting response*/
		class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { {_unit setSkill [_x, 1]; } forEach ['aimingAccuracy','aimingShake','aimingSpeed','commanding','courage','general','reloadSpeed','spotDistance','spotTime']; };";
		};
	};
	class BHA_Initiate_Soldier_Base: I_Soldier_base_F
	{
		side=2;
		scope=0;
		scopeCurator=0;
		faction="BHA_Units";
		editorSubCategory="BHA_Initiates";
		uniformClass="SC_Uniform_Gloves_Green";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		Weapons[]=
		{
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"BHA_Smoke_Black_Mag",
			"MET_Smoke_Black",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[]=
		{
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"BHA_Smoke_Black_Mag",
			"MET_Smoke_Black",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		Items[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"LFP_Skirata_Knife"
		};
		respawnItems[]=
		{
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_CableTie",
			"ACE_CableTie",
			"ACE_CableTie",
			"LFP_Skirata_Knife"
		};
		linkedItems[]=
		{
			"ItemRadio",
			"MET_Helmet_WD_Black_VU",
			"MET_Vest_WD_Medium_Black",
			"SC_TacGlass"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"MET_Helmet_WD_Black_VU",
			"MET_Vest_WD_Medium_Black",
			"SC_TacGlass"
		};
		class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { {_unit setSkill [_x, 0.3]; } forEach ['aimingAccuracy','aimingShake','aimingSpeed','commanding','courage','general','reloadSpeed','spotDistance','spotTime']; };";
		};
	};
	class BHA_SuicideBot_Soldier_Base: I_Soldier_base_F
	{
		side=2;
		scope=2;
		scopeCurator=2;
		faction="BHA_Units";
		displayName="Suicide Bot";
		editorSubCategory="BHA_Initiates";
		backpack="SC_Workerbot_Powerpack";
		uniformClass="SC_Workerbot_Uniform";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"G_NATO_default"
		};
		Weapons[]=
		{
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
		};
		respawnMagazines[]=
		{
			
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
		};
		Items[]=
		{};
		respawnItems[]=
		{};
		linkedItems[]=
		{
			"ItemRadio",
			"SC_Workerbot_Head"
		};
		respawnLinkedItems[]=
		{
			"ItemRadio",
			"SC_Workerbot_Head"
		};
		class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { _unit spawn { params['_unit']; while {alive _unit} do { private _nearest = objNull; private _minDist = 1e10; { if (side _x isEqualTo west) then { private _dist = _unit distance _x; if (_dist < _minDist) then { _minDist = _dist; _nearest = _x; }; }; } forEach allPlayers; if (!isNull _nearest) then { _unit doMove getPosASL _nearest; _unit forceSpeed 12; }; sleep 1; }; }; _unit addEventHandler ['Killed', { params['_unit']; _pos = getPosATL _unit; 'Bo_GBU12_LGB' createVehicle _pos; }]; };"
		};
	};
	class BHA_Initiates_Initiate: BHA_Initiate_Soldier_Base
	{
		displayName="Initiate";
		scope=2;
		scopeCurator=2;
		//editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Initiates\BHA_Initiates_Initiate.jpg";
		backpack="MET_Backpack_WD_Black";
		Weapons[]=
		{
			"MET_DLA13_C2",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_DLA13_C2",
			"Put",
			"Throw"
		};
	};
	class BHA_Initiates_Trutheseeker: BHA_Initiate_Soldier_Base
	{
		displayName="Initiate Truthseeker";
		scope=2;
		scopeCurator=2;
		//editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Initiates\BHA_Initiates_Trutheseeker.jpg";
		Weapons[]=
		{
			"LFP_Skirata_Knife",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"LFP_Skirata_Knife",
			"Put",
			"Throw"
		};
	};
	class BHA_Initiates_Annihilator: BHA_Initiate_Soldier_Base
	{
		displayName="Initiate Annihilator";
		scope=2;
		scopeCurator=2;
		icon="iconManAT";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Initiates\BHA_Initiates_Annihilator.jpg";
		backpack="MET_Backpack_ATWD_Black";
		Weapons[]=
		{
			"MET_DLA13_C2",
			"MET_HH12_SMRT",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"BHA_ini_ariflMET_DLA13_C2e_MSBS65_black_F",
			"MET_HH12_SMRT",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"BHA_AT_Single",
			"BHA_AT_Single",
			"BHA_AP_SINGLE",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
		respawnMagazines[]=
		{
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"MET_DLA13_mag",
			"BHA_AT_Single",
			"BHA_AT_Single",
			"BHA_AP_SINGLE",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator"
		};
	};
	/*class BHA_Initiates_Pacifier: BHA_Initiate_Soldier_Base
	{
		displayName="Initiate Pacifier";
		scope=2;
		scopeCurator=2;
		icon="iconManMG";
		backpack="BHA_ini_Black_Backpack_kitbag_MG";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Initiates\BHA_Initiates_Pacifier.jpg";
		Weapons[]=
		{
			"BHA_LMG_Mk200_black_F",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"BHA_LMG_Mk200_black_F",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"BHA_200Rnd_65x39_cased_Box_Orange_Tracer",
			"BHA_200Rnd_65x39_cased_Box_Orange_Tracer",
			"BHA_Smoke_Black_Mag",
			"BHA_Smoke_Black_Mag",
			"BHA_Smoke_Black_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade"
		};
		respawnMagazines[]=
		{
			"BHA_200Rnd_65x39_cased_Box_Orange_Tracer",
			"BHA_200Rnd_65x39_cased_Box_Orange_Tracer",
			"BHA_Smoke_Black_Mag",
			"BHA_Smoke_Black_Mag",
			"BHA_Smoke_Black_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade"
		};
	};
	class BHA_Initiates_Healer: BHA_Initiate_Soldier_Base
	{
		displayName="Initiate Healer";
		scope=2;
		scopeCurator=2;
		icon="iconManMedic";
		backpack="BHA_Black_Carryall_Medic";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Initiates\BHA_Initiates_Healer.jpg";
		Weapons[]=
		{
			"BHA_ini_arifle_MSBS65_black_F",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"BHA_ini_arifle_MSBS65_black_F",
			"Put",
			"Throw"
		};
	};
	class BHA_Initiates_Farseer: BHA_Initiate_Soldier_Base
	{
		displayName="Initiate Farseer";
		scope=2;
		scopeCurator=2;
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Initiates\BHA_Initiates_Farseer.jpg";
		Weapons[]=
		{
			"BHA_arifle_MSBS65_Mark_black_F",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"BHA_arifle_MSBS65_Mark_black_F",
			"Put",
			"Throw"
		};
	};
	class BHA_Initiates_Deacon: BHA_Initiate_Soldier_Base
	{
		displayName="Initiate Deacon";
		scope=2;
		scopeCurator=2;
		icon="iconManLeader";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Initiates\BHA_Initiates_Deacon.jpg";
		backpack="BHA_Black_Backpack_Deacon";
		Weapons[]=
		{
			"BHA_ini_arifle_MSBS65_GL_black_F",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"BHA_ini_arifle_MSBS65_GL_black_F",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"1Rnd_HE_Grenade_shell",
			"BHA_Smoke_Black_Mag",
			"BHA_Smoke_Black_Mag",
			"BHA_Smoke_Black_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"30Rnd_65x39_caseless_msbs_mag_Orange_Tracer",
			"1Rnd_HE_Grenade_shell",
			"BHA_Smoke_Black_Mag",
			"BHA_Smoke_Black_Mag",
			"BHA_Smoke_Black_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade",
			"MiniGrenade"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"BHA_HelmetHBK_headset_F",
			"AGE_WAS_AK_MultiCam",
			"VSM_balaclava2_Black"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"BHA_HelmetHBK_headset_F",
			"AGE_WAS_AK_MultiCam",
			"VSM_balaclava2_Black"
		};
	};*/
};
class CfgGroups
{
	class INDEP
	{
		class BHA_Units
		{
			name="Barysaw Holdings Authority";
			class BHA_Initiates_inf_Groups
			{
				name="Initiate Infantry Groups";
				class BHA_Initiates_Squad
				{
					name="Squad";
					scope=2;
					side=2;
					faction="BHA_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="BHA_warbot";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BHA_Initiates_Initiate";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BHA_Initiates_Initiate";
						rank="PRIVATE";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BHA_Initiates_Initiate";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BHA_Initiates_Initiate";
						rank="PRIVATE";
						position[]={-1,-3,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BHA_Initiates_Annihilator";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
				};
				class BHA_Initiates_Melee_Squad
				{
					name="Melee Squad";
					scope=2;
					side=2;
					faction="BHA_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={-1,-3,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={0,-4,0};
					};
					class Unit6
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={1,-5,0};
					};
					class Unit7
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={-1,-5,0};
					};
					class Unit8
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={1,-7,0};
					};
					class Unit9
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={-1,-7,0};
					};
					class Unit10
					{
						side=2;
						vehicle="BHA_Initiates_Trutheseeker";
						rank="PRIVATE";
						position[]={0,-8,0};
					};
				};
			};
		};
	};
};
/*class Extended_PreInit_EventHandlers
{
	class IMS_PreInit
	{
		init="call compile preprocessFileLineNumbers '\WebKnight_StarWars_Mechanic\bootstrap\XEH_preInit.sqf'";
	};
};
class Extended_PostInit_EventHandlers
{
	class IMS_PostInit
	{
		init="call compile preprocessFileLineNumbers '\WebKnight_StarWars_Mechanic\bootstrap\XEH_postInit.sqf'";
	};
};*/
class Extended_InitPost_EventHandlers
{
	/*class CAManBase
	{
		class SW_Soldier_initMelee_eh
		{
			init="[_this select 0] spawn varsToUnitLoad; _unit = _this select 0; _unit setVariable [""actualSwordBlock"",0, true]; _unit setVariable [""canMakeAttack"",0, true]; _unit setVariable [""canDeflectBullets"",0, true]; _unit setVariable [""concentrationParam"",0.5, true];";
		};
	};
	class RyanZombieCivilian_F
	{
		class SW_Zombie_init_eh
		{
			init="[_this select 0] spawn varsToUnitLoad; _unit = _this select 0; _unit setVariable [""actualSwordBlock"",0, true]; _unit setVariable [""canMakeAttack"",0, true]; _unit setVariable [""canDeflectBullets"",0, true]; _unit setVariable [""concentrationParam"",0.5, true];";
		};
	};*/
	class BHA_Initiates_Melee
	{
		class AI_Melee_O_Default_init
		{
			init="_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\Ai_Melee.sqf"";};";
		};
	};
	class BHA_Initiates_Trutheseeker
	{
		class AI_Melee_O_Rush_init
		{
			init="_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\AI_Ims_Rush.sqf"";};";
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
