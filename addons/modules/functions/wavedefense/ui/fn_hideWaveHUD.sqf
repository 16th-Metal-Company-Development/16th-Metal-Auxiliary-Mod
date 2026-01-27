/*
	Shows WaveHUD on Client

	Params:
*/

private _display = uiNamespace getVariable ["MET_WaveHUD", displayNull];
if (!isNull _display) then {
	_display closeDisplay 1;
	uiNamespace setVariable ["MET_WaveHUD", displayNull];
};