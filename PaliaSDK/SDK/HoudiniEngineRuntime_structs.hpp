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

enum class EHoudiniStaticMeshMethod : uint8
{
	EHoudiniStaticMeshMethod__RawMesh = 0,
	EHoudiniStaticMeshMethod__FMeshDescription = 1,
	EHoudiniStaticMeshMethod__UHoudiniStaticMesh = 2,
	EHoudiniStaticMeshMethod__EHoudiniStaticMeshMethod_MAX = 3,
};

enum class EHoudiniAssetState : uint8
{
	EHoudiniAssetState__NeedInstantiation = 0,
	EHoudiniAssetState__NewHDA     = 1,
	EHoudiniAssetState__PreInstantiation = 2,
	EHoudiniAssetState__Instantiating = 3,
	EHoudiniAssetState__PreCook    = 4,
	EHoudiniAssetState__Cooking    = 5,
	EHoudiniAssetState__PostCook   = 6,
	EHoudiniAssetState__PreProcess = 7,
	EHoudiniAssetState__Processing = 8,
	EHoudiniAssetState__None       = 9,
	EHoudiniAssetState__NeedRebuild = 10,
	EHoudiniAssetState__NeedDelete = 11,
	EHoudiniAssetState__Deleting   = 12,
	EHoudiniAssetState__ProcessTemplate = 13,
	EHoudiniAssetState__EHoudiniAssetState_MAX = 14,
};

enum class EHoudiniAssetStateResult : uint8
{
	EHoudiniAssetStateResult__None = 0,
	EHoudiniAssetStateResult__Working = 1,
	EHoudiniAssetStateResult__Success = 2,
	EHoudiniAssetStateResult__FinishedWithError = 3,
	EHoudiniAssetStateResult__FinishedWithFatalError = 4,
	EHoudiniAssetStateResult__Aborted = 5,
	EHoudiniAssetStateResult__EHoudiniAssetStateResult_MAX = 6,
};

enum class EHoudiniRampInterpolationType : uint8
{
	EHoudiniRampInterpolationType__InValid = -1,
	EHoudiniRampInterpolationType__CONSTANT = 0,
	EHoudiniRampInterpolationType__LINEAR = 1,
	EHoudiniRampInterpolationType__CATMULL_ROM = 2,
	EHoudiniRampInterpolationType__MONOTONE_CUBIC = 3,
	EHoudiniRampInterpolationType__BEZIER = 4,
	EHoudiniRampInterpolationType__BSPLINE = 5,
	EHoudiniRampInterpolationType__HERMITE = 6,
	EHoudiniRampInterpolationType__EHoudiniRampInterpolationType_MAX = 7,
};

enum class EHoudiniLandscapeOutputBakeType : uint8
{
	EHoudiniLandscapeOutputBakeType__Detachment = 0,
	EHoudiniLandscapeOutputBakeType__BakeToImage = 1,
	EHoudiniLandscapeOutputBakeType__BakeToWorld = 2,
	EHoudiniLandscapeOutputBakeType__InValid = 3,
	EHoudiniLandscapeOutputBakeType__EHoudiniLandscapeOutputBakeType_MAX = 4,
};

enum class EHoudiniInputType : uint8
{
	EHoudiniInputType__Invalid     = 0,
	EHoudiniInputType__Geometry    = 1,
	EHoudiniInputType__Curve       = 2,
	EHoudiniInputType__Asset       = 3,
	EHoudiniInputType__Landscape   = 4,
	EHoudiniInputType__World       = 5,
	EHoudiniInputType__Skeletal    = 6,
	EHoudiniInputType__GeometryCollection = 7,
	EHoudiniInputType__EHoudiniInputType_MAX = 8,
};

enum class EHoudiniOutputType : uint8
{
	EHoudiniOutputType__Invalid    = 0,
	EHoudiniOutputType__Mesh       = 1,
	EHoudiniOutputType__Instancer  = 2,
	EHoudiniOutputType__Landscape  = 3,
	EHoudiniOutputType__Curve      = 4,
	EHoudiniOutputType__Skeletal   = 5,
	EHoudiniOutputType__GeometryCollection = 6,
	EHoudiniOutputType__DataTable  = 7,
	EHoudiniOutputType__EHoudiniOutputType_MAX = 8,
};

