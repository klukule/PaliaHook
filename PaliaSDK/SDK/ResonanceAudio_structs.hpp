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

enum class EResonanceRenderMode : uint8
{
	EResonanceRenderMode__StereoPanning = 0,
	EResonanceRenderMode__BinauralLowQuality = 1,
	EResonanceRenderMode__BinauralMediumQuality = 2,
	EResonanceRenderMode__BinauralHighQuality = 3,
	EResonanceRenderMode__RoomEffectsOnly = 4,
	EResonanceRenderMode__EResonanceRenderMode_MAX = 5,
};

enum class ERaQualityMode : uint8
{
	ERaQualityMode__STEREO_PANNING = 0,
	ERaQualityMode__BINAURAL_LOW   = 1,
	ERaQualityMode__BINAURAL_MEDIUM = 2,
	ERaQualityMode__BINAURAL_HIGH  = 3,
	ERaQualityMode__ERaQualityMode_MAX = 4,
};

enum class ERaSpatializationMethod : uint8
{
	ERaSpatializationMethod__STEREO_PANNING = 0,
	ERaSpatializationMethod__HRTF  = 1,
	ERaSpatializationMethod__ERaSpatializationMethod_MAX = 2,
};

enum class ERaDistanceRolloffModel : uint8
{
	ERaDistanceRolloffModel__LOGARITHMIC = 0,
	ERaDistanceRolloffModel__LINEAR = 1,
	ERaDistanceRolloffModel__NONE  = 2,
	ERaDistanceRolloffModel__ERaDistanceRolloffModel_MAX = 3,
};

enum class ERaMaterialName : uint8
{
	ERaMaterialName__TRANSPARENT   = 0,
	ERaMaterialName__ACOUSTIC_CEILING_TILES = 1,
	ERaMaterialName__BRICK_BARE    = 2,
	ERaMaterialName__BRICK_PAINTED = 3,
	ERaMaterialName__CONCRETE_BLOCK_COARSE = 4,
	ERaMaterialName__CONCRETE_BLOCK_PAINTED = 5,
	ERaMaterialName__CURTAIN_HEAVY = 6,
	ERaMaterialName__FIBER_GLASS_INSULATION = 7,
	ERaMaterialName__GLASS_THIN    = 8,
	ERaMaterialName__GLASS_THICK   = 9,
	ERaMaterialName__GRASS         = 10,
	ERaMaterialName__LINOLEUM_ON_CONCRETE = 11,
	ERaMaterialName__MARBLE        = 12,
	ERaMaterialName__METAL         = 13,
	ERaMaterialName__PARQUET_ONCONCRETE = 14,
	ERaMaterialName__PLASTER_ROUGH = 15,
	ERaMaterialName__PLASTER_SMOOTH = 16,
	ERaMaterialName__PLYWOOD_PANEL = 17,
	ERaMaterialName__POLISHED_CONCRETE_OR_TILE = 18,
	ERaMaterialName__SHEETROCK     = 19,
	ERaMaterialName__WATER_OR_ICE_SURFACE = 20,
	ERaMaterialName__WOOD_CEILING  = 21,
	ERaMaterialName__WOOD_PANEL    = 22,
	ERaMaterialName__UNIFORM       = 23,
	ERaMaterialName__ERaMaterialName_MAX = 24,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// ScriptStruct ResonanceAudio.ResonanceAudioReverbPluginSettings
struct FResonanceAudioReverbPluginSettings
{
public:
	bool                                         bEnableRoomEffects;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGetTransformFromAudioVolume;                      // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C73[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RoomPosition;                                      // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 RoomRotation;                                      // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RoomDimensions;                                    // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaMaterialName                   LeftWallMaterial;                                  // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaMaterialName                   RightWallMaterial;                                 // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaMaterialName                   FloorMaterial;                                     // 0x5A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaMaterialName                   CeilingMaterial;                                   // 0x5B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaMaterialName                   FrontWallMaterial;                                 // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaMaterialName                   BackWallMaterial;                                  // 0x5D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C76[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ReflectionScalar;                                  // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbGain;                                        // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbTimeModifier;                                // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReverbBrightness;                                  // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
