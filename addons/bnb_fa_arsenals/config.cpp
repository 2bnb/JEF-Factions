class CfgPatches {
	class bnb_fa_arsenals {
		// Addon identity
		name = "JEF Factions - Arsenals";
		author = "JEF";
		authors[] = {
			"Ford",
			"Arend",
			"Woods"
		};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"cba_settings",
			"ace_arsenal",
			"bnb_fa_resupply"
		};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFunctions {
	class bnb_fa_arsenals {
		class functions {
			file="\x\bnb_fa\arsenals\functions";
			class arsenal {};
			class getArsenalFilter {};
			class updateNationOptions {};
			class updateCamoOptions {};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class bnb_fa_arsenals_preInit {
		init = "call compile preprocessFileLineNumbers '\x\bnb_fa\arsenals\XEH_clientPreInit.sqf';";
	};
};

class CfgVehicles {
	class BNB_FA_Resupply;
	
	// The object arsenals are no longer being used, but can remain in the mod to allow old missions to be loaded.	
	class BNB_FA_Resupply_Arsenal_UK : BNB_FA_Resupply {
	displayName = "Deprecated JEF Arsenal UK";
	scope = 1;
	};
		class BNB_FA_Resupply_Arsenal_Nor : BNB_FA_Resupply {
	displayName = "Deprecated JEF Arsenal Nordic";
	scope = 1;
	};
		class BNB_FA_Resupply_Arsenal_Bal : BNB_FA_Resupply {
	displayName = "Deprecated JEF Arsenal Baltic";
	scope = 1;
	};
	class BNB_FA_Resupply_Arsenal_Mis : BNB_FA_Resupply {
	displayName = "Deprecated JEF Arsenal Mission";
	scope = 1;

	};
	class BNB_FA_Resupply_Arsenal_Sta : BNB_FA_Resupply {
	displayName = "Deprecated JEF Arsenal Standard";
	scope = 1;
	};
	
};