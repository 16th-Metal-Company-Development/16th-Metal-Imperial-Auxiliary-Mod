_Spawner = _this select 0;

if ((!isServer) and hasInterface) exitwith {};

_Side = _Spawner getVariable ["Side",1];
_Team = resistance;
if ((_Side == 2) OR (_Side == 0.7)) then {_Team = east;};
if ((_Side == 3) OR (_Side == 0.5)) then {_Team = west;};

_Type = _Spawner getVariable ["Type",1];
_Type2 = _Spawner getVariable ["Type2",0];
_Type3 = _Spawner getVariable ["Type3",0];
_Type4 = _Spawner getVariable ["Type4",[]];
if (_type4 isEqualTo "") then {_type4 = [];};
call compile format ["_type4 = %1",_type4];
_array = [];

_a1 = ["RyanZombieArmyTrooper", "RyanZombieArmyVeteran", "RyanZombieArmySgt", "RyanZombieArmyMedic", "RyanZombieArmyTanker", "RyanZombieArmyGuard", "RyanZombieArmyCap", "RyanZombieArmyFieldOfficer"];
_a2 = ["RyanZombieArmyMud", "RyanZombieArmyMudVet", "RyanZombieArmyMudSgt", "RyanZombieArmyMudMed", "RyanZombieArmyMudFieldOfficer", "RyanZombieArmyMudNC", "RyanZombieArmyMudNCVet", "RyanZombieArmyMudNCRTO", "RyanZombieArmyMudNCSgt", "RyanZombieArmyMudNCMedic", "RyanZombieArmyMudNCFieldOfficer"];
_a3 = ["RyanZombieArmyRiotTrooper", "RyanZombieArmyRiotRTO", "RyanZombieArmyRiotSGT", "RyanZombieArmyRiotMedic", "RyanZombieArmyRiotGuard", "RyanZombieArmyRiotCaptain", "RyanZombieArmyRiotFieldofficer"];
_a4 = ["RyanZombieArmyTroopermedium", "RyanZombieArmyVeteranmedium", "RyanZombieArmySgtmedium", "RyanZombieArmyMedicmedium", "RyanZombieArmyTankermedium", "RyanZombieArmyGuardmedium", "RyanZombieArmyCapmedium", "RyanZombieArmyFieldOfficermedium"];
_a5 = ["RyanZombieArmyMudmedium", "RyanZombieArmyMudVetmedium", "RyanZombieArmyMudSgtmedium", "RyanZombieArmyMudFieldOfficermedium", "RyanZombieArmyMudNCmedium", "RyanZombieArmyMudNCVetmedium", "RyanZombieArmyMudNCRTOmedium", "RyanZombieArmyMudNCSgtmedium", "RyanZombieArmyMudNCMedicmedium", "RyanZombieArmyMudNCFieldOfficermedium"];
_a6 = ["RyanZombieArmyRiotTroopermedium", "RyanZombieArmyRiotRTOmedium", "RyanZombieArmyRiotSGTmedium", "RyanZombieArmyRiotMedicmedium", "RyanZombieArmyRiotGuardmedium", "RyanZombieArmyRiotCaptainmedium", "RyanZombieArmyRiotFieldofficermedium"];
_a7 = ["RyanZombieArmyTrooperslow", "RyanZombieArmyVeteranslow", "RyanZombieArmySgtslow", "RyanZombieArmyMedicslow", "RyanZombieArmyTankerslow", "RyanZombieArmyGuardslow", "RyanZombieArmyCapslow", "RyanZombieArmyFieldOfficerslow"];
_a8 = ["RyanZombieArmyMudslow", "RyanZombieArmyMudVetslow", "RyanZombieArmyMudSgtslow", "RyanZombieArmyMudFieldOfficerslow", "RyanZombieArmyMudNCslow", "RyanZombieArmyMudNCVetslow", "RyanZombieArmyMudNCRTOslow", "RyanZombieArmyMudNCSgtslow", "RyanZombieArmyMudNCMedicslow", "RyanZombieArmyMudNCFieldOfficerslow"];
_a9 = ["RyanZombieArmyRiotTrooperslow", "RyanZombieArmyRiotRTOslow", "RyanZombieArmyRiotSGTslow", "RyanZombieArmyRiotMedicslow", "RyanZombieArmyRiotGuardslow", "RyanZombieArmyRiotCaptainslow", "RyanZombieArmyRiotFieldofficerslow"];
_a10 = ["RyanZombieArmyTrooperwalker", "RyanZombieArmyVeteranwalker", "RyanZombieArmySgtwalker", "RyanZombieArmyMedicwalker", "RyanZombieArmyTankerwalker", "RyanZombieArmyGuardwalker", "RyanZombieArmyCapwalker", "RyanZombieArmyFieldOfficerwalker"];
_a11 = ["RyanZombieArmyMudwalker", "RyanZombieArmyMudVetwalker", "RyanZombieArmyMudSgtwalker", "RyanZombieArmyMudFieldOfficerwalker", "RyanZombieArmyMudNCwalker", "RyanZombieArmyMudNCVetwalker", "RyanZombieArmyMudNCRTOwalker", "RyanZombieArmyMudNCSgtwalker", "RyanZombieArmyMudNCMedicwalker", "RyanZombieArmyMudNCFieldOfficerwalker"];
_a12 = ["RyanZombieArmyRiotTrooperwalker", "RyanZombieArmyRiotRTOwalker", "RyanZombieArmyRiotSGTwalker", "RyanZombieArmyRiotMedicwalker", "RyanZombieArmyRiotGuardwalker", "RyanZombieArmyRiotCaptainwalker", "RyanZombieArmyRiotFieldofficerwalker"];
_a13 = ["RyanZombieArmyTrooper", "RyanZombieArmyVeteran", "RyanZombieArmySgt", "RyanZombieArmyMedic", "RyanZombieArmyTanker", "RyanZombieArmyGuard", "RyanZombieArmyCap", "RyanZombieArmyFieldOfficer","RyanZombieArmyTroopermedium", "RyanZombieArmyVeteranmedium", "RyanZombieArmySgtmedium", "RyanZombieArmyMedicmedium", "RyanZombieArmyTankermedium", "RyanZombieArmyGuardmedium", "RyanZombieArmyCapmedium", "RyanZombieArmyFieldOfficermedium","RyanZombieArmyTrooperslow", "RyanZombieArmyVeteranslow", "RyanZombieArmySgtslow", "RyanZombieArmyMedicslow", "RyanZombieArmyTankerslow", "RyanZombieArmyGuardslow", "RyanZombieArmyCapslow", "RyanZombieArmyFieldOfficerslow","RyanZombieArmyTrooperwalker", "RyanZombieArmyVeteranwalker", "RyanZombieArmySgtwalker", "RyanZombieArmyMedicwalker", "RyanZombieArmyTankerwalker", "RyanZombieArmyGuardwalker", "RyanZombieArmyCapwalker", "RyanZombieArmyFieldOfficerwalker","RyanZombieArmyTrooperspider","RyanZombieArmyVeteranspider","RyanZombieArmySgtspider","RyanZombieArmyMedicspider","RyanZombieArmyTankerspider","RyanZombieArmyGuardspider","RyanZombieArmyCapspider","RyanZombieArmyFieldOfficerspider","RyanZombieArmyTroopercrawler","RyanZombieArmyVeterancrawler","RyanZombieArmySgtcrawler","RyanZombieArmyMediccrawler","RyanZombieArmyTankercrawler","RyanZombieArmyGuardcrawler","RyanZombieArmyCapcrawler","RyanZombieArmyFieldOfficercrawler"];
_a14 = ["RyanZombieArmyMud", "RyanZombieArmyMudVet", "RyanZombieArmyMudSgt", "RyanZombieArmyMudMed", "RyanZombieArmyMudFieldOfficer", "RyanZombieArmyMudNC", "RyanZombieArmyMudNCVet", "RyanZombieArmyMudNCRTO", "RyanZombieArmyMudNCSgt", "RyanZombieArmyMudNCMedic", "RyanZombieArmyMudNCFieldOfficer","RyanZombieArmyMudslow","RyanZombieArmyMudVetslow","RyanZombieArmyMudSgtslow","RyanZombieArmyMudMedslow","RyanZombieArmyMudFieldOfficerslow","RyanZombieArmyMudNCslow","RyanZombieArmyMudNCVetslow","RyanZombieArmyMudNCRTOslow","RyanZombieArmyMudNCSgtslow","RyanZombieArmyMudNCMedicslow","RyanZombieArmyMudNCFieldOfficerslow","RyanZombieArmyMudmedium","RyanZombieArmyMudVetmedium","RyanZombieArmyMudSgtmedium","RyanZombieArmyMudMedmedium","RyanZombieArmyMudFieldOfficermedium","RyanZombieArmyMudNCmedium","RyanZombieArmyMudNCVetmedium","RyanZombieArmyMudNCRTOmedium","RyanZombieArmyMudNCSgtmedium","RyanZombieArmyMudNCMedicmedium","RyanZombieArmyMudNCFieldOfficermedium","RyanZombieArmyMudWalker","RyanZombieArmyMudVetWalker","RyanZombieArmyMudSgtWalker","RyanZombieArmyMudMedWalker","RyanZombieArmyMudFieldOfficerWalker","RyanZombieArmyMudNCWalker","RyanZombieArmyMudNCVetWalker","RyanZombieArmyMudNCRTOWalker","RyanZombieArmyMudNCSgtWalker","RyanZombieArmyMudNCMedicWalker","RyanZombieArmyMudNCFieldOfficerWalker","RyanZombieArmyMudspider","RyanZombieArmyMudVetspider","RyanZombieArmyMudSgtspider","RyanZombieArmyMudMedspider","RyanZombieArmyMudFieldOfficerspider","RyanZombieArmyMudNCspider","RyanZombieArmyMudNCVetspider","RyanZombieArmyMudNCRTOspider","RyanZombieArmyMudNCSgtspider","RyanZombieArmyMudNCMedicspider","RyanZombieArmyMudNCFieldOfficerspider","RyanZombieArmyMudcrawler","RyanZombieArmyMudVetcrawler","RyanZombieArmyMudSgtcrawler","RyanZombieArmyMudMedcrawler","RyanZombieArmyMudFieldOfficercrawler","RyanZombieArmyMudNCcrawler","RyanZombieArmyMudNCVetcrawler","RyanZombieArmyMudNCRTOcrawler","RyanZombieArmyMudNCSgtcrawler","RyanZombieArmyMudNCMediccrawler","RyanZombieArmyMudNCFieldOfficercrawler"];
_a15 = ["RyanZombieArmyRiotTrooper","RyanZombieArmyRiotRTO","RyanZombieArmyRiotSGT","RyanZombieArmyRiotMedic","RyanZombieArmyRiotGuard","RyanZombieArmyRiotCaptain","RyanZombieArmyRiotFieldofficer","RyanZombieArmyRiotTrooperslow","RyanZombieArmyRiotRTOslow","RyanZombieArmyRiotSGTslow","RyanZombieArmyRiotMedicslow","RyanZombieArmyRiotGuardslow","RyanZombieArmyRiotCaptainslow","RyanZombieArmyRiotFieldofficerslow","RyanZombieArmyRiotTroopermedium","RyanZombieArmyRiotRTOmedium","RyanZombieArmyRiotSGTmedium","RyanZombieArmyRiotMedicmedium","RyanZombieArmyRiotGuardmedium","RyanZombieArmyRiotCaptainmedium","RyanZombieArmyRiotFieldofficermedium","RyanZombieArmyRiotTrooperWalker","RyanZombieArmyRiotRTOWalker","RyanZombieArmyRiotSGTWalker","RyanZombieArmyRiotMedicWalker","RyanZombieArmyRiotGuardWalker","RyanZombieArmyRiotCaptainWalker","RyanZombieArmyRiotFieldofficerWalker","RyanZombieArmyRiotTrooperspider","RyanZombieArmyRiotRTOspider","RyanZombieArmyRiotSGTspider","RyanZombieArmyRiotMedicspider","RyanZombieArmyRiotGuardspider","RyanZombieArmyRiotCaptainspider","RyanZombieArmyRiotFieldofficerspider","RyanZombieArmyRiotTroopercrawler","RyanZombieArmyRiotRTOcrawler","RyanZombieArmyRiotSGTcrawler","RyanZombieArmyRiotMediccrawler","RyanZombieArmyRiotGuardcrawler","RyanZombieArmyRiotCaptaincrawler","RyanZombieArmyRiotFieldofficercrawler"];
_a16 = ["RyanZombieArmyTrooper", "RyanZombieArmyVeteran", "RyanZombieArmySgt", "RyanZombieArmyMedic", "RyanZombieArmyTanker", "RyanZombieArmyGuard", "RyanZombieArmyCap", "RyanZombieArmyFieldOfficer","RyanZombieArmyTroopermedium", "RyanZombieArmyVeteranmedium", "RyanZombieArmySgtmedium", "RyanZombieArmyMedicmedium", "RyanZombieArmyTankermedium", "RyanZombieArmyGuardmedium", "RyanZombieArmyCapmedium", "RyanZombieArmyFieldOfficermedium","RyanZombieArmyTrooperslow", "RyanZombieArmyVeteranslow", "RyanZombieArmySgtslow", "RyanZombieArmyMedicslow", "RyanZombieArmyTankerslow", "RyanZombieArmyGuardslow", "RyanZombieArmyCapslow", "RyanZombieArmyFieldOfficerslow","RyanZombieArmyTrooperwalker", "RyanZombieArmyVeteranwalker", "RyanZombieArmySgtwalker", "RyanZombieArmyMedicwalker", "RyanZombieArmyTankerwalker", "RyanZombieArmyGuardwalker", "RyanZombieArmyCapwalker", "RyanZombieArmyFieldOfficerwalker"];
_a17 = ["RyanZombieArmyMud", "RyanZombieArmyMudVet", "RyanZombieArmyMudSgt", "RyanZombieArmyMudMed", "RyanZombieArmyMudFieldOfficer", "RyanZombieArmyMudNC", "RyanZombieArmyMudNCVet", "RyanZombieArmyMudNCRTO", "RyanZombieArmyMudNCSgt", "RyanZombieArmyMudNCMedic", "RyanZombieArmyMudNCFieldOfficer","RyanZombieArmyMudslow","RyanZombieArmyMudVetslow","RyanZombieArmyMudSgtslow","RyanZombieArmyMudMedslow","RyanZombieArmyMudFieldOfficerslow","RyanZombieArmyMudNCslow","RyanZombieArmyMudNCVetslow","RyanZombieArmyMudNCRTOslow","RyanZombieArmyMudNCSgtslow","RyanZombieArmyMudNCMedicslow","RyanZombieArmyMudNCFieldOfficerslow","RyanZombieArmyMudmedium","RyanZombieArmyMudVetmedium","RyanZombieArmyMudSgtmedium","RyanZombieArmyMudMedmedium","RyanZombieArmyMudFieldOfficermedium","RyanZombieArmyMudNCmedium","RyanZombieArmyMudNCVetmedium","RyanZombieArmyMudNCRTOmedium","RyanZombieArmyMudNCSgtmedium","RyanZombieArmyMudNCMedicmedium","RyanZombieArmyMudNCFieldOfficermedium","RyanZombieArmyMudWalker","RyanZombieArmyMudVetWalker","RyanZombieArmyMudSgtWalker","RyanZombieArmyMudMedWalker","RyanZombieArmyMudFieldOfficerWalker","RyanZombieArmyMudNCWalker","RyanZombieArmyMudNCVetWalker","RyanZombieArmyMudNCRTOWalker","RyanZombieArmyMudNCSgtWalker","RyanZombieArmyMudNCMedicWalker","RyanZombieArmyMudNCFieldOfficerWalker"];
_a18 = ["RyanZombieArmyRiotTrooper","RyanZombieArmyRiotRTO","RyanZombieArmyRiotSGT","RyanZombieArmyRiotMedic","RyanZombieArmyRiotGuard","RyanZombieArmyRiotCaptain","RyanZombieArmyRiotFieldofficer","RyanZombieArmyRiotTrooperslow","RyanZombieArmyRiotRTOslow","RyanZombieArmyRiotSGTslow","RyanZombieArmyRiotMedicslow","RyanZombieArmyRiotGuardslow","RyanZombieArmyRiotCaptainslow","RyanZombieArmyRiotFieldofficerslow","RyanZombieArmyRiotTroopermedium","RyanZombieArmyRiotRTOmedium","RyanZombieArmyRiotSGTmedium","RyanZombieArmyRiotMedicmedium","RyanZombieArmyRiotGuardmedium","RyanZombieArmyRiotCaptainmedium","RyanZombieArmyRiotFieldofficermedium","RyanZombieArmyRiotTrooperWalker","RyanZombieArmyRiotRTOWalker","RyanZombieArmyRiotSGTWalker","RyanZombieArmyRiotMedicWalker","RyanZombieArmyRiotGuardWalker","RyanZombieArmyRiotCaptainWalker","RyanZombieArmyRiotFieldofficerWalker"];

