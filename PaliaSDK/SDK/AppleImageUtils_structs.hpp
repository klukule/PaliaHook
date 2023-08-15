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

enum class ETextureRotationDirection : uint8
{
	ETextureRotationDirection__None = 0,
	ETextureRotationDirection__Left = 1,
	ETextureRotationDirection__Right = 2,
	ETextureRotationDirection__Down = 3,
	ETextureRotationDirection__LeftMirrored = 4,
	ETextureRotationDirection__RightMirrored = 5,
	ETextureRotationDirection__DownMirrored = 6,
	ETextureRotationDirection__UpMirrored = 7,
	ETextureRotationDirection__ETextureRotationDirection_MAX = 8,
};

enum class EAppleTextureType : uint8
{
	EAppleTextureType__Unknown     = 0,
	EAppleTextureType__Image       = 1,
	EAppleTextureType__PixelBuffer = 2,
	EAppleTextureType__Surface     = 3,
	EAppleTextureType__MetalTexture = 4,
	EAppleTextureType__EAppleTextureType_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult
struct FAppleImageUtilsImageConversionResult
{
public:
	class FString                                Error;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ImageData;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
