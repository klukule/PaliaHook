#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBinkMediaPlayerBinkBufferModes : uint8
{
	BMASM_Bink_Stream              = 0,
	BMASM_Bink_PreloadAll          = 1,
	BMASM_Bink_StreamUntilResident = 2,
	BMASM_Bink_MAX                 = 3,
};

enum class EBinkMediaPlayerBinkSoundTrack : uint8
{
	BMASM_Bink_Sound_None          = 0,
	BMASM_Bink_Sound_Simple        = 1,
	BMASM_Bink_Sound_LanguageOverride = 2,
	BMASM_Bink_Sound_51            = 3,
	BMASM_Bink_Sound_51LanguageOverride = 4,
	BMASM_Bink_Sound_71            = 5,
	BMASM_Bink_Sound_71LanguageOverride = 6,
	BMASM_Bink_Sound_MAX           = 7,
};

enum class EBinkMediaPlayerBinkDrawStyle : uint8
{
	BMASM_Bink_DS_RenderToTexture  = 0,
	BMASM_Bink_DS_OverlayFillScreenWithAspectRatio = 1,
	BMASM_Bink_DS_OverlayOriginalMovieSize = 2,
	BMASM_Bink_DS_OverlayFillScreen = 3,
	BMASM_Bink_DS_OverlaySpecificDestinationRectangle = 4,
	BMASM_Bink_DS_MAX              = 5,
};

enum class EBinkMoviePlayerBinkBufferModes : uint8
{
	MP_Bink_Stream                 = 0,
	MP_Bink_PreloadAll             = 1,
	MP_Bink_StreamUntilResident    = 2,
	MP_Bink_MAX                    = 3,
};

enum class EBinkMoviePlayerBinkSoundTrack : uint8
{
	MP_Bink_Sound_None             = 0,
	MP_Bink_Sound_Simple           = 1,
	MP_Bink_Sound_LanguageOverride = 2,
	MP_Bink_Sound_51               = 3,
	MP_Bink_Sound_51LanguageOverride = 4,
	MP_Bink_Sound_71               = 5,
	MP_Bink_Sound_71LanguageOverride = 6,
	MP_Bink_Sound_MAX              = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}


