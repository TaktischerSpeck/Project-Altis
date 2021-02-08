/*
    File: fn_tuevcreate.sqf
    Function: life_fnc_tuevcreate
    Author: TaktischerSpeck for https://Project-Altis.de

    Description:
    TODO
*/

Private _vehicle = vehicle cursorObject;
if (isNull _vehicle) exitWith {}; //FUCK

Private _dbInfo = _vehicle getVariable ["dbInfo",[]];
if (_dbInfo isEqualTo []) exitWith {};

Private _checker = name player;
Private _vid = _dbInfo select 2;
Private _dialog = findDisplay 31738;
Private _info = ctrlText (_dialog displayCtrl 31755);
Private _active = 1;
if (playerSide isEqualTo west) then {
	_active = 2;

	[ _checker,_vid,_info,_active,_vehicle ] remoteExecCall ["TON_fnc_inserttuev",2];
    /*
	if (life_HC_isActive) then {
		[getPlayerUID player, "Tuning Entfernt", Format["%1", _info], Format["%1", _active] ] remoteExec ["HC_TACS_fnc_TaktischesLog",HC_Life];
	} else {
		[getPlayerUID player, "Tuning Entfernt", Format["%1", _info], Format["%1", _active] ] remoteExec ["TACS_fnc_TaktischesLog",2];
	};
    */
} else {
	[ _checker,_vid,_info,_active,_vehicle ] remoteExecCall ["TON_fnc_inserttuev",2];
    /*
	if (life_HC_isActive) then {
		[getPlayerUID player, "Tuning eingetragen", Format["%1", _info], Format["%1", _active] ] remoteExec ["HC_TACS_fnc_TaktischesLog",HC_Life];
	} else {
		[getPlayerUID player, "Tuning eingetragen", Format["%1", _info], Format["%1", _active] ] remoteExec ["TACS_fnc_TaktischesLog",2];
	};
    */
};

hint "Tüv Eintrag aktualisiert";
