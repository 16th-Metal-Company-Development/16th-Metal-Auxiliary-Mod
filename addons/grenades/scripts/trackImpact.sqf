// filepath: z\16th\addons\grenades\scripts\trackImpact.sqf

private _grenade = _this select 0;

// Initialize impact counter if not already set
if (isNil {_grenade getVariable "impactCount"}) then {
    _grenade setVariable ["impactCount", 0];
};

// Increment the impact counter
private _impactCount = _grenade getVariable ["impactCount", 0];
_impactCount = _impactCount + 1;
hint format ["Impact Count: %1", _impactCount];
_grenade setVariable ["impactCount", _impactCount];

// Trigger explosion on the second impact
if (_impactCount == 2) then {
    _grenade setDamage 1; // Detonate the grenade
};