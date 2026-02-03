//These macros turn items and mags into the proper formatting for backpacks
#define MAG_XX(a,b) class _xx_##a { magazine = a; count = b; }
#define WEAP_XX(a,b) class _xx_##a { weapon = a; count = b; }
#define ITEM_XX(a,b) class _xx_##a { name = a; count = b; }


#define BNB_FA_Weapons(natCode) class BNB_FA_Weap_##natCode##_Crew: BNB_FA_Crew {\
	scope=2;\
    class LinkedItems {\
        BNB_FA_Crew_OPTIC_CLASS\
        BNB_FA_Crew_RAIL_CLASS\
        BNB_FA_Crew_MUZZLE_CLASS\
        BNB_FA_Crew_UNDERB_CLASS\
		};\
	};\
		class BNB_FA_Weap_##natCode##_GL: BNB_FA_GL {\
	scope=2;\
    class LinkedItems {\
        BNB_FA_GL_OPTIC_CLASS\
        BNB_FA_GL_RAIL_CLASS\
        BNB_FA_GL_MUZZLE_CLASS\
        BNB_FA_GL_UNDERB_CLASS\
		};\
	};\
	class BNB_FA_Weap_##natCode##_LMG: BNB_FA_LMG {\
	scope=2;\
    class LinkedItems {\
		BNB_FA_LMG_OPTIC_CLASS\
        BNB_FA_LMG_RAIL_CLASS\
        BNB_FA_LMG_MUZZLE_CLASS\
        BNB_FA_LMG_UNDERB_CLASS\
		};\
	};\
	class BNB_FA_Weap_##natCode##_MX: BNB_FA_MX {\
	scope=2;\
    class LinkedItems {\
        BNB_FA_MX_OPTIC_CLASS\
        BNB_FA_MX_RAIL_CLASS\
        BNB_FA_MX_MUZZLE_CLASS\
        BNB_FA_MX_UNDERB_CLASS\
		};\
	};\
	class BNB_FA_Weap_##natCode##_Std: BNB_FA_Std {\
	scope=2;\
    class LinkedItems {\
        BNB_FA_Std_OPTIC_CLASS\
        BNB_FA_Std_RAIL_CLASS\
        BNB_FA_Std_MUZZLE_CLASS\
        BNB_FA_Std_UNDERB_CLASS\
		};\
	};


#define BNB_FA_FactionClasses(natCode,unitNation) class BNB_FA_##natCode##_Faction_BluFor\
	{\
		displayName = #unitNation ;\
		side = 1;\
		icon = "\A3\ui_f\data\map\markers\flags\UK_ca.paa";\
		priority = 1;\
	};\
	class BNB_FA_##natCode##_Faction_OpFor\
	{\
		displayName = #unitNation ;\
		side = 0;\
		icon = "\A3\ui_f\data\map\markers\flags\UK_ca.paa";\
		priority = 1;\
	};\
		class BNB_FA_##natCode##_Faction_IndFor\
	{\
		displayName = #unitNation ;\
		side = 2;\
		icon = "\A3\ui_f\data\map\markers\flags\UK_ca.paa";\
		priority = 1;\
	};
	
#define BNB_FA_EditorSubcategories(natCode) class BNB_FA_##natCode##_Desert_BluFor \
	{\
		displayName = Desert ;\
		};\
	class BNB_FA_##natCode##_Multicam_BluFor \
	{\
		displayName = Multicam ;\
	};\
		class BNB_FA_##natCode##_Winter_BluFor \
	{\
		displayName = Winter ;\
	};\
	class BNB_FA_##natCode##_Woodland_BluFor \
	{\
		displayName = Woodland ;\
	};\
	class BNB_FA_##natCode##_Desert_OpFor \
	{\
		displayName = Desert ;\
		};\
	class BNB_FA_##natCode##_Multicam_OpFor \
	{\
		displayName = Multicam ;\
	};\
		class BNB_FA_##natCode##_Winter_OpFor \
	{\
		displayName = Winter ;\
	};\
	class BNB_FA_##natCode##_Woodland_OpFor \
	{\
		displayName = Woodland ;\
	};\
	class BNB_FA_##natCode##_Desert_IndFor \
	{\
		displayName = Desert ;\
		};\
	class BNB_FA_##natCode##_Multicam_IndFor \
	{\
		displayName = Multicam ;\
	};\
		class BNB_FA_##natCode##_Winter_IndFor \
	{\
		displayName = Winter ;\
	};\
	class BNB_FA_##natCode##_Woodland_IndFor \
	{\
		displayName = Woodland ;\
	};

#define BNB_FA_Sections_BluFor(natCode,camCode,camName) \
	class BNB_FA_##natCode##_##camCode##_BluFor \
	{\
		name = camName ;\
		class BNB_FA_##natCode##_Player_Section_##camCode##_BluFor \
		 {\
			name = "Player Section";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 		class BNB_FA_##natCode##_Assault_Section_##camCode##_BluFor \
		 {\
			name = "Assault Section";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Marksman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Weapons_Section_##camCode##_BluFor \
		 {\
			name = "Weapons Section";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 \
		 		 		class BNB_FA_##natCode##_Support_Section_##camCode##_BluFor \
		 {\
			name = "Support Section";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_AA_Fireteam_##camCode##_BluFor \
		 {\
			name = "Anti-Air Fireteam";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_AT_Fireteam_##camCode##_BluFor \
		 {\
			name = "Anti-Tank Fireteam";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Assault_Fireteam_##camCode##_BluFor \
		 {\
			name = "Assault Fireteam";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Command_Fireteam_##camCode##_BluFor \
		 {\
			name = "Command";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_JFO_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Recon_Fireteam_##camCode##_BluFor \
		 {\
			name = "Recon Fireteam";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Marksman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Weapons_Fireteam_##camCode##_BluFor \
		 {\
			name = "Weapons Fireteam";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		};\
		class BNB_FA_##natCode##_Sentry_##camCode##_BluFor \
		{\
			name = "Sentry Pair";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_Marksman_##camCode##_BluFor ;\
           			rank="CORPORAL";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-3,0};\
          		};\
		};\
		class BNB_FA_##natCode##_Pilot_##camCode##_BluFor \
		{\
			name = "Pilot Group";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_Pilot_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_Pilot_##camCode##_BluFor ;\
           			rank="PRIVATE";\
           			position[]={0,-6,0};\
         		};\
				class Unit3\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		};\
				class BNB_FA_##natCode##_Crew_##camCode##_BluFor \
		{\
			name = "Crew Group";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_Crew_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Crew_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_Crew_##camCode##_BluFor ;\
           			rank="PRIVATE";\
           			position[]={0,-6,0};\
         		};\
		};\
		class BNB_FA_##natCode##_Zeus_##camCode##_BluFor \
		 {\
			name = "Zeus";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Default_##camCode##_BluFor \
		 {\
			name = "Defaults";\
			side = 1;\
			faction = BNB_FA_##natCode##_##camCode##_BluFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_AA_##camCode##_BluFor ;\
           			rank="PRIVATE";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Crew_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_EOD_##camCode##_BluFor ;\
           			rank="PRIVATE";\
           			position[]={0,-9,0};\
         		};\
				class Unit4\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-12,0};\
          		};\
				class Unit5\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-15,0};\
          		};\
				class Unit6\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_JFO_##camCode##_BluFor ;\
           			rank="PRIVATE";\
           			position[]={0,-18,0};\
         		};\
				class Unit7\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-21,0};\
          		};\
				class Unit8\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-24,0};\
          		};\
				class Unit9\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_Marksman_##camCode##_BluFor ;\
           			rank="PRIVATE";\
           			position[]={0,-27,0};\
         		};\
				class Unit10\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-30,0};\
          		};\
				class Unit11\
          		{\
            		side=1;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_BluFor ;\
            		rank="PRIVATE";\
            		position[]={0,-33,0};\
          		};\
				class Unit12\
        		{\
           			side=1;\
          			vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_BluFor ;\
           			rank="PRIVATE";\
           			position[]={0,-36,0};\
         		};\
		 };\
	};

#define BNB_FA_Sections_OpFor(natCode,camCode,camName) \
	class BNB_FA_##natCode##_##camCode##_OpFor \
	{\
		name = camName ;\
		class BNB_FA_##natCode##_Player_Section_##camCode##_OpFor \
		 {\
			name = "Player Section";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 		class BNB_FA_##natCode##_Assault_Section_##camCode##_OpFor \
		 {\
			name = "Assault Section";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Marksman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Weapons_Section_##camCode##_OpFor \
		 {\
			name = "Weapons Section";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 \
		 		 		class BNB_FA_##natCode##_Support_Section_##camCode##_OpFor \
		 {\
			name = "Support Section";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_AA_Fireteam_##camCode##_OpFor \
		 {\
			name = "Anti-Air Fireteam";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_AT_Fireteam_##camCode##_OpFor \
		 {\
			name = "Anti-Tank Fireteam";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Assault_Fireteam_##camCode##_OpFor \
		 {\
			name = "Assault Fireteam";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Command_Fireteam_##camCode##_OpFor \
		 {\
			name = "Command";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_JFO_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Recon_Fireteam_##camCode##_OpFor \
		 {\
			name = "Recon Fireteam";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Marksman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Weapons_Fireteam_##camCode##_OpFor \
		 {\
			name = "Weapons Fireteam";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		};\
		class BNB_FA_##natCode##_Sentry_##camCode##_OpFor \
		{\
			name = "Sentry Pair";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_Marksman_##camCode##_OpFor ;\
           			rank="CORPORAL";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-3,0};\
          		};\
		};\
		class BNB_FA_##natCode##_Pilot_##camCode##_OpFor \
		{\
			name = "Pilot Group";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_Pilot_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_Pilot_##camCode##_OpFor ;\
           			rank="PRIVATE";\
           			position[]={0,-6,0};\
         		};\
				class Unit3\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		};\
				class BNB_FA_##natCode##_Crew_##camCode##_OpFor \
		{\
			name = "Crew Group";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_Crew_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Crew_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_Crew_##camCode##_OpFor ;\
           			rank="PRIVATE";\
           			position[]={0,-6,0};\
         		};\
		};\
		class BNB_FA_##natCode##_Zeus_##camCode##_OpFor \
		 {\
			name = "Zeus";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Default_##camCode##_OpFor \
		 {\
			name = "Defaults";\
			side = 0;\
			faction = BNB_FA_##natCode##_##camCode##_OpFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_AA_##camCode##_OpFor ;\
           			rank="PRIVATE";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Crew_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_EOD_##camCode##_OpFor ;\
           			rank="PRIVATE";\
           			position[]={0,-9,0};\
         		};\
				class Unit4\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-12,0};\
          		};\
				class Unit5\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-15,0};\
          		};\
				class Unit6\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_JFO_##camCode##_OpFor ;\
           			rank="PRIVATE";\
           			position[]={0,-18,0};\
         		};\
				class Unit7\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-21,0};\
          		};\
				class Unit8\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-24,0};\
          		};\
				class Unit9\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_Marksman_##camCode##_OpFor ;\
           			rank="PRIVATE";\
           			position[]={0,-27,0};\
         		};\
				class Unit10\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-30,0};\
          		};\
				class Unit11\
          		{\
            		side=0;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_OpFor ;\
            		rank="PRIVATE";\
            		position[]={0,-33,0};\
          		};\
				class Unit12\
        		{\
           			side=0;\
          			vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_OpFor ;\
           			rank="PRIVATE";\
           			position[]={0,-36,0};\
         		};\
		 };\
	};
	
