/*
    File: fn_initTuning.sqf
    Function: life_fnc_initTuning
    Author: TaktischerSpeck for https://Project-Altis.de

    Description:
    TODO
*/

params [
	["_vehicle",objNull,[objNull]],
    ["_engine","0",[0]],
	["_transmission","0",[0]],
	["_brakes","0",[0]],
	["_springs","0",[0]]
];
if (isNull _vehicle) exitWith {}; //FUCK

////TUNING\\\\
_vehicle setvariable ["pa_tuned", 1, true];

////ENGINE\\\\
if (((typeOf _vehicle) isKindOf "Truck_F")) then {
	_vehicle setvariable ["pa_initboostMulti", 0.2 * _engine ,true];
} else {
	_vehicle setvariable ["pa_initboostMulti", 0.4 * _engine ,true];
};

_vehicle setvariable ["pa_initboostMulti_Stage",_engine,true];

////TRANSMISSION\\\\
if (((typeOf _vehicle) isKindOf "Truck_F")) then {
	_vehicle setvariable ["pa_initmaxSpeedMulti", 1 + 0.135 * _transmission ,true];
} else {
	_vehicle setvariable ["pa_initmaxSpeedMulti", 1 + 0.175 * _transmission ,true];
};
_vehicle setvariable ["pa_initmaxSpeedMulti_Stage",_transmission,true];

////BRAKES\\\\
_vehicle setvariable ["pa_initbrakes", 1 + 0.25 * _brakes ,true];
_vehicle setvariable ["pa_initbrakes_Stage",_brakes,true];

//// SPRINGS \\\\
Private _com = getCenterOfMass _vehicle;
private _comNew = (_com select 2);
_comNew = _comNew - (_springs * 0.1);
_com set [2,_comNew];

if (life_HC_isActive) then {
	[_vehicle, _com] remoteExec ["hc_fnc_setCenterOfMass",HC_Life];
} else {
	[_vehicle, _com] remoteExec ["ton_fnc_setCenterOfMass",2];
};

_vehicle setvariable ["pa_initsprings_Stage",_springs,true];

//// MASS \\\\
if (_vehicle getvariable ["pa_initMass", "init"] isEqualTo "init") then {
	_vehicle setvariable ["pa_initMass", getmass _vehicle,true];
};
