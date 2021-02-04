#include "..\..\script_macros.hpp"
/*
    File: fn_foundsomething.sqf
    Function: life_fnc_foundsomething
    Author: TaktischerSpeck for https://Project-Altis.de!

    Description:
    TODO
*/

Private ["_randomNumber","_ItemArray","_wonItem","_wonItemName","_wonItemAmount"];
_ItemArray = [];
_randomNumber = round(random 100);

if(_randomNumber < 74) then {
	_ItemArray = [
    	["airbag",1],
    	["waschmaschine",1],
    	["mikrowelle",1],
    	["benutzteskondom",1],
    	["benutzteheroinspritze",1],
    	["computerteile",1],
    	["pfandflasche",1],
		["kaputteshandy",1],
		["steuergereat",1],
		["pfandflasche",1]
    ];
};

if(_randomNumber >= 75) then {
	_ItemArray = [
		["part_T1",1]
    ];
};

if(_randomNumber >= 85) then {
	_ItemArray = [
		["part_T2",1]
    ];
};

if(_randomNumber >= 91) then {
	_ItemArray = [
		["part_T3",1]
	];
};

if(_randomNumber >= 97) then {
	_ItemArray = [
		["part_T4",1]
	];
};

if(_randomNumber > 99) then {
	_ItemArray = [
		["engine_T1",1],
		["transmission_T1",1],
		["brakes_T1",1],
		["suspension_T1",1],

		["engine_T2",1],
		["transmission_T2",1],
		["brakes_T2",1],
		["suspension_T2",1],

		["engine_T3",1],
		["transmission_T3",1],
		["brakes_T3",1],
		["suspension_T3",1]
	];
};

_wonItem = _ItemArray select floor(random(count _ItemArray));
[true,(_wonItem select 0),(_wonItem select 1)] call life_fnc_handleInv;
hint format[ "Du hast %1x %2 gefunden", (_wonItem select 1), (localize ITEM_NAME(_wonItem select 0)) ];

/* LOG einfügen
if (life_HC_isActive) then {
	[getPlayerUID player, "Schrottplatz fund", Format["%1", localize ITEM_NAME(_wonItem select 0)] ] remoteExec ["HC_TACS_fnc_TaktischesLog",HC_Life];
} else {
	[getPlayerUID player, "Schrottplatz fund", Format["%1", localize ITEM_NAME(_wonItem select 0)] ] remoteExec ["TACS_fnc_TaktischesLog",2];
};
*/
