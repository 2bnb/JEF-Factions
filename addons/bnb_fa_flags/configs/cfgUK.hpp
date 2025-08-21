#ifdef BNB_FA_Magazines_Ammo 
#undef BNB_FA_Magazines_Ammo 
#endif
#ifdef BNB_FA_Magazines_Medical 
#undef BNB_FA_Magazines_Medical 
#endif
#ifdef BNB_FA_Magazines_Launchers
#undef BNB_FA_Magazines_Launchers 
#endif
#ifdef BNB_FA_Weapons_Ammo
#undef BNB_FA_Weapons_Ammo
#endif
#ifdef BNB_FA_Weapons_Medical
#undef BNB_FA_Weapons_Medical
#endif
#ifdef BNB_FA_Weapons_Launchers
#undef BNB_FA_Weapons_Launchers
#endif
#ifdef BNB_FA_Items_Ammo
#undef BNB_FA_Items_Ammo
#endif
#ifdef BNB_FA_Items_Medical
#undef BNB_FA_Items_Medical
#endif
#ifdef BNB_FA_Items_Launchers
#undef BNB_FA_Items_Launchers
#endif

#define BNB_FA_Magazines_Medical 

#define BNB_FA_Magazines_Ammo MAG_XX(UK3CB_BAF_556_30Rnd,24)\
MAG_XX(UK3CB_BAF_9_30Rnd,6)\
MAG_XX(CUP_20Rnd_762x51_FNFAL_M,12)\
MAG_XX(CUP_20Rnd_762x51_G3,12)\
MAG_XX(CUP_20Rnd_762x51_B_M110,12)\
MAG_XX(UK3CB_BAF_762_L42A1_20Rnd,12)\
MAG_XX(UK3CB_BAF_762_100Rnd,12)\
MAG_XX(UK3CB_BAF_556_200Rnd,12)\
MAG_XX(UK3CB_BAF_762_200Rnd,12)\
MAG_XX(UK3CB_BAF_9_17Rnd,12)\
MAG_XX(UK3CB_BAF_9_15Rnd,12)\
MAG_XX(UK3CB_BAF_9_13Rnd,12)

#define BNB_FA_Magazines_Launchers 

#define BNB_FA_Weapons_Medical 
#define BNB_FA_Weapons_Ammo 
#define BNB_FA_Weapons_Launchers WEAP_XX(rhs_weap_M136,4)\
WEAP_XX(rhs_weap_M136_hedp,4)\
WEAP_XX(rhs_weap_M136_hp,4)\
WEAP_XX(CUP_launch_NLAW,4)

#define BNB_FA_Items_Medical 
#define BNB_FA_Items_Ammo 
#define BNB_FA_Items_Launchers 