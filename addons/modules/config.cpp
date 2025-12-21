class CfgPatches
{
	class modules
	{
		units[] = { "MET_Module_BuildZone","MET_Module_LogisticsBudget"};
		requiredVersion = 1.0;
		requiredAddons[] = { "A3_Modules_F" };
	};
};

class CfgFactionClasses
{
	class NO_CATEGORY;
	class MET_Category_Modules : NO_CATEGORY
	{
		displayName = "[16th] Modules";
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};

		class ModuleDescription
		{
			class AnyBrain;
		};
	};

	class MET_Module_BuildZone : Module_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[16th] Build Zones";
		icon = "iconModule";
		category = "MET_Category_Modules";

		function = "MET_fnc_BuildZone";
		functionPriority = 1;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		curatorCanAttach = 0;

		canSetArea = 0;
		canSetAreaShape = 0;
		canSetAreaHeight = 0;

		class AttributeValues
		{
			size3[] = { 100, 100, -1 };
			isRectangle = 0;
		};

		class Attributes : AttributesBase
		{
			class AllowedClasses : Edit
			{
				displayName = "Allowed Classes";
				tooltip = "Comma-separated list of Vehicle classnames that should have zones attached (e.g., 'MET_Bantha_E_MSV,MET_LAAT_MK1')";
				property = "MET_Module_BuildZone_VehicleClasses";
				typeName = "STRING";
				defaultValue = """MET_Bantha_E_MSV,MET_LAAT_MK1,MET_LAAT_Mk2,MET_LAAT_Mk2_Lamps"""; // Note the nested quotes for string
			};

			class Radius : Edit
			{
				displayName = "Radius";
				tooltip = "Build radius in meters";
				property = "MET_Module_BuildZone_Radius";
				typeName = "NUMBER";
				defaultValue = "50";
			};

			class ShowMarkers : Checkbox
			{
				displayName = "Show Build Zones";
				tooltip = "If enabled, spawns markers around valid vehicles for a visual representation of the build zone.";
				property = "MET_Module_BuildZone_ShowMarkers";
				defaultValue = "0";
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Defines a dynamic build zone system. Automatically applies ACE Fortify build zones with the desired radius to qualifying vehicles based on class name.";

			sync[] = {};
		};

	};

	class MET_Module_LogisticsBudget : Module_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[16th] Logistics Budget";
		icon = "iconModule";
		category = "MET_Category_Modules";

		function = "MET_fnc_LogisticsBudget";
		functionPriority = 1;
		isGlobal = 2;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		curatorCanAttach = 0;

		canSetArea = 0;
		canSetAreaShape = 0;
		canSetAreaHeight = 0;

		class Attributes : AttributesBase
		{
			/* =======================
			   SIDE SELECTION
			   ======================= */
			class Side : Combo
			{
				displayName = "Side";
				tooltip = "Side that receives fortification budget from kills";
				property = "MET_Module_LogisticsBudget_Side";
				typeName = "NUMBER";
				defaultValue = "1"; // BLUFOR

				class Values
				{
					class Opfor { name = "OPFOR";  value = 0; };
					class Blufor { name = "BLUFOR"; value = 1; };	
					class Grefor { name = "GREFOR"; value = 2; };
				};
			};

			/* =======================
			   SCORE VALUES
			   ======================= */
			class DefaultScore : Edit
			{
				displayName = "Default Score";
				tooltip = "Score awarded per qualifying kill";
				property = "MET_Module_LogisticsBudget_BasicScore";
				typeName = "NUMBER";
				defaultValue = "15";
			};

			class GroundVehicleScore : Edit
			{
				displayName = "Ground Vehicle Score";
				tooltip = "Score awarded for destroying ground vehicles";
				property = "MET_Module_LogisticsBudget_GroundVehicleScore";
				typeName = "NUMBER";
				defaultValue = "30";
			};

			class AirVehicleScore : Edit
			{
				displayName = "Air Vehicle Score";
				tooltip = "Score awarded for destroying air vehicles";
				property = "MET_Module_LogisticsBudget_AirVehicleScore";
				typeName = "NUMBER";
				defaultValue = "30";
			};

			class ValuableScore : Edit
			{
				displayName = "Valuable Target Score";
				tooltip = "Score awarded for destroying valuable targets";
				property = "MET_Module_LogisticsBudget_ValuableScore";
				typeName = "NUMBER";
				defaultValue = "100";
			};

			/* =======================
			   TARGET CLASS LISTS
			   ======================= */

			class ValuableTargets : Edit
			{
				displayName = "Valuable Target Classes";
				tooltip = "Comma-separated classnames for high-value targets";
				property = "MET_Module_LogisticsBudget_ValuableTargets";
				typeName = "STRING";
				defaultValue = """""";
			};

			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Awards ACE Fortify budget to a selected side based on kills. Supports basic or advanced scoring modes.";

			sync[] = {};
		};
	};

};

class CfgFunctions
{
	class MET
	{
		tag = "MET"; 

		class Modules
		{
			file = "z\MET\addons\modules\functions";

			class BuildZone{};
			class LogisticsBudget{};
		};
	};
};