#define BNB_FA_Sections_IndFor(natCode,camCode,camName) \
	class BNB_FA_##natCode##_##camCode##_IndFor \
	{\
		name = camName ;\
		class BNB_FA_##natCode##_Player_Section_##camCode##_IndFor \
		 {\
			name = "Player Section";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 		class BNB_FA_##natCode##_Assault_Section_##camCode##_IndFor \
		 {\
			name = "Assault Section";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Marksman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Weapons_Section_##camCode##_IndFor \
		 {\
			name = "Weapons Section";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 \
		 		 		class BNB_FA_##natCode##_Support_Section_##camCode##_IndFor \
		 {\
			name = "Support Section";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
				class Unit4\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,0,0};\
          		};\
				class Unit5\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-3,0};\
          		};\
				class Unit6\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-6,0};\
          		};\
				class Unit7\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={1,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_AA_Fireteam_##camCode##_IndFor \
		 {\
			name = "Anti-Air Fireteam";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_AA_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_AT_Fireteam_##camCode##_IndFor \
		 {\
			name = "Anti-Tank Fireteam";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Assault_Fireteam_##camCode##_IndFor \
		 {\
			name = "Assault Fireteam";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Command_Fireteam_##camCode##_IndFor \
		 {\
			name = "Command";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_JFO_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Recon_Fireteam_##camCode##_IndFor \
		 {\
			name = "Recon Fireteam";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Marksman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_EOD_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Weapons_Fireteam_##camCode##_IndFor \
		 {\
			name = "Weapons Fireteam";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		};\
		class BNB_FA_##natCode##_Sentry_##camCode##_IndFor \
		{\
			name = "Sentry Pair";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_Marksman_##camCode##_IndFor ;\
           			rank="CORPORAL";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-3,0};\
          		};\
		};\
		class BNB_FA_##natCode##_Pilot_##camCode##_IndFor \
		{\
			name = "Pilot Group";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_Pilot_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_Pilot_##camCode##_IndFor ;\
           			rank="PRIVATE";\
           			position[]={0,-6,0};\
         		};\
				class Unit3\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-9,0};\
          		};\
		};\
				class BNB_FA_##natCode##_Crew_##camCode##_IndFor \
		{\
			name = "Crew Group";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_Crew_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Crew_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_Crew_##camCode##_IndFor ;\
           			rank="PRIVATE";\
           			position[]={0,-6,0};\
         		};\
		};\
		class BNB_FA_##natCode##_Zeus_##camCode##_IndFor \
		 {\
			name = "Zeus";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
           			rank="SERGEANT";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
            		rank="CORPORAL";\
            		position[]={0,-3,0};\
          		};\
		 };\
		 class BNB_FA_##natCode##_Default_##camCode##_IndFor \
		 {\
			name = "Defaults";\
			side = 2;\
			faction = BNB_FA_##natCode##_##camCode##_IndFor ; \
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";\
				class Unit0\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_AA_##camCode##_IndFor ;\
           			rank="PRIVATE";\
           			position[]={0,0,0};\
         		};\
				class Unit1\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_AT_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-3,0};\
          		};\
				class Unit2\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Crew_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-6,0};\
          		};\
				class Unit3\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_EOD_##camCode##_IndFor ;\
           			rank="PRIVATE";\
           			position[]={0,-9,0};\
         		};\
				class Unit4\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_GL_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-12,0};\
          		};\
				class Unit5\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_HAT_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-15,0};\
          		};\
				class Unit6\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_JFO_##camCode##_IndFor ;\
           			rank="PRIVATE";\
           			position[]={0,-18,0};\
         		};\
				class Unit7\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_IC_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-21,0};\
          		};\
				class Unit8\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_LMG_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-24,0};\
          		};\
				class Unit9\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_Marksman_##camCode##_IndFor ;\
           			rank="PRIVATE";\
           			position[]={0,-27,0};\
         		};\
				class Unit10\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Medic_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-30,0};\
          		};\
				class Unit11\
          		{\
            		side=2;\
            		vehicle= BNB_FA_##natCode##_Pilot_##camCode##_IndFor ;\
            		rank="PRIVATE";\
            		position[]={0,-33,0};\
          		};\
				class Unit12\
        		{\
           			side=2;\
          			vehicle= BNB_FA_##natCode##_Rifleman_##camCode##_IndFor ;\
           			rank="PRIVATE";\
           			position[]={0,-36,0};\
         		};\
		 };\
	};

#define BNB_FA_Units_Desert(natCode) class BNB_FA_##natCode##_AA_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (AA)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_AA_Des_Uniform;\
    weapons[]={BNB_FA_AA_Primary BNB_FA_AA_Pistol BNB_FA_AA_Launcher BNB_FA_AA_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_AA_Primary BNB_FA_AA_Pistol BNB_FA_AA_Launcher BNB_FA_AA_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_AA_Items BNB_FA_AA_Items};\
    respawnItems[]={BNB_FA_Gen_AA_Items BNB_FA_AA_Items};\
    magazines[]={BNB_FA_Gen_AA_Magazines BNB_FA_AA_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_AA_Magazines BNB_FA_AA_Magazines};\
    linkedItems[]={BNB_FA_Gen_AA_LinkedItems BNB_FA_AA_Des_Helmet BNB_FA_AA_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_AA_LinkedItems BNB_FA_AA_Des_Helmet BNB_FA_AA_Des_Vest};\
    backpack= BNB_FA_##natCode##_AA_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_AA_Des_OpFor: BNB_FA_##natCode##_AA_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_AA_Des_IndFor: BNB_FA_##natCode##_AA_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_AA_Des_Pack: BNB_FA_AA_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_AA_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_AA_TransportMagazines BNB_FA_AA_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_AA_TransportItems BNB_FA_AA_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_AA_TransportWeapons BNB_FA_AA_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_AT_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (AT)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_AT_Des_Uniform;\
    weapons[]={BNB_FA_AT_Primary BNB_FA_AT_Pistol BNB_FA_AT_Launcher BNB_FA_AT_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_AT_Primary BNB_FA_AT_Pistol BNB_FA_AT_Launcher BNB_FA_AT_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_AT_Items BNB_FA_AT_Items};\
    respawnItems[]={BNB_FA_Gen_AT_Items BNB_FA_AT_Items};\
    magazines[]={BNB_FA_Gen_AT_Magazines BNB_FA_AT_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_AT_Magazines BNB_FA_AT_Magazines};\
    linkedItems[]={BNB_FA_Gen_AT_LinkedItems BNB_FA_AT_Des_Helmet BNB_FA_AT_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_AT_LinkedItems BNB_FA_AT_Des_Helmet BNB_FA_AT_Des_Vest};\
    backpack= BNB_FA_##natCode##_AT_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_AT_Des_OpFor: BNB_FA_##natCode##_AT_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_AT_Des_IndFor: BNB_FA_##natCode##_AT_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_AT_Des_Pack: BNB_FA_AT_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_AT_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_AT_TransportMagazines BNB_FA_AT_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_AT_TransportItems BNB_FA_AT_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_AT_TransportWeapons BNB_FA_AT_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Crew_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Crew";\
	engineer = 1;\
	icon = "iconManEngineer";\
    uniformClass=BNB_FA_Crew_Des_Uniform;\
    weapons[]={BNB_FA_Crew_Primary BNB_FA_Crew_Pistol BNB_FA_Crew_Launcher BNB_FA_Crew_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Crew_Primary BNB_FA_Crew_Pistol BNB_FA_Crew_Launcher BNB_FA_Crew_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Crew_Items BNB_FA_Crew_Items};\
    respawnItems[]={BNB_FA_Gen_Crew_Items BNB_FA_Crew_Items};\
    magazines[]={BNB_FA_Gen_Crew_Magazines BNB_FA_Crew_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Crew_Magazines BNB_FA_Crew_Magazines};\
    linkedItems[]={BNB_FA_Gen_Crew_LinkedItems BNB_FA_Crew_Des_Helmet BNB_FA_Crew_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Crew_LinkedItems BNB_FA_Crew_Des_Helmet BNB_FA_Crew_Des_Vest};\
    backpack= BNB_FA_##natCode##_Crew_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_Crew_Des_OpFor: BNB_FA_##natCode##_Crew_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Crew_Des_IndFor: BNB_FA_##natCode##_Crew_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Crew_Des_Pack: BNB_FA_Crew_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Crew_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_Crew_TransportMagazines BNB_FA_Crew_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Crew_TransportItems BNB_FA_Crew_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Crew_TransportWeapons BNB_FA_Crew_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_EOD_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="EOD Specialist";\
	engineer = 1;\
	canDeactivateMines = 1;\
	icon = "iconManEngineer";\
	picture = "pictureExplosive";\
    uniformClass=BNB_FA_EOD_Des_Uniform;\
    weapons[]={BNB_FA_EOD_Primary BNB_FA_EOD_Pistol BNB_FA_EOD_Launcher BNB_FA_EOD_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_EOD_Primary BNB_FA_EOD_Pistol BNB_FA_EOD_Launcher BNB_FA_EOD_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_EOD_Items BNB_FA_EOD_Items};\
    respawnItems[]={BNB_FA_Gen_EOD_Items BNB_FA_EOD_Items};\
    magazines[]={BNB_FA_Gen_EOD_Magazines BNB_FA_EOD_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_EOD_Magazines BNB_FA_EOD_Magazines};\
    linkedItems[]={BNB_FA_Gen_EOD_LinkedItems BNB_FA_EOD_Des_Helmet BNB_FA_EOD_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_EOD_LinkedItems BNB_FA_EOD_Des_Helmet BNB_FA_EOD_Des_Vest};\
    backpack= BNB_FA_##natCode##_EOD_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_EOD_Des_OpFor: BNB_FA_##natCode##_EOD_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_EOD_Des_IndFor: BNB_FA_##natCode##_EOD_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_EOD_Des_Pack: BNB_FA_EOD_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_EOD_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_EOD_TransportMagazines BNB_FA_EOD_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_EOD_TransportItems BNB_FA_EOD_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_EOD_TransportWeapons BNB_FA_EOD_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_GL_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Grenadier";\
    uniformClass=BNB_FA_GL_Des_Uniform;\
    weapons[]={BNB_FA_GL_Primary BNB_FA_GL_Pistol BNB_FA_GL_Launcher BNB_FA_GL_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_GL_Primary BNB_FA_GL_Pistol BNB_FA_GL_Launcher BNB_FA_GL_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_GL_Items BNB_FA_GL_Items};\
    respawnItems[]={BNB_FA_Gen_GL_Items BNB_FA_GL_Items};\
    magazines[]={BNB_FA_Gen_GL_Magazines BNB_FA_GL_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_GL_Magazines BNB_FA_GL_Magazines};\
    linkedItems[]={BNB_FA_Gen_GL_LinkedItems BNB_FA_GL_Des_Helmet BNB_FA_GL_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_GL_LinkedItems BNB_FA_GL_Des_Helmet BNB_FA_GL_Des_Vest};\
    backpack= BNB_FA_##natCode##_GL_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_GL_Des_OpFor: BNB_FA_##natCode##_GL_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_GL_Des_IndFor: BNB_FA_##natCode##_GL_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_GL_Des_Pack: BNB_FA_GL_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_GL_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_GL_TransportMagazines BNB_FA_GL_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_GL_TransportItems BNB_FA_GL_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_GL_TransportWeapons BNB_FA_GL_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_HAT_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (HAT)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_HAT_Des_Uniform;\
    weapons[]={BNB_FA_HAT_Primary BNB_FA_HAT_Pistol BNB_FA_HAT_Launcher BNB_FA_HAT_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_HAT_Primary BNB_FA_HAT_Pistol BNB_FA_HAT_Launcher BNB_FA_HAT_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_HAT_Items BNB_FA_HAT_Items};\
    respawnItems[]={BNB_FA_Gen_HAT_Items BNB_FA_HAT_Items};\
    magazines[]={BNB_FA_Gen_HAT_Magazines BNB_FA_HAT_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_HAT_Magazines BNB_FA_HAT_Magazines};\
    linkedItems[]={BNB_FA_Gen_HAT_LinkedItems BNB_FA_HAT_Des_Helmet BNB_FA_HAT_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_HAT_LinkedItems BNB_FA_HAT_Des_Helmet BNB_FA_HAT_Des_Vest};\
    backpack= BNB_FA_##natCode##_HAT_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_HAT_Des_OpFor: BNB_FA_##natCode##_HAT_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_HAT_Des_IndFor: BNB_FA_##natCode##_HAT_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_HAT_Des_Pack: BNB_FA_HAT_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_HAT_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_HAT_TransportMagazines BNB_FA_HAT_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_HAT_TransportItems BNB_FA_HAT_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_HAT_TransportWeapons BNB_FA_HAT_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_JFO_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Joint Fires Observer";\
    uniformClass=BNB_FA_JFO_Des_Uniform;\
    weapons[]={BNB_FA_JFO_Primary BNB_FA_JFO_Pistol BNB_FA_JFO_Launcher BNB_FA_JFO_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_JFO_Primary BNB_FA_JFO_Pistol BNB_FA_JFO_Launcher BNB_FA_JFO_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_JFO_Items BNB_FA_JFO_Items};\
    respawnItems[]={BNB_FA_Gen_JFO_Items BNB_FA_JFO_Items};\
    magazines[]={BNB_FA_Gen_JFO_Magazines BNB_FA_JFO_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_JFO_Magazines BNB_FA_JFO_Magazines};\
    linkedItems[]={BNB_FA_Gen_JFO_LinkedItems BNB_FA_JFO_Des_Helmet BNB_FA_JFO_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_JFO_LinkedItems BNB_FA_JFO_Des_Helmet BNB_FA_JFO_Des_Vest};\
    backpack= BNB_FA_##natCode##_JFO_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_JFO_Des_OpFor: BNB_FA_##natCode##_JFO_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_JFO_Des_IndFor: BNB_FA_##natCode##_JFO_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_JFO_Des_Pack: BNB_FA_JFO_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_JFO_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_JFO_TransportMagazines BNB_FA_JFO_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_JFO_TransportItems BNB_FA_JFO_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_JFO_TransportWeapons BNB_FA_JFO_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_IC_Des_Blufor: B_Soldier_SL_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="IC";\
    uniformClass=BNB_FA_IC_Des_Uniform;\
    weapons[]={BNB_FA_IC_Primary BNB_FA_IC_Pistol BNB_FA_IC_Launcher BNB_FA_IC_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_IC_Primary BNB_FA_IC_Pistol BNB_FA_IC_Launcher BNB_FA_IC_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_IC_Items BNB_FA_IC_Items};\
    respawnItems[]={BNB_FA_Gen_IC_Items BNB_FA_IC_Items};\
    magazines[]={BNB_FA_Gen_IC_Magazines BNB_FA_IC_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_IC_Magazines BNB_FA_IC_Magazines};\
    linkedItems[]={BNB_FA_Gen_IC_LinkedItems BNB_FA_IC_Des_Helmet BNB_FA_IC_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_IC_LinkedItems BNB_FA_IC_Des_Helmet BNB_FA_IC_Des_Vest};\
    backpack= BNB_FA_##natCode##_IC_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_IC_Des_OpFor: BNB_FA_##natCode##_IC_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_IC_Des_IndFor: BNB_FA_##natCode##_IC_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_IC_Des_Pack: BNB_FA_IC_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_IC_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_IC_TransportMagazines BNB_FA_IC_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_IC_TransportItems BNB_FA_IC_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_IC_TransportWeapons BNB_FA_IC_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_LMG_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Machinegunner";\
	icon = "iconManMG" ;\
    uniformClass=BNB_FA_LMG_Des_Uniform;\
    weapons[]={BNB_FA_LMG_Primary BNB_FA_LMG_Pistol BNB_FA_LMG_Launcher BNB_FA_LMG_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_LMG_Primary BNB_FA_LMG_Pistol BNB_FA_LMG_Launcher BNB_FA_LMG_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_LMG_Items BNB_FA_LMG_Items};\
    respawnItems[]={BNB_FA_Gen_LMG_Items BNB_FA_LMG_Items};\
    magazines[]={BNB_FA_Gen_LMG_Magazines BNB_FA_LMG_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_LMG_Magazines BNB_FA_LMG_Magazines};\
    linkedItems[]={BNB_FA_Gen_LMG_LinkedItems BNB_FA_LMG_Des_Helmet BNB_FA_LMG_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_LMG_LinkedItems BNB_FA_LMG_Des_Helmet BNB_FA_LMG_Des_Vest};\
    backpack= BNB_FA_##natCode##_LMG_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_LMG_Des_OpFor: BNB_FA_##natCode##_LMG_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_LMG_Des_IndFor: BNB_FA_##natCode##_LMG_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_LMG_Des_Pack: BNB_FA_LMG_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_LMG_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_LMG_TransportMagazines BNB_FA_LMG_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_LMG_TransportItems BNB_FA_LMG_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_LMG_TransportWeapons BNB_FA_LMG_TransportWeapons};\
  };\
 class BNB_FA_##natCode##_Marksman_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Marksman";\
    uniformClass=BNB_FA_Marksman_Des_Uniform;\
    weapons[]={BNB_FA_Marksman_Primary BNB_FA_Marksman_Pistol BNB_FA_Marksman_Launcher BNB_FA_Marksman_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Marksman_Primary BNB_FA_Marksman_Pistol BNB_FA_Marksman_Launcher BNB_FA_Marksman_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Marksman_Items BNB_FA_Marksman_Items};\
    respawnItems[]={BNB_FA_Gen_Marksman_Items BNB_FA_Marksman_Items};\
    magazines[]={BNB_FA_Gen_Marksman_Magazines BNB_FA_Marksman_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Marksman_Magazines BNB_FA_Marksman_Magazines};\
    linkedItems[]={BNB_FA_Gen_Marksman_LinkedItems BNB_FA_Marksman_Des_Helmet BNB_FA_Marksman_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Marksman_LinkedItems BNB_FA_Marksman_Des_Helmet BNB_FA_Marksman_Des_Vest};\
    backpack= BNB_FA_##natCode##_Marksman_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_Marksman_Des_OpFor: BNB_FA_##natCode##_Marksman_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Marksman_Des_IndFor: BNB_FA_##natCode##_Marksman_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
	};\
	class BNB_FA_##natCode##_Marksman_Des_Pack: BNB_FA_Marksman_Des_Pack\
	{\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Marksman_Des_Pack;\
	class TransportMagazines{BNB_FA_Gen_Marksman_TransportMagazines BNB_FA_Marksman_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Marksman_TransportItems BNB_FA_Marksman_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Marksman_TransportWeapons BNB_FA_Marksman_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Medic_Des_Blufor: B_medic_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Medic";\
	attendant = 1;\
	icon = "iconManMedic";\
	picture = "pictureHeal";\
    uniformClass=BNB_FA_Medic_Des_Uniform;\
    weapons[]={BNB_FA_Medic_Primary BNB_FA_Medic_Pistol BNB_FA_Medic_Launcher BNB_FA_Medic_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Medic_Primary BNB_FA_Medic_Pistol BNB_FA_Medic_Launcher BNB_FA_Medic_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Medic_Items BNB_FA_Medic_Items};\
    respawnItems[]={BNB_FA_Gen_Medic_Items BNB_FA_Medic_Items};\
    magazines[]={BNB_FA_Gen_Medic_Magazines BNB_FA_Medic_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Medic_Magazines BNB_FA_Medic_Magazines};\
    linkedItems[]={BNB_FA_Gen_Medic_LinkedItems BNB_FA_Medic_Des_Helmet BNB_FA_Medic_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Medic_LinkedItems BNB_FA_Medic_Des_Helmet BNB_FA_Medic_Des_Vest};\
    backpack= BNB_FA_##natCode##_Medic_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_Medic_Des_OpFor: BNB_FA_##natCode##_Medic_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Medic_Des_IndFor: BNB_FA_##natCode##_Medic_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Medic_Des_Pack: BNB_FA_Medic_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Medic_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_Medic_TransportMagazines BNB_FA_Medic_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Medic_TransportItems BNB_FA_Medic_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Medic_TransportWeapons BNB_FA_Medic_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Pilot_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Pilot";\
	engineer = 1;\
    uniformClass=BNB_FA_Pilot_Des_Uniform;\
    weapons[]={BNB_FA_Pilot_Primary BNB_FA_Pilot_Pistol BNB_FA_Pilot_Launcher BNB_FA_Pilot_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Pilot_Primary BNB_FA_Pilot_Pistol BNB_FA_Pilot_Launcher BNB_FA_Pilot_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Pilot_Items BNB_FA_Pilot_Items};\
    respawnItems[]={BNB_FA_Gen_Pilot_Items BNB_FA_Pilot_Items};\
    magazines[]={BNB_FA_Gen_Pilot_Magazines BNB_FA_Pilot_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Pilot_Magazines BNB_FA_Pilot_Magazines};\
    linkedItems[]={BNB_FA_Gen_Pilot_LinkedItems BNB_FA_Pilot_Des_Helmet BNB_FA_Pilot_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Pilot_LinkedItems BNB_FA_Pilot_Des_Helmet BNB_FA_Pilot_Des_Vest};\
    backpack= BNB_FA_##natCode##_Pilot_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_Pilot_Des_OpFor: BNB_FA_##natCode##_Pilot_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Pilot_Des_IndFor: BNB_FA_##natCode##_Pilot_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Pilot_Des_Pack: BNB_FA_Pilot_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Pilot_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_Pilot_TransportMagazines BNB_FA_Pilot_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Pilot_TransportItems BNB_FA_Pilot_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Pilot_TransportWeapons BNB_FA_Pilot_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_Rifleman_Des_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_BluFor ; \
	side = 1;\
    displayName="Rifleman";\
    uniformClass=BNB_FA_Rifleman_Des_Uniform;\
    weapons[]={BNB_FA_Rifleman_Primary BNB_FA_Rifleman_Pistol BNB_FA_Rifleman_Launcher BNB_FA_Rifleman_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Rifleman_Primary BNB_FA_Rifleman_Pistol BNB_FA_Rifleman_Launcher BNB_FA_Rifleman_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Rifleman_Items BNB_FA_Rifleman_Items};\
    respawnItems[]={BNB_FA_Gen_Rifleman_Items BNB_FA_Rifleman_Items};\
    magazines[]={BNB_FA_Gen_Rifleman_Magazines BNB_FA_Rifleman_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Rifleman_Magazines BNB_FA_Rifleman_Magazines};\
    linkedItems[]={BNB_FA_Gen_Rifleman_LinkedItems BNB_FA_Rifleman_Des_Helmet BNB_FA_Rifleman_Des_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Rifleman_LinkedItems BNB_FA_Rifleman_Des_Helmet BNB_FA_Rifleman_Des_Vest};\
    backpack= BNB_FA_##natCode##_Rifleman_Des_Pack ;\
  };\
  class BNB_FA_##natCode##_Rifleman_Des_OpFor: BNB_FA_##natCode##_Rifleman_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Rifleman_Des_IndFor: BNB_FA_##natCode##_Rifleman_Des_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Desert_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Rifleman_Des_Pack: BNB_FA_Rifleman_Des_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Rifleman_Des_Pack;\
    class TransportMagazines{BNB_FA_Gen_Rifleman_TransportMagazines BNB_FA_Rifleman_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Rifleman_TransportItems BNB_FA_Rifleman_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Rifleman_TransportWeapons BNB_FA_Rifleman_TransportWeapons};\
  };\
