if ((isServer) and (isDedicated)) exitWith {};


if ("JTAC_L" in (assignedItems player)) then {
    (missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]) setVariable ["JTAC", true, true];
};

["loadout", {
    private _player = (missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player]);

    _player removeAction (missionNamespace getVariable ["DB_JTAC_Action_Index", -1]);

    _player setVariable ["JTAC", ("JTAC_L" in (assignedItems _player)), true];

    [] spawn compile preprocessFileLineNumbers "\jtac_support\EPD\VirtualJTAC\init.sqf";
}] call CBA_fnc_addPlayerEventHandler;