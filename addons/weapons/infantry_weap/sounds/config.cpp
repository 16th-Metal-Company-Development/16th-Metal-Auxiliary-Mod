class CfgPatches
{
	class MET_Sounds
	{
		author="Hazmat";
		name="MET Sounds";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_anims_F",
			"A3_Weapons_F",
			"A3_Characters_F",
			"JLTS_weapons_Grenades",
			"A3_Characters_F_Proxies"
		};
		units[]={};
		magazines[]={};
		weapons[]={};
	};
};
class CfgSoundSets
{
	class GrenadeHe_Exp_SoundSet;
	class JLTS_plasma_bullet_flyby_soundSet;
	class MET_plasma_bullet_flyby_soundSet: JLTS_plasma_bullet_flyby_soundSet
	{
		soundShaders[]=
		{
			"MET_plasma_bullet_flyby_soundShader"
		};
	};
	class MET_Stupid_bullet_flyby_soundSet: JLTS_plasma_bullet_flyby_soundSet
	{
		soundShaders[]=
		{
			"MET_Stupid_bullet_flyby_soundShader"
		};
	};
	class MET_EMP_Exp_SoundSet: GrenadeHe_Exp_SoundSet
	{
		soundShaders[]=
		{
			"MET_EMP_closeExp_SoundShader",
			"MET_EMP_midExp_SoundShader",
			"MET_EMP_distExp_SoundShader"
		};
	};
	class MET_Imploder_Exp_SoundSet: GrenadeHe_Exp_SoundSet
	{
		soundShaders[]=
		{
			"MET_Imploder_closeExp_SoundShader",
			"MET_Imploder_midExp_SoundShader",
			"MET_Imploder_distExp_SoundShader"
		};
	};
	class MET_Nerf_Exp_SoundSet: GrenadeHe_Exp_SoundSet
	{
		soundShaders[]=
		{
			"MET_Nerf_closeExp_SoundShader",
			"MET_Nerf_midExp_SoundShader",
			"MET_Nerf_distExp_SoundShader"
		};
	};

	// AT-RT Sound Sets
	class ATRT_BlasterCannon_Close_SoundSet
    {
        soundShaders[] = {
            "ATRT_BlasterCannon_Close_SoundShader",
            "BlasterCannon_Bass_Revolver_Close_SoundShader",
            "BlasterCannon_Bass_Close_SoundShader"
        };
        volumeFactor = 1.0;
        spatial = 1;
        loop = 0;
    };