/*Compatibility classes for old missions*/\
	class BNB_FA_##natCode##_IC_Des:BNB_FA_##natCode##_IC_Des_BluFor\
	{\
	scope = 1;\
	};\
	class BNB_FA_##natCode##_Medic_Des:BNB_FA_##natCode##_Medic_Des_BluFor\
	{\
	scope = 1;\
	};\
	class BNB_FA_##natCode##_Rifleman_Des:BNB_FA_##natCode##_Rifleman_Des_BluFor\
	{\
	scope = 1;\
	};

#define BNB_FA_Units_Multicam(natCode) class BNB_FA_##natCode##_AA_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (AA)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_AA_Mul_Uniform;\
    weapons[]={BNB_FA_AA_Primary BNB_FA_AA_Pistol BNB_FA_AA_Launcher BNB_FA_AA_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_AA_Primary BNB_FA_AA_Pistol BNB_FA_AA_Launcher BNB_FA_AA_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_AA_Items BNB_FA_AA_Items};\
    respawnItems[]={BNB_FA_Gen_AA_Items BNB_FA_AA_Items};\
    magazines[]={BNB_FA_Gen_AA_Magazines BNB_FA_AA_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_AA_Magazines BNB_FA_AA_Magazines};\
    linkedItems[]={BNB_FA_Gen_AA_LinkedItems BNB_FA_AA_Mul_Helmet BNB_FA_AA_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_AA_LinkedItems BNB_FA_AA_Mul_Helmet BNB_FA_AA_Mul_Vest};\
    backpack= BNB_FA_##natCode##_AA_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_AA_Mul_OpFor: BNB_FA_##natCode##_AA_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_AA_Mul_IndFor: BNB_FA_##natCode##_AA_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_AA_Mul_Pack: BNB_FA_AA_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_AA_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_AA_TransportMagazines BNB_FA_AA_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_AA_TransportItems BNB_FA_AA_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_AA_TransportWeapons BNB_FA_AA_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_AT_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (AT)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_AT_Mul_Uniform;\
    weapons[]={BNB_FA_AT_Primary BNB_FA_AT_Pistol BNB_FA_AT_Launcher BNB_FA_AT_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_AT_Primary BNB_FA_AT_Pistol BNB_FA_AT_Launcher BNB_FA_AT_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_AT_Items BNB_FA_AT_Items};\
    respawnItems[]={BNB_FA_Gen_AT_Items BNB_FA_AT_Items};\
    magazines[]={BNB_FA_Gen_AT_Magazines BNB_FA_AT_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_AT_Magazines BNB_FA_AT_Magazines};\
    linkedItems[]={BNB_FA_Gen_AT_LinkedItems BNB_FA_AT_Mul_Helmet BNB_FA_AT_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_AT_LinkedItems BNB_FA_AT_Mul_Helmet BNB_FA_AT_Mul_Vest};\
    backpack= BNB_FA_##natCode##_AT_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_AT_Mul_OpFor: BNB_FA_##natCode##_AT_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_AT_Mul_IndFor: BNB_FA_##natCode##_AT_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_AT_Mul_Pack: BNB_FA_AT_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_AT_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_AT_TransportMagazines BNB_FA_AT_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_AT_TransportItems BNB_FA_AT_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_AT_TransportWeapons BNB_FA_AT_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Crew_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Crew";\
	engineer = 1;\
	icon = "iconManEngineer";\
    uniformClass=BNB_FA_Crew_Mul_Uniform;\
    weapons[]={BNB_FA_Crew_Primary BNB_FA_Crew_Pistol BNB_FA_Crew_Launcher BNB_FA_Crew_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Crew_Primary BNB_FA_Crew_Pistol BNB_FA_Crew_Launcher BNB_FA_Crew_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Crew_Items BNB_FA_Crew_Items};\
    respawnItems[]={BNB_FA_Gen_Crew_Items BNB_FA_Crew_Items};\
    magazines[]={BNB_FA_Gen_Crew_Magazines BNB_FA_Crew_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Crew_Magazines BNB_FA_Crew_Magazines};\
    linkedItems[]={BNB_FA_Gen_Crew_LinkedItems BNB_FA_Crew_Mul_Helmet BNB_FA_Crew_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Crew_LinkedItems BNB_FA_Crew_Mul_Helmet BNB_FA_Crew_Mul_Vest};\
    backpack= BNB_FA_##natCode##_Crew_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_Crew_Mul_OpFor: BNB_FA_##natCode##_Crew_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Crew_Mul_IndFor: BNB_FA_##natCode##_Crew_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Crew_Mul_Pack: BNB_FA_Crew_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Crew_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_Crew_TransportMagazines BNB_FA_Crew_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Crew_TransportItems BNB_FA_Crew_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Crew_TransportWeapons BNB_FA_Crew_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_EOD_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="EOD Specialist";\
	engineer = 1;\
	canDeactivateMines = 1;\
	icon = "iconManEngineer";\
	picture = "pictureExplosive";\
    uniformClass=BNB_FA_EOD_Mul_Uniform;\
    weapons[]={BNB_FA_EOD_Primary BNB_FA_EOD_Pistol BNB_FA_EOD_Launcher BNB_FA_EOD_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_EOD_Primary BNB_FA_EOD_Pistol BNB_FA_EOD_Launcher BNB_FA_EOD_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_EOD_Items BNB_FA_EOD_Items};\
    respawnItems[]={BNB_FA_Gen_EOD_Items BNB_FA_EOD_Items};\
    magazines[]={BNB_FA_Gen_EOD_Magazines BNB_FA_EOD_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_EOD_Magazines BNB_FA_EOD_Magazines};\
    linkedItems[]={BNB_FA_Gen_EOD_LinkedItems BNB_FA_EOD_Mul_Helmet BNB_FA_EOD_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_EOD_LinkedItems BNB_FA_EOD_Mul_Helmet BNB_FA_EOD_Mul_Vest};\
    backpack= BNB_FA_##natCode##_EOD_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_EOD_Mul_OpFor: BNB_FA_##natCode##_EOD_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_EOD_Mul_IndFor: BNB_FA_##natCode##_EOD_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_EOD_Mul_Pack: BNB_FA_EOD_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_EOD_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_EOD_TransportMagazines BNB_FA_EOD_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_EOD_TransportItems BNB_FA_EOD_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_EOD_TransportWeapons BNB_FA_EOD_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_GL_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Grenadier";\
    uniformClass=BNB_FA_GL_Mul_Uniform;\
    weapons[]={BNB_FA_GL_Primary BNB_FA_GL_Pistol BNB_FA_GL_Launcher BNB_FA_GL_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_GL_Primary BNB_FA_GL_Pistol BNB_FA_GL_Launcher BNB_FA_GL_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_GL_Items BNB_FA_GL_Items};\
    respawnItems[]={BNB_FA_Gen_GL_Items BNB_FA_GL_Items};\
    magazines[]={BNB_FA_Gen_GL_Magazines BNB_FA_GL_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_GL_Magazines BNB_FA_GL_Magazines};\
    linkedItems[]={BNB_FA_Gen_GL_LinkedItems BNB_FA_GL_Mul_Helmet BNB_FA_GL_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_GL_LinkedItems BNB_FA_GL_Mul_Helmet BNB_FA_GL_Mul_Vest};\
    backpack= BNB_FA_##natCode##_GL_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_GL_Mul_OpFor: BNB_FA_##natCode##_GL_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_GL_Mul_IndFor: BNB_FA_##natCode##_GL_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_GL_Mul_Pack: BNB_FA_GL_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_GL_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_GL_TransportMagazines BNB_FA_GL_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_GL_TransportItems BNB_FA_GL_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_GL_TransportWeapons BNB_FA_GL_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_HAT_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (HAT)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_HAT_Mul_Uniform;\
    weapons[]={BNB_FA_HAT_Primary BNB_FA_HAT_Pistol BNB_FA_HAT_Launcher BNB_FA_HAT_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_HAT_Primary BNB_FA_HAT_Pistol BNB_FA_HAT_Launcher BNB_FA_HAT_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_HAT_Items BNB_FA_HAT_Items};\
    respawnItems[]={BNB_FA_Gen_HAT_Items BNB_FA_HAT_Items};\
    magazines[]={BNB_FA_Gen_HAT_Magazines BNB_FA_HAT_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_HAT_Magazines BNB_FA_HAT_Magazines};\
    linkedItems[]={BNB_FA_Gen_HAT_LinkedItems BNB_FA_HAT_Mul_Helmet BNB_FA_HAT_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_HAT_LinkedItems BNB_FA_HAT_Mul_Helmet BNB_FA_HAT_Mul_Vest};\
    backpack= BNB_FA_##natCode##_HAT_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_HAT_Mul_OpFor: BNB_FA_##natCode##_HAT_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_HAT_Mul_IndFor: BNB_FA_##natCode##_HAT_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_HAT_Mul_Pack: BNB_FA_HAT_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_HAT_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_HAT_TransportMagazines BNB_FA_HAT_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_HAT_TransportItems BNB_FA_HAT_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_HAT_TransportWeapons BNB_FA_HAT_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_JFO_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Joint Fires Observer";\
    uniformClass=BNB_FA_JFO_Mul_Uniform;\
    weapons[]={BNB_FA_JFO_Primary BNB_FA_JFO_Pistol BNB_FA_JFO_Launcher BNB_FA_JFO_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_JFO_Primary BNB_FA_JFO_Pistol BNB_FA_JFO_Launcher BNB_FA_JFO_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_JFO_Items BNB_FA_JFO_Items};\
    respawnItems[]={BNB_FA_Gen_JFO_Items BNB_FA_JFO_Items};\
    magazines[]={BNB_FA_Gen_JFO_Magazines BNB_FA_JFO_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_JFO_Magazines BNB_FA_JFO_Magazines};\
    linkedItems[]={BNB_FA_Gen_JFO_LinkedItems BNB_FA_JFO_Mul_Helmet BNB_FA_JFO_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_JFO_LinkedItems BNB_FA_JFO_Mul_Helmet BNB_FA_JFO_Mul_Vest};\
    backpack= BNB_FA_##natCode##_JFO_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_JFO_Mul_OpFor: BNB_FA_##natCode##_JFO_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_JFO_Mul_IndFor: BNB_FA_##natCode##_JFO_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_JFO_Mul_Pack: BNB_FA_JFO_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_JFO_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_JFO_TransportMagazines BNB_FA_JFO_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_JFO_TransportItems BNB_FA_JFO_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_JFO_TransportWeapons BNB_FA_JFO_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_IC_Mul_Blufor: B_Soldier_SL_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="IC";\
    uniformClass=BNB_FA_IC_Mul_Uniform;\
    weapons[]={BNB_FA_IC_Primary BNB_FA_IC_Pistol BNB_FA_IC_Launcher BNB_FA_IC_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_IC_Primary BNB_FA_IC_Pistol BNB_FA_IC_Launcher BNB_FA_IC_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_IC_Items BNB_FA_IC_Items};\
    respawnItems[]={BNB_FA_Gen_IC_Items BNB_FA_IC_Items};\
    magazines[]={BNB_FA_Gen_IC_Magazines BNB_FA_IC_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_IC_Magazines BNB_FA_IC_Magazines};\
    linkedItems[]={BNB_FA_Gen_IC_LinkedItems BNB_FA_IC_Mul_Helmet BNB_FA_IC_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_IC_LinkedItems BNB_FA_IC_Mul_Helmet BNB_FA_IC_Mul_Vest};\
    backpack= BNB_FA_##natCode##_IC_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_IC_Mul_OpFor: BNB_FA_##natCode##_IC_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_IC_Mul_IndFor: BNB_FA_##natCode##_IC_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_IC_Mul_Pack: BNB_FA_IC_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_IC_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_IC_TransportMagazines BNB_FA_IC_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_IC_TransportItems BNB_FA_IC_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_IC_TransportWeapons BNB_FA_IC_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_LMG_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Machinegunner";\
	icon = "iconManMG" ;\
    uniformClass=BNB_FA_LMG_Mul_Uniform;\
    weapons[]={BNB_FA_LMG_Primary BNB_FA_LMG_Pistol BNB_FA_LMG_Launcher BNB_FA_LMG_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_LMG_Primary BNB_FA_LMG_Pistol BNB_FA_LMG_Launcher BNB_FA_LMG_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_LMG_Items BNB_FA_LMG_Items};\
    respawnItems[]={BNB_FA_Gen_LMG_Items BNB_FA_LMG_Items};\
    magazines[]={BNB_FA_Gen_LMG_Magazines BNB_FA_LMG_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_LMG_Magazines BNB_FA_LMG_Magazines};\
    linkedItems[]={BNB_FA_Gen_LMG_LinkedItems BNB_FA_LMG_Mul_Helmet BNB_FA_LMG_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_LMG_LinkedItems BNB_FA_LMG_Mul_Helmet BNB_FA_LMG_Mul_Vest};\
    backpack= BNB_FA_##natCode##_LMG_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_LMG_Mul_OpFor: BNB_FA_##natCode##_LMG_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_LMG_Mul_IndFor: BNB_FA_##natCode##_LMG_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_LMG_Mul_Pack: BNB_FA_LMG_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_LMG_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_LMG_TransportMagazines BNB_FA_LMG_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_LMG_TransportItems BNB_FA_LMG_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_LMG_TransportWeapons BNB_FA_LMG_TransportWeapons};\
  };\
 class BNB_FA_##natCode##_Marksman_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Marksman";\
    uniformClass=BNB_FA_Marksman_Mul_Uniform;\
    weapons[]={BNB_FA_Marksman_Primary BNB_FA_Marksman_Pistol BNB_FA_Marksman_Launcher BNB_FA_Marksman_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Marksman_Primary BNB_FA_Marksman_Pistol BNB_FA_Marksman_Launcher BNB_FA_Marksman_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Marksman_Items BNB_FA_Marksman_Items};\
    respawnItems[]={BNB_FA_Gen_Marksman_Items BNB_FA_Marksman_Items};\
    magazines[]={BNB_FA_Gen_Marksman_Magazines BNB_FA_Marksman_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Marksman_Magazines BNB_FA_Marksman_Magazines};\
    linkedItems[]={BNB_FA_Gen_Marksman_LinkedItems BNB_FA_Marksman_Mul_Helmet BNB_FA_Marksman_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Marksman_LinkedItems BNB_FA_Marksman_Mul_Helmet BNB_FA_Marksman_Mul_Vest};\
    backpack= BNB_FA_##natCode##_Marksman_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_Marksman_Mul_OpFor: BNB_FA_##natCode##_Marksman_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Marksman_Mul_IndFor: BNB_FA_##natCode##_Marksman_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
	};\
	class BNB_FA_##natCode##_Marksman_Mul_Pack: BNB_FA_Marksman_Mul_Pack\
	{\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Marksman_Mul_Pack;\
	class TransportMagazines{BNB_FA_Gen_Marksman_TransportMagazines BNB_FA_Marksman_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Marksman_TransportItems BNB_FA_Marksman_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Marksman_TransportWeapons BNB_FA_Marksman_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Medic_Mul_Blufor: B_medic_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Medic";\
	attendant = 1;\
	icon = "iconManMedic";\
	picture = "pictureHeal";\
    uniformClass=BNB_FA_Medic_Mul_Uniform;\
    weapons[]={BNB_FA_Medic_Primary BNB_FA_Medic_Pistol BNB_FA_Medic_Launcher BNB_FA_Medic_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Medic_Primary BNB_FA_Medic_Pistol BNB_FA_Medic_Launcher BNB_FA_Medic_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Medic_Items BNB_FA_Medic_Items};\
    respawnItems[]={BNB_FA_Gen_Medic_Items BNB_FA_Medic_Items};\
    magazines[]={BNB_FA_Gen_Medic_Magazines BNB_FA_Medic_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Medic_Magazines BNB_FA_Medic_Magazines};\
    linkedItems[]={BNB_FA_Gen_Medic_LinkedItems BNB_FA_Medic_Mul_Helmet BNB_FA_Medic_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Medic_LinkedItems BNB_FA_Medic_Mul_Helmet BNB_FA_Medic_Mul_Vest};\
    backpack= BNB_FA_##natCode##_Medic_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_Medic_Mul_OpFor: BNB_FA_##natCode##_Medic_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Medic_Mul_IndFor: BNB_FA_##natCode##_Medic_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Medic_Mul_Pack: BNB_FA_Medic_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Medic_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_Medic_TransportMagazines BNB_FA_Medic_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Medic_TransportItems BNB_FA_Medic_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Medic_TransportWeapons BNB_FA_Medic_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Pilot_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Pilot";\
	engineer = 1;\
    uniformClass=BNB_FA_Pilot_Mul_Uniform;\
    weapons[]={BNB_FA_Pilot_Primary BNB_FA_Pilot_Pistol BNB_FA_Pilot_Launcher BNB_FA_Pilot_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Pilot_Primary BNB_FA_Pilot_Pistol BNB_FA_Pilot_Launcher BNB_FA_Pilot_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Pilot_Items BNB_FA_Pilot_Items};\
    respawnItems[]={BNB_FA_Gen_Pilot_Items BNB_FA_Pilot_Items};\
    magazines[]={BNB_FA_Gen_Pilot_Magazines BNB_FA_Pilot_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Pilot_Magazines BNB_FA_Pilot_Magazines};\
    linkedItems[]={BNB_FA_Gen_Pilot_LinkedItems BNB_FA_Pilot_Mul_Helmet BNB_FA_Pilot_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Pilot_LinkedItems BNB_FA_Pilot_Mul_Helmet BNB_FA_Pilot_Mul_Vest};\
    backpack= BNB_FA_##natCode##_Pilot_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_Pilot_Mul_OpFor: BNB_FA_##natCode##_Pilot_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Pilot_Mul_IndFor: BNB_FA_##natCode##_Pilot_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Pilot_Mul_Pack: BNB_FA_Pilot_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Pilot_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_Pilot_TransportMagazines BNB_FA_Pilot_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Pilot_TransportItems BNB_FA_Pilot_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Pilot_TransportWeapons BNB_FA_Pilot_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_Rifleman_Mul_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_BluFor ; \
	side = 1;\
    displayName="Rifleman";\
    uniformClass=BNB_FA_Rifleman_Mul_Uniform;\
    weapons[]={BNB_FA_Rifleman_Primary BNB_FA_Rifleman_Pistol BNB_FA_Rifleman_Launcher BNB_FA_Rifleman_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Rifleman_Primary BNB_FA_Rifleman_Pistol BNB_FA_Rifleman_Launcher BNB_FA_Rifleman_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Rifleman_Items BNB_FA_Rifleman_Items};\
    respawnItems[]={BNB_FA_Gen_Rifleman_Items BNB_FA_Rifleman_Items};\
    magazines[]={BNB_FA_Gen_Rifleman_Magazines BNB_FA_Rifleman_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Rifleman_Magazines BNB_FA_Rifleman_Magazines};\
    linkedItems[]={BNB_FA_Gen_Rifleman_LinkedItems BNB_FA_Rifleman_Mul_Helmet BNB_FA_Rifleman_Mul_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Rifleman_LinkedItems BNB_FA_Rifleman_Mul_Helmet BNB_FA_Rifleman_Mul_Vest};\
    backpack= BNB_FA_##natCode##_Rifleman_Mul_Pack ;\
  };\
  class BNB_FA_##natCode##_Rifleman_Mul_OpFor: BNB_FA_##natCode##_Rifleman_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Rifleman_Mul_IndFor: BNB_FA_##natCode##_Rifleman_Mul_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Multicam_IndFor ; \
	side = 2;\
  };\
    class BNB_FA_##natCode##_Rifleman_Mul_Pack: BNB_FA_Rifleman_Mul_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Rifleman_Mul_Pack;\
    class TransportMagazines{BNB_FA_Gen_Rifleman_TransportMagazines BNB_FA_Rifleman_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Rifleman_TransportItems BNB_FA_Rifleman_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Rifleman_TransportWeapons BNB_FA_Rifleman_TransportWeapons};\
  };\
