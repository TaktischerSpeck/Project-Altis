/*
    File: fn_TuningUpgrade.sqf
    Function: TON_fnc_TuningUpgrade
    Author: TaktischerSpeck for https://Project-Altis.de

    Description:
    TODO
*/

params[
	["_vehicleID", ""],
	["_part", ""],
	["_stage", ""]
];
private _partString = 0;

switch (_part) do {
	case 1: { _partString = "engine" };
	case 2: { _partString = "transmission" };
	case 3: { _partString = "brakes" };
	case 4: { _partString = "springs" };
};

if (_partString isEqualTo 0) exitwith {};

_query = format ["UPDATE vehicles
				SET tuned = 1,
				%1 = '%2' WHERE id = '%3'", _partString, _stage, _vehicleID];
[_query,1] call DB_fnc_asyncCall;
