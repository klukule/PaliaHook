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

enum class EGeometryScriptMeshSelectionType : uint8
{
	EGeometryScriptMeshSelectionType__Vertices = 0,
	EGeometryScriptMeshSelectionType__Triangles = 1,
	EGeometryScriptMeshSelectionType__Polygroups = 2,
	EGeometryScriptMeshSelectionType__EGeometryScriptMeshSelectionType_MAX = 3,
};

enum class EGeometryScriptMeshSelectionConversionType : uint8
{
	EGeometryScriptMeshSelectionConversionType__NoConversion = 0,
	EGeometryScriptMeshSelectionConversionType__ToVertices = 1,
	EGeometryScriptMeshSelectionConversionType__ToTriangles = 2,
	EGeometryScriptMeshSelectionConversionType__ToPolygroups = 3,
	EGeometryScriptMeshSelectionConversionType__EGeometryScriptMeshSelectionConversionType_MAX = 4,
};

enum class EGeometryScriptCombineSelectionMode : uint8
{
	EGeometryScriptCombineSelectionMode__Add = 0,
	EGeometryScriptCombineSelectionMode__Subtract = 1,
	EGeometryScriptCombineSelectionMode__Intersection = 2,
	EGeometryScriptCombineSelectionMode__EGeometryScriptCombineSelectionMode_MAX = 3,
};

enum class EGeometryScriptEmptySelectionBehavior : uint8
{
	EGeometryScriptEmptySelectionBehavior__FullMeshSelection = 0,
	EGeometryScriptEmptySelectionBehavior__EmptySelection = 1,
	EGeometryScriptEmptySelectionBehavior__EGeometryScriptEmptySelectionBehavior_MAX = 2,
};

enum class EGeometryScriptOutcomePins : uint8
{
	Failure                        = 0,
	Success                        = 1,
	EGeometryScriptOutcomePins_MAX = 2,
};

enum class EGeometryScriptSearchOutcomePins : uint8
{
	Found                          = 0,
	NotFound                       = 1,
	EGeometryScriptSearchOutcomePins_MAX = 2,
};

enum class EGeometryScriptContainmentOutcomePins : uint8
{
	Inside                         = 0,
	Outside                        = 1,
	EGeometryScriptContainmentOutcomePins_MAX = 2,
};

enum class EGeometryScriptLODType : uint8
{
	EGeometryScriptLODType__MaxAvailable = 0,
	EGeometryScriptLODType__HiResSourceModel = 1,
	EGeometryScriptLODType__SourceModel = 2,
	EGeometryScriptLODType__RenderData = 3,
	EGeometryScriptLODType__EGeometryScriptLODType_MAX = 4,
};

enum class EGeometryScriptAxis : uint8
{
	EGeometryScriptAxis__X         = 0,
	EGeometryScriptAxis__Y         = 1,
	EGeometryScriptAxis__Z         = 2,
	EGeometryScriptAxis__EGeometryScriptAxis_MAX = 3,
};

enum class EGeometryScriptIndexType : uint8
{
	EGeometryScriptIndexType__Any  = 0,
	EGeometryScriptIndexType__Triangle = 1,
	EGeometryScriptIndexType__Vertex = 2,
	EGeometryScriptIndexType__MaterialID = 3,
	EGeometryScriptIndexType__PolygroupID = 4,
	EGeometryScriptIndexType__EGeometryScriptIndexType_MAX = 5,
};

enum class EGeometryScriptDebugMessageType : uint8
{
	EGeometryScriptDebugMessageType__ErrorMessage = 0,
	EGeometryScriptDebugMessageType__WarningMessage = 1,
	EGeometryScriptDebugMessageType__EGeometryScriptDebugMessageType_MAX = 2,
};

enum class EGeometryScriptErrorType : uint8
{
	EGeometryScriptErrorType__NoError = 0,
	EGeometryScriptErrorType__UnknownError = 1,
	EGeometryScriptErrorType__InvalidInputs = 2,
	EGeometryScriptErrorType__OperationFailed = 3,
	EGeometryScriptErrorType__EGeometryScriptErrorType_MAX = 4,
};

enum class EGeometryScriptTopologyConnectionType : uint8
{
	EGeometryScriptTopologyConnectionType__Geometric = 0,
	EGeometryScriptTopologyConnectionType__Polygroup = 1,
	EGeometryScriptTopologyConnectionType__MaterialID = 2,
	EGeometryScriptTopologyConnectionType__EGeometryScriptTopologyConnectionType_MAX = 3,
};

enum class EGeometryScriptCollisionGenerationMethod : uint8
{
	EGeometryScriptCollisionGenerationMethod__AlignedBoxes = 0,
	EGeometryScriptCollisionGenerationMethod__OrientedBoxes = 1,
	EGeometryScriptCollisionGenerationMethod__MinimalSpheres = 2,
	EGeometryScriptCollisionGenerationMethod__Capsules = 3,
	EGeometryScriptCollisionGenerationMethod__ConvexHulls = 4,
	EGeometryScriptCollisionGenerationMethod__SweptHulls = 5,
	EGeometryScriptCollisionGenerationMethod__MinVolumeShapes = 6,
	EGeometryScriptCollisionGenerationMethod__EGeometryScriptCollisionGenerationMethod_MAX = 7,
};