/*Compatibility classes for old missions*/\
	class BNB_FA_##natCode##_IC_Mul:BNB_FA_##natCode##_IC_Mul_BluFor\
	{\
	scope = 1;\
	};\
	class BNB_FA_##natCode##_Medic_Mul:BNB_FA_##natCode##_Medic_Mul_BluFor\
	{\
	scope = 1;\
	};\
	class BNB_FA_##natCode##_Rifleman_Mul:BNB_FA_##natCode##_Rifleman_Mul_BluFor\
	{\
	scope = 1;\
	};


#define BNB_FA_Units_Winter(natCode) class BNB_FA_##natCode##_AA_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (AA)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_AA_Win_Uniform;\
    weapons[]={BNB_FA_AA_Primary BNB_FA_AA_Pistol BNB_FA_AA_Launcher BNB_FA_AA_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_AA_Primary BNB_FA_AA_Pistol BNB_FA_AA_Launcher BNB_FA_AA_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_AA_Items BNB_FA_AA_Items};\
    respawnItems[]={BNB_FA_Gen_AA_Items BNB_FA_AA_Items};\
    magazines[]={BNB_FA_Gen_AA_Magazines BNB_FA_AA_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_AA_Magazines BNB_FA_AA_Magazines};\
    linkedItems[]={BNB_FA_Gen_AA_LinkedItems BNB_FA_AA_Win_Helmet BNB_FA_AA_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_AA_LinkedItems BNB_FA_AA_Win_Helmet BNB_FA_AA_Win_Vest};\
    backpack= BNB_FA_##natCode##_AA_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_AA_Win_OpFor: BNB_FA_##natCode##_AA_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_AA_Win_IndFor: BNB_FA_##natCode##_AA_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_AA_Win_Pack: BNB_FA_AA_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_AA_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_AA_TransportMagazines BNB_FA_AA_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_AA_TransportItems BNB_FA_AA_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_AA_TransportWeapons BNB_FA_AA_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_AT_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (AT)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_AT_Win_Uniform;\
    weapons[]={BNB_FA_AT_Primary BNB_FA_AT_Pistol BNB_FA_AT_Launcher BNB_FA_AT_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_AT_Primary BNB_FA_AT_Pistol BNB_FA_AT_Launcher BNB_FA_AT_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_AT_Items BNB_FA_AT_Items};\
    respawnItems[]={BNB_FA_Gen_AT_Items BNB_FA_AT_Items};\
    magazines[]={BNB_FA_Gen_AT_Magazines BNB_FA_AT_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_AT_Magazines BNB_FA_AT_Magazines};\
    linkedItems[]={BNB_FA_Gen_AT_LinkedItems BNB_FA_AT_Win_Helmet BNB_FA_AT_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_AT_LinkedItems BNB_FA_AT_Win_Helmet BNB_FA_AT_Win_Vest};\
    backpack= BNB_FA_##natCode##_AT_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_AT_Win_OpFor: BNB_FA_##natCode##_AT_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_AT_Win_IndFor: BNB_FA_##natCode##_AT_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_AT_Win_Pack: BNB_FA_AT_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_AT_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_AT_TransportMagazines BNB_FA_AT_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_AT_TransportItems BNB_FA_AT_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_AT_TransportWeapons BNB_FA_AT_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Crew_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Crew";\
	engineer = 1;\
	icon = "iconManEngineer";\
    uniformClass=BNB_FA_Crew_Win_Uniform;\
    weapons[]={BNB_FA_Crew_Primary BNB_FA_Crew_Pistol BNB_FA_Crew_Launcher BNB_FA_Crew_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Crew_Primary BNB_FA_Crew_Pistol BNB_FA_Crew_Launcher BNB_FA_Crew_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Crew_Items BNB_FA_Crew_Items};\
    respawnItems[]={BNB_FA_Gen_Crew_Items BNB_FA_Crew_Items};\
    magazines[]={BNB_FA_Gen_Crew_Magazines BNB_FA_Crew_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Crew_Magazines BNB_FA_Crew_Magazines};\
    linkedItems[]={BNB_FA_Gen_Crew_LinkedItems BNB_FA_Crew_Win_Helmet BNB_FA_Crew_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Crew_LinkedItems BNB_FA_Crew_Win_Helmet BNB_FA_Crew_Win_Vest};\
    backpack= BNB_FA_##natCode##_Crew_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_Crew_Win_OpFor: BNB_FA_##natCode##_Crew_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Crew_Win_IndFor: BNB_FA_##natCode##_Crew_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Crew_Win_Pack: BNB_FA_Crew_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Crew_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_Crew_TransportMagazines BNB_FA_Crew_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Crew_TransportItems BNB_FA_Crew_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Crew_TransportWeapons BNB_FA_Crew_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_EOD_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="EOD Specialist";\
	engineer = 1;\
	canDeactivateMines = 1;\
	icon = "iconManEngineer";\
	picture = "pictureExplosive";\
    uniformClass=BNB_FA_EOD_Win_Uniform;\
    weapons[]={BNB_FA_EOD_Primary BNB_FA_EOD_Pistol BNB_FA_EOD_Launcher BNB_FA_EOD_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_EOD_Primary BNB_FA_EOD_Pistol BNB_FA_EOD_Launcher BNB_FA_EOD_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_EOD_Items BNB_FA_EOD_Items};\
    respawnItems[]={BNB_FA_Gen_EOD_Items BNB_FA_EOD_Items};\
    magazines[]={BNB_FA_Gen_EOD_Magazines BNB_FA_EOD_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_EOD_Magazines BNB_FA_EOD_Magazines};\
    linkedItems[]={BNB_FA_Gen_EOD_LinkedItems BNB_FA_EOD_Win_Helmet BNB_FA_EOD_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_EOD_LinkedItems BNB_FA_EOD_Win_Helmet BNB_FA_EOD_Win_Vest};\
    backpack= BNB_FA_##natCode##_EOD_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_EOD_Win_OpFor: BNB_FA_##natCode##_EOD_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_EOD_Win_IndFor: BNB_FA_##natCode##_EOD_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_EOD_Win_Pack: BNB_FA_EOD_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_EOD_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_EOD_TransportMagazines BNB_FA_EOD_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_EOD_TransportItems BNB_FA_EOD_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_EOD_TransportWeapons BNB_FA_EOD_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_GL_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Grenadier";\
    uniformClass=BNB_FA_GL_Win_Uniform;\
    weapons[]={BNB_FA_GL_Primary BNB_FA_GL_Pistol BNB_FA_GL_Launcher BNB_FA_GL_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_GL_Primary BNB_FA_GL_Pistol BNB_FA_GL_Launcher BNB_FA_GL_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_GL_Items BNB_FA_GL_Items};\
    respawnItems[]={BNB_FA_Gen_GL_Items BNB_FA_GL_Items};\
    magazines[]={BNB_FA_Gen_GL_Magazines BNB_FA_GL_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_GL_Magazines BNB_FA_GL_Magazines};\
    linkedItems[]={BNB_FA_Gen_GL_LinkedItems BNB_FA_GL_Win_Helmet BNB_FA_GL_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_GL_LinkedItems BNB_FA_GL_Win_Helmet BNB_FA_GL_Win_Vest};\
    backpack= BNB_FA_##natCode##_GL_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_GL_Win_OpFor: BNB_FA_##natCode##_GL_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_GL_Win_IndFor: BNB_FA_##natCode##_GL_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_GL_Win_Pack: BNB_FA_GL_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_GL_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_GL_TransportMagazines BNB_FA_GL_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_GL_TransportItems BNB_FA_GL_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_GL_TransportWeapons BNB_FA_GL_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_HAT_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (HAT)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_HAT_Win_Uniform;\
    weapons[]={BNB_FA_HAT_Primary BNB_FA_HAT_Pistol BNB_FA_HAT_Launcher BNB_FA_HAT_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_HAT_Primary BNB_FA_HAT_Pistol BNB_FA_HAT_Launcher BNB_FA_HAT_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_HAT_Items BNB_FA_HAT_Items};\
    respawnItems[]={BNB_FA_Gen_HAT_Items BNB_FA_HAT_Items};\
    magazines[]={BNB_FA_Gen_HAT_Magazines BNB_FA_HAT_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_HAT_Magazines BNB_FA_HAT_Magazines};\
    linkedItems[]={BNB_FA_Gen_HAT_LinkedItems BNB_FA_HAT_Win_Helmet BNB_FA_HAT_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_HAT_LinkedItems BNB_FA_HAT_Win_Helmet BNB_FA_HAT_Win_Vest};\
    backpack= BNB_FA_##natCode##_HAT_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_HAT_Win_OpFor: BNB_FA_##natCode##_HAT_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_HAT_Win_IndFor: BNB_FA_##natCode##_HAT_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_HAT_Win_Pack: BNB_FA_HAT_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_HAT_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_HAT_TransportMagazines BNB_FA_HAT_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_HAT_TransportItems BNB_FA_HAT_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_HAT_TransportWeapons BNB_FA_HAT_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_JFO_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Joint Fires Observer";\
    uniformClass=BNB_FA_JFO_Win_Uniform;\
    weapons[]={BNB_FA_JFO_Primary BNB_FA_JFO_Pistol BNB_FA_JFO_Launcher BNB_FA_JFO_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_JFO_Primary BNB_FA_JFO_Pistol BNB_FA_JFO_Launcher BNB_FA_JFO_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_JFO_Items BNB_FA_JFO_Items};\
    respawnItems[]={BNB_FA_Gen_JFO_Items BNB_FA_JFO_Items};\
    magazines[]={BNB_FA_Gen_JFO_Magazines BNB_FA_JFO_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_JFO_Magazines BNB_FA_JFO_Magazines};\
    linkedItems[]={BNB_FA_Gen_JFO_LinkedItems BNB_FA_JFO_Win_Helmet BNB_FA_JFO_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_JFO_LinkedItems BNB_FA_JFO_Win_Helmet BNB_FA_JFO_Win_Vest};\
    backpack= BNB_FA_##natCode##_JFO_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_JFO_Win_OpFor: BNB_FA_##natCode##_JFO_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_JFO_Win_IndFor: BNB_FA_##natCode##_JFO_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_JFO_Win_Pack: BNB_FA_JFO_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_JFO_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_JFO_TransportMagazines BNB_FA_JFO_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_JFO_TransportItems BNB_FA_JFO_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_JFO_TransportWeapons BNB_FA_JFO_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_IC_Win_Blufor: B_Soldier_SL_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="IC";\
    uniformClass=BNB_FA_IC_Win_Uniform;\
    weapons[]={BNB_FA_IC_Primary BNB_FA_IC_Pistol BNB_FA_IC_Launcher BNB_FA_IC_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_IC_Primary BNB_FA_IC_Pistol BNB_FA_IC_Launcher BNB_FA_IC_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_IC_Items BNB_FA_IC_Items};\
    respawnItems[]={BNB_FA_Gen_IC_Items BNB_FA_IC_Items};\
    magazines[]={BNB_FA_Gen_IC_Magazines BNB_FA_IC_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_IC_Magazines BNB_FA_IC_Magazines};\
    linkedItems[]={BNB_FA_Gen_IC_LinkedItems BNB_FA_IC_Win_Helmet BNB_FA_IC_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_IC_LinkedItems BNB_FA_IC_Win_Helmet BNB_FA_IC_Win_Vest};\
    backpack= BNB_FA_##natCode##_IC_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_IC_Win_OpFor: BNB_FA_##natCode##_IC_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_IC_Win_IndFor: BNB_FA_##natCode##_IC_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_IC_Win_Pack: BNB_FA_IC_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_IC_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_IC_TransportMagazines BNB_FA_IC_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_IC_TransportItems BNB_FA_IC_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_IC_TransportWeapons BNB_FA_IC_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_LMG_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Machinegunner";\
	icon = "iconManMG" ;\
    uniformClass=BNB_FA_LMG_Win_Uniform;\
    weapons[]={BNB_FA_LMG_Primary BNB_FA_LMG_Pistol BNB_FA_LMG_Launcher BNB_FA_LMG_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_LMG_Primary BNB_FA_LMG_Pistol BNB_FA_LMG_Launcher BNB_FA_LMG_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_LMG_Items BNB_FA_LMG_Items};\
    respawnItems[]={BNB_FA_Gen_LMG_Items BNB_FA_LMG_Items};\
    magazines[]={BNB_FA_Gen_LMG_Magazines BNB_FA_LMG_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_LMG_Magazines BNB_FA_LMG_Magazines};\
    linkedItems[]={BNB_FA_Gen_LMG_LinkedItems BNB_FA_LMG_Win_Helmet BNB_FA_LMG_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_LMG_LinkedItems BNB_FA_LMG_Win_Helmet BNB_FA_LMG_Win_Vest};\
    backpack= BNB_FA_##natCode##_LMG_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_LMG_Win_OpFor: BNB_FA_##natCode##_LMG_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_LMG_Win_IndFor: BNB_FA_##natCode##_LMG_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_LMG_Win_Pack: BNB_FA_LMG_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_LMG_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_LMG_TransportMagazines BNB_FA_LMG_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_LMG_TransportItems BNB_FA_LMG_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_LMG_TransportWeapons BNB_FA_LMG_TransportWeapons};\
  };\
 class BNB_FA_##natCode##_Marksman_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Marksman";\
    uniformClass=BNB_FA_Marksman_Win_Uniform;\
    weapons[]={BNB_FA_Marksman_Primary BNB_FA_Marksman_Pistol BNB_FA_Marksman_Launcher BNB_FA_Marksman_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Marksman_Primary BNB_FA_Marksman_Pistol BNB_FA_Marksman_Launcher BNB_FA_Marksman_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Marksman_Items BNB_FA_Marksman_Items};\
    respawnItems[]={BNB_FA_Gen_Marksman_Items BNB_FA_Marksman_Items};\
    magazines[]={BNB_FA_Gen_Marksman_Magazines BNB_FA_Marksman_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Marksman_Magazines BNB_FA_Marksman_Magazines};\
    linkedItems[]={BNB_FA_Gen_Marksman_LinkedItems BNB_FA_Marksman_Win_Helmet BNB_FA_Marksman_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Marksman_LinkedItems BNB_FA_Marksman_Win_Helmet BNB_FA_Marksman_Win_Vest};\
    backpack= BNB_FA_##natCode##_Marksman_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_Marksman_Win_OpFor: BNB_FA_##natCode##_Marksman_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Marksman_Win_IndFor: BNB_FA_##natCode##_Marksman_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
	};\
	class BNB_FA_##natCode##_Marksman_Win_Pack: BNB_FA_Marksman_Win_Pack\
	{\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Marksman_Win_Pack;\
		class TransportMagazines{BNB_FA_Gen_Marksman_TransportMagazines BNB_FA_Marksman_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Marksman_TransportItems BNB_FA_Marksman_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Marksman_TransportWeapons BNB_FA_Marksman_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Medic_Win_Blufor: B_medic_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Medic";\
	attendant = 1;\
	icon = "iconManMedic";\
	picture = "pictureHeal";\
    uniformClass=BNB_FA_Medic_Win_Uniform;\
    weapons[]={BNB_FA_Medic_Primary BNB_FA_Medic_Pistol BNB_FA_Medic_Launcher BNB_FA_Medic_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Medic_Primary BNB_FA_Medic_Pistol BNB_FA_Medic_Launcher BNB_FA_Medic_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Medic_Items BNB_FA_Medic_Items};\
    respawnItems[]={BNB_FA_Gen_Medic_Items BNB_FA_Medic_Items};\
    magazines[]={BNB_FA_Gen_Medic_Magazines BNB_FA_Medic_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Medic_Magazines BNB_FA_Medic_Magazines};\
    linkedItems[]={BNB_FA_Gen_Medic_LinkedItems BNB_FA_Medic_Win_Helmet BNB_FA_Medic_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Medic_LinkedItems BNB_FA_Medic_Win_Helmet BNB_FA_Medic_Win_Vest};\
    backpack= BNB_FA_##natCode##_Medic_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_Medic_Win_OpFor: BNB_FA_##natCode##_Medic_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Medic_Win_IndFor: BNB_FA_##natCode##_Medic_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Medic_Win_Pack: BNB_FA_Medic_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Medic_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_Medic_TransportMagazines BNB_FA_Medic_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Medic_TransportItems BNB_FA_Medic_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Medic_TransportWeapons BNB_FA_Medic_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Pilot_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Pilot";\
	engineer = 1;\
    uniformClass=BNB_FA_Pilot_Win_Uniform;\
    weapons[]={BNB_FA_Pilot_Primary BNB_FA_Pilot_Pistol BNB_FA_Pilot_Launcher BNB_FA_Pilot_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Pilot_Primary BNB_FA_Pilot_Pistol BNB_FA_Pilot_Launcher BNB_FA_Pilot_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Pilot_Items BNB_FA_Pilot_Items};\
    respawnItems[]={BNB_FA_Gen_Pilot_Items BNB_FA_Pilot_Items};\
    magazines[]={BNB_FA_Gen_Pilot_Magazines BNB_FA_Pilot_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Pilot_Magazines BNB_FA_Pilot_Magazines};\
    linkedItems[]={BNB_FA_Gen_Pilot_LinkedItems BNB_FA_Pilot_Win_Helmet BNB_FA_Pilot_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Pilot_LinkedItems BNB_FA_Pilot_Win_Helmet BNB_FA_Pilot_Win_Vest};\
    backpack= BNB_FA_##natCode##_Pilot_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_Pilot_Win_OpFor: BNB_FA_##natCode##_Pilot_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Pilot_Win_IndFor: BNB_FA_##natCode##_Pilot_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Pilot_Win_Pack: BNB_FA_Pilot_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Pilot_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_Pilot_TransportMagazines BNB_FA_Pilot_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Pilot_TransportItems BNB_FA_Pilot_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Pilot_TransportWeapons BNB_FA_Pilot_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_Rifleman_Win_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_BluFor ; \
	side = 1;\
    displayName="Rifleman";\
    uniformClass=BNB_FA_Rifleman_Win_Uniform;\
    weapons[]={BNB_FA_Rifleman_Primary BNB_FA_Rifleman_Pistol BNB_FA_Rifleman_Launcher BNB_FA_Rifleman_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Rifleman_Primary BNB_FA_Rifleman_Pistol BNB_FA_Rifleman_Launcher BNB_FA_Rifleman_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Rifleman_Items BNB_FA_Rifleman_Items};\
    respawnItems[]={BNB_FA_Gen_Rifleman_Items BNB_FA_Rifleman_Items};\
    magazines[]={BNB_FA_Gen_Rifleman_Magazines BNB_FA_Rifleman_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Rifleman_Magazines BNB_FA_Rifleman_Magazines};\
    linkedItems[]={BNB_FA_Gen_Rifleman_LinkedItems BNB_FA_Rifleman_Win_Helmet BNB_FA_Rifleman_Win_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Rifleman_LinkedItems BNB_FA_Rifleman_Win_Helmet BNB_FA_Rifleman_Win_Vest};\
    backpack= BNB_FA_##natCode##_Rifleman_Win_Pack ;\
  };\
  class BNB_FA_##natCode##_Rifleman_Win_OpFor: BNB_FA_##natCode##_Rifleman_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Rifleman_Win_IndFor: BNB_FA_##natCode##_Rifleman_Win_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Winter_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Rifleman_Win_Pack: BNB_FA_Rifleman_Win_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Rifleman_Win_Pack;\
    class TransportMagazines{BNB_FA_Gen_Rifleman_TransportMagazines BNB_FA_Rifleman_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Rifleman_TransportItems BNB_FA_Rifleman_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Rifleman_TransportWeapons BNB_FA_Rifleman_TransportWeapons};\
  };\
