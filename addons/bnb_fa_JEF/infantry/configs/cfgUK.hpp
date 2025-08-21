#define BNB_FA_Mag "UK3CB_BAF_556_30Rnd"
#define BNB_FA_PistolMag "UK3CB_BAF_9_17Rnd"

#define BNB_FA_Rifle "UK3CB_BAF_L85A3"
#define BNB_FA_RifleGL "UK3CB_BAF_L85A3_UGL"
#define BNB_FA_Pistol "UK3CB_BAF_L131A1"

#define BNB_FA_Des_Uniform "UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve"
#define BNB_FA_Mul_Uniform "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve"
#define BNB_FA_Win_Uniform "UK3CB_BAF_U_Smock_Arctic"
#define BNB_FA_Woo_Uniform "UK3CB_BAF_U_CombatUniform_DPMW_ShortSleeve"


#define BNB_FA_Des_Helmet "UK3CB_BAF_H_Mk6_DDPM_C"
#define BNB_FA_Mul_Helmet "UK3CB_BAF_H_Mk7_Camo_A"
#define BNB_FA_Win_Helmet "UK3CB_BAF_H_Mk7_Win_A"
#define BNB_FA_Woo_Helmet "UK3CB_BAF_H_Mk6_DPMW_C"


#define BNB_FA_Des_Vest "UK3CB_BAF_V_Osprey_DDPM6"
#define BNB_FA_Mul_Vest "UK3CB_BAF_V_Osprey_Rifleman_B"
#define BNB_FA_Win_Vest "UK3CB_BAF_V_Osprey_Winter"
#define BNB_FA_Woo_Vest "UK3CB_BAF_V_Osprey_DPMW6"



// Backpacks should not be in quotation marks!
#define BNB_FA_Des_Backpack UK3CB_BAF_B_Bergen_DDPM_Rifleman_A
#define BNB_FA_Mul_Backpack UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B
#define BNB_FA_Woo_Backpack UK3CB_BAF_B_Bergen_DPMW_Rifleman_A
#define BNB_FA_Win_Backpack UK3CB_BAF_B_Bergen_Arctic_Rifleman_A
#define BNB_FA_Des_Backpack_Medic UK3CB_BAF_B_Bergen_DDPM_Rifleman_B
#define BNB_FA_Mul_Backpack_Medic UK3CB_BAF_B_Bergen_MTP_Medic_L_B
#define BNB_FA_Woo_Backpack_Medic UK3CB_BAF_B_Bergen_DPMW_Rifleman_B
#define BNB_FA_Win_Backpack_Medic UK3CB_BAF_B_Bergen_Arctic_Rifleman_B
#define BNB_FA_Des_Backpack_IC UK3CB_BAF_B_Bergen_DDPM_JTAC_H_A
#define BNB_FA_Mul_Backpack_IC UK3CB_BAF_B_Bergen_MTP_JTAC_H_A
#define BNB_FA_Woo_Backpack_IC UK3CB_BAF_B_Bergen_DPMW_JTAC_H_A
#define BNB_FA_Win_Backpack_IC UK3CB_BAF_B_Bergen_Arctic_JTAC_A

#define BNB_FA_UK_Classes class BNB_FA_Des_Backpack##;\
	class BNB_FA_Mul_Backpack##;\
	class BNB_FA_Woo_Backpack##;\
	class BNB_FA_Win_Backpack##;\
	class BNB_FA_Des_Backpack_Medic##;\
	class BNB_FA_Mul_Backpack_Medic##;\
	class BNB_FA_Woo_Backpack_Medic##;\
	class BNB_FA_Win_Backpack_Medic##;\
	class BNB_FA_Des_Backpack_IC##;\
	class BNB_FA_Mul_Backpack_IC##;\
	class BNB_FA_Woo_Backpack_IC##;\
	class BNB_FA_Win_Backpack_IC##;


#define BNB_FA_TransportMagazines 
#define BNB_FA_TransportMagazines_IC
#define BNB_FA_TransportMagazines_Medic 

#define BNB_FA_Magazines BNB_FA_Gen_Magazines , BNB_FA_PistolMag , BNB_FA_PistolMag, BNB_FA_Gen_Smoke , BNB_FA_Gen_Smoke, BNB_FA_Gen_Frag
#define BNB_FA_Magazines_IC BNB_FA_Gen_Magazines , BNB_FA_PistolMag , BNB_FA_PistolMag, BNB_FA_Gen_Smoke , BNB_FA_Gen_Smoke, BNB_FA_Gen_Frag , BNB_FA_Gen_GL
#define BNB_FA_Magazines_Medic BNB_FA_Gen_Magazines , BNB_FA_PistolMag , BNB_FA_PistolMag, BNB_FA_Gen_Smoke , BNB_FA_Gen_Smoke, BNB_FA_Gen_Frag