if ((_Type == 1) OR (_Type == 0.9)) then {_array = _a1;};
if ((_Type == 2) OR (_Type == 0.85)) then {_array = _a2;};
if ((_Type == 3) OR (_Type == 0.8)) then {_array = _a3;};
if ((_Type == 4) OR (_Type == 0.75)) then {_array = _a4;};
if ((_Type == 5) OR (_Type == 0.7)) then {_array = _a5;};
if ((_Type == 6) OR (_Type == 0.65)) then {_array = _a6;};
if ((_Type == 7) OR (_Type == 0.6)) then {_array = _a7;};
if ((_Type == 8) OR (_Type == 0.55)) then {_array = _a8;};
if ((_Type == 9) OR (_Type == 0.5)) then {_array = _a9;};
if (_Type == 10) then {_array = _a10;};
if (_Type == 11) then {_array = _a11;};
if (_Type == 12) then {_array = _a12;};
if ((_Type == 13) OR (_Type == 0.45)) then {_array = _a13;};
if ((_Type == 14) OR (_Type == 0.4)) then {_array = _a14;};
if ((_Type == 15) OR (_Type == 0.37)) then {_array = _a15;};
if ((_Type == 16) OR (_Type == 0.35)) then {_array = _a16;};
if ((_Type == 17) OR (_Type == 0.3)) then {_array = _a17;};
if ((_Type == 18) OR (_Type == 0.25)) then {_array = _a18;};

