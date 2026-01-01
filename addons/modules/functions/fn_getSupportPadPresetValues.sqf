/*
	MET_fnc_getSupportPadPresetValues

	Params:
	0: STRING - preset class name

	Returns:
	[
		[vehClass, displayName, cost],
		...
	]
*/

params ["_presetClass"];

private _out = [];

private _presetCfg = configFile >> "MET_SupportPad_Presets" >> _presetClass;
if (!isClass _presetCfg) exitWith {_out};

private _vehicles = getArray (_presetCfg >> "vehicleClasses");
if (_vehicles isEqualTo []) exitWith {_out};

{
	private _vehClass = _x;

	// Validate vehicle exists
	private _vehCfg = configFile >> "CfgVehicles" >> _vehClass;
	if (!isClass _vehCfg) then {
		diag_log format [
			"[MET SupportPad] Invalid vehicle class '%1' in preset '%2'",
			_vehClass,
			_presetClass
		];
		continue;
	};

	private _displayName = getText (_vehCfg >> "displayName");

	// Resolve cost
	private _costCfg = configFile >> "MET_SupportPad_VehicleCosts" >> _vehClass;
	private _cost = if (isNumber _costCfg)
		then { getNumber _costCfg }
		else { getNumber (configFile >> "MET_SupportPad_VehicleCosts" >> "Default") };

	_out pushBack [
		_vehClass,
		_displayName,
		_cost
	];
}
forEach _vehicles;

_out
