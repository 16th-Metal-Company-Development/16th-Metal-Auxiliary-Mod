class CfgPatches
{
	class BHA_Apostles
	{
		units[]=
		{
			"BHA_Legionnaire_Worker",
			"BHA_Legionnaire_Assembler",
			"BHA_Legionnaire_Worker_Heavy",
			"BHA_Legionnaire_Assembler_Heavy",
			"BHA_ShockDroid"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_Soldier_base_F;
	class ls_droid_base;
	class BHA_WorkerDroidBase: ls_droid_base
	{
		side=2;
		scope=0;
		scopeCurator=0;
		faction="BHA_Units";
		editorSubCategory="BHA_ShockDroidWorker";
		uniformClass="BHA_WarbotUniWorker_U_I";
		//backpack="MET_SentinelPack_Night_Black";
		/*armor				= 3;	// total hit points (meaning global "health") of the object.
									// keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
		armorStructural		= 0.6;	// divides all damage taken to total hit point, either directly or through hit point passThrough coefficient.
									// must be adjusted for each model to achieve consistent total damage results
		explosionShielding	= 0.1; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold	= 0.001;	// minimalHit for total damage
		impactDamageMultiplier	= 0.5;		// multiplier for falling damage
		class HitPoints
		{
			class HitFace
			{
				armor=1;
				material=-1;
				name="face_hub";
				passThrough=0.5;
				radius=0.08;
				explosionShielding=0.1;
				minimalHit=0.01;
			};
			class HitNeck: HitFace
			{
				armor=4;
				material=-1;
				name="neck";
				passThrough=0.5;
				radius=0.1;
				explosionShielding=0.5;
				minimalHit=0.01;
			};
			class HitHead: HitNeck
			{
				armor=1;
				material=-1;
				name="head";
				passThrough=0.5;
				radius=0.2;
				explosionShielding=0.5;
				minimalHit=0.01;
				depends="HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor=10;
				material=-1;
				name="pelvis";
				passThrough=0.2;
				radius=0.24;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.05;
				depends="0";
			};
			class HitAbdomen: HitPelvis
			{
				armor=6;
				material=-1;
				name="spine1";
				passThrough=0.8;
				radius=0.16;
				explosionShielding=0.5;
				visual="injury_body";
				minimalHit=0.05;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor=25;
				material=-1;
				name="spine2";
				passThrough=0.2;
				radius=0.18;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.25;
			};
			class HitChest: HitDiaphragm
			{
				armor=30;
				material=-1;
				name="spine3";
				passThrough=0.2;
				radius=0.18;
				explosionShielding=5;
				visual="injury_body";
				minimalHit=0.30;
			};
			class HitBody: HitChest
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1.5;
				visual="injury_body";
				minimalHit=0.01;
				depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor=15;
				material=-1;
				name="arms";
				passThrough=0.1;
				radius=0.1;
				explosionShielding=40;
				visual="injury_hands";
				minimalHit=1;
				depends="0";
			};
			class HitHands: HitArms
			{
				armor=10;
				material=-1;
				name="hands";
				passThrough=0;
				radius=0.1;
				explosionShielding=40;
				visual="injury_hands";
				minimalHit=20;
				depends="HitArms";
			};
			class HitLegs: HitHands
			{
				armor=20;
				material=-1;
				name="legs";
				passThrough=0.1;
				radius=0.14;
				explosionShielding=40;
				visual="injury_legs";
				minimalHit=1;
				depends="0";
			};
			class Incapacitated: HitLegs
			{
				armor=1000;
				material=-1;
				name="body";
				passThrough=1;
				radius=0;
				explosionShielding=1;
				visual="";
				minimalHit=0;
				depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
			class HitLeftArm
			{
				armor=1;
				material=-1;
				name="hand_l";
				passThrough=1;
				radius=0.08;
				explosionShielding=1;
				visual="injury_hands";
				minimalHit=0.01;
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
				passThrough=1;
				radius=0.1;
				explosionShielding=1;
				visual="injury_legs";
				minimalHit=0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name="leg_r";
			};
		};*/
		identityTypes[]=
		{
			"ls_b1BattleDroid",
			"NoGlasses"
		};
		//#include "\ls\addons\characters_droid\cfg\droidSounds.hpp"
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
			"MET_Smoke_Black"
		};
		respawnMagazines[]=
		{
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black"
		};
		Items[]=
		{
			"ACE_Canteen",
			"ACE_MRE_LambCurry",
			"ACE_Flashlight_KSF1",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"Weap_melee_knife"
		};
		respawnItems[]=
		{
			"ACE_Canteen",
			"ACE_MRE_LambCurry",
			"ACE_Flashlight_KSF1",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"Weap_melee_knife"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotHeadWorker"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotHeadWorker"
		};
		class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { {_unit setSkill [_x, 0.95]; } forEach ['aimingAccuracy','aimingShake','aimingSpeed','commanding','courage','general','reloadSpeed','spotDistance','spotTime']; if !(isNil 'VCOM_AI_SetSkill') then { [_unit, 0.95] call VCOM_AI_SetSkill; }; };";
		};
	};
	class BHA_Legionnaire_Worker: BHA_WorkerDroidBase
	{
		displayName="Legionnaire Worker (Light)";
		scope=2;
		scopeCurator=2;
		//editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Apostles\BHA_Apostles_Apostle.jpg";
		Weapons[]=
		{
			"IDA_StunStick",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"IDA_StunStick",
			"Put",
			"Throw"
		};
		class EventHandlers
		{
			killed = "_unit = _this select 0; if (local _unit) then { _explosive = 'DemoCharge_Remote_Ammo_Scripted' createVehicle (getPosATL _unit); _explosive setDamage 1; };";
		};
		//[_this] execVM "\WebKnight_StarWars_Mechanic\AI_Ims_Rush.sqf";
	};
	class BHA_Legionnaire_Assembler: BHA_WorkerDroidBase
	{
		displayName="Legionnaire Assembler (Light)";
		scope=2;
		scopeCurator=2;
		//editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\Apostles\BHA_Apostles_Apostle.jpg";
		Magazines[]=
		{
			"BHA_Powerpack",
			"BHA_Powerpack",
			"BHA_Powerpack",
			"BHA_Powerpack",
			"BHA_Powerpack",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black"
		};
		respawnMagazines[]=
		{
			"BHA_Powerpack",
			"BHA_Powerpack",
			"BHA_Powerpack",
			"BHA_Powerpack",
			"BHA_Powerpack",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black"
		};
		Weapons[]=
		{
			"MET_BHALasRifle",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_BHALasRifle",
			"Put",
			"Throw"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotHeadWorker"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotHeadWorker"
		};
		class EventHandlers
		{
			killed = "_unit = _this select 0; if (local _unit) then { _explosive = 'DemoCharge_Remote_Ammo_Scripted' createVehicle (getPosATL _unit); _explosive setDamage 1; };";
		};
		//[_this] execVM "\WebKnight_StarWars_Mechanic\AI_Ims_Rush.sqf";
	};
	class BHA_Legionnaire_Worker_Heavy: BHA_Legionnaire_Worker
	{
		displayName="Legionnaire Worker (Heavy)";
		scope=2;
		scopeCurator=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotArmour",
			"BHA_WarBotHeadWorker"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotArmour",
			"BHA_WarBotHeadWorker"
		};
	};
	class BHA_Legionnaire_Assembler_Heavy: BHA_Legionnaire_Assembler
	{
		displayName="Legionnaire Assembler (Heavy)";
		scope=2;
		scopeCurator=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotArmour",
			"BHA_WarBotHeadWorker"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotArmour",
			"BHA_WarBotHeadWorker"
		};
	};
	class BHA_ShockDroidBase: ls_droid_base
	{
		side=2;
		scope=0;
		scopeCurator=0;
		faction="BHA_Units";
		editorSubCategory="BHA_ShockDroid";
		uniformClass="BHA_WarbotUni_U_I";
		//#include "\ls\core\addons\cfg\droidSounds.hpp"
		identityTypes[]=
		{
			"ls_b1BattleDroid",
			"NoGlasses"
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
			"MET_Smoke_Black"
		};
		respawnMagazines[]=
		{
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black"
		};
		Items[]=
		{
			"ACE_Canteen",
			"ACE_MRE_LambCurry",
			"ACE_Flashlight_KSF1",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"Weap_melee_knife"
		};
		respawnItems[]=
		{
			"ACE_Canteen",
			"ACE_MRE_LambCurry",
			"ACE_Flashlight_KSF1",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"Weap_melee_knife"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotHead"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotHead"
		};
		class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { {_unit setSkill [_x, 0.95]; } forEach ['aimingAccuracy','aimingShake','aimingSpeed','commanding','courage','general','reloadSpeed','spotDistance','spotTime']; if !(isNil 'VCOM_AI_SetSkill') then { [_unit, 0.95] call VCOM_AI_SetSkill; }; };";
		};
	};
	class BHA_ShockDroid: BHA_ShockDroidBase
	{
		side=2;
		scope=2;
		scopeCurator=2;
		displayName="Legionnaire Shock Trooper (Light)";
		identityTypes[]=
		{
			"LanguageENG_F",
			"Head_NATO",
			"NoGlasses"
		};
		Weapons[]=
		{
			"MET_E1_Reforged",
			"Put",
			"Throw"
		};
		respawnWeapons[]=
		{
			"MET_E1_Reforged",
			"Put",
			"Throw"
		};
		Magazines[]=
		{
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black"
		};
		respawnMagazines[]=
		{
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_E1_mag",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Smoke_Black",
			"MET_Smoke_Black",
			"MET_Smoke_Black"
		};
		Items[]=
		{
			"ACE_Flashlight_KSF1",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"Weap_melee_knife"
		};
		respawnItems[]=
		{
			"ACE_Flashlight_KSF1",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"LFP_item_bacta_bandage",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_tourniquet",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"ACE_splint",
			"Weap_melee_knife"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotHead"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemRadio",
			"ACE_Altimeter",
			"MET_NVG_Integrated_MU",
			"None",
			"BHA_WarBotHead"
		};
		class EventHandlers
		{
			init = "_unit = _this select 0; if (local _unit) then { {_unit setSkill [_x, 0.95]; } forEach ['aimingAccuracy','aimingShake','aimingSpeed','commanding','courage','general','reloadSpeed','spotDistance','spotTime']; if !(isNil 'VCOM_AI_SetSkill') then { [_unit, 0.95] call VCOM_AI_SetSkill; }; };";
		};
	};
};
class CfgGroups
{
	class INDEP
	{
		class BHA_Units
		{
			name="Barysaw Holdings Authority";
			class BHA_Apostles_inf_Groups
			{
				name="Apostle Infantry Groups";
				class BHA_Apostles_Squad
				{
					name="Squad";
					scope=2;
					side=2;
					faction="BHA_Units";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side=2;
						vehicle="BHA_Apostles_Archbishop";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="BHA_Apostles_Ascended";
						rank="PRIVATE";
						position[]={1,-2,0};
					};
					class Unit2
					{
						side=2;
						vehicle="BHA_Apostles_Immortal";
						rank="CORPORAL";
						position[]={-1,-2,0};
					};
					class Unit3
					{
						side=2;
						vehicle="BHA_Apostles_Diviner";
						rank="CORPORAL";
						position[]={1,-3,0};
					};
					class Unit4
					{
						side=2;
						vehicle="BHA_Apostles_Decimator";
						rank="CORPORAL";
						position[]={-1,-3,0};
					};
					class Unit5
					{
						side=2;
						vehicle="BHA_Apostles_Apostle";
						rank="CORPORAL";
						position[]={1,-4,0};
					};
					class Unit6
					{
						side=2;
						vehicle="BHA_Apostles_Annihilator";
						rank="CORPORAL";
						position[]={-1,-4,0};
					};
				};
			};
		};
	};
};
class Extended_InitPost_EventHandlers
{
	class BHA_Legionnaire_Worker
	{
		class AI_Melee_O_Rush_init
		{
			init="_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\AI_Ims_Rush.sqf"";};";
		};
	};
	class BHA_Legionnaire_Worker_Heavy
	{
		class AI_Melee_O_Rush_init
		{
			init="_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\AI_Ims_Rush.sqf"";};";
		};
	};
};
