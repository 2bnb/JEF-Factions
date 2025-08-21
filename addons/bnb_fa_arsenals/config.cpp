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
			"ace_arsenal"
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
		//	class fullHeal {};
			class getArsenalFilter {};
		//	class teleport {};
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