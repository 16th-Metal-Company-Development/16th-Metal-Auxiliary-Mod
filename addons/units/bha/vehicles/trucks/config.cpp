class CfgPatches
{
	class BHA_Trucks
	{
		units[]=
		{
			"BHA_Kamaz_ammo_F",
			"BHA_Kamaz_covered_F",
			"BHA_Kamaz_device_F",
			"BHA_Kamaz_fuel_F",
			"BHA_Kamaz_medical_F",
			"BHA_Kamaz_repair_F",
			"BHA_Kamaz_transport_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class O_Truck_03_ammo_F;
	class O_Truck_03_covered_F;
	class O_Truck_03_device_F;
	class O_Truck_03_fuel_F;
	class O_Truck_03_medical_F;
	class O_Truck_03_repair_F;
	class O_Truck_03_transport_F;
	class BHA_Kamaz_ammo_F: O_Truck_03_ammo_F
	{
		side=2;
		scope=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Trucks";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Kamaz_ammo_F.jpg";
		crew="BHA_Acolytes_Acolyte";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			0,
			"Black",
			1
		};
	};
	class BHA_Kamaz_covered_F: O_Truck_03_covered_F
	{
		side=2;
		scope=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Trucks";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Kamaz_covered_F.jpg";
		crew="BHA_Acolytes_Acolyte";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cover_blk.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cover_blk.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			0,
			"Black",
			1
		};
	};
	class BHA_Kamaz_device_F: O_Truck_03_device_F
	{
		side=2;
		scope=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Trucks";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Kamaz_device_F.jpg";
		crew="BHA_Acolytes_Acolyte";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			0,
			"Black",
			1
		};
	};
	class BHA_Kamaz_fuel_F: O_Truck_03_fuel_F
	{
		side=2;
		scope=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Trucks";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Kamaz_fuel_F.jpg";
		crew="BHA_Acolytes_Acolyte";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_fuel_blk.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_fuel_blk.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			0,
			"Black",
			1
		};
	};
	class BHA_Kamaz_medical_F: O_Truck_03_medical_F
	{
		side=2;
		scope=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Trucks";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Kamaz_medical_F.jpg";
		crew="BHA_Acolytes_Acolyte";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cover_blk.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cover_blk.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			0,
			"Black",
			1
		};
	};
	class BHA_Kamaz_repair_F: O_Truck_03_repair_F
	{
		side=2;
		scope=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Trucks";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Kamaz_repair_F.jpg";
		crew="BHA_Acolytes_Acolyte";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ammo_blk.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ammo_blk.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			0,
			"Black",
			1
		};
	};
	class BHA_Kamaz_transport_F: O_Truck_03_transport_F
	{
		side=2;
		scope=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Trucks";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Kamaz_transport_F.jpg";
		crew="BHA_Acolytes_Acolyte";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
			"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa"
		};
		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="Digital";
				textures[]=
				{
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext01_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_ext02_blk.paa",
					"\HDC_Units_mod\Faction\BHA\Vehicles\Trucks\Data\kamaz_cargo_blk.paa"
				};
				factions[]=
				{
					"BHA_Units"
				};
			};
		};
		textureList[]=
		{
			"Hex",
			0,
			"Black",
			1
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
