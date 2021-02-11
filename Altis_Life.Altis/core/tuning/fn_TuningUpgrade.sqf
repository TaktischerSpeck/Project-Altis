#include "..\..\script_macros.hpp"
/*
    File: fn_TuningUpgrade.sqf
    Function: life_fnc_TuningUpgrade
    Author: TaktischerSpeck for https://Project-Altis.de

    Description:
    TODO
*/

params[
	["_part", ""]
];
private ["_vehicleLife","_item"];

Private _vehicle = vehicle cursorObject;
if (isNull _vehicle) exitWith {}; //FUCK

Private _dbInfo = _vehicle getVariable ["dbInfo",[]];
if (_dbInfo isEqualTo []) exitWith {};
if ((count _dbInfo) isEqualTo 2) exitWith { hint "Dein Fahrzeug muss einmal ein und wieder ausgeparkt werden!"; };

private _vehicleID = _dbInfo select 2;
Private _mTuningShop = getMarkerPos "TuningShop";
if ((player distance _mTuningShop) >= 30) exitWith { hint "Du musst bei der Tuning Werkstatt sein"; };

private _pa_initboostMulti = _vehicle getvariable ["pa_initboostMulti_Stage",0]; //Engine (1)
private _pa_initmaxSpeedMulti = _vehicle getvariable ["pa_initmaxSpeedMulti_Stage",0]; //Gearbox (2)
private _pa_initbrakes = _vehicle getvariable ["pa_initbrakes_Stage",0]; //brakes (3)
private _pa_initsprings = _vehicle getvariable ["pa_initsprings_Stage",0]; //spring (4)
private _stage = 0;
private _price = M_CONFIG(getNumber,"LifeCfgVehicles",_vehicleLife,"price");
private _storageFee = LIFE_SETTINGS(getNumber,"vehicle_storage_fee_multiplier");

if (_part isEqualTo 5 || _part isEqualTo 0) exitWith {};
if (_part isEqualTo 1) then { _stage = _pa_initboostMulti; _item = "engine_T"; _pa_initboostMulti = _pa_initboostMulti + 1; };
if (_part isEqualTo 2) then { _stage = _pa_initmaxSpeedMulti; _item = "transmission_T"; _pa_initmaxSpeedMulti = _pa_initmaxSpeedMulti + 1; };
if (_part isEqualTo 3) then { _stage = _pa_initbrakes; _item = "brakes_T"; _pa_initbrakes = _pa_initbrakes + 1; };
if (_part isEqualTo 4) then { _stage = _pa_initsprings; _item = "suspension_T"; _pa_initsprings = _pa_initsprings + 1; };

if (_stage >= 5) exitwith { hint "Du hast bereits die Maximale Stufe erreicht"; };

_stage = _stage + 1;
_item = Format["%1%2", _item, _stage];

if (([false,_item,1] call life_fnc_handleInv)) then {

    [_vehicleID,_part,_stage] remoteExecCall ["TON_fnc_TuningUpgrade",2];
    [_vehicle,_pa_initboostMulti,_pa_initmaxSpeedMulti,_pa_initbrakes,_pa_initsprings] remoteExecCall ["life_fnc_initTuning",owner _vehicle];

    [3] call SOCK_fnc_updatePartial;
    hint "Dein Fahrzeug wurde verbessert";

    /*
    if (life_HC_isActive) then {
        [getPlayerUID player, "Tuning Upgrade", Format["%1", _item], Format["%1", _vehicleID] ] remoteExec ["HC_TACS_fnc_TaktischesLog",HC_Life];
    } else {
        [getPlayerUID player, "Tuning Upgrade", Format["%1", _item], Format["%1", _vehicleID] ] remoteExec ["TACS_fnc_TaktischesLog",2];
    };
    */
    closeDialog 0;
} else {
    hint "Du hast das benötigte Bauteil nicht!";
};
