// Pistols
    class LEN_Welrod : hgun_Rook40_F 
	{
        class Single : Mode_SemiAuto 
		{
			sounds[] = {"StandardSound"};
            class StandardSound : BaseSoundModeType 
			{
                soundSetshot[] = {"jsrs_Luger_shot_soundset","jsrs_ww2_pistol_reverb_soundset"};
            };
        };
    };
// End Pistols

// Rifles
    class LEN_FG42 : LIB_MP44 
	{
        class Single : Mode_SemiAuto 
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_fg42_shot_soundset","jsrs_ww2_bolt_rifle_reverb_soundset"};
			};
        };
        class FullAuto : Mode_FullAuto 
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_fg42_shot_soundset","jsrs_ww2_bolt_rifle_reverb_soundset"};
			};
        };
    };

    class LEN_SMLE_No4Mk1 : LIB_K98 
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
    class LEN_SMLE_No4Mk1T : LEN_SMLE_No4Mk1 
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
// End Rifles

// Submachine Guns
    class LEN_StenMk2 : LIB_MP40 
	{
        class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_stenmk2_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
		};
    };
    class LEN_StenMk2S : LEN_StenMk2 
	{
        class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_stenmk2_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
		};
    };
    class LEN_StenMk5 : LEN_StenMk2 
	{
        class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"jsrs_stenmk2_shot_soundset","jsrs_ww2_smg_reverb_soundset"};
			};
		};
    };
// End Submachine Guns