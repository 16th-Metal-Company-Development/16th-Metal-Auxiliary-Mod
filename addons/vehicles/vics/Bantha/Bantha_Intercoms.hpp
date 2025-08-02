class ACE_SelfActions
{

    class ace_interaction_smashWindshield
    {
        displayName = "Smash windshield";
        condition = "_player == driver _target && {private _damage = _target getHitPointDamage 'HitGlass1'; _damage > 0.5 && {_damage < 1}}";
        statement = "playSound3D [format['A3\Sounds_F\weapons\hits\glass_%1.wss', floor (random 7) + 1], _target]; _target setHitPointDamage ['HitGlass1', 1];";
    };

    class ACE_lockpickVehicle
    {
        displayName = "Lockpick Vehicle";
        condition = "[_player, _target, 'canLockpick'] call ace_vehiclelock_fnc_lockpick";
        statement = "[_player, _target, 'startLockpick'] call ace_vehiclelock_fnc_lockpick";
    };

    class ACE_lockVehicle
    {
        displayName = "Lock Vehicle";
        icon = "\z\ace\addons\vehiclelock\ui\key_menuIcon_ca.paa";
        condition = "([_player, _target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [0, 1]}";
        statement = "[""ace_vehiclelock_setVehicleLock"", [_target, true], [_target]] call CBA_fnc_targetEvent";
    };

    class ACE_unlockVehicle
    {
        displayName = "Unlock Vehicle";
        icon = "\z\ace\addons\vehiclelock\ui\key_menuIcon_ca.paa";
        condition = "([_player, _target] call ace_vehiclelock_fnc_hasKeyForVehicle) && {(locked _target) in [2, 3]}";
        statement = "[""ace_vehiclelock_setVehicleLock"", [_target, false], [_target]] call CBA_fnc_targetEvent";
    };

    class ACE_Passengers
    {
        displayName = "Passengers";
        condition = "alive _target";
        insertChildren = "call ace_interaction_fnc_addPassengersActions";
        statement = "";
    };

    class ace_quickmount_ChangeSeat
    {
        displayName = "Change seat";
        icon = "\z\ace\addons\quickmount\UI\Seats_ca.paa";
        condition = "call ace_quickmount_fnc_canShowFreeSeats";
        insertChildren = "call ace_quickmount_fnc_addFreeSeatsActions";
    };

    class ace_reload_reloadTurret
    {
        displayName = "Reload weapon magazine";
        icon = "\A3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa";
        condition = "call ace_reload_fnc_canSwapTurretMagazine";
        statement = "call ace_reload_fnc_swapTurretMagazine";
    };

    class ace_ui_checkWeaponZeroing
    {
        displayName = "Check Weapon Zeroing";
        icon = "";
        condition = "!ace_ui_gunnerZeroing && {currentMuzzle _player != ''}";
        statement = "[_player] call ace_ui_fnc_checkWeaponZeroing";
    };

    class KAT_ArterialTest
    {
        displayName = "Run ABG Test";
        icon = "\z\ace\addons\medical_gui\ui\cross.paa";
        condition = "_target call ace_medical_treatment_fnc_isMedicalVehicle";
        insertChildren = "[_target, _player] call kat_circulation_fnc_addArterialTestActions";
        statement = "";
    };

    class ResetFCS
    {
        displayName = "Reset FCS";
        icon = "";
        condition = "_player call ace_fcs_fnc_canResetFCS";
        statement = "[vehicle _player, [_player] call ace_common_fnc_getTurretIndex] call ace_fcs_fnc_reset";
        showDisabled = 0;
    };



    class TFAR_IntercomChannel
    {
        displayName = "Intercom Channel";
        condition = "true";
        statement = "";
        icon = "";
        class TFAR_IntercomChannel_disabled 
        {
            displayName = "Disabled";
            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != -1";
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];";
        };
        class TFAR_IntercomChannel_Cargo
        {
            displayName = "Cargo";
            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 0";
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];";
        };
        class TFAR_IntercomChannel_Crew 
        {
            displayName = "Crew";
            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 1";
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];";
        };
        class TFAR_IntercomChannel_Misc_1
        {
            displayName = "Misc. 1";
            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 2";
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];";
        };
        class TFAR_IntercomChannel_Misc_2
        {
            displayName = "Misc. 2";
            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 3";
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
        };
        class TFAR_IntercomChannel_Misc_3
        {
            displayName = "Misc. 3";
            condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot',TFAR_defaultIntercomSlot]}; _intercom != 4";
            statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
        };
    };
};