/*Compatibility classes for old missions*/\
	class BNB_FA_##natCode##_IC_Win:BNB_FA_##natCode##_IC_Win_BluFor\
	{\
	scope = 1;\
	};\
	class BNB_FA_##natCode##_Medic_Win:BNB_FA_##natCode##_Medic_Win_BluFor\
	{\
	scope = 1;\
	};\
	class BNB_FA_##natCode##_Rifleman_Win:BNB_FA_##natCode##_Rifleman_Win_BluFor\
	{\
	scope = 1;\
	};



#define BNB_FA_Units_Woodland(natCode) \
class BNB_FA_##natCode##_AA_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (AA)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_AA_Woo_Uniform;\
    weapons[]={BNB_FA_AA_Primary BNB_FA_AA_Pistol BNB_FA_AA_Launcher BNB_FA_AA_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_AA_Primary BNB_FA_AA_Pistol BNB_FA_AA_Launcher BNB_FA_AA_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_AA_Items BNB_FA_AA_Items};\
    respawnItems[]={BNB_FA_Gen_AA_Items BNB_FA_AA_Items};\
    magazines[]={BNB_FA_Gen_AA_Magazines BNB_FA_AA_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_AA_Magazines BNB_FA_AA_Magazines};\
    linkedItems[]={BNB_FA_Gen_AA_LinkedItems BNB_FA_AA_Woo_Helmet BNB_FA_AA_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_AA_LinkedItems BNB_FA_AA_Woo_Helmet BNB_FA_AA_Woo_Vest};\
    backpack= BNB_FA_##natCode##_AA_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_AA_Woo_OpFor: BNB_FA_##natCode##_AA_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_AA_Woo_IndFor: BNB_FA_##natCode##_AA_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_AA_Woo_Pack: BNB_FA_AA_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_AA_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_AA_TransportMagazines BNB_FA_AA_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_AA_TransportItems BNB_FA_AA_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_AA_TransportWeapons BNB_FA_AA_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_AT_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (AT)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_AT_Woo_Uniform;\
    weapons[]={BNB_FA_AT_Primary BNB_FA_AT_Pistol BNB_FA_AT_Launcher BNB_FA_AT_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_AT_Primary BNB_FA_AT_Pistol BNB_FA_AT_Launcher BNB_FA_AT_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_AT_Items BNB_FA_AT_Items};\
    respawnItems[]={BNB_FA_Gen_AT_Items BNB_FA_AT_Items};\
    magazines[]={BNB_FA_Gen_AT_Magazines BNB_FA_AT_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_AT_Magazines BNB_FA_AT_Magazines};\
    linkedItems[]={BNB_FA_Gen_AT_LinkedItems BNB_FA_AT_Woo_Helmet BNB_FA_AT_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_AT_LinkedItems BNB_FA_AT_Woo_Helmet BNB_FA_AT_Woo_Vest};\
    backpack= BNB_FA_##natCode##_AT_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_AT_Woo_OpFor: BNB_FA_##natCode##_AT_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_AT_Woo_IndFor: BNB_FA_##natCode##_AT_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_AT_Woo_Pack: BNB_FA_AT_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_AT_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_AT_TransportMagazines BNB_FA_AT_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_AT_TransportItems BNB_FA_AT_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_AT_TransportWeapons BNB_FA_AT_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Crew_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Crew";\
	engineer = 1;\
	icon = "iconManEngineer";\
    uniformClass=BNB_FA_Crew_Woo_Uniform;\
    weapons[]={BNB_FA_Crew_Primary BNB_FA_Crew_Pistol BNB_FA_Crew_Launcher BNB_FA_Crew_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Crew_Primary BNB_FA_Crew_Pistol BNB_FA_Crew_Launcher BNB_FA_Crew_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Crew_Items BNB_FA_Crew_Items};\
    respawnItems[]={BNB_FA_Gen_Crew_Items BNB_FA_Crew_Items};\
    magazines[]={BNB_FA_Gen_Crew_Magazines BNB_FA_Crew_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Crew_Magazines BNB_FA_Crew_Magazines};\
    linkedItems[]={BNB_FA_Gen_Crew_LinkedItems BNB_FA_Crew_Woo_Helmet BNB_FA_Crew_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Crew_LinkedItems BNB_FA_Crew_Woo_Helmet BNB_FA_Crew_Woo_Vest};\
    backpack= BNB_FA_##natCode##_Crew_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_Crew_Woo_OpFor: BNB_FA_##natCode##_Crew_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Crew_Woo_IndFor: BNB_FA_##natCode##_Crew_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Crew_Woo_Pack: BNB_FA_Crew_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Crew_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_Crew_TransportMagazines BNB_FA_Crew_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Crew_TransportItems BNB_FA_Crew_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Crew_TransportWeapons BNB_FA_Crew_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_EOD_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="EOD Specialist";\
	engineer = 1;\
	canDeactivateMines = 1;\
	icon = "iconManEngineer";\
	picture = "pictureExplosive";\
    uniformClass=BNB_FA_EOD_Woo_Uniform;\
    weapons[]={BNB_FA_EOD_Primary BNB_FA_EOD_Pistol BNB_FA_EOD_Launcher BNB_FA_EOD_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_EOD_Primary BNB_FA_EOD_Pistol BNB_FA_EOD_Launcher BNB_FA_EOD_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_EOD_Items BNB_FA_EOD_Items};\
    respawnItems[]={BNB_FA_Gen_EOD_Items BNB_FA_EOD_Items};\
    magazines[]={BNB_FA_Gen_EOD_Magazines BNB_FA_EOD_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_EOD_Magazines BNB_FA_EOD_Magazines};\
    linkedItems[]={BNB_FA_Gen_EOD_LinkedItems BNB_FA_EOD_Woo_Helmet BNB_FA_EOD_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_EOD_LinkedItems BNB_FA_EOD_Woo_Helmet BNB_FA_EOD_Woo_Vest};\
    backpack= BNB_FA_##natCode##_EOD_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_EOD_Woo_OpFor: BNB_FA_##natCode##_EOD_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_EOD_Woo_IndFor: BNB_FA_##natCode##_EOD_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_EOD_Woo_Pack: BNB_FA_EOD_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_EOD_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_EOD_TransportMagazines BNB_FA_EOD_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_EOD_TransportItems BNB_FA_EOD_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_EOD_TransportWeapons BNB_FA_EOD_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_GL_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Grenadier";\
    uniformClass=BNB_FA_GL_Woo_Uniform;\
    weapons[]={BNB_FA_GL_Primary BNB_FA_GL_Pistol BNB_FA_GL_Launcher BNB_FA_GL_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_GL_Primary BNB_FA_GL_Pistol BNB_FA_GL_Launcher BNB_FA_GL_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_GL_Items BNB_FA_GL_Items};\
    respawnItems[]={BNB_FA_Gen_GL_Items BNB_FA_GL_Items};\
    magazines[]={BNB_FA_Gen_GL_Magazines BNB_FA_GL_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_GL_Magazines BNB_FA_GL_Magazines};\
    linkedItems[]={BNB_FA_Gen_GL_LinkedItems BNB_FA_GL_Woo_Helmet BNB_FA_GL_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_GL_LinkedItems BNB_FA_GL_Woo_Helmet BNB_FA_GL_Woo_Vest};\
    backpack= BNB_FA_##natCode##_GL_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_GL_Woo_OpFor: BNB_FA_##natCode##_GL_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_GL_Woo_IndFor: BNB_FA_##natCode##_GL_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_GL_Woo_Pack: BNB_FA_GL_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_GL_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_GL_TransportMagazines BNB_FA_GL_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_GL_TransportItems BNB_FA_GL_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_GL_TransportWeapons BNB_FA_GL_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_HAT_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Missile Specialist (HAT)";\
	icon = "iconManAT";\
    uniformClass=BNB_FA_HAT_Woo_Uniform;\
    weapons[]={BNB_FA_HAT_Primary BNB_FA_HAT_Pistol BNB_FA_HAT_Launcher BNB_FA_HAT_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_HAT_Primary BNB_FA_HAT_Pistol BNB_FA_HAT_Launcher BNB_FA_HAT_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_HAT_Items BNB_FA_HAT_Items};\
    respawnItems[]={BNB_FA_Gen_HAT_Items BNB_FA_HAT_Items};\
    magazines[]={BNB_FA_Gen_HAT_Magazines BNB_FA_HAT_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_HAT_Magazines BNB_FA_HAT_Magazines};\
    linkedItems[]={BNB_FA_Gen_HAT_LinkedItems BNB_FA_HAT_Woo_Helmet BNB_FA_HAT_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_HAT_LinkedItems BNB_FA_HAT_Woo_Helmet BNB_FA_HAT_Woo_Vest};\
    backpack= BNB_FA_##natCode##_HAT_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_HAT_Woo_OpFor: BNB_FA_##natCode##_HAT_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_HAT_Woo_IndFor: BNB_FA_##natCode##_HAT_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_HAT_Woo_Pack: BNB_FA_HAT_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_HAT_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_HAT_TransportMagazines BNB_FA_HAT_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_HAT_TransportItems BNB_FA_HAT_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_HAT_TransportWeapons BNB_FA_HAT_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_JFO_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Joint Fires Observer";\
    uniformClass=BNB_FA_JFO_Woo_Uniform;\
    weapons[]={BNB_FA_JFO_Primary BNB_FA_JFO_Pistol BNB_FA_JFO_Launcher BNB_FA_JFO_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_JFO_Primary BNB_FA_JFO_Pistol BNB_FA_JFO_Launcher BNB_FA_JFO_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_JFO_Items BNB_FA_JFO_Items};\
    respawnItems[]={BNB_FA_Gen_JFO_Items BNB_FA_JFO_Items};\
    magazines[]={BNB_FA_Gen_JFO_Magazines BNB_FA_JFO_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_JFO_Magazines BNB_FA_JFO_Magazines};\
    linkedItems[]={BNB_FA_Gen_JFO_LinkedItems BNB_FA_JFO_Woo_Helmet BNB_FA_JFO_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_JFO_LinkedItems BNB_FA_JFO_Woo_Helmet BNB_FA_JFO_Woo_Vest};\
    backpack= BNB_FA_##natCode##_JFO_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_JFO_Woo_OpFor: BNB_FA_##natCode##_JFO_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_JFO_Woo_IndFor: BNB_FA_##natCode##_JFO_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_JFO_Woo_Pack: BNB_FA_JFO_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_JFO_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_JFO_TransportMagazines BNB_FA_JFO_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_JFO_TransportItems BNB_FA_JFO_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_JFO_TransportWeapons BNB_FA_JFO_TransportWeapons};\
  };\
  \
 class BNB_FA_##natCode##_IC_Woo_Blufor: B_Soldier_SL_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="IC";\
    uniformClass=BNB_FA_IC_Woo_Uniform;\
    weapons[]={BNB_FA_IC_Primary BNB_FA_IC_Pistol BNB_FA_IC_Launcher BNB_FA_IC_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_IC_Primary BNB_FA_IC_Pistol BNB_FA_IC_Launcher BNB_FA_IC_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_IC_Items BNB_FA_IC_Items};\
    respawnItems[]={BNB_FA_Gen_IC_Items BNB_FA_IC_Items};\
    magazines[]={BNB_FA_Gen_IC_Magazines BNB_FA_IC_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_IC_Magazines BNB_FA_IC_Magazines};\
    linkedItems[]={BNB_FA_Gen_IC_LinkedItems BNB_FA_IC_Woo_Helmet BNB_FA_IC_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_IC_LinkedItems BNB_FA_IC_Woo_Helmet BNB_FA_IC_Woo_Vest};\
    backpack= BNB_FA_##natCode##_IC_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_IC_Woo_OpFor: BNB_FA_##natCode##_IC_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_IC_Woo_IndFor: BNB_FA_##natCode##_IC_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_IC_Woo_Pack: BNB_FA_IC_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_IC_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_IC_TransportMagazines BNB_FA_IC_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_IC_TransportItems BNB_FA_IC_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_IC_TransportWeapons BNB_FA_IC_TransportWeapons};\
  };\
