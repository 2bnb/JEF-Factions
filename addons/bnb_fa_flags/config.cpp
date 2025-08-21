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
	scope = 1;						// accessibility: 0 = private, 1 = protected, 2 = public
	name = "Joint Expeditionary Force";			// name used in the Editor and other UIs
	icon = "\x\bnb_fa\flags\images\JEF_64.paa";		// marker icon
	texture = "\x\bnb_fa\flags\images\JEF_64.paa";	// ?
	color[] = { 1, 1, 1, 1 };		// Color used for the icon and text
	shadow = 0;						// 1 = shadow, 0 = no shadow
	markerClass = "Flags";	// ?
	side = 1;						// side ID (0 = OPFOR, 1 = BLUFOR, 2 = INDFOR etc)
	size = 32;						// default icon size
	showEditorMarkerColor = 1;		// whether to show icon color in the editor
};
};