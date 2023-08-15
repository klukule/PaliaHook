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

enum class EGLTFTextureImageFormat : uint8
{
	EGLTFTextureImageFormat__None  = 0,
	EGLTFTextureImageFormat__PNG   = 1,
	EGLTFTextureImageFormat__JPEG  = 2,
	EGLTFTextureImageFormat__EGLTFTextureImageFormat_MAX = 3,
};

enum class EGLTFTextureType : uint8
{
	EGLTFTextureType__None         = 0,
	EGLTFTextureType__HDR          = 1,
	EGLTFTextureType__Normalmaps   = 2,
	EGLTFTextureType__Lightmaps    = 4,
	EGLTFTextureType__All          = 7,
	EGLTFTextureType__EGLTFTextureType_MAX = 8,
};

enum class EGLTFTextureHDREncoding : uint8
{
	EGLTFTextureHDREncoding__None  = 0,
	EGLTFTextureHDREncoding__RGBM  = 1,
	EGLTFTextureHDREncoding__EGLTFTextureHDREncoding_MAX = 2,
};

enum class EGLTFSceneMobility : uint8
{
	EGLTFSceneMobility__None       = 0,
	EGLTFSceneMobility__Static     = 1,
	EGLTFSceneMobility__Stationary = 2,
	EGLTFSceneMobility__Movable    = 4,
	EGLTFSceneMobility__All        = 7,
	EGLTFSceneMobility__EGLTFSceneMobility_MAX = 8,
};

enum class EGLTFVariantSetsMode : uint8
{
	EGLTFVariantSetsMode__None     = 0,
	EGLTFVariantSetsMode__Khronos  = 1,
	EGLTFVariantSetsMode__Epic     = 2,
	EGLTFVariantSetsMode__EGLTFVariantSetsMode_MAX = 3,
};

enum class EGLTFMaterialVariantMode : uint8
{
	EGLTFMaterialVariantMode__None = 0,
	EGLTFMaterialVariantMode__Simple = 1,
	EGLTFMaterialVariantMode__UseMeshData = 2,
	EGLTFMaterialVariantMode__EGLTFMaterialVariantMode_MAX = 3,
};

enum class EGLTFMaterialBakeMode : uint8
{
	EGLTFMaterialBakeMode__Disabled = 0,
	EGLTFMaterialBakeMode__Simple  = 1,
	EGLTFMaterialBakeMode__UseMeshData = 2,
	EGLTFMaterialBakeMode__EGLTFMaterialBakeMode_MAX = 3,
};

enum class EGLTFMaterialBakeSizePOT : uint8
{
	EGLTFMaterialBakeSizePOT__POT_1 = 0,
	EGLTFMaterialBakeSizePOT__POT_2 = 1,
	EGLTFMaterialBakeSizePOT__POT_4 = 2,
	EGLTFMaterialBakeSizePOT__POT_8 = 3,
	EGLTFMaterialBakeSizePOT__POT_16 = 4,
	EGLTFMaterialBakeSizePOT__POT_32 = 5,
	EGLTFMaterialBakeSizePOT__POT_64 = 6,
	EGLTFMaterialBakeSizePOT__POT_128 = 7,
	EGLTFMaterialBakeSizePOT__POT_256 = 8,
	EGLTFMaterialBakeSizePOT__POT_512 = 9,
	EGLTFMaterialBakeSizePOT__POT_1024 = 10,
	EGLTFMaterialBakeSizePOT__POT_2048 = 11,
	EGLTFMaterialBakeSizePOT__POT_4096 = 12,
	EGLTFMaterialBakeSizePOT__POT_8192 = 13,
	EGLTFMaterialBakeSizePOT__POT_MAX = 14,
};

enum class EGLTFMaterialPropertyGroup : uint8
{
	EGLTFMaterialPropertyGroup__None = 0,
	EGLTFMaterialPropertyGroup__BaseColorOpacity = 1,
	EGLTFMaterialPropertyGroup__MetallicRoughness = 2,
	EGLTFMaterialPropertyGroup__EmissiveColor = 3,
	EGLTFMaterialPropertyGroup__Normal = 4,
	EGLTFMaterialPropertyGroup__AmbientOcclusion = 5,
	EGLTFMaterialPropertyGroup__ClearCoatRoughness = 6,
	EGLTFMaterialPropertyGroup__ClearCoatBottomNormal = 7,
	EGLTFMaterialPropertyGroup__EGLTFMaterialPropertyGroup_MAX = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct GLTFExporter.GLTFExportMessages
struct FGLTFExportMessages
{
public:
	TArray<class FString>                        Suggestions;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Warnings;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Errors;                                            // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct GLTFExporter.GLTFOverrideMaterialBakeSettings
struct FGLTFOverrideMaterialBakeSettings
{
public:
	bool                                         bOverrideSize;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGLTFMaterialBakeSizePOT          Size;                                              // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideFilter;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    Filter;                                            // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideTiling;                                   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   Tiling;                                            // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