\
class BNB_FA_##natCode##_LMG_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Machinegunner";\
	icon = "iconManMG" ;\
    uniformClass=BNB_FA_LMG_Woo_Uniform;\
    weapons[]={BNB_FA_LMG_Primary BNB_FA_LMG_Pistol BNB_FA_LMG_Launcher BNB_FA_LMG_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_LMG_Primary BNB_FA_LMG_Pistol BNB_FA_LMG_Launcher BNB_FA_LMG_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_LMG_Items BNB_FA_LMG_Items};\
    respawnItems[]={BNB_FA_Gen_LMG_Items BNB_FA_LMG_Items};\
    magazines[]={BNB_FA_Gen_LMG_Magazines BNB_FA_LMG_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_LMG_Magazines BNB_FA_LMG_Magazines};\
    linkedItems[]={BNB_FA_Gen_LMG_LinkedItems BNB_FA_LMG_Woo_Helmet BNB_FA_LMG_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_LMG_LinkedItems BNB_FA_LMG_Woo_Helmet BNB_FA_LMG_Woo_Vest};\
    backpack= BNB_FA_##natCode##_LMG_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_LMG_Woo_OpFor: BNB_FA_##natCode##_LMG_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_LMG_Woo_IndFor: BNB_FA_##natCode##_LMG_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_LMG_Woo_Pack: BNB_FA_LMG_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Pilot_LMG_Pack;\
    class TransportMagazines{BNB_FA_Gen_LMG_TransportMagazines BNB_FA_LMG_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_LMG_TransportItems BNB_FA_LMG_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_LMG_TransportWeapons BNB_FA_LMG_TransportWeapons};\
  };\
 class BNB_FA_##natCode##_Marksman_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Marksman";\
    uniformClass=BNB_FA_Marksman_Woo_Uniform;\
    weapons[]={BNB_FA_Marksman_Primary BNB_FA_Marksman_Pistol BNB_FA_Marksman_Launcher BNB_FA_Marksman_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Marksman_Primary BNB_FA_Marksman_Pistol BNB_FA_Marksman_Launcher BNB_FA_Marksman_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Marksman_Items BNB_FA_Marksman_Items};\
    respawnItems[]={BNB_FA_Gen_Marksman_Items BNB_FA_Marksman_Items};\
    magazines[]={BNB_FA_Gen_Marksman_Magazines BNB_FA_Marksman_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Marksman_Magazines BNB_FA_Marksman_Magazines};\
    linkedItems[]={BNB_FA_Gen_Marksman_LinkedItems BNB_FA_Marksman_Woo_Helmet BNB_FA_Marksman_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Marksman_LinkedItems BNB_FA_Marksman_Woo_Helmet BNB_FA_Marksman_Woo_Vest};\
    backpack= BNB_FA_##natCode##_Marksman_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_Marksman_Woo_OpFor: BNB_FA_##natCode##_Marksman_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Marksman_Woo_IndFor: BNB_FA_##natCode##_Marksman_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
	};\
	class BNB_FA_##natCode##_Marksman_Woo_Pack: BNB_FA_Marksman_Woo_Pack\
	{\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Marksman_Woo_Pack;\
	class TransportMagazines{BNB_FA_Gen_Marksman_TransportMagazines BNB_FA_Marksman_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Marksman_TransportItems BNB_FA_Marksman_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Marksman_TransportWeapons BNB_FA_Marksman_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Medic_Woo_Blufor: B_medic_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Medic";\
	attendant = 1;\
	icon = "iconManMedic";\
	picture = "pictureHeal";\
    uniformClass=BNB_FA_Medic_Woo_Uniform;\
    weapons[]={BNB_FA_Medic_Primary BNB_FA_Medic_Pistol BNB_FA_Medic_Launcher BNB_FA_Medic_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Medic_Primary BNB_FA_Medic_Pistol BNB_FA_Medic_Launcher BNB_FA_Medic_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Medic_Items BNB_FA_Medic_Items};\
    respawnItems[]={BNB_FA_Gen_Medic_Items BNB_FA_Medic_Items};\
    magazines[]={BNB_FA_Gen_Medic_Magazines BNB_FA_Medic_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Medic_Magazines BNB_FA_Medic_Magazines};\
    linkedItems[]={BNB_FA_Gen_Medic_LinkedItems BNB_FA_Medic_Woo_Helmet BNB_FA_Medic_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Medic_LinkedItems BNB_FA_Medic_Woo_Helmet BNB_FA_Medic_Woo_Vest};\
    backpack= BNB_FA_##natCode##_Medic_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_Medic_Woo_OpFor: BNB_FA_##natCode##_Medic_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Medic_Woo_IndFor: BNB_FA_##natCode##_Medic_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Medic_Woo_Pack: BNB_FA_Medic_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Medic_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_Medic_TransportMagazines BNB_FA_Medic_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Medic_TransportItems BNB_FA_Medic_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Medic_TransportWeapons BNB_FA_Medic_TransportWeapons};\
  };\
\
 class BNB_FA_##natCode##_Pilot_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Pilot";\
	engineer = 1;\
    uniformClass=BNB_FA_Pilot_Woo_Uniform;\
    weapons[]={BNB_FA_Pilot_Primary BNB_FA_Pilot_Pistol BNB_FA_Pilot_Launcher BNB_FA_Pilot_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Pilot_Primary BNB_FA_Pilot_Pistol BNB_FA_Pilot_Launcher BNB_FA_Pilot_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Pilot_Items BNB_FA_Pilot_Items};\
    respawnItems[]={BNB_FA_Gen_Pilot_Items BNB_FA_Pilot_Items};\
    magazines[]={BNB_FA_Gen_Pilot_Magazines BNB_FA_Pilot_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Pilot_Magazines BNB_FA_Pilot_Magazines};\
    linkedItems[]={BNB_FA_Gen_Pilot_LinkedItems BNB_FA_Pilot_Woo_Helmet BNB_FA_Pilot_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Pilot_LinkedItems BNB_FA_Pilot_Woo_Helmet BNB_FA_Pilot_Woo_Vest};\
    backpack= BNB_FA_##natCode##_Pilot_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_Pilot_Woo_OpFor: BNB_FA_##natCode##_Pilot_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Pilot_Woo_IndFor: BNB_FA_##natCode##_Pilot_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Pilot_Woo_Pack: BNB_FA_Pilot_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Pilot_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_Pilot_TransportMagazines BNB_FA_Pilot_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Pilot_TransportItems BNB_FA_Pilot_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Pilot_TransportWeapons BNB_FA_Pilot_TransportWeapons};\
  };\
  class BNB_FA_##natCode##_Rifleman_Woo_Blufor: B_Soldier_F\
  {\
	faction= BNB_FA_##natCode##_Faction_BluFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_BluFor ; \
	side = 1;\
    displayName="Rifleman";\
    uniformClass=BNB_FA_Rifleman_Woo_Uniform;\
    weapons[]={BNB_FA_Rifleman_Primary BNB_FA_Rifleman_Pistol BNB_FA_Rifleman_Launcher BNB_FA_Rifleman_Binoculars "Put","Throw"};\
    respawnWeapons[]={BNB_FA_Rifleman_Primary BNB_FA_Rifleman_Pistol BNB_FA_Rifleman_Launcher BNB_FA_Rifleman_Binoculars "Put","Throw"};\
    items[]={BNB_FA_Gen_Rifleman_Items BNB_FA_Rifleman_Items};\
    respawnItems[]={BNB_FA_Gen_Rifleman_Items BNB_FA_Rifleman_Items};\
    magazines[]={BNB_FA_Gen_Rifleman_Magazines BNB_FA_Rifleman_Magazines};\
    respawnMagazines[]={BNB_FA_Gen_Rifleman_Magazines BNB_FA_Rifleman_Magazines};\
    linkedItems[]={BNB_FA_Gen_Rifleman_LinkedItems BNB_FA_Rifleman_Woo_Helmet BNB_FA_Rifleman_Woo_Vest};\
    respawnLinkedItems[]={BNB_FA_Gen_Rifleman_LinkedItems BNB_FA_Rifleman_Woo_Helmet BNB_FA_Rifleman_Woo_Vest};\
    backpack= BNB_FA_##natCode##_Rifleman_Woo_Pack ;\
  };\
  class BNB_FA_##natCode##_Rifleman_Woo_OpFor: BNB_FA_##natCode##_Rifleman_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_OpFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_OpFor ; \
	side = 0;\
  };\
