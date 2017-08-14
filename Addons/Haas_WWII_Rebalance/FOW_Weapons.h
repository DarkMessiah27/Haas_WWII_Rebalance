//Pistols
    class fow_w_type10 : Pistol_Base_F {
        descriptionShort = "Type 10 Flare Pistol";
        displayName = "Type 10 Flare Pistol (2PzD)";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 25.806;
        };
    };

    class fow_w_type14 : Pistol_Base_F {
        descriptionShort = "Type 14 Nambu";
        displayName = "Type 14 Nambu (2PzD)";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 19.8;
        };
    };

    class fow_w_webley : Pistol_Base_F {
        descriptionShort = "Webley Mk IV";
        displayName = "Webley Mk IV (2PzD)";
        recoil = "recoil_pistol_acpc2";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 19.8;
        };
    };

    class fow_w_m1911 : Pistol_Base_F {
        descriptionShort = "Automatic Pistol, Caliber .45, M1911A1";
        displayName = "M1911A1 (2PzD)";
        magazines[] = {"LIB_7Rnd_45ACP","fow_7Rnd_45acp","LIB_11Rnd_45ACP_2PzD"};
        recoil = "recoil_pistol_acpc2";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 24.375;
        };
    };
//End Pistols

//Rifles
    class fow_w_k98 : fow_rifleBolt_base {
        descriptionShort = "Karabiner 98 kurz";
        displayName = "Kar98k (2PzD)";
        magazines[] = {"lib_5Rnd_792x57","lib_5Rnd_792x57_t","lib_5Rnd_792x57_sS","lib_5Rnd_792x57_SMK","lib_10Rnd_792x57_T","lib_10Rnd_792x57_T2","lib_10Rnd_792x57_sS","lib_10Rnd_792x57_SMK","fow_5Rnd_792x57"};
        recoil = "recoil_rifle_1";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.993;
        };
    };

    class fow_w_leeenfield_no4mk1 : fow_rifleBolt_base {
        descriptionShort = "Rifle, No. 4 Mk I";
        displayName = "Lee Enfield No. 4 Mk I (2PzD)";
        magazines[] = {"fow_10Rnd_303","LEN_10Rnd_303"};
        recoil = "recoil_rifle_1";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 88.037;
        };
    };
    class fow_w_leeenfield_no4mk1_redwood : fow_w_leeenfield_no4mk1 {
        descriptionShort = "Rifle, No. 4 Mk I";
         displayName = "Lee Enfield No. 4 Mk I (Red) (2PzD)";
    };

    class fow_w_m1_carbine : fow_rifle_base {
        descriptionShort = "Carbine, Caliber .30, M1";
        displayName = "M1 Carbine (2PzD)";
        magazines[] = {"LIB_15Rnd_762x33","fow_15Rnd_762x33","LIB_30Rnd_762x33_2PzD","fow_30Rnd_762x33_2PzD"};
        recoil = "recoil_mx";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 50.735;
        };
             class Single : Mode_SemiAuto {
                     reloadTime = 0.08;
        };
    };
    class fow_w_m2_carbine_2PzD : fow_w_m1_carbine {
        descriptionShort = "Carbine, Cal .30, M2";
        displayName = "M2 Carbine (2PzD)";
        //fow_burstLength = 3;
        magazines[] = {"LIB_30Rnd_762x33_2PzD","fow_30Rnd_762x33_2PzD","LIB_15Rnd_762x33","fow_15Rnd_762x33"};
        modes[] = {"Single","Full","Far","Medium","Short"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 52.941;
        };
        class Single;
        class Full : Single {
            autoFire = 1;
            displayName = "Full";
            reloadTime = 0.08;
            textureType = "fullAuto";
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class fow_w_m1_garand : fow_rifle_base {
        descriptionShort = "Rifle, Caliber .30, M1";
        displayName = "M1 Garand (2PzD)";
        magazines[] = {"LIB_8Rnd_762x63","fow_8Rnd_762x63"};
        recoil = "recoil_rifle_1";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 95.074;
        };
    };

    class fow_w_stg44 : fow_rifle_base {
        descriptionShort = "Sturmgewehr 44";
        displayName = "StG44 (2PzD)";
        //fow_burstLength = 3;
        magazines[] = {"LIB_30Rnd_792x33","fow_30Rnd_792x33"};
        modes[] = {"Single","Full","Far","Medium","Short"};
        recoil = "recoil_mx";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 97.588;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.104;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class fow_w_type99 : fow_rifleBolt_base {
        descriptionShort = "Type 99 Arisaka";
        displayName = "Type 99 Arisaka (2PzD)";
        recoil = "recoil_rifle_1";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 82.500;
        };
    };
    class fow_w_type99_sniper : fow_w_type99 {
        descriptionShort = "Type 99 Arisaka Sniper";
        displayName = "Type 99 Sniper (2PzD)";
        recoil = "recoil_rifle_1";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.500;
        };
    };
