class CfgPatches
{
	class BHA_Vans
	{
		units[]=
		{
			"BHA_Van_02_transport_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class B_G_Van_02_transport_F;
	class BHA_Van_02_transport_F: B_G_Van_02_transport_F
	{
		displayName="Van Transport (Black)";
		side=2;
		scope=2;
		scopeCurator=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Cars";
		crew="BHA_Initiates_Initiate";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Van_02_transport_F.jpg";
		typicalCargo[]=
		{
			"BHA_Initiates_Initiate"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"emergency_lights"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\Soft_F_Orange\Van_02\Data\van_body_Black_CO.paa",
			"\a3\soft_f_orange\van_02\data\van_wheel_co.paa",
			"\a3\soft_f_orange\van_02\data\van_glass_utility_CA.paa",
			"\a3\Soft_F_Orange\Van_02\Data\van_body_Black_CO.paa"
		};
		textureList[]=
		{
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
