class CfgPatches
{
	class metal_rep_gl_smoke_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_SMKW_Grenade",
			"MET_SMKB_Grenade",
			"MET_SMKG_Grenade",
			"MET_SMKO_Grenade",
			"MET_SMKP_Grenade",
			"MET_SMKR_Grenade",
			"MET_SMKTU_Grenade",
			"MET_SMKTE_Grenade",
			"MET_SMKY_Grenade",
			"MET_3Rnd_SMKW_Grenade",
			"MET_3Rnd_SMKB_Grenade",
			"MET_3Rnd_SMKG_Grenade",
			"MET_3Rnd_SMKO_Grenade",
			"MET_3Rnd_SMKP_Grenade",
			"MET_3Rnd_SMKR_Grenade",
			"MET_3Rnd_SMKTU_Grenade",
			"MET_3Rnd_SMKTE_Grenade",
			"MET_3Rnd_SMKY_Grenade"
		};
		requiredAddons[]=
		{
			"metal_weapons"
		};
	};
};
class CfgMagazines
{
	class 1Rnd_HE_Grenade_shell;
	class MET_SMKW_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] White Smoke Grenade";
		displayNameShort="[16th] White Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smw.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_white";
		mass=6;
	};
	class MET_SMKB_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Blue Smoke Grenade";
		displayNameShort="[16th] Blue Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smb.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_blue";
		mass=6;
	};
	class MET_SMKG_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Green Smoke Grenade";
		displayNameShort="[16th] Green Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smg.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_green";
		mass=6;
	};
	class MET_SMKO_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Orange Smoke Grenade";
		displayNameShort="[16th] Orange Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smo.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_orange";
		mass=6;
	};
	class MET_SMKP_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Purple Smoke Grenade";
		displayNameShort="[16th] Purple Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smp.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_purple";
		mass=6;
	};
	class MET_SMKR_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Red Smoke Grenade";
		displayNameShort="[16th] Red Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smr.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_red";
		mass=6;
	};
	class MET_SMKTU_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		scope=1;
		count=1;
		displayName="[16th] Turquoise Smoke Grenade";
		displayNameShort="[16th] Turquoise Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smb.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_turquoise";
		mass=6;
	};
	class MET_SMKTE_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		scope=1;
		count=1;
		displayName="[16th] Teal Smoke Grenade";
		displayNameShort="[16th] Teal Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smg.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_teal";
		mass=6;
	};
	class MET_SMKY_Grenade: 1Rnd_HE_Grenade_shell
	{
		author="Hazmat";
		count=1;
		displayName="[16th] Yellow Smoke Grenade";
		displayNameShort="[16th] Yellow Smoke Grenades";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_smy.paa";
		descriptionShort="Smoke grenade";
		ammo="Met_Ammo_smoke_yellow";
		mass=6;
	};
	class MET_3Rnd_SMKW_Grenade: MET_SMKW_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round White Smoke Grenade";
		mass=12;
	};
	class MET_3Rnd_SMKB_Grenade: MET_SMKB_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Blue Smoke Grenade";
		mass=12;
	};
	class MET_3Rnd_SMKG_Grenade: MET_SMKG_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Green Smoke Grenade";
		mass=12;
	};
	class MET_3Rnd_SMKO_Grenade: MET_SMKO_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Orange Smoke Grenade";
		mass=12;
	};
	class MET_3Rnd_SMKP_Grenade: MET_SMKP_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Purple Smoke Grenade";
		mass=12;
	};
	class MET_3Rnd_SMKR_Grenade: MET_SMKR_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Red Smoke Grenade";
		mass=12;
	};
	class MET_3Rnd_SMKTU_Grenade: MET_SMKTU_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Turquoise Smoke Grenade";
		mass=12;
	};
	class MET_3Rnd_SMKTE_Grenade: MET_SMKTE_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Teal Smoke Grenade";
		mass=12;
	};
	class MET_3Rnd_SMKY_Grenade: MET_SMKY_Grenade
	{
		author="Hazmat";
		count=3;
		displayName="[16th] 3 Round Yellow Smoke Grenade";
		mass=12;
	};
};