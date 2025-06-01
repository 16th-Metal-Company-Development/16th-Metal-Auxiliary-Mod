class CfgPatches
{
	class BHA_Jeeps
	{
		units[]=
		{
			"BHA_Offroad_02_unarmed_black_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class C_Offroad_02_unarmed_black_F;
	class BHA_Offroad_02_unarmed_black_F: C_Offroad_02_unarmed_black_F
	{
		displayName="Jeep Wrangler (Black)";
		side=2;
		scope=2;
		scopeCurator=2;
		faction="BHA_Units";
		editorSubcategory="BHA_Cars";
		crew="BHA_Initiates_Initiate";
		editorPreview="\HDC_Units_mod\data\Editor Previews\BHA\BHA_Offroad_02_unarmed_black_F.jpg";
		textureList[]=
		{
			"Black",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
			"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
			"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
			"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
			"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
		};
	};
};
class cfgMods
{
	author="";
	timepacked="1664364859";
};