if ((_Type2 == 1) OR (_Type2 == 0.9)) then {_array = _array + _a1;};
if ((_Type2 == 2) OR (_Type2 == 0.85)) then {_array = _array + _a2;};
if ((_Type2 == 3) OR (_Type2 == 0.8)) then {_array = _array + _a3;};
if ((_Type2 == 4) OR (_Type2 == 0.75)) then {_array = _array + _a4;};
if ((_Type2 == 5) OR (_Type2 == 0.7)) then {_array = _array + _a5;};
if ((_Type2 == 6) OR (_Type2 == 0.65)) then {_array = _array + _a6;};
if ((_Type2 == 7) OR (_Type2 == 0.6)) then {_array = _array + _a7;};
if ((_Type2 == 8) OR (_Type2 == 0.55)) then {_array = _array + _a8;};
if ((_Type2 == 9) OR (_Type2 == 0.5)) then {_array = _array + _a9;};
if (_Type2 == 10) then {_array = _array + _a10;};
if (_Type2 == 11) then {_array = _array + _a11;};
if (_Type2 == 12) then {_array = _array + _a12;};
if ((_Type2 == 13) OR (_Type2 == 0.45)) then {_array = _array + _a13;};
if ((_Type2 == 14) OR (_Type2 == 0.4)) then {_array = _array + _a14;};
if ((_Type2 == 15) OR (_Type2 == 0.37)) then {_array = _array + _a15;};
if ((_Type2 == 16) OR (_Type2 == 0.35)) then {_array = _array + _a16;};
if ((_Type2 == 17) OR (_Type2 == 0.3)) then {_array = _array + _a17;};
if ((_Type2 == 18) OR (_Type == 0.25)) then {_array = _array + _a18;};