enum class EGeometryScriptSweptHullAxis : uint8
{
	EGeometryScriptSweptHullAxis__X = 0,
	EGeometryScriptSweptHullAxis__Y = 1,
	EGeometryScriptSweptHullAxis__Z = 2,
	EGeometryScriptSweptHullAxis__SmallestBoxDimension = 3,
	EGeometryScriptSweptHullAxis__SmallestVolume = 4,
	EGeometryScriptSweptHullAxis__EGeometryScriptSweptHullAxis_MAX = 5,
};

enum class EGeometryScriptBakeResolution : uint8
{
	EGeometryScriptBakeResolution__Resolution16 = 0,
	EGeometryScriptBakeResolution__Resolution32 = 1,
	EGeometryScriptBakeResolution__Resolution64 = 2,
	EGeometryScriptBakeResolution__Resolution128 = 3,
	EGeometryScriptBakeResolution__Resolution256 = 4,
	EGeometryScriptBakeResolution__Resolution512 = 5,
	EGeometryScriptBakeResolution__Resolution1024 = 6,
	EGeometryScriptBakeResolution__Resolution2048 = 7,
	EGeometryScriptBakeResolution__Resolution4096 = 8,
	EGeometryScriptBakeResolution__Resolution8192 = 9,
	EGeometryScriptBakeResolution__EGeometryScriptBakeResolution_MAX = 10,
};

enum class EGeometryScriptBakeBitDepth : uint8
{
	EGeometryScriptBakeBitDepth__ChannelBits8 = 0,
	EGeometryScriptBakeBitDepth__ChannelBits16 = 1,
	EGeometryScriptBakeBitDepth__EGeometryScriptBakeBitDepth_MAX = 2,
};

enum class EGeometryScriptBakeSamplesPerPixel : uint8
{
	EGeometryScriptBakeSamplesPerPixel__Sample1 = 0,
	EGeometryScriptBakeSamplesPerPixel__Sample4 = 1,
	EGeometryScriptBakeSamplesPerPixel__Sample16 = 2,
	EGeometryScriptBakeSamplesPerPixel__Sample64 = 3,
	EGeometryScriptBakeSamplesPerPixel__Samples256 = 4,
	EGeometryScriptBakeSamplesPerPixel__EGeometryScriptBakeSamplesPerPixel_MAX = 5,
};

enum class EGeometryScriptBakeTypes : uint8
{
	EGeometryScriptBakeTypes__TangentSpaceNormal = 0,
	EGeometryScriptBakeTypes__ObjectSpaceNormal = 1,
	EGeometryScriptBakeTypes__FaceNormal = 2,
	EGeometryScriptBakeTypes__BentNormal = 3,
	EGeometryScriptBakeTypes__Position = 4,
	EGeometryScriptBakeTypes__Curvature = 5,
	EGeometryScriptBakeTypes__AmbientOcclusion = 6,
	EGeometryScriptBakeTypes__Texture = 7,
	EGeometryScriptBakeTypes__MultiTexture = 8,
	EGeometryScriptBakeTypes__VertexColor = 9,
	EGeometryScriptBakeTypes__MaterialID = 10,
	EGeometryScriptBakeTypes__EGeometryScriptBakeTypes_MAX = 11,
};

enum class EGeometryScriptBakeOutputMode : uint8
{
	EGeometryScriptBakeOutputMode__RGBA = 0,
	EGeometryScriptBakeOutputMode__PerChannel = 1,
	EGeometryScriptBakeOutputMode__EGeometryScriptBakeOutputMode_MAX = 2,
};

enum class EGeometryScriptBakeNormalSpace : uint8
{
	EGeometryScriptBakeNormalSpace__Tangent = 0,
	EGeometryScriptBakeNormalSpace__Object = 1,
	EGeometryScriptBakeNormalSpace__EGeometryScriptBakeNormalSpace_MAX = 2,
};

enum class EGeometryScriptBakeCurvatureTypeMode : uint8
{
	EGeometryScriptBakeCurvatureTypeMode__Mean = 0,
	EGeometryScriptBakeCurvatureTypeMode__Max = 1,
	EGeometryScriptBakeCurvatureTypeMode__Min = 2,
	EGeometryScriptBakeCurvatureTypeMode__Gaussian = 3,
};

enum class EGeometryScriptBakeCurvatureColorMode : uint8
{
	EGeometryScriptBakeCurvatureColorMode__Grayscale = 0,
	EGeometryScriptBakeCurvatureColorMode__RedBlue = 1,
	EGeometryScriptBakeCurvatureColorMode__RedGreenBlue = 2,
	EGeometryScriptBakeCurvatureColorMode__EGeometryScriptBakeCurvatureColorMode_MAX = 3,
};

