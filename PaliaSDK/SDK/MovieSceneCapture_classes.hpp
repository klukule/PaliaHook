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

// 0x30 (0x58 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
	uint8                                        Pad_2624[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneCaptureProtocolState   State;                                             // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2626[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MovieSceneCaptureProtocolBase");

		return Clss;
	}

	bool IsCapturing();
	enum class EMovieSceneCaptureProtocolState GetState();
};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MovieSceneAudioCaptureProtocolBase");

		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.NullAudioCaptureProtocol
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NullAudioCaptureProtocol");

		return Clss;
	}

};

// 0x38 (0x90 - 0x58)
// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
	class FString                                Filename;                                          // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_262D[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MasterAudioSubmixCaptureProtocol");

		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MovieSceneImageCaptureProtocolBase");

		return Clss;
	}

};

// 0x70 (0xC8 - 0x58)
// Class MovieSceneCapture.CompositionGraphCaptureProtocol
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	struct FCompositionGraphCapturePasses        IncludeRenderPasses;                               // 0x58(0x10)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                         bCaptureFramesInHDR;                               // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2634[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HDRCompressionQuality;                             // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2639[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       PostProcessingMaterial;                            // 0x78(0x20)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableScreenPercentage;                          // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    PostProcessingMaterialPtr;                         // 0xA0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_263F[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CompositionGraphCaptureProtocol");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureInterface
class IMovieSceneCaptureInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MovieSceneCaptureInterface");

		return Clss;
	}

};

// 0x10 (0x68 - 0x58)
// Class MovieSceneCapture.FrameGrabberProtocol
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	uint8                                        Pad_2643[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FrameGrabberProtocol");

		return Clss;
	}

};

// 0x70 (0xD8 - 0x68)
// Class MovieSceneCapture.ImageSequenceProtocol
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:
	uint8                                        Pad_2644[0x70];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ImageSequenceProtocol");

		return Clss;
	}

};

// 0x8 (0xE0 - 0xD8)
// Class MovieSceneCapture.CompressedImageSequenceProtocol
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
	int32                                        CompressionQuality;                                // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2646[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CompressedImageSequenceProtocol");

		return Clss;
	}

};

// 0x0 (0xD8 - 0xD8)
// Class MovieSceneCapture.ImageSequenceProtocol_BMP
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ImageSequenceProtocol_BMP");

		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneCapture.ImageSequenceProtocol_PNG
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ImageSequenceProtocol_PNG");

		return Clss;
	}

};

// 0x0 (0xE0 - 0xE0)
// Class MovieSceneCapture.ImageSequenceProtocol_JPG
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ImageSequenceProtocol_JPG");

		return Clss;
	}

};

// 0x10 (0xE8 - 0xD8)
// Class MovieSceneCapture.ImageSequenceProtocol_EXR
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
	bool                                         bCompressed;                                       // 0xD8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHDRCaptureGamut                  CaptureGamut;                                      // 0xD9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_264E[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ImageSequenceProtocol_EXR");

		return Clss;
	}

};

// 0x210 (0x238 - 0x28)
// Class MovieSceneCapture.MovieSceneCapture
class UMovieSceneCapture : public UObject
{
public:
	uint8                                        Pad_2678[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftClassPath                        ImageCaptureProtocolType;                          // 0x38(0x20)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        AudioCaptureProtocolType;                          // 0x58(0x20)(Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneImageCaptureProtocolBase*   ImageCaptureProtocol;                              // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneAudioCaptureProtocolBase*   AudioCaptureProtocol;                              // 0x80(0x8)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneCaptureSettings            Settings;                                          // 0x88(0x70)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)
	bool                                         bUseSeparateProcess;                               // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCloseEditorWhenCaptureStarts;                     // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_267E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AdditionalCommandLineArguments;                    // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InheritedCommandLineArguments;                     // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2681[0x118];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MovieSceneCapture");

		return Clss;
	}

	void SetImageCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);
	void SetAudioCaptureProtocolType(TSubclassOf<class UMovieSceneCaptureProtocolBase> ProtocolType);
	class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
	class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
};

// 0x20 (0x258 - 0x238)
// Class MovieSceneCapture.LevelCapture
class ULevelCapture : public UMovieSceneCapture
{
public:
	bool                                         bAutoStartCapture;                                 // 0x238(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2685[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 PrerequisiteActorId;                               // 0x244(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2686[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LevelCapture");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MovieSceneCapture.MovieSceneCaptureEnvironment
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MovieSceneCaptureEnvironment");

		return Clss;
	}

	bool IsCaptureInProgress();
	int32 GetCaptureFrameNumber();
	float GetCaptureElapsedTime();
	class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();
	class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();
};

// 0x80 (0xD8 - 0x58)
// Class MovieSceneCapture.UserDefinedCaptureProtocol
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
	class UWorld*                                World;                                             // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26C3[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UserDefinedCaptureProtocol");

		return Clss;
	}

	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID);
	void ResolveBuffer(class UTexture* Buffer, struct FCapturedPixelsID& BufferID);
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	bool OnSetup();
	void OnPreTick();
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, const struct FFrameMetrics& FrameMetrics);
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	bool OnCanFinalize();
	void OnBeginFinalize();
	struct FFrameMetrics GetCurrentFrameMetrics();
	class FString GenerateFilename(struct FFrameMetrics& InFrameMetrics);
};

// 0x8 (0xE0 - 0xD8)
// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
	enum class EDesiredImageFormat               Format;                                            // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCompression;                                // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CompressionQuality;                                // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UserDefinedImageCaptureProtocol");

		return Clss;
	}

	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData);
	class FString GenerateFilenameForCurrentFrame();
	class FString GenerateFilenameForBuffer(class UTexture* Buffer, struct FCapturedPixelsID& StreamID);
};

// 0x18 (0x80 - 0x68)
// Class MovieSceneCapture.VideoCaptureProtocol
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
	bool                                         bUseCompression;                                   // 0x68(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CompressionQuality;                                // 0x6C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E7[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("VideoCaptureProtocol");

		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