    class ATRT_BlasterCannon_Distant_SoundSet
    {
        soundShaders[] = {
            "ATRT_BlasterCannon_Distant_SoundShader",
            "BlasterCannon_Bass_Revolver_Distant_SoundShader",
            "BlasterCannon_Bass_Distant_SoundShader"
        };
        volumeFactor = 1.0;
        spatial = 1;
        loop = 0;
    };

};
class CfgSoundShaders
{
	class GrenadeHe_closeExp_SoundShader;
	class GrenadeHe_midExp_SoundShader;
	class GrenadeHe_distExp_SoundShader;
	class JLTS_plasma_bullet_flyby_soundShader;
	class MET_plasma_bullet_flyby_soundShader: JLTS_plasma_bullet_flyby_soundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\plasma_flyby_1.wss",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\plasma_flyby_2.wss",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\plasma_flyby_3.wss",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\plasma_flyby_4.wss",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\plasma_flyby_5.wss",
				1
			}
		};
	};
	class MET_EMP_closeExp_SoundShader: GrenadeHe_closeExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\EMP_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\EMP_Explosion.ogg",
				1
			}
		};
	};
	class MET_EMP_midExp_SoundShader: GrenadeHe_midExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\EMP_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\EMP_Explosion.ogg",
				1
			}
		};
	};
	class MET_EMP_distExp_SoundShader: GrenadeHe_distExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\EMP_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\EMP_Explosion.ogg",
				1
			}
		};
	};
	class MET_Imploder_closeExp_SoundShader: GrenadeHe_closeExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\Imploder_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\Imploder_Explosion.ogg",
				1
			}
		};
	};
	class MET_Imploder_midExp_SoundShader: GrenadeHe_midExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\Imploder_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\Imploder_Explosion.ogg",
				1
			}
		};
	};
	class MET_Imploder_distExp_SoundShader: GrenadeHe_distExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\Imploder_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\Imploder_Explosion.ogg",
				1
			}
		};
	};
	class MET_Nerf_closeExp_SoundShader: GrenadeHe_closeExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\Nerf_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\Nerf_Explosion.ogg",
				1
			}
		};
	};
	class MET_Nerf_midExp_SoundShader: GrenadeHe_midExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\Nerf_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\Nerf_Explosion.ogg",
				1
			}
		};
	};
	class MET_Nerf_distExp_SoundShader: GrenadeHe_distExp_SoundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\Nerf_Explosion.ogg",
				1
			},
			
			{
				"Indecisive_Armoury_Sounds\Nerf_Explosion.ogg",
				1
			}
		};
	};
	class MET_Stupid_bullet_flyby_soundShader: JLTS_plasma_bullet_flyby_soundShader
	{
		samples[]=
		{
			
			{
				"Indecisive_Armoury_Sounds\Stupid_flyby_1.wss",
				1
			}
		};
	};

	class ATRT_BlasterCannon_Close_SoundShader {
		samples[] = {
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Close_01.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Close_02.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Close_03.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Close_04.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Close_05.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Close_06.wav", 1}
		};
		volume = 1.4;
		range = 150; // Only heard up close
	};

	class BlasterCannon_Bass_Revolver_Close_SoundShader {
		samples[] = {
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_01\Blaster_Bass_Revolver_Close_01.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_01\Blaster_Bass_Revolver_Close_02.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_01\Blaster_Bass_Revolver_Close_03.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_01\Blaster_Bass_Revolver_Close_04.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_01\Blaster_Bass_Revolver_Close_05.wav", 1}
		};
		volume = 1.2;
		range = 150;
	};

	class BlasterCannon_Bass_Close_SoundShader {
		samples[] = {
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_01.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_02.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_03.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_04.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_05.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_06.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_07.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_08.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_09.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_10.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_11.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_12.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_13.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_14.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Close_15.wav", 1}
		};
		volume = 1.0;
		range = 150;
	};

	// AT-RT Distant Sounds
	class ATRT_BlasterCannon_Distant_SoundShader {
		samples[] = {
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Distant_01.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Distant_02.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Distant_03.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Distant_04.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Distant_05.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Sounds\ATRT_BlasterCannon_Distant_06.wav", 1}
		};
		volume = 1.4;
		range = 2000;
		rangeCurve[] = {{0,0}, {150,1}, {2000,0}}; 
	};

	class BlasterCannon_Bass_Revolver_Distant_SoundShader {
		samples[] = {
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_01\Blaster_Bass_Revolver_Distant_01.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_01\Blaster_Bass_Revolver_Distant_02.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_01\Blaster_Bass_Revolver_Distant_03.wav", 1}
		};
		volume = 1.2;
		range = 2000;
		rangeCurve[] = {{0,0}, {150,1}, {2000,0}};
	};

	class BlasterCannon_Bass_Distant_SoundShader {
		samples[] = {
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Distant_01.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Distant_02.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Distant_03.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Distant_04.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Distant_05.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Distant_06.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Distant_07.wav", 1},
			{"z\MET\addons\vehicles\vics\ATRT\BlasterCannon_Bass_02\Blaster_Bass_Cannon_Distant_08.wav", 1}
		};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0}, {150,1}, {2000,0}};
	};
};
class CfgSounds
{
	class MET_ATRT_Mount
    {
        name = "MET_ATRT_Mount";

        sound[] =
        {
            "z\MET\addons\vehicles\vics\ATRT\Step\ATRT_Start.wav",
            5,
            1,
            75
        };

        titles[] = {};
    };

	class MET_ATRT_Dismount
    {
        name = "MET_ATRT_Dismount";

        sound[] =
        {
            "z\MET\addons\vehicles\vics\ATRT\Step\ATRT_Stop.wav",
            5,
            1,
            75
        };

        titles[] = {};
    };
};