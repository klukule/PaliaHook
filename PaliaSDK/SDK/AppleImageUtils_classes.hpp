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
// Class AppleImageUtils.AppleImageInterface
class IAppleImageInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AppleImageInterface");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
public:
	uint8                                        Pad_1B73[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailure;                                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B74[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAppleImageUtilsImageConversionResult ConversionResult;                                  // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B76[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AppleImageUtilsBaseAsyncTaskBlueprintProxy");
		return Clss;
	}

	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(class UTexture* InSourceImage, bool InbWantColor, bool InbUseGpu, float InScale, enum class ETextureRotationDirection InRotate);
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(class UTexture* InSourceImage, bool InbWantColor, bool InbUseGpu, float InScale, enum class ETextureRotationDirection InRotate);
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(class UTexture* InSourceImage, int32 InQuality, bool InbWantColor, bool InbUseGpu, float InScale, enum class ETextureRotationDirection InRotate);
	class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(class UTexture* InSourceImage, int32 InQuality, bool InbWantColor, bool InbUseGpu, float InScale, enum class ETextureRotationDirection InRotate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
