class CfgPatches
{
	class MET_Chemlight
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"A3_Characters_f"
		};
		author="Frost";
	};
};
class Extended_PostInit_EventHandlers
{
	class MET_Chemlight
	{
		clientInit="call compile preprocessFileLineNumbers 'z\MET\addons\chemlight\scripts\s_chemlight.sqf';";
	};
};
