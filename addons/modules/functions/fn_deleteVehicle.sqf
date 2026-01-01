/*
	MET_fnc_clearSupportPad

	Params:
	0: OBJECT - pad
	1: OBJECT - caller
	2: BOOL   - use cost system
*/

params ["_pad", "_caller", "_useCost"];

if (!isServer) exitWith {};
if (isNull _pad) exitWith {};

private _costRoot = configFile >> "MET_SupportPad_VehicleCosts";
private _defaultCost = getNumber (_costRoot >> "Default");

private _refundTotal = 0;

// Find vehicles on pad
private _vehicles = nearestObjects [
	_pad,
	["Air","Car","Tank","Armored"],
	10
];

{
	private _veh = _x;
	private _vehClass = typeOf _veh;

	// Refund logic
	if (_useCost) then
	{
		private _costCfg = _costRoot >> _vehClass;
		private _cost = if (isNumber _costCfg)
			then { getNumber _costCfg }
			else { _defaultCost };

		_refundTotal = _refundTotal + (_cost * 0.5);
	};

	deleteVehicle _veh;
}
forEach _vehicles;

// Apply refund
if (_useCost && {_refundTotal > 0} && {!isNull _caller}) then
{
	["Vehicle Refunded!"] remoteExec ["hint", _caller];
	private _side = side _caller;
	[_side, _refundTotal, true] call ace_fortify_fnc_updateBudget;
};
