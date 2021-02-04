//TBA Vincent

params [
	["_checker","0",[""]],
	["_vid",-1,[0]],
	["_info","1",[""]],
	["_active",3,[0]],
	["_vehicle",objNull,[objNull]]
];

if (isNull _vehicle) exitWith {}; //FUCK
if (_vid isEqualTo -1) exitWith {};
if (_info isEqualTo "") exitWith {};
if (_checker isEqualTo "0") exitWith {};
if (_active isEqualTo 3) exitWith {};
if (_active isEqualTo 2) then {
	_info = "Zulassung entfernt"; 
	private _query_tuning = format ["SELECT engine, transmission, brakes, springs FROM vehicles WHERE id='%1'",_vid];
    private _tuning_data = [_query_tuning,2] call DB_fnc_asyncCall;
	Private _engine = (_tuning_data select 0);
	Private _transmission = (_tuning_data select 1);
	Private _brakes = (_tuning_data select 2);
	Private _springs = (_tuning_data select 3);

	_engine = ((_engine - 1) max 0);
	_transmission = ((_transmission - 1) max 0);
	_brakes = ((_brakes - 1) max 0);
	_springs = ((_springs - 1) max 0);

	_query2 = format ["UPDATE vehicles SET engine = %1, transmission = %2, brakes = %3, springs = %4 WHERE id='%5'", 
					_engine, _transmission, _brakes, _springs, _vid];
	[_query2,1] call DB_fnc_asyncCall;

	[ _vehicle, _engine, _transmission, _brakes, _springs ] 
    remoteExecCall ["life_fnc_initTuning",remoteExecutedOwner];
};

_info = [_info] call DB_fnc_mresString; 
_checker = [_checker] call DB_fnc_mresString;

Private _query = format ["UPDATE vehicles SET tuevinfo = '%1', tuevchecker = '%2', tuevactive = '%3', tuevdate = CURRENT_TIMESTAMP where id = '%4'", str _info, str _checker, _active, _vid];
[_query,1] call DB_fnc_asyncCall;