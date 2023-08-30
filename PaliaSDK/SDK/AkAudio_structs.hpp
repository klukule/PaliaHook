#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAkResult : uint8
{
	EAkResult__NotImplemented      = 0,
	EAkResult__Success             = 1,
	EAkResult__Fail                = 2,
	EAkResult__PartialSuccess      = 3,
	EAkResult__NotCompatible       = 4,
	EAkResult__AlreadyConnected    = 5,
	EAkResult__InvalidFile         = 7,
	EAkResult__AudioFileHeaderTooLarge = 8,
	EAkResult__MaxReached          = 9,
	EAkResult__InvalidID           = 14,
	EAkResult__IDNotFound          = 15,
	EAkResult__InvalidInstanceID   = 16,
	EAkResult__NoMoreData          = 17,
	EAkResult__InvalidStateGroup   = 20,
	EAkResult__ChildAlreadyHasAParent = 21,
	EAkResult__InvalidLanguage     = 22,
	EAkResult__CannotAddItseflAsAChild = 23,
	EAkResult__InvalidParameter    = 31,
	EAkResult__ElementAlreadyInList = 35,
	EAkResult__PathNotFound        = 36,
	EAkResult__PathNoVertices      = 37,
	EAkResult__PathNotRunning      = 38,
	EAkResult__PathNotPaused       = 39,
	EAkResult__PathNodeAlreadyInList = 40,
	EAkResult__PathNodeNotInList   = 41,
	EAkResult__DataNeeded          = 43,
	EAkResult__NoDataNeeded        = 44,
	EAkResult__DataReady           = 45,
	EAkResult__NoDataReady         = 46,
	EAkResult__InsufficientMemory  = 52,
	EAkResult__Cancelled           = 53,
	EAkResult__UnknownBankID       = 54,
	EAkResult__BankReadError       = 56,
	EAkResult__InvalidSwitchType   = 57,
	EAkResult__FormatNotReady      = 63,
	EAkResult__WrongBankVersion    = 64,
	EAkResult__FileNotFound        = 66,
	EAkResult__DeviceNotReady      = 67,
	EAkResult__BankAlreadyLoaded   = 69,
	EAkResult__RenderedFX          = 71,
	EAkResult__ProcessNeeded       = 72,
	EAkResult__ProcessDone         = 73,
	EAkResult__MemManagerNotInitialized = 74,
	EAkResult__StreamMgrNotInitialized = 75,
	EAkResult__SSEInstructionsNotSupported = 76,
	EAkResult__Busy                = 77,
	EAkResult__UnsupportedChannelConfig = 78,
	EAkResult__PluginMediaNotAvailable = 79,
	EAkResult__MustBeVirtualized   = 80,
	EAkResult__CommandTooLarge     = 81,
	EAkResult__RejectedByFilter    = 82,
	EAkResult__InvalidCustomPlatformName = 83,
	EAkResult__DLLCannotLoad       = 84,
	EAkResult__DLLPathNotFound     = 85,
	EAkResult__NoJavaVM            = 86,
	EAkResult__OpenSLError         = 87,
	EAkResult__PluginNotRegistered = 88,
	EAkResult__DataAlignmentError  = 89,
	EAkResult__EAkResult_MAX       = 90,
};

enum class EAkCallbackType : uint8
{
	EAkCallbackType__EndOfEvent    = 0,
	EAkCallbackType__Marker        = 2,
	EAkCallbackType__Duration      = 3,
	EAkCallbackType__Starvation    = 5,
	EAkCallbackType__MusicPlayStarted = 7,
	EAkCallbackType__MusicSyncBeat = 8,
	EAkCallbackType__MusicSyncBar  = 9,
	EAkCallbackType__MusicSyncEntry = 10,
	EAkCallbackType__MusicSyncExit = 11,
	EAkCallbackType__MusicSyncGrid = 12,
	EAkCallbackType__MusicSyncUserCue = 13,
	EAkCallbackType__MusicSyncPoint = 14,
	EAkCallbackType__MIDIEvent     = 16,
	EAkCallbackType__EAkCallbackType_MAX = 17,
};

