class CfgPatches
{
	class metal_rep_gl_smoke_clust_magazines
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		magazines[]=
		{
			"MET_SMKW_Clust_Grenade",
			"MET_SMKB_Clust_Grenade",
			"MET_SMKG_Clust_Grenade",
			"MET_SMKO_Clust_Grenade",
			"MET_SMKP_Clust_Grenade",
			"MET_SMKR_Clust_Grenade",
			"MET_SMKTE_Clust_Grenade",
			"MET_SMKTU_Clust_Grenade",
			"MET_SMKY_Clust_Grenade"
		};
		requiredAddons[]=
		{
			"metal_weapons"
		};
	};
};
class CfgMagazines
{
	class MET_SMKW_Grenade;
	class MET_SMKB_Grenade;
	class MET_SMKG_Grenade;
	class MET_SMKO_Grenade;
	class MET_SMKP_Grenade;
	class MET_SMKR_Grenade;
	class MET_SMKTE_Grenade;
	class MET_SMKTU_Grenade;
	class MET_SMKY_Grenade;
	class MET_SMKW_Clust_Grenade: MET_SMKW_Grenade
	{
		displayName="[16th] White Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster White Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_White";
	};
	class MET_SMKB_Clust_Grenade: MET_SMKB_Grenade
	{
		displayName="[16th] Blue Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster Blue Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_Blue";
	};
	class MET_SMKG_Clust_Grenade: MET_SMKG_Grenade
	{
		displayName="[16th] Green Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster Green Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_Green";
	};
	class MET_SMKO_Clust_Grenade: MET_SMKO_Grenade
	{
		displayName="[16th] Orange Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster Orange Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_Orange";
	};
	class MET_SMKP_Clust_Grenade: MET_SMKP_Grenade
	{
		displayName="[16th] Purple Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster Purple Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_Purple";
	};
	class MET_SMKR_Clust_Grenade: MET_SMKR_Grenade
	{
		displayName="[16th] Red Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster Red Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_Red";
	};
	class MET_SMKTE_Clust_Grenade: MET_SMKTE_Grenade
	{
		displayName="[16th] Teal Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster Teal Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_Teal";
	};
	class MET_SMKTU_Clust_Grenade: MET_SMKTU_Grenade
	{
		displayName="[16th] Turquoise Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster Turquoise Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_Turquoise";
	};
	class MET_SMKY_Clust_Grenade: MET_SMKY_Grenade
	{
		displayName="[16th] Yellow Smoke Cluster Grenade";
		displayNameShort="[16th] Cluster Yellow Smoke Grenade";
		descriptionShort="Cluster Smoke";
		ammo="MET_GL_Smoke_Clust_Yellow";
	};
};