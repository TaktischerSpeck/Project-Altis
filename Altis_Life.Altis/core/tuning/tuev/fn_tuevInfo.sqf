#include "..\..\..\script_macros.hpp"
/*
    File: fn_tuevInfo.sqf
    Function: mv_fnc_tuevInfo
    Author: TaktischerSpeck for https://Project-Altis.de

    Description:
    TODO
*/

params [
	["_checker",""],
	["_info",""]
];

Private "_Btn1";
Private _vehicle = vehicle cursorObject;
if (isNull _vehicle) exitWith {}; //Bad type
Private _dbInfo = _vehicle getVariable ["dbInfo",[]];
if (_dbInfo isEqualTo []) exitWith {};
private _plate = _dbInfo select 1;

Private _ok = createDialog "TuevInfoMenu";
if (!_ok) then {hint "Dialog couldn't be opened!"};

_Btn1 = CONTROL(39949,39958);
_underBtn1 = CONTROL(39949,39959);

_Btn1 ctrlSetText "Eintragen";
_Btn1 buttonSetAction "closeDialog 0; [] call life_fnc_tuevCreateMenu;"; //TUEV AKTION
if (playerSide isEqualTo civilian) then {
	_Btn1 ctrlShow false;
	_underBtn1 ctrlShow false;
} else {
	_Btn1 ctrlShow true;
	_underBtn1 ctrlShow true;
};

if !(playerSide isEqualTo west) then {
	Private _stage = str (_vehicle getvariable ["gtqu6u2m_initboostMulti_Stage",0]);
	CONTROL(39949,39953) ctrlSetStructuredText parseText _stage; //engine
	_stage = str (_vehicle getvariable ["gtqu6u2m_initmaxSpeedMulti_Stage",0]);
	CONTROL(39949,39954) ctrlSetStructuredText parseText _stage; //gerbox
	_stage = str (_vehicle getvariable ["gtqu6u2m_initbrakes_Stage",0]);
	CONTROL(39949,39955) ctrlSetStructuredText parseText _stage; //brake
	_stage = str (_vehicle getvariable ["gtqu6u2m_initsprings_Stage",0]);
	CONTROL(39949,39956) ctrlSetStructuredText parseText _stage; //spring
};

CONTROL(39949,39950) ctrlSetStructuredText parseText format ["%1", _info ]; //Info
CONTROL(39949,39951) ctrlSetStructuredText parseText format ["%1", _checker ]; //Checker
CONTROL(39949,39952) ctrlSetStructuredText parseText format ["%1", _plate ]; //Plate
