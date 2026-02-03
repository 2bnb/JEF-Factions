class CfgPatches {
	class bnb_fa_flag {
		// Addon identity
		name = "JEF - Flags and Markers";
		author = "JEF";
		authors[] = {
			"Woods"
		};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {

		};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};
class CfgMarkers{
class Flag;
class BNB_FA_Flag_JEF : Flag
{
	scope = 2;
	name = "Joint Expeditionary Force";	
	icon = "\x\bnb_fa\flags\images\JEF_64.paa";
	texture = "\x\bnb_fa\flags\images\JEF_64.paa";
	color[] = { 1, 1, 1, 1 };
	shadow = 0;	
	markerClass = "Flags";
	side = 1;
	size = 32;
	showEditorMarkerColor = 1;
};
};