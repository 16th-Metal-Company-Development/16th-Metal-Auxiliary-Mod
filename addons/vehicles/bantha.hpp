
	class MET_Bantha_Base_F: Wheeled_APC_F
	{
		features="Randomization: No      <br />Camo selections: 3 - top of hull, bottom of hull, turret      <br />Script door sources: None      <br />Script animations: HideTurret      <br />Executed scripts: None       <br />Firing from vehicles: No      <br />Slingload: No      <br />Cargo proxy indexes: 1 to 8";
		author="Hazmat";
		destrType="DestructWreck";
		mapSize=15;
		_generalMacro="APC_Wheeled_01_base_F";
		accuracy=0.25;
		displayName="*TEST*HAVw A2 Bantha IFV";
		attenuationEffectType="TankAttenuation";
		//class ACE_SelfActions;
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineOnint.ogg",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineOn.ogg",
			1,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineoffint.ogg",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineOff.ogg",
			1,
			1,
			200
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			0.17782794,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			0.17782794,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			0.17782794,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",
			1,
			1,
			100
		};
		soundGeneralCollision4[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.25,
			"soundGeneralCollision2",
			0.25,
			"soundGeneralCollision3",
			0.25,
			"soundGeneralCollision4",
			0.25
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",
					0.3548134,
					1,
					200
				};
				frequency="0.95 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",
					0.39810717,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",
					0.44668359,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",
					0.50118721,
					1,
					250
				};
				frequency="0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",
					0.56234133,
					1,
					300
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",
					0.63095737,
					1,
					300
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*camPos*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_ext",
					0.70794576,
					1,
					300
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*camPos*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrustIdle.ogg",
					0.56234133,
					1,
					200
				};
				frequency="0.8 + ((rpm/ 6900) factor[(10/ 6900),(200/ 6900)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(10/ 6900),(200/ 6900)]) * ((rpm/ 6900) factor[(500/ 6900),(425/ 6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrustIdle.ogg",
					0.80000001,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 6900) factor[(200/ 6900),(1100/ 6900)])*0.5";
				volume="engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(200/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(1300/ 6900),(700/ 6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrust1.ogg",
					2,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 6900) factor[(900/ 6900),(2600/ 6900)])*0.4";
				volume="engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(900/ 6900),(2600/ 6900)]) * ((rpm/ 6900) factor[(2900/ 6900),(1200/ 6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrust2.ogg",
					2,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 6900) factor[(2400/ 6900),(4800/ 6900)])*0.3";
				volume="engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(2400/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(5100/ 6900),(2700/ 6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrust3.ogg",
					2,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4500/ 6900),(6100/ 6900)])*0.3";
				volume="engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(4500/ 6900),(6200/ 6900)]) * ((rpm/ 6900) factor[(6450/ 6900),(4700/ 6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineRedline.ogg",
					0.80000001,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 6900) factor[(6000/ 6900),(6900/ 6900)])*0.1";
				volume="engineOn*camPos*(0.8+(0.6*(thrust factor[0.1,1])))*((rpm/ 6900) factor[(5950/ 6900),(6900/ 6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"",
					0.31622776,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_int",
					0.3548134,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_int",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_int",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_int",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_int",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\Engine_int",
					0.63095737,
					1
				};
				frequency="0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrustIdleint.ogg",
					0.3548134,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(10/ 6900),(200/ 6900)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(10/ 6900),(200/ 6900)]) * ((rpm/ 6900) factor[(500/ 6900),(425/ 6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrustIdleint.ogg",
					0.39810717,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(200/ 6900),(1100/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(200/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(1300/ 6900),(700/ 6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrust1int.ogg",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(900/ 6900),(2600/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(900/ 6900),(2600/ 6900)]) * ((rpm/ 6900) factor[(2900/ 6900),(1200/ 6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrust2int.ogg",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(2400/ 6900),(4800/ 6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(2400/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(5100/ 6900),(2700/ 6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineThrust3int.ogg",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(4500/ 6900),(6100/ 6900)])*0.1";
				volume="engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(4500/ 6900),(6200/ 6900)]) * ((rpm/ 6900) factor[(6450/ 6900),(4700/ 6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"212th\Vehicles\212th_APC02\data\sounds\BanthaEngineRedlineint.ogg",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 6900) factor[(6000/ 6900),(6900/ 6900)])*0.1";
				volume="engineOn*(1-camPos)*(0.8+(0.6*(thrust factor[0.1,1])))*((rpm/ 6900) factor[(5950/ 6900),(6900/ 6900)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.63095737,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(Speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(Speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(Speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(Speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(Speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					1.5848932,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(Speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(Speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(Speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(Speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(Speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(Speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(Speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		thrustDelay=0.5;
		brakeIdleSpeed=1.78;
		maxSpeed=90;
		fuelCapacity=25;
		fuelConsumptionRate=7;
		wheelCircumference=3.8050001;
		waterLeakiness=0.1;
		normalSpeedForwardCoef=0.66666669;
		simulation="carx";
		dampersBumpCoef=4.5;
		differentialType="all_limited";
		frontRearSplit=0.60000002;
		centreBias=1.3;
		clutchStrength=8;
		enginePower=300;
		peakTorque=750;
		idleRpm=600;
		redRpm=6900;
		maxOmega=800;
		minOmega=50;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		torqueCurve[]=
		{
			
			{
				"(0/2300)",
				"(0/745)"
			},
			
			{
				"(1000/2300)",
				"(536/745)"
			},
			
			{
				"(1400/2300)",
				"(692/745)"
			},
			
			{
				"(1500/2300)",
				"(725/745)"
			},
			
			{
				"(1550/2300)",
				"(745/745)"
			},
			
			{
				"(1600/2300)",
				"(725/745)"
			},
			
			{
				"(2300/2300)",
				"(560/745)"
			},
			
			{
				"(4700/2300)",
				"(0/745)"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.8400002,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.01,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[]=
			{
				"High",
				1,
				"Low",
				6
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		switchTime=0.25;
		latency=1.4;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				center="wheel_1_1_center";
				boundary="wheel_1_1_bound";
				steering=1;
				width=0.34999999;
				mass=187.5;
				moi=60;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=45000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_center";
				tireForceAppPointOffset="wheel_1_1_center";
				maxCompression=0.1125;
				maxDroop=0.15000001;
				sprungMass=280;
				springStrength=7000;
				springDamperRate=2520;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=1;
				center="wheel_1_2_center";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_center";
				tireForceAppPointOffset="wheel_1_2_center";
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_center";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_center";
				tireForceAppPointOffset="wheel_1_3_center";
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				boneName="wheel_1_4_damper";
				steering=0;
				center="wheel_1_4_center";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_center";
				tireForceAppPointOffset="wheel_1_4_center";
				maxHandBrakeTorque=300000;
			};
			class L5: L1
			{
				boneName="wheel_1_5_damper";
				steering=0;
				center="wheel_1_5_center";
				boundary="wheel_1_5_bound";
				suspForceAppPointOffset="wheel_1_5_center";
				tireForceAppPointOffset="wheel_1_5_center";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_center";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_center";
				tireForceAppPointOffset="wheel_2_1_center";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=1;
				center="wheel_2_2_center";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_center";
				tireForceAppPointOffset="wheel_2_2_center";
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_center";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_center";
				tireForceAppPointOffset="wheel_2_3_center";
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				boneName="wheel_2_4_damper";
				steering=0;
				center="wheel_2_4_center";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_center";
				tireForceAppPointOffset="wheel_2_4_center";
				maxHandBrakeTorque=300000;
			};
			class R5: R1
			{
				boneName="wheel_2_5_damper";
				steering=0;
				center="wheel_2_5_center";
				boundary="wheel_2_5_bound";
				suspForceAppPointOffset="wheel_2_5_center";
				tireForceAppPointOffset="wheel_2_5_center";
				maxHandBrakeTorque=300000;
			};
		};
		editorSubcategory="GAR_LNDCatNSub";
		memoryPointTaskMarker="TaskMarker_1_pos";
		terrainCoef=1.5;
		turnCoef=2;
		canFloat=1;
		waterPPInVehicle=0;
		waterResistanceCoef=0.30000001;
		waterAngularDampingCoef=1.1;
		armor=550;
		armorLights=0.1;
		crewExplosionProtection=0.99989998;
		damageResistance=0.0071899998;
		cost=1000000;
		driverAction="driver_apcwheeled1_out";
		driverInAction="Driver_APC_Wheeled_01_in";
		driverLeftLegAnimName="pedal_brake";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic02_low",
			"passenger_apc_narrow_generic01_low",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03_low",
			"passenger_apc_generic02",
			"passenger_generic02_foldhands",
			"passenger_apc_narrow_generic01_low",
			"passenger_apc_narrow_generic02_low",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03_low",
			"passenger_apc_generic02"
		};
		hideWeaponsCargo=1;
		driverForceOptics=0;
		memoryPointDriverOptics="driverview";
		cargoIsCoDriver[]={0};
		forceHideDriver=1;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.85000002;
			minFov=0.85000002;
			maxFov=0.85000002;
		};
		class HitPoints: HitPoints
		{
			class HitEngine: HitEngine
			{
				armor=0.80000001;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				passThrough=0.5;
				minimalHit=0.1;
				explosionShielding=0.80000001;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.40000001;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.40000001;
				radius=0.30000001;
			};
			class HitHull: HitHull
			{
				armor=0.60000002;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitBody: HitBody
			{
				armor=0.89999998;
				material=-1;
				armorComponent="body";
				name="hit_body_point";
				passThrough=0.5;
				minimalHit=0.1;
				explosionShielding=0.80000001;
				radius=0.30000001;
			};
		};
		weapons[]=
		{
			"TruckHorn",
			"212th_SmokeLauncher"
		};
		magazines[]=
		{
			"212th_SmokeLauncherMag",
			"212th_SmokeLauncherMag",
			"212th_SmokeLauncherMag"
		};
		smokeLauncherGrenadeCount=14;
		smokeLauncherVelocity=12;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=360;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner: ViewGunner
				{
					initAngleX=-10;
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics="";
						memoryPointGunnerOptics="commanderview";
						commanderUsesPilotView=1;
						LODTurnedIn=1100;
						LODTurnedOut=1;
						gunBeg="Usti hlavne3";
						gunEnd="Konec hlavne3";
						memoryPointGun="usti hlavne3";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						minCamElev=-90;
						maxCamElev=90;
						weapons[]=
						{
							"MET_Bantha_Commander_Turret",
							"Laserdesignator_vehicle"
						};
						magazines[]=
						{
							"MET_DC15L_Heavy_mag",
							"MET_DC15L_Heavy_mag",
							"MET_DC15L_Heavy_mag",
							"MET_DC15L_Heavy_mag",
							"MET_DC15L_Heavy_mag",
							"MET_DC15L_Heavy_mag",
							"Laserbatteries"
						};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							1,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							1,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						forceHideGunner=0;
						forceHideCommander=1;
						usePip=2;
						gunnerAction="driver_apcwheeled1_out";
						gunnerInAction="Driver_APC_Wheeled_01_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerForceOptics=0;
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_0";
						minOutElev=-10;
						maxOutElev=15;
						initOutElev=0;
						minOutTurn=-45;
						maxOutTurn=90;
						initOutTurn=0;
						class ViewGunner: ViewGunner
						{
							initAngleX=-10;
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.31;
							minFov=0.034000002;
							maxFov=0.31;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={2,3};
						};
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_MBT_01_commander";
						showCrewAim=1;
						startEngine=0;
						class HitPoints
						{
							class HitTurret
							{
								armor="0.2,";
								material=-1;
								armorComponent="hit_gun_turret";
								name="hit_gun_turret";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=0.5;
								radius=0.5;
								isTurret=1;
							};
							class HitGun
							{
								armor=0.2;
								material=-1;
								armorComponent="hit_commander_gun";
								name="hit_commander_gun_Point";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=0.5;
								radius=0.5;
								isGun=1;
							};
						};
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						gunnerHasFlares=1;
						viewGunnerInExternal=1;
					};
				};
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"LMG_RCWS"
				};
				magazines[]=
				{
					"2000Rnd_65x39_belt",
					"2000Rnd_65x39_belt"
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					30
				};
				commanding=1;
				minElev=-10;
				initElev=0;
				maxElev=60;
				minCamElev=-90;
				maxCamElev=90;
				forceHideGunner=1;
				usePip=2;
				gunnerAction="driver_apcwheeled1_out";
				gunnerInAction="Driver_APC_Wheeled_01_in";
				animationSourceStickX="turret_control_x";
				animationSourceStickY="turret_control_y";
				gunnerLeftHandAnimName="turret_control";
				gunnerForceOptics=0;
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				startEngine=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				gunnerUsesPilotView=1;
				LODTurnedIn=1100;
				LODTurnedOut=1;
				selectionFireAnim="zasleh2";
				isPersonTurret=0;
				minOutElev=-30;
				maxOutElev=60;
				initOutElev=0;
				minOutTurn=-160;
				maxOutTurn=160;
				initOutTurn=0;
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
				};
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.2;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.5;
					};
					class HitGun
					{
						armor=0.2;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.5;
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Revolving
			{
				source="revolving";
				weapon="MET_Bantha_missiles_DAGR";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="MET_autocannon_Z20_HBB";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="MET_autocannon_Z20_HBB";
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class recoil_source
			{
				source="reload";
				weapon="MET_autocannon_Z20_HBB";
			};
			class missile_rot
			{
				source="revolving";
				weapon="Rocket_03_AP_Plane_CAS_02_F";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_damage.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_destruct.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_damage.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_destruct.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_damage.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_destruct.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int_damage.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int_destruct.rvmat"
			};
		};
		viewCargoShadowDiff=0.050000001;
		viewCargoShadowAmb=0.5;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectAMV";
			};
		};
		engineStartSpeed=8;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name="nvg_marker";
				color[]={0.029999999,0.003,0.003,1};
				ambient[]={0.003,0.00030000001,0.00030000001,1};
				brightness=0.001;
				blinking=1;
			};
		};
		explosionEffect="FuelExplosionBig";
		engineEffectSpeed=5;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				FlareSize=0.5;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				FlareSize=0.5;
			};
		};
		selectionBackLights="DashLights";
		selectionBrakeLights="light_brake";
		aggregateReflectors[]=
		{
			
			{
				"LightCarHeadL01",
				"LightCarHeadL02"
			},
			
			{
				"LightCarHeadR01",
				"LightCarHeadR02"
			}
		};
		selectionFireAnim="";
		class RenderTargets
		{
			class RearCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RearCam2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
			};
			class CommanderCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class GunnerCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="gunnerview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		transportSoldier=13;
		
		GCommander=1;
		showNVGGunner=1;
		showNVGDriver=1;
		numberPhysicalWheels=8;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						maxFogSeeThrough=-1;
						nightRangeCoef=1;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
							maxFogSeeThrough=-1;
							nightRangeCoef=1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
							maxFogSeeThrough=-1;
							nightRangeCoef=1;
						};
					};
					class NVSensorComponent: SensorTemplateNV
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class ManSensorComponent: SensorTemplateMan
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=1600;
						minSpeedThreshold=0;
						maxSpeedThreshold=2000;
						class AirTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=0;
							maxRange=16000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				right=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - (  (10 *    (   ((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40)))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType="MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,1000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				componentType="VehicleSystemsDisplayManager";
				defaultDisplay="EmptyDisplay";
				left=1;
				x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 *    (   ((safezoneW / safezoneH) min 1.2) / 40))])";
				y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 *    (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
					};
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MineDetectorDisplay
					{
						componentType="MineDetectorDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
					};
					class SlingLoadDisplay
					{
						componentType="SlingLoadDisplayComponent";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
					class VehicleCommanderDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Commander";
					};
					class VehiclePrimaryGunnerDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="PrimaryGunner";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={4000,2000,1000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
		};
	};
	class MET_Bantha_Base: MET_Bantha_Base_F
	{
		author="Hazmat";
		_generalMacro="B_APC_Wheeled_02_base_F";
		side=1;
		faction="metal_company";
		vehicleClass="metal_co_EdSubCat_APCs";
		editorSubcategory="metal_co_EdSubCat_APCs";
		crew="B_SCI212thAB_212th_Crewman_01";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		TFAR_hasIntercom=1;
		/*class ACE_SelfActions: ACE_SelfActions
		{
			class TFAR_IntercomChannel
			{
				displayName="$STR_tfar_core_Intercom_ACESelfAction_Name";
				condition="true";
				statement="";
				icon="";
				class TFAR_IntercomChannel_disabled
				{
					displayName="Disabled";
					condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
					statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
				};
				class TFAR_IntercomChannel_Entry
				{
					displayName="Cargo";
					condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
					statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
				};
				class TFAR_IntercomChannel_Crew
				{
					displayName="Crew";
					condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
					statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
				};
				class TFAR_IntercomChannel_PL
				{
					displayName="Misc 1";
					condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
					statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
				};
				class TFAR_IntercomChannel_S1
				{
					displayName="Misc 2";
					condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
					statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
				};
				class TFAR_IntercomChannel_S2
				{
					displayName="Misc 3";
					condition="_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
					statement="(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
				};
			};
		};*/
		#include "vics\Bantha\Bantha_Intercoms.hpp"
	};
	class MET_Bantha_C_IFV_Base: MET_Bantha_Base
	{
		author="Hazmat";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_1_3",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"wheel_2_3",
					0
				},
				
				{
					"wheel_1_4",
					0
				},
				
				{
					"wheel_2_4",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.47999999
				},
				
				{
					"wheel_2_1_damper",
					0.49000001
				},
				
				{
					"wheel_1_2_damper",
					0.49000001
				},
				
				{
					"wheel_1_3_damper",
					0.5
				},
				
				{
					"wheel_2_2_damper",
					0.49000001
				},
				
				{
					"wheel_2_3_damper",
					0.5
				},
				
				{
					"wheel_1_4_damper",
					0.50999999
				},
				
				{
					"wheel_2_4_damper",
					0.56999999
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_1_2",
					0
				},
				
				{
					"steering_2_2",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"turretbase",
					0
				},
				
				{
					"maingun",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"vrtulea",
					0
				},
				
				{
					"vrtuleb",
					0
				},
				
				{
					"poklop_gunner",
					0
				},
				
				{
					"poklop_commander",
					0
				},
				
				{
					"zasleh_rot",
					0
				},
				
				{
					"zasleh2_rot",
					81.639999
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"reverse_light",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh2",
				"zasleh_1",
				"light_l",
				"light_r",
				"light_r2",
				"light_l2",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.3859999;
			verticalOffsetWorld=-0.075999998;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_IFV_Preview_UI_ca.paa";
		_generalMacro="B_APC_Wheeled_01_cannon_F";
		scope=0;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha (IFV Mk2)";
		class Library
		{
			libTextDesc="$STR_A3_CFGVEHICLES_APC_WHEELED_01_LIBRARY0";
		};
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_C_IFV.p3d";
		picture="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_IFV_Picture_UI_ca.paa";
		Icon="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_IFV_Icon_UI_ca.paa";
		unitInfoType="RscUnitInfoTank";
		radarType=8;
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"MET_autocannon_Z20_HBB",
					"MET_Bantha_missiles_DAGR"
				};
				magazines[]=
				{
					"MET_500Rnd_Z20_HBB",
					"MET_500Rnd_Z20_HBB",
					"MET_500Rnd_Z20_HBB",
					"MET_500Rnd_Z20_HBB",
					"MET_Bantha_DAGR_Magazine",
					"MET_Bantha_DAGR_Magazine"
				};
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
			};
		};
		threat[]={1,1,0.30000001};
		ace_cargo_hasCargo=1;
		ace_cargo_space=2;
		tas_canBlift=1;
		tas_liftVars="[[[[0,-2,-4.3]]], [0.4], [-0.3]]";
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class MET_Bantha_C_IFV: MET_Bantha_C_IFV_Base
	{
		author="Hazmat";
		scope=2;
		scopecurator=2;
		displayName="HAVw A2 Bantha (IFV)";
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_IFV\Bantha_C_IFV_Body_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_IFV\Bantha_C_IFV_Turret_Co.paa"
		};
		#include "vics\Bantha\Bantha_StandardInventory.hpp"
	};
	class MET_Bantha_C_Unarmed_Base: MET_Bantha_C_IFV_Base
	{
		editorPreview="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_Unarmed_Preview_UI_ca.paa";
		_generalMacro="B_APC_Wheeled_unarmed_F";
		scope=1;
		scopecurator=1;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha (Unarmed)";
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_C_Unarmed.p3d";
		picture="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_Unarmed_Picture_UI_ca.paa";
		Icon="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_Unarmed_Icon_UI_ca.paa";
		class Turrets: Turrets
		{
		};
		class RenderTargets
		{
			class RearCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RearCam2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
			};
			class CommanderCam
			{
			};
			class GunnerCam
			{
			};
		};
	};
	class MET_Bantha_C_Unarmed: MET_Bantha_C_Unarmed_Base
	{
		author="Hazmat";
		scope=2;
		scopecurator=2;
		displayName="HAVw A2 Bantha (Unarmed)";
		hiddenselections[]=
		{
			"camo",
			"camo1"
		};
		hiddenselectionstextures[]=
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_IFV\Bantha_C_IFV_Body_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa"
		};
		#include "vics\Bantha\Bantha_StandardInventory.hpp"
	};
	class MET_Bantha_C_MG_Base: MET_Bantha_C_IFV_Base
	{
		editorPreview="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_MG_Preview_UI_ca.paa";
		_generalMacro="212th_B_APC_Wheeled_mg_F";
		scope=1;
		scopecurator=1;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha (MG)";
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_C_MG.p3d";
		picture="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_MG_Picture_UI_ca.paa";
		Icon="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_MG_Icon_UI_ca.paa";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
				};
				memoryPointGunnerOptics="commanderview";
				gunBeg="usti hlavne3";
				gunEnd="Konec hlavne3";
				memoryPointGun="usti hlavne3";
				body="obsturret";
				gun="obsgun";
				usePip=2;
				minElev=-25;
				maxElev=60;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minCamElev=-90;
				maxCamElev=90;
				weapons[]=
				{
					"MET_Bantha_Commander_Turret"
				};
				magazines[]=
				{
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				turretInfoType="RscOptics_MBT_01_commander";
				showCrewAim=1;
				startEngine=0;
				class HitPoints
				{
					class HitTurret
					{
						armor="0.2,";
						material=-1;
						armorComponent="hit_gun_turret";
						name="hit_gun_turret";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.5;
						radius=0.5;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.2;
						material=-1;
						armorComponent="hit_commander_gun";
						name="hit_commander_gun_Point";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.5;
						radius=0.5;
						isGun=1;
					};
				};
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				gunnerHasFlares=1;
				viewGunnerInExternal=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				class ViewGunner: ViewGunner
				{
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={2,3};
				};
				class OpticsIn: Optics_Commander_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
			};
		};
		class RenderTargets
		{
			class RearCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RearCam2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
			};
			class CommanderCam
			{
			};
			class GunnerCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
	};
	class MET_Bantha_C_MG: MET_Bantha_C_MG_Base
	{
		author="Hazmat";
		scope=1;
		scopecurator=1;
		displayName="HAVw A2 Bantha (MG)";
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_MG\Bantha_C_MG_Body_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_IFV\Bantha_C_IFV_Turret_Co.paa"
		};
		#include "vics\Bantha\Bantha_StandardInventory.hpp"
	};
	class MET_Bantha_C_Mortar_Base: MET_Bantha_C_IFV_Base
	{
		editorPreview="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_Mortar_Preview_UI_ca.paa";
		_generalMacro="212th_B_APC_Wheeled_fs_cannon_F";
		scope=1;
		scopecurator=1;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha (Mortar)";
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_C_Mortar.p3d";
		picture="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_Mortar_Picture_UI_ca.paa";
		Icon="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_Mortar_Icon_UI_ca.paa";
		artilleryScanner=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"MET_SGM120_Twin_Mortar_120mm"
				};
				magazines[]=
				{
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_shells",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_guided",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_IR_Flare_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white",
					"MET_2Rnd_120mm_Mo_Smoke_white"
				};
				minElev=-5;
				maxElev=80;
				initElev=10;
				elevationMode=3;
				memoryPointGunnerOptics="gunnerview2";
				usePip=2;
				turretInfoType="RscWeaponRangeArtilleryAuto";
				gunnerOpticsModel="\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
				};
				memoryPointGun="z_gunR_muzzle";
				gunBeg="z_gunR_muzzle";
				gunEnd="z_gunR_chamber";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
			};
		};
	};
	class MET_Bantha_C_Mortar: MET_Bantha_C_Mortar_Base
	{
		author="Hazmat";
		scope=2;
		scopecurator=2;
		displayName="HAVw A2 Bantha (Mortar)";
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_Mortar\Bantha_C_Mortar_Body_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_Mortar\Bantha_C_Mortar_Turret_Co.paa"
		};
		#include "vics\Bantha\Bantha_MortarInventory.hpp"
	};
	class MET_Bantha_C_AA_Base: MET_Bantha_C_IFV_Base
	{
		editorPreview="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_AA_Preview_UI_ca.paa";
		_generalMacro="212th_B_APC_Wheeled_aa_cannon_F";
		scope=1;
		scopecurator=1;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha (Anti-Air)";
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_C_AA.p3d";
		picture="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_AA_Picture_UI_ca.paa";
		Icon="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_C_AA_Icon_UI_ca.paa";
		artilleryScanner=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev=0;
				initElev=5;
				maxElev=90;
				weapons[]=
				{
					"MET_autocannon_Z60_EAA",
					"MET_Bantha_missiles_DAGR"
				};
				magazines[]=
				{
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_1000Rnd_Z60_HAA",
					"MET_Bantha_DAGR_Magazine",
					"MET_Bantha_DAGR_Magazine"
				};
				usePip=1;
				memoryPointGun[]=
				{
					"z_muzzle_R_1",
					"z_muzzle_L_1",
					"z_muzzle_R_2",
					"z_muzzle_L_2",
					"z_muzzle_R_3",
					"z_muzzle_L_3",
					"z_muzzle_R_4",
					"z_muzzle_L_4"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
		};
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=9000;
							maxRange=9000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=6000;
							maxRange=6000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=6000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						maxTrackableSpeed=694.44397;
					};
				};
			};
		};
	};
	class MET_Bantha_C_AA: MET_Bantha_C_AA_Base
	{
		author="Hazmat";
		scope=2;
		scopecurator=2;
		displayName="HAVw A2 Bantha (Anti-Air)";
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_AA\Bantha_C_AA_Body_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_C\Bantha_C_AA\Bantha_C_AA_Turret_Co.paa"
		};
		#include "vics\Bantha\Bantha_StandardInventory.hpp"
	};
	class MET_Bantha_C_AT_Base: MET_Bantha_C_IFV_Base
	{
		_generalMacro="212th_B_APC_Wheeled_at_cannon_F";
		scope=0;
		scopecurator=0;
		accuracy=0.30000001;
		displayName="*TEST*HAVw A2s Bantha Super Laser AT";
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_C_AT.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"212th_SuperLaser"
				};
				magazines[]=
				{
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser",
					"3Rnd_212th_SuperLaser"
				};
				memoryPointGun[]=
				{
					"z_gunL_muzzle",
					"z_gunR_muzzle"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
			};
		};
	};
	class MET_Bantha_E_MSV_Base: MET_Bantha_Base
	{
		author="Hazmat";
		editorPreview="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_E_MSV_Preview_UI_ca.paa";
		_generalMacro="B_APC_Wheeled_01_cannon_F";
		scope=1;
		scopecurator=1;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha-E MSE";
		crewCrashProtection=0.050000001;
		class Library
		{
			libTextDesc="$STR_A3_CFGVEHICLES_APC_WHEELED_01_LIBRARY0";
		};
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_E_MSV.p3d";
		picture="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_E_MSV_Picture_UI_ca.paa";
		Icon="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_E_MSV_Icon_UI_ca.paa";
		unitInfoType="RscUnitInfoTank";
		radarType=8;
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		ace_refuel_fuelCargo=2500;
		ace_rearm_defaultSupply=1000;
		ace_cargo_space=0;
		ace_cargo_hasCargo=1;
		ace_repair_canRepair=1;
		ace_refuel_hooks[]=
		{
			{0.80000001,-2.9000001,0.60000002},
			{0,0,-20}
		};
		cargoAction[]=
		{
			"Driver_APC_Wheeled_01_in"
		};
		transportSoldier=1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				memoryPointGunnerOutOptics="";
				memoryPointGunnerOptics="commanderview";
				commanderUsesPilotView=1;
				LODTurnedIn=1100;
				LODTurnedOut=1;
				gunBeg="Usti hlavne3";
				gunEnd="Konec hlavne3";
				memoryPointGun="usti hlavne3";
				animationSourceBody="obsTurret";
				animationSourceGun="obsGun";
				body="obsTurret";
				gun="obsGun";
				proxytype="CPCommander";
				proxyIndex=1;
				usePip=2;
				minElev=-25;
				maxElev=60;
				initElev=0;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				minCamElev=-90;
				maxCamElev=90;
				weapons[]=
				{
					"MET_Bantha_Commander_Turret"
				};
				magazines[]=
				{
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag",
					"MET_DC15L_Heavy_mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					1,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
					1,
					1,
					30
				};
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				forceHideGunner=0;
				gunnerAction="driver_apcwheeled1_out";
				gunnerInAction="Driver_APC_Wheeled_01_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerForceOptics=0;
				gunnerOutOpticsModel="";
				gunnerOpticsEffect[]={};
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_0";
				minOutElev=-10;
				maxOutElev=15;
				initOutElev=0;
				minOutTurn=-45;
				maxOutTurn=90;
				initOutTurn=0;
				class ViewGunner: ViewGunner
				{
				};
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.31;
					minFov=0.034000002;
					maxFov=0.31;
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					thermalMode[]={2,3};
				};
				class OpticsIn: Optics_Commander_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				turretInfoType="RscOptics_MBT_01_commander";
				showCrewAim=1;
				startEngine=0;
				class HitPoints
				{
					class HitTurret
					{
						armor="0.2,";
						material=-1;
						armorComponent="hit_gun_turret";
						name="hit_gun_turret";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.5;
						radius=0.5;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.2;
						material=-1;
						armorComponent="hit_commander_gun";
						name="hit_commander_gun_Point";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.5;
						radius=0.5;
						isGun=1;
					};
				};
				stabilizedInAxes=3;
				maxHorizontalRotSpeed=1.8;
				maxVerticalRotSpeed=1.8;
				gunnerHasFlares=1;
				viewGunnerInExternal=1;
			};
		};
		class GunnerCam;
		class RenderTargets
		{
			class RearCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RearCam2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
			};
			class CommanderCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class GunnerCam: GunnerCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		threat[]={1,1,0.30000001};
		tas_canBlift=1;
		tas_liftVars="[[[[0,-2,-4.3]]], [0.4], [-0.3]]";
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class MET_Bantha_E_MSV: MET_Bantha_E_MSV_Base
	{
		author="Hazmat";
		scope=2;
		scopecurator=2;
		displayName="HAVw A2 Bantha-E (MSV)";
		/*class TransportBackpacks
		{
			class _xx_JLTS_portable_shield_gar_backpack
			{
				backpack="JLTS_portable_shield_gar_backpack";
				count=1;
			};
			class _xx_JLTS_UST_turret_GAR_backpack
			{
				backpack="JLTS_UST_turret_GAR_backpack";
				count=1;
			};
		};*/
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
		hiddenselectionstextures[]=
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Body_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Exterior_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Crane_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Crates_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_E\Bantha_E_MSV\Bantha_E_MSV_Crates_Co.paa"
		};
		#include "vics\Bantha\Bantha_MSVInventory.hpp"
	};
	class MET_Bantha_T_Cargo_Base: MET_Bantha_Base
	{
		author="Hazmat";
		editorPreview="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_T_Cargo_Preview_UI_ca.paa";
		_generalMacro="B_APC_Wheeled_01_cannon_F";
		scope=1;
		scopecurator=1;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha-T (Cargo)";
		class Library
		{
			libTextDesc="$STR_A3_CFGVEHICLES_APC_WHEELED_01_LIBRARY0";
		};
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_T_Cargo.p3d";
		picture="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_T_Cargo_Picture_UI_ca.paa";
		Icon="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_T_Cargo_Icon_UI_ca.paa";
		unitInfoType="RscUnitInfoTank";
		radarType=8;
		ace_cargo_space=0;
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		cargoAction[]=
		{
			"Driver_APC_Wheeled_01_in",
			"Driver_APC_Wheeled_01_in",
			"passenger_flatground_crosslegs",
			"passenger_flatground_crosslegs",
			"passenger_flatground_crosslegs"
		};
		transportSoldier=5;
		class Turrets: Turrets
		{
		};
		class GunnerCam;
		class RenderTargets
		{
			class RearCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RearCam2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
			};
			class CommanderCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class GunnerCam: GunnerCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		class VehicleTransport
		{
			class Carrier
			{
				cargoBayDimensions[]=
				{
					"Bantha_T_Cargo_Pos_1",
					"Bantha_T_Cargo_Pos_2"
				};
				disableHeightLimit=1;
				maxLoadMass=2500;
				cargoAlignment[]=
				{
					"Left",
					"Front"
				};
				cargoSpacing[]={0.15000001,0.15000001,0};
				exits[]=
				{
					"Pos_Cargo_Load"
				};
				unloadingInterval=2;
				loadingDistance=10;
				loadingAngle=60;
				parachuteClassDefault="B_Parachute_02_F";
				parachuteHeightLimitDefault=50;
				setDirection=45;
			};
		};
		threat[]={1,1,0.30000001};
		tas_canBlift=1;
		tas_liftVars="[[[[0,-2,-4.3]]], [0.4], [-0.3]]";

		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		
		#include "vics\Bantha\Bantha_CargoInventory.hpp"
	};
	class MET_Bantha_T_Cargo: MET_Bantha_T_Cargo_Base
	{
		author="Hazmat";
		scope=2;
		scopecurator=2;
		displayName="HAVw A2 Bantha-T (Cargo)";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Cargo\Bantha_T_Cargo_Body_Co.paa"
		};

		ace_cargo_hasCargo = 1;
		ace_cargo_space = 6;
		crateList[] = {
        	"Box_MET_Ammo",
        	"Box_MET_Medical",
        	"Box_MET_Rockets"
    	};

		class EventHandlers: EventHandlers
		{
			init = "_veh = _this select 0; if (local _veh) then { _veh spawn { private _veh = _this; private _cfg = configFile >> 'CfgVehicles' >> typeOf _veh; private _crateList = getArray (_cfg >> 'crateList'); { [_x, _veh] call ace_cargo_fnc_loadItem } forEach _crateList; }; };";
		};
	};
	class MET_Bantha_T_Assault_Base: MET_Bantha_Base
	{
		author="Hazmat";
		editorPreview="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_T_Assault_Preview_UI_ca.paa";
		_generalMacro="B_APC_Wheeled_01_cannon_F";
		scope=1;
		scopecurator=1;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha-T (Assault)";
		class Library
		{
			libTextDesc="$STR_A3_CFGVEHICLES_APC_WHEELED_01_LIBRARY0";
		};
		model="212th\Vehicles\212th_APC02\Aux212_Bantha_T_Assault.p3d";
		picture="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_T_Assault_Picture_UI_ca.paa";
		Icon="212th\Vehicles\212th_APC02\data\ui\menu\Bantha_T_Assault_Icon_UI_ca.paa";
		unitInfoType="RscUnitInfoTank";
		radarType=8;
		ace_cargo_space=0;
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		getInAction="GetInlow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInlow",
			"GetInlow"
		};
		cargoAction[]=
		{
			"Driver_APC_Wheeled_01_in",
			"Driver_APC_Wheeled_01_in",
			"passenger_apc_narrow_generic01_low",
			"passenger_apc_narrow_generic03",
			"passenger_flatground_crosslegs"
		};
		cargoProxyIndexes[]={1,2,3,4,5};
		getInProxyOrder[]={1,2,3,4,5};
		transportSoldier=5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets
				{
				};
				optics=0;
				showgunneroptics=0;
				discreteDistance[]={100,250};
				discreteDistanceCameraPoint[]=
				{
					"gunnerview",
					"gunnerview_250"
				};
				discreteDistanceInitIndex=2;
				opticsZoomMin=0.0625;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;
				distanceZoomMin=100;
				distanceZoomMax=100;
				turretInfoType="RscOptics_Offroad_01";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				minElev=-10;
				maxElev=20;
				minTurn=-65;
				maxTurn=65;
				weapons[]=
				{
					"MET_Bantha_T_Assault_MG"
				};
				magazines[]=
				{
					"MET_Bantha_T_Assault_MG_Mag",
					"MET_Bantha_T_Assault_MG_Mag",
					"MET_Bantha_T_Assault_MG_Mag",
					"MET_Bantha_T_Assault_MG_Mag"
				};
				gunnerAction="RepeaterGunner";
				gunnerInAction="RepeaterGunner";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="HeavyGun";
				gunnerRightHandAnimName="HeavyGun";
				gunnerLeftLegAnimName="leg_L";
				gunnerRightLegAnimName="leg_R";
				memoryPointGunnerOptics="gunnerview";
				gunnerFireAlsoInInternalCamera=1;
				commanding=1;
				primaryGunner=1;
				gunnerForceOptics=0;
				usePip=0;
				class GunFire: WeaponCloudsMGun
				{
					interval=0.0099999998;
				};
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				class ViewOptics: ViewOptics
				{
				};
				class ViewGunner: ViewOptics
				{
				};
				class OpticsIn: Optics_Metal_Bantha_T_Assault_Turret
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
				};
			};
			class CargoTurret_01: NewTurret
			{
				gunnerAction="passenger_inside_5";
				gunnerInAction="passenger_inside_5";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerName="Passenger Gunner (Left Seat 1)";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerCompartments="Compartment1";
				proxyType="CPCargo";
				proxyIndex=6;
				startEngine=0;
				isPersonTurret=1;
				inGunnerMayFire=1;
				LODTurnedIn=1100;
				showAsCargo=1;
				maxElev=15;
				minElev=-35;
				maxTurn=30;
				minTurn=-30;
				isCopilot=0;
				hideWeaponsGunner=0;
				forceHideGunner=1;
				turretFollowFreeLook=0;
				viewGunnerInExternal=1;
				disableSoundAttenuation=1;
				canEject=1;
				commanding=0;
				allowLauncherIn=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.883202,-24.2533},
						{44.852001,95}
					};
					limitsArrayBottom[]=
					{
						{-6.1384001,-50},
						{-30,-30},
						{-23.624901,50}
					};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{44.883202,-24.2533},
						{44.852001,95}
					};
					limitsArrayBottom[]=
					{
						{-6.1384001,-50},
						{-30,-30},
						{-23.624901,50}
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName="Passenger Gunner (Left Seat 2)";
				proxyIndex=7;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName="Passenger Gunner (Left Seat 3)";
				proxyIndex=8;
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerName="Passenger Gunner (Left Seat 4)";
				proxyIndex=9;
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerName="Passenger Gunner (Right Seat 1)";
				proxyIndex=10;
			};
			class CargoTurret_06: CargoTurret_01
			{
				gunnerName="Passenger Gunner (Right Seat 2)";
				proxyIndex=11;
			};
			class CargoTurret_07: CargoTurret_01
			{
				gunnerName="Passenger Gunner (Right Seat 3)";
				proxyIndex=12;
			};
			class CargoTurret_08: CargoTurret_01
			{
				gunnerName="Passenger Gunner (Right Seat 4)";
				proxyIndex=13;
			};
			class CargoTurret_09: CargoTurret_01
			{
				gunnerName="Passenger Gunner (Rear Seat 1)";
				proxyIndex=14;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{44.883202,-24.2533},
						{44.852001,95}
					};
					limitsArrayBottom[]=
					{
						{-6.1384001,-40},
						{-30,-30},
						{-23.624901,40}
					};
				};
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{44.883202,-24.2533},
						{44.852001,95}
					};
					limitsArrayBottom[]=
					{
						{-6.1384001,-40},
						{-30,-30},
						{-23.624901,40}
					};
				};
			};
		};
		class AnimationSources
		{
			class muzzle_source
			{
				source="reload";
				weapon="Aux212_Bantha_T_Assault_MG";
			};
			class muzzle_source_rot
			{
				source="ammorandom";
				weapon="Aux212_Bantha_T_Assault_MG";
			};
			class minigun
			{
				source="revolving";
				weapon="Aux212_Bantha_T_Assault_MG";
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.00099999993,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622773,
			1,
			5
		};
		class GunnerCam;
		class RenderTargets
		{
			class RearCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RearCam2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="pipRVC_pos";
					pointDirection="pipRVC_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
			};
			class CommanderCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class GunnerCam: GunnerCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		threat[]={1,1,0.30000001};
		tas_canBlift=1;
		tas_liftVars="[[[[0,-2,-4.3]]], [0.4], [-0.3]]";
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class MET_Bantha_T_Assault: MET_Bantha_T_Assault_Base
	{
		author="Hazmat";
		scope=2;
		scopecurator=2;
		displayName="HAVw A2 Bantha-T (Assault)";
		hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenselectionstextures[]=
		{
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_Master\Bantha_Wheel_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Body_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Base_Co.paa",
			"212th\Vehicles\212th_APC02\Data\Textures\Bantha_T\Bantha_T_Assault\Bantha_T_Assault_Turret_Main_Co.paa"
		};
		#include "vics\Bantha\Bantha_StandardInventory.hpp"
	};