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

enum class EFoliageVertexColorMask : uint8
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5,
};

enum class EVertexColorMaskChannel : uint8
{
	EVertexColorMaskChannel__Red   = 0,
	EVertexColorMaskChannel__Green = 1,
	EVertexColorMaskChannel__Blue  = 2,
	EVertexColorMaskChannel__Alpha = 3,
	EVertexColorMaskChannel__MAX_None = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX = 5,
};

enum class EFoliageScaling : uint8
{
	EFoliageScaling__Uniform       = 0,
	EFoliageScaling__Free          = 1,
	EFoliageScaling__LockXY        = 2,
	EFoliageScaling__LockXZ        = 3,
	EFoliageScaling__LockYZ        = 4,
	EFoliageScaling__EFoliageScaling_MAX = 5,
};

enum class ESimulationOverlap : uint8
{
	ESimulationOverlap__CollisionOverlap = 0,
	ESimulationOverlap__ShadeOverlap = 1,
	ESimulationOverlap__None       = 2,
	ESimulationOverlap__ESimulationOverlap_MAX = 3,
};

enum class ESimulationQuery : uint8
{
	ESimulationQuery__None         = 0,
	ESimulationQuery__CollisionOverlap = 1,
	ESimulationQuery__ShadeOverlap = 2,
	ESimulationQuery__AnyOverlap   = 3,
	ESimulationQuery__ESimulationQuery_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct Foliage.FoliageVertexColorChannelMask
struct FFoliageVertexColorChannelMask
{
public:
	uint8                                        UseMask : 1;                                       // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_123 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_20E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaskThreshold;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InvertMask : 1;                                    // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Foliage.FoliageDensityFalloff
struct FFoliageDensityFalloff
{
public:
	bool                                         bUseFalloffCurve;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    FalloffCurve;                                      // 0x8(0x88)(Edit, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Foliage.FoliageTypeObject
struct FFoliageTypeObject
{
public:
	class UObject*                               FoliageTypeObject;                                 // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFoliageType*                          TypeInstance;                                      // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsAsset;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;                                              // 0x18(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Foliage.ProceduralFoliageInstance
struct FProceduralFoliageInstance
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Age;                                               // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20ED[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Normal;                                            // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFoliageType*                          Type;                                              // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F0[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
