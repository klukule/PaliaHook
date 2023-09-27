#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x320 (0x320 - 0x0)
// UserDefinedStruct Struct_PlatformTutorialModal_CM.Struct_PlatformTutorialModal_CM
struct FStruct_PlatformTutorialModal_CM
{
public:
	TMap<enum class ERedirectsPlatform, class UObject*> PlatformImage_102_2B61CB644D955C5F780547A81155B0A6; // 0x0(0x50)(Edit, BlueprintVisible)
	TMap<enum class ECommonInputType, class UObject*> WindowsInputTypeImage_103_3E81E6CE4D7BDA6F18D01281B0F2DED6; // 0x50(0x50)(Edit, BlueprintVisible)
	TMap<enum class ERedirectsPlatform, class FText> PlatformText_66_EEA410E541AEEF3F16B6319DD3B7C209;  // 0xA0(0x50)(Edit, BlueprintVisible)
	TMap<enum class ECommonInputType, class FText> WindowsInputTypeText_68_59E53AA64E389CF49F66D4A3CB1354D1; // 0xF0(0x50)(Edit, BlueprintVisible)
	TMap<enum class ERedirectsPlatform, class FText> PlatformRichText_87_D8C250DE425F53F6DD2E2F84922566BF; // 0x140(0x50)(Edit, BlueprintVisible)
	TMap<enum class ECommonInputType, class FText> WindowsInputTypeRichText_88_DF77C40F46F15509F8699E849BB742AF; // 0x190(0x50)(Edit, BlueprintVisible)
	TMap<enum class ERedirectsPlatform, class UBinkMediaPlayer*> PlatformBinkPlayer_76_C403937F43DE0604B106FC950BC7F8DB; // 0x1E0(0x50)(Edit, BlueprintVisible)
	TMap<enum class ECommonInputType, class UBinkMediaPlayer*> WindowsInputTypeBinkPlayer_75_2AD284E74AC83A1D0F2BAE8CD61C805B; // 0x230(0x50)(Edit, BlueprintVisible)
	TMap<enum class ERedirectsPlatform, class UMediaPlayer*> PlatformMediaPlayer_98_A18347404EEA29CD66EB0FB357612F79; // 0x280(0x50)(Edit, BlueprintVisible)
	TMap<enum class ECommonInputType, class UMediaPlayer*> WindowsInputTypeMediaPlayer_99_CDDB01E6403EB3F0107F23A0B148E759; // 0x2D0(0x50)(Edit, BlueprintVisible)
};

}


