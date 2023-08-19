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

enum class EGizmoElementState : uint8
{
	EGizmoElementState__None       = 0,
	EGizmoElementState__Visible    = 2,
	EGizmoElementState__Hittable   = 4,
	EGizmoElementState__VisibleAndHittable = 6,
	EGizmoElementState__EGizmoElementState_MAX = 7,
};

enum class EGizmoElementInteractionState : int32
{
	EGizmoElementInteractionState__None = 0,
	EGizmoElementInteractionState__Hovering = 1,
	EGizmoElementInteractionState__Interacting = 2,
	EGizmoElementInteractionState__EGizmoElementInteractionState_MAX = 3,
};

enum class EGizmoElementViewDependentType : int32
{
	EGizmoElementViewDependentType__None = 0,
	EGizmoElementViewDependentType__Axis = 1,
	EGizmoElementViewDependentType__Plane = 2,
	EGizmoElementViewDependentType__EGizmoElementViewDependentType_MAX = 3,
};

enum class EGizmoElementViewAlignType : int32
{
	EGizmoElementViewAlignType__None = 0,
	EGizmoElementViewAlignType__PointOnly = 1,
	EGizmoElementViewAlignType__PointEye = 2,
	EGizmoElementViewAlignType__PointScreen = 3,
	EGizmoElementViewAlignType__Axial = 4,
	EGizmoElementViewAlignType__EGizmoElementViewAlignType_MAX = 5,
};

enum class EGizmoElementPartialType : int32
{
	EGizmoElementPartialType__None = 0,
	EGizmoElementPartialType__Partial = 1,
	EGizmoElementPartialType__PartialViewDependent = 2,
	EGizmoElementPartialType__EGizmoElementPartialType_MAX = 3,
};

enum class EStandardToolContextMaterials : uint8
{
	EStandardToolContextMaterials__VertexColorMaterial = 1,
	EStandardToolContextMaterials__EStandardToolContextMaterials_MAX = 2,
};

enum class EToolContextCoordinateSystem : int32
{
	EToolContextCoordinateSystem__World = 0,
	EToolContextCoordinateSystem__Local = 1,
	EToolContextCoordinateSystem__EToolContextCoordinateSystem_MAX = 2,
};

enum class EToolMessageLevel : uint8
{
	EToolMessageLevel__Internal    = 0,
	EToolMessageLevel__UserMessage = 1,
	EToolMessageLevel__UserNotification = 2,
	EToolMessageLevel__UserWarning = 3,
	EToolMessageLevel__UserError   = 4,
	EToolMessageLevel__EToolMessageLevel_MAX = 5,
};

enum class ESelectedObjectsModificationType : uint8
{
	ESelectedObjectsModificationType__Replace = 0,
	ESelectedObjectsModificationType__Add = 1,
	ESelectedObjectsModificationType__Remove = 2,
	ESelectedObjectsModificationType__Clear = 3,
	ESelectedObjectsModificationType__ESelectedObjectsModificationType_MAX = 4,
};

enum class EViewInteractionState : uint8
{
	EViewInteractionState__None    = 0,
	EViewInteractionState__Hovered = 1,
	EViewInteractionState__Focused = 2,
	EViewInteractionState__EViewInteractionState_MAX = 3,
};

enum class EGizmoElementArrowHeadType : int32
{
	EGizmoElementArrowHeadType__Cone = 0,
	EGizmoElementArrowHeadType__Cube = 1,
	EGizmoElementArrowHeadType__EGizmoElementArrowHeadType_MAX = 2,
};

enum class EInputCaptureSide : uint8
{
	EInputCaptureSide__None        = 0,
	EInputCaptureSide__Left        = 1,
	EInputCaptureSide__Right       = 2,
	EInputCaptureSide__Both        = 3,
	EInputCaptureSide__Any         = 99,
	EInputCaptureSide__EInputCaptureSide_MAX = 100,
};

enum class EInputCaptureRequestType : uint8
{
	EInputCaptureRequestType__Begin = 1,
	EInputCaptureRequestType__Ignore = 2,
	EInputCaptureRequestType__EInputCaptureRequestType_MAX = 3,
};

enum class EInputCaptureState : uint8
{
	EInputCaptureState__Begin      = 1,
	EInputCaptureState__Continue   = 2,
	EInputCaptureState__End        = 3,
	EInputCaptureState__Ignore     = 4,
	EInputCaptureState__EInputCaptureState_MAX = 5,
};

enum class EInputDevices : uint8
{
	EInputDevices__None            = 0,
	EInputDevices__Keyboard        = 1,
	EInputDevices__Mouse           = 2,
	EInputDevices__Gamepad         = 4,
	EInputDevices__OculusTouch     = 8,
	EInputDevices__HTCViveWands    = 16,
	EInputDevices__AnySpatialDevice = 24,
	EInputDevices__TabletFingers   = 1024,
	EInputDevices__EInputDevices_MAX = 1025,
};