enum class EGeometryScriptBakeCurvatureClampMode : uint8
{
	EGeometryScriptBakeCurvatureClampMode__None = 0,
	EGeometryScriptBakeCurvatureClampMode__OnlyPositive = 1,
	EGeometryScriptBakeCurvatureClampMode__OnlyNegative = 2,
	EGeometryScriptBakeCurvatureClampMode__EGeometryScriptBakeCurvatureClampMode_MAX = 3,
};

enum class EGeometryScriptCombineAttributesMode : uint8
{
	EGeometryScriptCombineAttributesMode__EnableAllMatching = 0,
	EGeometryScriptCombineAttributesMode__UseTarget = 1,
	EGeometryScriptCombineAttributesMode__UseSource = 2,
	EGeometryScriptCombineAttributesMode__EGeometryScriptCombineAttributesMode_MAX = 3,
};

enum class EGeometryScriptBooleanOperation : uint8
{
	EGeometryScriptBooleanOperation__Union = 0,
	EGeometryScriptBooleanOperation__Intersection = 1,
	EGeometryScriptBooleanOperation__Subtract = 2,
	EGeometryScriptBooleanOperation__EGeometryScriptBooleanOperation_MAX = 3,
};

enum class EGeometryScriptFlareType : uint8
{
	EGeometryScriptFlareType__SinMode = 0,
	EGeometryScriptFlareType__SinSquaredMode = 1,
	EGeometryScriptFlareType__TriangleMode = 2,
	EGeometryScriptFlareType__EGeometryScriptFlareType_MAX = 3,
};

enum class EGeometryScriptMathWarpType : uint8
{
	EGeometryScriptMathWarpType__SinWave1D = 0,
	EGeometryScriptMathWarpType__SinWave2D = 1,
	EGeometryScriptMathWarpType__SinWave3D = 2,
	EGeometryScriptMathWarpType__EGeometryScriptMathWarpType_MAX = 3,
};

enum class EGeometryScriptMeshEditPolygroupMode : uint8
{
	EGeometryScriptMeshEditPolygroupMode__PreserveExisting = 0,
	EGeometryScriptMeshEditPolygroupMode__AutoGenerateNew = 1,
	EGeometryScriptMeshEditPolygroupMode__SetConstant = 2,
	EGeometryScriptMeshEditPolygroupMode__EGeometryScriptMeshEditPolygroupMode_MAX = 3,
};

enum class EGeometryScriptPolyOperationArea : uint8
{
	EGeometryScriptPolyOperationArea__EntireSelection = 0,
	EGeometryScriptPolyOperationArea__PerPolygroup = 1,
	EGeometryScriptPolyOperationArea__PerTriangle = 2,
	EGeometryScriptPolyOperationArea__EGeometryScriptPolyOperationArea_MAX = 3,
};

enum class EGeometryScriptLinearExtrudeDirection : uint8
{
	EGeometryScriptLinearExtrudeDirection__FixedDirection = 0,
	EGeometryScriptLinearExtrudeDirection__AverageFaceNormal = 1,
	EGeometryScriptLinearExtrudeDirection__EGeometryScriptLinearExtrudeDirection_MAX = 2,
};

enum class EGeometryScriptOffsetFacesType : uint8
{
	EGeometryScriptOffsetFacesType__VertexNormal = 0,
	EGeometryScriptOffsetFacesType__FaceNormal = 1,
	EGeometryScriptOffsetFacesType__ParallelFaceOffset = 2,
	EGeometryScriptOffsetFacesType__EGeometryScriptOffsetFacesType_MAX = 3,
};

enum class EGeometryScriptMeshBevelSelectionMode : uint8
{
	EGeometryScriptMeshBevelSelectionMode__TriangleArea = 0,
	EGeometryScriptMeshBevelSelectionMode__AllPolygroupEdges = 1,
	EGeometryScriptMeshBevelSelectionMode__SharedPolygroupEdges = 2,
	EGeometryScriptMeshBevelSelectionMode__EGeometryScriptMeshBevelSelectionMode_MAX = 3,
};

enum class EGeometryScriptTangentTypes : uint8
{
	EGeometryScriptTangentTypes__FastMikkT = 0,
	EGeometryScriptTangentTypes__PerTriangle = 1,
	EGeometryScriptTangentTypes__EGeometryScriptTangentTypes_MAX = 2,
};

enum class EGeometryScriptPrimitivePolygroupMode : uint8
{
	EGeometryScriptPrimitivePolygroupMode__SingleGroup = 0,
	EGeometryScriptPrimitivePolygroupMode__PerFace = 1,
	EGeometryScriptPrimitivePolygroupMode__PerQuad = 2,
	EGeometryScriptPrimitivePolygroupMode__EGeometryScriptPrimitivePolygroupMode_MAX = 3,
};

enum class EGeometryScriptPrimitiveOriginMode : uint8
{
	EGeometryScriptPrimitiveOriginMode__Center = 0,
	EGeometryScriptPrimitiveOriginMode__Base = 1,
	EGeometryScriptPrimitiveOriginMode__EGeometryScriptPrimitiveOriginMode_MAX = 2,
};

