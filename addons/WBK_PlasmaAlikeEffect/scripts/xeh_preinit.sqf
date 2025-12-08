[ 
    "WBK_PlasmaKillWeapons", 
    "EDITBOX", 
    ["Array of plasma weapons","Desired weapon dosent work with the system? Just add it into this array and you are gucci!"],
    "WBK Sci-Fi Death Reactions",
    "['TKE_UCNLasRifle','TIOW_StaffOfLight_Base','TIOW_StaffOfLight_Mephrit','TIOW_StaffOfLight_Thokt','TIOW_GaussFlayer_Base','TIOW_GaussFlayer_Mephrit','TIOW_GaussFlayer_Thokt','DK_PlasmaGun','Chaos_PlasmaGun','TIOW_IG_Plasmagun_01','TIOW_SM_Ragefire_PlasmaGun']",
    1,
    {   
        params ["_value"];  
		_arr = parseSimpleArray _value;
		WBK_PlasmaKill_Weapons = _arr;
    }
] call CBA_fnc_addSetting;


[ 
    "WBK_MeltaKillWeapons", 
    "EDITBOX", 
    ["Array of melting weapons","Desired weapon dosent work with the system? Just add it into this array and you are gucci!"],
    "WBK Sci-Fi Death Reactions",
    "['TIOW_MeltaGun_01','TIOW_Bike_Multi_Melt','TIOW_SM_MeltaGun_01','WBK_SolarAux_MeltaGun','WBK_SolarAux_MeltaGun_Dark']",
    1,
    {   
        params ["_value"];  
		_arr = parseSimpleArray _value;
		WBK_MeltaKill_Weapons = _arr;
    }
] call CBA_fnc_addSetting;


[ 
    "WBK_PlasmaKillColor", 
    "LIST", 
    ["Color of plasma effect","Select one option. You cannot setcolor yourself because of some hardcoded elements."],
    "WBK Sci-Fi Death Reactions",
    [["Green","Red","Blue"], ["Green","Red","Blue"], 0],
    1,
    {   
        params ["_value"]; 
        WBK_PlasmaKill_Color_String = _value;
    }
] call CBA_fnc_addSetting;