enum class EAkAndroidAudioAPI : uint8
{
	EAkAndroidAudioAPI__AAudio     = 0,
	EAkAndroidAudioAPI__OpenSL_ES  = 1,
	EAkAndroidAudioAPI__EAkAndroidAudioAPI_MAX = 2,
};

enum class EAkAudioSessionCategory : int32
{
	EAkAudioSessionCategory__Ambient = 0,
	EAkAudioSessionCategory__SoloAmbient = 1,
	EAkAudioSessionCategory__PlayAndRecord = 2,
	EAkAudioSessionCategory__EAkAudioSessionCategory_MAX = 3,
};

enum class EAkAudioSessionCategoryOptions : uint8
{
	EAkAudioSessionCategoryOptions__MixWithOthers = 0,
	EAkAudioSessionCategoryOptions__DuckOthers = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker = 3,
	EAkAudioSessionCategoryOptions__EAkAudioSessionCategoryOptions_MAX = 4,
};

enum class EAkAudioSessionMode : int32
{
	EAkAudioSessionMode__Default   = 0,
	EAkAudioSessionMode__VoiceChat = 1,
	EAkAudioSessionMode__GameChat  = 2,
	EAkAudioSessionMode__VideoRecording = 3,
	EAkAudioSessionMode__Measurement = 4,
	EAkAudioSessionMode__MoviePlayback = 5,
	EAkAudioSessionMode__VideoChat = 6,
	EAkAudioSessionMode__EAkAudioSessionMode_MAX = 7,
};

enum class EReflectionFilterBits : uint8
{
	EReflectionFilterBits__Wall    = 0,
	EReflectionFilterBits__Ceiling = 1,
	EReflectionFilterBits__Floor   = 2,
	EReflectionFilterBits__EReflectionFilterBits_MAX = 3,
};

enum class EAkAudioContext : uint8
{
	EAkAudioContext__Foreign       = 0,
	EAkAudioContext__GameplayAudio = 1,
	EAkAudioContext__EditorAudio   = 2,
	EAkAudioContext__AlwaysActive  = 3,
	EAkAudioContext__EAkAudioContext_MAX = 4,
};

enum class EPanningRule : uint8
{
	PanningRule__PanningRule_Speakers = 0,
	PanningRule__PanningRule_Headphones = 1,
	PanningRule__PanningRule_MAX   = 2,
};

enum class EAkAcousticPortalState : uint8
{
	AkAcousticPortalState__Closed  = 0,
	AkAcousticPortalState__Open    = 1,
	AkAcousticPortalState__AkAcousticPortalState_MAX = 2,
};

enum class EAkChannelConfiguration : uint8
{
	AkChannelConfiguration__Ak_Parent = 0,
	AkChannelConfiguration__Ak_MainMix = 1,
	AkChannelConfiguration__Ak_Passthrough = 2,
	AkChannelConfiguration__Ak_LFE = 3,
	AkChannelConfiguration__AK_Audio_Objects = 4,
	AkChannelConfiguration__Ak_1_0 = 5,
	AkChannelConfiguration__Ak_2_0 = 6,
	AkChannelConfiguration__Ak_2_1 = 7,
	AkChannelConfiguration__Ak_3_0 = 8,
	AkChannelConfiguration__Ak_3_1 = 9,
	AkChannelConfiguration__Ak_4_0 = 10,
	AkChannelConfiguration__Ak_4_1 = 11,
	AkChannelConfiguration__Ak_5_0 = 12,
	AkChannelConfiguration__Ak_5_1 = 13,
	AkChannelConfiguration__Ak_7_1 = 14,
	AkChannelConfiguration__Ak_5_1_2 = 15,
	AkChannelConfiguration__Ak_7_1_2 = 16,
	AkChannelConfiguration__Ak_7_1_4 = 17,
	AkChannelConfiguration__Ak_Auro_9_1 = 18,
	AkChannelConfiguration__Ak_Auro_10_1 = 19,
	AkChannelConfiguration__Ak_Auro_11_1 = 20,
	AkChannelConfiguration__Ak_Auro_13_1 = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order = 26,
	AkChannelConfiguration__AkChannelConfiguration_MAX = 27,
};

