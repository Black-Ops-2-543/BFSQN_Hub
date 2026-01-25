call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\jtacsettings.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\Attacks\Projectiles.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\Attacks\EvenSpread.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\Attacks\Mines.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\Attacks\Bombs.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\Attacks\Rockets.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\Attacks\GuidedMissile.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\Attacks\StrafingRun.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\jtacattackparser.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\jtacfirecontrol.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\jtacreload.sqf";
call compile preprocessFileLineNumbers "x\BFSQN_Hub\addons\BFSQN_jtac\EPD\VirtualJTAC\jtacmapcontrol.sqf";

call PARSE_AVAILABLE_JTAC_ATTACKS;

if(!isDedicated) then {
	//Client Variable to show and hide the addAction
	JtacAvailable = true;
	JtacIncomingAngle = "RANDOM";
	JtacTargetingMethod = "LASER";

	//Wait for JIP to load in...
	waitUntil {sleep .5; !(isNull player)};

	if (player getVariable ["JTAC", false]) then {
		DB_JTAC_Action_Index = player addaction [("<t color=""#27EE1F"">") + ("Request support") + "</t>", { showCommandingMenu "#USER:JtacMainMenu";}, "", -10, false, true,"","JtacAvailable and (player getVariable ['JTAC', false])"];
		//player addEventHandler ["Respawn", {JtacAvailable = true; player setVariable ["JTAC",true]; player addaction [("<t color=""#27EE1F"">") + ("Request support") + "</t>", { showCommandingMenu "#USER:JtacMainMenu";}, "", -10, false, true,"",'JtacAvailable'];}];
	};

	0 = [] spawn {
		private _actionNumber = -1;
		private _booleanActionAdd = false;
		private _addActionedUav = objNull;
		while {true} do {
			private _currentUav = getConnectedUAV player;

			if (!isNull _addActionedUav and _addActionedUav != _currentUav) then {
				_addActionedUav removeAction _actionNumber;
				_addActionedUav = objNull;
				_booleanActionAdd = false;
			};

			if (!_booleanActionAdd and !isNull _currentUav and (player getVariable ["JTAC", false])) then {
				_booleanActionAdd = true;
				_addActionedUav = getConnectedUAV player;
				_actionNumber = (getConnectedUAV player) addaction [("<t color=""#27EE1F"">") + ("Request support") + "</t>", { showCommandingMenu "#USER:JtacMainMenu";}, "", -10, false, true,"",'JtacAvailable && ((UAVControl getConnectedUAV player) select 1) == "GUNNER"'];
			};

			sleep 1;
		};
	};
};