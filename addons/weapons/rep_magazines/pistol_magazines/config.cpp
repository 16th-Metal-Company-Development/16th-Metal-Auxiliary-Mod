class CfgPatches
{
	class metal_rep_pistol_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_blaster_pistolC_battery",
			"MET_blaster_pistol_battery",
			"MET_DC21_mag",
			"MET_DC21_Stealth_mag",
			"MET_dual_blaster_pistol_battery",
			"MET_blaster_pistol_Red_battery",
			"MET_dc15sa_battery",
			"MET_dc15sa_red_battery"
		};
		requiredAddons[]=
		{
			"metal_weapons"
		};
	};
};
class CfgMagazines
{
	class 100Rnd_65x39_caseless_mag;
	class MET_blaster_pistolC_battery: 100Rnd_65x39_caseless_mag
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_b.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=8;
		displayName="[16th] DC-17C Energy Cell";
		displayNameShort="DC-17C Energy Cell";
		descriptionShort="High Power Energy Cell for the DC-17C";
		ammo="MET_blasterbolt_snp";
		tracersEvery=1;
		initSpeed=500;
		mass=20;
	};
	class MET_blaster_pistol_battery: 100Rnd_65x39_caseless_mag
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_b.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=50;
		displayName="[16th] DC-17SA Energy Cell";
		displayNameShort="DC-17SA Energy Cell";
		descriptionShort="Low Power Energy Cell for the DC-17SA";
		ammo="MET_blasterbolt_low";
		tracersEvery=1;
		initSpeed=250;
		mass=5;
	};
	class MET_DC21_mag: MET_blaster_pistol_battery
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		count=24;
		displayName="[16th] DC-21 Energy Cell";
		displayNameShort="DC-21 Energy Cell";
		descriptionShort="Full Power Energy Cell for the DC-21";
		ammo="MET_blasterbolt";
		tracersEvery=1;
		initSpeed=250;
		mass=5;
	};
	class MET_DC21_Stealth_mag: MET_DC21_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		count=12;
		displayName="[16th] Stealth Pistol Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-21";
		ammo="MET_blasterbolt_Stealth_low";
		tracersEvery=1;
		mass=7.5;
		initSpeed = 150;
	};
	class MET_dual_blaster_pistol_battery: 100Rnd_65x39_caseless_mag
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="z\MET\addons\weapons\data\ui\met_pistol_dual_b2.paa";
		UiPicture="z\MET\addons\weapons\data\ui\met_pistol_dual_b2.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=100;
		displayName="[16th] Dual DC-17SA Energy Cell";
		displayNameShort="DC-17SA Energy Cell";
		descriptionShort="Low Power Energy Cell for the DC-17SA";
		ammo="MET_blasterbolt_low";
		tracersEvery=1;
		initSpeed=250;
		mass=10;
	};
	class MET_blaster_pistol_Red_battery: 100Rnd_65x39_caseless_mag
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=50;
		displayName="[16th] DC-17SA Energy Cell";
		displayNameShort="DC-17SA Energy Cell";
		descriptionShort="Low Power Energy Cell for the DC-17SA";
		ammo="MET_blasterbolt_low_Red";
		tracersEvery=1;
		initSpeed=250;
		mass=5;
	};
	class MET_dc15sa_battery: 100Rnd_65x39_caseless_mag
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_b.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=10;
		displayName="[16th] DC-15SA Energy Cell";
		displayNameShort="DC-15SA Energy Cell";
		descriptionShort="Low Power Energy Cell for the DC-15SA";
		ammo="MET_blasterbolt_low";
		tracersEvery=1;
		initSpeed=250;
		mass=2;
	};
	class MET_dc15sa_red_battery: MET_dc15sa_battery
	{
		author="Hazmat";
		scope=2;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		displayName="[16th] DC-15SA Red Energy Cell";
		ammo="MET_blasterbolt_low_red";
	};
};