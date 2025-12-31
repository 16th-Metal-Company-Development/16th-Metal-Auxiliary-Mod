class cfgPatches
{
	class MET_Patch_grenades_offensive
	{
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"ace_grenades"
		};
		units[]={};
		weapons[]={};
		magazines[]=
		{
			"MET_Weapons_Mags_Ctype",
			//"MET_Weapons_Mags_CISDetonator",
			"MET_Weapons_Mags_flashnade",
			"MET_Weapons_Mags_Thermal_Detonator",
			"MET_Weapons_Mags_Thermal_Imploder",
			"MET_Weapons_Mags_Thermal_Impacter"
			
		};
		ammo[]=
		{
			"MET_Weapons_Ammo_Grenades_Detonator",
			"MET_Weapons_Ammo_Grenades_Imploder",
			"MET_Weapons_Ammo_Grenades_Impacter",
			"MET_Weapons_Ammo_Grenades_Ctype",
			//"MET_Weapons_Ammo_Grenades_CISDetonator",
			"MET_Weapons_Ammo_Grenades_flash"
		};
	};
};
class CfgMagazines
{
	class HandGrenade;
	class ACE_M84;
	class MET_Weapons_Mags_Thermal_Detonator: HandGrenade
	{
		author="16th Aux Team";
		scope=2;
		scopearsenal=2;
		displayName="[16th] Thermal Detonator";
		displayNameShort="Thermal Detonator";
		descriptionShort="Offensive Grenade";
		type=256;
		value=1;
		count=1;
		initSpeed=20;
		mass=8;
		nameSound="handgrenade";
		maxLeadSpeed=7;
		ammo="MET_Weapons_Ammo_Grenades_Detonator";
		model="\kobra\442_weapons\explosive\thermal_det.p3d";
		picture="\3AS\3AS_Equipment\UI\Thermal_Detonator_UI_ca.paa";
		uipicture="\3AS\3AS_Equipment\UI\Thermal_Detonator_UI_ca.paa";
	};
	class MET_Weapons_Mags_Thermal_Imploder: MET_Weapons_Mags_Thermal_Detonator
	{
		displayName="[16th] Thermal Imploder";
		displayNameShort="Thermal Imploder";
		descriptionShort="Defense Grenade";
		picture="\3AS\3AS_Equipment\UI\Baradium_Core_UI_ca.paa";
		uiPicture="\3AS\3AS_Equipment\UI\Baradium_Core_UI_ca.paa";
    	model="\3AS\3AS_Equipment\model\3AS_coredetonator.p3d";
		ammo="MET_Weapons_Ammo_Grenades_Imploder";
		//WBK_PlasmaKill_Color_String_Int = "Red";
		//WBK_UseDisintegrate = "true";
		initSpeed=16;
		mass=10;
	};
	class MET_Weapons_Mags_Thermal_Impacter: MET_Weapons_Mags_Thermal_Detonator
	{
		displayName="[16th] Impact Grenade";
		displayNameShort="Impact Grenade";
		descriptionShort="Clone Impact Grenade";
		ammo="MET_Weapons_Ammo_Grenades_Impacter";
		model="\kobra\442_weapons\explosive\impact_grenade.p3d";
		picture="z\MET\addons\grenades\data\ui\MET_icon_mag_rep_nade_thermal_impacter_ui_ca.paa";
		UiPicture="z\MET\addons\grenades\data\ui\MET_icon_mag_rep_nade_thermal_impacter_ui_ca.paa";
		initSpeed=25;
	};
	class MET_Weapons_Mags_Thermal_Penetrator: MET_Weapons_Mags_Thermal_Detonator
	{
		scope=1;
		displayName="[16th] Thermal Stick";
		displayNameShort="Thermal Stick";
		descriptionShort="Stick Grenade";
		picture="\Indecisive_Armoury_Ammos\Data\Thermal_Penetrator\Thermal_Penetrator_UI.paa";
		model="\Indecisive_Armoury_Ammos\Data\Thermal_Penetrator\IDA_Thermal_Penetrator.p3d";
		ammo="MET_Thermal_Penetrator_Ammo";
		//WBK_PlasmaKill_Color_String_Int = "Red";
		//WBK_UseDisintegrate = "true";
		initSpeed=16;
		mass=10;
	};
	class MET_Weapons_Mags_Ctype: MET_Weapons_Mags_Thermal_Detonator
	{
		displayName="[16th] Throwable C-Type";
		displayNameShort="Throwable C-Type";
		descriptionShort="Clone Satchel Charge";
		type="2*  256";
		value=5;
		mass=60;
		initSpeed=12;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622776,
			1,
			10
		};
		ammo="MET_Weapons_Ammo_Grenades_Ctype";
		picture="z\MET\addons\grenades\data\ui\met_icon_mag_rep_nade_dtype_ui_ca.paa";
		uiPicture="z\MET\addons\grenades\data\ui\met_icon_mag_rep_nade_dtype_ui_ca.paa";
		model="ls_weapons\explosives\detPack\ls_explosives_detpack";
	};
	/*class MET_Weapons_Mags_CISDetonator: MET_Weapons_Mags_Thermal_Detonator
	{
		displayName="[16th] CIS Detonator";
		displayNameShort="CIS Detonator";
		descriptionShort="Droid Frag Grenade";
		ammo="MET_Weapons_Ammo_Grenades_CISDetonator";
		model="ls_weapons\grenades\thermalDet\ls_grenade_thermalDet";
		picture="z\MET\addons\grenades\data\UI\MET_icon_mag_cis_nade_thermal_det_ui_ca.paa";
	};*/
	class MET_Weapons_Mags_flashnade: ACE_M84
	{
		author="501st Aux Team";
		displayName="[16th] C-25 Flash Grenade";
		displayNameShort="Flash Grenade";
		descriptionShort="Clone Wars Flashbang";
		model="\MRC\JLTS\weapons\Grenades\grenade_emp.p3d";
		ammo="MET_Weapons_Ammo_Grenades_flash";
		picture="\MRC\JLTS\weapons\grenades\data\ui\grenade_emp_ui_ca.paa";
	};
};
class CfgAmmo
{
	class grenade;
	class ACE_G_M84;
	class MET_Weapons_Ammo_Grenades_Detonator: grenade
	{
		hit=18;
		indirectHit=14;
		indirectHitRange=8;
		ace_grenades_pullPinSound[]=
		{
			"\ls\core\addons\sounds\weapons\grenade\pin.wss",
			3,
			1,
			10
		};
		model="\kobra\442_weapons\explosive\thermal_det.p3d";
		explosionEffectsRadius=1.5;
		suppressionRadiusHit=24;
		typicalspeed=18;
		visibleFire=0.5;
		audibleFire=0.050000001;
		visibleFireTime=1;
		fuseDistance=0;
		soundFly[]=
		{
			"212th\Weapons\212th_Grenades\aux212_thermal_detonators\data\sounds\thermal_detonator_armed.ogg",
			2,
			1,
			1300
		};
		SoundSetExplosion[]=
		{
			"MET_soundset_rep_thermal_detonator_exp",
			"GrenadeHe_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		class CamShakeExplode
		{
			distance=99.817802;
			duration=1;
			frequency=20;
			power=6;
		};
		class NVGMarkers
		{
			class Blinking1
			{
			};
			/*class IRMarker
			{
				name = "IR_marker";
				color[] = {0, 1, 0, 1};
				ambient[] = {0, 1, 0, 1};
				brightness = 0.05;
				onlyInNvg = 1;
				blinking = 1;
			};*/
			/*class Blinking1
			{
				name="blinkpos1";
				color[]={0.0099999998,0.0099999998,0.0099999998,1};
				ambient[]={0.0049999999,0.0049999999,0.0049999999,1};
				blinking=1;
				brightness=0.0020000001;
				onlyInNvg=1;
			};
			class Blinking2
			{
				color[]={0.89999998,0.1,0.1};
				ambient[]={0.1,0.1,0.1};
				name="blinkpos2";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
				brightness=0.0020000001;
				dayLight=1;
				onlyInNvg=0;
				intensity=75;
				drawLight=1;
				activeLight=0;
				useFlare=0;
			};*/
		};
	};
	class MET_Weapons_Ammo_Grenades_IR: grenade
	{
		author = "16th Aux Team";
		displayName = "[16th] IR Grenade";
		scope = 0;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		simulation = "shotSmokeX";
		model = "\A3\Weapons_F\ammo\smokegrenade_white.p3d";
		timeToLive = 25;
		fuseDistance = 0;
		smokeColor[] = {0.1, 1, 0.1, 1}; // Greenish for IR, adjust as needed
		effectsSmoke = "SmokeShellWhite";
		SoundSetExplosion[] = {};
		class NVGMarkers
		{
			class IRMarker
			{
				name = "IR_marker";
				color[] = {0, 1, 0, 1};
				ambient[] = {0, 1, 0, 1};
				brightness = 0.05;
				onlyInNvg = 1;
				blinking = 1;
			};
		};
	};
	class MET_Weapons_Ammo_Grenades_Base: grenade
	{
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] = { "ACE_frag_tiny", "ACE_frag_small", "ACE_frag_medium" };
		ace_frag_metal = 50;
		ace_frag_charge = 100;
		ace_frag_gurney_c = 2843;
		ace_frag_gurney_k = "3/5";
		hit = 10;
		indirectHit = 8;
		indirectHitRange = 5;
		typicalspeed = 20;
		fuseDistance = 0;
		explosionEffects = "GrenadeExplosion";
		CraterEffects = "GrenadeCrater";
		soundFly[] = { "A3\sounds_f\weapons\explosions\explosion_grenade_1", 1, 1, 200 };
		SoundSetExplosion[] = { "Grenade_Exp_SoundSet", "Grenade_Tail_SoundSet", "Explosion_Debris_SoundSet" };
		model = "\A3\Weapons_F\ammo\handgrenade.p3d";
		timeToLive = 10;
	};
	class MET_Weapons_Ammo_Grenades_Imploder: grenade
	{
		ace_advanced_throwing_torqueDirection[]={1,1,0};
		ace_advanced_throwing_torqueMagnitude="(50 + random 100) * selectRandom [1, -1]";
		hit=40;
		indirectHit=40;
		indirectHitRange=16;
		simulation="shotGrenade";
		ace_grenades_pullPinSound[]=
		{
			"\ls\core\addons\sounds\weapons\grenade\pin_long.wss",
			1.5,
			1,
			10
		};
		soundFly[]=
		{
			"z\MET\addons\grenades\data\sounds\imploder_flyby.wss",
			2,
			1,
			90
		};
		SoundSetExplosion[]=
		{
			"MET_soundset_thermal_imploder_exp"
		};
		ace_frag_enabled=1;
		ace_frag_skip=0;
		ace_frag_force=1;
		ace_frag_classes[]=
		{
			"ACE_frag_large_HD"
		};
		ace_frag_metal=210;
		ace_frag_charge=185;
		ace_frag_gurney_c=2843;
		ace_frag_gurney_k="3/5";
		model="\3AS\3AS_Equipment\model\3AS_coredetonator.p3d";
	};
	class MET_Weapons_Ammo_Grenades_Impacter: MET_Weapons_Ammo_Grenades_Detonator
	{
		hit = 200;
		indirectHit = 45;
		indirectHitRange = 2;
		fuseDistance = 0.5;
		explosionTime = 0;
		simulation = "shotShell";
		model = "\kobra\442_weapons\explosive\impact_grenade.p3d";
		SoundSetExplosion[] =
		{
			"GrenadeHe_Exp_SoundSet",
			"GrenadeHe_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class OPTRE_sticky_c7_explosion;
	class MET_Weapons_Ammo_Grenades_Ctype: OPTRE_sticky_c7_explosion
	{
		hit=3000;
		indirectHit=2500;
		indirectHitRange=10;
		typicalspeed=40;
		explosionTime=10;
		timeToLive=20;
		model="3AS\3AS_Equipment\model\RTX_Bomb.p3d";
		//model="3AS\3AS_Equipment\model\annihilatorbomb.p3d";
		simulation="shotGrenade";
		soundFly[]=
		{
			"3AS\3AS_Equipment\SFX\td.ogg",
			20,
			1,
			200
		};
		SoundSetExplosion[]=
		{
			"MET_soundset_ctype_exp"
		};
		ExplosionEffects="MineNondirectionalExplosion";
		CraterEffects="MineNondirectionalCrater";
		class NVGMarkers
		{
			class Blinking1
			{
				name="blinkpos1";
				color[]={0.0099999998,0.0099999998,0.0099999998,1};
				ambient[]={0.0049999999,0.0049999999,0.0049999999,1};
				blinking=1;
				brightness=0.0020000001;
				onlyInNvg=1;
			};
			class Blinking2
			{
				color[]={0.89999998,0.1,0.1};
				ambient[]={0.1,0.1,0.1};
				name="blinkpos2";
				blinking=1;
				blinkingStartsOn=1;
				blinkingPattern[]={0.1,0.89999998};
				blinkingPatternGuarantee=1;
				drawLightSize=0.34999999;
				drawLightCenterSize=0.050000001;
				brightness=0.0020000001;
				dayLight=1;
				onlyInNvg=0;
				intensity=75;
				drawLight=1;
				activeLight=0;
				useFlare=0;
			};
		};
		class LightEffects
		{
			class StrobeLight
			{
				color[] = {1, 0, 0, 1}; // Red
				ambient[] = {1, 0, 0, 1};
				intensity = 50;
				size = 0.3;
				brightness = 0.05;
				blinking = 1;
				blinkingPattern[] = {0.7, 0.3}; // Slow strobe: 0.7s off, 0.3s on
				blinkingPatternGuarantee = 1;
				onlyInNvg = 0;
				useFlare = 0;
			};
			class StrobeLightFast: StrobeLight
			{
				blinkingPattern[] = {0.2, 0.1}; // Fast strobe: 0.2s off, 0.1s on
			};
		};
		class EventHandlersLight
		{ 
			init = "_this spawn { params ['_ammo']; private _ttl = getNumber (configFile >> 'CfgAmmo' >> typeOf _ammo >> 'timeToLive'); waitUntil { !isNull (_ammo getVariable ['projectile', objNull]) }; private _proj = _ammo getVariable ['projectile', objNull]; _proj setVariable ['strobeState', 'slow', true]; _proj setLightEffect ['StrobeLight']; sleep (_ttl - 2); _proj setVariable ['strobeState', 'fast', true]; _proj setLightEffect ['StrobeLightFast']; };";
		};
		class EventHandlers
		{
			init = "_this spawn { params ['_ammo']; waitUntil { !isNull (_ammo getVariable ['projectile', objNull]) }; _proj = _ammo getVariable ['projectile', objNull]; _proj addEventHandler ['HitPart', { params ['_projectile', '_hitPart', '_damage', '_instigator', '_hitPoint', '_hitEntity']; if (_hitEntity isKindOf 'LandVehicle' || _hitEntity isKindOf 'Air' || _hitEntity isKindOf 'Ship') then { _projectile attachTo [_hitEntity, [0,0,0]]; }; }]; };";
		};
	};
	/*class MET_Weapons_Ammo_Grenades_CISDetonator: MET_Weapons_Ammo_Grenades_Detonator
	{
		hit=10;
		indirectHit=8;
		indirectHitRange=6;
		cost=80;
		model="\ls_weapons\grenades\thermalDet\ls_grenade_thermaldet";
		soundFly[]=
		{
			"\kobra\442_weapons\sounds\thermal_det\thermal_det.wss",
			1.5,
			1,
			90
		};
		SoundSetExplosion[]=
		{
			"MET_soundset_cis_thermal_detonator_exp",
			"GrenadeHe_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};*/
	class MET_Weapons_Ammo_Grenades_flash: ACE_G_M84
	{
		timeToLive=4.5;
		simulation="shotSmokeX";
		model="\MRC\JLTS\weapons\Grenades\grenade_emp.p3d";
		SoundSetExplosion[]=
		{
			"MET_soundset_flash_stun_exp",
			"GrenadeHe_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
	};
	class IDA_grenade_Penetrator_ammo;
	class MET_Thermal_Penetrator_Ammo: IDA_grenade_Penetrator_ammo
	{
		hit=1;
		indirectHit=2000;
		indirectHitRange=0.5;
		dangerRadiusHit=120;
		suppressionRadiusHit=120;
		explosionEffectsRadius=100;
		explosive=1;
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_classes[] = { "ACE_frag_tiny", "ACE_frag_small", "ACE_frag_medium" };
		ace_frag_metal = 30;
		ace_frag_charge = 50;
		ace_frag_gurney_c = 2000;
		ace_frag_gurney_k = "3/5";
	};
};
class CfgSoundShaders
{
	class MET_SoundShader_rep_thermaldetonator_closeExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\rep_thermal_det_explode.wss",
				1
			}
		};
		volume=1;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{70,0}
		};
	};
	class MET_SoundShader_rep_thermaldetonator_midExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\rep_thermal_det_explode.wss",
				1
			}
		};
		volume=1;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{500,0},
			{2200,0}
		};
	};
	/*class MET_SoundShader_cis_thermaldetonator_closeExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\cis_thermal_det_explode.wss",
				1
			}
		};
		volume=2;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{70,0}
		};
	};
	class MET_SoundShader_cis_thermaldetonator_midExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\cis_thermal_det_explode.wss",
				1
			}
		};
		volume=2;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{500,0},
			{2200,0}
		};
	};*/
	class MET_SoundShader_thermalimploder_closeExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\thermal_imploder_explosion.wss",
				1
			}
		};
		volume=2;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{70,0}
		};
	};
	class MET_SoundShader_ctype_closeExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\throwable_ctype_explosion.wss",
				1
			}
		};
		volume=2;
		range=90;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{70,0}
		};
	};
	class MET_SoundShader_ctype_midExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\throwable_ctype_explosion.wss",
				1
			}
		};
		volume=2;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{500,0},
			{2200,0}
		};
	};
	class MET_SoundShader_flash_stun_closeExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\thermal_stunner_explosion.wss",
				1
			}
		};
		volume=2;
		range=90;
		rangeCurve[]=
		{
			{0,1},
			{50,0.75},
			{70,0}
		};
	};
	class MET_SoundShader_flash_stun_midExp
	{
		samples[]=
		{
			
			{
				"z\MET\addons\grenades\data\sounds\thermal_stunner_explosion.wss",
				1
			}
		};
		volume=2;
		range=2200;
		rangeCurve[]=
		{
			{0,1},
			{100,1},
			{500,0},
			{2200,0}
		};
	};
};
class CfgSoundSets
{
	class MET_soundset_rep_thermal_detonator_exp
	{
		soundShaders[]=
		{
			"MET_SoundShader_rep_thermaldetonator_closeExp",
			"MET_SoundShader_rep_thermaldetonator_midExp"
		};
		volumeFactor=1;
		volumeCurve="InverseSquare2Curve";
		spatial=1;
		doppler=0;
		loop=0;
		sound3DProcessingType="ExplosionLight3DProcessingType";
		distanceFilter="explosionDistanceFreqAttenuationFilter";
	};
	/*class MET_soundset_cis_thermal_detonator_exp: MET_soundset_rep_thermal_detonator_exp
	{
		soundShaders[]=
		{
			"MET_SoundShader_cis_thermaldetonator_closeExp",
			"MET_SoundShader_cis_thermaldetonator_midExp"
		};
	};*/
	class MET_soundset_thermal_imploder_exp: MET_soundset_rep_thermal_detonator_exp
	{
		soundShaders[]=
		{
			"MET_SoundShader_thermalimploder_closeExp"
		};
	};
	class MET_soundset_ctype_exp: MET_soundset_rep_thermal_detonator_exp
	{
		soundShaders[]=
		{
			"MET_SoundShader_ctype_closeExp",
			"MET_SoundShader_ctype_midExp"
		};
	};
	class MET_soundset_flash_stun_exp: MET_soundset_rep_thermal_detonator_exp
	{
		soundShaders[]=
		{
			"MET_SoundShader_flash_stun_closeExp",
			"MET_SoundShader_flash_stun_midExp"
		};
	};
};
