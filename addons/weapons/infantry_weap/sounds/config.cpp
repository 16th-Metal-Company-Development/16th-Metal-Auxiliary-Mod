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
};