enum class EGeometryScriptPrimitiveUVMode : uint8
{
	EGeometryScriptPrimitiveUVMode__Uniform = 0,
	EGeometryScriptPrimitiveUVMode__ScaleToFill = 1,
	EGeometryScriptPrimitiveUVMode__EGeometryScriptPrimitiveUVMode_MAX = 2,
};

enum class EGeometryScriptUniformRemeshTargetType : uint8
{
	EGeometryScriptUniformRemeshTargetType__TriangleCount = 0,
	EGeometryScriptUniformRemeshTargetType__TargetEdgeLength = 1,
	EGeometryScriptUniformRemeshTargetType__EGeometryScriptUniformRemeshTargetType_MAX = 2,
};

enum class EGeometryScriptRemeshEdgeConstraintType : uint8
{
	EGeometryScriptRemeshEdgeConstraintType__Fixed = 0,
	EGeometryScriptRemeshEdgeConstraintType__Refine = 1,
	EGeometryScriptRemeshEdgeConstraintType__Free = 2,
	EGeometryScriptRemeshEdgeConstraintType__Ignore = 3,
	EGeometryScriptRemeshEdgeConstraintType__EGeometryScriptRemeshEdgeConstraintType_MAX = 4,
};

enum class EGeometryScriptRemeshSmoothingType : uint8
{
	EGeometryScriptRemeshSmoothingType__Uniform = 0,
	EGeometryScriptRemeshSmoothingType__UVPreserving = 1,
	EGeometryScriptRemeshSmoothingType__Mixed = 2,
	EGeometryScriptRemeshSmoothingType__EGeometryScriptRemeshSmoothingType_MAX = 3,
};

enum class EGeometryScriptFillHolesMethod : uint8
{
	EGeometryScriptFillHolesMethod__Automatic = 0,
	EGeometryScriptFillHolesMethod__MinimalFill = 1,
	EGeometryScriptFillHolesMethod__PolygonTriangulation = 2,
	EGeometryScriptFillHolesMethod__TriangleFan = 3,
	EGeometryScriptFillHolesMethod__PlanarProjection = 4,
	EGeometryScriptFillHolesMethod__EGeometryScriptFillHolesMethod_MAX = 5,
};

enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8
{
	EGeometryScriptRemoveHiddenTrianglesMethod__FastWindingNumber = 0,
	EGeometryScriptRemoveHiddenTrianglesMethod__RaycastOcclusionTest = 1,
	EGeometryScriptRemoveHiddenTrianglesMethod__EGeometryScriptRemoveHiddenTrianglesMethod_MAX = 2,
};

enum class EGeometryScriptRepairMeshMode : uint8
{
	EGeometryScriptRepairMeshMode__DeleteOnly = 0,
	EGeometryScriptRepairMeshMode__RepairOrDelete = 1,
	EGeometryScriptRepairMeshMode__RepairOrSkip = 2,
	EGeometryScriptRepairMeshMode__EGeometryScriptRepairMeshMode_MAX = 3,
};

enum class EGeometryScriptRemoveMeshSimplificationType : uint8
{
	EGeometryScriptRemoveMeshSimplificationType__StandardQEM = 0,
	EGeometryScriptRemoveMeshSimplificationType__VolumePreserving = 1,
	EGeometryScriptRemoveMeshSimplificationType__AttributeAware = 2,
	EGeometryScriptRemoveMeshSimplificationType__EGeometryScriptRemoveMeshSimplificationType_MAX = 3,
};

enum class ESelectiveTessellatePatternType : uint8
{
	ESelectiveTessellatePatternType__ConcentricRings = 0,
	ESelectiveTessellatePatternType__ESelectiveTessellatePatternType_MAX = 1,
};

enum class EGeometryScriptUVFlattenMethod : uint8
{
	EGeometryScriptUVFlattenMethod__ExpMap = 0,
	EGeometryScriptUVFlattenMethod__Conformal = 1,
	EGeometryScriptUVFlattenMethod__SpectralConformal = 2,
	EGeometryScriptUVFlattenMethod__EGeometryScriptUVFlattenMethod_MAX = 3,
};

enum class EGeometryScriptUVIslandSource : uint8
{
	EGeometryScriptUVIslandSource__PolyGroups = 0,
	EGeometryScriptUVIslandSource__UVIslands = 1,
	EGeometryScriptUVIslandSource__EGeometryScriptUVIslandSource_MAX = 2,
};

enum class EGeometryScriptGridSizingMethod : uint8
{
	EGeometryScriptGridSizingMethod__GridCellSize = 0,
	EGeometryScriptGridSizingMethod__GridResolution = 1,
	EGeometryScriptGridSizingMethod__EGeometryScriptGridSizingMethod_MAX = 2,
};

enum class EGeometryScriptMorphologicalOpType : uint8
{
	EGeometryScriptMorphologicalOpType__Dilate = 0,
	EGeometryScriptMorphologicalOpType__Contract = 1,
	EGeometryScriptMorphologicalOpType__Close = 2,
	EGeometryScriptMorphologicalOpType__Open = 3,
	EGeometryScriptMorphologicalOpType__EGeometryScriptMorphologicalOpType_MAX = 4,
};