WBK_PlasmaDeath_Regular = { 
   if (isDedicated) exitWith {};
   switch WBK_PlasmaKill_Color_String_Int do {
		case "Blue": {WBK_PlasmaKill_Color = [[[0,0.3,1,1]],[[0,30,255,1]],"\A3\Characters_F_Bootcamp\Common\Data\B_VR_Soldier_F.rvmat"];};
		case "Red": {WBK_PlasmaKill_Color = [[[1,0.1,0,1]],[[255,30,0,1]],"\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat"];};
		case "Orange": {WBK_PlasmaKill_Color = [[[0.988,0.631,0,1]],[[252,161,0,1]],"\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat"];};
		case "Yellow": {WBK_PlasmaKill_Color = [[[.839,0.749,0.486,1]],[[214,191,124,1]],"\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat"];};
		case "Green": {WBK_PlasmaKill_Color = [[[0,1,0,1]],[[40,255,0,1]],"\A3\Characters_F_Bootcamp\Common\Data\I_VR_Soldier_F.rvmat"];};
		//default {WBK_PlasmaKill_Color = [[[0,1,0,1]],[[40,255,0,1]],"\A3\Characters_F_Bootcamp\Common\Data\I_VR_Soldier_F.rvmat"];};
   };
   if ((_this # 0) isKindOf "TIOWSpaceMarine_Base") exitWith {
		_this spawn WBK_PlasmaDeath_Big;
   };
   params ["_unit","_killer"];
   _unit setObjectMaterial [0,WBK_PlasmaKill_Color # 2];
   _unit setObjectMaterial [1,WBK_PlasmaKill_Color # 2];   
   _aslLoc = _unit; 
	_scorch = "Land_Decal_ScorchMark_01_small_F" createVehicleLocal (getPosATL _unit);
	_scorch setPosATL (getPosATL _unit);
	_scorch setDir (random 360);
	_scorch setVectorUp surfaceNormal getPosASL _scorch;
	_scorch say3D ["wbk_plasmadeath",300];
	_source02 = "#particlesource" createVehicleLocal (getPosATL _scorch);
	_source02 setParticleClass "SmallDestructionSmoke";
	_source02 setPosATL (getPosATL _scorch);
	_ash = createVehicleLocal ["WBK_PileOfAsh", getPosATL _scorch, [], 0, "CAN_COLLIDE"];
	_ash attachTo [_scorch,[0,0,0.15]];
   _fulgi  = "#particlesource" createVehicleLocal getPosATL _unit;  
   _fulgi setParticleRandom [0, [1, 1, 0], [2, 2, 5], 3, 0.25, [0, 0, 0, 0.1], 0, 0]; 
   _fulgi setPosATL (unitAimPosition _unit);
   _fulgi setDropInterval 0.001; 
   _fulgi setParticleCircle [0, [0, 0, 0]]; 
   _fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.15,0.02],WBK_PlasmaKill_Color # 0,[1],0,0,"","",_fulgi, 0, false, 0.4, WBK_PlasmaKill_Color # 1];  
   _gravi1 = "#particlesource" createVehicleLocal getPos _aslLoc;   
   _gravi1 setParticleCircle [0.6, [2, 2, 0]]; 
   _gravi1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1,0],"","Billboard",1,2,[0,0,0],[0,0,0.6],0,0.05,0.04,0.05,[1,2,3,4,5,6],[[0.1,0.1,0.1,1],[0.25,0.25,0.25,1],[0.5,0.5,0.5,1],[0,0,0,1],[0,0,0,0.5],[0,0,0,0.3]],[1.5,0.5,0,0],0.4,0.09,"","","",0,false,0,[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]]; 
   _gravi1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0.25, [0.05, 0.05, 0.05, 0.1], 0, 0]; 
   _gravi1 setDropInterval 0.0004; 
   _smlfirelight = "#lightpoint" createVehicleLocal (getPos _aslLoc); 
   _smlfirelight setPosATL (_aslLoc modelToWorld [0,0,1]); 
   _smlfirelight setLightAmbient [((WBK_PlasmaKill_Color # 0) # 0) # 0,((WBK_PlasmaKill_Color # 0) # 0) # 1,((WBK_PlasmaKill_Color # 0) # 0) # 2];
   _smlfirelight setLightColor [((WBK_PlasmaKill_Color # 0) # 0) # 0,((WBK_PlasmaKill_Color # 0) # 0) # 1,((WBK_PlasmaKill_Color # 0) # 0) # 2];
   _smlfirelight setLightBrightness 1; 
   _smlfirelight setLightUseFlare true; 
   _smlfirelight setLightDayLight true; 
   _smlfirelight setLightFlareSize 12; 
   _smlfirelight setLightFlareMaxDistance 200;
   _blood = "#particlesource" createVehicleLocal (_unit modelToWorld (_unit selectionPosition "head"));
	_blood setPosATL (_unit modelToWorld (_unit selectionPosition "head"));
	_blood setParticleParams [            
			["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],       
			"",         
			"billboard",        
			0.01, 30,        
			[0, 0, 0],     
			(vectorDir _killer) vectorMultiply (6),   
			1,2,0.2,0,      
			[0.2, 0.1],      
			[[0.2, 0.2, 0.2, 0.8], [0.2, 0.2, 0.2, 0.4]],      
			[0.00001],          
			1,       
			0.1,
			"",
			"",       
			_blood,     
			0,   
			false,       
			0.1     
		];            
	_blood setParticleRandom [0.5, [0, 0, 0], [1, 1, 3.25], 1, 0.5, [0, 0, 0, 0.1], 0, 0, 10];      
	_blood setDropInterval 0.001;
   uiSleep 0.1; 
   _unit hideObject true;
   _fulgi setPosATL (getPosATL _scorch);
    _fulgi setParticleRandom [0,[0,0,0],[0.4,0.4,0.5],1,0,[0,0,0,0.1],1,1];
	_fulgi setDropInterval 0.1;
	_fulgi setParticleCircle [0,[0,0,0]];
	_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,14,[0,0,0.1],[0,0,0.5],13,1.3,1,0,[0.09,0.01],WBK_PlasmaKill_Color # 0,[1],0,0,"","",_fulgi, 0, false, 0.1, WBK_PlasmaKill_Color # 1];
	_blood setPosATL (getPosATL _scorch);
    _blood setParticleRandom [0,[0,0,0],[0.4,0.4,0.5],1,0,[0,0,0,0.1],1,1];
	_blood setDropInterval 0.1;
	_blood setParticleCircle [0,[0,0,0]];
	_blood setParticleParams [["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],"","Billboard",1,14,[0,0,0.1],[0,0,0.5],13,1.3,1,0,[0.04,0.09,0.01],[[0.2, 0.2, 0.2, 0.8], [0.2, 0.2, 0.2, 0.4]],[1],0,0,"","",_blood, 0, false, 0.1];
   deleteVehicle _gravi1; 
   uiSleep 0.2; 
   deleteVehicle _smlfirelight; 
   uiSleep 14; 
   deleteVehicle _fulgi; 
    deleteVehicle _blood;
	uiSleep 10;
	deleteVehicle _source02;
	uiSleep 60;
	deleteVehicle _scorch;
	deleteVehicle _ash;
};

WBK_PlasmaDeath_Big = { 
   if (isDedicated) exitWith {}; 
   params ["_unit","_killer"];
   _unit setObjectMaterial [0,WBK_PlasmaKill_Color # 2];
   _unit setObjectMaterial [1,WBK_PlasmaKill_Color # 2];   
   _aslLoc = _unit; 
	_scorch = "Land_Decal_ScorchMark_01_large_F" createVehicleLocal (getPosATL _unit);
	_scorch setPosATL (getPosATL _unit);
	_scorch setDir (random 360);
	_scorch setVectorUp surfaceNormal getPosASL _scorch;
	_scorch say3D ["wbk_plasmadeath",300];
	_source02 = "#particlesource" createVehicleLocal (getPosATL _scorch);
	_source02 setParticleClass "MediumDestructionSmoke";
	_source02 setPosATL (getPosATL _scorch);
	_ash = createVehicleLocal ["WBK_PileOfAsh_Big", getPosATL _scorch, [], 0, "CAN_COLLIDE"];
	_ash attachTo [_scorch,[0,0,0.4]];
   _fulgi  = "#particlesource" createVehicleLocal getPosATL _unit;  
   _fulgi setParticleRandom [0, [1, 1, 0], [8, 8, 5], 3, 0.25, [0, 0, 0, 0.1], 0, 0]; 
   _fulgi setPosATL (unitAimPosition _unit);
   _fulgi setDropInterval 0.001; 
   _fulgi setParticleCircle [0, [0, 0, 0]]; 
   _fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.25,0.02],WBK_PlasmaKill_Color # 0,[1],0,0,"","",_fulgi, 0, false, 0.4, WBK_PlasmaKill_Color # 1];  
   _gravi1 = "#particlesource" createVehicleLocal getPos _aslLoc;   
   _gravi1 setParticleCircle [0.6, [7, 7, 0]]; 
   _gravi1 setParticleParams [["\A3\data_f\ParticleEffects\Universal\Refract.p3d",1,0,1,0],"","Billboard",1,2,[0,0,0],[0,0,0.6],0,0.05,0.04,0.05,[1,3,5,7,9,11],[[0.1,0.1,0.1,1],[0.25,0.25,0.25,1],[0.5,0.5,0.5,1],[0,0,0,1],[0,0,0,0.5],[0,0,0,0.3]],[1.5,0.5,0,0],0.4,0.09,"","","",0,false,0,[[0,0,0,0],[0,0,0,0],[0,0,0,0],[0,0,0,0]]]; 
   _gravi1 setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0.25, [0.05, 0.05, 0.05, 0.1], 0, 0]; 
   _gravi1 setDropInterval 0.0004; 
   _smlfirelight = "#lightpoint" createVehicleLocal (getPos _aslLoc); 
   _smlfirelight setPosATL (_aslLoc modelToWorld [0,0,1]); 
   _smlfirelight setLightAmbient [((WBK_PlasmaKill_Color # 0) # 0) # 0,((WBK_PlasmaKill_Color # 0) # 0) # 1,((WBK_PlasmaKill_Color # 0) # 0) # 2];
   _smlfirelight setLightColor [((WBK_PlasmaKill_Color # 0) # 0) # 0,((WBK_PlasmaKill_Color # 0) # 0) # 1,((WBK_PlasmaKill_Color # 0) # 0) # 2];
   _smlfirelight setLightBrightness 1; 
   _smlfirelight setLightUseFlare true; 
   _smlfirelight setLightDayLight true; 
   _smlfirelight setLightFlareSize 18; 
   _smlfirelight setLightFlareMaxDistance 200;
   _blood = "#particlesource" createVehicleLocal (_unit modelToWorld (_unit selectionPosition "head"));
	_blood setPosATL (_unit modelToWorld (_unit selectionPosition "head"));
	_blood setParticleParams [            
			["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],       
			"",         
			"billboard",        
			0.01, 30,        
			[0, 0, 0],     
			(vectorDir _killer) vectorMultiply (4),   
			1,2,0.2,0,      
			[0.4, 0.2],      
			[[0.2, 0.2, 0.2, 0.8], [0.2, 0.2, 0.2, 0.4]],      
			[0.00001],          
			1,       
			0.1,
			"",
			"",       
			_blood,     
			0,   
			false,       
			0.1     
		];            
	_blood setParticleRandom [0.5, [0, 0, 0], [1, 1, 3.25], 1, 0.5, [0, 0, 0, 0.1], 0, 0, 10];      
	_blood setDropInterval 0.001;
   uiSleep 0.1; 
   _unit hideObject true;
   _fulgi setPosATL (getPosATL _scorch);
    _fulgi setParticleRandom [0,[0,0,0],[1,1,0.5],1,0,[0,0,0,0.1],1,1];
	_fulgi setDropInterval 0.1;
	_fulgi setParticleCircle [0,[0,0,0]];
	_fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,14,[0,0,0.1],[0,0,0.5],13,1.3,1,0,[0.13,0.01],WBK_PlasmaKill_Color # 0,[1],0,0,"","",_fulgi, 0, false, 0.1, WBK_PlasmaKill_Color # 1];
	_blood setPosATL (getPosATL _scorch);
    _blood setParticleRandom [0,[0,0,0],[1,1,0.5],1,0,[0,0,0,0.1],1,1];
	_blood setDropInterval 0.1;
	_blood setParticleCircle [0,[0,0,0]];
	_blood setParticleParams [["A3\Data_F\ParticleEffects\Universal\smoke.p3d",1, 0, 1],"","Billboard",1,14,[0,0,0.1],[0,0,0.5],13,1.3,1,0,[0.06,0.12,0.01],[[0.2, 0.2, 0.2, 0.8], [0.2, 0.2, 0.2, 0.4]],[1],0,0,"","",_blood, 0, false, 0.1];
   deleteVehicle _gravi1; 
   uiSleep 0.2; 
   deleteVehicle _smlfirelight; 
   uiSleep 14; 
   deleteVehicle _fulgi; 
    deleteVehicle _blood;
	uiSleep 10;
	deleteVehicle _source02;
	uiSleep 60;
	deleteVehicle _scorch;
	deleteVehicle _ash;
};

WBK_MeltaDeath = {
	_this setDamage 1;
	if !(_this isKindOf "TIOWSpaceMarine_Base") then {
		[_this,[selectRandom ["melting_human_1","melting_human_2","melting_human_3"], 0, 0.5, false]] remoteExec ["switchMove",0]; 
	};
	[_this, {
		if (isDedicated) exitWith {};
		_smlfirelight = "#lightpoint" createVehicleLocal (getPos _this); 
	   _smlfirelight setPosATL (_this modelToWorld [0,0.2,0.8]); 
	   _smlfirelight setLightAmbient [1,0.3,0];
	   _smlfirelight setLightColor [1,0.3,0];
	   _smlfirelight setLightBrightness 1; 
	   _smlfirelight setLightUseFlare true; 
	   _smlfirelight setLightDayLight true; 
	   _smlfirelight setLightFlareSize 5; 
	   _smlfirelight setLightFlareMaxDistance 200;
		_fulgi  = "#particlesource" createVehicleLocal getPosATL _this;  
	   _fulgi setParticleRandom [0, [0.5, 0.5, 0], [1.5, 1.5, 5], 3, 0.25, [0, 0, 0, 0.1], 0, 0]; 
	   _fulgi setPosATL (getPosATL _this);
	   _fulgi setDropInterval 0.001; 
	   _fulgi setParticleCircle [0, [0, 0, 0]]; 
	   _fulgi setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1],"","Billboard",1,15,[0,0,0],[0,0,0],0,1.7,1,0,[0.1,0.02],[[1,0.1,0,1]],[1],0,0,"","",_fulgi, 0, false, 0.4, [[255,30,0,1]]];  
		_scorch = "Land_Decal_ScorchMark_01_small_F" createVehicleLocal (getPosATL _this);
		_scorch setPosATL (getPosATL _this);
		_scorch setDir (random 360);
		_scorch setVectorUp surfaceNormal getPosASL _scorch;
		if !(_this isKindOf "TIOWSpaceMarine_Base") then {
			switch animationState _this do {
				case "melting_human_3": {_scorch say3D ["wbk_melta_death_3",300];};
				case "melting_human_2": {_scorch say3D ["wbk_melta_death_2",300];};
				default {_scorch say3D ["wbk_melta_death_1",300];};
			};
		};
		{
			if !(_this isKindOf "TIOWSpaceMarine_Base") then {
				_this setObjectTexture [_x,"\WBK_PlasmaAlikeEffect\textures\burnedFleshCO.paa"]; 
			};
			_this setObjectMaterial [_x,"\A3\Characters_F_Bootcamp\Common\Data\O_VR_Soldier_F.rvmat"]; 
		} forEach [0,1,2,3,4,5];
		_veloMan = _this;
		_particleAttach1 = "#particlesource" createVehicleLocal position _veloMan; 
		_particleAttach1 setParticleCircle [0, [0, 0, 0]];
		_particleAttach1 setParticleRandom [0, [0, 0, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
		_particleAttach1 setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], 
		"", 
		"Billboard", 
		1, 
		0.7,
		[0, 0, 0], 
		[0, 0, 0.75], 
		5, 
		0, 
		7.9, 
		0.075, 
		[0.8, 3, 0.4], 
		[[1, 0.2, 0, 1]], 
		[0.08], 
		1, 
		0, 
		"", 
		"", 
		_particleAttach1, 0, false, 0.1, [[255,40,0,1]]];
		_particleAttach1 setDropInterval 0.05;
		_particleAttach1 attachTo [_veloMan, [0,0,0],"Spine3"];
		_particleSmoke1 = "#particlesource" createVehicleLocal position _veloMan; 
		_particleSmoke1 setParticleClass "SmallDestructionSmoke"; 
		_particleSmoke1 attachTo [_veloMan,[0,0,0],"Pelvis"]; 
		uiSleep 0.1;
		deleteVehicle _fulgi;
		uiSleep 0.5;
		{
			_this setObjectMaterial [_x,"\a3\data_f\default.rvmat"]; 
		} forEach [0,1,2,3,4,5];
		deleteVehicle _particleAttach1;
		deleteVehicle _smlfirelight;
		_particleAttach2 = "#particlesource" createVehicleLocal position _veloMan; 
		_particleAttach2 setParticleClass "SmallDestructionFire"; 
		_particleAttach2 setParticleFire [0,0,0];
		_particleAttach2 attachTo [_veloMan,[0.3,0,0],"Pelvis"];  
		_particleAttach3 = "#particlesource" createVehicleLocal position _veloMan; 
		_particleAttach3 setParticleClass "SmallDestructionFire"; 
		_particleAttach3 attachTo [_veloMan,[0,-0.2,0],"Pelvis"];  
		_particleAttach4 = "#particlesource" createVehicleLocal position _veloMan; 
		_particleAttach4 setParticleClass "SmallDestructionFire"; 
		_particleAttach4 attachTo [_veloMan,[-0.2,0,0],"Pelvis"];   
		uiSleep 15;
		{deleteVehicle _x;} forEach [_particleAttach1,_particleAttach2,_particleAttach3,_particleAttach4];
		uiSleep 5;
		deleteVehicle _particleSmoke1;
		uiSleep 120;
		deleteVehicle _scorch;
	}] remoteExec ['spawn', [0,-2] select isDedicated];
	uiSleep 18;
	hideBody _this;
};