if ((_Type3 == 1) OR (_Type3 == 0.9)) then {_array = _array + _a1;};
if ((_Type3 == 2) OR (_Type3 == 0.85)) then {_array = _array + _a2;};
if ((_Type3 == 3) OR (_Type3 == 0.8)) then {_array = _array + _a3;};
if ((_Type3 == 4) OR (_Type3 == 0.75)) then {_array = _array + _a4;};
if ((_Type3 == 5) OR (_Type3 == 0.7)) then {_array = _array + _a5;};
if ((_Type3 == 6) OR (_Type3 == 0.65)) then {_array = _array + _a6;};
if ((_Type3 == 7) OR (_Type3 == 0.6)) then {_array = _array + _a7;};
if ((_Type3 == 8) OR (_Type3 == 0.55)) then {_array = _array + _a8;};
if ((_Type3 == 9) OR (_Type3 == 0.5)) then {_array = _array + _a9;};
if (_Type3 == 10) then {_array = _array + _a10;};
if (_Type3 == 11) then {_array = _array + _a11;};
if (_Type3 == 12) then {_array = _array + _a12;};
if ((_Type3 == 13) OR (_Type3 == 0.45)) then {_array = _array + _a13;};
if ((_Type3 == 14) OR (_Type3 == 0.4)) then {_array = _array + _a14;};
if ((_Type3 == 15) OR (_Type3 == 0.37)) then {_array = _array + _a15;};
if ((_Type3 == 16) OR (_Type3 == 0.35)) then {_array = _array + _a16;};
if ((_Type3 == 17) OR (_Type3 == 0.3)) then {_array = _array + _a17;};
if ((_Type3 == 18) OR (_Type == 0.25)) then {_array = _array + _a18;};

