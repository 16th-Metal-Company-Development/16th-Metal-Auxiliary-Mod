class CfgPatches
{
	class metal_rep_rifle_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_DC15A_mag",
			"MET_DC15S_Mag",
			"MET_DC19E_mag",
			"MET_DC15LE_mag",
			"MET_DC17M_mag",
			"MET_DC17M_Red_mag",
			"MET_DC17M_Sniper_mag",
			"MET_DC17M_Sniper_Red_mag",
			"MET_DC17M_Grenade"
		};
		requiredAddons[]=
		{
			"metal_weapons"
		};
	};
};
class CfgMagazines
{
	class JLTS_DC15A_mag;
	class CA_Magazine;
	class MET_DC15A_mag: CA_Magazine
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecialIsProxy=1;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		modelSpecial = "\ShadowLegion_Weapons\data\Magazines\DC15\Models\DC15_Mag.p3d";
		count=40;
		displayName="[16th] DC-15A Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-15A, and DC-15L </br>Ammo Count=40";
		ammo="MET_blasterbolt";
		tracersEvery=1;
		scope=2;
		mass=10;
	};
	class MET_DC15A_stendo_mag: MET_DC15A_mag
	{
		count=75;
		displayName="[16th] Valken-38r Extended Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the Valken-38r </br>Ammo Count=75";
		mass=18;
	};
	class MET_DC15AM_Mag : JLTS_DC15A_mag
	{
		JLTS_hasElectronics = 1;
		JLTS_hasEMPProtection = 1;
		author = "Chet";
		modelSpecial = "";
		modelSpecialIsProxy = 0;
		picture = "\3AS\3AS_Weapons\Data\UI\3as_sniper_g.paa";
		model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count = 1;
		displayName = "[16th] DC-15AM Slug";
		displayNameShort = "Slug";
		descriptionShort = "Hiss";
		ammo = "MET_blasterbolt_at_green";
		WBK_PlasmaKill_Color_String_Int = "Green";
		WBK_UseDisintegrate = "true";
		tracersEvery = 1;
		initSpeed = 1650;
	};
	class MET_DC15S_Mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=1;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model="\MRC\JLTS\weapons\DC15S\DC15S_mag.p3d";
		count=60;
		displayName="[16th] Light Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-15S, DC-15C, and Z6";
		ammo="MET_blasterbolt_low";
		tracersEvery=1;
	};
	class MET_DC19E_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial = "\ShadowLegion_Weapons\data\Magazines\DC15\Models\DC15_Mag.p3d";
		modelSpecialIsProxy=1;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=20;
		displayName="[16th] Stealth Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-19E";
		ammo="MET_blasterbolt_Stealth";
		tracersEvery=1;
		mass=7.5;
		initSpeed = 310;
	};
	class MET_DC15LE_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=30;
		displayName="[16th] DC-15LE Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-15LE";
		ammo="MET_blasterbolt_br";
		tracersEvery=1;
		mass = 12;
	};
	class 3AS_100Rnd_EC40_mag;
	class MET_DC17M_mag: 3AS_100Rnd_EC40_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=60;
		displayName="[16th] DC-17M Energy Cell";
		displayNameShort="DC-17M Energy Cel";
		descriptionShort="Energy cell for the DC-15A, DC-15S, and DC-15L";
		ammo="MET_blasterbolt";
		tracersEvery=1;
	};
	class MET_DC17M_Red_mag: MET_DC17M_mag
	{
		author="Hazmat";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		displayName="[16th] DC-17M Red Energy Cell";
		ammo="MET_blasterbolt_Red";
	};
	class 3AS_5Rnd_EC80_mag;
	class MET_DC17M_Sniper_mag: 3AS_5Rnd_EC80_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=5;
		displayName="[16th] DC-17M Sniper Energy Cell";
		displayNameShort="DC-17M Sniper Energy Cell";
		descriptionShort="Energy Cell for the DC-17M Sniper";
		ammo="MET_blasterbolt_snp";
		tracersEvery=1;
		initSpeed = 1650;
		mass=20;
	};
	class MET_DC17M_Sniper_Red_mag: MET_DC17M_Sniper_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		displayName="[16th] DC-17M Red Sniper Energy Cell";
		ammo="MET_blasterbolt_snp_Red";
	};
	class 3AS_AntiArmour_mag;
	class MET_DC17M_Grenade: 3AS_AntiArmour_mag
	{
		author="Hazmat";
		count=1;
		displayName="[16th] DC-17M AT Grenade";
		displayNameShort="[16th] AT Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_ap.paa";
		descriptionShort="Impact grenade";
		ammo="MET_HEAT_LauncherGrenade";
		mass=6;
	};
};