enum class EAkSpeakerConfiguration : uint8
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right = 131072,
	AkSpeakerConfiguration__Ak_Speaker_MAX = 131073,
};

enum class EAkMultiPositionType : uint8
{
	AkMultiPositionType__SingleSource = 0,
	AkMultiPositionType__MultiSources = 1,
	AkMultiPositionType__MultiDirections = 2,
	AkMultiPositionType__AkMultiPositionType_MAX = 3,
};

enum class EAkActionOnEventType : uint8
{
	AkActionOnEventType__Stop      = 0,
	AkActionOnEventType__Pause     = 1,
	AkActionOnEventType__Resume    = 2,
	AkActionOnEventType__Break     = 3,
	AkActionOnEventType__ReleaseEnvelope = 4,
	AkActionOnEventType__AkActionOnEventType_MAX = 5,
};

enum class EAkCurveInterpolation : uint8
{
	EAkCurveInterpolation__Log3    = 0,
	EAkCurveInterpolation__Sine    = 1,
	EAkCurveInterpolation__Log1    = 2,
	EAkCurveInterpolation__InvSCurve = 3,
	EAkCurveInterpolation__Linear  = 4,
	EAkCurveInterpolation__SCurve  = 5,
	EAkCurveInterpolation__Exp1    = 6,
	EAkCurveInterpolation__SineRecip = 7,
	EAkCurveInterpolation__Exp3    = 8,
	EAkCurveInterpolation__LastFadeCurve = 8,
	EAkCurveInterpolation__Constant = 9,
	EAkCurveInterpolation__EAkCurveInterpolation_MAX = 10,
};

enum class ERTPCValueType : uint8
{
	ERTPCValueType__Default        = 0,
	ERTPCValueType__Global         = 1,
	ERTPCValueType__GameObject     = 2,
	ERTPCValueType__PlayingID      = 3,
	ERTPCValueType__Unavailable    = 4,
	ERTPCValueType__ERTPCValueType_MAX = 5,
};

enum class EAkMidiEventType : uint8
{
	EAkMidiEventType__AkMidiEventTypeInvalid = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch = 160,
	EAkMidiEventType__AkMidiEventTypeController = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend = 224,
	EAkMidiEventType__AkMidiEventTypeSysex = 240,
	EAkMidiEventType__AkMidiEventTypeEscape = 247,
	EAkMidiEventType__AkMidiEventTypeMeta = 255,
	EAkMidiEventType__EAkMidiEventType_MAX = 256,
};

enum class EAkMidiCcValues : uint8
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1 = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2 = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3 = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4 = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2 = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6 = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7 = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8 = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9 = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10 = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1 = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2 = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3 = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4 = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1 = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1 = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn = 127,
	EAkMidiCcValues__EAkMidiCcValues_MAX = 128,
};

enum class EAkCodecId : uint8
{
	AkCodecId__None                = 0,
	AkCodecId__PCM                 = 1,
	AkCodecId__ADPCM               = 2,
	AkCodecId__XMA                 = 3,
	AkCodecId__Vorbis              = 4,
	AkCodecId__AAC                 = 10,
	AkCodecId__ATRAC9              = 12,
	AkCodecId__OpusNX              = 17,
	AkCodecId__AkOpus              = 19,
	AkCodecId__AkOpusWEM           = 20,
	AkCodecId__AkCodecId_MAX       = 21,
};

enum class EAkMeshType : uint8
{
	AkMeshType__StaticMesh         = 0,
	AkMeshType__CollisionMesh      = 1,
	AkMeshType__AkMeshType_MAX     = 2,
};

