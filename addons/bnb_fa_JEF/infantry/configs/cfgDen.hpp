#define BNB_FA_Mag "CUP_30Rnd_556x45_Stanag"
#define BNB_FA_PistolMag "CUP_17Rnd_9x19_glock17"

#define BNB_FA_Rifle "PB_GM10A4"
#define BNB_FA_RifleGL "PB_GM10A4_M203"
#define BNB_FA_Pistol "rhsusf_weap_glock17g4"

#define BNB_FA_Des_Uniform "PB_CADPATAR_Gora_RU"
#define BNB_FA_Mul_Uniform "PB_MULTICAM_U"
#define BNB_FA_Win_Uniform "PB_M05W_JACKET"
#define BNB_FA_Woo_Uniform "PB_M84_Gora_RU"

#define BNB_FA_Des_Helmet "PB_CADPATAR_H"
#define BNB_FA_Mul_Helmet "PB_Multicam_C_H_N_H"
#define BNB_FA_Win_Helmet "PB_M05W_H"
#define BNB_FA_Woo_Helmet "PB_M84_H"

#define BNB_FA_Des_Vest "PB_CADPATAR_Carrier_Rig"
#define BNB_FA_Mul_Vest "PB_MAD21_Carrier_Rig"
#define BNB_FA_Win_Vest "UK3CB_BAF_V_Osprey_Winter"
#define BNB_FA_Woo_Vest "PB_M84_Carrier_Rig"

// Backpacks should not be in quotation marks!
#define BNB_FA_Des_Backpack PB_BP01_cadpatar
#define BNB_FA_Mul_Backpack PB_BP01_Multicam
#define BNB_FA_Win_Backpack PB_BP01_Schneetarn
#define BNB_FA_Woo_Backpack PB_BP01_M84
#define BNB_FA_Des_Backpack_Medic PB_BP01_cadpatar
#define BNB_FA_Mul_Backpack_Medic PB_BP01_Multicam
#define BNB_FA_Win_Backpack_Medic PB_BP01_Schneetarn
#define BNB_FA_Woo_Backpack_Medic PB_BP01_M84
#define BNB_FA_Des_Backpack_IC PB_RT1523BIG_CADPATAR
#define BNB_FA_Mul_Backpack_IC PB_RT1523BIG_Multicam
#define BNB_FA_Win_Backpack_IC PB_RT1523BIG_SCHNEE
#define BNB_FA_Woo_Backpack_IC PB_RT1523BIG_M84

#define BNB_FA_EST_Classes class BNB_FA_Des_Backpack##;\
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