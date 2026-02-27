class CfgPatches
{
	class metal_rep_smg_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_CinCar_Mag",
			"MET_DC15SMG_Mag"
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
	class MET_CinCar_Mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_g.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=100;
		displayName="[16th] Cinnagaran Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-15A, DC-15S, and DC-15L";
		ammo="MET_blasterbolt_low_green";
		tracersEvery=1;
		mass = 12;
	};
	class MET_DC15SMG_Mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_B.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=100;
		displayName="[16th] DC-15SMG Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DC-15A, DC-15S, and DC-15L";
		ammo="MET_blasterbolt_low";
		tracersEvery=1;
		mass = 12;
	};
};