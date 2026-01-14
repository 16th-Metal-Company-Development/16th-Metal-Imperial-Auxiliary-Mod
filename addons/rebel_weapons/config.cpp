class CfgPatches
{
	class metal_Rebel_weapons
	{
		author="16th Metal Imperial Development Team";
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

/*class CfgRecoils
{
	class recoil_default;
	class Default;
};*/
class CfgAmmo
{
	class MET_blasterbolt_low;
	class MET_blasterbolt_low_Spice_Red: MET_blasterbolt_low
	{
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Red.p3d";
		effectfly="MET_BlasterBoltGlow_Red_Fly";
		lightcolor[]={1,0,0};
		hit=18;
	};
};
class CfgMagazines
{
    class MET_DC15A_mag;
	class MET_A280_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=50;
		displayName="[Reb] A-280 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the A-280.";
		ammo="MET_blasterbolt_red";
		tracersEvery=1;
	};
	class MET_A280C_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=30;
		displayName="[Reb] A-280C Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the A-280C.";
		ammo="MET_blasterbolt_br_Red";
		tracersEvery=1;
		mass=12;
	};
	class MET_A295_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=20;
		displayName="[Reb] A-295 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the A-295.";
		ammo="MET_blasterbolt_br_Red";
		tracersEvery=1;
		mass=12;
	};
	class MET_A180_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_ammo_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=75;
		displayName="[Reb] A-180 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the A-180.";
		ammo="MET_blasterbolt_low_Red";
		tracersEvery=1;
	};
	class MET_A300_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=24;
		displayName="[Reb] A-300 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the A-300.";
		ammo="MET_blasterbolt_dmr_Red";
		tracersEvery=1;
		mass=20;
		initSpeed = 1250;
	};
	class MET_A280CFE_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_sniper_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=30;
		displayName="[Reb] A-280CFE Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the A-280CFE.";
		ammo="MET_blasterbolt_dmr_Red";
		tracersEvery=1;
		mass=20;
		initSpeed = 1250;
	};
	class MET_DH17_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=50;
		displayName="[Reb] DH-17 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DH-17.";
		ammo="MET_blasterbolt_low_Spice_Red";
		tracersEvery=1;
	};
	class MET_DL44_mag: MET_DC15A_mag
	{
		JLTS_hasElectronics=1;
		JLTS_hasEMPProtection=1;
		author="Hazmat";
		modelSpecial="";
		modelSpecialIsProxy=0;
		picture="\3AS\3AS_Weapons\Data\UI\3as_pistol_r.paa";
		model="\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
		count=15;
		displayName="[Ind] DL-44 Energy Cell";
		displayNameShort="Energy Cell";
		descriptionShort="Energy cell for the DL-44.";
		ammo="MET_blasterbolt_dmr_Red";
		tracersEvery=1;
	};
	class 3AS_JLTS_MK39_AA;
	class MET_SMRTLAUNCH_AA_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="Smart Launcher AA Rocket Pack";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_aa.paa";
		ammo = "metal_aa_missile_van";
		count=2;
		mass=40;
		initSpeed=40;
	};
	class MET_SMRTLAUNCH_AP_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="Smart Launcher AP Rocket Pack";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_he.paa";
		ammo="metal_mand_ap_missile";
		count=2;
		mass=40;
		initSpeed=40;
	};
	class MET_SMRTLAUNCH_AT_SINGLE: 3AS_JLTS_MK39_AA
	{
		displayName="Smart Launcher AT Rocket Pack";
		picture="\3AS\3AS_Weapons\Data\UI\3as_rocket_at.paa";
		ammo="metal_red_at_wire_missile";
		count=2;
		mass=50;
		initSpeed=40;
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
    ========================================= A280 ===========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_a280: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="Hazmat";
		_generalMacro="MET_IMP_a280";
		model="\JMSLLTE_weapons\a280\a280.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a280.rtm"
		};
		picture="\JMSLLTE_weapons\a280\ico_a280.paa";
		magazines[]=
		{
			"MET_A280_mag"
		};
		displayname="[Reb] A280 blaster rifle";
		descriptionShort="Blaster rifle<br />Ammo: A280 Energy cell<br />Manufactured by BlasTech Industries";
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
			"JMSLLTE_weapons\sounds\overheat_large_1.ogg",
			1,
			1,
			20
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
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
					"JMSLLTE_A280_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.171428571;
			dispersion=0.00022;
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
					"JMSLLTE_A280_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.171428571;
			dispersion=0.00022;
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
	class MET_IMP_a280stock: MET_IMP_a280
	{
		scope=2;
		author="Hazmat";
		_generalMacro="MET_IMP_a280stock";
		model="\JMSLLTE_weapons\a280\A280_stock.p3d";
		picture="\JMSLLTE_weapons\a280\ico_A280_stock.paa";
		displayname="[Reb] A280 blaster rifle (stock)";
	};
	class MET_IMP_a280c: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="Hazmat";
		_generalMacro="MET_IMP_a280c";
		model="\JMSLLTE_weapons\a280\a280c.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a280c.rtm"
		};
		picture="\JMSLLTE_weapons\a280\ico_a280c.paa";
		magazines[]=
		{
			"MET_A280C_mag"
		};
		displayname="[Reb] A280C blaster rifle";
		descriptionShort="Blaster rifle<br />Ammo: A280C Energy cell<br />Manufactured by BlasTech Industries";
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
			"JMSLLTE_weapons\sounds\overheat_large_1.ogg",
			1,
			1,
			20
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
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
					"JMSLLTE_A280C_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.2;
			dispersion=0.00017;
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
					"JMSLLTE_A280C_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.2;
			dispersion=0.00017;
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
		inertia=0.34;
		dexterity=1.7;
		initSpeed=300;
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
	class MET_IMP_a295: MET_IMP_a280c
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_a295";
		model="\JMSLLTE_weapons\a280\a280cr.p3d";
		picture="\JMSLLTE_weapons\a280\ico_A280cr.paa";
		magazines[]=
		{
			"MET_A295_mag"
		};
		displayname="[Reb] A295 blaster rifle";
		descriptionShort="Range blaster rifle<br />Ammo: A280CR Energy cell<br />Manufactured by BlasTech Industries";
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium",
			"far"
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
					"JMSLLTE_A280C_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.3;
			dispersion=0.00012;
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
					"JMSLLTE_A280C_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.3;
			dispersion=0.00012;
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
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class far: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=1000;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=300;
	};
	/*========================================================================================================================================
    ========================================= A180 ===========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_a180: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="Hazmat";
		_generalMacro="MET_IMP_a180";
		model="\JMSLLTE_weapons\a180\a180.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a180.rtm"
		};
		picture="\JMSLLTE_weapons\a180\ico_a180.paa";
		magazines[]=
		{
			"MET_A180_mag"
		};
		displayname="[Reb] A180 Blaster Carbine";
		descriptionShort="Convertible blaster carbine<br />Ammo: A180 Energy cell<br />Manufactured by BlasTech Industries";
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
			"JMSLLTE_weapons\sounds\overheat_mid_3.ogg",
			1,
			1,
			20
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
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
		recoil="3AS_recoil_DC15S";
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
					"JMSLLTE_A180_Shot_SoundSet",
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
					"JMSLLTE_A180_Shot_SoundSet",
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
					"MET_IMP_a180_bl_Scope",
					"MET_IMP_a280_bl_Scope",
					"MET_IMP_a280c_bl_Scope",
					"MET_IMP_a300_bl_Scope",
					"MET_IMP_a280_holo_Scope",
					"MET_IMP_DC15a_bl_Scope",
					"MET_IMP_dh17_holo_Scope",
					"MET_IMP_a180_bl_Scope",
					"MET_IMP_m45_bl_Scope"
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
	class MET_IMP_a180stock: MET_IMP_a180
	{
		scope=2;
		author="Hazmat";
		_generalMacro="MET_IMP_a180stock";
		model="\JMSLLTE_weapons\a180\A180stock.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a180_stock.rtm"
		};
		picture="\JMSLLTE_weapons\a180\ico_A180st.paa";
		displayname="[Reb] A180 Blaster Carbine (stock)";
		inertia=0.30000001;
	};
	class MET_IMP_a180rifle: MET_IMP_a180stock
	{
		scope=2;
		author="Hazmat";
		_generalMacro="MET_IMP_a180rifle";
		model="\JMSLLTE_weapons\a180\A180rifle.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a180_stock.rtm"
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
					"JMSLLTE_A180_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=0.0005;
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
					"JMSLLTE_A180_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.08;
			dispersion=0.0005;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		picture="\JMSLLTE_weapons\a180\ico_A180r.paa";
		displayname="[Reb] A180 Blaster Rifle";
		descriptionShort="Convertible blaster rifle<br />Ammo: A180 Energy cell<br />Manufactured by BlasTech Industries";
	};
	/*========================================================================================================================================
    ========================================= A300 ===========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_a300: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		model="JMSLLTE_weapons\a300\a300.p3d";
		picture="\JMSLLTE_weapons\a300\ico_a300.paa";
		magazines[]=
		{
			"MET_A300_mag"
		};
		displayname="[Reb] A300 Blaster Rifle";
		descriptionShort="Convertible blaster rifle<br />Ammo: A300 Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		maxZeroing=2000;
		cursor="srifle";
		maxRecoilSway=0.029999999;
		swayDecaySpeed=1.25;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a300.rtm"
		};
		recoil="MET_recoil_VK38X";
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
					"MET_IMP_dh17_holo_Scope",
					"MET_IMP_dlt19x_bl_Scope",
					"MET_IMP_m45_bl_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight_reb"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source="ammorandom";
				weapon="JMSLLTE_a300";
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
			"JMSLLTE_weapons\sounds\overheat_met_1.ogg",
			1,
			1,
			20
		};
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
			dispersion=0.000075;
			soundContinuous=0;
			reloadTime=0.4;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_A300_Shot_SoundSet",
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
					"JMSLLTE_A300_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mk20";
			recoilProne="recoil_auto_prone_mk20";
			reloadTime=0.12;
			dispersion=0.0012000001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
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
		inertia=1;
		dexterity=1;
		initSpeed=2000;
	};
	class MET_IMP_A310: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		model="JMSLLTE_weapons\a300\a300i.p3d";
		picture="\JMSLLTE_weapons\a300\ico_a300_ion.paa";
		magazines[]=
		{
			"MET_A300_mag"
		};
		displayname="[Reb] A310 blaster rifle";
		descriptionShort="Convertible blaster rifle<br />Ammo: A310 energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		maxZeroing=2000;
		cursor="srifle";
		maxRecoilSway=0.029999999;
		swayDecaySpeed=1.25;
		recoil="MET_recoil_VK38X";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a300.rtm"
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
					"MET_IMP_dh17_holo_Scope",
					"MET_IMP_dlt19x_bl_Scope",
					"MET_IMP_m45_bl_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight_reb"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzleFlashROT
			{
				source="ammorandom";
				weapon="JMSLLTE_a300_ion";
			};
		};
		modes[]=
		{
			"Single",
			"Burst",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_met_1.ogg",
			1,
			1,
			20
		};
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
			dispersion=0.00015;
			soundContinuous=0;
			reloadTime=0.2;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_A300ion_Shot_SoundSet",
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
		class Burst: Mode_Burst
		{
			dispersion=0.00015;
			soundContinuous=0;
			soundBurst=0;
			burst=3;
			reloadTime=0.00545454545;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"JMSLLTE_A300ion_Shot_SoundSet",
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
			maxRange=2500;
			maxRangeProbab=0.30000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		inertia=1;
		dexterity=1;
		initSpeed=2000;
	};
	class MET_IMP_a280cfe: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_a280cfe";
		model="\JMSLLTE_weapons\a300\a300c.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a300c.rtm"
		};
		picture="\JMSLLTE_weapons\a300\ico_a300с.paa";
		magazines[]=
		{
			"MET_A280CFE_mag"
		};
		displayname="[Reb] A280CFE blaster carbine";
		descriptionShort="Convertible blaster carbine<br />Ammo: A280CFE Energy cell<br />Manufactured by BlasTech Industries";
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
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
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
		recoil="MET_recoil_VK38X";
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
					"JMSLLTE_A300_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0011;
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
					"JMSLLTE_A300_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0011;
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
					"MET_IMP_a180_bl_Scope",
					"MET_IMP_a280_bl_Scope",
					"MET_IMP_a280c_bl_Scope",
					"MET_IMP_a300_bl_Scope",
					"MET_IMP_a280_holo_Scope",
					"MET_IMP_DC15a_bl_Scope",
					"MET_IMP_dh17_holo_Scope",
					"MET_IMP_dlt19x_bl_Scope",
					"MET_IMP_m45_bl_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight_reb"
				};
			};
		};
	};
	class MET_IMP_a475: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_a475";
		model="\JMSLLTE_weapons\a300\a475.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\JMSLLTE_weapons\anim\A_handanim_a475.rtm"
		};
		picture="\JMSLLTE_weapons\a300\ico_a475.paa";
		magazines[]=
		{
			"MET_E11_red_mag",
			"MET_E22_red_mag",
			"MET_A180_mag",
			"MET_A280_mag",
			"MET_A280C_mag",
			"MET_A296_mag"
		};
		displayname="[Reb] A475 Blaster Rifle";
		descriptionShort="Automatic blaster carbine<br />Ammo: A475 Energy cell<br />Manufactured by BlasTech Industries";
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
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
			"FullAuto",
			"FastAuto",
			"Brrrrrrt",
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
					"JMSLLTE_A300_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.1;
			dispersion=0.0011;
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
					"JMSLLTE_A300_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			textureType="burst";
			reloadTime=0.2;
			dispersion=0.0013;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class FastAuto: FullAuto
		{
			textureType="fullAuto";
			reloadTime=0.1;
			dispersion=0.0014;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		class Brrrrrrt: FullAuto
		{
			textureType="fastAuto";
			reloadTime=0.03;
			dispersion=0.0014;
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
		inertia=0.44999999;
		dexterity=1.7;
		initSpeed=300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
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
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight_reb"
				};
			};
		};
	};
	/*========================================================================================================================================
    ========================================= DH-17 ==========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_dh17: JMSLLTE_BlasterRifle_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_dh17";
		model="\JMSLLTE_weapons\dh17\dh17.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_dh17.rtm"
		};
		picture="\JMSLLTE_weapons\dh17\ico_dh17.paa";
		magazines[]=
		{
			"MET_DH17_mag"
		};
		displayname="[Reb] DH-17 Blaster Pistol";
		descriptionShort="Shipboard blaster pistol<br />Ammo: DH-17 Energy cell<br />Manufactured by BlasTech Industries";
		selectionFireAnim="muzzleFlash";
		maxZeroing=1000;
		discreteDistanceInitIndex=0;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		distanceZoomMin=300;
		distanceZoomMax=300;
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
			"JMSLLTE_weapons\sounds\overheat_mid_2.ogg",
			1,
			1,
			20
		};
		reloadAction="GestureReload_IDA_Reload_Blaster";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		soundBullet[]={};
		modes[]=
		{
			"Single",
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
					"JMSLLTE_DH17_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.109090909;
			dispersion=0.0006;
			minRange=2;
			minRangeProbab=0.5;
			midRange=250;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
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
					"MET_IMP_dh17_holo_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight_reb"
				};
			};
		};
	};
	class MET_IMP_dh17rifle: MET_IMP_dh17
	{
		scope=2;
		author="JMax & r2b";
		_generalMacro="MET_IMP_dh17rifle";
		model="\JMSLLTE_weapons\dh17\dh17r.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"JMSLLTE_weapons\anim\A_handanim_dh17r.rtm"
		};
		picture="\JMSLLTE_weapons\dh17\ico_DH17r.paa";
		magazines[]=
		{
			"MET_DH17_mag"
		};
		displayname="[Reb] DH-17 Blaster Rifle";
		descriptionShort="Shipboard blaster rifle<br />Ammo: DH-17R Energy cell<br />Manufactured by BlasTech Industries";
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
					"JMSLLTE_DH17_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			reloadTime=0.109090909;
			dispersion=0.0006;
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
					"JMSLLTE_DH17_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_auto_mx";
			recoilProne="recoil_auto_prone_mx";
			reloadTime=0.109090909;
			dispersion=0.0006;
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
		inertia=0.25;
		dexterity=1.7;
		initSpeed=300;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[]=
				{
					"MET_IMP_dh17r_holo_Scope"
				};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
			};
			class PointerSlot: PointerSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[]=
				{
					"JMSLLTE_acc_flashlight_reb"
				};
			};
		};
	};
	/*========================================================================================================================================
    ========================================= A-180 ==========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_a180pistol: JMSLLTE_BlasterPistol_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_a180pistol";
		model="\JMSLLTE_weapons\dl18\a180.p3d";
		picture="\JMSLLTE_weapons\dl18\ico_a180.paa";
		magazines[]=
		{
			"MET_A180_mag"
		};
		displayname="[Reb] A180 Blaster Pistol";
		descriptionShort="Blaster pistol<br />Ammo: A180 Energy cell<br />Manufactured by BlasTech Industries";
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_mid_3.ogg",
			1,
			1,
			20
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
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
					"JMSLLTE_A180_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.12;
			dispersion=0.000135;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=50;
			midRangeProbab=0.60000002;
			maxRange=100;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.44999999;
		dexterity=1.7;
		initSpeed=1500;
		recoil="recoil_pistol_4five";
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
	class MET_A180_Base_F: Pistol_Base_F
	{
		author="$STR_3as_Studio";
		magazines[]=
		{
			"MET_A180_mag"
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
					"3AS_A180_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"3AS_A180_SoundSet"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.12;
			dispersion=0.000135;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.25;
		aimTransitionSpeed=1.6;
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
				compatibleItems[]={};
				iconPosition[]={0.60000002,0.27000001};
				iconScale=0.15000001;
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
					"acc_flashlight_pistol"
				};
				iconPosition[]={0.47,0.55000001};
				iconScale=0.30000001;
			};
		};
	};
	class MET_A180_F: MET_A180_Base_F
	{
		scope=2;
		displayName="[Reb] A180 Sidearm";
		model="3as\3AS_Weapons\A180\model\3AS_A180_F.p3d";
		picture="3as\3AS_Weapons\A180\data\ui\3as_a180p_ca.paa";
		weaponInfoType="RscWeaponZeroing";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=15;
		};
	};
	/*========================================================================================================================================
    ========================================= A-280CFE =======================================================================================
    =========================================================================================================================================*/
	class MET_IMP_a280pistol: JMSLLTE_BlasterPistol_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_a280pistol";
		model="\JMSLLTE_weapons\dl18\a280cfe.p3d";
		picture="\JMSLLTE_weapons\dl18\ico_a280cfe.paa";
		magazines[]=
		{
			"MET_A280CFE_mag"
		};
		reloadAction="GestureReloadPistol";
		displayname="A280CFE blaster pistol";
		descriptionShort="Blaster pistol<br />Ammo: A300 Energy cell<br />Manufactured by BlasTech Industries";
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
		recoil="MET_recoil_VK38X";
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
					"JMSLLTE_A300_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0011;
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
					"JMSLLTE_A300_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.0011;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.1;
			aiRateOfFire=1e-006;
		};
		inertia=0.40000001;
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
					"MET_IMP_a180_bl_Scope",
					"MET_IMP_a280_bl_Scope",
					"MET_IMP_a280c_bl_Scope",
					"MET_IMP_a300_bl_Scope",
					"MET_IMP_a280_holo_Scope",
					"MET_IMP_DC15a_bl_Scope",
					"MET_IMP_dh17_holo_Scope",
					"MET_IMP_m45_bl_Scope"
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
	/*========================================================================================================================================
    ========================================= DL-44 ==========================================================================================
    =========================================================================================================================================*/
	class MET_IMP_dl44pistol: JMSLLTE_BlasterPistol_Base
	{
		scope=2;
		author="JMax";
		_generalMacro="MET_IMP_dl44pistol";
		model="\JMSLLTE_weapons\dl44\dl44.p3d";
		picture="\JMSLLTE_weapons\dl44\ico_dl44.paa";
		magazines[]=
		{
			"MET_DL44_mag"
		};
		displayname="[Ind] DL-44 Heavy Blaster Pistol";
		descriptionShort="Heavy blaster pistol<br />Ammo: DL-44 Energy cell<br />Manufactured by BlasTech Industries";
		drySound[]=
		{
			"JMSLLTE_weapons\sounds\overheat_mid_1.ogg",
			1,
			1,
			20
		};
		reloadAction="GestureReload_IDA_Reload_BlasterPistol";
		reloadMagazineSound[]=
		{
			"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",
			5,
			1,
			100
		};
		selectionFireAnim="muzzleFlash";
		soundBullet[]={};
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
		modelOptics="z\MET\addons\weapons\scopes\big_cross_green_full.p3d";
		opticsFlare=1;
		opticsDisablePeripherialVision=0;
		opticsZoomMin=0.1;
		opticsZoomMax=2.3;
		class OpticsModes
		{
			class DL44xscope
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
			class DL44Sturm: DL44xscope
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
				//discreteDistanceInitIndex=2;
				distanceZoomMin=300;
				distanceZoomMax=300;
				//discretefov[]={0.041999999,0.0099999998};
				discreteInitIndex=0;
				modelOptics="z\MET\addons\weapons\scopes\big_cross_green_full.p3d";
				weaponInfoType="RscWeaponEmpty";
			};
		};
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
					"JMSLLTE_DL44_Shot_SoundSet",
					"SDAR_Tail_SoundSet",
					"SDAR_InteriorTail_SoundSet"
				};
			};
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=0.15;
			dispersion=0.00135;
			minRange=1;
			minRangeProbab=0.30000001;
			midRange=35;
			midRangeProbab=0.60000002;
			maxRange=70;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		inertia=0.5;
		dexterity=1.7;
		initSpeed=1500;
		recoil="recoil_pistol_4five";
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
	/*========================================================================================================================================
    ========================================= Smart Launcher ==========================================================================================
    =========================================================================================================================================*/
	class MET_RPS6_AA;
	class MET_IMP_RPS6_AA: MET_RPS6_AA
	{
		displayName="[Reb] RPS-6 Smart Launcher";
		magazines[]=
		{
			"MET_SMRTLAUNCH_AA_SINGLE",
			"MET_SMRTLAUNCH_AP_SINGLE",
			"MET_SMRTLAUNCH_AT_SINGLE"
		};
	};
	/*========================================================================================================================================
    ==========================================================================================================================================
    ========================================= Attachments ====================================================================================
    ==========================================================================================================================================
    =========================================================================================================================================*/
	class MET_IMP_a180_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="A-1 blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\a180\a180scope.p3d";
		descriptionShort="A-Mk1 targeting sight<br />2xModes (Sight, NVG mode)<br />Used primary for: A-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="A-1 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
			class OpticsModes
			{
				class a180Col
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
				class a180Optic2: a180Col
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
					opticsZoomMin=0.0415;//6x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=350;
					distanceZoomMax=450;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_red_full.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_a280_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="A-2 blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\a280\a280scope.p3d";
		descriptionShort="A-Mk2 targeting sight<br />2xModes (Sight, NVG mode)<br />Used primary for: A-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="A-2 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_green_full.p3d";
			class OpticsModes
			{
				class a280Col
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
				class a280Optic2: a280Col
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
					opticsZoomMin=0.0415;//6x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=350;
					distanceZoomMax=450;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_green_easy.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_a280_holo_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="A-2 holo scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\a280\a280scopeHolo.p3d";
		descriptionShort="A-Mk2 holo sight<br />2xModes (Sight, Collimator)<br />Used primary for: A-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="A-2 Holo Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class a280hcq
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
				class a280hscope: a280hcq
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
	class MET_IMP_a280c_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="A-2C blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\a280\a280Cscope.p3d";
		descriptionShort="A-Mk2C targeting sight<br />2xModes (Sight, NVG mode)<br />Used primary for: A-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="A280C Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_green_med.p3d";
			class OpticsModes
			{
				class a280cCol
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
				class a280cOptic2: a280cCol
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
					opticsZoomMin=0.0415;//6x
					opticsZoomMax=0.125;//2x
					opticsZoomInit=0.125;//2x
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=550;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_green_med.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_a300_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="A-3 blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\A300\A300scope.p3d";
		descriptionShort="A-Mk3 targeting sight<br />3xModes (Sight, NVG, TI modes)<br />Used primary for: A-series";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="A300 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_green_full.p3d";
			class OpticsModes
			{
				class a300Col
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
				class a300Optic2: a300Col
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
						"NVG",
						"Ti"
					};
					thermalMode[]={2,3};
					opticsZoomMin=0.02;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;	
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=850;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_green_full.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_m45_bl_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="M-4 blaster scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\m45\m45scope.p3d";
		descriptionShort="M-Mk4 targeting sight<br />2xModes (Sight, NVG mode)<br />Used primary for: M-45";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="M-4 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_med.p3d";
			class OpticsModes
			{
				class a280cCol
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
				class a280cOptic2: a280cCol
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
						"NVG",
						"TI"
					};
					thermalMode[]={0,1};
					opticsZoomMin=0.02;
					opticsZoomMax=0.0625;
					opticsZoomInit=0.0625;	
					memoryPointCamera="opticView";
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=400;
					distanceZoomMax=550;
					modelOptics="z\MET\addons\weapons\scopes\big_cross_blue_med.p3d";
					weaponInfoType="RscWeaponEmpty";
				};
			};
		};
	};
	class MET_IMP_dh17_holo_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="DH17 holo scope";
		picture="\JMSLLTE_weapons\DH17\DH17_scope.paa";
		model="\JMSLLTE_weapons\DH17\DH17Scope.p3d";
		descriptionShort="DH targeting sight<br />2xModes (Sight, Collimator)<br />Used primary for: DH-17";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="DH17 Blaster Scope";
			opticType=2;
			optics=1;
			modelOptics="z\MET\addons\weapons\scopes\small_crosshair_red.p3d";
			class OpticsModes
			{
				class dhcq
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
				class dhscope: dhcq
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
	class MET_IMP_dh17r_holo_Scope: ItemCore
	{
		scope=2;
		author="JMax";
		displayName="DH17R holo scope";
		picture="\JMSLLTE_weapons\blasterE11\ui\E11_Scope.paa";
		model="\JMSLLTE_weapons\DH17\DH17rScope.p3d";
		descriptionShort="DHR targeting sight<br />2xModes (Sight, Collimator)<br />Used primary for: DH-17R";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=4;
			RMBhint="DHR Holo Scope";
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
};