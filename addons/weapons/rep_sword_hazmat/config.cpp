class CfgPatches
{
	class met_rep_sword_hazmat
	{
		author="";
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"met_sword_v1",
            "met_sword_v2",
            "met_sword_v3"
		};
		skipWhenMissingDependencies=1;
		/*requiredAddons[]=
		{
			"3AS_Weapons_Republic_DC15L"
		};*/
	};
};
class CfgWeapons
{
    class WBK_pipeStyledSword;
	class met_sword_v1: WBK_pipeStyledSword
	{
		scope=2;
		author="Hazmat";
		displayName="[16th] Andlát'gath";
		descriptionshort="Andlát'gath<br/>Bringer of Death";
		//picture="\1400_ad_weapons\data\icons\icon_greatsword1_ca.paa";
		model="z\MET\addons\weapons\rep_sword_hazmat\data\zweil.p3d";
		IMS_Melee_Param_Damage=0.75;
		IMS_Melee_Param_Damage_Minimal=0.4;
		IMS_Melee_Param_Sounds="[""generis_empty_1"",""generis_empty_2"",""generis_empty_3"",""generis_empty_4"",""generis_empty_5""]";
		IMS_Melee_Param_SoundsOnBlock="[""sword_to_sword_1"",""sword_to_sword_2"",""sword_to_sword_3"",""sword_to_sword_4""]";
		IMS_Melee_Param_SoundsOnHit="[""sword_hit_1"",""sword_hit_2"",""sword_hit_3"",""sword_hit_4"",""sword_hit_5"",""sword_hit_6""]";
		IMS_WeaponType="GreatSwordAlike";
		IMS_ExecutionType="Axe";
		//IMS_WeaponEventHandler_Special="[player] spawn AD1400_fnc_ToggleWeapon;";
        IMS_WeaponEventHandler_Special="[player, 'met_sword_v2'] spawn WBK_IMS_WeaponAbility_Rotate;";
		//IMS_Melee_Param_CustomHolsteringPosition="[[-0.25,0,0],""Pelvis"",[180,-60,110],""IMS_Weapon_Switch_Default"",""IMS_Weapon_Switch_Back_ToRifle""]";
		IMS_Melee_Param_SoundOnDraw="sword_unsheat";
		IMS_Melee_Param_SoundOnHide="sword_hide";
		opticsZoomMin=0.69999999;
		opticsZoomMax=0.69999999;
		opticsZoomInit=0.69999999;
	};
	class met_sword_v2: met_sword_v1
	{
		scope=1;
		author="Luca/Rogue771";
		//descriptionshort="Base Damage: 0.4<br/>Supports multiple Stances";
		picture="\1400_ad_weapons\data\icons\icon_greatsword2_ca.paa";
		//1400_ad_Stance="Light-Attack";
		IMS_WeaponEventHandler_Special="[player, 'met_sword_v3'] spawn WBK_IMS_WeaponAbility_Rotate;";
		IMS_Melee_Param_Sounds="[""sword_empty_1"",""sword_empty_2"",""sword_empty_3"",""sword_empty_4"",""sword_empty_5"",""sword_empty_6""]";
		IMS_Melee_Param_Damage=0.6;
		IMS_Melee_Param_Damage_Minimal=0.30;
		IMS_WeaponType="TwoHanded";
	};
	class met_sword_v3: met_sword_v1
	{
        scope=1;
		author="Luca/Rogue771";
		//descriptionshort="Base Damage: 0.35<br/>Supports multiple Stances";
		picture="\1400_ad_weapons\data\icons\icon_greatsword3_ca.paa";
		//1400_ad_Stance="Half-Swording";
		IMS_WeaponEventHandler_Special="[player, 'met_sword_v1'] spawn WBK_IMS_WeaponAbility_Rotate;";
		IMS_Melee_Param_Sounds="[""sword_empty_1"",""sword_empty_2"",""sword_empty_3"",""sword_empty_4"",""sword_empty_5"",""sword_empty_6""]";
		IMS_Melee_Param_Damage=0.45;
		IMS_Melee_Param_Damage_Minimal=0.4;
		IMS_WeaponType="Poleax";
	};
};