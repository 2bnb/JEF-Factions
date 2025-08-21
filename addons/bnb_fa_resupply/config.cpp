class CfgPatches {
	class bnb_fa_resupply {
		// Addon identity
		name = "JEF - Resupply";
		author = "JEF";
		authors[] = {
			"Arend",
			"FarCry",
			"Woods"
		};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"ace_medical_treatment",
			"ace_grenades",
			"ace_explosives",
		};

		// Addon items
		units[] = {
			"BNB_FA_Resupply",
			"BNB_FA_Resupply_Ammo_UK",
			"BNB_FA_Resupply_Full_UK",
			"BNB_FA_Resupply_Launchers_UK",
			"BNB_FA_Resupply_Medical_UK",
			"BNB_FA_Resupply_Ammo_Bal",
			"BNB_FA_Resupply_Full_Bal",
			"BNB_FA_Resupply_Launchers_Bal",
			"BNB_FA_Resupply_Medical_Bal",
			"BNB_FA_Resupply_Ammo_Nor",
			"BNB_FA_Resupply_Full_Nor",
			"BNB_FA_Resupply_Launchers_Nor",
			"BNB_FA_Resupply_Medical_Nor",
			"BNB_FA_Resupply_Logi_Fuel",
			"BNB_FA_Resupply_Logi_Repair",
			"BNB_FA_Resupply_Logi_Ammo",
			"BNB_FA_Resupply_Logi_RRR",
			"BNB_FA_Resupply_Arsenal_UK",
			"BNB_FA_Resupply_Arsenal_Nor",
			"BNB_FA_Resupply_Arsenal_Bal",
			"BNB_FA_Resupply_Arsenal_Sta",
			"BNB_FA_Resupply_Arsenal_Sta"

		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};
#include "\x\bnb_fa\resupply\configs\cfgMacros.hpp"
#include "\x\bnb_fa\resupply\configs\cfgGeneric.hpp"


class CfgVehicles {
	class B_supplyCrate_F;
	class BNB_FA_Resupply : B_supplyCrate_F {
		author = "Arend";
		vehicleClass = "Ammo";
		scope = 0;
		transportMaxWeapons = 9002;
		transportMaxMagazines = 9002;
		transportMaxItems = 9002;
		maximumload = 9002;
		ace_dragging_ignoreWeight = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_ignoreWeightCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.5, 0.5};
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		class TransportMagazines {};
		class TransportWeapons {};
		class TransportBackpacks {};
		class TransportItems {};
	};
	#include "\x\bnb_fa\resupply\configs\cfgBal.hpp"
	BNB_FA_Resupply_Crates(Bal,JEF Baltic Medical,JEF Baltic Ammo,JEF Baltic Launchers,JEF Baltic Full)
	#include "\x\bnb_fa\resupply\configs\cfgNor.hpp"
	BNB_FA_Resupply_Crates(Nor,JEF Nordic Medical,JEF Nordic Ammo,JEF Nordic Launchers,JEF Nordic Full)
	#include "\x\bnb_fa\resupply\configs\cfgUK.hpp"
	BNB_FA_Resupply_Crates(UK,JEF UK Medical,JEF UK Ammo,JEF UK Launchers,JEF UK Full)

	class BNB_FA_Resupply_Logi_Fuel : BNB_FA_Resupply {
		displayName = "JEF Logi Fuel";
		scope = 2;
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"a3\structures_f\items\vessels\data\canisterfuel_co.paa"};
		ace_refuel_fuelCargo = 3000;
		ace_refuel_hooks[] = {{0,0,0}};
		ace_dragging_carryPosition[] = {0, 1, 0.5};
		ace_dragging_dragPosition[] = {0, 1, 0};
		ace_refuel_hoseLength = 6;
	};
	class BNB_FA_Resupply_Logi_Repair : BNB_FA_Resupply {
		displayName = "JEF Logi Repair";
		scope = 2;
		model = "\A3\Structures_F_Heli\Civ\Constructions\ToolTrolley_02_F.p3d";
		ace_repair_canRepair = 1;
		ace_dragging_carryPosition[] = {0, 1.5, 0.5};
		ace_dragging_dragPosition[] = {0, 1.5, 0};
		ace_dragging_dragDirection = 270;
		ace_dragging_carryDirection = 270;
	};
	class BNB_FA_Resupply_Logi_Ammo : BNB_FA_Resupply {
		displayName = "JEF Logi Ammo";
		scope = 2;
		model = "A3\Weapons_F\Ammoboxes\AmmoVeh_F";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
		ace_rearm_defaultSupply = 1200;
		ace_dragging_carryPosition[] = {0, 2, 0.5};
		ace_dragging_dragPosition[] = {0, 2, 0};

	};
	class BNB_FA_Resupply_Logi_RRR : BNB_FA_Resupply {
		displayName = "JEF Logi RRR";
		scope = 2;
		model = "\uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_weapons\Servicing_Point_Air.p3d";
		ace_refuel_fuelCargo = 3000;
		ace_refuel_hooks[] = {{0,-1.5,0},{0,-1.5,0}};
		ace_repair_canRepair = 1;
		ace_rearm_defaultSupply = 1200;
		ace_dragging_carryPosition[] = {0, 3, 0.5};
		ace_dragging_dragPosition[] = {0, 3, 0};
		ace_dragging_dragDirection = 270;
		ace_dragging_carryDirection = 270;
	};
	
	class BNB_FA_Resupply_Arsenal_UK : BNB_FA_Resupply {
	displayName = "JEF Arsenal UK";
	scope = 2;
	class EventHandlers {
		init = "['UK', _this] call bnb_fa_arsenals_fnc_arsenal;";
        };
	};
		class BNB_FA_Resupply_Arsenal_Nor : BNB_FA_Resupply {
	displayName = "JEF Arsenal Nordic";
	scope = 2;
	class EventHandlers {
		init = "['Nor', _this] call bnb_fa_arsenals_fnc_arsenal;";
        };
	};
		class BNB_FA_Resupply_Arsenal_Bal : BNB_FA_Resupply {
	displayName = "JEF Arsenal Baltic";
	scope = 2;
	class EventHandlers {
		init = "['Bal', _this] call bnb_fa_arsenals_fnc_arsenal;";
        };
	};
	class BNB_FA_Resupply_Arsenal_Mis : BNB_FA_Resupply {
	displayName = "JEF Arsenal Mission";
	scope = 2;
	class EventHandlers {
		init = "['Mis', _this] call bnb_fa_arsenals_fnc_arsenal;";
        };
	};
	class BNB_FA_Resupply_Arsenal_Sta : BNB_FA_Resupply {
	displayName = "JEF Arsenal Standard";
	scope = 2;
	class EventHandlers {
		init = "['Sta', _this] call bnb_fa_arsenals_fnc_arsenal;";
        };
	};
};