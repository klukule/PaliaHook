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

enum class EBaseCreateFromSelectedTargetType : int32
{
	EBaseCreateFromSelectedTargetType__NewObject = 0,
	EBaseCreateFromSelectedTargetType__FirstInputObject = 1,
	EBaseCreateFromSelectedTargetType__LastInputObject = 2,
	EBaseCreateFromSelectedTargetType__EBaseCreateFromSelectedTargetType_MAX = 3,
};

enum class EUVLayoutPreviewSide : int32
{
	EUVLayoutPreviewSide__Left     = 0,
	EUVLayoutPreviewSide__Right    = 1,
	EUVLayoutPreviewSide__EUVLayoutPreviewSide_MAX = 2,
};

enum class ESpaceCurveControlPointTransformMode : int32
{
	ESpaceCurveControlPointTransformMode__Shared = 0,
	ESpaceCurveControlPointTransformMode__PerVertex = 1,
	ESpaceCurveControlPointTransformMode__ESpaceCurveControlPointTransformMode_MAX = 2,
};

enum class ESpaceCurveControlPointOriginMode : int32
{
	ESpaceCurveControlPointOriginMode__Shared = 0,
	ESpaceCurveControlPointOriginMode__First = 1,
	ESpaceCurveControlPointOriginMode__Last = 2,
	ESpaceCurveControlPointOriginMode__ESpaceCurveControlPointOriginMode_MAX = 3,
};

enum class ESpaceCurveControlPointFalloffType : int32
{
	ESpaceCurveControlPointFalloffType__Linear = 0,
	ESpaceCurveControlPointFalloffType__Smooth = 1,
	ESpaceCurveControlPointFalloffType__ESpaceCurveControlPointFalloffType_MAX = 2,
};

enum class ECreateModelingObjectResult : uint8
{
	ECreateModelingObjectResult__Ok = 0,
	ECreateModelingObjectResult__Cancelled = 1,
	ECreateModelingObjectResult__Failed_Unknown = 2,
	ECreateModelingObjectResult__Failed_NoAPIFound = 3,
	ECreateModelingObjectResult__Failed_InvalidWorld = 4,
	ECreateModelingObjectResult__Failed_InvalidMesh = 5,
	ECreateModelingObjectResult__Failed_InvalidTexture = 6,
	ECreateModelingObjectResult__Failed_AssetCreationFailed = 7,
	ECreateModelingObjectResult__Failed_ActorCreationFailed = 8,
	ECreateModelingObjectResult__ECreateModelingObjectResult_MAX = 9,
};

enum class ECreateMeshObjectSourceMeshType : uint8
{
	ECreateMeshObjectSourceMeshType__MeshDescription = 0,
	ECreateMeshObjectSourceMeshType__DynamicMesh = 1,
	ECreateMeshObjectSourceMeshType__ECreateMeshObjectSourceMeshType_MAX = 2,
};

enum class ECreateObjectTypeHint : uint8
{
	ECreateObjectTypeHint__Undefined = 0,
	ECreateObjectTypeHint__StaticMesh = 1,
	ECreateObjectTypeHint__Volume  = 2,
	ECreateObjectTypeHint__DynamicMeshActor = 3,
	ECreateObjectTypeHint__ECreateObjectTypeHint_MAX = 4,
};

enum class EHandleSourcesMethod : uint8
{
	EHandleSourcesMethod__DeleteSources = 0,
	EHandleSourcesMethod__HideSources = 1,
	EHandleSourcesMethod__KeepSources = 2,
	EHandleSourcesMethod__KeepFirstSource = 3,
	EHandleSourcesMethod__KeepLastSource = 4,
	EHandleSourcesMethod__EHandleSourcesMethod_MAX = 5,
};

enum class EMultiTransformerMode : uint8
{
	EMultiTransformerMode__DefaultGizmo = 1,
	EMultiTransformerMode__QuickAxisTranslation = 2,
	EMultiTransformerMode__EMultiTransformerMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// ScriptStruct ModelingComponents.ModelingToolsAxisFilter
struct FModelingToolsAxisFilter
{
public:
	bool                                         bAxisX;                                            // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAxisY;                                            // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAxisZ;                                            // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangleVertex
struct FRenderableTriangleVertex
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV;                                                // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_304[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangle
struct FRenderableTriangle
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex             Vertex0;                                           // 0x8(0x48)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex             Vertex1;                                           // 0x50(0x48)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex             Vertex2;                                           // 0x98(0x48)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x5E0 (0x5E0 - 0x0)
// ScriptStruct ModelingComponents.CreateMeshObjectParams
struct FCreateMeshObjectParams
{
public:
	class UPrimitiveComponent*                   SourceComponent;                                   // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECreateObjectTypeHint             TypeHint;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_308[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   TypeHintClass;                                     // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TypeHintExtended;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_309[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                TargetWorld;                                       // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x30(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseName;                                          // 0x90(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            Materials;                                         // 0xA0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            AssetMaterials;                                    // 0xB0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bEnableCollision;                                  // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionTraceFlag               CollisionMode;                                     // 0xC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRaytracingSupport;                          // 0xC2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRecomputeNormals;                           // 0xC3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRecomputeTangents;                          // 0xC4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableNanite;                                     // 0xC5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NaniteProxyTrianglePercent;                        // 0xC8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMeshNaniteSettings                   NaniteSettings;                                    // 0xCC(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_30F[0x4F8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ModelingComponents.CreateMeshObjectResult
struct FCreateMeshObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_310[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                NewActor;                                          // 0x8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   NewComponent;                                      // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               NewAsset;                                          // 0x18(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ModelingComponents.CreateTextureObjectParams
struct FCreateTextureObjectParams
{
public:
	int32                                        TypeHintExtended;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_312[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWorld*                                TargetWorld;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               StoreRelativeToObject;                             // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseName;                                          // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            GeneratedTransientTexture;                         // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelingComponents.CreateTextureObjectResult
struct FCreateTextureObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_313[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               NewAsset;                                          // 0x8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
