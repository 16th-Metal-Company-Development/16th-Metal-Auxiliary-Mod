params ["_logic", "_units", "_activated"];

if (!_activated) exitWith {};
if (isServer) then
{
	private _pad = _logic getVariable ["MET_supportPad", objNull];

	if (isNull _pad) then
	{
		private _posASL = getPosASL _logic;
		private _dir    = getDir _logic;

		_pad = createVehicle ["Land_HelipadSquare_F", _posASL, [], 0, "NONE"];
		_pad setDir _dir;
		_pad setPosASL _posASL;
		_pad setVectorUp (surfaceNormal _posASL);
		_pad enableSimulationGlobal false;
		_pad allowDamage false;

		_logic setVariable ["MET_supportPad", _pad, true];
	};
};

waitUntil {
	!isNull (_logic getVariable ["MET_supportPad", objNull])
};

private _pad = _logic getVariable ["MET_supportPad", objNull];

private _presetClass = _logic getVariable ["spawnPreset", ""];
private _vehiclesCostPoints = _logic getVariable ["vehiclesCostPoints", false];
private _allowRepair = _logic getVariable ["allowRepair", true];
private _allowRefuel = _logic getVariable ["allowRefuel", true];
private _allowRearm  = _logic getVariable ["allowRearm", true];
private _allowPylons = _logic getVariable ["allowPylons", true];
private _allowClear  = _logic getVariable ["allowClearPad", true];

private _spawnCenter = getPosASL _logic;

if (_units isEqualTo []) exitWith
{
	systemChat "No terminal synced to support pad module";
};

private _terminal = _units select 0;

private _presetCfg = configFile >> "MET_SupportPad_Presets" >> _presetClass;
if (!isClass _presetCfg) exitWith
{
	diag_log format [
		"[MET SupportPad] Invalid preset '%1'",
		_presetClass
	];
};

private _spawnOptions = [_presetClass] call MET_fnc_getSupportPadPresetValues;

{
	_x params ["_vehClass", "_vehName", "_cost"];

	private _title = if (_vehiclesCostPoints) then {
		format ["Spawn %1 [%2]", _vehName, _cost]
	} else {
		format ["Spawn %1", _vehName]
	};

	_terminal addAction [
		_title,
		{
			params ["_target", "_caller", "_actionId", "_args"];
		_args params ["_vehClass", "_pad", "_cost", "_useCost"];

		[_vehClass, _pad, _caller, _cost, _useCost]
			remoteExec ["MET_fnc_spawnVehicle", 2];
		},
		[_vehClass, _pad, _cost, _vehiclesCostPoints],
		1.5,
		true,
		true,
		"",
		"",
		10
	];
}
forEach _spawnOptions;


if (_allowClear) then {
	_terminal addAction 
	[
		"Clear Pad",
		{
			params ["_target", "_caller", "_actionId", "_args"];
			_args params ["_pad", "_useCost"];

			[_pad, _caller, _useCost]
				remoteExec ["MET_fnc_deleteVehicle", 2];
		},
		[_pad, _vehiclesCostPoints],
		2,
		true,
		true,
		"",
		"",
		10
	];
};

if (_allowRefuel) then {
	_terminal addAction 
	[
		"Refuel", 
		{
			params ["", "", "", "_args"];
			private _pad = _args select 0;

			private _list = nearestObjects [_pad, ["Air","Car","Tank"], 10];
			if (_list isEqualTo []) exitWith {};

			private _veh = _list select 0;

			["Refueling", 5, {!isEngineOn _veh}, {_veh setFuel 1}, {}]
				call CBA_fnc_progressBar;
		},
		[_pad],
		2,
		true,
		true,
		"",
		"",
		10
	];
};

if (_allowRepair) then {
	_terminal addAction 
	[
		"Repair", 
		{
			params ["", "", "", "_args"];
			private _pad = _args select 0;

			private _list = nearestObjects [_pad, ["Air","Car","Tank"], 10];
			if (_list isEqualTo []) exitWith {};

			private _veh = _list select 0;

			["Repairing", 5, {!isEngineOn _veh}, {_veh setDamage 0}, {}]
				call CBA_fnc_progressBar;
		}, 
		[_pad],
		2,
		true,
		true,
		"",
		"",
		10
	];
};

if (_allowRearm) then {
	_terminal addAction 
	[
		"Rearm", 
		{
		params ["", "", "", "_args"];
		private _pad = _args select 0;

		private _list = nearestObjects [_pad, ["Air","Car","Tank"], 10];
		if (_list isEqualTo []) exitWith {};

		private _veh = _list select 0;

		["Rearming", 5, {!isEngineOn _veh}, {_veh setVehicleAmmo 1}, {}]
			call CBA_fnc_progressBar;
		}, 
		[_pad],
		2,
		true,
		true,
		"",
		"",
		10
	];
};

if (_allowPylons) then {
	_terminal addAction 
	[
		"Change Pylons", 
		{
			params ["", "", "", "_args"];
			private _pad = _args select 0;

			private _list = nearestObjects [_pad, ["Helicopter","Plane"], 100];
			if (_list isEqualTo []) exitWith {};

			private _veh = _list select 0;

			[_veh] call ace_pylons_fnc_showDialog;
		}, 
		[_pad],
		2,
		true,
		true,
		"",
		"",
		10
	];
};

