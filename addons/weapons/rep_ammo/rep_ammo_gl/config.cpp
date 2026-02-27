class CfgPatches
{
	class metal_rep_ammo_glcore
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		requiredAddons[]=
		{
			"metal_weapons",
			"metal_rep_ammo",
			"metal_rep_ammo_base"
		};
	};
};
class Extended_FiredBIS_Eventhandlers
{
    class CAManBase
    {
		fired = "_this call FSNB_fnc_initNuclearPayload";
    };
};