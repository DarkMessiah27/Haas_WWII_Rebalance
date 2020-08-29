
class CfgPatches {
    class Haas_JSRS_Audio_Expansion {
        author = "Wilhelm Haas (Drofseh)";
        authors[] = {"Wilhelm Haas (Drofseh)", "Thomas Brauer (DarkMessiah27)"};
        units[] = {};
        magazineWell[] = {};
        magazines[] = {};
        weapons[] = {};
        requiredAddons[] = {"Haas_WWII_Rebalance", "jsrs_soundmod_ifa3_aio_sounds"}; // Not sure if the IFA JSRS dependency name is correct.
    };
}; // End CfgPatches

class BaseSoundModeType;

class Eventhandlers;

class Mode_SemiAuto;

class Mode_Burst;

class Mode_FullAuto;

class SlotInfo;



class cfgAmmo {

    #include "cfgAmmo.h"

};

class cfgSoundShaders {

    #include "cfgSoundShaders.h"

};

class cfgWeapons {

    #include "cfgWeapons.h"

};