//End Rifles

//Submachine Guns
    class fow_w_m1a1_thompson : fow_rifle_base {
        descriptionShort = "Submachine Gun, Caliber .45, M1A1";
        displayName = "M1A1 Thompson (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"LIB_30Rnd_45ACP","LIB_20Rnd_45ACP_M1_2PzD","fow_20Rnd_45acp_M1_2PzD","fow_20Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp_M1_2PzD","fow_30Rnd_45acp_T_M1_2PzD","fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
        recoil = "recoil_smg_01";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 105.882;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.086;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class fow_w_m3 : fow_rifle_base {
        descriptionShort = "Submachine Gun, Caliber .45, M3";
        displayName = "M3 GreaseGun (2PzD)";
        //fow_burstLength = 4;
        modes[] = {"Full","Single","Far","Medium","Short"};
        magazines[] = {"fow_30Rnd_45acp_M3_2PzD","fow_30Rnd_45acp_T_M3_2PzD","LEN_30Rnd_45ACP_M3","fow_30Rnd_45acp"};
        recoil = "recoil_smg_02";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.412;
    };
        class Single : Mode_SemiAuto {
            showToPlayer = 0;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.133;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class fow_w_m55_reising : fow_rifle_base {
        descriptionShort = "Submachine Gun, Caliber .45, M55";
        displayName = "M55 Reising (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"fow_20Rnd_45acp","fow_12Rnd_45acp_2PzD"};
        recoil = "recoil_smg_01";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 61.82;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.075;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class fow_w_mp40 : fow_rifle_base {
        descriptionShort = "Maschinenpistole 40";
        displayName = "MP40 (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40","LEN_32Rnd_9x19","fow_32Rnd_9x19_sten"};
        recoil = "recoil_smg_02";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 87.551;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.114;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class fow_w_sten_mk2 : fow_rifle_base {
        descriptionShort = "Sten Mk II";
        displayName = "Sten Mk II (2PzD)";
        //fow_burstLength = 4;
        magazines[] = {"LEN_32Rnd_9x19","fow_32Rnd_9x19_sten","LIB_32Rnd_9x19","fow_32Rnd_9x19_mp40"};
        recoil = "recoil_smg_02";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 65.074;
        };
        class Full : Mode_FullAuto {
            reloadTime = 0.109;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };
    class fow_w_sten_mk5 : fow_w_sten_mk2 {
        descriptionShort = "Sten Mk V";
        displayName = "Sten Mk V (2PzD)";
        //fow_burstLength = 4;
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 79.632;
        };
        class Full : Full {
            reloadTime = 0.1;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };

    class fow_w_type100 : fow_rifle_base {
        descriptionShort = "Type 100 Submachine Gun";
        displayName = "Type 100 SMG (2PzD)";
        //fow_burstLength = 4;
        recoil = "recoil_smg_02";
        class Full : Mode_FullAuto {
            reloadTime = 0.15;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 75.000;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };
    class fow_w_type100_44_2PzD : fow_w_type100 {
        descriptionShort = "Type 100/44 Submachine Gun";
        displayName = "Type 100/44 SMG (2PzD)";
        //fow_burstLength = 5;
        class Full : Full {
            reloadTime = 0.075;
        };
        /*class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };*/
    };
//End Submachine Guns

//Machine Guns
    class fow_w_m1918a2 : fow_rifle_base {
        descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
        displayName = "M1918A2 BAR (2PzD)";
        //fow_burstLength = 5;
        magazines[] = {"LIB_20Rnd_762x63","fow_20Rnd_762x63"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 194.118;
        };
        class FullAuto_300 : Mode_FullAuto {
            reloadTime = 0.200;
            textureType = "fullAuto";
        };
        class FullAuto_650 : Mode_FullAuto {
            reloadTime = 0.092;
            textureType = "fastAuto";
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };
    class fow_w_m1918a2_bak : fow_w_m1918a2 {
        descriptionShort = "Rifle, Caliber .30, Automatic, Browning, M1918A2";
        displayName = "M1918A2 BAR (BAK) (2PzD)";
   };

    class fow_w_m1919a4 : fow_w_m1919 {
        descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A4";
        displayName = "M1919A4 (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"LIB_250Rnd_762x63_2PzD","LIB_200Rnd_762x63_2PzD","LIB_150Rnd_762x63_2PzD","LIB_100Rnd_762x63","LIB_50Rnd_762x63","fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_762x63"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 310.178;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };
    class fow_w_m1919a6 : fow_w_m1919 {
        descriptionShort = "Gun, Machine, Caliber .30, Browning, M1919A6";
         displayName = "M1919A6 (2PzD)";
        //fow_burstLength = 7;
         magazines[] = {"LIB_250Rnd_762x63_2PzD","LIB_200Rnd_762x63_2PzD","LIB_150Rnd_762x63_2PzD","LIB_100Rnd_762x63","LIB_50Rnd_762x63","fow_250Rnd_M1919","fow_200Rnd_M1919_2PzD","fow_150Rnd_M1919_2PzD","fow_100Rnd_M1919_2PzD","fow_50Rnd_762x63"};
         recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
             mass = 320.184;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class fow_w_bren : fow_rifle_base {
        descriptionShort = "Bren Gun";
        displayName = "Bren Gun (2PzD)";
        //fow_burstLength = 5;
        recoil = "recoil_mk200";
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.118;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 228.309;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class fow_w_mg42 : fow_rifle_base {
        descriptionShort = "Maschinengewehr 42";
        displayName = "MG42 (2PzD)";
        //fow_burstLength = 7;
        magazines[] = {"lib_50Rnd_792x57","lib_50Rnd_792x57_SMK","lib_50Rnd_792x57_sS","LIB_100Rnd_792x57","LIB_100Rnd_792x57_SMK_2PzD","LIB_100Rnd_792x57_sS_2PzD","LIB_150Rnd_792x57_2PzD","LIB_150Rnd_792x57_SMK_2PzD","LIB_150Rnd_792x57_sS_2PzD","LIB_200Rnd_792x57_2PzD","LIB_200Rnd_792x57_SMK_2PzD","LIB_200Rnd_792x57_sS_2PzD","LIB_250Rnd_792x57_2PzD","LIB_250Rnd_792x57_SMK_2PzD","LIB_250Rnd_792x57_sS_2PzD","fow_50Rnd_792x57","fow_250Rnd_792x57"};
        recoil = "recoil_mk200";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 255.221;
        };
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.05;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    class fow_w_type99_lmg : fow_rifle_base {
        descriptionShort = "Type 99 Light Machine Gun";
        displayName = "Type 99 LMG (2PzD)";
        //fow_burstLength = 5;
        recoil = "recoil_mk200";
        class FullAuto : Mode_FullAuto {
            reloadTime = 0.086;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 230.074;
        };
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };

    /*class fow_w_vickers_mounted : HMG_M2 {
        fow_burstLength = 7;
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
  };*/

    /*class fow_w_type92 : MGun {
        fow_burstLength = 7;
        class Eventhandlers: Eventhandlers {
            class fow_mgRoF {
                fired = "_this spawn fow_main_fnc_mgRoF;";
            };
        };
    };*/
//End Machine Guns

//Other Weapons, Tripod, Launchers
    class fow_w_m1a1_bazooka : Launcher_Base_F {
        descriptionShort = "Rocket Launcher, M1A1";
        displayName = "M1A1 Bazooka (2PzD)";
        magazines[] = {"LIB_1Rnd_60mm_M6","fow_1Rnd_m6a1"};
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 127.941;
        };
    };
  
    class fow_w_piat : Launcher_Base_F {
        descriptionShort = "Projector, Infantry, Anti Tank Mk I";
        displayName = "PIAT (2PzD)";
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 320;
        };
    };

    class fow_w_m2_flamethrower : fow_rifle_base {
        descriptionShort = "M2 Flamethrower";
        displayName = "M2 Flamethrower (Do Not Use, Not Working, Shoots Bullets) (FOW)";
    };
//End Other Weapons, Tripod, Launchers