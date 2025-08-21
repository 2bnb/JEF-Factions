#define STD_RF_Ammo(c) MAG_XX(##24,c)
#define ALT_RF_Ammo(c) MAG_XX(a,c)
#define STD_MX_Ammo(c) MAG_XX(a,c)
#define STD_MG_Ammo(c) MAG_XX(a,c)
#define STD_RF_Ammo(c) MAG_XX(a,c)

//These macros turn items and mags into the proper formatting for backpacks
#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

#define BNB_FA_Resupply_Crates(facCode,medName,ammoName,launchName,fullName) class BNB_FA_Resupply_Medical_##facCode : BNB_FA_Resupply {\
	displayName = #medName ;\
	scope = 2;\
	class TransportMagazines {\
		BNB_FA_Gen_Magazines_Medical\
		BNB_FA_Magazines_Medical\
	};\
	class TransportWeapons {\
		BNB_FA_Gen_Weapons_Medical\
		BNB_FA_Weapons_Medical\
	};\
	class TransportItems {\
		BNB_FA_Gen_Items_Medical\
		BNB_FA_Items_Medical\
	};\
};\
class BNB_FA_Resupply_Ammo_##facCode : BNB_FA_Resupply {\
	displayName = #ammoName ;\
	scope = 2;\
	class TransportMagazines {\
		BNB_FA_Gen_Magazines_Ammo\
		BNB_FA_Magazines_Ammo\
	};\
	class TransportWeapons {\
		BNB_FA_Gen_Weapons_Ammo\
		BNB_FA_Weapons_Ammo\
	};\
	class TransportItems {\
		BNB_FA_Gen_Items_Ammo\
		BNB_FA_Items_Ammo\
	};\
};\
class BNB_FA_Resupply_Launchers_##facCode : BNB_FA_Resupply {\
	displayName = #launchName;\
	scope = 2;\
	class TransportMagazines {\
		BNB_FA_Gen_Magazines_Launchers\
		BNB_FA_Magazines_Launchers\
	};\
	class TransportWeapons {\
		BNB_FA_Gen_Weapons_Launchers\
		BNB_FA_Weapons_Launchers\
	};\
	class TransportItems {\
		BNB_FA_Gen_Items_Launchers\
		BNB_FA_Items_Launchers\
	};\
};\
class BNB_FA_Resupply_Full_##facCode : BNB_FA_Resupply {\
	displayName = #fullName;\
	scope = 2;\
	class TransportMagazines {\
		BNB_FA_Gen_Magazines_Launchers\
		BNB_FA_Magazines_Launchers\
		BNB_FA_Gen_Magazines_Medical\
		BNB_FA_Magazines_Medical\
		BNB_FA_Gen_Magazines_Ammo\
		BNB_FA_Magazines_Ammo\
	};\
	class TransportWeapons {\
		BNB_FA_Gen_Weapons_Launchers\
		BNB_FA_Weapons_Launchers\
		BNB_FA_Gen_Weapons_Medical\
		BNB_FA_Weapons_Medical\
		BNB_FA_Gen_Weapons_Ammo\
		BNB_FA_Weapons_Ammo\
	};\
	class TransportItems {\
		BNB_FA_Gen_Items_Launchers\
		BNB_FA_Items_Launchers\
		BNB_FA_Gen_Items_Medical\
		BNB_FA_Items_Medical\
		BNB_FA_Gen_Items_Ammo\
		BNB_FA_Items_Ammo\
	};\
};