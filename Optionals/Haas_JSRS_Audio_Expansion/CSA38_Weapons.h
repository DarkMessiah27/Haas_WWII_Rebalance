
    class csa38_Pistol;
    class CSA38_LMGA3_base;
    class CSA38_HMGA3_base;
    class csa38_MAS36Bayonet;
    class csa38_vz24Bayonet;
    class csa38_vz23Bayonet;
    class csa38_vz33Bayonet;
    class csa38_sg84Bayonet;
    class csa38_m95Bayonet;
    class CSA38_PGvz23_Empty : muzzle_snds_H {
		class LIB_RifleGrenade {};
	};
    class CSA38_PGvz23 : CSA38_PGvz23_Empty {};
    class csa38_czvz27tlumic : muzzle_snds_H {};

    class CSA38_MGBASE : muzzle_snds_H
    {
        class LIB_RifleGrenade {};
    };

// Pistols
    class CSA38_WaltherPP;
    class CSA38_WaltherPPK : CSA38_WaltherPP {
        class Single : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
            class StandardSound: BaseSoundModeType {
                soundSetshot[] = {"jsrs_Luger_shot_soundset","jsrs_ww2_pistol_reverb_soundset"};
            };
        };
    };
// End Pistols

// Rifles
    // Rifles that use K98 soundset.
    class CSA38_vz24 : jsrs_k98_base {};
    class CSA38_vz24ii : jsrs_k98_base {};
    class CSA38_vz23 : jsrs_k98_base {};
    class CSA38_vz22 : jsrs_k98_base {};
    class CSA38_vz33 : jsrs_k98_base {};
    class CSA38_vz33_40 : jsrs_k98_base {};
    class CSA38_vz33_40ii : jsrs_k98_base {};
    class csa38_gvz23 : jsrs_k98_base {};
    class CSA38_kar98k : jsrs_k98_base {};
    class CSA38_kar98k2 : jsrs_k98_base {};
    class CSA38_kar98k3 : jsrs_k98_base {};
    class CSA38_kar98k4 : jsrs_k98_base {};
    class CSA38_kar98k5 : jsrs_k98_base {};
    class CSA38_kar98k6 : jsrs_k98_base {};
    class CSA38_g98 : jsrs_k98_base {};
    class CSA38_g98i : jsrs_k98_base {};
    class CSA38_g98ii : jsrs_k98_base {};
    class CSA38_g98iii : jsrs_k98_base {};
    class CSA38_g98iv : jsrs_k98_base {};
    class CSA38_M1895 : jsrs_k98_base {};
    class CSA38_M1895k : jsrs_k98_base {};
    class CSA38_sm1924 : jsrs_k98_base {};
    class CSA38_MAS36 : jsrs_k98_base {};

    // Rifles that use Lee Enfield soundset.
    class CSA38_SMLE : jsrs_smle_base {};
    class CSA38_SMLE_CUP : jsrs_smle_base {};
    class CSA38_SMLE2 : jsrs_smle_base {};
    class CSA38_SMLE2_CUP : jsrs_smle_base {};
// End Rifles

// SMGs
    class csa38_SMG : jsrs_mp40_base
    {
        class LIB_RifleGrenade {};
    };

    class CSA38_Mp18 : csa38_SMG {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
    };

    class CSA38_Mp28 : CSA38_Mp18 {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
    };

    class CSA38_Mp35 : CSA38_Mp28 {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class FullAuto2 : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
    };

    class CSA38_Mp38 : csa38_SMG {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
    };

    class CSA38_Mp40 : CSA38_Mp38 {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
    };

    class CSA38_Mp40ii : CSA38_Mp38 {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
    };

    class CSA38_stenMkII : csa38_SMG {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mp40_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class FullAuto2 : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_stenmk2_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_stenmk2_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
        };
    };
// End SMGs

// Machine Guns
    class CSA38_BRENMKII : CSA38_MGBASE {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
        };
        class AI_Burst1 : Mode_Burst {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_brenmk2_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
        };
    };

    class CSA38_zb26 : CSA38_MGBASE {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_bar_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_bar_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
        };
    };

    class CSA38_MG34 : CSA38_MGBASE {
        class FullAuto : Mode_FullAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mg34_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
        };
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mg34_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
        };
    };
// End Machine Guns

// Vehicle Weapons
    class csa38_MG34MG : CSA38_HMGA3_base {
        class Single : Mode_SemiAuto {
            sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_mg34_shot_soundset","jsrs_ww2_mg_reverb_soundset"};
			};
        };
    };
// End Vehicle Weapons
