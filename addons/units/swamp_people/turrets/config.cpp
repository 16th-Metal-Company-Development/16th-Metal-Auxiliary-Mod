class CfgPatches
{
	class Swamp_Turrets
	{
		units[]=
		{
			"Swamp_Static_FG75"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
    class BHA_Static_FG75
    {
        class Turrets
        {
            class MainTurret;
        };
    };
    class Swamp_Static_FG75: BHA_Static_FG75
    {
        author="$STR_3AS_Studio";
        displayName="FG75 Mass Driver";
        scope=2;
        scopeCurator=2;
        side=2;
        faction="Swamp_People_Units";
        editorSubcategory="Swamp_People_Emplacements";
        crew="SPR_Rifleman";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"BHA_75mm_M75",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"BHA_75MW_HE_G",
					"BHA_75MW_HE_G",
					"BHA_75MW_AP_G",
					"BHA_75MW_AP_G",
					"BHA_75MW_AP_G",
					"BHA_75MW_AP_G",
					"Laserbatteries"
				};
			};
		};
    };
};