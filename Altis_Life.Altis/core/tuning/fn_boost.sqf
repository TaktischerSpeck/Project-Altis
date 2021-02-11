/*
    Functionality and Calculations by Grumpy Old Man https://forums.bohemia.net/forums/topic/190199-release-gom-vehicle-tuning-v101/
    Author (except for the calculation and way how the vehicle is influenced by the tuning):  TaktischerSpeck aka Vincent Buß
    !USE ONLY FOR https://Project-Altis.de!
*/
Private _ID = addMissionEventHandler ["Draw3D",{

	_vehicle = vehicle player;
	if (!alive _vehicle) exitWith { removeMissionEventHandler ["Draw3D",_thisEventHandler]; };
	if (isNull driver _vehicle) exitWith { removeMissionEventHandler ["Draw3D",_thisEventHandler]; };
	if (isNull objectParent player) exitWith { removeMissionEventHandler ["Draw3D",_thisEventHandler]; };
	if (!isEngineOn _vehicle) exitWith {false};
	if (player isEqualTo _vehicle) exitWith {false};
	if (!isTouchingGround _vehicle) exitWith {false};
	if (!isOnRoad _vehicle) exitWith {false};

	_pa_initboostMulti = _vehicle getvariable ["pa_initboostMulti",0];
	_initmaxSpeed = getNumber (configfile >> "CfgVehicles" >> typeOf _vehicle >> "maxSpeed");

	if ((speed _vehicle)  >= (_initmaxSpeed - 5)) then {
		_pa_initboostMulti = _pa_initboostMulti + 1;
	};

	_pa_initmaxSpeedMulti = _vehicle getvariable ["pa_initmaxSpeedMulti",0];
	_initmaxSpeed = _initmaxSpeed  * _pa_initmaxSpeedMulti;
	_pa_initbrakes = _vehicle getvariable ["pa_initbrakes",0];
	_pa_initMass = _vehicle getvariable ["pa_initMass", 0];
	_forward = (["CarForward","CarFastForward","CarSlowForward"] findIf {inputAction _x > 0} >= 0);

	_force = (_pa_initMass * (_pa_initboostMulti / 9)) max 0;
	_baseForce = _force;

	if (inputAction "CarSlowForward" > 0) then {
		_force = _baseForce * 0.25;
	};

	if (inputAction "CarForward" > 0) then {
		_force = _baseForce * 0.5;
	};

	if (inputAction "CarFastForward" > 0) then {
		_force = _baseForce;
	};


	_surf = (surfaceType getPosATLVisual _vehicle);
	_surfaceType = _surf select [1,count _surf];
	_surfaceCoef = getNumber (configfile >> "CfgSurfaces" >> _surfaceType >> "maxSpeedCoef");

	_force = _force * _surfaceCoef;


	_idleRPM = getNumber (configfile >> "CfgVehicles" >> typeof _vehicle >> "idleRpm");
	_redRPM = getNumber (configfile >> "CfgVehicles" >> typeof _vehicle >> "redRpm");
	_currentRPM = _vehicle getSoundController "rpm";

	_force = linearConversion [_idleRPM,_redRPM,_currentRPM,_force / 3,_force,true];
	_rpmForce = _force;

	_force = linearConversion [100,_initmaxSpeed,speed _vehicle,_force,_force * 0.65,true];
	_airForce = _force;

	if (_forward AND round speed _vehicle > 0 AND round speed _vehicle <= _initmaxSpeed) then {
		_vehicle addForce [_vehicle vectorModelToWorldVisual [0,_force,0],[0,0,-1]];
	};

	if (inputAction "CarBack" > 0 AND speed _vehicle >= 1) then {
		_brakeForce = -75 * _pa_initbrakes;
		_vehicle addForce [_vehicle vectorModelToWorldVisual [0,_brakeForce,0],[0,0,-1]];
	};
}];
player setvariable ["EVH_ID_Draw3D",_ID,true];