enum class EHoudiniCurveType : uint8
{
	EHoudiniCurveType__Invalid     = -1,
	EHoudiniCurveType__Polygon     = 0,
	EHoudiniCurveType__Nurbs       = 1,
	EHoudiniCurveType__Bezier      = 2,
	EHoudiniCurveType__Points      = 3,
	EHoudiniCurveType__EHoudiniCurveType_MAX = 4,
};

enum class EHoudiniCurveMethod : uint8
{
	EHoudiniCurveMethod__Invalid   = -1,
	EHoudiniCurveMethod__CVs       = 0,
	EHoudiniCurveMethod__Breakpoints = 1,
	EHoudiniCurveMethod__Freehand  = 2,
	EHoudiniCurveMethod__EHoudiniCurveMethod_MAX = 3,
};

enum class EHoudiniCurveBreakpointParameterization : uint8
{
	EHoudiniCurveBreakpointParameterization__Invalid = -1,
	EHoudiniCurveBreakpointParameterization__Uniform = 0,
	EHoudiniCurveBreakpointParameterization__Chord = 1,
	EHoudiniCurveBreakpointParameterization__Centripetal = 2,
	EHoudiniCurveBreakpointParameterization__EHoudiniCurveBreakpointParameterization_MAX = 3,
};

enum class EHoudiniLandscapeExportType : uint8
{
	EHoudiniLandscapeExportType__Heightfield = 0,
	EHoudiniLandscapeExportType__Mesh = 1,
	EHoudiniLandscapeExportType__Points = 2,
	EHoudiniLandscapeExportType__EHoudiniLandscapeExportType_MAX = 3,
};

enum class EHoudiniProxyRefineResult : uint8
{
	EHoudiniProxyRefineResult__Invalid = 0,
	EHoudiniProxyRefineResult__Failed = 1,
	EHoudiniProxyRefineResult__Success = 2,
	EHoudiniProxyRefineResult__Skipped = 3,
	EHoudiniProxyRefineResult__EHoudiniProxyRefineResult_MAX = 4,
};

enum class EHoudiniProxyRefineRequestResult : uint8
{
	EHoudiniProxyRefineRequestResult__Invalid = 0,
	EHoudiniProxyRefineRequestResult__None = 1,
	EHoudiniProxyRefineRequestResult__PendingCooks = 2,
	EHoudiniProxyRefineRequestResult__Refined = 3,
	EHoudiniProxyRefineRequestResult__EHoudiniProxyRefineRequestResult_MAX = 4,
};

enum class EAttribStorageType : uint8
{
	EAttribStorageType__Invalid    = -1,
	EAttribStorageType__INT        = 0,
	EAttribStorageType__INT64      = 1,
	EAttribStorageType__FLOAT      = 2,
	EAttribStorageType__FLOAT64    = 3,
	EAttribStorageType__STRING     = 4,
	EAttribStorageType__EAttribStorageType_MAX = 5,
};

enum class EAttribOwner : uint8
{
	EAttribOwner__Invalid          = -1,
	EAttribOwner__Vertex           = 0,
	EAttribOwner__Point            = 1,
	EAttribOwner__Prim             = 2,
	EAttribOwner__Detail           = 3,
	EAttribOwner__EAttribOwner_MAX = 4,
};

enum class EHoudiniGeoType : uint8
{
	EHoudiniGeoType__Invalid       = 0,
	EHoudiniGeoType__Default       = 1,
	EHoudiniGeoType__Intermediate  = 2,
	EHoudiniGeoType__Input         = 3,
	EHoudiniGeoType__Curve         = 4,
	EHoudiniGeoType__EHoudiniGeoType_MAX = 5,
};

enum class EHoudiniPartType : uint8
{
	EHoudiniPartType__Invalid      = 0,
	EHoudiniPartType__Mesh         = 1,
	EHoudiniPartType__Instancer    = 2,
	EHoudiniPartType__Curve        = 3,
	EHoudiniPartType__Volume       = 4,
	EHoudiniPartType__DataTable    = 5,
	EHoudiniPartType__EHoudiniPartType_MAX = 6,
};

