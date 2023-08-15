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

enum class EMakeMeshPlacementType : uint8
{
	EMakeMeshPlacementType__GroundPlane = 0,
	EMakeMeshPlacementType__OnScene = 1,
	EMakeMeshPlacementType__EMakeMeshPlacementType_MAX = 2,
};

enum class EMakeMeshPivotLocation : uint8
{
	EMakeMeshPivotLocation__Base   = 0,
	EMakeMeshPivotLocation__Centered = 1,
	EMakeMeshPivotLocation__Top    = 2,
	EMakeMeshPivotLocation__EMakeMeshPivotLocation_MAX = 3,
};

enum class EMakeMeshPolygroupMode : uint8
{
	EMakeMeshPolygroupMode__PerShape = 0,
	EMakeMeshPolygroupMode__PerFace = 1,
	EMakeMeshPolygroupMode__PerQuad = 2,
	EMakeMeshPolygroupMode__EMakeMeshPolygroupMode_MAX = 3,
};

enum class EProceduralRectType : int32
{
	EProceduralRectType__Rectangle = 0,
	EProceduralRectType__RoundedRectangle = 1,
	EProceduralRectType__EProceduralRectType_MAX = 2,
};

enum class EProceduralDiscType : int32
{
	EProceduralDiscType__Disc      = 0,
	EProceduralDiscType__PuncturedDisc = 1,
	EProceduralDiscType__EProceduralDiscType_MAX = 2,
};

enum class EProceduralSphereType : int32
{
	EProceduralSphereType__LatLong = 0,
	EProceduralSphereType__Box     = 1,
	EProceduralSphereType__EProceduralSphereType_MAX = 2,
};

enum class EProceduralStairsType : int32
{
	EProceduralStairsType__Linear  = 0,
	EProceduralStairsType__Floating = 1,
	EProceduralStairsType__Curved  = 2,
	EProceduralStairsType__Spiral  = 3,
	EProceduralStairsType__EProceduralStairsType_MAX = 4,
};

enum class EDrawPolygonDrawMode : uint8
{
	EDrawPolygonDrawMode__Freehand = 0,
	EDrawPolygonDrawMode__Circle   = 1,
	EDrawPolygonDrawMode__Square   = 2,
	EDrawPolygonDrawMode__Rectangle = 3,
	EDrawPolygonDrawMode__RoundedRectangle = 4,
	EDrawPolygonDrawMode__Ring     = 5,
	EDrawPolygonDrawMode__EDrawPolygonDrawMode_MAX = 6,
};

enum class EDrawPolygonExtrudeMode : uint8
{
	EDrawPolygonExtrudeMode__Flat  = 0,
	EDrawPolygonExtrudeMode__Fixed = 1,
	EDrawPolygonExtrudeMode__Interactive = 2,
	EDrawPolygonExtrudeMode__EDrawPolygonExtrudeMode_MAX = 3,
};

enum class ELocalFrameMode : int32
{
	ELocalFrameMode__FromObject    = 0,
	ELocalFrameMode__FromGeometry  = 1,
	ELocalFrameMode__ELocalFrameMode_MAX = 2,
};

