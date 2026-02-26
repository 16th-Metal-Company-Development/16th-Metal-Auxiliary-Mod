class CfgPatches
{
	class metal_rep_mg_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_DC15L_mag",
			"MET_T15_mag",
			"MET_E15_mag",
			"MET_blaster_battery",
			"MET_blaster_battery_heavy",
			"MET_blaster_battery_green",
			"MET_Chaingun_Light_Drum_Mag",
			"MET_Chaingun_AT_Drum_Mag",
			"MET_Chaingun_HE_Drum_Mag",
			"MET_Chaingun_Nuke_Drum_Mag"
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
	class JLTS_DC15A_mag;
	class CA_LauncherMagazine;
	class MET_DC15L_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=200;
		displayName="[16th] DC-15L Energy Cell";
		displayNameShort="DC-15L Energy Cell";
		descriptionShort="Energy cell for the DC-15L";
		ammo="MET_blasterbolt";
		mass = 50;
		tracersEvery=1;
	};
	class MET_T15_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=80;
		displayName="[16th] T-15 Energy Cell";
		displayNameShort="T-15 Energy Cell";
		descriptionShort="Energy cell for the T-15";
		ammo="MET_blasterbolt_br";
		mass = 25;
		tracersEvery=1;
	};
	class MET_E15_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=250;
		displayName="[16th] E-15 Energy Cell";
		displayNameShort="E-15 Energy Cell";
		descriptionShort="Energy cell for the E-15";
		ammo="MET_blasterbolt_light_blue";
		mass = 60;
		tracersEvery=1;
	};
	class MET_blaster_battery: 100Rnd_65x39_caseless_mag
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model="\MRC\JLTS\weapons\z6\z6_mag.p3d";
		count=300;
		displayName="[16th] Z6 Energy Cell";
		displayNameShort="Z6 Energy Cell";
		descriptionShort="Energy cell for the Z6";
		ammo="MET_blasterbolt_low";
		tracersEvery=1;
		initSpeed=250;
		mass=50;
	};
	class MET_blaster_battery_heavy: 100Rnd_65x39_caseless_mag
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_b.paa";
		model="\MRC\JLTS\weapons\z6\z6_mag.p3d";
		count=10000;
		displayName="[16th] Z6 Heavy Energy Cell";
		displayNameShort="Z6 Energy Cell";
		descriptionShort="Energy cell for the Z6";
		ammo="MET_blasterbolt_low";
		tracersEvery=1;
		initSpeed=250;
		mass=100;
	};
	class MET_blaster_battery_green: MET_blaster_battery
	{
		author="Hazmat";
		scope=2;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_g.paa";
		displayName="[16th] Z6 Energy Cell (Green)";
		displayNameShort="Z6 Energy Cell (Green)";
		ammo="MET_blasterbolt_low_green";
	};class MET_Chaingun_Light_Drum_Mag: CA_LauncherMagazine
	{
		author="Hazmat and 3AS";
		scope=2;
		displayName="[16th] Chaingun Drum";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_chain.paa";
		initSpeed=200;
		descriptionShort="Type: Chaingun ammo<br />Rounds: 1<br />Used in: Chaingun";
		displaynameshort="Heavy Blaster";
		ammo="MET_light_Chaingun_Ammo";
		type="2*  256";
		mass=100;
		count=200;
	};
	class MET_Chaingun_AT_Drum_Mag: CA_LauncherMagazine
	{
		author="Hazmat and 3AS";
		scope=2;
		displayName="[16th] 600 Rnd AT Chaingun Drum";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_chain.paa";
		initSpeed=200;
		descriptionShort="Type: Chaingun ammo<br />Rounds: 1<br />Used in: Chaingun";
		displaynameshort="AT";
		ammo="MET_AT_Chaingun_Ammo";
		type="2*  256";
		mass=60;
		count=600;
	};
	class MET_Chaingun_HE_Drum_Mag: CA_LauncherMagazine
	{
		author="Hazmat and 3AS";
		scope=2;
		displayName="[16th] 600 Rnd HE Chaingun Drum";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_chain.paa";
		initSpeed=200;
		descriptionShort="Type: Chaingun ammo<br />Rounds: 1<br />Used in: Chaingun";
		displaynameshort="HE";
		ammo="MET_HE_Chaingun_Ammo";
		type="2*  256";
		mass=60;
		count=600;
	};
	class MET_Chaingun_Nuke_Drum_Mag: CA_LauncherMagazine
	{
		author="Hazmat and 3AS";
		scope=1;
		displayName="[16th] 600 Rnd HE Chaingun Drum";
		model="\A3\weapons_f\launchers\RPG32\pg32v_rocket_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_chain.paa";
		initSpeed=200;
		descriptionShort="Type: Chaingun ammo<br />Rounds: 1<br />Used in: Chaingun";
		displaynameshort="HE";
		ammo="MET_Nuke_Chaingun_Ammo";
		type="2*  256";
		mass=60;
		count=600;
	};
};