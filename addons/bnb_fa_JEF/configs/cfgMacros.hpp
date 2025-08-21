//These macros turn items and mags into the proper formatting for backpacks
#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }

#define BNB_FA_FactionClasses(natCode,unitNation) class BNB_FA_##natCode##_Faction\
	{\
		displayName = #unitNation ;\
		side = 1;\
		icon = "\A3\ui_f\data\map\markers\flags\UK_ca.paa";\
		priority = 1;\
	};
	
#define BNB_FA_EditorSubcategories(natCode,desName,mulName,winName,wooName) class BNB_FA_##natCode##_Desert \
	{\
		displayName = #desName;\
		};\
	class BNB_FA_##natCode##_Multicam \
	{\
		displayName = #mulName ;\
	};\
		class BNB_FA_##natCode##_Winter \
	{\
		displayName = #winName ;\
	};\
	class BNB_FA_##natCode##_Woodland \
	{\
		displayName = #wooName ;\
	};


#define BNB_FA_Sections(facCode,groupName,sectionClass,cmdClass,zeusClass,defaultClass,riflemanClass,icClass,medicClass) \
	class facCode \
	{\
		 name = #groupName ;\
		 class sectionClass \
		 {\
			name = "Section";\
			side = 1;\
			faction = #facCode ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= #icClass ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= #icClass ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= #medicClass ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= #riflemanClass ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=1;\
            		vehicle=#riflemanClass ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=1;\
            		vehicle=#riflemanClass ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=1;\
            		vehicle=#riflemanClass ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=1;\
            		vehicle=#riflemanClass ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 \
		 class cmdClass \
		 {\
			name = "Command";\
			side = 1;\
			faction = #facCode ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= #icClass ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= #icClass ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= #medicClass ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= #riflemanClass ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class zeusClass \
		 {\
			name = "Zeus";\
			side = 1;\
			faction = #facCode ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= #icClass ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= #icClass ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
		 };\
		 class defaultClass \
		 {\
			name = "Defaults";\
			side = 1;\
			faction = #facCode ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= #icClass ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= #medicClass ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= #riflemanClass ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
		 };\
	};



#define BNB_FA_Units_Desert(natCode,natFaction,facCode,rifPackCode,icPackCode,medPackCode) class BNB_FA_##natCode##_Rifleman_Des: B_Soldier_F \
	{\
		faction=#natFaction ;\
		editorSubcategory = #facCode ; \
		side = 1;\
		displayName="Rifleman Desert";\
		uniformClass=BNB_FA_Des_Uniform;\
		weapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		respawnWeapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		items[]={BNB_FA_Gen_Items};\
		respawnItems[]={BNB_FA_Gen_Items};\
		magazines[]={BNB_FA_Magazines};\
		respawnMagazines[]={BNB_FA_Magazines};\
		linkedItems[]={BNB_FA_Gen_LinkedItems,BNB_FA_Des_Helmet,BNB_FA_Des_Vest};\
		respawnLinkedItems[]={BNB_FA_Gen_LinkedItems,BNB_FA_Des_Helmet,BNB_FA_Des_Vest};\
		backpack=#rifPackCode;\
	};\
\
	class BNB_FA_##natCode##_Medic_Des: B_medic_F\
	{\
		faction=#natFaction ;\
		editorSubcategory = #facCode ; \
		side = 1;\
		displayName="Medic Desert";\
		uniformClass=BNB_FA_Des_Uniform;\
		weapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		respawnWeapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		items[]={BNB_FA_Gen_Items_Medic};\
		respawnItems[]={BNB_FA_Gen_Items_Medic};\
		magazines[]={BNB_FA_Magazines_Medic};\
		respawnMagazines[]={BNB_FA_Magazines_Medic};\
		linkedItems[]={BNB_FA_Gen_LinkedItems_Medic,BNB_FA_Des_Helmet,BNB_FA_Des_Vest};\
		respawnLinkedItems[]={BNB_FA_Gen_LinkedItems_Medic,BNB_FA_Des_Helmet,BNB_FA_Des_Vest};\
		backpack=#medPackCode;\
  };\
\
  class BNB_FA_##natCode##_IC_Des: B_Soldier_SL_F\
  {\
	faction=#natFaction ;\
	editorSubcategory = #facCode ; \
	side = 1;\
    displayName="IC Desert";\
    uniformClass=BNB_FA_Des_Uniform;\
    weapons[]={BNB_FA_RifleGL,BNB_FA_Pistol,BNB_FA_Gen_Binoculars,"Put","Throw"};\
    respawnWeapons[]={BNB_FA_RifleGL,BNB_FA_Pistol,BNB_FA_Gen_Binoculars,"Put","Throw"};\
    items[]={BNB_FA_Gen_Items_IC};\
    respawnItems[]={BNB_FA_Gen_Items_IC};\
    magazines[]={BNB_FA_Magazines_IC, BNB_FA_Gen_Binocular_Battery};\
    respawnMagazines[]={BNB_FA_Magazines_IC, BNB_FA_Gen_Binocular_Battery};\
    linkedItems[]={BNB_FA_Gen_LinkedItems_IC,BNB_FA_Gen_Binoculars,BNB_FA_Des_Helmet,BNB_FA_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_LinkedItems_IC,BNB_FA_Gen_Binoculars,BNB_FA_Des_Helmet,BNB_FA_Des_Vest};\
    backpack=#icPackCode;\
  };\
    class rifPackCode: BNB_FA_Des_Backpack\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines BNB_FA_TransportMagazines};\
    class TransportItems{BNB_FA_Gen_TransportItems};\
    class TransportWeapons{};\
  };\