\
  class BNB_FA_##natCode##_Rifleman_Woo_IndFor: BNB_FA_##natCode##_Rifleman_Woo_Blufor\
  {\
	faction= BNB_FA_##natCode##_Faction_IndFor ;\
	editorSubcategory = BNB_FA_##natCode##_Woodland_IndFor ; \
	side = 2;\
  };\
  class BNB_FA_##natCode##_Rifleman_Woo_Pack: BNB_FA_Rifleman_Woo_Pack\
  {\
    scope=1;\
	scopeCurator = 0;\
    scopeArsenal = 0;\
	ace_arsenal_uniqueBase = BNB_FA_Rifleman_Woo_Pack;\
    class TransportMagazines{BNB_FA_Gen_Rifleman_TransportMagazines BNB_FA_Rifleman_TransportMagazines};\
	class TransportItems{BNB_FA_Gen_Rifleman_TransportItems BNB_FA_Rifleman_TransportItems};\
    class TransportWeapons{BNB_FA_Gen_Rifleman_TransportWeapons BNB_FA_Rifleman_TransportWeapons};\
  };\
/*Compatibility classes for old missions*/\
	class BNB_FA_##natCode##_IC_Woo:BNB_FA_##natCode##_IC_Woo_BluFor\
	{\
	scope = 1;\
	};\
	class BNB_FA_##natCode##_Medic_Woo:BNB_FA_##natCode##_Medic_Woo_BluFor\
	{\
	scope = 1;\
	};\
	class BNB_FA_##natCode##_Rifleman_Woo:BNB_FA_##natCode##_Rifleman_Woo_BluFor\
	{\
	scope = 1;\
	};