enum class EAkPanningRule : int32
{
	EAkPanningRule__Speakers       = 0,
	EAkPanningRule__Headphones     = 1,
	EAkPanningRule__EAkPanningRule_MAX = 2,
};

enum class EAkChannelConfigType : int32
{
	EAkChannelConfigType__Anonymous = 0,
	EAkChannelConfigType__Standard = 1,
	EAkChannelConfigType__Ambisonic = 2,
	EAkChannelConfigType__EAkChannelConfigType_MAX = 3,
};

enum class EAkChannelMask : uint8
{
	EAkChannelMask__FrontLeft      = 0,
	EAkChannelMask__FrontRight     = 1,
	EAkChannelMask__FrontCenter    = 2,
	EAkChannelMask__LowFrequency   = 3,
	EAkChannelMask__BackLeft       = 4,
	EAkChannelMask__BackRight      = 5,
	EAkChannelMask__BackCenter     = 8,
	EAkChannelMask__SideLeft       = 9,
	EAkChannelMask__SideRight      = 10,
	EAkChannelMask__Top            = 11,
	EAkChannelMask__HeightFrontLeft = 12,
	EAkChannelMask__HeightFrontCenter = 13,
	EAkChannelMask__HeightFrontRight = 14,
	EAkChannelMask__HeightBackLeft = 15,
	EAkChannelMask__HeightBackCenter = 16,
	EAkChannelMask__HeightBackRight = 17,
	EAkChannelMask__EAkChannelMask_MAX = 18,
};

enum class EAkCommSystem : int32
{
	EAkCommSystem__Socket          = 0,
	EAkCommSystem__HTCS            = 1,
	EAkCommSystem__EAkCommSystem_MAX = 2,
};

