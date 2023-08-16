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

enum class EMediaSoundChannels : int32
{
	EMediaSoundChannels__Mono      = 0,
	EMediaSoundChannels__Stereo    = 1,
	EMediaSoundChannels__Surround  = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX = 3,
};

enum class EMediaSoundComponentFFTSize : uint8
{
	EMediaSoundComponentFFTSize__Min_64 = 0,
	EMediaSoundComponentFFTSize__Small_256 = 1,
	EMediaSoundComponentFFTSize__Medium_512 = 2,
	EMediaSoundComponentFFTSize__Large_1024 = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX = 4,
};

enum class EMediaTextureOutputFormat : uint8
{
	MTOF_Default                   = 0,
	MTOF_SRGB_LINOUT               = 1,
	MTOF_MAX                       = 2,
};

enum class EMediaTextureOrientation : uint8
{
	MTORI_Original                 = 0,
	MTORI_CW90                     = 1,
	MTORI_CW180                    = 2,
	MTORI_CW270                    = 3,
	MTORI_MAX                      = 4,
};

enum class EMediaPlayerTrack : uint8
{
	EMediaPlayerTrack__Audio       = 0,
	EMediaPlayerTrack__Caption     = 1,
	EMediaPlayerTrack__Metadata    = 2,
	EMediaPlayerTrack__Script      = 3,
	EMediaPlayerTrack__Subtitle    = 4,
	EMediaPlayerTrack__Text        = 5,
	EMediaPlayerTrack__Video       = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX = 7,
};

enum class EMediaTextureVisibleMipsTiles : uint8
{
	EMediaTextureVisibleMipsTiles__None = 0,
	EMediaTextureVisibleMipsTiles__Plane = 1,
	EMediaTextureVisibleMipsTiles__Sphere = 2,
	EMediaTextureVisibleMipsTiles__EMediaTextureVisibleMipsTiles_MAX = 3,
};

enum class EMediaAudioCaptureDeviceFilter : uint8
{
	EMediaAudioCaptureDeviceFilter__None = 0,
	EMediaAudioCaptureDeviceFilter__Card = 1,
	EMediaAudioCaptureDeviceFilter__Microphone = 2,
	EMediaAudioCaptureDeviceFilter__Software = 4,
	EMediaAudioCaptureDeviceFilter__Unknown = 8,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX = 9,
};

enum class EMediaVideoCaptureDeviceFilter : uint8
{
	EMediaVideoCaptureDeviceFilter__None = 0,
	EMediaVideoCaptureDeviceFilter__Card = 1,
	EMediaVideoCaptureDeviceFilter__Software = 2,
	EMediaVideoCaptureDeviceFilter__Unknown = 4,
	EMediaVideoCaptureDeviceFilter__Webcam = 8,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX = 9,
};

enum class EMediaWebcamCaptureDeviceFilter : uint8
{
	EMediaWebcamCaptureDeviceFilter__None = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor = 1,
	EMediaWebcamCaptureDeviceFilter__Front = 2,
	EMediaWebcamCaptureDeviceFilter__Rear = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown = 8,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX = 9,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
struct FMediaSoundComponentSpectralData
{
public:
	float                                        FrequencyHz;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Magnitude;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MediaAssets.MediaSourceCacheSettings
struct FMediaSourceCacheSettings
{
public:
	bool                                         bOverride;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E91[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeToLookAhead;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MediaAssets.MediaCaptureDevice
struct FMediaCaptureDevice
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
