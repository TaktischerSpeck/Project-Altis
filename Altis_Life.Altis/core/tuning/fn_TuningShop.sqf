#include "..\..\script_macros.hpp"
/*
    File: fn_TuningShop.sqf
    Function: life_fnc_TuningShop
    Author: TaktischerSpeck for https://Project-Altis.de

    Description:
    TODO
*/
params [
    ["_vehicle",objNull,[objNull]]
];

if (isNull _vehicle) exitWith {}; //Bad type
if !(_vehicle isKindOf "Car") exitWith { hint "Das ist kein Landfahrzeug!"; };
if !(_vehicle in life_vehicles) exitWith { hint "Das ist nicht dein Fahrzeug!" };

Private "_Btn1";
Private "_Btn2";
Private "_Btn3";
Private "_Btn4";

Private _ok = createDialog "TuningShop";
if (!_ok) then {hint "Dialog couldn't be opened!"};

_Btn1 = CONTROL(18071,18080);
_Btn2 = CONTROL(18071,18081);
_Btn3 = CONTROL(18071,18082);
_Btn4 = CONTROL(18071,18083);

CONTROL(18071,18072) ctrlSetStructuredText parseText format ["Tier %1", _vehicle getvariable ["pa_initboostMulti_Stage",0] ]; //engine
CONTROL(18071,18078) ctrlSetStructuredText parseText format ["Tier %1", _vehicle getvariable ["pa_initmaxSpeedMulti_Stage",0] ]; //gerbox
CONTROL(18071,18076) ctrlSetStructuredText parseText format ["Tier %1", _vehicle getvariable ["pa_initbrakes_Stage",0] ]; //brake
CONTROL(18071,18074) ctrlSetStructuredText parseText format ["Tier %1", _vehicle getvariable ["pa_initsprings_Stage",0] ]; //spring

Private _tempStage = _vehicle getvariable ["pa_initboostMulti_Stage",0];
if (_tempStage == 5) then { _Btn1 ctrlEnable false; _tempStage = _tempStage - 1; };
_tempStage = _tempStage + 1;
CONTROL(18071,18073) ctrlSetStructuredText parseText format ["Tier %1",  _tempStage]; //engine

Private _tempStage = _vehicle getvariable ["pa_initmaxSpeedMulti_Stage",0];
if (_tempStage == 5) then { _Btn2 ctrlEnable false; _tempStage = _tempStage - 1; };
_tempStage = _tempStage + 1;
CONTROL(18071,18079) ctrlSetStructuredText parseText format ["Tier %1", _tempStage ]; //gerbox

Private _tempStage = _vehicle getvariable ["pa_initbrakes_Stage",0];
if (_tempStage == 5) then { _Btn3 ctrlEnable false; _tempStage = _tempStage - 1; };
_tempStage = _tempStage + 1;
CONTROL(18071,18077) ctrlSetStructuredText parseText format ["Tier %1", _tempStage ]; //brake

Private _tempStage = _vehicle getvariable ["pa_initsprings_Stage",0];
if (_tempStage == 5) then { _Btn4 ctrlEnable false; _tempStage = _tempStage - 1; };
_tempStage = _tempStage + 1;
CONTROL(18071,18075) ctrlSetStructuredText parseText format ["Tier %1", _tempStage ]; //spring
