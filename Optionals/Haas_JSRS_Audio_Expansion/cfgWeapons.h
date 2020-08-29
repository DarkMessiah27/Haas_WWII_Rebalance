
class PistolCore;
class RifleCore;
class MGunCore;
class CannonCore;
class RocketPods;
class LIB_MP44;
class LIB_K98;
class LIB_MP40;

class MGun : MGunCore {
    class WeaponSlotsInfo;
};

class HMG_01;

class HMG_M2 : HMG_01 {
    class manual;
};

class HMG_M2_Mounted : HMG_M2 {
    fow_burstLenght = 6;
    class Eventhandlers {
        class fow_mgRoF {
            fired = "_this spawn fow_main_fnc_mgRoFStatic;";
        };
    };
    class manual : manual {
        dispersion = MOA_TO_RAD(4);
        reloadTime = RPM_TO_TIME(525); // 525 rpm
    };
    class close : manual {};
    class short : close {};
    class medium : close {};
    class far : close {};
};

class GrenadeLauncher;

class UGL_F : GrenadeLauncher {
};

class Launcher;

class Launcher_Base_F : Launcher {
    class WeaponSlotsInfo;
};

class Rifle : RifleCore {
    class WeaponSlotsInfo;
};

class Rifle_Base_F : Rifle {
    class WeaponSlotsInfo;
};

class Rifle_Short_Base_F : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class Rifle_Long_Base_F : Rifle_Base_F {
    class WeaponSlotsInfo;
};

class Pistol : PistolCore {
    class WeaponSlotsInfo;
};

class Pistol_Base_F : Pistol {
    class WeaponSlotsInfo;
    class Single;
};

class hgun_P07_F : Pistol_Base_F {
    class WeaponSlotsInfo;
    class Single;
};

class hgun_Rook40_F : Pistol_Base_F {
    class WeaponSlotsInfo;
    class Single;
};

class jsrs_rifle_base : Rifle_Base_F
{
    bullet1[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_1.ogg",2.0099,1,10};
    bullet2[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_2.ogg",2.0099,1,10};
    bullet3[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_3.ogg",2.0099,1,10};
    bullet4[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\metal_4.ogg",2.0099,1,10};
    bullet5[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_1.ogg",2.0099,1,10};
    bullet6[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_2.ogg",2.0099,1,10};
    bullet7[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_3.ogg",2.0099,1,10};
    bullet8[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\dirt_4.ogg",2.0099,1,10};
    bullet9[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_1.ogg",2.0099,1,10};
    bullet10[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_2.ogg",2.0099,1,10};
    bullet11[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_3.ogg",2.0099,1,10};
    bullet12[] = {"\jsrs_soundmod_complete\JSRS_Soundmod_Soundfiles\weapons\shells\medium\grass_4.ogg",2.0099,1,10};
    soundbullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
};

class jsrs_k98_base : Rifle_Base_F
{
    class Single : Mode_SemiAuto {
        sounds[] = {"StandardSound"};
        class StandardSound : BaseSoundModeType {
            soundSetShot[] = {"jsrs_kar98k_shot_soundset","jsrs_ww2_bolt_rifle_reverb_soundset"};
        };
    };
};

class jsrs_smle_base : Rifle_Base_F
{
    class Single: Mode_SemiAuto
    {
        sounds[] = {"StandardSound"};
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"jsrs_leeenfield_shot_soundset","jsrs_ww2_bolt_rifle_reverb_soundset"};
        };
    };
};

class jsrs_mp40_base : jsrs_rifle_base
{
    class FullAuto : Mode_FullAuto 
    {
        sounds[] = {"StandardSound"};
        class StandardSound: BaseSoundModeType
        {
            soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
        };
    };
};

class ItemCore;

class muzzle_snds_H : ItemCore {
    class ItemInfo;
};

#include "LEN_Weapons.h"

#include "CSA38_Weapons.h"

//#include "Sep39_Weapons.h"