enum class EEditMeshPolygonsToolActions : uint8
{
	EEditMeshPolygonsToolActions__NoAction = 0,
	EEditMeshPolygonsToolActions__AcceptCurrent = 1,
	EEditMeshPolygonsToolActions__CancelCurrent = 2,
	EEditMeshPolygonsToolActions__Extrude = 3,
	EEditMeshPolygonsToolActions__PushPull = 4,
	EEditMeshPolygonsToolActions__Offset = 5,
	EEditMeshPolygonsToolActions__Inset = 6,
	EEditMeshPolygonsToolActions__Outset = 7,
	EEditMeshPolygonsToolActions__BevelFaces = 8,
	EEditMeshPolygonsToolActions__InsertEdge = 9,
	EEditMeshPolygonsToolActions__InsertEdgeLoop = 10,
	EEditMeshPolygonsToolActions__Complete = 11,
	EEditMeshPolygonsToolActions__PlaneCut = 12,
	EEditMeshPolygonsToolActions__Merge = 13,
	EEditMeshPolygonsToolActions__Delete = 14,
	EEditMeshPolygonsToolActions__CutFaces = 15,
	EEditMeshPolygonsToolActions__RecalculateNormals = 16,
	EEditMeshPolygonsToolActions__FlipNormals = 17,
	EEditMeshPolygonsToolActions__Retriangulate = 18,
	EEditMeshPolygonsToolActions__Decompose = 19,
	EEditMeshPolygonsToolActions__Disconnect = 20,
	EEditMeshPolygonsToolActions__Duplicate = 21,
	EEditMeshPolygonsToolActions__CollapseEdge = 22,
	EEditMeshPolygonsToolActions__WeldEdges = 23,
	EEditMeshPolygonsToolActions__StraightenEdge = 24,
	EEditMeshPolygonsToolActions__FillHole = 25,
	EEditMeshPolygonsToolActions__BridgeEdges = 26,
	EEditMeshPolygonsToolActions__BevelEdges = 27,
	EEditMeshPolygonsToolActions__PlanarProjectionUV = 28,
	EEditMeshPolygonsToolActions__SimplifyByGroups = 29,
	EEditMeshPolygonsToolActions__RegenerateExtraCorners = 30,
	EEditMeshPolygonsToolActions__PokeSingleFace = 31,
	EEditMeshPolygonsToolActions__SplitSingleEdge = 32,
	EEditMeshPolygonsToolActions__FlipSingleEdge = 33,
	EEditMeshPolygonsToolActions__CollapseSingleEdge = 34,
	EEditMeshPolygonsToolActions__EEditMeshPolygonsToolActions_MAX = 35,
};

enum class EEditMeshPolygonsToolSelectionMode : uint8
{
	EEditMeshPolygonsToolSelectionMode__Faces = 0,
	EEditMeshPolygonsToolSelectionMode__Edges = 1,
	EEditMeshPolygonsToolSelectionMode__Vertices = 2,
	EEditMeshPolygonsToolSelectionMode__Loops = 3,
	EEditMeshPolygonsToolSelectionMode__Rings = 4,
	EEditMeshPolygonsToolSelectionMode__FacesEdgesVertices = 5,
	EEditMeshPolygonsToolSelectionMode__EEditMeshPolygonsToolSelectionMode_MAX = 6,
};

enum class ESetMeshMaterialMode : uint8
{
	ESetMeshMaterialMode__Original = 0,
	ESetMeshMaterialMode__Checkerboard = 1,
	ESetMeshMaterialMode__Override = 2,
	ESetMeshMaterialMode__ESetMeshMaterialMode_MAX = 3,
};

enum class EMeshEditingMaterialModes : int32
{
	EMeshEditingMaterialModes__ExistingMaterial = 0,
	EMeshEditingMaterialModes__Diffuse = 1,
	EMeshEditingMaterialModes__Grey = 2,
	EMeshEditingMaterialModes__Soft = 3,
	EMeshEditingMaterialModes__Transparent = 4,
	EMeshEditingMaterialModes__TangentNormal = 5,
	EMeshEditingMaterialModes__VertexColor = 6,
	EMeshEditingMaterialModes__CustomImage = 7,
	EMeshEditingMaterialModes__Custom = 8,
	EMeshEditingMaterialModes__EMeshEditingMaterialModes_MAX = 9,
};

enum class ERevolvePropertiesCapFillMode : uint8
{
	ERevolvePropertiesCapFillMode__None = 0,
	ERevolvePropertiesCapFillMode__CenterFan = 1,
	ERevolvePropertiesCapFillMode__Delaunay = 2,
	ERevolvePropertiesCapFillMode__EarClipping = 3,
	ERevolvePropertiesCapFillMode__ERevolvePropertiesCapFillMode_MAX = 4,
};

enum class ERevolvePropertiesPolygroupMode : uint8
{
	ERevolvePropertiesPolygroupMode__PerShape = 0,
	ERevolvePropertiesPolygroupMode__PerFace = 1,
	ERevolvePropertiesPolygroupMode__PerRevolveStep = 2,
	ERevolvePropertiesPolygroupMode__PerPathSegment = 3,
	ERevolvePropertiesPolygroupMode__ERevolvePropertiesPolygroupMode_MAX = 4,
};

enum class ERevolvePropertiesQuadSplit : uint8
{
	ERevolvePropertiesQuadSplit__Uniform = 0,
	ERevolvePropertiesQuadSplit__Compact = 1,
	ERevolvePropertiesQuadSplit__ERevolvePropertiesQuadSplit_MAX = 2,
};