enum class EGeometryScriptSampleSpacing : uint8
{
	EGeometryScriptSampleSpacing__UniformDistance = 0,
	EGeometryScriptSampleSpacing__UniformTime = 1,
	EGeometryScriptSampleSpacing__ErrorTolerance = 2,
	EGeometryScriptSampleSpacing__EGeometryScriptSampleSpacing_MAX = 3,
};

enum class EGeometryScriptPixelSamplingMethod : uint8
{
	EGeometryScriptPixelSamplingMethod__Bilinear = 0,
	EGeometryScriptPixelSamplingMethod__Nearest = 1,
	EGeometryScriptPixelSamplingMethod__EGeometryScriptPixelSamplingMethod_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelection
struct FGeometryScriptMeshSelection
{
public:
	uint8                                        Pad_2304[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshReadLOD
struct FGeometryScriptMeshReadLOD
{
public:
	enum class EGeometryScriptLODType            LODType;                                           // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2307[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODIndex;                                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshWriteLOD
struct FGeometryScriptMeshWriteLOD
{
public:
	bool                                         bWriteHiResSource;                                 // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2309[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODIndex;                                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTriangle
struct FGeometryScriptTriangle
{
public:
	struct FVector                               Vector0;                                           // 0x0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector1;                                           // 0x18(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector2;                                           // 0x30(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTrianglePoint
struct FGeometryScriptTrianglePoint
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TriangleID;                                        // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x8(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaryCoords;                                        // 0x20(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUVTriangle
struct FGeometryScriptUVTriangle
{
public:
	struct FVector2D                             UV0;                                               // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV1;                                               // 0x10(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UV2;                                               // 0x20(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptColorFlags
struct FGeometryScriptColorFlags
{
public:
	bool                                         bRed;                                              // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGreen;                                            // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlue;                                             // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlpha;                                            // 0x3(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptGroupLayer
struct FGeometryScriptGroupLayer
{
public:
	bool                                         bDefaultLayer;                                     // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_231A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ExtendedLayerIndex;                                // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIndexList
struct FGeometryScriptIndexList
{
public:
	enum class EGeometryScriptIndexType          IndexType;                                         // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_231D[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTriangleList
struct FGeometryScriptTriangleList
{
public:
	uint8                                        Pad_231E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptScalarList
struct FGeometryScriptScalarList
{
public:
	uint8                                        Pad_2322[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptVectorList
struct FGeometryScriptVectorList
{
public:
	uint8                                        Pad_2323[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUVList
struct FGeometryScriptUVList
{
public:
	uint8                                        Pad_2326[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptColorList
struct FGeometryScriptColorList
{
public:
	uint8                                        Pad_2329[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPolyPath
struct FGeometryScriptPolyPath
{
public:
	uint8                                        Pad_232B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bClosedLoop;                                       // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_232C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDynamicMeshBVH
struct FGeometryScriptDynamicMeshBVH
{
public:
	uint8                                        Pad_232D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDebugMessage
struct FGeometryScriptDebugMessage
{
public:
	enum class EGeometryScriptDebugMessageType   MessageType;                                       // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptErrorType          ErrorType;                                         // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2331[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Message;                                           // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
struct FGeometryScriptCollisionFromMeshOptions
{
public:
	bool                                         bEmitTransaction;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptCollisionGenerationMethod Method;                                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDetectSpheres;                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDetectBoxes;                                  // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDetectCapsules;                               // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2333[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinThickness;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplifyHulls;                                    // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2335[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConvexHullTargetFaceCount;                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxConvexHullsPerMesh;                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConvexDecompositionSearchFactor;                   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConvexDecompositionErrorTolerance;                 // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConvexDecompositionMinPartThickness;               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SweptHullSimplifyTolerance;                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptSweptHullAxis      SweptHullAxis;                                     // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveFullyContainedShapes;                       // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_233E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxShapeCount;                                     // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
struct FGeometryScriptSetSimpleCollisionOptions
{
public:
	bool                                         bEmitTransaction;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptConvexHullOptions
struct FGeometryScriptConvexHullOptions
{
public:
	bool                                         bPrefilterVertices;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2345[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PrefilterGridResolution;                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimplifyToFaceCount;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSweptHullOptions
struct FGeometryScriptSweptHullOptions
{
public:
	bool                                         bPrefilterVertices;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2349[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PrefilterGridResolution;                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinThickness;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplify;                                         // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_234C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinEdgeLength;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplifyTolerance;                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
struct FGeometryScriptConvexDecompositionOptions
{
public:
	int32                                        NumHulls;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2353[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SearchFactor;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ErrorTolerance;                                    // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinPartThickness;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimplifyToFaceCount;                               // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2354[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
struct FGeometryScriptCopyMeshFromAssetOptions
{
public:
	bool                                         bApplyBuildSettings;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequestTangents;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreRemoveDegenerates;                          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptNaniteOptions
struct FGeometryScriptNaniteOptions
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2358[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FallbackPercentTriangles;                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FallbackRelativeError;                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
struct FGeometryScriptCopyMeshToAssetOptions
{
public:
	bool                                         bEnableRecomputeNormals;                           // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRecomputeTangents;                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRemoveDegenerates;                          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceMaterials;                                 // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMaterialInterface*>            NewMaterials;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          NewMaterialSlotNames;                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bApplyNaniteSettings;                              // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2360[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptNaniteOptions          NaniteSettings;                                    // 0x2C(0xC)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FMeshNaniteSettings                   NewNaniteSettings;                                 // 0x38(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEmitTransaction;                                  // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferMeshPostEditChange;                          // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2362[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTypeOptions
struct FGeometryScriptBakeTypeOptions
{
public:
	enum class EGeometryScriptBakeTypes          BakeType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2367[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTextureOptions
struct FGeometryScriptBakeTextureOptions
{
public:
	enum class EGeometryScriptBakeResolution     Resolution;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptBakeBitDepth       BitDepth;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptBakeSamplesPerPixel SamplesPerPixel;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_236A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            SampleFilterMask;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectionDistance;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProjectionInWorldSpace;                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_236C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeVertexOptions
struct FGeometryScriptBakeVertexOptions
{
public:
	bool                                         bSplitAtNormalSeams;                               // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSplitAtUVSeams;                                   // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_236D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ProjectionDistance;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProjectionInWorldSpace;                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2371[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeOutputType
struct FGeometryScriptBakeOutputType
{
public:
	enum class EGeometryScriptBakeOutputMode     OutputMode;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2373[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptBakeTypeOptions        RGBA;                                              // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGeometryScriptBakeTypeOptions        R;                                                 // 0x20(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGeometryScriptBakeTypeOptions        G;                                                 // 0x38(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGeometryScriptBakeTypeOptions        B;                                                 // 0x50(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGeometryScriptBakeTypeOptions        A;                                                 // 0x68(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
struct FGeometryScriptBakeTargetMeshOptions
{
public:
	int32                                        TargetUVLayer;                                     // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
struct FGeometryScriptBakeSourceMeshOptions
{
public:
	class UTexture2D*                            SourceNormalMap;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceNormalUVLayer;                               // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptBakeNormalSpace    SourceNormalSpace;                                 // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2377[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
struct FGeometryScriptSimpleMeshBuffers
{
public:
	TArray<struct FVector>                       Vertices;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Normals;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UV0;                                               // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UV1;                                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UV2;                                               // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UV3;                                               // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UV4;                                               // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UV5;                                               // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UV6;                                               // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     UV7;                                               // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  VertexColors;                                      // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FIntVector>                    Triangles;                                         // 0xB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                TriGroupIDs;                                       // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptAppendMeshOptions
struct FGeometryScriptAppendMeshOptions
{
public:
	enum class EGeometryScriptCombineAttributesMode CombineMode;                                       // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBooleanOptions
struct FGeometryScriptMeshBooleanOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplifyOutput;                                   // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2382[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SimplifyPlanarTolerance;                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
struct FGeometryScriptMeshSelfUnionOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrimFlaps;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplifyOutput;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2384[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SimplifyPlanarTolerance;                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindingThreshold;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
struct FGeometryScriptMeshPlaneCutOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillSpans;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipCutSide;                                      // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2387[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UVWorldDimension;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
struct FGeometryScriptMeshPlaneSliceOptions
{
public:
	bool                                         bFillHoles;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillSpans;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2389[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GapWidth;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UVWorldDimension;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshMirrorOptions
struct FGeometryScriptMeshMirrorOptions
{
public:
	bool                                         bApplyPlaneCut;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipCutSide;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeldAlongPlane;                                   // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIsSameMeshOptions
struct FGeometryScriptIsSameMeshOptions
{
public:
	bool                                         bCheckConnectivity;                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckEdgeIDs;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckNormals;                                     // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckColors;                                      // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckUVs;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckGroups;                                      // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckAttributes;                                  // 0x6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2392[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Epsilon;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
struct FGeometryScriptMeasureMeshDistanceOptions
{
public:
	bool                                         bSymmetric;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptBendWarpOptions
struct FGeometryScriptBendWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2396[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowerExtent;                                       // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBidirectional;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2397[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTwistWarpOptions
struct FGeometryScriptTwistWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2398[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowerExtent;                                       // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBidirectional;                                    // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2399[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptFlareWarpOptions
struct FGeometryScriptFlareWarpOptions
{
public:
	bool                                         bSymmetricExtents;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LowerExtent;                                       // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptFlareType          FlareType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
struct FGeometryScriptPerlinNoiseLayerOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FrequencyShift;                                    // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMathWarpOptions
struct FGeometryScriptMathWarpOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrequencyShift;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
struct FGeometryScriptPerlinNoiseOptions
{
public:
	struct FGeometryScriptPerlinNoiseLayerOptions BaseLayer;                                         // 0x0(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bApplyAlongNormal;                                 // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23AB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
struct FGeometryScriptIterativeMeshSmoothingOptions
{
public:
	int32                                        NumIterations;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
struct FGeometryScriptDisplaceFromTextureOptions
{
public:
	float                                        Magnitude;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UVScale;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UVOffset;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Center;                                            // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImageChannel;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
struct FGeometryScriptMeshEditPolygroupOptions
{
public:
	enum class EGeometryScriptMeshEditPolygroupMode GroupMode;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ConstantGroup;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetOptions
struct FGeometryScriptMeshOffsetOptions
{
public:
	float                                        OffsetDistance;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFixedBoundary;                                    // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SolveSteps;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothAlpha;                                       // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReprojectDuringSmoothing;                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BoundaryAlpha;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
struct FGeometryScriptMeshExtrudeOptions
{
public:
	float                                        ExtrudeDistance;                                   // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ExtrudeDirection;                                  // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UVScale;                                           // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolidsToShells;                                   // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C8[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
struct FGeometryScriptMeshLinearExtrudeOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptLinearExtrudeDirection DirectionMode;                                     // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x24(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        UVScale;                                           // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolidsToShells;                                   // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
struct FGeometryScriptMeshOffsetFacesOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptOffsetFacesType    OffsetType;                                        // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        UVScale;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolidsToShells;                                   // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
struct FGeometryScriptMeshInsetOutsetFacesOptions
{
public:
	float                                        Distance;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReproject;                                        // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoundaryOnly;                                     // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Softness;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AreaScale;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPolyOperationArea  AreaMode;                                          // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions;                                      // 0x14(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        UVScale;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelOptions
struct FGeometryScriptMeshBevelOptions
{
public:
	float                                        BevelDistance;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInferMaterialID;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SetMaterialID;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyFilterBox;                                   // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  FilterBox;                                         // 0x10(0x38)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_23E8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            FilterBoxTransform;                                // 0x50(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFullyContained;                                   // 0xB0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23EA[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
struct FGeometryScriptMeshBevelSelectionOptions
{
public:
	float                                        BevelDistance;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInferMaterialID;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SetMaterialID;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
struct FGeometryScriptCalculateNormalsOptions
{
public:
	bool                                         bAngleWeighted;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAreaWeighted;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSplitNormalsOptions
struct FGeometryScriptSplitNormalsOptions
{
public:
	bool                                         bSplitByOpeningAngle;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OpeningAngleDeg;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSplitByFaceGroup;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0xC(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptTangentsOptions
struct FGeometryScriptTangentsOptions
{
public:
	enum class EGeometryScriptTangentTypes       Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UVLayer;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPrimitiveOptions
struct FGeometryScriptPrimitiveOptions
{
public:
	enum class EGeometryScriptPrimitivePolygroupMode PolygroupMode;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOrientation;                                  // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptPrimitiveUVMode    UVMode;                                            // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRevolveOptions
struct FGeometryScriptRevolveOptions
{
public:
	float                                        RevolveDegrees;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DegreeOffset;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseDirection;                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHardNormals;                                      // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HardNormalAngle;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProfileAtMidpoint;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillPartialRevolveEndcaps;                        // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FB[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptVoronoiOptions
struct FGeometryScriptVoronoiOptions
{
public:
	float                                        BoundsExpand;                                      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  Bounds;                                            // 0x8(0x38)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<int32>                                CreateCells;                                       // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIncludeBoundary;                                  // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemeshOptions
struct FGeometryScriptRemeshOptions
{
public:
	bool                                         bDiscardAttributes;                                // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReprojectToInputMesh;                             // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptRemeshSmoothingType SmoothingType;                                     // 0x2(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2402[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingRate;                                     // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptRemeshEdgeConstraintType MeshBoundaryConstraint;                            // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptRemeshEdgeConstraintType GroupBoundaryConstraint;                           // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptRemeshEdgeConstraintType MaterialBoundaryConstraint;                        // 0xA(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFlips;                                       // 0xB(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSplits;                                      // 0xC(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowCollapses;                                   // 0xD(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreventNormalFlips;                               // 0xE(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreventTinyTriangles;                             // 0xF(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFullRemeshPasses;                              // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_240A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RemeshIterations;                                  // 0x14(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCompact;                                      // 0x18(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_240B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptUniformRemeshOptions
struct FGeometryScriptUniformRemeshOptions
{
public:
	enum class EGeometryScriptUniformRemeshTargetType TargetType;                                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetTriangleCount;                               // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetEdgeLength;                                  // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptWeldEdgesOptions
struct FGeometryScriptWeldEdgesOptions
{
public:
	float                                        Tolerance;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyUniquePairs;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
struct FGeometryScriptResolveTJunctionOptions
{
public:
	float                                        Tolerance;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptFillHolesOptions
struct FGeometryScriptFillHolesOptions
{
public:
	enum class EGeometryScriptFillHolesMethod    FillMethod;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2422[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
struct FGeometryScriptRemoveSmallComponentOptions
{
public:
	float                                        MinVolume;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinArea;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinTriangleCount;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
struct FGeometryScriptRemoveHiddenTrianglesOptions
{
public:
	enum class EGeometryScriptRemoveHiddenTrianglesMethod Method;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2429[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SamplesPerTriangle;                                // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ShrinkSelection;                                   // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindingIsoValue;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RaysPerSample;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalOffset;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompactResult;                                    // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
struct FGeometryScriptDegenerateTriangleOptions
{
public:
	enum class EGeometryScriptRepairMeshMode     Mode;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2433[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinTriangleArea;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MinEdgeLength;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompactOnCompletion;                              // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
struct FGeometryScriptPlanarSimplifyOptions
{
public:
	float                                        AngleThreshold;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCompact;                                      // 0x4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
struct FGeometryScriptPolygroupSimplifyOptions
{
public:
	float                                        AngleThreshold;                                    // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCompact;                                      // 0x4(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2440[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x7 (0x7 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
struct FGeometryScriptSimplifyMeshOptions
{
public:
	enum class EGeometryScriptRemoveMeshSimplificationType Method;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSeamCollapse;                                // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSeamSmoothing;                               // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSeamSplits;                                  // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveVertexPositions;                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRetainQuadricMemory;                              // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCompact;                                      // 0x6(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSpatialQueryOptions
struct FGeometryScriptSpatialQueryOptions
{
public:
	float                                        MaxDistance;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowUnsafeModifiedQueries;                       // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingIsoThreshold;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRayHitResult
struct FGeometryScriptRayHitResult
{
public:
	bool                                         bHit;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2451[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RayParameter;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HitTriangleID;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2452[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitPosition;                                       // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitBaryCoords;                                     // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPNTessellateOptions
struct FGeometryScriptPNTessellateOptions
{
public:
	bool                                         bRecomputeNormals;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
struct FGeometryScriptSelectiveTessellateOptions
{
public:
	bool                                         bEnableMultithreading;                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRepackUVsOptions
struct FGeometryScriptRepackUVsOptions
{
public:
	int32                                        TargetImageWidth;                                  // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptimizeIslandRotation;                           // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2457[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptExpMapUVOptions
struct FGeometryScriptExpMapUVOptions
{
public:
	int32                                        NormalSmoothingRounds;                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalSmoothingAlpha;                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
struct FGeometryScriptSpectralConformalUVOptions
{
public:
	bool                                         bPreserveIrregularity;                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
struct FGeometryScriptRecomputeUVsOptions
{
public:
	enum class EGeometryScriptUVFlattenMethod    Method;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptUVIslandSource     IslandSource;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptExpMapUVOptions        ExpMapOptions;                                     // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FGeometryScriptSpectralConformalUVOptions SpectralConformalOptions;                          // 0xC(0x1)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2460[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x10(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAutoAlignIslandsWithAxes;                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2464[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34 (0x34 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptPatchBuilderOptions
struct FGeometryScriptPatchBuilderOptions
{
public:
	int32                                        InitialPatchCount;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPatchSize;                                      // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatchCurvatureAlignmentWeight;                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatchMergingMetricThresh;                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PatchMergingAngleThresh;                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeometryScriptExpMapUVOptions        ExpMapOptions;                                     // 0x14(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRespectInputGroups;                               // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2473[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptGroupLayer             GroupLayer;                                        // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAutoPack;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2474[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptRepackUVsOptions       PackingOptions;                                    // 0x2C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptXAtlasOptions
struct FGeometryScriptXAtlasOptions
{
public:
	int32                                        MaxIterations;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScript3DGridParameters
struct FGeometryScript3DGridParameters
{
public:
	enum class EGeometryScriptGridSizingMethod   SizeMethod;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GridCellSize;                                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GridResolution;                                    // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSolidifyOptions
struct FGeometryScriptSolidifyOptions
{
public:
	struct FGeometryScript3DGridParameters       GridParameters;                                    // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WindingThreshold;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSolidAtBoundaries;                                // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExtendBounds;                                      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SurfaceSearchSteps;                                // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bThickenShells;                                    // 0x1C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2480[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ShellThickness;                                    // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptMorphologyOptions
struct FGeometryScriptMorphologyOptions
{
public:
	struct FGeometryScript3DGridParameters       SDFGridParameters;                                 // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseSeparateMeshGrid;                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2483[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScript3DGridParameters       MeshGridParameters;                                // 0x10(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EGeometryScriptMorphologicalOpType Operation;                                         // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2484[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Distance;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSplineSamplingOptions
struct FGeometryScriptSplineSamplingOptions
{
public:
	int32                                        NumSamples;                                        // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorTolerance;                                    // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGeometryScriptSampleSpacing      SampleSpacing;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplineCoordinateSpace            CoordinateSpace;                                   // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2487[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
struct FGeometryScriptCopyMeshFromComponentOptions
{
public:
	bool                                         bWantNormals;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWantTangents;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometryScriptMeshReadLOD            RequestedLOD;                                      // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GeometryScriptingCore.GeometryScriptSampleTextureOptions
struct FGeometryScriptSampleTextureOptions
{
public:
	enum class EGeometryScriptPixelSamplingMethod SamplingMethod;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWrap;                                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             UVScale;                                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             UVOffset;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
