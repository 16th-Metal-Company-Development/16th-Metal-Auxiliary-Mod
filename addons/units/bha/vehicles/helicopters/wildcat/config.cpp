class CfgPatches
{
	class BHA_Helicopters
	{
		units[]=
		{
			"BHA_Heli_light_03_unarmed_F",
			"BHA_Heli_light_03_dynamicLoadout_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class I_Heli_light_03_unarmed_F;
	class BHA_Heli_light_03_unarmed_F: I_Heli_light_03_unarmed_F
	{
		displayName="Wildcat (Unarmed)";
		scope=2;
		side=2;
		faction="BHA_Units";
		editorSubCategory="BHA_Helis";
		crew="BHA_Acolytes_Acolyte";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Heli_light_03_unarmed_F.jpg";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Helicopters\Wildcat\data\heli_light_03_black_co.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\Helicopters\Wildcat\data\heli_light_03_black_co.paa",
					"a3\weapons_f\ammoboxes\data\ammobox_co.paa",
					"a3\weapons_f\ammoboxes\data\ammobox_signs_ca.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class Air;
	class Helicopter: Air
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_F: Helicopter
	{
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitHRotor;
			class HitVRotor;
		};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class EventHandlers;
		class ViewPilot;
		class ViewOptics;
		class Components;
	};
	class Heli_light_03_base_F: Helicopter_Base_F
	{
	};
	class Heli_light_03_dynamicLoadout_base_F: Heli_light_03_base_F
	{
	};
	class I_heli_light_03_dynamicLoadout_F: Heli_light_03_dynamicLoadout_base_F
	{
	};
	class BHA_Heli_light_03_dynamicLoadout_F: I_heli_light_03_dynamicLoadout_F
	{
		displayName="Wildcat";
		scope=2;
		side=2;
		faction="BHA_Units";
		editorSubCategory="BHA_Helis";
		crew="BHA_Acolytes_Acolyte";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Heli_light_03_dynamicLoadout_F.jpg";
		weapons[]=
		{
			"BHA_M134_minigun",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"5000Rnd_762x51_Orange_Belt",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Helicopters\Wildcat\data\heli_light_03_black_co.paa"
		};
		textureList[]=
		{
			"Black",
			1
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_EPB\Heli_Light_03\data\UI\Heli_Light_03_3DEN_CA.paa";
				class Pylons
				{
					class PylonLeft1
					{
						attachment="PylonRack_12Rnd_missiles";
						priority=5;
						hardpoints[]=
						{
							"DAR",
							"DAGR",
							"B_SHIEKER",
							"UNI_SCALPEL",
							"BHA_20MM_TWIN_CANNON",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.059999999,0.40000001};
					};
					class PylonRight1: PylonLeft1
					{
						attachment="PylonRack_12Rnd_missiles";
						mirroredMissilePos=1;
						hardpoints[]=
						{
							"DAR",
							"DAGR",
							"B_SHIEKER",
							"UNI_SCALPEL",
							"BHA_20MM_TWIN_CANNON",
							"B_ASRRAM_EJECTOR"
						};
						UIposition[]={0.58999997,0.40000001};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonRack_12Rnd_missiles",
							"PylonRack_12Rnd_missiles"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_12Rnd_PG_missiles",
							"PylonRack_12Rnd_PG_missiles"
						};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class GunL_Revolving
			{
				source="revolving";
				weapon="BHA_M134_minigun";
			};
			class GunR_Revolving: GunL_Revolving
			{
			};
			class muzzle_hide
			{
				source="reload";
				weapon="BHA_M134_minigun";
			};
			class Muzzle_Flash
			{
				source="ammorandom";
				weapon="BHA_M134_minigun";
				animPeriod=1e-006;
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="missiles_DAR";
			};
			class RocketPods_Hide
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class HideWeapons
			{
				source="user";
				animPeriod=1e-006;
				initPhase=0;
			};
			class HitGlass1
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass1";
			};
			class HitGlass2
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass2";
			};
			class HitGlass3
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass3";
			};
			class HitGlass4
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass4";
			};
			class HitGlass5
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass5";
			};
			class HitGlass6
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass6";
			};
			class HitGlass7
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass7";
			};
			class HitGlass8
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass8";
			};
			class HitGlass9
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass9";
			};
			class HitGlass10
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass10";
			};
			class HitGlass11
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass11";
			};
			class HitGlass12
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass12";
			};
			class HitGlass13
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass13";
			};
			class HitGlass14
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass14";
			};
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