enum class EHoudiniInstancerType : uint8
{
	EHoudiniInstancerType__Invalid = 0,
	EHoudiniInstancerType__ObjectInstancer = 1,
	EHoudiniInstancerType__PackedPrimitive = 2,
	EHoudiniInstancerType__AttributeInstancer = 3,
	EHoudiniInstancerType__OldSchoolAttributeInstancer = 4,
	EHoudiniInstancerType__GeometryCollection = 5,
	EHoudiniInstancerType__EHoudiniInstancerType_MAX = 6,
};

enum class EXformParameter : uint8
{
	EXformParameter__TX            = 0,
	EXformParameter__TY            = 1,
	EXformParameter__TZ            = 2,
	EXformParameter__RX            = 3,
	EXformParameter__RY            = 4,
	EXformParameter__RZ            = 5,
	EXformParameter__SX            = 6,
	EXformParameter__SY            = 7,
	EXformParameter__SZ            = 8,
	EXformParameter__COUNT         = 9,
	EXformParameter__EXformParameter_MAX = 10,
};

enum class EHoudiniHandleType : uint8
{
	EHoudiniHandleType__Xform      = 0,
	EHoudiniHandleType__Bounder    = 1,
	EHoudiniHandleType__Unsupported = 2,
	EHoudiniHandleType__EHoudiniHandleType_MAX = 3,
};

enum class EHoudiniInputObjectType : uint8
{
	EHoudiniInputObjectType__Invalid = 0,
	EHoudiniInputObjectType__Object = 1,
	EHoudiniInputObjectType__StaticMesh = 2,
	EHoudiniInputObjectType__SkeletalMesh = 3,
	EHoudiniInputObjectType__SceneComponent = 4,
	EHoudiniInputObjectType__StaticMeshComponent = 5,
	EHoudiniInputObjectType__InstancedStaticMeshComponent = 6,
	EHoudiniInputObjectType__SplineComponent = 7,
	EHoudiniInputObjectType__HoudiniSplineComponent = 8,
	EHoudiniInputObjectType__HoudiniAssetComponent = 9,
	EHoudiniInputObjectType__Actor = 10,
	EHoudiniInputObjectType__Landscape = 11,
	EHoudiniInputObjectType__Brush = 12,
	EHoudiniInputObjectType__CameraComponent = 13,
	EHoudiniInputObjectType__DataTable = 14,
	EHoudiniInputObjectType__HoudiniAssetActor = 15,
	EHoudiniInputObjectType__FoliageType_InstancedStaticMesh = 16,
	EHoudiniInputObjectType__GeometryCollection = 17,
	EHoudiniInputObjectType__GeometryCollectionComponent = 18,
	EHoudiniInputObjectType__GeometryCollectionActor_Deprecated = 19,
	EHoudiniInputObjectType__SkeletalMeshComponent = 20,
	EHoudiniInputObjectType__Blueprint = 21,
	EHoudiniInputObjectType__EHoudiniInputObjectType_MAX = 22,
};

enum class EHoudiniXformType : uint8
{
	EHoudiniXformType__None        = 0,
	EHoudiniXformType__IntoThisObject = 1,
	EHoudiniXformType__Auto        = 2,
	EHoudiniXformType__EHoudiniXformType_MAX = 3,
};

enum class EHoudiniCurveOutputType : uint8
{
	EHoudiniCurveOutputType__UnrealSpline = 0,
	EHoudiniCurveOutputType__HoudiniSpline = 1,
	EHoudiniCurveOutputType__EHoudiniCurveOutputType_MAX = 2,
};

enum class EHoudiniParameterType : uint8
{
	EHoudiniParameterType__Invalid = 0,
	EHoudiniParameterType__Button  = 1,
	EHoudiniParameterType__ButtonStrip = 2,
	EHoudiniParameterType__Color   = 3,
	EHoudiniParameterType__ColorRamp = 4,
	EHoudiniParameterType__File    = 5,
	EHoudiniParameterType__FileDir = 6,
	EHoudiniParameterType__FileGeo = 7,
	EHoudiniParameterType__FileImage = 8,
	EHoudiniParameterType__Float   = 9,
	EHoudiniParameterType__FloatRamp = 10,
	EHoudiniParameterType__Folder  = 11,
	EHoudiniParameterType__FolderList = 12,
	EHoudiniParameterType__Input   = 13,
	EHoudiniParameterType__Int     = 14,
	EHoudiniParameterType__IntChoice = 15,
	EHoudiniParameterType__Label   = 16,
	EHoudiniParameterType__MultiParm = 17,
	EHoudiniParameterType__Separator = 18,
	EHoudiniParameterType__String  = 19,
	EHoudiniParameterType__StringChoice = 20,
	EHoudiniParameterType__StringAssetRef = 21,
	EHoudiniParameterType__Toggle  = 22,
	EHoudiniParameterType__EHoudiniParameterType_MAX = 23,
};

