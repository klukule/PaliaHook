#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BinkMediaPlayer.BinkFunctionLibrary
class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BinkFunctionLibrary");

		return Clss;
	}

	struct FTimespan BinkLoadingMovie_GetTime();
	struct FTimespan BinkLoadingMovie_GetDuration();
	void Bink_DrawOverlays();
};

// 0xE8 (0x110 - 0x28)
// Class BinkMediaPlayer.BinkMediaPlayer
class UBinkMediaPlayer : public UObject
{
public:
	uint8                                        Pad_118C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMediaClosed;                                     // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMediaOpened;                                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMediaReachedEnd;                                 // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlaybackSuspended;                               // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Looping : 1;                                       // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        StartImmediately : 1;                              // Mask: 0x2, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        DelayedOpen : 1;                                   // Mask: 0x4, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B5 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_118F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x78(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x88(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x98(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBinkMediaPlayerBinkBufferModes   BinkBufferMode;                                    // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBinkMediaPlayerBinkSoundTrack    BinkSoundTrack;                                    // 0xA9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1190[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BinkSoundTrackStart;                               // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBinkMediaPlayerBinkDrawStyle     BinkDrawStyle;                                     // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1191[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BinkLayerDepth;                                    // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1192[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BinkMediaPlayer");

		return Clss;
	}

	bool SupportsSeeking();
	bool SupportsScrubbing();
	bool SupportsRate(float Rate, bool Unthinned);
	void Stop();
	void SetVolume(float Rate);
	bool SetRate(float Rate);
	bool SetLooping(bool InLooping);
	bool Seek(struct FTimespan& InTime);
	bool Rewind();
	bool Play();
	bool Pause();
	bool OpenUrl(const class FString& NewURL);
	bool IsStopped();
	bool IsPlaying();
	bool IsPaused();
	bool IsLooping();
	bool IsInitialized();
	class FString GetUrl();
	struct FTimespan GetTime();
	float GetRate();
	struct FTimespan GetDuration();
	void Draw(class UTexture* Texture, bool Tonemap, int32 Out_nits, float Alpha, bool Srgb_decode, bool Hdr);
	void CloseUrl();
	bool CanPlay();
	bool CanPause();
};

// 0x40 (0x230 - 0x1F0)
// Class BinkMediaPlayer.BinkMediaTexture
class UBinkMediaTexture : public UTexture
{
public:
	enum class ETextureAddress                   AddressX;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0x1F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBinkMediaPlayer*                      MediaPlayer;                                       // 0x1F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPixelFormat                      PixelFormat;                                       // 0x200(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Tonemap;                                           // 0x201(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutputNits;                                        // 0x204(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x208(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DecodeSRGB;                                        // 0x20C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119D[0x23];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BinkMediaTexture");

		return Clss;
	}

	void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);
	void Clear();
};

// 0x30 (0x58 - 0x28)
// Class BinkMediaPlayer.BinkMoviePlayerSettings
class UBinkMoviePlayerSettings : public UObject
{
public:
	enum class EBinkMoviePlayerBinkBufferModes   BinkBufferMode;                                    // 0x28(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBinkMoviePlayerBinkSoundTrack    BinkSoundTrack;                                    // 0x29(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BinkSoundTrackStart;                               // 0x2C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BinkDestinationUpperLeft;                          // 0x30(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BinkDestinationLowerRight;                         // 0x40(0x10)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPixelFormat                      BinkPixelFormat;                                   // 0x50(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BinkMoviePlayerSettings");

		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