enum class EAkFitToGeometryMode : uint8
{
	EAkFitToGeometryMode__OrientedBox = 0,
	EAkFitToGeometryMode__AlignedBox = 1,
	EAkFitToGeometryMode__ConvexPolyhedron = 2,
	EAkFitToGeometryMode__EAkFitToGeometryMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AKWaapiJsonObject
struct FAKWaapiJsonObject
{
public:
	uint8                                        Pad_B9F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkWaapiSubscriptionId
struct FAkWaapiSubscriptionId
{
public:
	uint8                                        Pad_BA0[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct AkAudio.AkAdvancedInitializationSettings
struct FAkAdvancedInitializationSettings
{
public:
	uint32                                       IO_MemorySize;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       IO_Granularity;                                    // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetAutoStreamBufferLength;                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStreamCache;                                    // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaximumPinnedBytesInCache;                         // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGameSyncPreparation;                         // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ContinuousPlaybackLookAhead;                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MonitorQueuePoolSize;                              // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaximumHardwareTimeoutMs;                          // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DebugOutOfRangeCheckEnabled;                       // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugOutOfRangeLimit;                              // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x30 - 0x2C)
// ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
{
public:
	bool                                         EnableMultiCoreRendering;                          // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE6[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint32                                       AudioAPI;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RoundFrameSizeToHardwareSize;                      // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BEB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct AkAudio.AkAudioSession
struct FAkAudioSession
{
public:
	enum class EAkAudioSessionCategory           AudioSessionCategory;                              // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       AudioSessionCategoryOptions;                       // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAudioSessionMode               AudioSessionMode;                                  // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AkAudio.AkChannelMask
struct FAkChannelMask
{
public:
	int32                                        ChannelMask;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkOutputSettings
struct FAkOutputSettings
{
public:
	class FString                                AudioDeviceSharesetName;                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IdDevice;                                          // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPanningRule                      PanRule;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkChannelConfiguration           ChannelConfig;                                     // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF2[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct AkAudio.AkMidiEventBase
struct FAkMidiEventBase
{
public:
	enum class EAkMidiEventType                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Chan;                                              // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiGeneric
struct FAkMidiGeneric : public FAkMidiEventBase
{
public:
	uint8                                        Param1;                                            // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Param2;                                            // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiNoteOnOff
struct FAkMidiNoteOnOff : public FAkMidiEventBase
{
public:
	uint8                                        Note;                                              // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Velocity;                                          // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiCc
struct FAkMidiCc : public FAkMidiEventBase
{
public:
	enum class EAkMidiCcValues                   Cc;                                                // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x8 - 0x2)
// ScriptStruct AkAudio.AkMidiPitchBend
struct FAkMidiPitchBend : public FAkMidiEventBase
{
public:
	uint8                                        ValueLsb;                                          // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ValueMsb;                                          // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FullValue;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x4 - 0x2)
// ScriptStruct AkAudio.AkMidiNoteAftertouch
struct FAkMidiNoteAftertouch : public FAkMidiEventBase
{
public:
	uint8                                        Note;                                              // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x3 - 0x2)
// ScriptStruct AkAudio.AkMidiChannelAftertouch
struct FAkMidiChannelAftertouch : public FAkMidiEventBase
{
public:
	uint8                                        Value;                                             // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x3 - 0x2)
// ScriptStruct AkAudio.AkMidiProgramChange
struct FAkMidiProgramChange : public FAkMidiEventBase
{
public:
	uint8                                        ProgramNum;                                        // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AkAudio.AkSegmentInfo
struct FAkSegmentInfo
{
public:
	int32                                        CurrentPosition;                                   // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreEntryDuration;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActiveDuration;                                    // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PostExitDuration;                                  // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemainingLookAheadTime;                            // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BeatDuration;                                      // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BarDuration;                                       // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridDuration;                                      // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GridOffset;                                        // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AkAudio.AkExternalSourceInfo
struct FAkExternalSourceInfo
{
public:
	class FString                                ExternalSrcName;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkCodecId                        CodecID;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C14[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Filename;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkExternalMediaAsset*                 ExternalSourceAsset;                               // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsStreamed;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C17[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkGeometrySurfaceOverride
struct FAkGeometrySurfaceOverride
{
public:
	class UAkAcousticTexture*                    AcousticTexture;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableOcclusionOverride;                          // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OcclusionValue;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SurfaceArea;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C22[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkAcousticSurface
struct FAkAcousticSurface
{
public:
	uint32                                       Texture;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Occlusion;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkTriangle
struct FAkTriangle
{
public:
	uint16                                       Point0;                                            // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Point1;                                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Point2;                                            // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Surface;                                           // 0x6(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AkAudio.AkGeometryData
struct FAkGeometryData
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAkAcousticSurface>            Surfaces;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAkTriangle>                   Triangles;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>             ToOverrideAcousticTexture;                         // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UPhysicalMaterial*>             ToOverrideOcclusion;                               // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x34 - 0x30)
// ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHeadMountedDisplayAudioDevice;                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C29[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkPluginInfo
struct FAkPluginInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PluginID;                                          // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Dll;                                               // 0x18(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkMainOutputSettings
struct FAkMainOutputSettings
{
public:
	class FString                                AudioDeviceShareset;                               // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       DeviceID;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkPanningRule                    PanningRule;                                       // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkChannelConfigType              ChannelConfigType;                                 // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ChannelMask;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfChannels;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AkAudio.AkSpatialAudioSettings
struct FAkSpatialAudioSettings
{
public:
	uint32                                       MaxSoundPropagationDepth;                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementThreshold;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumberOfPrimaryRays;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ReflectionOrder;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumPathLength;                                 // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CPULimitPercentage;                                // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableDiffractionOnReflections;                    // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGeometricDiffractionAndTransmission;         // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CalcEmitterVirtualPosition;                        // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseObstruction;                                    // 0x1B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseOcclusion;                                      // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C32[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AkAudio.AkCommunicationSettings
struct FAkCommunicationSettings
{
public:
	uint32                                       PoolSize;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DiscoveryBroadcastPort;                            // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       CommandPort;                                       // 0x6(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       NotificationPort;                                  // 0x8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C36[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NetworkName;                                       // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
{
public:
	bool                                         InitializeSystemComms;                             // 0x20(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C39[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
{
public:
	enum class EAkCommSystem                     CommunicationSystem;                               // 0x20(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AkAudio.AkCommonInitializationSettings
struct FAkCommonInitializationSettings
{
public:
	uint32                                       MaximumNumberOfMemoryPools;                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaximumNumberOfPositioningPaths;                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CommandQueueSize;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SamplesPerFrame;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkMainOutputSettings                 MainOutputSettings;                                // 0x10(0x28)(Edit, NativeAccessSpecifierPublic)
	float                                        StreamingLookAheadRatio;                           // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       NumberOfRefillsInVoice;                            // 0x3C(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkSpatialAudioSettings               SpatialAudioSettings;                              // 0x40(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x68 - 0x60)
// ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
{
public:
	uint32                                       SampleRate;                                        // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkBoolPropertyToControl
struct FAkBoolPropertyToControl
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkPropertyToControl
struct FAkPropertyToControl
{
public:
	class FString                                ItemProperty;                                      // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint32                                       ACPBatchBufferSize;                                // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C54[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AkAudio.AkReverbDescriptor
struct FAkReverbDescriptor
{
public:
	uint8                                        Pad_C57[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
struct FAkGeometrySurfacePropertiesToMap
{
public:
	TSoftObjectPtr<class UAkAcousticTexture>     AcousticTexture;                                   // 0x0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionValue;                                    // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkAcousticTextureParams
struct FAkAcousticTextureParams
{
public:
	struct FVector4                              AbsorptionValues;                                  // 0x0(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkWwiseObjectDetails
struct FAkWwiseObjectDetails
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemPath;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AkAudio.AkWwiseItemToControl
struct FAkWwiseItemToControl
{
public:
	struct FAkWwiseObjectDetails                 ItemPicked;                                        // 0x0(0x30)(Edit, EditConst, NativeAccessSpecifierPublic)
	class FString                                ItemPath;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.AkSurfaceEdgeVerts
struct FAkSurfaceEdgeVerts
{
public:
	uint8                                        Pad_C64[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AkAudio.AkSurfaceEdgeInfo
struct FAkSurfaceEdgeInfo
{
public:
	uint8                                        Pad_C66[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AkAudio.AkSurfacePoly
struct FAkSurfacePoly
{
public:
	class UAkAcousticTexture*                    Texture;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Occlusion;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSurface;                                     // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C6A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SurfaceArea;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C6C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkWaapiFieldNames
struct FAkWaapiFieldNames
{
public:
	class FString                                FieldName;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AkAudio.AkWaapiUri
struct FAkWaapiUri
{
public:
	class FString                                Uri;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	bool                                         UseHeadMountedDisplayAudioDevice;                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MaxSystemAudioObjects;                             // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x34 - 0x30)
// ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
public:
	uint16                                       MaximumNumberOfXMAVoices;                          // 0x30(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHardwareCodecLowLatencyMode;                    // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C79[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
struct FAkXboxOneApuHeapInitializationSettings
{
public:
	uint32                                       CachedSize;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NonCachedSize;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneAkAudioEventSection*        Section;                                           // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
public:
	class UMovieSceneAkAudioRTPCSection*         Section;                                           // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
struct FMovieSceneTangentDataSerializationHelper
{
public:
	float                                        ArriveTangent;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C88[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ArriveTangentWeight;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangentWeight;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
struct FMovieSceneFloatValueSerializationHelper
{
public:
	float                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8A[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTangentDataSerializationHelper Tangent;                                           // 0x8(0x14)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
struct FMovieSceneFloatChannelSerializationHelper
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C90[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Times;                                             // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatValueSerializationHelper> Values;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasDefaultValue;                                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C93[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