enum class EHoudiniFolderParameterType : uint8
{
	EHoudiniFolderParameterType__Invalid = 0,
	EHoudiniFolderParameterType__Collapsible = 1,
	EHoudiniFolderParameterType__Simple = 2,
	EHoudiniFolderParameterType__Tabs = 3,
	EHoudiniFolderParameterType__Radio = 4,
	EHoudiniFolderParameterType__Other = 5,
	EHoudiniFolderParameterType__EHoudiniFolderParameterType_MAX = 6,
};

enum class EHoudiniMultiParmModificationType : uint8
{
	EHoudiniMultiParmModificationType__None = 0,
	EHoudiniMultiParmModificationType__Inserted = 1,
	EHoudiniMultiParmModificationType__Removed = 2,
	EHoudiniMultiParmModificationType__Modified = 3,
	EHoudiniMultiParmModificationType__EHoudiniMultiParmModificationType_MAX = 4,
};

enum class EHoudiniRampPointConstructStatus : uint8
{
	EHoudiniRampPointConstructStatus__None = 0,
	EHoudiniRampPointConstructStatus__INITIALIZED = 1,
	EHoudiniRampPointConstructStatus__POSITION_INSERTED = 2,
	EHoudiniRampPointConstructStatus__VALUE_INSERTED = 3,
	EHoudiniRampPointConstructStatus__INTERPTYPE_INSERTED = 4,
	EHoudiniRampPointConstructStatus__EHoudiniRampPointConstructStatus_MAX = 5,
};

enum class EPDGLinkState : uint8
{
	EPDGLinkState__Inactive        = 0,
	EPDGLinkState__Linking         = 1,
	EPDGLinkState__Linked          = 2,
	EPDGLinkState__Error_Not_Linked = 3,
	EPDGLinkState__EPDGLinkState_MAX = 4,
};

enum class EPDGNodeState : uint8
{
	EPDGNodeState__None            = 0,
	EPDGNodeState__Dirtied         = 1,
	EPDGNodeState__Dirtying        = 2,
	EPDGNodeState__Cooking         = 3,
	EPDGNodeState__Cook_Complete   = 4,
	EPDGNodeState__Cook_Failed     = 5,
	EPDGNodeState__EPDGNodeState_MAX = 6,
};

enum class EPDGWorkResultState : uint8
{
	EPDGWorkResultState__None      = 0,
	EPDGWorkResultState__ToLoad    = 1,
	EPDGWorkResultState__Loading   = 2,
	EPDGWorkResultState__Loaded    = 3,
	EPDGWorkResultState__ToDelete  = 4,
	EPDGWorkResultState__Deleting  = 5,
	EPDGWorkResultState__Deleted   = 6,
	EPDGWorkResultState__NotLoaded = 7,
	EPDGWorkResultState__EPDGWorkResultState_MAX = 8,
};

enum class EHoudiniRuntimeSettingsSessionType : uint8
{
	HRSST_InProcess                = 0,
	HRSST_Socket                   = 1,
	HRSST_NamedPipe                = 2,
	HRSST_None                     = 3,
	HRSST_MAX                      = 4,
};

enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8
{
	HRSRF_Always                   = 0,
	HRSRF_OnlyIfMissing            = 1,
	HRSRF_Never                    = 2,
	HRSRF_MAX                      = 3,
};