\
  class medPackCode: BNB_FA_Des_Backpack_Medic\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines_Medic BNB_FA_TransportMagazines_Medic};\
	class TransportItems{BNB_FA_Gen_TransportItems_Medic};\
    class TransportWeapons{};\
  };\
\
  class icPackCode: BNB_FA_Des_Backpack_IC\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines_IC BNB_FA_TransportMagazines_IC};\
    class TransportItems{BNB_FA_Gen_TransportItems_IC};\
    class TransportWeapons{};\
  };\

#define BNB_FA_Units_Multicam(natCode,natFaction,facCode,rifPackCode,icPackCode,medPackCode) class BNB_FA_##natCode##_Rifleman_Mul: B_Soldier_F \
	{\
		faction=#natFaction ;\
		editorSubcategory = #facCode ; \
		side = 1;\
		displayName="Rifleman Multicam";\
		uniformClass=BNB_FA_Mul_Uniform;\
		weapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		respawnWeapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		items[]={BNB_FA_Gen_Items};\
		respawnItems[]={BNB_FA_Gen_Items};\
		magazines[]={BNB_FA_Magazines};\
		respawnMagazines[]={BNB_FA_Magazines};\
		linkedItems[]={BNB_FA_Gen_LinkedItems,BNB_FA_Mul_Helmet,BNB_FA_Mul_Vest};\
		respawnLinkedItems[]={BNB_FA_Gen_LinkedItems,BNB_FA_Mul_Helmet,BNB_FA_Mul_Vest};\
		backpack=#rifPackCode;\
	};\
\
	class BNB_FA_##natCode##_Medic_Mul: B_medic_F\
	{\
		faction=#natFaction ;\
		editorSubcategory = #facCode ; \
		side = 1;\
		displayName="Medic Multicam";\
		uniformClass=BNB_FA_Mul_Uniform;\
		weapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		respawnWeapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		items[]={BNB_FA_Gen_Items_Medic};\
		respawnItems[]={BNB_FA_Gen_Items_Medic};\
		magazines[]={BNB_FA_Magazines_Medic};\
		respawnMagazines[]={BNB_FA_Magazines_Medic};\
		linkedItems[]={BNB_FA_Gen_LinkedItems_Medic,BNB_FA_Mul_Helmet,BNB_FA_Mul_Vest};\
		respawnLinkedItems[]={BNB_FA_Gen_LinkedItems_Medic,BNB_FA_Mul_Helmet,BNB_FA_Mul_Vest};\
		backpack=#medPackCode;\
  };\
\
  class BNB_FA_##natCode##_IC_Mul: B_Soldier_SL_F\
  {\
	faction=#natFaction ;\
	editorSubcategory = #facCode ; \
	side = 1;\
    displayName="IC Multicam";\
    uniformClass=BNB_FA_Mul_Uniform;\
    weapons[]={BNB_FA_RifleGL,BNB_FA_Pistol,BNB_FA_Gen_Binoculars,"Put","Throw"};\
    respawnWeapons[]={BNB_FA_RifleGL,BNB_FA_Pistol,BNB_FA_Gen_Binoculars,"Put","Throw"};\
    items[]={BNB_FA_Gen_Items_IC};\
    respawnItems[]={BNB_FA_Gen_Items_IC};\
    magazines[]={BNB_FA_Magazines_IC, BNB_FA_Gen_Binocular_Battery};\
    respawnMagazines[]={BNB_FA_Magazines_IC, BNB_FA_Gen_Binocular_Battery};\
    linkedItems[]={BNB_FA_Gen_LinkedItems_IC,BNB_FA_Gen_Binoculars,BNB_FA_Mul_Helmet,BNB_FA_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_LinkedItems_IC,BNB_FA_Gen_Binoculars,BNB_FA_Mul_Helmet,BNB_FA_Mul_Vest};\
    backpack=#icPackCode;\
  };\
    class rifPackCode: BNB_FA_Mul_Backpack\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines BNB_FA_TransportMagazines};\
    class TransportItems{BNB_FA_Gen_TransportItems};\
    class TransportWeapons{};\
  };\
