#include "..\..\script_macros.hpp"
/*
    File: fn_gloves.sqf
    Function: life_fnc_gloves
    Author: TaktischerSpeck for https://Project-Altis.de

    Description:
    TODO
*/
if ((player getVariable ["GloveUse",false]) isEqualTo true) exitWith { hint "Du sammelst bereits!"; };
player setVariable ["GloveUse", true, false];
life_action_inUse = true;
Private _exit = false;
Private _playerIsInside = player inArea "schrottplatz";
private _hint = "";

if (playerSide in [west]) then { _exit = true; _hint =  "Du bist im Dienst!"; };
if (!_playerIsInside) then { _exit = true; _hint =  "Du musst auf einem Schrottplatz sein!"; };
if !(isNull objectParent player) then { _exit = true; };
if (player getVariable "restrained") then { _exit = true; _hint =  localize "STR_NOTF_isrestrained"; };
if (player getVariable "playerSurrender") then { _exit = true; _hint =  localize "STR_NOTF_surrender"; };
if (life_isknocked) then { _exit = true; _hint =  "Aktion abgebrochen!"; };

for "_i" from 0 to 60 do {
    if (_exit) exitWith { _hint = "Aktion abgebrochen!"; };
    player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	_playerIsInside = player inArea "schrottplatz";
	if (!_playerIsInside) exitwith {};
    if (player getVariable "restrained") exitWith { _exit = true; _hint = "Aktion abgebrochen!"; };
    if (player getVariable "playerSurrender") exitWith { _exit = true; _hint = "Aktion abgebrochen!"; };
    if (life_isknocked) exitWith { _exit = true; _hint = "Aktion abgebrochen!"; };
    sleep 0.5;
};

_playerIsInside = player inArea "schrottplatz";
if (!_playerIsInside) exitwith { life_action_inUse = false; hint "Du musst auf einem Schrottplatz sein!"; player setVariable ["GloveUse",false,false]; };

if (_exit) exitWith { life_action_inUse = false; hint _hint; player setVariable ["GloveUse",false,false]; };

hint localize "STR_NOTF_tuning_found";

player setVariable ["GloveUse",false,false];
life_action_inUse = false;

[] call life_fnc_foundsomething;
[] call life_fnc_foundsomething;
[] call life_fnc_foundsomething;
[] call life_fnc_foundsomething;