enum class EHoudiniExecutableType : uint8
{
	HRSHE_Houdini                  = 0,
	HRSHE_HoudiniFX                = 1,
	HRSHE_HoudiniCore              = 2,
	HRSHE_HoudiniIndie             = 3,
	HRSHE_MAX                      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
struct FHoudiniCurveOutputProperties
{
public:
	enum class EHoudiniCurveOutputType           CurveOutputType;                                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumPoints;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosed;                                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniCurveType                 CurveType;                                         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniCurveMethod               CurveMethod;                                       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9D[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
struct FHoudiniOutputObject
{
public:
	class UObject*                               OutputObject;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       OutputComponents;                                  // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UObject*                               OutputComponent;                                   // 0x18(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ProxyObject;                                       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ProxyComponent;                                    // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProxyIsCurrent;                                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsImplicit;                                       // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGeometryCollectionPiece;                        // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA1[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GeometryCollectionPieceName;                       // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BakeName;                                          // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHoudiniCurveOutputProperties         CurveOutputProperty;                               // 0x58(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           CachedAttributes;                                  // 0x68(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CachedTokens;                                      // 0xB8(0x50)(NativeAccessSpecifierPublic)
	class UObject*                               InstancedObject;                                   // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFoliageType*                          FoliageType;                                       // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
struct FHoudiniAssetBlueprintOutput
{
public:
	int32                                        OutputIndex;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHoudiniOutputObject                  OutputObject;                                      // 0x8(0x118)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
struct FHoudiniOutputObjectIdentifier
{
public:
	int32                                        ObjectId;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GeoId;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartId;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SplitIdentifier;                                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PartName;                                          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimitiveIndex;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointIndex;                                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0x120 - 0x68)
// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
{
public:
	class UHoudiniAsset*                         HoudiniAsset;                                      // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssetId;                                           // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniAssetState                AssetState;                                        // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SubAssetIndex;                                     // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       AssetCookCount;                                    // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenLoaded;                                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenDuplicated;                                // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPendingDelete;                                    // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecookRequested;                                  // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRebuildRequested;                                 // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCooking;                                    // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceNeedUpdate;                                  // 0x86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLastCookSuccess;                                  // 0x87(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ComponentGUID;                                     // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 HapiGUID;                                          // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRegisteredComponentTemplate;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SourceName;                                        // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs;                                           // 0xC0(0x50)(NativeAccessSpecifierPublic)
	TArray<class UHoudiniInput*>                 Inputs;                                            // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
struct FHoudiniGenericAttributeChangedProperty
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB4[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
struct FHoudiniGenericAttribute
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttribStorageType                AttributeType;                                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttribOwner                      AttributeOwner;                                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AttributeCount;                                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AttributeTupleSize;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<double>                               DoubleValues;                                      // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int64>                                IntValues;                                         // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        StringValues;                                      // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
struct FHoudiniObjectInfo
{
public:
	uint8                                        Pad_BB8[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
struct FHoudiniGeoInfo
{
public:
	uint8                                        Pad_BB9[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
struct FHoudiniPartInfo
{
public:
	uint8                                        Pad_BBA[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
struct FHoudiniVolumeInfo
{
public:
	uint8                                        Pad_BBB[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
struct FHoudiniCurveInfo
{
public:
	uint8                                        Pad_BBC[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
struct FHoudiniMeshSocket
{
public:
	uint8                                        Pad_BBD[0x90];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x290 (0x290 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
struct FHoudiniGeoPartObject
{
public:
	int32                                        AssetId;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AssetName;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ObjectId;                                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ObjectName;                                        // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GeoId;                                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartId;                                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PartName;                                          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasCustomPartName;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        SplitGroups;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            TransformMatrix;                                   // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodePath;                                          // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniPartType                  Type;                                              // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHoudiniInstancerType             InstancerType;                                     // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VolumeName;                                        // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasEditLayers;                                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                VolumeLayerName;                                   // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VolumeTileIndex;                                   // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVisible;                                        // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEditable;                                       // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTemplated;                                      // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInstanced;                                      // 0x107(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasGeoChanged;                                    // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPartChanged;                                   // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasTransformChanged;                              // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMaterialsChanged;                              // 0x10B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCE[0x174];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHoudiniMeshSocket>            AllMeshSockets;                                    // 0x280(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
struct FHoudiniBrushInfo
{
public:
	TWeakObjectPtr<class ABrush>                 BrushActor;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CachedTransform;                                   // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CachedOrigin;                                      // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CachedExtent;                                      // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBrushType                        CachedBrushType;                                   // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint64                                       CachedSurfaceHash;                                 // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
struct FHoudiniBakedOutputObjectIdentifier
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SplitIdentifier;                                   // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
struct FHoudiniInstancedOutput
{
public:
	TSoftObjectPtr<class UObject>                OriginalObject;                                    // 0x0(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OriginalObjectIndex;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    OriginalTransforms;                                // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UObject>>        VariationObjects;                                  // 0x48(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    VariationTransformOffsets;                         // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                TransformVariationIndices;                         // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                OriginalInstanceIndices;                           // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bChanged;                                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStale;                                            // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE3[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
struct FHoudiniBakedOutputObject
{
public:
	class FString                                Actor;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Blueprint;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActorBakeName;                                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BakedObject;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BakedComponent;                                    // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        InstancedActors;                                   // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        InstancedComponents;                               // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             LandscapeLayers;                                   // 0x68(0x50)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
struct FHoudiniBakedOutput
{
public:
	TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects;                                // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.OutputActorOwner
struct FOutputActorOwner
{
public:
	uint8                                        Pad_BEF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                OutputActor;                                       // 0x8(0x8)(ZeroConstructor, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
struct FTOPWorkResultObject
{
public:
	uint8                                        Pad_BF4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x18(0x10)(ZeroConstructor, NonTransactional, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPDGWorkResultState               State;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        WorkItemResultInfoIndex;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UHoudiniOutput*>                ResultOutputs;                                     // 0x30(0x10)(ZeroConstructor, NonTransactional, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoBakedSinceLastLoad;                           // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BFB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOutputActorOwner                     OutputActorOwner;                                  // 0x48(0x10)(NonTransactional, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct HoudiniEngineRuntime.TOPWorkResult
struct FTOPWorkResult
{
public:
	int32                                        WorkItemIndex;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WorkItemID;                                        // 0x4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTOPWorkResultObject>          ResultObjects;                                     // 0x8(0x10)(ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
struct FWorkItemTallyBase
{
public:
	uint8                                        Pad_C00[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x230 (0x238 - 0x8)
// ScriptStruct HoudiniEngineRuntime.WorkItemTally
struct FWorkItemTally : public FWorkItemTallyBase
{
public:
	TSet<int32>                                  AllWorkItems;                                      // 0x8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  WaitingWorkItems;                                  // 0x58(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  ScheduledWorkItems;                                // 0xA8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  CookingWorkItems;                                  // 0xF8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  CookedWorkItems;                                   // 0x148(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  ErroredWorkItems;                                  // 0x198(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<int32>                                  CookCancelledWorkItems;                            // 0x1E8(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
struct FAggregatedWorkItemTally : public FWorkItemTallyBase
{
public:
	int32                                        TotalWorkItems;                                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WaitingWorkItems;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ScheduledWorkItems;                                // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CookingWorkItems;                                  // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CookedWorkItems;                                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ErroredWorkItems;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CookCancelledWorkItems;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C0C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
struct FHoudiniPDGWorkResultObjectBakedOutput
{
public:
	TArray<struct FHoudiniBakedOutput>           BakedOutputs;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
struct FHoudiniStaticMeshGenerationProperties
{
public:
	uint8                                        bGeneratedDoubleSidedGeometry : 1;                 // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_72 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C13[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     GeneratedPhysMaterial;                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                         DefaultBodyInstance;                               // 0x10(0x190)(Edit, NativeAccessSpecifierPublic)
	enum class ECollisionTraceFlag               GeneratedCollisionTraceFlag;                       // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C16[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GeneratedLightMapResolution;                       // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWalkableSlopeOverride                GeneratedWalkableSlopeOverride;                    // 0x1A8(0x10)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int32                                        GeneratedLightMapCoordinateIndex;                  // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGeneratedUseMaximumStreamingTexelRatio : 1;       // Mask: 0x1, PropSize: 0x10x1BC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_73 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_C1D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GeneratedStreamingDistanceMultiplier;              // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UFoliageType_InstancedStaticMesh*      GeneratedFoliageDefaultSettings;                   // 0x1C8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAssetUserData*>                GeneratedAssetUserData;                            // 0x1D0(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// 0x30 (0x98 - 0x68)
// ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
{
public:
	TArray<struct FTransform>                    CurvePoints;                                       // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       DisplayPoints;                                     // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                DisplayPointIndexDivider;                          // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
