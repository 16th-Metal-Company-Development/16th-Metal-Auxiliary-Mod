#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class units_16
	{	
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_characters_F",
		};
		author="DJ, LCDR Wolf, Ronin, JLTS Team";
		Name="units_16";
	};
};
class CfgEditorCategories
{
	class metal_EdCat_co // Category class, you point to it in editorCategory property
	{
		displayName = "[16th] Metal Company"; // Name visible in the list
	};
};
class CfgEditorSubcategories
{
	class metal_co_EdSubCat_crates // Category class, you point to it in editorSubcategory property
	{
		displayName = "Supply Crates"; // Name visible in the list
	};
    class metal_co_EdSubCat_p2 // Category class, you point to it in editorSubcategory property
	{
		displayName = "Phase 2"; // Name visible in the list
	};
    class metal_co_EdSubCat_snow // Category class, you point to it in editorSubcategory property
	{
		displayName = "Phase 2 (Snow Troopers)"; // Name visible in the list
	};
    class metal_co_EdSubCat_arf // Category class, you point to it in editorSubcategory property
	{
		displayName = "ARF"; // Name visible in the list
	};
    class metal_co_p1_EdSubCat_early // Category class, you point to it in editorSubcategory property
	{
		displayName = "Phase 1 (Early)"; // Name visible in the list
	};
    class metal_co_p1_EdSubCat_late // Category class, you point to it in editorSubcategory property
	{
		displayName = "Phase 1 (Late)"; // Name visible in the list
	};
	class metal_co_EdSubCat_Thunder // Category class, you point to it in editorSubcategory property
	{
		displayName = "Thunder Vehicles"; // Name visible in the list
	};
	class metal_co_EdSubCat_Reaper // Category class, you point to it in editorSubcategory property
	{
		displayName = "Reaper Vehicles"; // Name visible in the list
	};
	class metal_co_EdSubCat_Hammer // Category class, you point to it in editorSubcategory property
	{
		displayName = "Hammer Vehicles"; // Name visible in the list
	};
	class metal_co_EdSubCat_Dragon // Category class, you point to it in editorSubcategory property
	{
		displayName = "Dragon Vehicles"; // Name visible in the list
	};
	class metal_co_EdSubCat_Infantry // Category class, you point to it in editorSubcategory property
	{
		displayName = "Infantry Vehicles"; // Name visible in the list
	};
	class metal_co_EdSubCat_Goff // Category class, you point to it in editorSubcategory property
	{
		displayName = "Goff Vehicles"; // Name visible in the list
	};
};
class cfgFactionClasses
{
	class metal_company
	{
		icon="";
		flag="";
		displayName="[16th] Metal Company";
		side=1;
		priority=1;
	};
};
class CfgMarkerColors
{
	class Default
	{
		color[]={0,0,0,1};
		scope=1;
	};
	class Color420Red: Default
	{
		name="420th Red";
		color[]={0.235,0.063,0.063,1};
		scope=2;
	};
	class Color16thBlue: Default
	{
		name="16th Blue";
		color[]={0.157,0.184,0.259,1};
		scope=2;
	};
	class ColorHightowerRose: Default
	{
		name="Rose";
		color[]={0.89999998,0.23999999,0.40000001,1};
		scope=2;
	};
	class ColorHightowerGold: Default
	{
		name="Gold";
		color[]={0.38999999,0.30000001,0,1};
		scope=2;
	};
	class ColorBarysawOnyx: Default
	{
		name="Onyx";
		color[]={0.14,0.15000001,0.15000001,1};
		scope=2;
	};
};