if (!hasInterface) exitWith {};

["MET_trainingDetonatorThrown", {
	params ["_projectile", "_fuse"];
	if (isNull _projectile) exitWith {};
	if (_fuse <= 0) then { _fuse = 5; };

	[_projectile, _fuse] spawn {
		params ["_projectile", "_fuse"];
		private _lastPos = getPosASL _projectile;
		private _armedSound = _projectile say3D ["MET_TrainingDetonatorArmed", 150, 1];
		private _end = time + _fuse;

		waitUntil {
			sleep 0.02;
			if (!isNull _projectile) then { _lastPos = getPosASL _projectile; };
			isNull _projectile || {time >= _end}
		};

		if (!isNull _armedSound) then { deleteVehicle _armedSound; };
		playSound3D ["z\MET\addons\grenades\data\sounds\partyblower.ogg", objNull, false, _lastPos, 2, 1, 300, 0, true];
	};
}] call CBA_fnc_addEventHandler;