enum class ETransformGizmoSubElements : uint8
{
	ETransformGizmoSubElements__None = 0,
	ETransformGizmoSubElements__TranslateAxisX = 2,
	ETransformGizmoSubElements__TranslateAxisY = 4,
	ETransformGizmoSubElements__TranslateAxisZ = 8,
	ETransformGizmoSubElements__TranslateAllAxes = 14,
	ETransformGizmoSubElements__TranslatePlaneXY = 16,
	ETransformGizmoSubElements__TranslatePlaneXZ = 32,
	ETransformGizmoSubElements__TranslatePlaneYZ = 64,
	ETransformGizmoSubElements__TranslateAllPlanes = 112,
	ETransformGizmoSubElements__RotateAxisX = 128,
	ETransformGizmoSubElements__RotateAxisY = 256,
	ETransformGizmoSubElements__RotateAxisZ = 512,
	ETransformGizmoSubElements__RotateAllAxes = 896,
	ETransformGizmoSubElements__ScaleAxisX = 1024,
	ETransformGizmoSubElements__ScaleAxisY = 2048,
	ETransformGizmoSubElements__ScaleAxisZ = 4096,
	ETransformGizmoSubElements__ScaleAllAxes = 7168,
	ETransformGizmoSubElements__ScalePlaneYZ = 8192,
	ETransformGizmoSubElements__ScalePlaneXZ = 16384,
	ETransformGizmoSubElements__ScalePlaneXY = 32768,
	ETransformGizmoSubElements__ScaleAllPlanes = 57344,
	ETransformGizmoSubElements__ScaleUniform = 65536,
	ETransformGizmoSubElements__StandardTranslateRotate = 1022,
	ETransformGizmoSubElements__TranslateRotateUniformScale = 66558,
	ETransformGizmoSubElements__FullTranslateRotateScale = 131070,
	ETransformGizmoSubElements__ETransformGizmoSubElements_MAX = 131071,
};

enum class EToolSide : uint8
{
	EToolSide__Left                = 1,
	EToolSide__Mouse               = 1,
	EToolSide__Right               = 2,
	EToolSide__EToolSide_MAX       = 3,
};

enum class EToolChangeTrackingMode : uint8
{
	EToolChangeTrackingMode__NoChangeTracking = 1,
	EToolChangeTrackingMode__UndoToExit = 2,
	EToolChangeTrackingMode__FullUndoRedo = 3,
	EToolChangeTrackingMode__EToolChangeTrackingMode_MAX = 4,
};

enum class ESceneSnapQueryType : uint8
{
	ESceneSnapQueryType__Position  = 1,
	ESceneSnapQueryType__Rotation  = 2,
	ESceneSnapQueryType__ESceneSnapQueryType_MAX = 3,
};

enum class ESceneSnapQueryTargetType : uint8
{
	ESceneSnapQueryTargetType__None = 0,
	ESceneSnapQueryTargetType__MeshVertex = 1,
	ESceneSnapQueryTargetType__MeshEdge = 2,
	ESceneSnapQueryTargetType__Grid = 4,
	ESceneSnapQueryTargetType__All = 7,
	ESceneSnapQueryTargetType__ESceneSnapQueryTargetType_MAX = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoElementColorAttribute
struct FGizmoElementColorAttribute
{
public:
	struct FLinearColor                          Value;                                             // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasValue;                                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesChildState;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F0[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoElementMaterialAttribute
struct FGizmoElementMaterialAttribute
{
public:
	TWeakObjectPtr<class UMaterialInterface>     Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesChildState;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F4[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
struct FGizmoElementMeshRenderStateAttributes
{
public:
	struct FGizmoElementMaterialAttribute        Material;                                          // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementMaterialAttribute        HoverMaterial;                                     // 0xC(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementMaterialAttribute        InteractMaterial;                                  // 0x18(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute           VertexColor;                                       // 0x24(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute           HoverVertexColor;                                  // 0x38(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute           InteractVertexColor;                               // 0x4C(0x14)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
struct FGizmoElementLineRenderStateAttributes
{
public:
	struct FGizmoElementColorAttribute           LineColor;                                         // 0x0(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute           HoverLineColor;                                    // 0x14(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	struct FGizmoElementColorAttribute           InteractLineColor;                                 // 0x28(0x14)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
struct FGizmoVec2ParameterChange
{
public:
	struct FVector2D                             InitialValue;                                      // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             CurrentValue;                                      // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
struct FGizmoFloatParameterChange
{
public:
	float                                        InitialValue;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct InteractiveToolsFramework.BrushStampData
struct FBrushStampData
{
public:
	uint8                                        Pad_1607[0x128];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct InteractiveToolsFramework.BehaviorInfo
struct FBehaviorInfo
{
public:
	class UInputBehavior*                        Behavior;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct InteractiveToolsFramework.InputRayHit
struct FInputRayHit
{
public:
	uint8                                        Pad_160D[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct InteractiveToolsFramework.ActiveGizmo
struct FActiveGizmo
{
public:
	class UInteractiveGizmo*                     Gizmo;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160F[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
