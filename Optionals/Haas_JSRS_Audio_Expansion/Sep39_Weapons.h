class w39_SMG : jsrs_mp40_base {};

// Pistols
    class w39_vis : w39_Pistol {
        class Single : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
            class StandardSound: BaseSoundModeType {
                soundSetshot[] = {"jsrs_Luger_shot_soundset","jsrs_ww2_pistol_reverb_soundset"};
            };
        };
    };
// End Pistols

// Rifles
    class w39_wz29 : jsrs_k98_base {};

    class w39_wz91_98_23 : LIB_M9130 {
        sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mosin_shot_soundset","jsrs_ww2_bolt_rifle_reverb_soundset"};
			};
    };

    class w39_wz38m : jsrs_k98_base {};
// End Rifles

// SMGs
    class w39_mors : w39_SMG {
        class FullAuto : Mode_FullAuto {
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class AI_Burst1 : Mode_Burst {
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(8);
            reloadTime = RPM_TO_TIME(525); // 525 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"WW2_Sten_Shot_SoundSet","WW2_rifle_small_Tail_SoundSet","WW2_Sten_stereoLayer_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
// End SMGs

// Machine Guns
    class w39_wz28 : W39_MGBASE {
        displayName = "wz. 28";
        descriptionShort = "Karabin maszynowy Browning wz. 28";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
        discreteDistanceInitIndex = 1;
        dispersion = MOA_TO_RAD(3);
        fow_burstLenght = 3;
        magazines[] = {"w39_7_92_20xMauserS","w39_7_92_20xMauserP"};
        magazineWell[] = {"CBA_792x57_wz28"};
        recoil = "recoil_2PzD_rifle_auto_1";
        class Eventhandlers : Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 198.416;
            class CowsSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo {
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo {
                compatibleItems[] = {};
            };
        };
        class FullAuto : Mode_FullAuto {
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(600); // 600 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 2;
            aiDispersionCoefY = 3;
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(600); // 600 rpm
            class BaseSoundModeType;
            class StandardSound : BaseSoundModeType {
                begin1[] = {"",0,1};
                closure1[] = {"",1,1,10};
                closure2[] = {"",1,1,10};
                soundBegin[] = {"begin1",1};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                soundSetShot[] = {"IFA3_BAR_Shot_SoundSet","IFA3_mmg1_Tail_SoundSet"};
                weaponSoundEffect = "DefaultRifle";
            };
        };
    };
// End Machine Guns

// Other Weapons, Tripods, Launchers
// End Other Weapons, Tripods, Launchers

// Vehicle Weapons
    class w39_CKMwz25mg : w39_LMGA3_base {
        displayName = "CKM wz.25";
        class manual : w39_LMGA3_base {
            dispersion = MOA_TO_RAD(3);
            reloadTime = RPM_TO_TIME(480); // 480 rpm
        };
    };
/*
    class w39_ckmwz25veh : w39_CKMwz25mg {
        scope = 1;
        displayName = "CKM wz.25";
        nameSound = "mgun";
        aiDispersionCoefX = 21;
        aiDispersionCoefY = 21;
        magazines[] = {"w39_7_92_30xMauserS", "w39_7_92_30xMauserP"};
        canLock = 1;
        cursor = "EmptyCursor";
        cursoraim = "mg";
        showAimCursorInternal = 1;
    };
/*
// End Vehicle Weapons