\
  class medPackCode: BNB_FA_Mul_Backpack_Medic\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines_Medic BNB_FA_TransportMagazines_Medic};\
	class TransportItems{BNB_FA_Gen_TransportItems_Medic};\
    class TransportWeapons{};\
  };\
\
  class icPackCode: BNB_FA_Mul_Backpack_IC\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines_IC BNB_FA_TransportMagazines_IC};\
    class TransportItems{BNB_FA_Gen_TransportItems_IC};\
    class TransportWeapons{};\
  };\

#define BNB_FA_Units_Winter(natCode,natFaction,facCode,rifPackCode,icPackCode,medPackCode) class BNB_FA_##natCode##_Rifleman_Win: B_Soldier_F \
	{\
		faction=#natFaction ;\
		editorSubcategory = #facCode ; \
		side = 1;\
		displayName="Rifleman Winter";\
		uniformClass=BNB_FA_Win_Uniform;\
		weapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		respawnWeapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		items[]={BNB_FA_Gen_Items};\
		respawnItems[]={BNB_FA_Gen_Items};\
		magazines[]={BNB_FA_Magazines};\
		respawnMagazines[]={BNB_FA_Magazines};\
		linkedItems[]={BNB_FA_Gen_LinkedItems,BNB_FA_Win_Helmet,BNB_FA_Win_Vest};\
		respawnLinkedItems[]={BNB_FA_Gen_LinkedItems,BNB_FA_Win_Helmet,BNB_FA_Win_Vest};\
		backpack=#rifPackCode;\
	};\
\
	class BNB_FA_##natCode##_Medic_Win: B_medic_F\
	{\
		faction=#natFaction ;\
		editorSubcategory = #facCode ; \
		side = 1;\
		displayName="Medic Winter";\
		uniformClass=BNB_FA_Win_Uniform;\
		weapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		respawnWeapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		items[]={BNB_FA_Gen_Items_Medic};\
		respawnItems[]={BNB_FA_Gen_Items_Medic};\
		magazines[]={BNB_FA_Magazines_Medic};\
		respawnMagazines[]={BNB_FA_Magazines_Medic};\
		linkedItems[]={BNB_FA_Gen_LinkedItems_Medic,BNB_FA_Win_Helmet,BNB_FA_Win_Vest};\
		respawnLinkedItems[]={BNB_FA_Gen_LinkedItems_Medic,BNB_FA_Win_Helmet,BNB_FA_Win_Vest};\
		backpack=#medPackCode;\
  };\
\
  class BNB_FA_##natCode##_IC_Win: B_Soldier_SL_F\
  {\
	faction=#natFaction ;\
	editorSubcategory = #facCode ; \
	side = 1;\
    displayName="IC Winter";\
    uniformClass=BNB_FA_Win_Uniform;\
    weapons[]={BNB_FA_RifleGL,BNB_FA_Pistol,BNB_FA_Gen_Binoculars,"Put","Throw"};\
    respawnWeapons[]={BNB_FA_RifleGL,BNB_FA_Pistol,BNB_FA_Gen_Binoculars,"Put","Throw"};\
    items[]={BNB_FA_Gen_Items_IC};\
    respawnItems[]={BNB_FA_Gen_Items_IC};\
    magazines[]={BNB_FA_Magazines_IC, BNB_FA_Gen_Binocular_Battery};\
    respawnMagazines[]={BNB_FA_Magazines_IC, BNB_FA_Gen_Binocular_Battery};\
    linkedItems[]={BNB_FA_Gen_LinkedItems_IC,BNB_FA_Gen_Binoculars,BNB_FA_Win_Helmet,BNB_FA_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_LinkedItems_IC,BNB_FA_Gen_Binoculars,BNB_FA_Win_Helmet,BNB_FA_Win_Vest};\
    backpack=#icPackCode;\
  };\
      class rifPackCode: BNB_FA_Win_Backpack\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines BNB_FA_TransportMagazines};\
    class TransportItems{BNB_FA_Gen_TransportItems};\
    class TransportWeapons{};\
  };\
\
  class medPackCode: BNB_FA_Win_Backpack_Medic\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines_Medic BNB_FA_TransportMagazines_Medic};\
	class TransportItems{BNB_FA_Gen_TransportItems_Medic};\
    class TransportWeapons{};\
  };\
