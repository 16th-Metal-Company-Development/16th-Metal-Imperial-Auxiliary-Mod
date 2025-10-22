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

_a1 = ["RyanZombieStormtrooper","RyanZombieStormtrooper_Veteran","RyanZombieStormtrooper_Sergeant","RyanZombieStormtrooper_Officer","RyanZombieStormtrooper_Medic","RyanZombieStormtrooper_Scout","RyanZombieStormtrooper_Mortar","RyanZombieStormtrooper_Incen"];
_a2 = ["RyanZombieStormMimb","RyanZombieStormMimbVet","RyanZombieStormMimbSgt","RyanZombieStormMimbOfficer","RyanZombieStormMimbScout"];
_a3 = ["RyanZombieSandTrooper","RyanZombieSandTrooperVet","RyanZombieSandTrooperSgt","RyanZombieSandTrooperOfficer","RyanZombieSandTrooperScout"];
_a4 = ["RyanZombieSnowTrooper"];
_a5 = ["RyanZombieMagmaTrooper","RyanZombieMagmaTrooperVet","RyanZombieMagmaTrooperSgt"];
_a6 = ["RyanZombieLavaTrooper","RyanZombieLavaTrooperVet","RyanZombieLavaTrooperSgt"];
_a7 = ["RyanZombieStormtroopermedium","RyanZombieStormtrooper_Veteranmedium","RyanZombieStormtrooper_Sergeantmedium","RyanZombieStormtrooper_Officermedium","RyanZombieStormtrooper_Medicmedium","RyanZombieStormtrooper_Scoutmedium","RyanZombieStormtrooper_Mortarmedium","RyanZombieStormtrooper_Incenmedium"];
_a8 = ["RyanZombieStormMimbmedium","RyanZombieStormMimbVetmedium","RyanZombieStormMimbSgtmedium","RyanZombieStormMimbOfficermedium","RyanZombieStormMimbScoutmedium"];
_a9 = ["RyanZombieSandTroopermedium","RyanZombieSandTrooperVetmedium","RyanZombieSandTrooperSgtmedium","RyanZombieSandTrooperOfficermedium","RyanZombieSandTrooperScoutmedium"];
_a10 = ["RyanZombieSnowTroopermedium"];
_a11 = ["RyanZombieMagmaTroopermedium","RyanZombieMagmaTrooperVetmedium","RyanZombieMagmaTrooperSgtmedium"];
_a12 = ["RyanZombieLavaTrooperslow","RyanZombieLavaTrooperVetslow","RyanZombieLavaTrooperSgtslow"];
_a13 = ["RyanZombieStormtrooperslow","RyanZombieStormtrooper_Veteranslow","RyanZombieStormtrooper_Sergeantslow","RyanZombieStormtrooper_Officerslow","RyanZombieStormtrooper_Medicslow","RyanZombieStormtrooper_Scoutslow","RyanZombieStormtrooper_Mortarslow","RyanZombieStormtrooper_Incenslow"];
_a14 = ["RyanZombieStormMimbslow","RyanZombieStormMimbVetslow","RyanZombieStormMimbSgtslow","RyanZombieStormMimbOfficerslow","RyanZombieStormMimbScoutslow"];
_a15 = ["RyanZombieSandTrooperslow","RyanZombieSandTrooperVetslow","RyanZombieSandTrooperSgtslow","RyanZombieSandTrooperOfficerslow","RyanZombieSandTrooperScoutslow"];
_a16 = ["RyanZombieSnowTrooperslow"];
_a17 = ["RyanZombieMagmaTrooperslow","RyanZombieMagmaTrooperVetslow","RyanZombieMagmaTrooperSgtslow"];
_a18 = ["RyanZombieLavaTrooperslow","RyanZombieLavaTrooperVetslow","RyanZombieLavaTrooperSgtslow"];
_a19 = ["RyanZombieStormtrooperwalker","RyanZombieStormtrooper_Veteranwalker","RyanZombieStormtrooper_Sergeantwalker","RyanZombieStormtrooper_Officerwalker","RyanZombieStormtrooper_Medicwalker","RyanZombieStormtrooper_Scoutwalker","RyanZombieStormtrooper_Mortarwalker","RyanZombieStormtrooper_Incenwalker"];
_a20 = ["RyanZombieStormMimbwalker","RyanZombieStormMimbVetwalker","RyanZombieStormMimbSgtwalker","RyanZombieStormMimbOfficerwalker","RyanZombieStormMimbScoutwalker"];
_a21 = ["RyanZombieSandTrooperwalker","RyanZombieSandTrooperVetwalker","RyanZombieSandTrooperSgtwalker","RyanZombieSandTrooperOfficerwalker","RyanZombieSandTrooperScoutwalker"];
_a22 = ["RyanZombieSnowTrooperwalker"];
_a23 = ["RyanZombieMagmaTrooperwalker","RyanZombieMagmaTrooperVetwalker","RyanZombieMagmaTrooperSgtwalker"];
_a24 = ["RyanZombieLavaTrooperwalker","RyanZombieLavaTrooperVetwalker","RyanZombieLavaTrooperSgtwalker"];
_a25 = ["RyanZombieStormtrooper","RyanZombieStormtrooper_Veteran","RyanZombieStormtrooper_Sergeant","RyanZombieStormtrooper_Officer","RyanZombieStormtrooper_Medic","RyanZombieStormtrooper_Scout","RyanZombieStormtrooper_Mortar","RyanZombieStormtrooper_Incen","RyanZombieStormtroopermedium","RyanZombieStormtrooper_Veteranmedium","RyanZombieStormtrooper_Sergeantmedium","RyanZombieStormtrooper_Officermedium","RyanZombieStormtrooper_Medicmedium","RyanZombieStormtrooper_Scoutmedium","RyanZombieStormtrooper_Mortarmedium","RyanZombieStormtrooper_Incenmedium","RyanZombieStormtrooperslow","RyanZombieStormtrooper_Veteranslow","RyanZombieStormtrooper_Sergeantslow","RyanZombieStormtrooper_Officerslow","RyanZombieStormtrooper_Medicslow","RyanZombieStormtrooper_Scoutslow","RyanZombieStormtrooper_Mortarslow","RyanZombieStormtrooper_Incenslow","RyanZombieStormtrooperwalker","RyanZombieStormtrooper_Veteranwalker","RyanZombieStormtrooper_Sergeantwalker","RyanZombieStormtrooper_Officerwalker","RyanZombieStormtrooper_Medicwalker","RyanZombieStormtrooper_Scoutspider","RyanZombieStormtrooper_Mortarspider","RyanZombieStormtrooper_Incenspider","RyanZombieStormtrooperspider","RyanZombieStormtrooper_Veteranspider","RyanZombieStormtrooper_Sergeantspider","RyanZombieStormtrooper_Officerspider","RyanZombieStormtrooper_Medicspider","RyanZombieStormtrooper_Scoutspider","RyanZombieStormtrooper_Mortarspider","RyanZombieStormtrooper_Incenspider","RyanZombieStormtroopercrawler","RyanZombieStormtrooper_Veterancrawler","RyanZombieStormtrooper_Sergeantcrawler","RyanZombieStormtrooper_Officercrawler","RyanZombieStormtrooper_Mediccrawler","RyanZombieStormtrooper_Scoutcrawler","RyanZombieStormtrooper_Mortarcrawler","RyanZombieStormtrooper_Incencrawler"];
_a26 = ["RyanZombieStormMimb","RyanZombieStormMimbVet","RyanZombieStormMimbSgt","RyanZombieStormMimbOfficer","RyanZombieStormMimbScout","RyanZombieStormMimbmedium","RyanZombieStormMimbVetmedium","RyanZombieStormMimbSgtmedium","RyanZombieStormMimbOfficermedium","RyanZombieStormMimbScoutmedium","RyanZombieStormMimbslow","RyanZombieStormMimbVetslow","RyanZombieStormMimbSgtslow","RyanZombieStormMimbOfficerslow","RyanZombieStormMimbScoutslow","RyanZombieStormMimbwalker","RyanZombieStormMimbVetwalker","RyanZombieStormMimbSgtwalker","RyanZombieStormMimbOfficerwalker","RyanZombieStormMimbScoutwalker","RyanZombieStormMimbspider","RyanZombieStormMimbVetspider","RyanZombieStormMimbSgtspider","RyanZombieStormMimbOfficerspider","RyanZombieStormMimbScoutspider","RyanZombieStormMimbcrawler","RyanZombieStormMimbVetcrawler","RyanZombieStormMimbSgtcrawler","RyanZombieStormMimbOfficercrawler","RyanZombieStormMimbScoutcrawler"];
_a27 = ["RyanZombieSandTrooper","RyanZombieSandTrooperVet","RyanZombieSandTrooperSgt","RyanZombieSandTrooperOfficer","RyanZombieSandTrooperScout","RyanZombieSandTrooperslow","RyanZombieSandTrooperVetslow","RyanZombieSandTrooperSgtslow","RyanZombieSandTrooperOfficerslow","RyanZombieSandTrooperScoutslow","RyanZombieSandTroopermedium","RyanZombieSandTrooperVetmedium","RyanZombieSandTrooperSgtmedium","RyanZombieSandTrooperOfficermedium","RyanZombieSandTrooperScoutmedium","RyanZombieSandTrooperWalker","RyanZombieSandTrooperVetWalker","RyanZombieSandTrooperSgtWalker","RyanZombieSandTrooperOfficerWalker","RyanZombieSandTrooperScoutWalker","RyanZombieSandTrooperspider","RyanZombieSandTrooperVetspider","RyanZombieSandTrooperSgtspider","RyanZombieSandTrooperOfficerspider","RyanZombieSandTrooperScoutspider","RyanZombieSandTroopercrawler","RyanZombieSandTrooperVetcrawler","RyanZombieSandTrooperSgtcrawler","RyanZombieSandTrooperOfficercrawler","RyanZombieSandTrooperScoutcrawler"];
_a28 = ["RyanZombieSnowTrooper", "RyanZombieSnowTroopermedium", "RyanZombieSnowTrooperslow", "RyanZombieSnowTrooperwalker", "RyanZombieSnowTrooperspider", "RyanZombieSnowTroopercrawler"];
_a29 = ["RyanZombieMagmaTrooper","RyanZombieMagmaTrooperVet","RyanZombieMagmaTrooperSgt","RyanZombieMagmaTroopermedium","RyanZombieMagmaTrooperVetmedium","RyanZombieMagmaTrooperSgtmedium","RyanZombieMagmaTrooperslow","RyanZombieMagmaTrooperVetslow","RyanZombieMagmaTrooperSgtslow","RyanZombieMagmaTrooperwalker","RyanZombieMagmaTrooperVetwalker","RyanZombieMagmaTrooperSgtwalker","RyanZombieMagmaTrooperspider","RyanZombieMagmaTrooperVetspider","RyanZombieMagmaTrooperSgtspider","RyanZombieMagmaTroopercrawler","RyanZombieMagmaTrooperVetcrawler","RyanZombieMagmaTrooperSgtcrawler"];
_a30 = ["RyanZombieLavaTrooper","RyanZombieLavaTrooperVet","RyanZombieLavaTrooperSgt","RyanZombieLavaTroopermedium","RyanZombieLavaTrooperVetmedium","RyanZombieLavaTrooperSgtmedium","RyanZombieLavaTrooperslow","RyanZombieLavaTrooperVetslow","RyanZombieLavaTrooperSgtslow","RyanZombieLavaTrooperwalker","RyanZombieLavaTrooperVetwalker","RyanZombieLavaTrooperSgtwalker","RyanZombieLavaTrooperspider","RyanZombieLavaTrooperVetspider","RyanZombieLavaTrooperSgtspider","RyanZombieLavaTroopercrawler","RyanZombieLavaTrooperVetcrawler","RyanZombieLavaTrooperSgtcrawler"];
_a31 = ["RyanZombieStormtrooper","RyanZombieStormtrooper_Veteran","RyanZombieStormtrooper_Sergeant","RyanZombieStormtrooper_Officer","RyanZombieStormtrooper_Medic","RyanZombieStormtrooper_Scout","RyanZombieStormtrooper_Mortar","RyanZombieStormtrooper_Incen","RyanZombieStormtroopermedium","RyanZombieStormtrooper_Veteranmedium","RyanZombieStormtrooper_Sergeantmedium","RyanZombieStormtrooper_Officermedium","RyanZombieStormtrooper_Medicmedium","RyanZombieStormtrooper_Scoutmedium","RyanZombieStormtrooper_Mortarmedium","RyanZombieStormtrooper_Incenmedium","RyanZombieStormtrooperslow","RyanZombieStormtrooper_Veteranslow","RyanZombieStormtrooper_Sergeantslow","RyanZombieStormtrooper_Officerslow","RyanZombieStormtrooper_Medicslow","RyanZombieStormtrooper_Scoutslow","RyanZombieStormtrooper_Mortarslow","RyanZombieStormtrooper_Incenslow","RyanZombieStormtrooperwalker","RyanZombieStormtrooper_Veteranwalker","RyanZombieStormtrooper_Sergeantwalker","RyanZombieStormtrooper_Officerwalker","RyanZombieStormtrooper_Medicwalker"];
_a32 = ["RyanZombieStormMimb","RyanZombieStormMimbVet","RyanZombieStormMimbSgt","RyanZombieStormMimbOfficer","RyanZombieStormMimbScout","RyanZombieStormMimbmedium","RyanZombieStormMimbVetmedium","RyanZombieStormMimbSgtmedium","RyanZombieStormMimbOfficermedium","RyanZombieStormMimbScoutmedium","RyanZombieStormMimbslow","RyanZombieStormMimbVetslow","RyanZombieStormMimbSgtslow","RyanZombieStormMimbOfficerslow","RyanZombieStormMimbScoutslow","RyanZombieStormMimbwalker","RyanZombieStormMimbVetwalker","RyanZombieStormMimbSgtwalker","RyanZombieStormMimbOfficerwalker","RyanZombieStormMimbScoutwalker"];
_a33 = ["RyanZombieSandTrooper","RyanZombieSandTrooperVet","RyanZombieSandTrooperSgt","RyanZombieSandTrooperOfficer","RyanZombieSandTrooperScout","RyanZombieSandTrooperslow","RyanZombieSandTrooperVetslow","RyanZombieSandTrooperSgtslow","RyanZombieSandTrooperOfficerslow","RyanZombieSandTrooperScoutslow","RyanZombieSandTroopermedium","RyanZombieSandTrooperVetmedium","RyanZombieSandTrooperSgtmedium","RyanZombieSandTrooperOfficermedium","RyanZombieSandTrooperScoutmedium","RyanZombieSandTrooperWalker","RyanZombieSandTrooperVetWalker","RyanZombieSandTrooperSgtWalker","RyanZombieSandTrooperOfficerWalker","RyanZombieSandTrooperScoutWalker"];
_a34 = ["RyanZombieSnowTrooper", "RyanZombieSnowTroopermedium", "RyanZombieSnowTrooperslow", "RyanZombieSnowTrooperwalker"];
_a35 = ["RyanZombieMagmaTrooper","RyanZombieMagmaTrooperVet","RyanZombieMagmaTrooperSgt","RyanZombieMagmaTroopermedium","RyanZombieMagmaTrooperVetmedium","RyanZombieMagmaTrooperSgtmedium","RyanZombieMagmaTrooperslow","RyanZombieMagmaTrooperVetslow","RyanZombieMagmaTrooperSgtslow","RyanZombieMagmaTrooperwalker","RyanZombieMagmaTrooperVetwalker","RyanZombieMagmaTrooperSgtwalker"];
_a36 = ["RyanZombieLavaTrooper","RyanZombieLavaTrooperVet","RyanZombieLavaTrooperSgt","RyanZombieLavaTroopermedium","RyanZombieLavaTrooperVetmedium","RyanZombieLavaTrooperSgtmedium","RyanZombieLavaTrooperslow","RyanZombieLavaTrooperVetslow","RyanZombieLavaTrooperSgtslow","RyanZombieLavaTrooperwalker","RyanZombieLavaTrooperVetwalker","RyanZombieLavaTrooperSgtwalker"];

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
if (_Type == 19) then {_array = _a19;};
if (_Type == 20) then {_array = _a20;};
if (_Type == 21) then {_array = _a21;};
if (_Type == 22) then {_array = _a22;};
if (_Type == 23) then {_array = _a23;};
if (_Type == 24) then {_array = _a24;};
if (_Type == 25) then {_array = _a25;};
if (_Type == 26) then {_array = _a26;};
if (_Type == 27) then {_array = _a27;};
if (_Type == 28) then {_array = _a28;};
if (_Type == 29) then {_array = _a29;};
if (_Type == 30) then {_array = _a30;};
if (_Type == 31) then {_array = _a31;};
if (_Type == 32) then {_array = _a32;};
if (_Type == 33) then {_array = _a33;};
if (_Type == 34) then {_array = _a34;};
if (_Type == 35) then {_array = _a35;};
if (_Type == 36) then {_array = _a36;};

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
if (_Type2 == 19) then {_array = _array + _a19;};
if (_Type2 == 20) then {_array = _array + _a20;};
if (_Type2 == 21) then {_array = _array + _a21;};
if (_Type2 == 22) then {_array = _array + _a22;};
if (_Type2 == 23) then {_array = _array + _a23;};
if (_Type2 == 24) then {_array = _array + _a24;};
if (_Type2 == 25) then {_array = _array + _a25;};
if (_Type2 == 26) then {_array = _array + _a26;};
if (_Type2 == 27) then {_array = _array + _a27;};
if (_Type2 == 28) then {_array = _array + _a28;};
if (_Type2 == 29) then {_array = _array + _a29;};
if (_Type2 == 30) then {_array = _array + _a30;};
if (_Type2 == 31) then {_array = _array + _a31;};
if (_Type2 == 32) then {_array = _array + _a32;};
if (_Type2 == 33) then {_array = _array + _a33;};
if (_Type2 == 34) then {_array = _array + _a34;};
if (_Type2 == 35) then {_array = _array + _a35;};
if (_Type2 == 36) then {_array = _array + _a36;};

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
if (_Type3 == 19) then {_array = _array + _a19;};
if (_Type3 == 20) then {_array = _array + _a20;};
if (_Type3 == 21) then {_array = _array + _a21;};
if (_Type3 == 22) then {_array = _array + _a22;};
if (_Type3 == 23) then {_array = _array + _a23;};
if (_Type3 == 24) then {_array = _array + _a24;};
if (_Type3 == 25) then {_array = _array + _a25;};
if (_Type3 == 26) then {_array = _array + _a26;};
if (_Type3 == 27) then {_array = _array + _a27;};
if (_Type3 == 28) then {_array = _array + _a28;};
if (_Type3 == 29) then {_array = _array + _a29;};
if (_Type3 == 30) then {_array = _array + _a30;};
if (_Type3 == 31) then {_array = _array + _a31;};
if (_Type3 == 32) then {_array = _array + _a32;};
if (_Type3 == 33) then {_array = _array + _a33;};
if (_Type3 == 34) then {_array = _array + _a34;};
if (_Type3 == 35) then {_array = _array + _a35;};
if (_Type3 == 36) then {_array = _array + _a36;};

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