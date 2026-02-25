class CfgPatches
{
	class metal_rep_snp_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_Valken_mag",
			"MET_ARC_773_mag",
			"MET_DC15x_mag",
			"MET_DC15xm_mag",
			"MET_DC15xm_mag_red",
			"MET_DC15xm_mag_Yellow",
			"MET_DC15xm_mag_Orange",
			"MET_DC19X_Mag",
			"MET_DC15x_at_mag",
			"MET_DC15xm_at_mag"
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
	class MET_Valken_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=20;
		displayName="[16th] Valken Energy Cell";
		displayNameShort="Valken Energy Cell";
		descriptionShort="Energy cell for the Valken-38x";
		ammo="MET_blasterbolt_dmr";
		tracersEvery=1;
		initSpeed = 1250;
		mass=20;
	};
	class MET_ARC_773_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=25;
		displayName="[16th] Firepuncher Energy Cell";
		displayNameShort="Firepuncher Energy Cell";
		descriptionShort="Energy cell for the Firepuncher";
		ammo="MET_blasterbolt_dmr";
		tracersEvery=1;
		initSpeed = 1250;
		mass=20;
	};
	class MET_DC15x_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=10;
		displayName="[16th] DC-15X Energy Cell";
		displayNameShort="DC-15X Energy Cell";
		descriptionShort="Energy Cell for the DC-15X";
		ammo="MET_blasterbolt_snp";
		tracersEvery=1;
		initSpeed = 1650;
		mass=20;
	};
	class MET_DC15xm_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=5;
		displayName="[16th] DC-15XM Energy Cell";
		displayNameShort="DC-15XM Energy Cell";
		descriptionShort="Energy Cell for the DC-15XM";
		ammo="MET_blasterbolt_antimat";
		WBK_PlasmaKill_Color_String_Int = "Blue";
		WBK_UseDisintegrate = "true";
		tracersEvery=1;
		initSpeed = 3200;
		mass=20;
	};
	class MET_DC15xm_mag_red: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		Scope=2;
		scopeArsenal=2;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=5;
		displayName="[16th] DC-15XM Energy Cell Red";
		displayNameShort="DC-15XM Energy Cell";
		descriptionShort="Energy Cell for the DC-15XM";
		ammo="MET_blasterbolt_antimat_Red";
		WBK_PlasmaKill_Color_String_Int = "Red";
		WBK_UseDisintegrate = "true";
		tracersEvery=1;
		initSpeed = 2650;
		mass=20;
	};
	class MET_DC15xm_mag_Yellow: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		Scope=2;
		scopeArsenal=2;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_y.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=5;
		displayName="[16th] DC-15XM Energy Cell Yeller";
		displayNameShort="DC-15XM Energy Cell";
		descriptionShort="Energy Cell for the DC-15XM";
		ammo="MET_blasterbolt_antimat_Yellow";
		WBK_PlasmaKill_Color_String_Int = "Yellow";
		WBK_UseDisintegrate = "true";
		tracersEvery=1;
		initSpeed = 2650;
		mass=20;
	};
	class MET_DC15xm_mag_Orange: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		Scope=2;
		scopeArsenal=2;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_o.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=5;
		displayName="[16th] DC-15XM Energy Cell Orange";
		displayNameShort="DC-15XM Energy Cell";
		descriptionShort="Energy Cell for the DC-15XM";
		ammo="MET_blasterbolt_antimat_Orange";
		WBK_PlasmaKill_Color_String_Int = "Orange";
		WBK_UseDisintegrate = "true";
		tracersEvery=1;
		initSpeed = 2650;
		mass=20;
	};
	class MET_DC19X_Mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_b.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=10;
		displayName="[16th] DC-15X Stealth Energy Cell";
		displayNameShort="DC-15X Stealth Energy Cell";
		descriptionShort="Energy Cell for the DC-19X";
		ammo="MET_blasterbolt_snp_STLTH";
		tracersEvery=1;
		initSpeed = 1650;
		mass=20;
	};
	class MET_DC15x_at_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_g.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=5;
		displayName="[16th] DC-15X Ionized Energy Cell";
		displayNameShort="Ionized Energy Cell";
		descriptionShort="Ionized Energy Cell for the DC-15X";
		ammo="MET_blasterbolt_at_green";
		WBK_PlasmaKill_Color_String_Int = "Green";
		WBK_UseDisintegrate = "true";
		tracersEvery=1;
		initSpeed = 1650;
		mass=50;
	};
	class MET_DC15xm_at_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_g.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=2;
		displayName="[16th] DC-15XM Ionized Energy Cell";
		displayNameShort="Ionized Energy Cell";
		descriptionShort="Ionized Energy Cell for the DC-15XM";
		ammo="MET_blasterbolt_antimatat_Green";
		WBK_PlasmaKill_Color_String_Int = "Green";
		WBK_UseDisintegrate = "true";
		tracersEvery=1;
		initSpeed = 3000;
		mass=50;
	};

};