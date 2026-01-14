class CfgPatches
{
	class metal_imp_weap
	{
		author="Imp Imperial Development Team";
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		// Removed empty string to avoid potential issues. Add entries here if needed.
		magazines[]={};
		ammo[]={};
	};
};

#include "XtdGearModels.hpp"
#include "XtdGearInfos.hpp"
class CfgFunctions
{
	class MET_Imperial
	{
		tag="MET_Imp";
		class functions
		{
			class PTL_airburst
			{
				file="z\16th_imp\addons\imperial_weapons\scripts\PTL_airburst.sqf";
				description="RPG airburst effect";
			};
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class Default;
	class 3AS_recoil_default;
	class MET_recoil_Dlt19X: 3AS_recoil_default
	{
		kickBack[]={0.1,0.12};
		muzzleOuter[]={0.5,1.5,0.80000001,0.80000001};
		temporary=0.079999998;
	};
	class MET_recoil_Dlt19D: 3AS_recoil_default
	{
		kickBack[]={0.11,0.15};
		muzzleOuter[]={0.5,1.5,0.80000001,0.80000001};
		temporary=0.079999998;
	};
};
class CfgAmmo
{
	class MET_slug_blue;
	class MET_slug_red: MET_slug_blue
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_pellet_red: MET_slug_red
	{
		hit=9;
		simulationStep=9.9999997e-005;
		cartridge="";
		submunitionAmmo="MET_pellet_subminition_red";
		submunitionConeType[]=
		{
			"poissondisc",
			12
		};
		submunitionConeAngle=0.4;
		triggerSpeedCoef[]={0.85000002,1};
		triggerTime=0.001;
		cost=1;
	};
	class MET_pellet_subminition_red: MET_slug_red
	{
		deflecting=2;
	};
	class G_40mm_HE;
	class MET_HE_LauncherGrenade_Red: G_40mm_HE
	{
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
		model="Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
	};
    class MET_60HE;
	class MET_60HE_red: MET_60HE
	{
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
		model="Indecisive_Armoury_Ammos\Data\40mm_Grenade\IDA_40mm_Grenade.p3d";
	};
    class JMSLLTE_BlasterRifle_Blue_Ammo;
	class MET_ArcCast_Ammo: JMSLLTE_BlasterRifle_Blue_Ammo
	{
		author="JMax";
		model="\JMSLLTE_weapons\mags\lightblue.p3d";
		ACE_caliber=12.823;
		hit=74;
		scope=2;
		indirectHit=15;
		indirectHitRange=1;
		caliber=10.5;
		typicalSpeed=200;
		tracerscale=4;
		explosive=3;
		explosionSoundEffect="";
		explosionAngle=60;
		explosionEffects="";
		explosionForceCoef=1;
		effectFly="";
		effectsFire="";
		effectsMissile="";
		effectsMissileInit="";
		effectsSmoke="";
		craterEffects="GrenadeCrater";
	};
	class MET_blasterbolt_snp_red;
	class MET_blasterbolt_snp_hvy_red:MET_blasterbolt_snp_red
	{
		hit=130;
	};
	class MET_blasterbolt;
	class MET_blasterbolt_hvy: MET_blasterbolt
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
		ACE_damageType="bullet";
		cartridge="";
		lightcolor[]={0,0.30000001,1};
		hit=35;
		indirectHit=1;
		explosive=0;
		indirectHitRange=0.1;
		caliber=1.4;
		effectfly="MET_BlasterBoltGlow_Blue_Fly";
	};
	class MET_blasterbolt_hvy_Red: MET_blasterbolt_hvy
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
	};
	class MET_blasterbolt_hvy_Green: MET_blasterbolt_hvy
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly="MET_BlasterBoltGlow_Green_Fly";
		lightcolor[]={0,1,0};
	};
	class MET_blasterbolt_hvy_Yellow: MET_blasterbolt_hvy
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Yellow.p3d";
		effectfly="MET_BlasterBoltGlow_Yellow_Fly";
		lightcolor[]={.839,0.749,0.486};
	};
	class metal_at_wire_missile;
	class metal_red_at_wire_missile: metal_at_wire_missile
	{
		effectsMissile="MET_Rocket_effect_Red_fly";
		lightcolor[]={1,0,0};
	};
	class 3AS_MK40_AT;
	class HH15_Disp: 3AS_MK40_AT
	{
		hit=1200;
		indirectHit=15;
		effectsMissile="MET_Rocket_effect_Red_fly";
	};
	class RocketBase;
	class MET_IMP_PT_HEP: RocketBase
	{
		warheadName="HE";
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.1};
		ace_frag_enabled=1;
		ace_frag_metal=600;
		ace_frag_charge=672.5;
		ace_frag_gurney_c=2440;
		ace_frag_gurney_k="1/2";
		ace_frag_classes[]=
		{
			"ACE_frag_small"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		hit=650;
		indirectHit=850;
		indirectHitRange=8;
		explosive=1;
		cost=30;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=0;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		effectsSmoke="SmokeShellWhite";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=0.5;
		thrust=0.1;
		fuseDistance=25;
		effectsMissile="missile2";
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class MET_IMP_PT_FRAG: RocketBase
	{
		warheadName="FRAG";
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		triggerOnImpact=1;
		deleteParentWhenTriggered=0;
		ace_frag_enabled=1;
		ace_frag_metal=4500;
		ace_frag_charge=472.5;
		ace_frag_gurney_c=2950;
		ace_frag_gurney_k="3/5";
		ace_frag_classes[]=
		{
			"ACE_frag_large",
			"ACE_frag_medium_HD",
			"ACE_frag_tiny_HD",
			"ACE_frag_small"
		};
		ace_frag_skip=0;
		ace_frag_force=1;
		hit=50;
		indirectHit=90;
		indirectHitRange=10;
		explosive=0.8;
		cost=10;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=1;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		effectsSmoke="SmokeShellWhite";
		effectsMissile="MET_Rocket_effect_Yellow_fly";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=0.5;
		thrust=0.1;
		fuseDistance=25;
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class MET_IMP_PT_AB: RocketBase
	{
		warheadName="AB";
		submunitionInitSpeed=10;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		deleteParentWhenTriggered=0;
		ace_frag_enabled=0;
		/*ace_frag_metal=4500;
		ace_frag_charge=472.5;
		ace_frag_gurney_c=2950;
		ace_frag_gurney_k="3/5";
		ace_frag_classes[]=
		{
			"ACE_frag_large",
			"ACE_frag_medium_HD",
			"ACE_frag_tiny_HD",
			"ACE_frag_small"
		};*/
		submunitionAmmo="MET_IMP_PT_AB_Shell";
		submunitionConeType[]=
		{
			"randomupcone",
			1
		};
		submunitionConeAngle=0;
		ace_frag_skip=0;
		ace_frag_force=1;
		hit=50;
		//indirectHit=90;
		//indirectHitRange=10;
		//explosive=0.8;
		cost=10;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=1;
		simulationStep=0.02;
		//explosionSoundEffect="DefaultExplosion";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		//CraterEffects="ArtyShellCrater";
		//ExplosionEffects="MortarExplosion";
		//effectsSmoke="SmokeShellWhite";
		effectsMissile="MET_Rocket_effect_Green_fly";
		effectsMissileInit="RocketBackEffectsRPG";
		timeToLive=24;
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=0.5;
		thrust=0.1;
		fuseDistance=25;
		whistleDist=4;
		// Bounce settings
		//deflecting=90; // High value for strong bounce
		//bounceOnSurface=1;
		//bounceOnSurfaceVar=0.1;
		//bounceOnSurfaceFriction=0.2;
		//bounceOnSurfaceRestitution=0.8;
		// Airburst detonation
		// Use timeToLive for airburst after bounce (approx 0.3s after first impact)
		// Or use a script for precise control if needed
		// Optionally, add a proximity fuse for 3m above ground
		//proximityExplosionDistance=3;
		// Optionally, set whistleDist for effect
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class MET_IMP_PT_AB_Shell: MET_IMP_PT_AB
	{
		warheadName="AB";
		submunitionAmmo="";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		deleteParentWhenTriggered=0;
		ace_frag_enabled=1;
		ace_frag_metal=4500;
		ace_frag_charge=472.5;
		ace_frag_gurney_c=2950;
		ace_frag_gurney_k="3/5";
		ace_frag_classes[]=
		{
			"ACE_frag_large",
			"ACE_frag_medium_HD",
			"ACE_frag_tiny_HD",
			"ACE_frag_small"
		};
		timeToLive=5;
		submunitionConeAngle=0;
		ace_frag_skip=0;
		ace_frag_force=1;
		hit=50;
		indirectHit=90;
		indirectHitRange=10;
		explosive=0.8;
		cost=10;
		aiAmmoUsageFlags="128 + 512";
		allowAgainstInfantry=1;
		simulationStep=0.02;
		explosionSoundEffect="DefaultExplosion";
		model="\A3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F.p3d";
		CraterEffects="ArtyShellCrater";
		ExplosionEffects="MortarExplosion";
		effectsSmoke="SmokeShellWhite";
		effectsMissile="MET_Rocket_effect_Green_fly";
		effectsMissileInit="RocketBackEffectsRPG";
		airFriction=0.050000001;
		sideAirFriction=0;
		maxSpeed=345;
		typicalspeed=10;
		initTime=0.029999999;
		thrustTime=0.5;
		thrust=0.1;
		fuseDistance=25;
		whistleDist=4;
		class CamShakeExplode
		{
			power=50;
			duration=3.5;
			frequency=20;
			distance=100;
		};
		class CamShakeHit
		{
			power=110;
			duration=1.8;
			frequency=20;
			distance=20;
		};
		class CamShakeFire
		{
			power=2.78316;
			duration=1.6;
			frequency=20;
			distance=61.967701;
		};
		class CamShakePlayerFire
		{
			power=3;
			duration=0.1;
			frequency=20;
			distance=1;
		};
		class EventHandlers
		{
			class MET_Airburst
			{
				fired = "_this call MET_fnc_PTL_airburst";
			};
		};
	};
};
class CBA_DisposableLaunchers
{
	MET_HH15_Base[]=
	{
		"MET_HH15_F",
		"MET_HH15_Used"
	};
};
class CfgMagazines
{
    class MET_DC15A_mag;
	class MET_DC15A_Red_mag: MET_DC15A_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		displayName="[Imp] Red Energy Cell";
		ammo="MET_blasterbolt_Red";
	};
	class MET_DC15S_mag;
	class MET_DC15S_red_mag: MET_DC15S_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		displayName="[Imp] Red Light Energy Cell";
		ammo="MET_blasterbolt_low_red";
	};
	class MET_DC15L_mag;
	class MET_DC15L_red_mag: MET_DC15L_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_r.paa";
		displayName="[Imp] DC-15L Red Energy Cell";
		ammo="MET_blasterbolt_red";
	};
	class MET_DC15LE_mag;
	class MET_DC15LE_Red_mag: MET_DC15LE_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		displayName="[Imp] DC-15LE Red Energy Cell";
		ammo="MET_blasterbolt_br_red";
	};
	class MET_DC15SMG_Mag;
	class MET_DC15SMG_Red_Mag: MET_DC15SMG_Mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_R.paa";
		displayName="[Imp] DC-15SMG Red Energy Cell";
		ammo="MET_blasterbolt_low_red";
	};
	class MET_blaster_battery;
	class MET_red_blaster_battery: MET_blaster_battery
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_r.paa";
		displayName="[Imp] Z6 Red Energy Cell";
		ammo="MET_blasterbolt_low_red";
	};
	class MET_Valken_mag;
	class MET_Red_Valken_mag: MET_Valken_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		displayName="[Imp] Valken Red Energy Cell";
		ammo="MET_blasterbolt_dmr_red";
	};
	class MET_DC15x_mag;
	class MET_Red_DC15x_mag: MET_DC15x_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		displayName="[Imp] DC-15X Red Energy Cell";
		ammo="MET_blasterbolt_snp_red";
	};
	class MET_slug_mag;
	class MET_red_slug_mag: MET_slug_mag
	{
		displayName="[Imp] DP-23 Energy Cell (Slugs)";
		picture="\3AS\3AS_Weapons\Data\UI\3as_shotgun_r.paa";
		ammo="MET_slug_red";
	};
	class MET_pellet_mag;
	class MET_red_pellet_mag: MET_pellet_mag
	{
		displayName="[Imp] DP-23 Energy Cell (Pellets)";
		picture="\3AS\3AS_Weapons\Data\UI\3as_pellets_r.paa";
		ammo="MET_pellet_red";
	};
	class MET_HE_Grenade;
    class MET_Red_HE_Grenade: MET_HE_Grenade
	{
		displayName="[Imp] Red HE Grenade";
		ammo="MET_HE_LauncherGrenade_Red";
	};
	class MET_3Rnd_HE_Grenade_shell;
	class MET_3Rnd_Red_HE_Grenade_shell: MET_3Rnd_HE_Grenade_shell
	{
		displayName="[Imp] 3 Round HE Red Grenade";
		ammo="MET_HE_LauncherGrenade_Red";
	};
	class MET_60mm_HE_mag;
	class MET_60mm_Red_HE_mag: MET_60mm_HE_mag
	{
		ammo="MET_60HE_Red";
		picture="\3AS\3AS_Weapons\Data\UI\3as_nade_he.paa";
		displaynamemagazine="[Imp] 60mm Red High-Explosive";
	};
	class MET_dual_blaster_pistol_battery;
	class MET_dual_blaster_pistol_red_battery: MET_dual_blaster_pistol_battery
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		displayName="[Imp] Dual DC-17SA Red Energy Cell";
		ammo="MET_blasterbolt_low_red";
	};
	class JLTS_DC15A_mag;
	class MET_E11_red_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=60;
		displayName="[Imp] E-11 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the E-11 and DLT-19";
		ammo="MET_blasterbolt_low_red";
		tracersEvery=1;
	};
	class MET_E22_red_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=40;
		displayName="[Imp] E-22 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the E-22 and DLT-19";
		ammo="MET_blasterbolt_red";
		tracersEvery=1;
	};
	class MET_E11D_red_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=80;
		displayName="[Imp] E-11D Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the E-11D";
		ammo="MET_blasterbolt_low_red";
		tracersEvery=1;
	};
	class MET_ee3_red_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=45;
		displayName="[Imp] EE-3 Energy Cell";
		displayNameShort="EE-3 Energy Cell";
		descriptionShort="Energy cell for the EE-3";
		ammo="MET_blasterbolt_red";
		tracersEvery=1;
	};
	class MET_EE4_red_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=100;
		mass=12;
		displayName="[Imp] EE-4 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the EE-4";
		ammo="MET_blasterbolt_low_red";
		tracersEvery=1;
	};
	class MET_T21_red_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=30;
		displayName="[Imp] T-21 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the T-21";
		ammo="MET_blasterbolt_br_red";
		tracersEvery=1;
	};
	class MET_TL50_light_yellow_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_y.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=50;
		displayName="[Imp] TL-50 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the TL-50";
		ammo="MET_blasterbolt_hvy_Yellow";
		tracersEvery=1;
		mass=15;
	};
	class MET_TL50_heavy_yellow_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_y.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=200;
		displayName="[Imp] TL-50 Heavy Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the TL-50";
		ammo="MET_blasterbolt_hvy_Yellow";
		tracersEvery=1;
		mass=60;
	};
	class MET_dlt19_red_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=200;
		displayName="[Imp] DLT-19 Energy Cell";
		displayNameShort="DLT-19 Energy Cell";
		descriptionShort="Energy cell for the DLT-19";
		ammo="MET_blasterbolt_red";
		mass=40;
		tracersEvery=1;
	};
	class MET_rt97c_red_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_box_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=600;
		displayName="[Imp] RT-97C Energy Cell";
		displayNameShort="RT-97C Energy Cell";
		descriptionShort="Energy cell for the RT-97C";
		ammo="MET_blasterbolt_low_red";
		mass=60;
		tracersEvery=1;
	};
	class MET_T21B_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=20;
		displayName="[Imp] T-21B Energy Cell";
		displayNameShort="T-21B Energy Cell";
		descriptionShort="Energy cell for the T-21B";
		ammo="MET_blasterbolt_dmr_red";
		tracersEvery=1;
		initSpeed = 1250;
		mass=20;
	};
	class MET_774CX_mag: JLTS_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=20;
		displayName="[Imp] 774CX Energy Cell";
		displayNameShort="774CX Energy Cell";
		descriptionShort="Energy cell for the 774CX";
		ammo="MET_blasterbolt_dmr_red";
		tracersEvery=1;
		initSpeed = 1250;
		mass=20;
	};
	class MET_Red_dlt19x_mag: MET_Red_DC15x_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		displayName="[Imp] DLT-19X Red Energy Cell";
		displayNameShort="DLT-19x Energy Cell";
		descriptionShort="Energy Cell for the DLT-19x";
		ammo="MET_blasterbolt_snp_red";
	};
	class MET_Red_dlt19d_mag: MET_Red_DC15x_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		displayName="[Imp] DLT-19D Red Energy Cell";
		ammo="MET_blasterbolt_snp_hvy_red";
		displayNameShort="DLT-19d Energy Cell";
		descriptionShort="Energy Cell for the DLT-19d";
		count=12;
		mass=25;
	};
	class MET_Green_dlt20a_mag: MET_Red_DC15x_mag
	{
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_g.paa";
		displayName="[Imp] DLT-20A Ionized Energy Cell";
		ammo="MET_blasterbolt_at_green";
		displayNameShort="DLT-20A Energy Cell";
		descriptionShort="Energy Cell for the DLT-20A";
		mass=25;
		count=10;
	};
	class MET_ArcCast_Mag: JLTS_DC15A_mag
	{
		scope=2;
		displayName="[Imp] ARC Energy cell";
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_c.paa";
		ammo="MET_ArcCast_Ammo";
		tracersEvery=1;
		type=16;
		count=60;
		descriptionShort="Energy cell: ARC<br />Capacity: 60<br />Used in: ARC Caster";
		mass=6;
		initSpeed=150;
	};
	class MET_Chaingun_Light_Drum_Mag;
	class MET_Chaingun_Red_Light_Drum_Mag: MET_Chaingun_Light_Drum_Mag
	{
		displayName="[Imp] Chaingun Red Drum Magazine";
		ammo="MET_light_red_Chaingun_Ammo";
	};
	class MET_blaster_pistol_battery;
	class MET_rk3_pistol_battery: MET_blaster_pistol_battery
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=50;
		displayName="[Imp] RK-3 Energy Cell";
		displayNameShort="RK-3 Energy Cell";
		descriptionShort="Low Power Energy Cell for the RK-3";
		ammo="MET_blasterbolt_low_red";
		tracersEvery=1;
		initSpeed=250;
		mass=5;
	};
	class MET_ec17_pistol_battery: MET_blaster_pistol_battery
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=25;
		displayName="[Imp] EC-17 Energy Cell";
		displayNameShort="EC-17 Energy Cell";
		descriptionShort="Low Power Energy Cell for the EC-17";
		ammo="MET_blasterbolt_red";
		tracersEvery=1;
		initSpeed=250;
		mass=5;
	};
	class MET_se14_pistol_battery: MET_blaster_pistol_battery
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=60;
		displayName="[Imp] SE-14 Energy Cell";
		displayNameShort="SE-14 Energy Cell";
		descriptionShort="Low Power Energy Cell for the SE-14";
		ammo="MET_blasterbolt_low_red";
		tracersEvery=1;
		initSpeed=250;
		mass=6;
	};
	class MET_rk3_pistol_battery_dual: MET_rk3_pistol_battery
	{
		author="Hazmat";
		scope=2;
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		model="\MRC\JLTS\weapons\DC17SA\DC17SA_mag.p3d";
		count=100;
		displayName="[Imp] Dual RK-3 Energy Cell";
		displayNameShort="RK-3 Energy Cell";
		descriptionShort="Low Power Energy Cell for the RK-3";
		ammo="MET_blasterbolt_low_red";
		tracersEvery=1;
		initSpeed=250;
		mass=10;
	};
	class 3AS_JLTS_MK39_AA;
	class MET_HH12_AA_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="HH-12 AA Rocket Pack";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";
		ammo = "metal_aa_missile_van";
		count=2;
		mass=40;
		initSpeed=40;
	};
	class MET_HH12_AP_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="HH-12 AP Rocket Pack";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		ammo="metal_mand_ap_missile";
		count=2;
		mass=40;
		initSpeed=40;
	};
	class MET_HH12_AT_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="HH-12 AT Rocket Pack";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		ammo="metal_red_at_wire_missile";
		count=2;
		mass=50;
		initSpeed=40;
	};
	class CA_LauncherMagazine;
	class MET_PTL_HEP: CA_LauncherMagazine
	{
		displayname="HEP Proton Torpedo";
		ammo="MET_IMP_PT_HEP";
		scope=2;
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		displaynamemagazine="HEP Proton Torpedo";
		shortnamemagazine="HEP PT";
		displayNameMFDFormat="HEP PT";
		displayNameShort="HEP PT";
		mass=40;
		count=1;
		initspeed=345;
		tracersevery=1;
	};
	class MET_PTL_Frag: CA_LauncherMagazine
	{
		displayname="Fragmentation Proton Torpedo";
		scope=2;
		ammo="MET_IMP_PT_Frag";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		displaynamemagazine="Fragmentation Proton Torpedo";
		shortnamemagazine="FRAG PT";
		displayNameMFDFormat="FRAG PT";
		displayNameShort="FRAG PT";
		mass=35;
		count=1;
		initspeed=345;
		tracersevery=1;
	};
	class MET_PTL_AB: CA_LauncherMagazine
	{
		displayname="Airburst Proton Torpedo";
		scope=2;
		ammo="MET_IMP_PT_AB";
		model="\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		displaynamemagazine="Airburst Proton Torpedo";
		shortnamemagazine="AB PT";
		displayNameMFDFormat="AB PT";
		displayNameShort="AB PT";
		mass=40;
		count=1;
		initspeed=345;
		tracersevery=1;
	};
};
class CfgMagazineWells
{
	class MET_DC15L_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_DC15L_Red_mag",
			"MET_DC15A_Red_mag"
		};
	};
	class MET_DC15S_MagWell
	{
		MET_LightRedMagazines[]=
		{
			"MET_DC15S_Red_mag"
		};
	};
	class MET_DC15A_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_DC15A_Red_mag"
		};
	};
	class MET_DC15LE_MagWell
	{
		MET_HeavyRedMagazines[]=
		{
			"MET_DC15LE_Red_mag"
		};
	};
	class MET_Z6_MagWell
	{
		MET_Z6RedMagazines[]=
		{
			"MET_red_blaster_battery",
			"MET_blaster_pistol_Red_battery"
		};
	};
	class MET_CinCar_MagWell
	{
		MET_RedCinCar_Mags[]=
		{
			"MET_CinCar_Mag",
			"MET_DC15SMG_Mag",
			"MET_DC15S_Mag",
			"MET_DC15SMG_Red_Mag",
			"MET_DC15S_Red_Mag"
		};
	};
	class MET_DP23_MagWell
	{
		MET_DP23RedMagazines[]=
		{
			"MET_red_pellet_mag",
			"MET_red_slug_mag"
		};
	};
	class MET_DC17SA_MagWell
	{
		MET_DC17SA_Red_Mags[] =
		{
			"MET_blaster_pistol_Red_battery"
		};
	};
	class MET_DC17SA_Dual_MagWell
	{
		MET_DC17SA_Dual_Red_MagWell[]=
		{
			"MET_dual_blaster_pistol_red_battery",
		};
	};
	class MET_Valken_MagWell
	{
		MET_Red_Valken_Mags[]=
		{
			"MET_Red_Valken_mag"
		};
	};
	class MET_dc15x_MagWell
	{
		MET_DC15x_Red_mag[]=
		{
			"MET_Red_DC15x_mag"
		};
	};
	class MET_3GL_MagWell
	{
		MET_Red3GL_Mags[]=
		{
			"MET_3Rnd_Red_HE_Grenade_shell"
		};
	};
	class MET_GL_MagWell
	{
		MET_Red_GL_Mags[]=
		{
			"MET_Red_HE_Grenade"
		};
	};
	class MET_60_GL_Magwell
	{
		MET_Red_60mm_GL_Mags[]=
		{
			"MET_60mm_Red_HE_mag"
		};
	};
    class MET_E11_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_E11_red_mag"
		};
	};
    class MET_E22_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_E22_red_mag"
		};
	};
    class MET_E11D_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_E11D_red_mag"
		};
	};
    class MET_DLT19_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_E22_red_mag",
			"MET_dlt19_red_mag"
		};
	};
    class MET_DLT19x_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_Red_dlt19x_mag"
		};
	};
    class MET_DLT19d_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_Red_dlt19d_mag"
		};
	};
    class MET_DLT20A_MagWell
	{
		MET_Green_Magazines[]=
		{
			"MET_Green_dlt20a_mag"
		};
	};
	class MET_Chaingun_MagWell
	{
		MET_Red_Magazines[]=
		{
			"MET_Chaingun_Red_Light_Drum_Mag"
		};
	};
	class MET_ee3_magwell
	{
		MET_Red_Magazines[]=
		{
			"MET_ee3_red_mag",
			"MET_ee4_red_mag"
		};
	};
	class MET_rt97c_magwell
	{
		MET_Red_Magazines[]=
		{
			"MET_rt97c_red_mag",
			"MET_E11_red_mag"
		};
	};
	class MET_T21_magwell
	{
		MET_Red_Magazines[]=
		{
			"MET_T21_red_mag"
		};
	};
	class MET_T21B_magwell
	{
		MET_Red_Magazines[]=
		{
			"MET_T21B_mag"
		};
	};
	class MET_TL50_magwell
	{
		MET_Yellow_Magazines[]=
		{
			"MET_TL50_light_yellow_mag",
			"MET_TL50_heavy_yellow_mag"
		};
	};
};
class UGL_F;
class Mode_SemiAuto;
class Mode_Burst: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Mode_FullAuto: Mode_SemiAuto
{
	class BaseSoundModeType;
	class StandardSound;
};
class Single;
class close;
class GunParticles;
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class CfgWeapons
{   
	/*========================================================================================================================================
    ========================================= Base Classes ===================================================================================
    =========================================================================================================================================*/
	class Rifle_Long_Base_F;
	class JMSLLTE_BlasterRifle_Base: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class ImperialRifle_Base: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
    class JMSLLTE_e11: JMSLLTE_BlasterRifle_Base
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class ItemInfo;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlots;
		class GunParticles;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class JMSLLTE_BlasterPistol_Base: Pistol_Base_F
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
	};
	class WM_PistolBase: Pistol_Base_F
	{
	};
	class hgun_Pistol_Heavy_01_F: Pistol_Base_F
	{
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class AnimationSources;
	};
	class AnimationSources;
	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryUnderItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class Launcher_Base_F;
	class launch_RPG32_F: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
    /*========================================================================================================================================
    ========================================= E-11 ===========================================================================================
    =========================================================================================================================================*/
    class MET_IMP_e11: JMSLLTE_e11
	{
		scope=2;
		author="Hazmat";
		_generalMacro="JMSLLTE_e11";
		magazines[]=
		{
			"MET_E11_red_mag"
		};
        magazineWell[]=
        {
            "MET_E11_MagWell"
        };
		recoil="3as_recoil_E11";
		displayname="[Imp] E-11 blaster rifle";
		descriptionShort="Standard Imperial blaster rifle<br />Ammo: E-11 Energy cell<br />Manufactured by BlasTech Industries";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
		class Library
		{
			libTextDesc="The BlasTech E-11 blaster rifle, also referred to as the E-11 BlasTech Standard Imperial Sidearm or the Stormtrooper Armament Blaster Rifle (BlasTech E-11)[2], was a blaster rifle used during the time of the Galactic Republic, and manufactured by BlasTech Industries during the Galactic Civil War. It was the standard blaster rifle of the Imperial stormtroopers. A powerful, light and compact weapon, the E-11 was used widely through the galaxy";
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.02;
		fireLightDiffuse[]={233,124,113};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E11_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E11_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=0.001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		inertia=0.40000001;
		dexterity=1.7;
		initSpeed=300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight"
				};
			};
		};
	};
    class MET_IMP_e11carb: MET_IMP_e11
	{
		scope=2;
		_generalMacro="JMSLLTE_e11carb";
		model="\JMSLLTE_weapons\blasterE11\e11carb.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_e11c.rtm"
		};
		picture="\JMSLLTE_weapons\blasterE11\ui\ico_E11C.paa";
		displayname="[Imp] E-11 blaster carbine";
		descriptionShort="Standard Imperial blaster carbine<br />Ammo: E-11C Energy cell<br />Manufactured by BlasTech Industries";
	};
	class MET_IMP_e11_count: MET_IMP_e11
	{
		scope=2;
		_generalMacro="JMSLLTE_e11_count";
		model="\JMSLLTE_weapons\blasterE11\e11_count.p3d";
		picture="\JMSLLTE_weapons\blasterE11\ui\ico_E11count.paa";
		displayname="[Imp] E-11 MkII blaster rifle";
	};
	class MET_IMP_e11_count2: MET_IMP_e11
	{
		scope=2;
		author="JMax";
		_generalMacro="JMSLLTE_e11_count2";
		model="\JMSLLTE_weapons\blasterE11\e11_count2.p3d";
		picture="\JMSLLTE_weapons\blasterE11\ui\ico_E11count2.paa";
		displayname="[Imp] E-11 MkIII blaster rifle";
		inertia=0.25;
	};
    class MET_ArcCast: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="JMSLLTE_ArcCast";
		model="\JMSLLTE_weapons\blasterE11\arcCaster.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_e11.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\blasterE11\ui\ico_arc.paa";
		magazines[]=
		{
			"MET_ArcCast_Mag"
		};
		displayname="[Imp] ARC Caster";
		descriptionShort="Imperial ARC Caster<br />Ammo: ARC Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
		class Library
		{
			libTextDesc="ARC casters were modified E-11 blaster rifles that unleashed powerful electric shocks";
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFireBlue_hand";
			};
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_met_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.0024999999,0,0.1};
		fireLightAmbient[]={0,0,0};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_ArcCast_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.12;
			dispersion=0.020;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=30;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=30;
			minRangeProbab=0.2;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=50;
			minRangeProbab=0.2;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.2;
		};
		inertia=0.1;
		dexterity=1.7;
		initSpeed=200;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight"
				};
			};
		};
	};
    class MET_E11_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_E11_red_mag"
		};
		magazineWell[]=
		{
			"MET_E11_MagWell"
		};
		reloadAction="3AS_GestureReloadE11";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="3as_recoil_E11";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=-1;
		maxZeroing=100;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"MET_Imp_Optic_1",
					"MET_Imp_Optic_2",
					"MET_Imp_Optic_3",
					"MET_Imp_Optic_E11"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\a3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"3AS_Imp_Light_E11",
					"3AS_Imp_Laser_E11"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="E-11, 3rd Army Studios";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Imperial\anims\E11hand.rtm"
		};
		selectionFireAnim="zasleh";
		fireLightDiffuse[]={233,124,113};
		fireLightIntensity=0.02;
		flash="gunfire";
		flashSize=0.1;
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E11_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E11_Shot_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.08;
			dispersion=0.001;
			minRange=30;
			minRangeProbab=0.89999998;
			midRange=65;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E11_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E11_Shot_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E11_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_E11_Shot_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=0.001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		aiDispersionCOEFY=6;
		aiDispersionCOEFX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",
			1,
			1,
			30
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_E11GL_Base_F: MET_E11_Base_F
	{
		descriptionShort="E-11 GL, 3rd Army Studios";
		reloadAction="3AS_GestureReloadE11Stock";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Imperial\anims\E11GLhand.rtm"
		};
		class MET_E11GL: UGL_F
		{
			displayName="[Imp] E11 GL";
			descriptionShort="E11 GL";
			useModelOptics=0;
			useExternalOptic=0;
			magazines[]={};
			magazineWell[]=
			{
				"MET_GL_MagWell"
			};
			cameraDir="op_look";
			discreteDistance[]={50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_75",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="GestureReloadMXUGL";
			reloadMagazineSound[]=
			{
				"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",
				1,
				1,
				10
			};
		};
	};
	class MET_IMP_3AS_E11: MET_E11_Base_F
	{
		scope=2;
		displayName="[Imp] E-11 Blaster Rifle";
		model="\3AS\3AS_Weapons\Imperial\3AS_E11.p3d";
		picture="\3AS\3AS_Weapons\Imperial\data\UI\3as_e11.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
	class MET_IMP_3AS_E11_GL: MET_E11GL_Base_F
	{
		scope=2;
		displayName="[Imp] E-11GL Blaster Rifle";
		model="\3AS\3AS_Weapons\Imperial\3AS_E11GL.p3d";
		picture="\3AS\3AS_Weapons\Imperial\data\UI\3as_e11gl.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this",
			"MET_E11GL"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
		};
	};
    class MET_IMP_WM_E11: ImperialRifle_Base
	{
		author="WarMantle Armory";
		scope=2;
		model="WarMantle\WM_Imperial_Weapons\E11\E11.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\WarMantle\WM_Imperial_Weapons\E11\anims\E11_handanim.rtm"
		};
		reloadAction="ReloadOverheat_E11";
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\E11_UI_CA.paa";
		magazines[]=
		{
			"MET_E11_red_mag"
		};
		magazineWell[]=
		{
			"MET_E11_MagWell"
		};
		displayname="[Imp] E-11";
		descriptionShort="Imperial Blaster Rifle";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="The BlasTech E-11 blaster rifle, also referred to as the E-11 BlasTech Standard Imperial Sidearm or the Stormtrooper Armament Blaster Rifle (BlasTech E-11)[2], was a blaster rifle used during the time of the Galactic Republic, and manufactured by BlasTech Industries during the Galactic Civil War. It was the standard blaster rifle of the Imperial stormtroopers. A powerful, light and compact weapon, the E-11 was used widely through the galaxy";
		};
		reloadMagazineSound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\reload",
			1,
			1,
			30
		};
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.25;
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
			};
		};
		soundBullet[]={};
		drySound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\wpn_empty.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultBlaster";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="DefaultBlaster";
				begin1[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.08;
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.08;
			dispersion=0.001;
			minRange=30;
			minRangeProbab=0.89999998;
			midRange=65;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultBlaster";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="DefaultBlaster";
				begin1[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultBlaster";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="DefaultBlaster";
				begin1[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				begin3[]=
				{
					"WarMantle\WM_Imperial_Weapons\E11\SFX\wpn_e11_fire.wss",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.33000001
				};
			};
			reloadTime=0.08;
			dispersion=0.001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_E11_Optic"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.69999999};
				iconScale=0.2;
				compatibleItems[]=
				{
					"MET_E11_Pack"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
		};
	};
	class MET_IDA_E11: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="MET_IDA_E11_Stun";
		author="Hazmat";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="MET_IDA_E11";
		displayName="[Imp] E-11 Blaster Carbine";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11\E11_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11\Model\IDA_E11.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\E11.rtm"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="3as_recoil_E11";
		magazines[]=
		{
			"MET_E11_red_mag"
		};
		magazineWell[]=
		{
			"MET_E11_MagWell"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.08;
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.08;
			dispersion=0.001;
			minRange=30;
			minRangeProbab=0.89999998;
			midRange=65;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.08;
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_E11_Scope",
					"MET_E11_Optic"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_E11_Scope";
			};
		};
	};
	class MET_IDA_E11_UGL: MET_IDA_E11
	{
		IDA_StunWeapon="MET_IDA_E11_UGL_Stun";
		baseWeapon="MET_IDA_E11_UGL";
		displayName="[Imp] E-11 Blaster Carbine GL";
		scope=2;
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11\E11_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11\Model\IDA_E11_UGL.p3d";
		muzzles[]=
		{
			"This",
			"EGLM"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class EGLM: UGL_F
		{
			displayName="UGL";
			descriptionShort="";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,100,150,200};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
			magazines[]={};
			magazineWell[]=
			{
				"MET_GL_MagWell"
			};
			reloadAction="GestureReloadMXUGL";
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_E11_Scope"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	/*========================================================================================================================================
    ========================================= E-10 ===========================================================================================
    =========================================================================================================================================*/
    class MET_IMP_e10: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_e10";
		model="\JMSLLTE_weapons\e10\e10.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_e11.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\e10\ico_e10.paa";
		magazines[]=
		{
			"MET_E11_red_mag"
		};
        magazineWell[]=
        {
            "MET_E11_MagWell"
        };
		displayname="[Imp] E-10 blaster rifle";
		descriptionShort="Standard Imperial blaster rifle<br />Ammo: E-11 Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		class Library
		{
			libTextDesc="The E-10 blaster rifle was a model of blaster rifle manufactured by BlasTech Industries used by Imperial Army troopers of the Galactic Empire.";
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_met_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.02;
		fireLightDiffuse[]={233,124,113};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E11_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.1;
			dispersion=0.0008;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E11_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.1;
			dispersion=0.0008;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight"
				};
			};
		};
	};
	class MET_IMP_e105: MET_IMP_e10
	{
		_generalMacro="MET_IMP_e105";
		model="\JMSLLTE_weapons\e10\e105.p3d";
		picture="\JMSLLTE_weapons\e10\ico_E105.paa";
		displayname="[Imp] E-10.5 blaster rifle";
	};
	class MET_IDA_E10: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="IDA_E10_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="MET_IDA_E10";
		displayName="[Imp] E-10 Blaster Carbine";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E10\E10_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\E10\Model\IDA_E10.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\E11.rtm"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		magazines[]=
		{
			"MET_E11_red_mag"
		};
        magazineWell[]=
        {
            "MET_E11_MagWell"
        };
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.1;
			dispersion=0.0008;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.1;
			dispersion=0.0008;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=55;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_E11_Scope"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class MET_IDA_E10_UGL: MET_IDA_E10
	{
		IDA_StunWeapon="IDA_E10_UGL_Stun";
		baseWeapon="MET_IDA_E10_UGL";
		displayName="[Imp] E-10 Blaster Carbine UGL";
		scope=2;
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E10\E10_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\E10\Model\IDA_E10_UGL.p3d";
		muzzles[]=
		{
			"This",
			"EGLM"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class EGLM: UGL_F
		{
			displayName="UGL";
			descriptionShort="";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,100,150,200};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
			magazines[]={};
			magazineWell[]=
			{
				"MET_GL_MagWell"
			};
			reloadAction="GestureReloadMXUGL";
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_E11_Scope"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	/*========================================================================================================================================
    ========================================= E-11D ==========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_e11d: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_e11d";
		model="\JMSLLTE_weapons\e11d\e11d.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_e11d.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\e11d\ico_e11d.paa";
		magazines[]=
		{
			"MET_E11D_red_mag"
		};
        magazineWell[]=
        {
            "MET_E11D_MagWell"
        };
		displayname="[Imp] E-11D blaster carbine";
		descriptionShort="Standard-issue weapon of Imperial death troopers<br />Ammo: E-11D Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
		class Library
		{
			libTextDesc="";
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_met_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E11D_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.2;
			dispersion=0.0009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E11D_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.2;
			dispersion=0.0009;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=300;
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
			class IDA_E11D_Scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.05;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight"
				};
			};
		};
	};
	class MET_IMP_WM_E11D: ImperialRifle_Base
	{
		author="WarMantle Armory";
		scope=2;
		model="WarMantle\WM_Imperial_Weapons\E11D\E11D.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\WarMantle\WM_Imperial_Weapons\E11\anims\E11_handanim.rtm"
		};
		reloadAction="ReloadOverheat_E11";
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\E11D_x_CA.paa";
		magazines[]=
		{
			"MET_E11D_red_mag"
		};
        magazineWell[]=
        {
            "MET_E11D_MagWell"
        };
		displayname="[Imp] E-11D";
		descriptionShort="Imperial Blaster Rifle";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="The BlasTech E-11 blaster rifle, also referred to as the E-11 BlasTech Standard Imperial Sidearm or the Stormtrooper Armament Blaster Rifle (BlasTech E-11)[2], was a blaster rifle used during the time of the Galactic Republic, and manufactured by BlasTech Industries during the Galactic Civil War. It was the standard blaster rifle of the Imperial stormtroopers. A powerful, light and compact weapon, the E-11 was used widely through the galaxy";
		};
		reloadMagazineSound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\reload",
			1,
			1,
			30
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
			class IDA_E11D_Scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.05;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
			};
		};
		soundBullet[]={};
		drySound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\wpn_empty.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E11D_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.2;
			dispersion=0.0009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E11D_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.2;
			dispersion=0.0009;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
		};
		class AnimationSources: AnimationSources
		{
		};
	};
	class MET_IDA_E11D: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="IDA_E11D_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="MET_IDA_E11D";
		displayName="[Imp] E-11D Heavy Blaster Carbine";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11D\E11D_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11D\Model\IDA_E11D.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\E11D.rtm"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		magazines[]=
		{
			"MET_E11D_red_mag"
		};
        magazineWell[]=
        {
            "MET_E11D_MagWell"
        };
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.2;
			dispersion=0.0009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11D.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\E11D.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.2;
			dispersion=0.0009;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		irLaserPos="IrLaserPos";
		irLaserEnd="IrLaserEnd";
		irDistance=5;
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
			class IDA_E11D_Scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.05;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	/*========================================================================================================================================
    ========================================= E-22 ===========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_E22: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		model="\JMSLLTE_weapons\e22\e22.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_e22.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\E22\ico_e22.paa";
		magazines[]=
		{
			"MET_E22_red_mag"
		};
        magazineWell[]=
        {
            "MET_E22_MagWell"
        };
		displayname="[Imp] E-22 blaster rifle";
		author="JMax";
		descriptionShort="Double-barreled blaster rifle<br />Ammo: E-22 Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		class Library
		{
			libTextDesc="The E-22 blaster rifle was a reciprocating, double-barrelled blaster more powerful than the standard E-11 blaster rifle used by the Galactic Empire's stormtroopers. The E-22 saw use during the Age of the Empire and was commonly used by coastal defender stormtroopers stationed at the top secret Imperial security complex on the tropical planet Scarif.";
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_met_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E22_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.15;
			dispersion=0.0004;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E22_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			textureType="dual";
			reloadTime=0.0666666666666667
			dispersion=0.0004;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
			burst=2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_E22_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.15;
			dispersion=0.0004;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight"
				};
			};
		};
	};
	class MET_IDA_E22: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="MET_IDA_E22_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="MET_IDA_E22";
		displayName="[Imp] E-22";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E22\E22_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\E22\Model\IDA_E22.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\E22.rtm"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		magazines[]=
		{
			"MET_E22_red_mag"
		};
        magazineWell[]=
        {
            "MET_E22_MagWell"
        };
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.15;
			dispersion=0.0004;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			textureType="dual";
			reloadTime=0.0666666666666667
			dispersion=0.0004;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
			burst=2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E22.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.15;
			dispersion=0.0004;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=50;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_E11_Scope"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_E11_Scope";
			};
		};
	};
	class IDA_Stun_Muzzle;
	class MET_IDA_E22_Stun: MET_IDA_E22
	{
		IDA_StunWeapon="MET_IDA_E22";
		scope=1;
		canShootInWater=0;
		fireLightDiffuse[]={0,0,1};
		baseWeapon="MET_IDA_E22_Stun";
		magazines[]=
		{
			"IDA_Stun_Cell"
		};
		muzzles[]=
		{
			"Stun"
		};
		class Stun: IDA_Stun_Muzzle
		{
		};
		weaponInfoType="RscWeaponZeroing";
	};
	/*========================================================================================================================================
    ========================================= DLT-19 =========================================================================================
    =========================================================================================================================================*/
    class MET_IMP_DLT19BlasterRifle: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		baseWeapon="MET_IMP_DLT19BlasterRifle";
		model="JMSLLTE_weapons\DLT19\DLT19.p3d";
		author="JMax";
		_generalMacro="JMSLLTE_DLT19BlasterRifle";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_dlt19_new.rtm"
		};
		reloadAction="GestureReloadM200";
		picture="\JMSLLTE_weapons\DLT19\ico_DLT19.paa";
		magazines[]=
		{
			"MET_dlt19_red_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19_MagWell"
		};
		displayname="[Imp] DLT-19 heavy blaster rifle";
		descriptionShort="Heavy blaster rifle<br />Ammo: DLT-19 Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		deployedPivot="bipod";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		class Library
		{
			libTextDesc="...";
		};
		class GunParticles
		{
			class RifleAmmoCloud
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RifleAssaultCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_large_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"SlowAuto",
			"MediumAuto",
			"FastAuto",
			"close",
			"short",
			"medium"
		};
		class SlowAuto: Mode_FullAuto
		{
			reloadTime=0.1;
			dispersion=0.00079;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			textureType="burst";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DLT19_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
		};
		class MediumAuto: SlowAuto
		{
			reloadTime=0.0666666666666667;
			dispersion=0.00079;
			textureType="fullAuto";
		};
		class FastAuto: SlowAuto
		{
			reloadTime=0.05;
			dispersion=0.00079;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.02;
		fireLightDiffuse[]={233,124,113};
		fireLightAmbient[]={0,0,0};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		class close: SlowAuto
		{
			showToPlayer=0;
			burst=3;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=200;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=100;
			midRangeProbab=0.89999998;
			maxRange=200;
			maxRangeProbab=0.1;
		};
		class short: close
		{
			showToPlayer=0;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=400;
			burst=3;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		class medium: close
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFireDistance=600;
			aiRateOfFire=2.5;
			minRange=300;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=700;
			maxRangeProbab=0.0099999998;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
		};
		class AnimationSources: AnimationSources
		{
			class revolving
			{
				source="revolving";
				weapon="JMSLLTE_DLT19BlasterRifle";
			};
		};
	};
	class MET_DLT19_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_dlt19_red_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19_MagWell"
		};
		reloadAction="3AS_GestureReloadDLT19";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="MET_recoil_DC15L";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=-1;
		maxZeroing=100;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"MET_Imp_Optic_1"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"3AS_Imp_Light_DLT19",
					"3AS_Imp_Laser_DLT19"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
					"3AS_Imp_Bipod_DLT19"
				};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="DLT-19, 3rd Army Studios";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3as\3AS_Weapons\Imperial\anims\DLT19hand.rtm"
		};
		selectionFireAnim="zasleh";
		fireLightDiffuse[]={233,124,113};
		fireLightIntensity=0.02;
		flash="gunfire";
		flashSize=0.1;
		modes[]=
		{
			"SlowAuto",
			"MediumAuto",
			"FastAuto"
		};
		class SlowAuto: Mode_FullAuto
		{
			reloadTime=0.15;
			dispersion=0.00079;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			textureType="burst";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DLT19_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DLT19_Shot_SoundSet"
				};
			};
		};
		class MediumAuto: SlowAuto
		{
			reloadTime=0.075;
			dispersion=0.00079;
			textureType="fullAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class FastAuto: SlowAuto
		{
			reloadTime=0.05;
			dispersion=0.00079;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		aiDispersionCOEFY=6;
		aiDispersionCOEFX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",
			1,
			1,
			30
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_DLT19: MET_DLT19_Base_F
	{
		scope=2;
		displayName="[Imp] DLT-19 Heavy Blaster Rifle";
		model="\3AS\3AS_Weapons\Imperial\3AS_DLT19.p3d";
		picture="\3AS\3AS_Weapons\Imperial\data\UI\3as_dlt19.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
	class MET_WM_DLT19: arifle_MX_Base_F
	{
		author="WarMantle Armory";
		scope=2;
		displayName="[Imp] DLT-19";
		descriptionShort="";
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\DLT19_UI_CA.paa";
		model="WarMantle\WM_Imperial_Weapons\DLT19\DLT19.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WarMantle\WM_Imperial_Weapons\data\anim\dlt.rtm"
		};
		reloadAction="ReloadOverheat_DLT";
		magazines[]=
		{
			"WM_DLT19_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19_MagWell"
		};
		modes[]=
		{
			"SlowAuto",
			"MediumAuto",
			"FastAuto"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		drySound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\wpn_empty.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		deployedPivot="bipod";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\overheat",
			1,
			1,
			30
		};
		class SlowAuto: Mode_FullAuto
		{
			reloadTime=0.15;
			dispersion=0.00079;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			textureType="burst";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DLT19_Shot_SoundSet"
				};
			};
		};
		class MediumAuto: SlowAuto
		{
			reloadTime=0.075;
			dispersion=0.00079;
			textureType="fullAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class FastAuto: SlowAuto
		{
			reloadTime=0.05;
			dispersion=0.00079;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close: SlowAuto
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class MET_WM_DLT19_Wood: MET_WM_DLT19
	{
		author="WarMantle Armory";
		displayname="[Imp] DLT-19 (Wood)";
		model="WarMantle\WM_Imperial_Weapons\DLT19\DLT19_Wood.p3d";
		scope=2;
	};
	class MET_IDA_DLT19: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="MET_IDA_DLT19_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="MET_IDA_DLT19";
		displayName="[Imp] DLT-19 Blaster Rifle";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\DLT19\DLT19_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\DLT19\Model\IDA_DLT19.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\DLT19.rtm"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="MET_recoil_DC15L";
		magazines[]=
		{
			"MET_dlt19_red_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19_MagWell"
		};
		modes[]=
		{
			"SlowAuto",
			"MediumAuto",
			"FastAuto"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		class SlowAuto: Mode_FullAuto
		{
			reloadTime=0.15;
			dispersion=0.00079;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			soundContinuous=0;
			soundBurst=0;
			textureType="burst";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
		};
		class MediumAuto: SlowAuto
		{
			reloadTime=0.075;
			dispersion=0.00079;
			textureType="fullAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class FastAuto: SlowAuto
		{
			reloadTime=0.05;
			dispersion=0.00079;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		distanceZoomMin=400;
		distanceZoomMax=400;
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\Indecisive_Armoury_Weapons_Imperial\Data\LowPower_Scope\IDA_LowPower_Scope_Red.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
			class IDA_DLT19_Scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.125;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	/*========================================================================================================================================
    ========================================= DLT-19X ========================================================================================
    =========================================================================================================================================*/
    class MET_IMP_DLT19xRifle: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		model="JMSLLTE_weapons\DLT19\DLT19x.p3d";
		picture="\JMSLLTE_weapons\DLT19\ico_DLT19.paa";
		magazines[]=
		{
			"MET_Red_dlt19x_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19x_MagWell"
		};
		displayname="[Imp] DLT-19X";
		descriptionShort="Single shot targeting blaster<br />Ammo: DLT-19x Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		reloadAction="ReloadMagazine";
		recoil="MET_recoil_Dlt19X";
		maxZeroing=2200;
		cursor="srifle";
		maxRecoilSway=0.029999999;
		swayDecaySpeed=1.25;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_dlt19_new.rtm"
		};
		class GunParticles
		{
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		distanceZoomMin=100;
		distanceZoomMax=550;
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source="ammorandom";
				weapon="JMSLLTE_DLT19xRifle";
			};
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_large_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.000000000000000001;
			reloadTime=0.8;
			soundContinuous=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DLT19X_Shot_SoundSet",
					"DMR06_tail_SoundSet",
					"DMR06_InteriorTail_SoundSet"
				};
			};
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.40000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.2;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2100;
			maxRangeProbab=0.30000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		inertia=1.2;
		dexterity=1;
		initSpeed=2000;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=280;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_a280_bl_Scope",
					"MET_IMP_a280c_bl_Scope",
					"MET_IMP_a300_bl_Scope",
					"MET_IMP_a280_holo_Scope",
					"MET_IMP_DC15a_bl_Scope",
					"MET_IMP_dlt19x_bl_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
		};
	};
	class MET_WM_DLT19X: arifle_MX_Base_F
	{
		author="WarMantle Armory";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_frieditem="WM_DLT19X_Fried";
		JLTS_repairTime=33;
		displayname="[Imp] DLT-19X";
		scope=2;
		magazines[]=
		{
			"MET_Red_dlt19x_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19x_MagWell"
		};
		modes[]=
		{
			"Single"
		};
		cursor="srifle";
		recoil="MET_recoil_Dlt19X";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		model="WarMantle\WM_Imperial_Weapons\DLT19\DLT19X.p3d";
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\DLT19X_UI_CA.paa";
		reloadAction="ReloadOverheat_DLT";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=-1;
		maxZeroing=100;
		deployedPivot="bipod";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		reloadMagazineSound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\overheat",
			1,
			1,
			30
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
		weaponInfoType="RscOptics_sos";
		class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					maxZeroing=2000;
					opticsZoomMin=0.0037499999;
					opticsZoomMax=0.1;
					opticsZoomInit=0.75;
					distanceZoomMin=2000;
					distanceZoomMax=2000;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_red_full.p3d"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=280;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
					"WM_DLT_Bipod"
				};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WarMantle\WM_Imperial_Weapons\data\anim\dlt.rtm"
		};
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=3;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DLT19X_Shot_SoundSet"
				};
			};
			dispersion=0.000000000000000001;
			reloadTime=0.8;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
		class single_medium_optics1: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DLT19X_Shot_SoundSet"
				};
			};
			dispersion=0.00012;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=650;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DLT19X_Shot_SoundSet"
				};
			};
			dispersion=0.00012;
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
	};
	class MET_3AS_DLT19X_Base_F: Rifle_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_Red_dlt19x_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19x_MagWell"
		};
		reloadAction="3AS_GestureReloadDLT19";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="MET_recoil_Dlt19X";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=-1;
		maxZeroing=100;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"3AS_Imp_Muzzle_DLT19x"
				};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="3as\3AS_Weapons\Data\UI\3as_ui_muzzle.paa";
				iconPinpoint="Center";
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"MET_Imp_Optic_1",
					"MET_Imp_Optic_2",
					"MET_Imp_Optic_3",
					"MET_Imp_Optic_E11",
					"MET_Imp_Optic_DLT19x"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"3AS_Imp_Light_DLT19",
					"3AS_Imp_Laser_DLT19"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]=
				{
					"3AS_Imp_Bipod_DLT19"
				};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="DLT-19X, 3rd Army Studios";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\3as\3AS_Weapons\Imperial\anims\DLT19xhand.rtm"
		};
		selectionFireAnim="zasleh";
		fireLightDiffuse[]={233,124,113};
		fireLightIntensity=0.02;
		flash="gunfire";
		flashSize=0.1;
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.000000000000000001;
			reloadTime=0.8;
			minRange=0;
			minRangeProbab=0.5;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DLT19X_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_DLT19X_Shot_SoundSet"
				};
			};
		};
		aiDispersionCOEFY=6;
		aiDispersionCOEFX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",
			1,
			1,
			30
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_3AS_DLT19X: MET_3AS_DLT19X_Base_F
	{
		scope=2;
		displayName="[Imp] DLT-19x Targeting Blaster";
		model="\3AS\3AS_Weapons\Imperial\3AS_DLT19X.p3d";
		picture="\3AS\3AS_Weapons\Imperial\data\UI\3as_dlt19x.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=280;
		};
	};
	class IDA_773Firepuncher
	{
		class WeaponSlotsInfo;
	};
	class MET_IDA_774CX: IDA_773Firepuncher
	{
		IDA_StunWeapon="MET_IDA_774CX_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		displayName="[Imp] 774-CX Sniper Blaster Rifle";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\774CX\774CX_ui.paa";
		model="\Indecisive_Armoury_Weapons_IMPERIAL\Data\774CX\Model\IDA_774CX.p3d";
		baseWeapon="MET_IDA_774CX";
		cursor="srifle";
		recoil="MET_recoil_VK38X";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\Rifles\TRG20\Data\Anim\TRG_21G.rtm"
		};
		magazines[]=
		{
			"MET_774CX_mag"
		};
		magazineWell[]={};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		fireLightDiffuse[]={1,0,0};
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher.ogg",
					5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher.ogg",
					5,
					1,
					1000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\773Firepuncher.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			dispersion=0.0000001;
			soundContinuous=0;
			reloadTime=0.2;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		opticsZoomMin=0.1;
		opticsZoomMax=2;
		class OpticsModes
		{
			class T21BSturm
			{
				opticsID=1;
				opticsDisplayName="WFOV";
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera3",
					"OpticsBlur2"
				};
				opticsZoomMin=0.02;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;					
				distanceZoomMin=1000;
				distanceZoomMax=100;
				modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
				weaponInfoType="RscWeaponEmpty";
				discreteInitIndex=0;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={1,2};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"Optic_ACO"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
				compatibleItems[]=
				{
					"bipod_01_F_blk"
				};
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class MET_IDA_774CX_Stun: MET_IDA_774CX
	{
		IDA_StunWeapon="MET_IDA_774CX";
		scope=1;
		canShootInWater=0;
		fireLightDiffuse[]={0,0,1};
		baseWeapon="MET_IDA_774CX_Stun";
		magazines[]=
		{
			"IDA_Stun_Cell"
		};
		muzzles[]=
		{
			"Stun"
		};
		class Stun: IDA_Stun_Muzzle
		{
		};
		weaponInfoType="RscWeaponZeroing";
	};
	/*========================================================================================================================================
    ========================================= DLT-19D ========================================================================================
    =========================================================================================================================================*/
    class MET_IMP_DLT19dRifle: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		model="JMSLLTE_weapons\DLT19\DLT19d.p3d";
		picture="\JMSLLTE_weapons\DLT19\ico_DLT19d.paa";
		magazines[]=
		{
			"MET_Red_dlt19d_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19d_MagWell"
		};
		displayname="[Imp] DLT-19D";
		descriptionShort="Sniper rifle<br />Ammo: DLT-19d Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		reloadAction="ReloadMagazine";
		recoil="MET_recoil_Dlt19D";
		maxZeroing=2200;
		cursor="srifle";
		maxRecoilSway=0.029999999;
		swayDecaySpeed=1.25;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_dlt19_new.rtm"
		};
		class GunParticles
		{
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		distanceZoomMin=100;
		distanceZoomMax=550;
		optics=1;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
		thermalMode[]={4,5};
		useModelOptics=1;
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		opticsZoomMin=0.1;
		opticsZoomMax=2.3;
		class OpticsModes
		{
			class DLT19xscope
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsFlare=0;
				modelOptics="\A3\Weapons_F\empty";
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				weaponInfoType="";
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class DLT19xSturm: DLT19xscope
			{
				opticsID=2;
				opticsDisplayName="WFOV";
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				maxZeroing=2000;
				opticsZoomMin=0.0037499999;
				opticsZoomMax=0.1;
				opticsZoomInit=0.75;
				distanceZoomMin=2000;
				distanceZoomMax=2000;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
				weaponInfoType="RscWeaponEmpty";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
				iconPicture="";
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source="ammorandom";
				weapon="JMSLLTE_DLT19dRifle";
			};
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_large_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.0000000000000001;
			soundContinuous=0;
			reloadTime=1.4;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DLT19D_Shot_SoundSet",
					"DMR06_tail_SoundSet",
					"DMR06_InteriorTail_SoundSet"
				};
			};
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DLT19D_Shot_SoundSet",
					"DMR06_tail_SoundSet",
					"DMR06_InteriorTail_SoundSet"
				};
			};
			soundContinuous=0;
			ffCount=1;
			reloadTime=0.1;
			recoil="recoil_auto_mk200";
			recoilProne="recoil_auto_prone_mk200";
			dispersion=0.0021599999;
			soundBurst=0;
			showToPlayer=1;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=25;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.40000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.2;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2100;
			maxRangeProbab=0.30000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		inertia=0.60000002;
		dexterity=1;
		initSpeed=2000;
	};
	class MET_WM_DLT19D: arifle_MX_Base_F
	{
		author="WarMantle Armory";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		_friedItem="WM_DLT19D_Fried";
		_repairTime=33;
		displayname="[Imp] DLT-19D";
		scope=2;
		magazines[]=
		{
			"MET_Red_dlt19d_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19d_MagWell"
		};
		modes[]=
		{
			"Single"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		model="WarMantle\WM_Imperial_Weapons\DLT19\DLT19D.p3d";
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\dlt19d_x_ca.paa";
		reloadAction="ReloadOverheat_DLT";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=-1;
		maxZeroing=100;
		deployedPivot="bipod";
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		reloadMagazineSound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\overheat",
			1,
			1,
			30
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
		weaponInfoType="RscOptics_sos";
		class OpticsModes
		{
			class Snip
			{
				opticsID=2;
				opticsDisplayName="WFOV";
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				maxZeroing=2000;
				opticsZoomMin=0.0037499999;
				opticsZoomMax=0.1;
				opticsZoomInit=0.75;
				distanceZoomMin=2000;
				distanceZoomMax=2000;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
				weaponInfoType="RscWeaponEmpty";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=800;
		descriptionShort="";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WarMantle\WM_Imperial_Weapons\data\anim\dlt.rtm"
		};
		selectionFireAnim="zasleh";
		flash="gunfire";
		flashSize=3;
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DLT19D_Shot_SoundSet"
				};
			};
			reloadTime=1.4;
			dispersion=0.000000000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
		};
		class single_medium_optics1: Single
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DLT19D_Shot_SoundSet"
				};
			};
			dispersion=0.00073000003;
			requiredOpticType=1;
			minRange=2;
			minRangeProbab=0.2;
			midRange=450;
			midRangeProbab=0.69999999;
			maxRange=650;
			maxRangeProbab=0.2;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
		class single_far_optics2: single_medium_optics1
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DLT19D_Shot_SoundSet"
				};
			};
			dispersion=0.00073000003;
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.2;
			midRange=550;
			midRangeProbab=0.69999999;
			maxRange=800;
			maxRangeProbab=0.050000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=800;
		};
	};
	class MET_IDA_DLT19D: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="MET_IDA_DLT19D_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="MET_IDA_DLT19D";
		displayName="[Imp] DLT-19D Heavy Blaster Rifle";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\DLT19\DLT19_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\DLT19D\Model\IDA_DLT19D.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\DLT19.rtm"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		recoil="MET_recoil_Dlt19D";
		magazines[]=
		{
			"MET_Red_dlt19d_mag"
		};
		magazineWell[]=
		{
			"MET_dlt19d_MagWell"
		};
		modes[]=
		{
			"Single"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		class EGLM: UGL_F
		{
			displayName="Rifle grenade";
			descriptionShort="";
			weaponInfoType="RscWeaponZeroing";
			magazines[]=
			{
				"IDA_HE_RifleGrenade"
			};
			recoil="IDA_recoil_ScatterBlaster";
			reloadAction="GestureReloadMXUGL";
			magazineWell[]={};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19D.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19D.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19D.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19D.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19D.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\DLT19D.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			dispersion=0.0000000000000001;
			soundContinuous=0;
			reloadTime=1.4;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
			class Snip
			{
				opticsID=2;
				opticsDisplayName="WFOV";
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				maxZeroing=2000;
				opticsZoomMin=0.0037499999;
				opticsZoomMax=0.1;
				opticsZoomInit=0.75;
				distanceZoomMin=2000;
				distanceZoomMax=2000;
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]={0,1};
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
				modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
				weaponInfoType="RscWeaponEmpty";
			};
		};
		class FlashLight
		{
			color[]={180,160,130};
			ambient[]={0.89999998,0.80000001,0.69999999};
			intensity=100;
			size=1;
			innerAngle=5;
			outerAngle=100;
			coneFadeCoef=10;
			position="LightPos";
			direction="LightEnd";
			useFlare=1;
			flareSize=1.5;
			flareMaxDistance=100;
			dayLight=0;
			class Attenuation
			{
				start=0;
				constant=0.5;
				linear=0.1;
				quadratic=0.2;
				hardLimitStart=27;
				hardLimitEnd=34;
			};
			scale[]={0};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.2,0.80000001};
				iconScale=0.30000001;
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	/*========================================================================================================================================
    ========================================= DLT-20A ========================================================================================
    =========================================================================================================================================*/
    class MET_IMP_dlt20a: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		model="JMSLLTE_weapons\a280\DLT20A.p3d";
		picture="\JMSLLTE_weapons\a280\ico_DLT20A.paa";
		magazines[]=
		{
			"MET_Green_dlt20a_mag"
		};
		magazineWell[]=
		{
			"MET_dlt20a_MagWell"
		};
		displayname="[Imp] DLT-20A Ionized Sniper Rifle";
		descriptionShort="Single shot targeting blaster<br />Ammo: DLT-20a Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		reloadAction="ReloadMagazine";
		recoil="MET_recoil_Dlt19D";
		maxZeroing=2200;
		cursor="srifle";
		maxRecoilSway=0.029999999;
		swayDecaySpeed=1.25;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a280c.rtm"
		};
		class GunParticles
		{
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		distanceZoomMin=100;
		distanceZoomMax=550;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_IMP_a280c_bl_Scope";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_a180_bl_Scope",
					"MET_IMP_a280_bl_Scope",
					"MET_IMP_a280c_bl_Scope",
					"MET_IMP_a300_bl_Scope",
					"MET_IMP_a280_holo_Scope",
					"MET_IMP_DC15a_bl_Scope",
					"MET_IMP_rt97c_bl_Scope",
					"MET_IMP_dlt19x_bl_Scope",
					"MET_IMP_m45_bl_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source="ammorandom";
				weapon="JMSLLTE_dlt20a";
			};
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_large_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.0000000000001;
			soundContinuous=0;
			reloadTime=1.2;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DLT20A_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.40000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.2;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2100;
			maxRangeProbab=0.30000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		inertia=1.2;
		dexterity=1;
		initSpeed=2000;
	};
	/*========================================================================================================================================
    ========================================= EE-3 ===========================================================================================
    =========================================================================================================================================*/
	class MET_ee3: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_ee3";
		model="\JMSLLTE_weapons\ee3\ee3.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_ee3.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\ee3\ico_ee3.paa";
		magazines[]=
		{
			"MET_ee3_red_mag"
		};
		magazineWell[]=
		{
			"MET_ee3_MagWell"
		};
		displayname="[Imp] EE-3";
		descriptionShort="Blaster rifle<br />Ammo: EE3 Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
		class Library
		{
			libTextDesc="";
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_met_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"Burst",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_EE3_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_sdar";
			recoilProne="recoil_single_prone_sdar";
			reloadTime=0.08;
			dispersion=0.0002;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_EE3_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			burst=3;
			reloadTime=0.08;
			recoil="recoil_burst_sdar";
			recoilProne="recoil_burst_prone_sdar";
			dispersion=0.0002;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=10;
			midRangeProbab=0.69999999;
			maxRange=15;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		inertia=0.15000001;
		dexterity=1.7;
		initSpeed=300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_ee3_bl_Scope",
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_IMP_ee3_bl_Scope";
			};
		};
	};
	class MET_IMP_ee4: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_ee4";
		model="\JMSLLTE_weapons\ee3\ee4.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_ee4.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\ee3\ico_ee4.paa";
		recoil="MET_recoil_CinCar";
		magazines[]=
		{
			"MET_ee4_red_mag"
		};
		magazineWell[]=
		{
			"MET_ee3_MagWell"
		};
		displayname="[Imp] EE-4";
		descriptionShort="Blaster rifle<br />Ammo: EE3 Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
		class Library
		{
			libTextDesc="";
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_met_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_EE4_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.05;
			dispersion=0.00066;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_EE4_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.03;
			dispersion=0.00066;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
			burst=5;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_EE4_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.05;
			dispersion=0.00066;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		inertia=0.5;
		dexterity=1.7;
		initSpeed=300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_ee4_bl_Scope",
					"MET_IMP_ee4m_bl_Scope",
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
		};
	};
	/*========================================================================================================================================
    ========================================= RT-97C =========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_rt97cBlasterRifle: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		baseWeapon="MET_IMP_rt97cBlasterRifle";
		model="JMSLLTE_weapons\rt97c\rt97c.p3d";
		author="JMax";
		_generalMacro="JMSLLTE_rt97cBlasterRifle";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_rt97.rtm"
		};
		reloadAction="GestureReloadM200";
		picture="\JMSLLTE_weapons\rt97c\ico_rt97c.paa";
		magazines[]=
		{
			"MET_rt97c_red_mag"
		};
		magazineWell[]=
		{
			"MET_rt97c_MagWell"
		};
		displayname="[Imp] RT-97C";
		descriptionShort="Heavy blaster rifle<br />Ammo: RT-97C Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		deployedPivot="bipod";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		class Library
		{
			libTextDesc="...";
		};
		class GunParticles
		{
			class RifleAmmoCloud
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RifleAssaultCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_met_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		recoil="recoil_zafir";
		optics=1;
		visionMode[]=
		{
			"Normal"
		};
		thermalMode[]={0,1};
		useModelOptics=1;
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		opticsZoomMin=0.1;
		opticsZoomMax=2.3;
		class OpticsModes
		{
			class RT97scope
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsFlare=0;
				modelOptics="\A3\Weapons_F\empty";
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				weaponInfoType="";
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class RT97Sturm: RT97scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				memoryPointCamera="opticView";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				opticsZoomMin=0.0099999998;
				opticsZoomMax=0.041999999;
				opticsZoomInit=0.041999999;
				discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				distanceZoomMin=300;
				distanceZoomMax=300;
				discretefov[]={0.041999999,0.0099999998};
				discreteInitIndex=0;
				modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
				weaponInfoType="RscWeaponEmpty";
			};
		};
		modes[]=
		{
			"slowerAuto",
			"Auto",
			"fullerAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		class Auto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_RT97c_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.05;
			magazines[]=
			{
				//"MET_blaster_battery",
				"MET_blaster_battery_Red",
				"MET_blaster_battery_Green",
				"MET_blaster_battery_Yellow"
			};
			dispersion=0.004;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class fullerAuto: Auto
		{
			reloadTime=0.0375;
			dispersion=0.004;
			textureType="fastAuto";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class slowerAuto: Auto
		{
			reloadTime=0.075;
			dispersion=0.004;
			textureType="burst";
			minRangeProbab=0;
			midRangeProbab=0;
			maxRangeProbab=0;
		};
		class close: Single
		{
			showToPlayer=0;
			burst=3;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=200;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=100;
			midRangeProbab=0.89999998;
			maxRange=200;
			maxRangeProbab=0.1;
		};
		class short: close
		{
			showToPlayer=0;
			aiRateOfFire=1.5;
			aiRateOfFireDistance=400;
			burst=3;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.60000002;
			maxRange=400;
			maxRangeProbab=0.050000001;
		};
		class medium: close
		{
			showToPlayer=0;
			burst=8;
			aiRateOfFireDistance=600;
			aiRateOfFire=2.5;
			minRange=400;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=600;
			maxRangeProbab=0.0099999998;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_rt97c_bl_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_IMP_rt97c_bl_Scope";
			};
		};
		class AnimationSources: AnimationSources
		{
			class revolving
			{
				source="revolving";
				weapon="JMSLLTE_rt97cBlasterRifle";
			};
		};
	};
	/*========================================================================================================================================
    ========================================= T-21 ===========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_T21BlasterRifle: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		model="\JMSLLTE_weapons\T21\T21.p3d";
		_generalMacro="JMSLLTE_T21BlasterRifle";
		author="JMax";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_t21.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\T21\ico_T21.paa";
		magazines[]=
		{
			"MET_T21_red_mag"
		};
		magazineWell[]=
		{
			"MET_T21_MagWell"
		};
		displayname="[Imp] T-21";
		descriptionShort="Light repeating blaster rifle<br />Ammo: T-21 Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		muzzles[]=
		{
			"this"
		};
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\JMSLLTE_weapons\t21\T_T21_black_co.paa"
		};
		class Library
		{
			libTextDesc="...";
		};
		class GunParticles
		{
			class RifleAmmoCloud
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="RifleAssaultCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_mid_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_T21_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			reloadTime=0.3;
			dispersion=0.00005;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_T21_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			reloadTime=0.3;
			dispersion=0.00005;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_T21_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			soundContinuous=0;
			ffCount=1;
			reloadTime=0.3;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			dispersion=0.00005;
			soundBurst=0;
			showToPlayer=1;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.60000002;
			maxRange=500;
			maxRangeProbab=0.1;
			aiRateOfFire=5;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class short: close
		{
			minRange=2;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.80000001;
			maxRange=500;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
		};
		class medium: close
		{
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
		};
		class AnimationSources: AnimationSources
		{
			class revolving
			{
				source="revolving";
				weapon="MET_IMP_T21BlasterRifle";
			};
		};
	};
	class MET_IMP_T21BlasterRifle_old: MET_IMP_T21BlasterRifle
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_T21BlasterRifle_old";
		hiddenSelectionsTextures[]=
		{
			"\JMSLLTE_weapons\t21\T_T21_co.paa"
		};
		displayname="[Imp] T-21 (old)";
	};
	class MET_WM_T21: arifle_MX_Base_F
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=0;
		JLTS_frieditem="WM_T21_Fried";
		JLTS_repairTime=33;
		author="WarMantle Armory";
		scope=2;
		displayName="[Imp] T21";
		descriptionShort="$";
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\t21_x_CA.paa";
		model="WarMantle\WM_Imperial_Weapons\T21\T21.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"WarMantle\WM_Imperial_Weapons\data\anim\t21.rtm"
		};
		reloadAction="ReloadOverheat_T21";
		magazines[]=
		{
			"WM_T21_mag"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"Burst",
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		drySound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\wpn_empty.wss",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		deployedPivot="bipod";
		hasBipod=1;
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",
			"db-3",
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",
			"db-3",
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"WarMantle\WM_Imperial_Weapons\data\sfx\overheat",
			1,
			1,
			30
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"T21_Shot_SoundSet"
				};
			};
			reloadTime=0.3;
			dispersion=0.00005;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"T21_Shot_SoundSet"
				};
			};
			reloadTime=0.3;
			dispersion=0.00005;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class manual: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"T21_Shot_SoundSet"
				};
			};
			reloadTime=0.3;
			dispersion=0.00005;
			soundContinuous=0;
			soundBurst=0;
			minRange=0;
			minRangeProbab=0.30000001;
			midRange=5;
			midRangeProbab=0.69999999;
			maxRange=10;
			maxRangeProbab=0.039999999;
			showToPlayer=1;
		};
		class close: manual
		{
			burst=10;
			aiRateOfFire=0.5;
			aiRateOfFireDistance=50;
			minRange=10;
			minRangeProbab=0.050000001;
			midRange=20;
			midRangeProbab=0.69999999;
			maxRange=50;
			maxRangeProbab=0.039999999;
			showToPlayer=0;
		};
		class short: close
		{
			burst=8;
			aiRateOfFire=2;
			aiRateOfFireDistance=300;
			minRange=50;
			minRangeProbab=0.050000001;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.039999999;
		};
		class medium: close
		{
			burst=7;
			aiRateOfFire=4;
			aiRateOfFireDistance=600;
			minRange=200;
			minRangeProbab=0.050000001;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType=1;
			showToPlayer=0;
			burst=3;
			aiRateOfFire=10;
			aiRateOfFireDistance=1000;
			minRange=300;
			minRangeProbab=0.050000001;
			midRange=500;
			midRangeProbab=0.40000001;
			maxRange=650;
			maxRangeProbab=0.0099999998;
		};
		class far_optic2: far_optic1
		{
			burst=3;
			requiredOpticType=2;
			minRange=400;
			minRangeProbab=0.050000001;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.0099999998;
			aiRateOfFire=10;
			aiRateOfFireDistance=900;
		};
		aiDispersionCoefY=24;
		aiDispersionCoefX=21;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class MET_IDA_T21: arifle_MX_Base_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="MET_IDA_T21_Stun";
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		displayName="[Imp] T-21 Heavy Repeating Blaster";
		descriptionShort="";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\T21\T21_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\T21\Model\IDA_T21.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"Indecisive_Armoury_Anims\Imperial\T21.rtm"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		magazines[]=
		{
			"MET_T21_red_mag"
		};
		magazineWell[]=
		{
			"MET_T21_MagWell"
		};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		muzzles[]=
		{
			"this"
		};
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			reloadTime=0.3;
			dispersion=0.00005;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			reloadTime=0.3;
			dispersion=0.00005;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					1.015,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					0.98500001,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					1.01,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1.25,
					0.995,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\IMPERIAL\T21.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			reloadTime=0.3;
			dispersion=0.00005;
			burst=1;
			soundContinuous="false";
			soundBurst="true";
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		distanceZoomMin=400;
		distanceZoomMax=400;
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="\Indecisive_Armoury_Weapons_Imperial\Data\LowPower_Scope\IDA_LowPower_Scope_Red.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
			class IDA_T21_Scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.125;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]=
				{
					"acc_flashLight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				directionName="Konec hlavne";
				effectName="RifleAssaultCloud";
				positionName="Usti hlavne";
			};
		};
	};
	class MET_IMP_T21BBlasterRifle: MET_IMP_T21BlasterRifle
	{
		scope=2;
		author="JMax";
		model="\JMSLLTE_weapons\T21\T21B.p3d";
		picture="\JMSLLTE_weapons\T21\ico_T21b.paa";
		magazines[]=
		{
			"MET_T21B_mag"
		};
		magazineWell[]=
		{
			"MET_T21B_MagWell"
		};
		displayname="[Imp] T-21B";
		descriptionShort="Single shot targeting blaster<br />Ammo: T-21B Energy cell<br />Manufactured by BlasTech Industries";
		maxZeroing=2000;
		cursor="srifle";
		class GunParticles
		{
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		distanceZoomMin=100;
		distanceZoomMax=550;
		optics=1;
		visionMode[]=
		{
			"Normal"
		};
		thermalMode[]={0,1};
		useModelOptics=1;
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		opticsZoomMin=0.1;
		opticsZoomMax=2;
		class OpticsModes
		{
			class T21Bscope
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsFlare=0;
				modelOptics="\A3\Weapons_F\empty";
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				weaponInfoType="";
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
				cameraDir="";
			};
			class T21BSturm: T21Bscope
			{
				opticsDisplayName="WFOV";
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera3",
					"OpticsBlur2"
				};
				opticsZoomMin=0.02;
				opticsZoomMax=0.0625;
				opticsZoomInit=0.0625;					
				distanceZoomMin=1000;
				distanceZoomMax=100;
				modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
				weaponInfoType="RscWeaponEmpty";
				discreteInitIndex=0;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[]={1,2};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source="ammorandom";
				weapon="JMSLLTE_T21BBlasterRifle";
			};
		};
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		class Single: Mode_SemiAuto
		{
			dispersion=0.0000001;
			soundContinuous=0;
			reloadTime=0.2;
			recoil="recoil_single_ebr";
			recoilProne="recoil_single_prone_ebr";
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_T21B_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.40000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.2;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2100;
			maxRangeProbab=0.30000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		inertia=1.2;
		dexterity=1;
		initSpeed=2000;
	};
	/*========================================================================================================================================
    ========================================= TL-50 ==========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_tl50: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_tl50";
		model="\JMSLLTE_weapons\tl50\tl50.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_tl50.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\tl50\ico_tl50.paa";
		magazines[]=
		{
			"MET_TL50_light_yellow_mag"
		};
		displayname="[Imp] TL-50";
		recoil="MET_recoil_DC15L";
		descriptionShort="Blaster rifle<br />Ammo: TL50 Energy cell";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
		class Library
		{
			libTextDesc="";
		};
		class GunParticles
		{
			/*class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};*/
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_large_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={.839,0.749,0.486};
		fireLightAmbient[]={0,0,0};
		selectionFireAnim="muzzleFlash";
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_TL50_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=9.9999997e-005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};class TL50_Ion_F: Rifle_Base_F
		{
			displayName="Ionized Shell";
			cursor="srifle";
			reloadAction="GestureReloadARX2";
			magazines[]=
			{
				//"3AS_1Rnd_EC80_Flechette"
			};
			magazineWell[]=
			{
				"MET_3GL_MagWell"
			};
			recoil="3as_recoil_heavy";
			maxZeroing=100;
			class GunParticles: GunParticles
			{
			};
			modes[]=
			{
				"Single"
			};
			class Single: Mode_SemiAuto
			{
				reloadTime=0.1;
				dispersion=0.00133;
				minRange=1;
				minRangeProbab=0.1;
				midRange=25;
				midRangeProbab=0.80000001;
				maxRange=50;
				maxRangeProbab=0.15000001;
				soundContinuous=0;
				soundBurst=0;
				sounds[]=
				{
					"StandardSound",
					"SilencedSound"
				};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_DP23_Shot_SoundSet"
					};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_DP23_Shot_SoundSet"
					};
				};
				aiRateOfFire=1;
				aiRateOfFireDistance=20;
			};
		};
		inertia=0.28;
		dexterity=1.7;
		initSpeed=350;
		muzzles[]=
		{
			"this",
			"TL50_Ion_F"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight"
				};
			};
		};
	};
	class MET_IMP_tl50m: MET_IMP_tl50
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_tl50m";
		model="\JMSLLTE_weapons\tl50\tl50m.p3d";
		picture="\JMSLLTE_weapons\tl50\ico_tl50m.paa";
		displayname="[Imp] TL-50M";
		magazines[]=
		{
			"MET_TL50_light_yellow_mag"
		};
		magazineWell[]=
		{
			"MET_TL50_MagWell"
		};
		muzzles[]=
		{
			"this"
		};
		descriptionShort="Blaster rifle<br />Ammo: TL50 Energy cell";
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_TL50_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.08;
			dispersion=9.9999997e-005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=300;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.2;
		};
		inertia=0.20999999;
		dexterity=1.6;
		initSpeed=350;
	};
	/*class MET_IMP_tl50: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_tl50";
		model="\JMSLLTE_weapons\tl50\tl50.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_tl50.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\tl50\ico_tl50.paa";
		magazines[]=
		{
			"MET_TL50_light_yellow_mag"
		};
		displayname="[Imp] TL-50";
		recoil="MET_recoil_DC15L";
		descriptionShort="Blaster rifle<br />Ammo: TL50 Energy cell";
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		//fireLightDiffuse[]={0.839,0.749,0.486};
		//flash="gunfire";
		flashSize=0.1;
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
		class Library
		{
			libTextDesc="";
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_large_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_TL50_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=9.9999997e-005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class TL50_Ion_F: Rifle_Base_F
		{
			displayName="Ionized Shell";
			cursor="srifle";
			reloadAction="GestureReloadARX2";
			magazines[]=
			{
				//"3AS_1Rnd_EC80_Flechette"
			};
			magazineWell[]=
			{
				"MET_3GL_MagWell"
			};
			recoil="3as_recoil_heavy";
			maxZeroing=100;
			class GunParticles: GunParticles
			{
			};
			modes[]=
			{
				"Single"
			};
			class Single: Mode_SemiAuto
			{
				reloadTime=0.1;
				dispersion=0.00133;
				minRange=1;
				minRangeProbab=0.1;
				midRange=25;
				midRangeProbab=0.80000001;
				maxRange=50;
				maxRangeProbab=0.15000001;
				soundContinuous=0;
				soundBurst=0;
				sounds[]=
				{
					"StandardSound",
					"SilencedSound"
				};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_DP23_Shot_SoundSet"
					};
				};
				class SilencedSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_DP23_Shot_SoundSet"
					};
				};
				aiRateOfFire=1;
				aiRateOfFireDistance=20;
			};
		};
		inertia=0.28;
		dexterity=1.7;
		initSpeed=350;
		muzzles[]=
		{
			"this",
			"TL50_Ion_F"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_e11_bl_Scope",
					"MET_IMP_e11_holo_Scope",
					"MET_IMP_e11_holoSF_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight"
				};
			};
		};
	};
	class MET_IMP_tl50m: MET_IMP_tl50
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_tl50m";
		model="\JMSLLTE_weapons\tl50\tl50m.p3d";
		picture="\JMSLLTE_weapons\tl50\ico_tl50m.paa";
		displayname="[Imp] TL-50M";
		magazines[]=
		{
			"MET_TL50_light_yellow_mag"
		};
		magazineWell[]=
		{
			"MET_TL50_MagWell"
		};
		muzzles[]=
		{
			"this"
		};
		descriptionShort="Blaster rifle<br />Ammo: TL50 Energy cell";
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_TL50_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.08;
			dispersion=9.9999997e-005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: FullAuto
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=300;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=700;
			maxRangeProbab=0.2;
		};
		inertia=0.20999999;
		dexterity=1.6;
		initSpeed=350;
	};*/
	/*========================================================================================================================================
    ========================================= DC-15 ==========================================================================================
    =========================================================================================================================================*/
	class MET_REP_dc15a: JMSLLTE_BlasterRifle_Base
	{
		scope=0;
		model="\JMSLLTE_weapons\dc15a\dc15a.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_dc15a.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="\JMSLLTE_weapons\dc15a\ico_dc15a.paa";
		magazines[]=
		{
			"JMSLLTE_DC15A_60Rnd_Mag"
		};
		displayname="DC-15A blaster rifle";
		author="JMax";
		descriptionShort="Standard issue heavy blaster<br />Ammo: DC15A Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		class Library
		{
			libTextDesc="";
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFireBlue_hand";
			};
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_mid_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.0024999999,0,0.1};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DC15A_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.18000001;
			dispersion=0.00115;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DC15A_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.16;
			dispersion=0.0013;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=200;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=100;
			minRangeProbab=0.2;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=300;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=200;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=400;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_DC15a_bl_Scope",
					"MET_IMP_DC15a_red_bl_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
		};
	};
	class MET_IMP_dc15le: MET_REP_dc15a
	{
		scope=2;
		model="\JMSLLTE_weapons\dc15a\dc15le.p3d";
		magazines[]=
		{
			"MET_DC15A_Red_mag"
		};
		displayname="[Purge] DC-15LE blaster rifle";
		author="JMax";
		descriptionShort="Modernized heavy blaster<br />Ammo: DC15LE Energy cell<br />Manufactured by BlasTech Industries";
		fireLightDiffuse[]={0.1,0,0.0024999999};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DC15A_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.1333333333333333;
			dispersion=0.00007;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_DC15A_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			reloadTime=0.1333333333333333;
			dispersion=0.00007;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
			class JMSLLTE_RifleSmokeTrail
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="JMSLLTE_BlasterFire_hand";
			};
		};
	};
	class MET_IMP_dc15le_Scoped: MET_IMP_dc15le
	{
		author="JMax";
		_generalMacro="MET_IMP_dc15le_Scoped";
		weaponpoolavailable=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="MET_IMP_DC15a_red_bl_Scope";
			};
		};
	};
	class IDA_DC15X;
	class MET_DC15X_Evil: IDA_DC15X
	{
		author="Indecisive Armoury Team";
		scope=2;
		inertia=0;
		canShootInWater=1;
		displayName="[Purge] DC-15X Targeting Blaster";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\DC15X_Evil\Model\IDA_DC15X_Evil.p3d";
		baseWeapon="MET_DC15X_Evil";
		magazines[]=
		{
			"MET_Red_DC15x_mag",
			"MET_DC15x_at_mag"
		};
		recoil="MET_recoil_DC15X";
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15x.ogg",
					2.5,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Republic\DC15x.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.6;
			dispersion=0.000000000000000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
		class OpticsModes
		{
			class IDA_DC15X_Scope
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.0037499999;
				opticsZoomMax=0.1;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				discreteInitIndex=0;
				//discretefov[]={0.125,0.041999999};
				distanceZoomMin=100;
				distanceZoomMax=1000;
				memoryPointCamera="opticView";
				visionMode[]={};
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="";
			};
		};
		fireLightDiffuse[]={1,0,0};
	};
	/*========================================================================================================================================
    ========================================= RK-3 ===========================================================================================
    =========================================================================================================================================*/
	class MET_rk3pistol: JMSLLTE_BlasterPistol_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_rk3pistol";
		model="\JMSLLTE_weapons\RK3\rk3.p3d";
		picture="\JMSLLTE_weapons\rk3\ico_rk3.paa";
		magazines[]=
		{
			"MET_rk3_pistol_battery"
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		displayname="[Imp] RK-3 blaster";
		descriptionShort="Blaster pistol<br />Ammo: RK-3 Energy cell<br />Manufactured by Merr-Sonn Munitions, Inc.";
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_mid_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		selectionFireAnim="muzzleFlash";
		soundBullet[]={};
		modes[]=
		{
			"Single"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_RK3_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.12;
			dispersion=0.00115;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=1500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="Optics Slot";
				compatibleItems[]={};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
		};
		class ItemInfo
		{
			priority=2;
		};
	};
	class MET_rk3pistol_dual: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_rk3pistol_dual";
		model="\JMSLLTE_weapons\RK3\rk3_dual.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_dualPistol.rtm"
		};
		reloadAction="GestureReloadPistol";
		picture="\JMSLLTE_weapons\rk3\ico_rk3.paa";
		magazines[]=
		{
			"MET_rk3_pistol_battery_dual"
		};
		displayname="[Imp] RK-3 blaster (dual)";
		descriptionShort="A highly accurate and lethal pistol<br />Ammo: TC-T m6<br />Manufactured by the Elanus Risk Control Services";
		selectionFireAnim="muzzleFlash";
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",
			0.25118864,
			1,
			5
		};
		class Library
		{
			libTextDesc="none";
		};
		memoryPointGun[]=
		{
			"usti_hlavne",
			"usti_hlavne1"
		};
		gunBeg[]=
		{
			"usti_hlavne",
			"usti_hlavne1"
		};
		gunEnd[]=
		{
			"konec_hlavne",
			"konec_hlavne1"
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_mid_2.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"JMSLLTE_weapons\sounds\reload.wss",
			1.5,
			1,
			20
		};
		soundBullet[]={};
		modes[]=
		{
			"Burst"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.13,0.1,0.1};
		fireLightAmbient[]={0.050000001,0.050000001,0.050000001};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_RK3_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			burst=2;
			reloadTime=0.1;
			dispersion=0.00165;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			textureType="dual";
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.40000001;
		dexterity=1.7;
		initSpeed=1500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="Optics Slot";
				compatibleItems[]={};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source="ammorandom";
				weapon="MET_rk3pistol_dual";
			};
		};
	};
	class MET_RK3_Base_F: Pistol_Base_F
	{
		author="$STR_3AS_Studio";
		reloadAction="3AS_Vent_Reload_Pistol";
		magazines[]=
		{
			"MET_rk3_pistol_battery"
		};
		magazineWell[]=
		{
			"MET_RK3_MagWell"
		};
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=-1;
		maxZeroing=100;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]={};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="RK3, 3rd Army Studios";
		selectionFireAnim="zasleh";
		fireLightDiffuse[]={233,124,113};
		fireLightIntensity=0.02;
		flash="gunfire";
		flashSize=0.1;
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_RK3_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_RK3_Shot_SoundSet"
				};
			};
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			reloadTime=0.12;
			dispersion=0.00115;
			magazineReloadTime=2;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		aiDispersionCOEFY=6;
		aiDispersionCOEFX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"3as\3AS_Main\Sounds\Reload\Venting_Sound.ogg",
			2,
			1,
			30
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_RK3: MET_RK3_Base_F
	{
		scope=2;
		displayName="[Imp] RK3 Blaster";
		model="\3AS\3AS_Weapons\Imperial\3AS_RK3.p3d";
		picture="\3AS\3AS_Weapons\Imperial\data\UI\3as_rk3.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
	class MET_WM_RK3: WM_PistolBase
	{
		author="WarMantle Armory";
		scope=2;
		displayName="[Imp] RK-3";
		model="WarMantle\WM_Imperial_Weapons\RK3\RK3.p3d";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\RK3_x_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		_friedItem="WM_RK3_Fried";
		_repairTime=33;
		magazines[]=
		{
			"MET_rk3_pistol_battery"
		};
		muzzles[]=
		{
			"this"
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SE14C_Shot_Soundset"
				};
				soundBullet[]=
				{
					"",
					1
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.12;
			dispersion=0.00115;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class MuzzleSlot: MuzzleSlot
			{
				iconPinpoint="center";
				iconPosition[]={0.111,0.31600001};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
	};
	/*========================================================================================================================================
    ========================================= EC-17 ==========================================================================================
    =========================================================================================================================================*/
	class MET_ec17pistol: JMSLLTE_BlasterPistol_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_ec17pistol";
		model="\JMSLLTE_weapons\RK3\ec17.p3d";
		picture="\JMSLLTE_weapons\rk3\ico_ec17.paa";
		magazines[]=
		{
			"MET_ec17_pistol_battery"
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		displayname="[Imp] EC-17 hold-out blaster";
		descriptionShort="Standard-issue hold-out blaster pistol<br />Ammo: EC-17 Energy cell<br />Manufactured by BlasTech Industries";
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_mid_1.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		selectionFireAnim="muzzleFlash";
		soundBullet[]={};
		modes[]=
		{
			"Single"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_EC17_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.2;
			dispersion=0.001;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=1500;
		recoil="recoil_pistol_4five";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="Optics Slot";
				compatibleItems[]=
				{
					"MET_IMP_ec17_holo_Scope"
				};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
		};
		class ItemInfo
		{
			priority=2;
		};
	};
	class MET_WM_EC17: WM_PistolBase
	{
		author="WarMantle Armory";
		scope=2;
		displayName="[Imp] EC-17";
		model="WarMantle\WM_Imperial_Weapons\EC17\EC17.p3d";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\EC17_UI_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_frieditem="WM_EC17_Fried";
		JLTS_repairTime=33;
		magazines[]=
		{
			"MET_ec17_pistol_battery"
		};
		muzzles[]=
		{
			"This"
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"WM_EC17_Shot_Soundet"
				};
				soundBullet[]=
				{
					"",
					1
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.2;
			dispersion=0.001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class MuzzleSlot: MuzzleSlot
			{
				iconPinpoint="center";
				iconPosition[]={0.111,0.31600001};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
		modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
		optics=1;
		class OpticsModes
		{
			class Scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=0.05;//5x
				opticsZoomMax=0.125;//2x
				opticsZoomInit=0.125;//2x
				discreteDistance[]={100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex=0;
				distanceZoomMin=100;
				distanceZoomMax=800;
				discretefov[]={0.107,0.050000001};
				discreteInitIndex=0;
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"Ti"
				};
				opticsFlare="true";
				cameraDir="";
			};
		};
	};
	class MET_IDA_EC17: hgun_Pistol_Heavy_01_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="IDA_EC17_Stun";
		author="Indecisive Armoury Team";
		displayName="[Imp] EC-17 Holdout Blaster Pistol";
		descriptionShort="";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="MET_IDA_EC17";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\EC17\EC17_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\EC17\Model\IDA_EC17.p3d";
		hiddenSelections[]=
		{
			"camo",
			"muzzlehole",
			"scope"
		};
		hiddenSelectionsTextures[]=
		{
			"Indecisive_Armoury_Weapons_IMPERIAL\Data\EC17\Textures\EC17_co.paa",
			"Indecisive_Armoury_Weapons_IMPERIAL\Data\EC17\Textures\EC17_co.paa",
			"Indecisive_Armoury_Weapons_IMPERIAL\Data\EC17\Textures\EC17_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"Indecisive_Armoury_Weapons_IMPERIAL\Data\EC17\Textures\EC17.rvmat",
			"",
			"Indecisive_Armoury_Weapons_IMPERIAL\Data\DLT19D\Textures\DLT19D_glass.rvmat"
		};
		magazines[]=
		{
			"MET_ec17_pistol_battery"
		};
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		magazineWell[]={};
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\EC17.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\EC17.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\EC17.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\EC17.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\EC17.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\EC17.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.2;
			dispersion=0.001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		weaponInfoType="RscOptics_nightstalker";
		modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
		class OpticsModes
		{
			class Iron
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"",
					""
				};
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
			};
			class IDA_EC17_Scope
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsRadialBlur1",
					"OpticsBlur1"
				};
				opticsZoomMin=0.05;//5x
				opticsZoomMax=0.125;//2x
				opticsZoomInit=0.125;//2x
				discreteDistance[]={200};
				discreteDistanceInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="optic_view";
				visionMode[]={};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				cameraDir="";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			holsterScale=0.875;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_EC17_Base_F: Pistol_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_ec17_pistol_battery"
		};
		magazineWell[]={};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			0.39810717,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"3as\3AS_Main\Sounds\Reload\Venting_Sound.ogg",
			2,
			1,
			30
		};
		reloadAction="3AS_Vent_Reload_Pistol";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_EC17_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_EC17_SoundSet"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.2;
			dispersion=0.001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.22499999;
		aimTransitionSpeed=1.7;
		dexterity=1.85;
		fireLightDiffuse[]={233,124,113};
		fireLightIntensity=0.02;
		flashSize=0.1;
		initSpeed=-1;
		recoil="recoil_pistol_4five";
		maxZeroing=100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			holsterScale=0.94999999;
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
				compatibleItems[]=
				{
					"MET_Optic_EC17_1_F"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"MET_Flashlight_EC17_1_F"
				};
				iconPosition[]={0.47,0.55000001};
				iconScale=0.30000001;
			};
		};
	};
	class MET_EC17_F: MET_EC17_Base_F
	{
		scope=2;
		displayName="[Imp] EC-17 Holdout";
		model="3as\3AS_Weapons\EC-17\model\3AS_EC17_F.p3d";
		picture="3as\3AS_Weapons\EC-17\data\ui\3as_ec17_ca.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=55;
		};
	};
	/*========================================================================================================================================
    ========================================= SE-14 ==========================================================================================
    =========================================================================================================================================*/
	class MET_se14pistol: JMSLLTE_BlasterPistol_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_se14pistol";
		model="\JMSLLTE_weapons\se14\se14.p3d";
		picture="\JMSLLTE_weapons\se14\ico_se14.paa";
		magazines[]=
		{
			"MET_se14_pistol_battery"
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		displayname="[Imp] SE-14 blaster";
		recoil="MET_recoil_Raff";
		descriptionShort="Light pistol blaster<br />Ammo: SE-14 Energy cell<br />Manufactured by BlasTech Industries";
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_mid_3.ogg",
			1,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		selectionFireAnim="muzzleFlash";
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		fireLightDuration=0.0049999999;
		fireLightIntensity=0.0049999999;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_SE14C_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.06666666666666666667;
			dispersion=0.0011;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.06666666666666666667;
			dispersion=0.011;
			minRange=1;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_SE14C_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
		};
		inertia=0.5;
		dexterity=1.7;
		initSpeed=1500;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="Optics Slot";
				compatibleItems[]=
				{
					"MET_IMP_se14r_bl_Scope",
					"MET_IMP_se14c_bl_Scope"
				};
			};
			class MuzzleSlot: SlotInfo
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
			};
		};
		class ItemInfo
		{
			priority=2;
		};
	};
	class MET_se14Rpistol: MET_se14pistol
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_se14Rpistol";
		displayname="[Imp] SE-14r blaster";
		model="\JMSLLTE_weapons\se14\se14r.p3d";
		descriptionShort="Light repeating blaster<br />Ammo: SE-14 Energy cell<br />Manufactured by BlasTech Industries";
		modes[]=
		{
			"Single",
			"2Burst",
			"Burst"
		};
		class 2Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_SE14C_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			burst=2;
			textureType="dual";
			reloadTime=0.05;
			dispersion=0.0015;
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_SE14C_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			burst=3;
			reloadTime=0.025;
			dispersion=0.0015;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
	};
	class MET_WM_SE14C: WM_PistolBase
	{
		author="WarMantle Armory";
		scope=2;
		displayName="[Imp] SE-14C";
		model="WarMantle\WM_Imperial_Weapons\SE14C\SE14C.p3d";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.2;
		fireLightDiffuse[]={0.1,0,0.0024999999};
		fireLightAmbient[]={0,0,0};
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\SE14C_UI_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		JLTS_frieditem="WM_SE14C_Fried";
		JLTS_repairTime=33;
		recoil="MET_recoil_Raff";
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		magazines[]=
		{
			"MET_se14_pistol_battery"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SE14C_Shot_Soundset"
				};
				soundBullet[]=
				{
					"",
					1
				};
			};
			reloadTime=0.06666666666666666667;
			dispersion=0.0011;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.06666666666666666667;
			dispersion=0.011;
			minRange=1;
			minRangeProbab=0.1;
			midRange=10;
			midRangeProbab=0.80000001;
			maxRange=50;
			maxRangeProbab=0.15000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"SE14C_Shot_Soundset"
				};
				soundBullet[]=
				{
					"",
					1
				};
			};
			aiRateOfFire=1;
			aiRateOfFireDistance=20;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
			class MuzzleSlot: MuzzleSlot
			{
				iconPinpoint="center";
				iconPosition[]={0.111,0.31600001};
				iconScale=0.25;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				compatibleItems[]={};
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"WM_SE14C_Scope"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
		};
	};
	class MET_SE14R_Base_F: Pistol_Base_F
	{
		author="$STR_3AS_Studio";
		magazines[]=
		{
			"MET_se14_pistol_battery"
		};
		magazineWell[]=
		{
			"MET_SE14R_MagWell"
		};
		reloadAction="3AS_GestureReloadSE14r";
		magazineReloadSwitchPhase=0.40000001;
		discreteDistanceInitIndex=0;
		recoil="MET_recoil_Raff";
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		inertia=0.5;
		dexterity=1.5;
		initSpeed=-1;
		maxZeroing=100;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				compatibleItems[]=
				{
					"MET_Imp_Optic_SE14R"
				};
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"acc_flashlight"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy="\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[]={};
			};
		};
		opticsZoomMin=0.25;
		opticsZoomMax=1.25;
		opticsZoomInit=0.75;
		distanceZoomMin=400;
		distanceZoomMax=400;
		descriptionShort="SE-14R, 3rd Army Studios";
		selectionFireAnim="zasleh";
		fireLightDiffuse[]={233,124,113};
		fireLightIntensity=0.02;
		flash="gunfire";
		flashSize=0.1;
		modes[]=
		{
			"Single",
			"2Burst",
			"Burst"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_SE14R_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_SE14R_Shot_SoundSet"
				};
			};
			reloadTime=0.06666666666666666667;
			dispersion=0.0011;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class 2Burst: Mode_Burst
		{
			reloadTime=0.05;
			dispersion=0.0015;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
			soundContinuous=0;
			soundBurst=0;
			burst=2;
			textureType="dual";
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_SE14R_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_SE14R_Shot_SoundSet"
				};
			};
			recoilProne="recoil_prone_pistol_heavy";
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.025;
			dispersion=0.0015;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_SE14R_Shot_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_SE14R_Shot_SoundSet"
				};
			};
			recoilProne="recoil_prone_pistol_heavy";
		};
		aiDispersionCOEFY=6;
		aiDispersionCOEFX=4;
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"\3AS\3AS_Main\Sounds\Blaster_empty",
			2,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"\3AS\3AS_Main\Sounds\DC15A\DC15aReload",
			1,
			1,
			30
		};
		ace_overheating_mrbs=3000;
		ace_overheating_slowdownFactor=1;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=0.75;
	};
	class MET_SE14R: MET_SE14R_Base_F
	{
		scope=2;
		displayName="[Imp] SE-14r Light Rpeating Blaster";
		model="\3AS\3AS_Weapons\Imperial\3AS_SE14R.p3d";
		picture="\3AS\3AS_Weapons\Imperial\data\UI\3as_se14r.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=60;
		};
	};
	/*========================================================================================================================================
    ========================================= E-11P ==========================================================================================
    =========================================================================================================================================*/
	class MET_IDA_E11P: hgun_Pistol_Heavy_01_F
	{
		ace_overheating_mrbs=40000;
		ace_overheating_slowdownFactor=0;
		ace_overheating_allowSwapBarrel=0;
		ace_overheating_dispersion=1;
		ace_overheating_closedBolt=0;
		ace_overheating_barrelMass=1;
		IDA_StunWeapon="IDA_E11P_Stun";
		author="Indecisive Armoury Team";
		displayName="[Imp] E-11P Blaster Pistol";
		descriptionShort="";
		scope=2;
		inertia=0;
		canShootInWater=1;
		baseWeapon="MET_IDA_E11P";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11P\E11P_ui.paa";
		model="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11P\Model\IDA_E11P.p3d";
		hiddenSelections[]=
		{
			"camo",
			"muzzlehole"
		};
		hiddenSelectionsTextures[]=
		{
			"Indecisive_Armoury_Weapons_IMPERIAL\Data\E11P\Textures\E11P_co.paa",
			"#(argb,8,8,3)color(0,0,0,1.0,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"Indecisive_Armoury_Weapons_IMPERIAL\Data\E11P\Textures\E11P.rvmat",
			""
		};
		magazines[]=
		{
			"MET_E11_red_mag"
		};
        magazineWell[]=
        {
            "MET_E11_MagWell"
        };
		ace_clearJamAction="";
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		fireLightDiffuse[]={1,0,0};
		drySound[]=
		{
			"\Indecisive_Armoury_Sounds\weapon_dry.ogg",
			5,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		muzzles[]=
		{
			"this"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11P.ogg",
					1.25,
					1,
					1800
				};
				begin2[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11P.ogg",
					1.25,
					1.025,
					1800
				};
				begin3[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11P.ogg",
					1.25,
					0.94999999,
					1800
				};
				begin4[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11P.ogg",
					1.25,
					1.05,
					1800
				};
				begin5[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11P.ogg",
					1.25,
					0.89999998,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.2,
					"begin2",
					0.2,
					"begin3",
					0.2,
					"begin4",
					0.2,
					"begin5",
					0.2
				};
				beginwater1[]=
				{
					"\Indecisive_Armoury_Sounds\Imperial\E11P.ogg",
					1,
					1,
					400
				};
				soundBeginWater[]=
				{
					"beginwater1",
					1
				};
			};
			reloadTime=0.08;
			dispersion=0.0035000001;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.075000003;
			maxRange=10000;
			maxRangeProbab=0.30000001;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
			holsterScale=0.875;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[]={};
			};
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0.23999999,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[]={};
			};
		};
	};
	/*========================================================================================================================================
    ========================================= HH-12 ==========================================================================================
    =========================================================================================================================================*/
	class 3AS_PLX1_F
	{
		class WeaponSlotsInfo;
	};
	class MET_HH12_launcher: 3AS_PLX1_F
	{
		author="JMax";
		_generalMacro="MET_HH12_launcher";
		scope=2;
		displayName="[Imp] HH-12";
		model="\JMSLLTE_weapons\Launchers\HH12.p3d";
		picture="\JMSLLTE_weapons\Launchers\data\ico_hh12.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		lockAcquire=1;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\WarMantle\WM_Imperial_Weapons\data\anim\hh12.rtm"
		};
		recoil="recoil_nlaw";
		maxZeroing=600;
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		magazines[]=
		{
			"MET_HH12_AA_SINGLE",
			"MET_HH12_AP_SINGLE",
			"MET_HH12_AT_SINGLE"
		};
		aimTransitionSpeed=0.5;
		dexterity=0.80000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
		};
	};
	class MET_WM_Launch_HH12: 3AS_PLX1_F
	{
		author="WarMantle Armory";
		_generalMacro="MET_WM_Launch_HH12";
		scope=2;
		displayName="[Imp] HH-12";
		model="WarMantle\WM_Imperial_Weapons\HH12\HH12.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\WarMantle\WM_Imperial_Weapons\data\anim\hh12.rtm"
		};
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\hh15_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		recoil="recoil_nlaw";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
			};
		};
		lockingTargetSound[]=
		{
			"WarMantle\WM_Imperial_Weapons\MiniMag\data\sfx\wpn_PTL_Locking",
			0.31622776,
			1
		};
		lockedTargetSound[]=
		{
			"WarMantle\WM_Imperial_Weapons\MiniMag\data\sfx\wpn_PTL_Lock",
			0.31622776,
			2.5
		};
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		magazines[]=
		{
			"MET_HH12_AA_SINGLE",
			"MET_HH12_AP_SINGLE",
			"MET_HH12_AT_SINGLE"
		};
		magazineWell[]={};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
		};
		class ItemInfo
		{
			priority=3;
		};
	};
	class MET_HH12_Base: 3AS_PLX1_F
	{
		author="$STR_3as_Studio";
		_generalMacro="launch_RPG32_F";
		scope=1;
		displayName="[Imp] HH12 Rocket Launcher";
		model="3as\3AS_Weapons\Imperial\3AS_HH12.p3d";
		picture="3as\3AS_Weapons\Data\UI\3as_hh12.paa";
		UiPicture="3as\3AS_Weapons\Data\UI\3as_hh12.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"3as\3AS_Weapons\Imperial\anims\HH12hand.rtm"
		};
		recoil="recoil_nlaw";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		magazines[]=
		{
			"MET_HH12_AA_SINGLE",
			"MET_HH12_AP_SINGLE",
			"MET_HH12_AT_SINGLE"
		};
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		magazineReloadTime=0.1;
	};
	class MET_HH12_F: MET_HH12_Base
	{
		scope=2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
		};
	};
	/*========================================================================================================================================
    ========================================= HH-15 ==========================================================================================
    =========================================================================================================================================*/
	class 3AS_RPS6_Base;
	class MET_HH15_Base: 3AS_RPS6_Base
	{
		author="$STR_3as_Studio";
		_generalMacro="launch_RPG32_F";
		scope=1;
		displayName="[Imp] HH-15 Disposible";
		model="WarMantle\WM_Imperial_Weapons\HH15\HH15.p3d";
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\hh15_x_ca.paa";
		UiPicture="\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		baseWeapon="MET_HH15_F";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\WarMantle\WM_Imperial_Weapons\data\anim\MiniMag_PTL.rtm"
		};
		reloadAction="ReloadRPG";
		recoil="recoil_nlaw";
		maxZeroing=600;
		modelOptics="\A3\Weapons_F\acc\reticle_RPG_F";
		weaponInfoType="RscWeaponEmpty";
		opticsZoomMin=0.1083;
		opticsZoomMax=0.1083;
		opticsZoomInit=0.1083;
		cameraDir="look";
		class GunParticles
		{
			class effect1
			{
				positionName="konec hlavne";
				directionName="usti hlavne";
				effectName="RocketBackEffectsRPGNT";
			};
		};
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.1083;
				opticsZoomMax=0.1083;
				opticsZoomInit=0.1083;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="eye";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
		};
		magazines[]=
		{
			"3AS_MK40_AT"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",
					1.9952624,
					1,
					1500
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_law";
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
			aiRateOfFireDispersion=2;
			minRange=10;
			minRangeProbab=0.30000001;
			midRange=40;
			midRangeProbab=0.85000002;
			maxRange=600;
			maxRangeProbab=0.85000002;
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Dry_RPG32",
			0.44668359,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\reload_RPG32",
			0.25118864,
			1,
			10
		};
		canLock=0;
		weaponLockDelay=3;
		lockAcquire=0;
		inertia=0.89999998;
		aimTransitionSpeed=0.5;
		dexterity=1.1;
		magazineReloadTime=0.1;
		descriptionShort="$STR_A3_CfgWeapons_launch_LAW1";
		class EventHandlers
		{
			fired="_this call CBA_fnc_firedDisposable";
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_launch_LAW_Library0";
		};
	};
	class MET_HH15_F: MET_HH15_Base
	{
		scope=2;
		baseWeapon="MET_HH15_F";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	class MET_HH15_Used: MET_HH15_Base
	{
		scope=1;
		displayName="[16th] Spent HH-15 Disposable";
		baseWeapon="MET_HH15_Used";
		magazines[]=
		{
			"CBA_FakeLauncherMagazine"
		};
	};
	/*========================================================================================================================================
    ========================================= Minimag PTL ====================================================================================
    =========================================================================================================================================*/
	class MET_WM_Launch_PTL: launch_RPG32_F
	{
		author="WarMantle Armory & LS";
		_generalMacro="MET_WM_Launch_PTL";
		scope=2;
		displayName="[Imp] MiniMag PTL";
		model="WarMantle\WM_Imperial_Weapons\MiniMag\MiniMag.p3d";
		picture="\WarMantle\WM_Imperial_Weapons\data\ui\minimag_x_ca.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\WarMantle\WM_Imperial_Weapons\data\anim\MiniMag_PTL.rtm"
		};
		magazines[]=
		{
			"MET_PTL_HEP",
			"MET_PTL_Frag",
			"MET_PTL_AB"
		};
		magazineWell[]={};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"WarMantle\WM_Imperial_Weapons\MiniMag\data\sfx\wpn_PTL_fire.wss",
					1.9952624,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
			};
			recoil="recoil_single_nlaw";
			aiRateOfFire=7;
			aiRateOfFireDistance=500;
			minRange=25;
			minRangeProbab=0.80000001;
			midRange=50;
			midRangeProbab=0.80000001;
			maxRange=790;
			maxRangeProbab=0.80000001;
		};
	};
	/*========================================================================================================================================
    ==========================================================================================================================================
    ========================================= Attachments ====================================================================================
    ==========================================================================================================================================
    =========================================================================================================================================*/
    class MET_E11_Pack: ItemCore
	{
		scope=2;
		displayName="E-11 Pack";
		picture="A3\Weapons_F_Mark\Data\UI\icon_bipod_01_f_blk_ca.paa";
		model="WarMantle\WM_Imperial_Weapons\E11\E11_Pack.p3d";
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot="bipod";
			hasBipod=1;
			mass=10;
		};
	};
	class MET_E11_Optic: ItemCore
	{
		author="WM";
		_generalMacro="optic_Aco";
		scope=2;
		displayName="E-11 Scope";
		picture="\a3\Weapons_F\acc\Data\UI\icon_optic_ACO_grn_ca.paa";
		model="WarMantle\WM_Imperial_Weapons\E11\E11_scope.p3d";
		descriptionShort="WM E-11 Scope";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			optics=1;
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					//discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
					//discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=2400;
					//discretefov[]={0.041999999,0.0099999998};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
		inertia=0;
	};
	class MET_IMP_e11_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="E-series blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\blasterE11\e11scope.p3d";
		descriptionShort="E-series targeting sight<br />3xModes (Sight, NVG, TI modes)<br />Used primary for: E-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="E Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class E11Col
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.2;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class E11Optic: E11Col
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=350;
					distanceZoomMax=450;
					modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_e11_holo_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="E-series holo scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\blasterE11\e11scopeHolo.p3d";
		descriptionShort="E-series holo sight<br />2xModes (Sight, Collimator)<br />Used primary for: E-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="E Holo Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class e11hcq
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
				class e11hscope: e11hcq
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.2;
					opticsZoomMax=0.2;
					opticsZoomInit=0.2;
					memoryPointCamera="opticView";
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class MET_IMP_e11_holoSF_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="E-series SF holo scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\blasterE11\e11scopeHoloSf.p3d";
		descriptionShort="E-series SF holo sight<br />2xModes (Holo, Collimator)<br />Used primary for: E-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="E Holo Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class e11sfcq
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
				class e11sfscope: e11sfcq
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.2;
					opticsZoomMax=0.2;
					opticsZoomInit=0.2;
					memoryPointCamera="opticView";
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class optic_Holosight;
	class MET_E11_Scope: optic_Holosight
	{
		author="Indecisive Armoury Team";
		scope=2;
		displayname="E-11 2.0x Scope";
		picture="Indecisive_Armoury_Weapons_IMPERIAL\Data\E11\E11Scope_ui.paa";
		model="\Indecisive_Armoury_Weapons_IMPERIAL\Data\E11\Model\IDA_E11_Scope.p3d";
		memoryPointCamera="eye";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			//weaponInfoType="RscOptics_nightstalker";
			allowedSlots[]={801,701,901};
			mountAction="MountOptic";
			muzzleEnd="konec hlavne";
			muzzlePos="usti hlavne";
			class OpticsModes
			{
				class MET_E11_Collimator
				{
					cameraDir="";
					distanceZoomMax=200;
					distanceZoomMin=200;
					memoryPointCamera="opticview";
					opticsDisablePeripherialVision=0;
					opticsFlare=0;
					opticsID=1;
					opticsPPEffects="[""OpticsBlur1""]";
					opticsZoomInit=0.75;
					opticsZoomMax=1.25;
					opticsZoomMin=0.25;
					useModelOptics=0;
					visionMode="[]";
				};
				class MET_E11_Scope
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsRadialBlur1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					memoryPointCamera="eye";
					visionMode[]={};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					cameraDir="";
				};
			};
		};
	};
    class MET_Imp_Optic_1: ItemCore
	{
		scope=2;
		displayName="[Imp] Reflex";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\Imperial\3as_Imp_Optic_1.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class HoloSights
				{
					opticsID=1;
					useModelOptics=0;
					opticsFlare="false";
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsDisablePeripherialVision=0.67000002;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
			};
		};
	};
	class MET_Imp_Optic_2: ItemCore
	{
		scope=2;
		displayName="[Imp] ACOG";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\Imperial\3as_Imp_Optic_2.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class 3AS_Imp_Optic2
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.125;
					opticsZoomMax=0.25;
					opticsZoomInit=0.125;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					nFovLimit=0.07;
					//discreteFov[]={0.25,0.125};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class IronSights
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare="false";
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsDisablePeripherialVision=0.67000002;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=100;
					distanceZoomMax=100;
				};
			};
		};
	};
	class MET_Imp_Optic_3: ItemCore
	{
		scope=2;
		displayName="[Imp] ERCO";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\Imperial\3as_Imp_Optic_3.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="\3AS\3AS_Weapons\Data\3AS_2D_Optic.p3d";
			class OpticsModes
			{
				class 3AS_Imp_Optic3
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					nFovLimit=0.07;
					//discreteFov[]={0.125,0.0625};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class 3AS_Imp_Optic3_top: 3AS_Imp_Optic3
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					//discretefov[]={};
				};
			};
		};
	};
	class MET_Imp_Optic_4: ItemCore
	{
		scope=2;
		displayName="[Imp] Marksman Optic";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\Imperial\3as_Imp_Optic_4.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
			class OpticsModes
			{
				class 3AS_Imp_Optic4
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.02;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;	
					//discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					nFovLimit=0.07;
					//discreteFov[]={0.0625,0.041700002};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\big_cross_red_med.p3d"
					};
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class 3AS_Imp_Optic4_top: 3AS_Imp_Optic4
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					//discretefov[]={};
				};
			};
		};
	};
	class MET_Imp_Optic_E11: ItemCore
	{
		scope=2;
		displayName="[Imp] Imperial Optic E11";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\Imperial\3as_Imp_Optic_E11.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class MET_Imp_OpticE11
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					//discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					//discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=300;
					nFovLimit=0.07;
					//discreteFov[]={0.125,0.055500001};
					discreteInitIndex=0;
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\small_crosshair_red.p3d"
					};
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
				class MET_Imp_OPticE11_top: MET_Imp_OpticE11
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					//discretefov[]={};
				};
			};
		};
	};
	class MET_Imp_Optic_DLT19x: ItemCore
	{
		scope=2;
		displayName="3AS Imperial Optic DLT-19x";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="\3AS\3AS_Weapons\Imperial\3as_Imp_Optic_DLT19x.p3d";
		weaponInfoType="3AS_RscOptics_DLT19x";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="\3as\3AS_Weapons\Imperial\data\sights\3as_2D_Optic_DLT19X.p3d";
			class OpticsModes
			{
				class 3AS_Imp_OpticDLT19x
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0037499999;
					opticsZoomMax=0.1;
					opticsZoomInit=0.75;
					//discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					nFovLimit=0.07;
					discreteInitIndex=0;
					modelOptics[]=
					{
						"\3as\3AS_Weapons\Imperial\data\sights\3as_2D_Optic_DLT19X.p3d"
					};
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
	};
	class MET_Imp_Optic_SE14R: ItemCore
	{
		scope=2;
		displayName="[Imp] SE14R Optic";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="3AS\3AS_Weapons\Imperial\3as_Imp_Optic_SE14R.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class 3AS_Imp_OpticSE14R
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					//discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					nFovLimit=0.07;
					//discreteFov[]={0.125,0.0625};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					modelOptics[]=
					{
						"3as\3AS_Weapons\Imperial\data\sights\3AS_2D_Optic_Pistol.p3d"
					};
				};
			};
		};
	};
	class MET_IMP_se14r_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="SE/r blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\se14\se14rScope.p3d";
		descriptionShort="SE/r targeting sight<br />2xModes (Sight, NVG mode)<br />Used for: SE-14";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="SE/r Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class SEscope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default",
						"NVG"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class SeSturm: SEscope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					//discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200};
					//discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=300;
					//discretefov[]={0.041999999,0.0099999998};
					discreteInitIndex=0;
					modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_se14c_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="SE/c blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\se14\se14cScope.p3d";
		descriptionShort="SE/c targeting sight<br />3xModes (Sight, NVG, TI modes)<br />Used for: SE-14";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="SE/c Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class SEscope
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default",
						"NVG",
						"Ti"
					};
					thermalMode[]={2,3};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class SeSturm: SEscope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					//discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200};
					//discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=300;
					//discretefov[]={0.041999999,0.0099999998};
					discreteInitIndex=0;
					modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_dlt19x_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="DLTx blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\DLT19\DLT19xScope.p3d";
		descriptionShort="DLTx targeting sight<br />2xModes (Sight, TI mode)<br />Used primary for: DLT-series, A-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="DLTx Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
			class OpticsModes
			{
				class dltCol
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class dltOptic2: dltCol
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={4,5};
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.0037499999;
					opticsZoomMax=0.1;
					opticsZoomInit=0.75;
					discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
					discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=3000;
					//discretefov[]={0.041999999,0.0099999998};
					discreteInitIndex=0;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_rt97c_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="RT97C blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\RT97C\rt97c_scope.p3d";
		descriptionShort="Spotting scope<br />2xModes (Sight, NVG mode)<br />Used primary for: RT-97C";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="RT97C Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_red_circle.p3d";
			class OpticsModes
			{
				class E11Col
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class E11Optic: E11Col
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.084;//3x
					opticsZoomMax=0.172;//1.5x
					opticsZoomInit=0.172;//1.5x
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=300;
					distanceZoomMax=350;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_red_circle.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_DC15a_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="DC-2C blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\a280\a280Cscope.p3d";
		descriptionShort="DC-Mk2 targeting sight<br />2xModes (Sight, NVG mode)<br />Used primary for: DC-series, A-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="DC2 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
			class OpticsModes
			{
				class dc15Col
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class dc15Optic2: dc15Col
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=550;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_full.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_DC15a_red_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="DC-2C blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\a280\a280Cscope.p3d";
		descriptionShort="DC-Mk2 targeting sight<br />2xModes (Sight, NVG mode)<br />Used primary for: DC-series, A-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="DC2 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
			class OpticsModes
			{
				class dc15Col
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class dc15Optic2: dc15Col
				{
					opticsID=2;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=550;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_ec17_holo_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="EC-17 holo scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\RK3\ec17_scope.p3d";
		descriptionShort="EC-17 holo sight<br />2xModes (Sight, Collimator)<br />Used for: EC-17";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="EC Holo Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class e11hcq
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
				class e11hscope: e11hcq
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					memoryPointCamera="opticView";
					distanceZoomMin=300;
					distanceZoomMax=300;
				};
			};
		};
	};
	class MET_IMP_ee3_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="EE3 blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\ee3\ee3Scope.p3d";
		descriptionShort="EE3 targeting sight<br />2xModes (Sight, NVG mode)<br />Used for: EE-3";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="EE3 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
			class OpticsModes
			{
				class dltCol
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class dltOptic2: dltCol
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.0415;//6x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
					discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=3000;
					//discretefov[]={0.041999999,0.0099999998};
					discreteInitIndex=0;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_red_med.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_ee4_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="EE4 blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\ee3\ee4Scope.p3d";
		descriptionShort="EE4 targeting sight<br />3xModes (Sight, NVG mode)<br />Used for: EE-4";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="EE4 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_red_easy.p3d";
			class OpticsModes
			{
				class dltCol
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class dltOptic2: dltCol
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
					discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=3000;
					//discretefov[]={0.041999999,0.0099999998};
					discreteInitIndex=0;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_red_easy.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_ee4m_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="EE4M blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\ee3\ee4mScope.p3d";
		descriptionShort="EE4M targeting sight<br />3xModes (Sight, NVG, TI modes)<br />Used for: EE-4";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="EE4M Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_red_easy.p3d";
			class OpticsModes
			{
				class dltCol
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					modelOptics="\A3\Weapons_F\empty";
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					weaponInfoType="";
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class dltOptic2: dltCol
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera5",
						"OpticsBlur5"
					};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					opticsZoomMin=0.05;//5x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					discreteDistance[]={300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
					discreteDistanceInitIndex=2;
					distanceZoomMin=300;
					distanceZoomMax=3000;
					//discretefov[]={0.041999999,0.0099999998};
					discreteInitIndex=0;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_red_easy.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_Optic_EC17_1_F: ItemCore
	{
		scope=2;
		displayName="[Imp] EC-17 Optic";
		picture="\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";
		model="3as\3AS_Weapons\EC-17\model\3AS_EC17_Scope_1.p3d";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=7;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class 3AS_Optic_Scope
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
				opticsZoomMin=0.05;//5x
				opticsZoomMax=0.125;//2x
				opticsZoomInit=0.125;//2x
					discreteDistance[]={100,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex=1;
					distanceZoomMin=100;
					distanceZoomMax=1000;
					nFovLimit=0.07;
					discreteFov[]={0.125,0.0625};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
					modelOptics[]=
					{
						"z\MET\addons\weapons\scopes\small_crosshair_red.p3d"
					};
				};
				class 3AS_Optic_Top: 3AS_Optic_Scope
				{
					opticsID=2;
					useModelOptics=0;
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.375;
					opticsZoomMax=1.1;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
				};
			};
		};
	};
	class MET_Flashlight_EC17_1_F: ItemCore
	{
		author="Bohemia Interactive";
		_generalMacro="acc_flashlight";
		scope=2;
		displayName="[Imp] EC17 Flashlight";
		descriptionUse="<t color='#9cf953'>Use: </t>Turn Flashlight ON/OFF";
		picture="\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model="3as\3AS_Weapons\EC-17\model\3AS_EC17_Flashlight_1.p3d";
		descriptionShort="Weapon mounted light.";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass=2;
			class FlashLight
			{
				color[]={180,160,130};
				ambient[]={0.89999998,0.81,0.69999999};
				intensity=100;
				size=1;
				innerAngle=5;
				outerAngle=100;
				coneFadeCoef=8;
				position="flash dir";
				direction="flash";
				useFlare=1;
				flareSize=1.4;
				flareMaxDistance=100;
				dayLight=0;
				class Attenuation
				{
					start=0;
					constant=0.5;
					linear=0.1;
					quadratic=0.2;
					hardLimitStart=27;
					hardLimitEnd=34;
				};
				scale[]={0};
			};
		};
		inertia=0.1;
	};
};