if (isNil "MET_beamDebug") then {
	MET_beamDebug = true;
};

if (MET_beamDebug) then {
	diag_log format ["[MET Beam] postInit: ready (MET_disableBeamHooks=%1)", missionNamespace getVariable ["MET_disableBeamHooks", false]];
};
