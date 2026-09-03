/*
 * These handlers only perform local sound playback.
 * The transient events are raised globally farther below.
 */
["MET_ATRT_playMountSound", {
    params ["_atrt"];

    if (!hasInterface || {isNull _atrt}) exitWith {};

    _atrt say3D
    [
        "MET_ATRT_Mount",
        75,
        1,
        false
    ];
}] call CBA_fnc_addEventHandler;


["MET_ATRT_playDismountSound", {
    params ["_atrt"];

    if (!hasInterface || {isNull _atrt}) exitWith {};

    _atrt say3D
    [
        "MET_ATRT_Dismount",
        75,
        1,
        false
    ];
}] call CBA_fnc_addEventHandler;


/*
 * Legion Studios raises this persistent event whenever an AT-RT
 * rider mounts.
 *
 * Only the machine that owns the rider raises our transient events.
 * This prevents the persistent LS event from replaying the mounting
 * sound for JIP clients.
 */
["ls_vehicles_atrt_createEffects", {
    private _atrt = _this;

    if (isNull _atrt) exitWith {};

    /*
     * Allow the public rider variable to synchronize.
     */
    [{
        private _atrt = _this;

        if (isNull _atrt) exitWith {};

        private _rider = _atrt getVariable
        [
            "ls_vehicles_atrt_rider",
            objNull
        ];

        /*
         * Exactly one machine should continue: whichever owns the rider.
         *
         * This can be a player client, the server, or a headless client.
         */
        if (isNull _rider || {!local _rider}) exitWith {};

        [
            "MET_ATRT_playMountSound",
            [_atrt]
        ] call CBA_fnc_globalEvent;

        /*
         * Watch for this specific rider to be removed or replaced.
         */
        [
            {
                params ["_atrt", "_rider"];

                isNull _atrt ||
                {
                    (_atrt getVariable
                    [
                        "ls_vehicles_atrt_rider",
                        objNull
                    ]) isNotEqualTo _rider
                }
            },
            {
                params ["_atrt", "_rider"];

                if (isNull _atrt) exitWith {};

                [
                    "MET_ATRT_playDismountSound",
                    [_atrt]
                ] call CBA_fnc_globalEvent;
            },
            [_atrt, _rider]
        ] call CBA_fnc_waitUntilAndExecute;

    }, _atrt, 0.1] call CBA_fnc_waitAndExecute;

}] call CBA_fnc_addEventHandler;