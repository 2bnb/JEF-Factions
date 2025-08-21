class CfgPatches {
	class BNB_FA_JEF {
		// Addon identity
		name = "JEF Factions";
		author = "JEF";
		authors[] = {"Carmichael (Amateur-god)",
			"Woods"};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {"ace_medical_treatment","ace_hearing","ace_flashlights","ace_maptools","ace_trenches","UK3CB_BAF_Equipment_NVG","ace_captives","ace_attach","ace_explosives","ace_tagging","A3_Weapons_F","UK3CB_BAF_Equipment_Soflam","UK3CB_BAF_Weapons_L85A3","UK3CB_BAF_Weapons_L9A1","UK3CB_BAF_Equipment_Uniforms","UK3CB_BAF_Equipment_Vests","UK3CB_BAF_Equipment_Helmets","UK3CB_BAF_Units_Woodland","ace_huntir","PB_Estonian_Kit","PB_Finnish_Kit","CUP_Weapons_Curator","PB_Spain_Kit","PB_Hungary_Kit","PB_German_Kit","PB_Norway_Kit","PB_Danish_Kit","PB_Latvian_Kit","PB_Universal_Kit","PB_Swedish_Kit","PB_Korean_Kit","PB_Canadian_Kit"};
		units[] = {"BNB_FA_UK_Rifleman_Woo",
		"BNB_FA_UK_Medic_Woo",
		"BNB_FA_UK_IC_Woo",
		"BNB_FA_UK_Rifleman_Des",
		"BNB_FA_UK_Medic_Des",
		"BNB_FA_UK_IC_Des",
		"BNB_FA_UK_Rifleman_Mul",
		"BNB_FA_UK_Medic_Mul",
		"BNB_FA_UK_IC_Mul",
		"BNB_FA_UK_Rifleman_Win",
		"BNB_FA_UK_Medic_Win",
		"BNB_FA_UK_IC_Win",
		"BNB_FA_Est_Rifleman_Woo",
		"BNB_FA_Est_Medic_Woo",
		"BNB_FA_Est_IC_Woo",
		"BNB_FA_Est_Rifleman_Des",
		"BNB_FA_Est_Medic_Des",
		"BNB_FA_Est_IC_Des",
		"BNB_FA_Est_Rifleman_Mul",
		"BNB_FA_Est_Medic_Mul",
		"BNB_FA_Est_IC_Mul",
		"BNB_FA_Est_Rifleman_Win",
		"BNB_FA_Est_Medic_Win",
		"BNB_FA_Est_IC_Win",
		"BNB_FA_Lit_Rifleman_Woo",
		"BNB_FA_Lit_Medic_Woo",
		"BNB_FA_Lit_IC_Woo",
		"BNB_FA_Lit_Rifleman_Des",
		"BNB_FA_Lit_Medic_Des",
		"BNB_FA_Lit_IC_Des",
		"BNB_FA_Lit_Rifleman_Mul",
		"BNB_FA_Lit_Medic_Mul",
		"BNB_FA_Lit_IC_Mul",
		"BNB_FA_Lit_Rifleman_Win",
		"BNB_FA_Lit_Medic_Win",
		"BNB_FA_Lit_IC_Win",
		"BNB_FA_Lat_Rifleman_Mul",
		"BNB_FA_Lat_Medic_Mul",
		"BNB_FA_Lat_IC_Mul",
		"BNB_FA_Lat_Rifleman_Win",
		"BNB_FA_Lat_Medic_Win",
		"BNB_FA_Lat_IC_Win",
		"BNB_FA_Fin_Rifleman_Woo",
		"BNB_FA_Fin_Medic_Woo",
		"BNB_FA_Fin_IC_Woo",
		"BNB_FA_Fin_Rifleman_Des",
		"BNB_FA_Fin_Medic_Des",
		"BNB_FA_Fin_IC_Des",
		"BNB_FA_Fin_Rifleman_Mul",
		"BNB_FA_Fin_Medic_Mul",
		"BNB_FA_Fin_IC_Mul",
		"BNB_FA_Fin_Rifleman_Win",
		"BNB_FA_Fin_Medic_Win",
		"BNB_FA_Fin_IC_Win",
		"BNB_FA_Den_Rifleman_Woo",
		"BNB_FA_Den_Medic_Woo",
		"BNB_FA_Den_IC_Woo",
		"BNB_FA_Den_Rifleman_Des",
		"BNB_FA_Den_Medic_Des",
		"BNB_FA_Den_IC_Des",
		"BNB_FA_Den_Rifleman_Mul",
		"BNB_FA_Den_Medic_Mul",
		"BNB_FA_Den_IC_Mul",
		"BNB_FA_Den_Rifleman_Win",
		"BNB_FA_Den_Medic_Win",
		"BNB_FA_Den_IC_Win",
		"BNB_FA_Nor_Rifleman_Woo",
		"BNB_FA_Nor_Medic_Woo",
		"BNB_FA_Nor_IC_Woo",
		"BNB_FA_Nor_Rifleman_Des",
		"BNB_FA_Nor_Medic_Des",
		"BNB_FA_Nor_IC_Des",
		"BNB_FA_Nor_Rifleman_Mul",
		"BNB_FA_Nor_Medic_Mul",
		"BNB_FA_Nor_IC_Mul",
		"BNB_FA_Nor_Rifleman_Win",
		"BNB_FA_Nor_Medic_Win",
		"BNB_FA_Nor_IC_Win",
		"BNB_FA_Swe_Rifleman_Woo",
		"BNB_FA_Swe_Medic_Woo",
		"BNB_FA_Swe_IC_Woo",
		"BNB_FA_Swe_Rifleman_Mul",
		"BNB_FA_Swe_Medic_Mul",
		"BNB_FA_Swe_IC_Mul",
		"BNB_FA_Swe_Rifleman_Win",
		"BNB_FA_Swe_Medic_Win",
		"BNB_FA_Swe_IC_Win"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

#include "\x\bnb_fa\JEF\configs\cfgMacros.hpp"
#include "\x\bnb_fa\JEF\configs\cfgGeneric.hpp"
#include "\x\bnb_fa\JEF\infantry\index.hpp"
#include "\x\bnb_fa\JEF\groups\index.hpp"
#include "\x\bnb_fa\JEF\weapons\index.hpp"


