//Items includes everything that goes within the uniform and vest, except for magazines and grenades
#define BNB_FA_Gen_Items "ACE_adenosine","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_painkillers","ACE_EntrenchingTool"
#define BNB_FA_Gen_Items_IC "ACE_adenosine","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_painkillers","ACE_EntrenchingTool","ACE_HuntIR_monitor","ACE_CableTie","ACE_CableTie"
#define BNB_FA_Gen_Items_Medic "ACE_adenosine","ACE_EarPlugs","ACE_epinephrine","ACE_epinephrine","ACE_Flashlight_XL50","ACE_MapTools","ACE_morphine","ACE_morphine","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_painkillers","ACE_EntrenchingTool","ACE_surgicalKit"

//LinkedItems includes everything that is not an item, backpack, weapon, or uniform
#define BNB_FA_Gen_LinkedItems "ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","G_Bandanna_oli"
#define BNB_FA_Gen_LinkedItems_IC "ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","UK3CB_BAF_Soflam_Laserdesignator","G_Bandanna_oli"
#define BNB_FA_Gen_LinkedItems_Medic "ItemMap","ItemCompass","ItemWatch","TFAR_anprc152","ItemGPS","G_Bandanna_oli"

//TransportItems are the items that go into backpacks and must use the ITEM_XX macro.
//Format = ITEM_XX(TheItemClassNameWithoutQuotes,TheQuantity)
#define BNB_FA_Gen_TransportItems 
#define BNB_FA_Gen_TransportItems_IC 
#define BNB_FA_Gen_TransportItems_Medic ITEM_XX(ACE_plasmaIV_500,6)\
ITEM_XX(ACE_plasmaIV,2)\
ITEM_XX(ACE_epinephrine,6)\
ITEM_XX(ACE_adenosine,1)\
ITEM_XX(ACE_morphine,6)\
ITEM_XX(ACE_painkillers,6)\
ITEM_XX(ACE_elasticBandage,25)\
ITEM_XX(ACE_packingBandage,15)\
ITEM_XX(ACE_tourniquet,8)

//TransportMagazines are the magazines that go into backpacks and must use the MAG_XX macro
//Format = MAG_XX(TheMagazineClassNameWithoutQuotes,TheQuantity)
#define BNB_FA_Gen_TransportMagazines 
#define BNB_FA_Gen_TransportMagazines_IC MAG_XX(rhs_mag_M433_HEDP,6)\
MAG_XX(rhs_mag_M441_HE,6)\
MAG_XX(SmokeShell,2)\
MAG_XX(1Rnd_Smoke_Grenade_shell,4)\
MAG_XX(1Rnd_SmokeRed_Grenade_shell,2)\
MAG_XX(ACE_HuntIR_M203,4)\
MAG_XX(SmokeShellBlue,2)\
MAG_XX(SmokeShellGreen,2)
#define BNB_FA_Gen_TransportMagazines_Medic 

//Binoculars
#define BNB_FA_Gen_Binoculars "UK3CB_BAF_Soflam_Laserdesignator"
#define BNB_FA_Gen_Binocular_Battery "Laserbatteries"

//The generic Smoke, Frag, and GL grenades
#define BNB_FA_Gen_Smoke "SmokeShell"
#define BNB_FA_Gen_Frag "HandGrenade"
#define BNB_FA_Gen_GL "rhs_mag_M441_HE"

//This sets the standard number of magazines for usage by other macros. Remember that one mag is inserted into the rifle
#define BNB_FA_Gen_Magazines BNB_FA_Mag , BNB_FA_Mag , BNB_FA_Mag, BNB_FA_Mag , BNB_FA_Mag , BNB_FA_Mag, BNB_FA_Mag , BNB_FA_Mag , BNB_FA_Mag, BNB_FA_Mag