enum class EPolyEditCutPlaneOrientation : int32
{
	EPolyEditCutPlaneOrientation__FaceNormals = 0,
	EPolyEditCutPlaneOrientation__ViewDirection = 1,
	EPolyEditCutPlaneOrientation__EPolyEditCutPlaneOrientation_MAX = 2,
};

enum class EPolyEditExtrudeDirection : int32
{
	EPolyEditExtrudeDirection__SelectionNormal = 0,
	EPolyEditExtrudeDirection__WorldX = 1,
	EPolyEditExtrudeDirection__WorldY = 2,
	EPolyEditExtrudeDirection__WorldZ = 3,
	EPolyEditExtrudeDirection__LocalX = 4,
	EPolyEditExtrudeDirection__LocalY = 5,
	EPolyEditExtrudeDirection__LocalZ = 6,
	EPolyEditExtrudeDirection__EPolyEditExtrudeDirection_MAX = 7,
};

enum class EPolyEditExtrudeDistanceMode : int32
{
	EPolyEditExtrudeDistanceMode__ClickInViewport = 0,
	EPolyEditExtrudeDistanceMode__Fixed = 1,
	EPolyEditExtrudeDistanceMode__EPolyEditExtrudeDistanceMode_MAX = 2,
};

enum class EPolyEditExtrudeModeOptions : int32
{
	EPolyEditExtrudeModeOptions__SingleDirection = 3,
	EPolyEditExtrudeModeOptions__SelectedTriangleNormals = 0,
	EPolyEditExtrudeModeOptions__SelectedTriangleNormalsEven = 1,
	EPolyEditExtrudeModeOptions__EPolyEditExtrudeModeOptions_MAX = 4,
};

enum class EPolyEditOffsetModeOptions : int32
{
	EPolyEditOffsetModeOptions__VertexNormals = 2,
	EPolyEditOffsetModeOptions__SelectedTriangleNormals = 0,
	EPolyEditOffsetModeOptions__SelectedTriangleNormalsEven = 1,
	EPolyEditOffsetModeOptions__EPolyEditOffsetModeOptions_MAX = 3,
};

enum class EPolyEditPushPullModeOptions : int32
{
	EPolyEditPushPullModeOptions__SelectedTriangleNormals = 0,
	EPolyEditPushPullModeOptions__SelectedTriangleNormalsEven = 1,
	EPolyEditPushPullModeOptions__SingleDirection = 3,
	EPolyEditPushPullModeOptions__VertexNormals = 2,
	EPolyEditPushPullModeOptions__EPolyEditPushPullModeOptions_MAX = 4,
};

enum class EGroupEdgeInsertionMode : int32
{
	EGroupEdgeInsertionMode__Retriangulate = 0,
	EGroupEdgeInsertionMode__PlaneCut = 1,
	EGroupEdgeInsertionMode__EGroupEdgeInsertionMode_MAX = 2,
};

enum class EEdgeLoopPositioningMode : int32
{
	EEdgeLoopPositioningMode__Even = 0,
	EEdgeLoopPositioningMode__ProportionOffset = 1,
	EEdgeLoopPositioningMode__DistanceOffset = 2,
	EEdgeLoopPositioningMode__EEdgeLoopPositioningMode_MAX = 3,
};

enum class EEdgeLoopInsertionMode : int32
{
	EEdgeLoopInsertionMode__Retriangulate = 0,
	EEdgeLoopInsertionMode__PlaneCut = 1,
	EEdgeLoopInsertionMode__EEdgeLoopInsertionMode_MAX = 2,
};

enum class EUVProjectionToolActions : uint8
{
	EUVProjectionToolActions__NoAction = 0,
	EUVProjectionToolActions__AutoFit = 1,
	EUVProjectionToolActions__AutoFitAlign = 2,
	EUVProjectionToolActions__Reset = 3,
	EUVProjectionToolActions__EUVProjectionToolActions_MAX = 4,
};

enum class EUVProjectionToolInitializationMode : int32
{
	EUVProjectionToolInitializationMode__Default = 0,
	EUVProjectionToolInitializationMode__UsePrevious = 1,
	EUVProjectionToolInitializationMode__AutoFit = 2,
	EUVProjectionToolInitializationMode__AutoFitAlign = 3,
	EUVProjectionToolInitializationMode__EUVProjectionToolInitializationMode_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
