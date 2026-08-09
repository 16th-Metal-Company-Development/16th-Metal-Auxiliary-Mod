class CfgPatches
{
	class Metal_Air_Magazines
	{
		units[] = {};
		weapons[] = {};
		magazines[] ={};
		requiredAddons[] = 
		{
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Proxies",
            "Metal_Air_Ammo"
		};
	};
};
class CfgMagazines
{
	class 3as_LAAT_1000Rnd_Medium_shells;
	class MET_LAAT_HE_Mag: 3as_LAAT_1000Rnd_Medium_shells
	{
		displayName="HE Medium Cannon Rounds";
		displayNameShort="HE Cannon";
		count=500;
		model="a3\weapons_f\empty.p3d";
		muzzleImpulseFactor[]={0.050000001,0.022};
		nameSound="mgun";
		ammo="Metal_LAAT_HE_Cannon_Shell";
	};
	class MET_LAAT_AP_Mag: MET_LAAT_HE_Mag
	{
		displayName="AP Medium Cannon Rounds";
		displayNameShort="AP Cannon";
		ammo="Metal_LAAT_AP_Cannon_Shell";
	};
	class PylonRack_Missile_AGM_02_x2;
	class MET_Mass_Driver_Missile_Rack: PylonRack_Missile_AGM_02_x2
	{
		displayName="Mass Driver Missiles AA";
		displayNameShort="MDM AA";
		count=32;
		model="3AS\3AS_arc170\Model\torrent_rail_x1";
		ammo="Metal_Mass_Driver_Missile";
	};
	class MET_Mass_Driver_Missile_Rack_AT: MET_Mass_Driver_Missile_Rack
	{
		displayName="Mass Driver Missiles AT";
		displayNameShort="MDM AT";
		count=16;
		model="3AS\3AS_arc170\Model\torrent_rail_x1";
		ammo="Metal_Mass_Driver_Missile_AT";
	};
	class PylonRack_19Rnd_Rocket_Skyfire;
	class MET_Mass_Rocket_Mag: PylonRack_19Rnd_Rocket_Skyfire
	{
		displayName="[16th] Mass Driver Rocket Pod";
		count=19;
		model="\A3\Weapons_F\DynamicLoadout\PylonPod_Rocket_Skyfire_F.p3d";
		muzzlePos="muzzlePos";
		muzzleEnd="muzzleEnd";
		hardpoints[]=
		{
			"B_MISSILE_PYLON",
			"B_SHIEKER"
		};
		pylonWeapon="mass_rocket_Launcher";
		ammo="Metal_Mass_Rocket";
		mass=208;
	};
	class 60RND_40MM_GPR_shells;
	class MET_ARC_MediumMag: 60RND_40MM_GPR_shells
	{
		displayName="Medium Blaster Cannon Rounds";
		displayNameShort="APHE";
		count=1000;
		model="a3\weapons_f\empty.p3d";
		muzzleImpulseFactor[]={0.050000001,0.022};
		nameSound="mgun";
		ammo="Metal_APHE_Cannon_Shell";
	};
	class MET_ARC_CannonMag: 60RND_40MM_GPR_shells
	{
		displayName="Blaster Cannon Rounds";
		displayNameShort="APHE";
		count=1000;
		model="a3\weapons_f\empty.p3d";
		muzzleImpulseFactor[]={0.050000001,0.022};
		nameSound="mgun";
		ammo="Metal_APHE_Cannon_Shell";
	};
};