_array = _array + _Type4;

_Activation = _Spawner getVariable ["Activation",1];
if (_Activation == 1) then {_Activation = 0.9;};
if (_Activation == 2) then {_Activation = 0.7;};
if (_Activation == 3) then {_Activation = 0.5;};
if (_Activation == 4) then {_Activation = 0.3;};
if (_Activation == 5) then {_Activation = 0.1;};

_Activation2 = _Spawner getVariable ["Activation2",1];
if (_Activation2 == 1) then {_Activation2 = 0.9;};
if (_Activation2 == 2) then {_Activation2 = 0.7;};
if (_Activation2 == 3) then {_Activation2 = 0.5;};
if (_Activation2 == 4) then {_Activation2 = 0.3;};
if (_Activation2 == 5) then {_Activation2 = 0.1;};

_Activation3 = _Spawner getVariable ["Activation3",1];
if (_Activation3 == 1) then {_Activation3 = 0.9;};
if (_Activation3 == 2) then {_Activation3 = 0.7;};
if (_Activation3 == 3) then {_Activation3 = 0.5;};
if (_Activation3 == 4) then {_Activation3 = 0.3;};
if (_Activation3 == 5) then {_Activation3 = 0.1;};

_ActivationRadius = _Spawner getVariable ["ActivationRadius",100];

