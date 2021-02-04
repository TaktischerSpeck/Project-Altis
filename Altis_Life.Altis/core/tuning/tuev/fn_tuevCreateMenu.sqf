/*
    File: fn_tuevCreateMenu.sqf
    Function: life_fnc_tuevCreateMenu
    Author: TaktischerSpeck for https://Project-Altis.de

    Description:
    TODO
*/

//PARAM OBJEKT DES AUTOS
Private _vehicle = vehicle cursorObject;
Private "_Btn1";
if (isNull _vehicle) exitWith {}; //Bad type
Private _dbInfo = _vehicle getVariable ["dbInfo",[]];
if (_dbInfo isEqualTo []) exitWith {};
private _plate = _dbInfo select 1;

Private _ok = createDialog "TuevCreate";
if (!_ok) then {hint "Dialog couldn't be opened!"};

Private _dialog = findDisplay 31738;
_Btn1 = (_dialog displayCtrl 31756);

if (playerSide isEqualTo west) then {
	_Btn1 ctrlSetText "Austragen";
    _Btn1 buttonSetAction "closeDialog 0; [] call life_fnc_tuevcreate;";
} else {
	_Btn1 ctrlSetText "Eintragen";
    _Btn1 buttonSetAction "closeDialog 0; [] call life_fnc_tuevcreate";
};

(_dialog displayCtrl 31754) ctrlSetStructuredText parseText format ["%1", _plate ]; //Plate