\
  class icPackCode: BNB_FA_Win_Backpack_IC\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines_IC BNB_FA_TransportMagazines_IC};\
    class TransportItems{BNB_FA_Gen_TransportItems_IC};\
    class TransportWeapons{};\
  };\
  
#define BNB_FA_Units_Woodland(natCode,natFaction,facCode,rifPackCode,icPackCode,medPackCode) class BNB_FA_##natCode##_Rifleman_Woo: B_Soldier_F \
	{\
		faction=#natFaction ;\
		editorSubcategory = #facCode ; \
		side = 1;\
		displayName="Rifleman Woodland";\
		uniformClass=BNB_FA_Woo_Uniform;\
		weapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		respawnWeapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		items[]={BNB_FA_Gen_Items};\
		respawnItems[]={BNB_FA_Gen_Items};\
		magazines[]={BNB_FA_Magazines};\
		respawnMagazines[]={BNB_FA_Magazines};\
		linkedItems[]={BNB_FA_Gen_LinkedItems,BNB_FA_Woo_Helmet,BNB_FA_Woo_Vest};\
		respawnLinkedItems[]={BNB_FA_Gen_LinkedItems,BNB_FA_Woo_Helmet,BNB_FA_Woo_Vest};\
		backpack=#rifPackCode;\
	};\
\
	class BNB_FA_##natCode##_Medic_Woo: B_medic_F\
	{\
		faction=#natFaction ;\
		editorSubcategory = #facCode ; \
		side = 1;\
		displayName="Medic Woodland";\
		uniformClass=BNB_FA_Woo_Uniform;\
		weapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		respawnWeapons[]={BNB_FA_Rifle,BNB_FA_Pistol,"Put","Throw"};\
		items[]={BNB_FA_Gen_Items_Medic};\
		respawnItems[]={BNB_FA_Gen_Items_Medic};\
		magazines[]={BNB_FA_Magazines_Medic};\
		respawnMagazines[]={BNB_FA_Magazines_Medic};\
		linkedItems[]={BNB_FA_Gen_LinkedItems_Medic,BNB_FA_Woo_Helmet,BNB_FA_Woo_Vest};\
		respawnLinkedItems[]={BNB_FA_Gen_LinkedItems_Medic,BNB_FA_Woo_Helmet,BNB_FA_Woo_Vest};\
		backpack=#medPackCode;\
  };\
\
  class BNB_FA_##natCode##_IC_Woo: B_Soldier_SL_F\
  {\
	faction=#natFaction ;\
	editorSubcategory = #facCode ; \
	side = 1;\
    displayName="IC Woodland";\
    uniformClass=BNB_FA_Woo_Uniform;\
    weapons[]={BNB_FA_RifleGL,BNB_FA_Pistol,BNB_FA_Gen_Binoculars,"Put","Throw"};\
    respawnWeapons[]={BNB_FA_RifleGL,BNB_FA_Pistol,BNB_FA_Gen_Binoculars,"Put","Throw"};\
    items[]={BNB_FA_Gen_Items_IC};\
    respawnItems[]={BNB_FA_Gen_Items_IC};\
    magazines[]={BNB_FA_Magazines_IC, BNB_FA_Gen_Binocular_Battery};\
    respawnMagazines[]={BNB_FA_Magazines_IC, BNB_FA_Gen_Binocular_Battery};\
    linkedItems[]={BNB_FA_Gen_LinkedItems_IC,BNB_FA_Gen_Binoculars,BNB_FA_Woo_Helmet,BNB_FA_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_LinkedItems_IC,BNB_FA_Gen_Binoculars,BNB_FA_Woo_Helmet,BNB_FA_Woo_Vest};\
    backpack=#icPackCode;\
  };\
      class rifPackCode: BNB_FA_Woo_Backpack\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines BNB_FA_TransportMagazines};\
    class TransportItems{BNB_FA_Gen_TransportItems};\
    class TransportWeapons{};\
  };\
\
  class medPackCode: BNB_FA_Woo_Backpack_Medic\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines_Medic BNB_FA_TransportMagazines_Medic};\
	class TransportItems{BNB_FA_Gen_TransportItems_Medic};\
    class TransportWeapons{};\
  };\
\
  class icPackCode: BNB_FA_Woo_Backpack_IC\
  {\
    scope=2;\
    class TransportMagazines{BNB_FA_Gen_TransportMagazines_IC BNB_FA_TransportMagazines_IC};\
    class TransportItems{BNB_FA_Gen_TransportItems_IC};\
    class TransportWeapons{};\
  };\