_MaxAliveAtOnce = _Spawner getVariable ["AliveAmount",50];
_TotalAmountToSpawn = _Spawner getVariable ["TotalAmount",100];
_TotalAmountToSpawn = _TotalAmountToSpawn - 1;
_TotalAmountSpawned = 0;
_Start = _Spawner getVariable ["Start",5];
_DelayBetweenHorde = _Spawner getVariable ["Frequency",60];
_DelayBetweenZombie = _Spawner getVariable ["Delay",0.5];
_Density = _Spawner getVariable ["Density",0];
_HordeSize = _Spawner getVariable ["HordeSize",14];
_Randomize = _Spawner getVariable ["Randomize",1];
if (_Randomize == 3) then {_TotalAmountToSpawn = 0.5+(random _TotalAmountToSpawn);};

sleep _Start;

while {true} do
{
	if (isNull _Spawner) exitWith {};
	if ((_Activation != 0.9) OR (_Activation2 != 0.9) OR (_Activation3 != 0.9)) then
	{
		while {true} do
		{
			_trg = createTrigger ["EmptyDetector", [0,0,0]];
			_trg2 = createTrigger ["EmptyDetector", [0,0,0]];
			_trg3 = createTrigger ["EmptyDetector", [0,0,0]];
			
			_trg setTriggerStatements ["this", "", ""];
			_trg2 setTriggerStatements ["this", "", ""];
			_trg3 setTriggerStatements ["this", "", ""];

			_trg setTriggerArea [_ActivationRadius, _ActivationRadius, 0, false];
			_trg2 setTriggerArea [_ActivationRadius, _ActivationRadius, 0, false];
			_trg3 setTriggerArea [_ActivationRadius, _ActivationRadius, 0, false];

			if (_Activation == 0.7) then {_trg setTriggerActivation ["WEST", "PRESENT", false]};
			if (_Activation2 == 0.7) then {_trg2 setTriggerActivation ["WEST", "PRESENT", false]};
			if (_Activation3 == 0.7) then {_trg3 setTriggerActivation ["WEST", "PRESENT", false]};

			if (_Activation == 0.5) then {_trg setTriggerActivation ["EAST", "PRESENT", false]};
			if (_Activation2 == 0.5) then {_trg2 setTriggerActivation ["EAST", "PRESENT", false]};
			if (_Activation3 == 0.5) then {_trg3 setTriggerActivation ["EAST", "PRESENT", false]};

			if (_Activation == 0.3) then {_trg setTriggerActivation ["GUER", "PRESENT", false]};
			if (_Activation2 == 0.3) then {_trg2 setTriggerActivation ["GUER", "PRESENT", false]};
			if (_Activation3 == 0.3) then {_trg3 setTriggerActivation ["GUER", "PRESENT", false]};

			if (_Activation == 0.1) then {_trg setTriggerActivation ["CIV", "PRESENT", false]};
			if (_Activation2 == 0.1) then {_trg2 setTriggerActivation ["CIV", "PRESENT", false]};
			if (_Activation3 == 0.1) then {_trg3 setTriggerActivation ["CIV", "PRESENT", false]};

			_trg setposATL getposATL _Spawner;
			_trg2 setposATL getposATL _Spawner;
			_trg3 setposATL getposATL _Spawner;

			sleep 2;
			if ((triggeractivated _trg) OR (triggeractivated _trg2) OR (triggeractivated _trg3)) exitwith {deletevehicle _trg; deletevehicle _trg2; deletevehicle _trg3};

			deletevehicle _trg;
			deletevehicle _trg2;
			deletevehicle _trg3;
			sleep 2;
		};
	};
	if (_TotalAmountSpawned > _TotalAmountToSpawn) exitwith {};

	if (RyanZombiesCurrentAmountSpawned < _MaxAliveAtOnce) then
	{
		if (isNull _Spawner) exitWith {};
		_grp = creategroup _Team;
		if (_Randomize == 2) then {_HordeSize = _Spawner getVariable ["HordeSize",14]; _Hordesize = 0.5+(random _Hordesize);};
		for "_x" from 1 to _HordeSize do
		{
			_randomUnit = selectRandom _array;
			if (_TotalAmountSpawned > _TotalAmountToSpawn) exitwith {};
			if !(isnull _grp) then
			{
				if (RyanZombiesCurrentAmountSpawned < _MaxAliveAtOnce) then
				{
					RyanZombiesCurrentAmountSpawned = RyanZombiesCurrentAmountSpawned + 1;
					_TotalAmountSpawned = _TotalAmountSpawned + 1;
					_randomUnit createunit [[(getposATL _Spawner select 0) + random _Density - random _Density, (getposATL _Spawner select 1) + random _Density - random _Density, (getPosATL _Spawner select 2)], _grp, "
					if (isnil 'ryanzombiesstartinganim') then 
					{
						this switchmove 'AmovPercMstpSnonWnonDnon_SaluteOut'
					}; 
					if (isServer) then 
					{
						if (alive this) then 
						{
							this addEventHandler ['Killed', 
							{
								if (isServer) then {RyanZombiesCurrentAmountSpawned = RyanZombiesCurrentAmountSpawned - 1;};
							}];
							this addEventHandler ['Deleted',
							{
								if (isServer) then {RyanZombiesCurrentAmountSpawned = RyanZombiesCurrentAmountSpawned - 1;};
							}];
						};
					};"];
				};
			};
			sleep _DelayBetweenZombie;
		};
	};
	sleep _DelayBetweenHorde;
};