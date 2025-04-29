class CfgPatches
{
	class gonk
	{
		author="Hazmat";
		requiredAddons[]=
		{
			"3as_GNK_Prop"
		};
		requiredVersion=0.1;
		units[]=
		{
			"16th_3AS_Gonk_Base",
			"16th_Gonk_Base",

		};
		weapons[]={};
	};
};
class CfgEditorCategories
{
	class CfgEditorSubcategoriesMETAux // Category class, you point to it in editorCategory property
	{
		displayName = "[16th] Metal Company"; // Name visible in the list
	};
};
class CfgEditorSubcategories
{
	class SubcategoryGonk
	{
		displayName="Gonk Droids";
	};
	class SubcategoryGonkFunOps
	{
		displayName="Gonk Droids (Fun Ops)";
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class 3as_GNK;
	class 16th_3AS_Gonk_Base: 3as_GNK
	{
		scope=1;
		author="16th Aux";
		displayName="16th Gonk Droid";
		editorCategory="CfgEditorSubcategoriesMETAux";
		editorSubcategory="SubcategoryGonk";
	};
	class 16th_Gonk_Base: 16th_3AS_Gonk_Base
	{
		editorSubcategory="SubcategoryGonk";
	};
	class 16th_gonk_1_platoon_armor: 16th_Gonk_Base
	{
		scope=2;
		scopecurator=2;
		displayName="1st Platoon Armor Gonk";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM 'z\16th\addons\gonk\scripts\gonk\armor_inf_p2.sqf';";
		};
	};
	class 16th_gonk_1_platoon_equipment: 16th_Gonk_Base
	{
		scope=2;
		scopecurator=2;
		displayName="1st Platoon Equipment Gonk";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM 'z\16th\addons\gonk\scripts\gonk\loadout_inf_p2.sqf';";
		};
	};
};
