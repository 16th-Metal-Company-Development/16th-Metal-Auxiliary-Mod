/*
	Updates the wave HUD display.

	Params:
	0: Number or String (or "") - wave number (optional)
	1: Number or String (or "") - enemy count (optional)
	2: String (optional)        - status message (optional)
*/

params ["_waveNum", "_enemyCount", "_status"];

private _display = uiNamespace getVariable ["MET_WaveHUD", displayNull];
if (isNull _display) exitWith {};

private _lines = [];

// Wave number line
if (!isNil "_waveNum" && { str _waveNum != "" }) then {
	_lines pushBack format ["<t size='1.2' color='#FFAA00'>Wave %1</t>", _waveNum];
};

// Enemy count line
if (!isNil "_enemyCount" && { str _enemyCount != "" }) then {
	_lines pushBack format ["<t size='1.0'>Enemies Remaining: %1</t>", _enemyCount];
};

// Status text line
if (!isNil "_status" && { _status != "" }) then {
	_lines pushBack format ["<t size='1.0' color='#AAAAAA'>%1</t>", _status];
};

private _textFormatted = "<t align='center'>" + ( _lines joinString "<br/>" ) + "</t>";
private _text = parseText _textFormatted;

// Update control
(_display displayCtrl 1000) ctrlSetStructuredText _text;