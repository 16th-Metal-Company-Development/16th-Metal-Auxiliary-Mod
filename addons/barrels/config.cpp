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
			"Land_16_ExplodeBarrel_1",
			"land_16_ExplodeBarrel_2",
			"land_16_ExplodeBarrel_3",

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
		displayName="Explosive Barrels";
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class Land_3as_ExplodeBarrel_1;
	class land_3as_ExplodeBarrel_2;
	class land_3as_ExplodeBarrel_3;
	class Land_16_ExplodeBarrel_1: Land_3as_ExplodeBarrel_1
	{
		scope=1;
		author="16th Aux";
		displayName="16th Fuel Canister 1";
		editorCategory="CfgEditorSubcategoriesMETAux";
		editorSubcategory="SubcategoryGonk";
		// This will make sure it runs a script when created
        class EventHandlers
		{
		    init = "_this spawn {params ['_barrel']; _barrel addEventHandler ['HitPart', compile 'params [""_unit"",""_selection"",""_projectile"",""_position"",""_velocity"",""_instigator"",""_hitpoint"",""_damage"",""_radius"",""_surfaceType""]; if (!(_unit getVariable [""alreadyExploded"", false])) then {_unit setVariable [""alreadyExploded"", true]; sleep 0.1; ""Bo_GBU12_LGB"" createVehicle (getPos _unit); deleteVehicle _unit;};'];};";
		};
    };
	/*class land_16_ExplodeBarrel_2: Land_3as_ExplodeBarrel_1
	{
		scope=1;
		author="16th Aux";
		displayName="16th Fuel Canister 1";
		editorCategory="CfgEditorSubcategoriesMETAux";
		editorSubcategory="SubcategoryGonk";
		// This will make sure it runs a script when created
        class EventHandlers
        {
            init = "_this spawn { params ['_barrel']; _barrel addEventHandler ['HitPart', { params ['_unit', '', '', '', '', '', '', '', '', '']; if (!(_unit getVariable ['alreadyExploded', false])) then { _unit setVariable ['alreadyExploded', true]; sleep 0.1; 'Bo_GBU12_LGB' createVehicle (getPos _unit); deleteVehicle _unit; }; }]; };";
        };
	};
	class land_16_ExplodeBarrel_3: Land_3as_ExplodeBarrel_1
	{
		scope=1;
		author="16th Aux";
		displayName="16th Fuel Canister 1";
		editorCategory="CfgEditorSubcategoriesMETAux";
		editorSubcategory="SubcategoryGonk";
		// This will make sure it runs a script when created
        class EventHandlers
        {
            init = "_this spawn { params ['_barrel']; _barrel addEventHandler ['HitPart', { params ['_unit', '', '', '', '', '', '', '', '', '']; if (!(_unit getVariable ['alreadyExploded', false])) then { _unit setVariable ['alreadyExploded', true]; sleep 0.1; 'Bo_GBU12_LGB' createVehicle (getPos _unit); deleteVehicle _unit; }; }]; };";
        };
	};*/
};
