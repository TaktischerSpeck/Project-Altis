/*
    File: fn_gettuev.sqf
    Function: TON_fnc_gettuev
    Author: TaktischerSpeck for https://mountainvalleyrpg.de

    Description:
    TODO
*/
params [
	["_vid",0,[0]]
];
if (_vid isEqualTo 0) exitWith {};
Private "_checker";
Private "_info";
Private "_active";
_checker = "error";
_info = "error";

Private _query = format ["SELECT tuevactive FROM vehicles WHERE id=%1",_vid];
Private _queryResult = [_query,2] call DB_fnc_asyncCall;
if (_queryResult isEqualTo [0]) then {
	_checker = "";
	_info = "Kein Eintrag";
} else {
	Private _query2 = format ["SELECT tuevinfo, tuevchecker FROM vehicles WHERE id='%1'",_vid];
	Private _queryResult2 = [_query2,2] call DB_fnc_asyncCall;
	_info = (_queryResult2 select 0);
	_checker = (_queryResult2 select 1);
};
[ _checker, _info ] remoteExecCall ["life_fnc_tuevinfo",remoteExecutedOwner];
