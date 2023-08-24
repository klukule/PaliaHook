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

// 0x48 (0xD0 - 0x88)
// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource
{
public:
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C04[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameRate                            FrameRateOverride;                                 // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C08[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ProxyOverride;                                     // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillGapsInSequence;                               // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        SequencePath;                                      // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C0A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ImgMediaSource");
		return Clss;
	}

	void SetTokenizedSequencePath(const class FString& InPath);
	void SetSequencePath(const class FString& InPath);
	void SetMipLevelDistance(float InDistance);
	void RemoveTargetObject(class AActor* InInActor);
	void RemoveGlobalCamera(class AActor* InInActor);
	class FString GetSequencePath();
	void GetProxies(TArray<class FString>* InOutProxies);
	void AddTargetObject(class AActor* InInActor);
	void AddGlobalCamera(class AActor* InInActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
