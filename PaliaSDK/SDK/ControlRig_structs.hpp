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

enum class EControlRigState : uint8
{
	EControlRigState__Init         = 0,
	EControlRigState__Update       = 1,
	EControlRigState__Invalid      = 2,
	EControlRigState__EControlRigState_MAX = 3,
};

enum class ERigElementType : uint8
{
	ERigElementType__None          = 0,
	ERigElementType__Bone          = 1,
	ERigElementType__Null          = 2,
	ERigElementType__Space         = 2,
	ERigElementType__Control       = 4,
	ERigElementType__Curve         = 8,
	ERigElementType__RigidBody     = 16,
	ERigElementType__Reference     = 32,
	ERigElementType__Last          = 64,
	ERigElementType__All           = 63,
	ERigElementType__ToResetAfterConstructionEvent = 13,
	ERigElementType__ERigElementType_MAX = 65,
};

enum class ERigControlVisibility : uint8
{
	ERigControlVisibility__UserDefined = 0,
	ERigControlVisibility__BasedOnSelection = 1,
	ERigControlVisibility__ERigControlVisibility_MAX = 2,
};

enum class ERigControlAxis : uint8
{
	ERigControlAxis__X             = 0,
	ERigControlAxis__Y             = 1,
	ERigControlAxis__Z             = 2,
	ERigControlAxis__ERigControlAxis_MAX = 3,
};

enum class ERigControlType : uint8
{
	ERigControlType__Bool          = 0,
	ERigControlType__Float         = 1,
	ERigControlType__Integer       = 2,
	ERigControlType__Vector2D      = 3,
	ERigControlType__Position      = 4,
	ERigControlType__Scale         = 5,
	ERigControlType__Rotator       = 6,
	ERigControlType__Transform     = 7,
	ERigControlType__TransformNoScale = 8,
	ERigControlType__EulerTransform = 9,
	ERigControlType__ERigControlType_MAX = 10,
};

enum class ERigControlAnimationType : uint8
{
	ERigControlAnimationType__AnimationControl = 0,
	ERigControlAnimationType__AnimationChannel = 1,
	ERigControlAnimationType__ProxyControl = 2,
	ERigControlAnimationType__VisualCue = 3,
	ERigControlAnimationType__ERigControlAnimationType_MAX = 4,
};

enum class EControlRigDrawSettings : uint8
{
	EControlRigDrawSettings__Points = 0,
	EControlRigDrawSettings__Lines = 1,
	EControlRigDrawSettings__LineStrip = 2,
	EControlRigDrawSettings__DynamicMesh = 3,
	EControlRigDrawSettings__EControlRigDrawSettings_MAX = 4,
};

enum class ERigExecutionType : uint8
{
	ERigExecutionType__Runtime     = 0,
	ERigExecutionType__Editing     = 1,
	ERigExecutionType__Max         = 2,
};

enum class ERigTransformStackEntryType : uint8
{
	TransformPose                  = 0,
	ControlOffset                  = 1,
	ControlShape                   = 2,
	CurveValue                     = 3,
	ERigTransformStackEntryType_MAX = 4,
};

enum class ERigTransformType : uint8
{
	ERigTransformType__InitialLocal = 0,
	ERigTransformType__CurrentLocal = 1,
	ERigTransformType__InitialGlobal = 2,
	ERigTransformType__CurrentGlobal = 3,
	ERigTransformType__NumTransformTypes = 4,
	ERigTransformType__ERigTransformType_MAX = 5,
};

enum class EControlRigInteractionType : uint8
{
	EControlRigInteractionType__None = 0,
	EControlRigInteractionType__Translate = 1,
	EControlRigInteractionType__Rotate = 2,
	EControlRigInteractionType__Scale = 4,
	EControlRigInteractionType__All = 7,
	EControlRigInteractionType__EControlRigInteractionType_MAX = 8,
};

enum class EControlRigVectorKind : uint8
{
	EControlRigVectorKind__Direction = 0,
	EControlRigVectorKind__Location = 1,
	EControlRigVectorKind__EControlRigVectorKind_MAX = 2,
};

enum class EControlRigComponentSpace : uint8
{
	EControlRigComponentSpace__WorldSpace = 0,
	EControlRigComponentSpace__ActorSpace = 1,
	EControlRigComponentSpace__ComponentSpace = 2,
	EControlRigComponentSpace__RigSpace = 3,
	EControlRigComponentSpace__LocalSpace = 4,
	EControlRigComponentSpace__Max = 5,
};

enum class EControlRigComponentMapDirection : uint8
{
	EControlRigComponentMapDirection__Input = 0,
	EControlRigComponentMapDirection__Output = 1,
	EControlRigComponentMapDirection__EControlRigComponentMapDirection_MAX = 2,
};

enum class ETransformSpaceMode : uint8
{
	ETransformSpaceMode__LocalSpace = 0,
	ETransformSpaceMode__GlobalSpace = 1,
	ETransformSpaceMode__BaseSpace = 2,
	ETransformSpaceMode__BaseJoint = 3,
	ETransformSpaceMode__Max       = 4,
};

enum class EControlRigClampSpatialMode : uint8
{
	EControlRigClampSpatialMode__Plane = 0,
	EControlRigClampSpatialMode__Cylinder = 1,
	EControlRigClampSpatialMode__Sphere = 2,
	EControlRigClampSpatialMode__EControlRigClampSpatialMode_MAX = 3,
};

enum class ETransformGetterType : uint8
{
	ETransformGetterType__Initial  = 0,
	ETransformGetterType__Current  = 1,
	ETransformGetterType__Max      = 2,
};

enum class EBoneGetterSetterMode : uint8
{
	EBoneGetterSetterMode__LocalSpace = 0,
	EBoneGetterSetterMode__GlobalSpace = 1,
	EBoneGetterSetterMode__Max     = 2,
};

enum class EControlRigDrawHierarchyMode : uint8
{
	EControlRigDrawHierarchyMode__Axes = 0,
	EControlRigDrawHierarchyMode__Max = 1,
};

enum class EControlRigAnimEasingType : uint8
{
	EControlRigAnimEasingType__Linear = 0,
	EControlRigAnimEasingType__QuadraticEaseIn = 1,
	EControlRigAnimEasingType__QuadraticEaseOut = 2,
	EControlRigAnimEasingType__QuadraticEaseInOut = 3,
	EControlRigAnimEasingType__CubicEaseIn = 4,
	EControlRigAnimEasingType__CubicEaseOut = 5,
	EControlRigAnimEasingType__CubicEaseInOut = 6,
	EControlRigAnimEasingType__QuarticEaseIn = 7,
	EControlRigAnimEasingType__QuarticEaseOut = 8,
	EControlRigAnimEasingType__QuarticEaseInOut = 9,
	EControlRigAnimEasingType__QuinticEaseIn = 10,
	EControlRigAnimEasingType__QuinticEaseOut = 11,
	EControlRigAnimEasingType__QuinticEaseInOut = 12,
	EControlRigAnimEasingType__SineEaseIn = 13,
	EControlRigAnimEasingType__SineEaseOut = 14,
	EControlRigAnimEasingType__SineEaseInOut = 15,
	EControlRigAnimEasingType__CircularEaseIn = 16,
	EControlRigAnimEasingType__CircularEaseOut = 17,
	EControlRigAnimEasingType__CircularEaseInOut = 18,
	EControlRigAnimEasingType__ExponentialEaseIn = 19,
	EControlRigAnimEasingType__ExponentialEaseOut = 20,
	EControlRigAnimEasingType__ExponentialEaseInOut = 21,
	EControlRigAnimEasingType__ElasticEaseIn = 22,
	EControlRigAnimEasingType__ElasticEaseOut = 23,
	EControlRigAnimEasingType__ElasticEaseInOut = 24,
	EControlRigAnimEasingType__BackEaseIn = 25,
	EControlRigAnimEasingType__BackEaseOut = 26,
	EControlRigAnimEasingType__BackEaseInOut = 27,
	EControlRigAnimEasingType__BounceEaseIn = 28,
	EControlRigAnimEasingType__BounceEaseOut = 29,
	EControlRigAnimEasingType__BounceEaseInOut = 30,
	EControlRigAnimEasingType__EControlRigAnimEasingType_MAX = 31,
};

enum class ECRSimPointIntegrateType : uint8
{
	ECRSimPointIntegrateType__Verlet = 0,
	ECRSimPointIntegrateType__SemiExplicitEuler = 1,
	ECRSimPointIntegrateType__ECRSimPointIntegrateType_MAX = 2,
};

enum class ECRSimConstraintType : uint8
{
	ECRSimConstraintType__Distance = 0,
	ECRSimConstraintType__DistanceFromA = 1,
	ECRSimConstraintType__DistanceFromB = 2,
	ECRSimConstraintType__Plane    = 3,
	ECRSimConstraintType__ECRSimConstraintType_MAX = 4,
};

enum class ECRSimPointForceType : uint8
{
	ECRSimPointForceType__Direction = 0,
	ECRSimPointForceType__ECRSimPointForceType_MAX = 1,
};

enum class ECRSimSoftCollisionType : uint8
{
	ECRSimSoftCollisionType__Plane = 0,
	ECRSimSoftCollisionType__Sphere = 1,
	ECRSimSoftCollisionType__Cone  = 2,
	ECRSimSoftCollisionType__ECRSimSoftCollisionType_MAX = 3,
};

enum class EControlRigFKRigExecuteMode : uint8
{
	EControlRigFKRigExecuteMode__Replace = 0,
	EControlRigFKRigExecuteMode__Additive = 1,
	EControlRigFKRigExecuteMode__Direct = 2,
	EControlRigFKRigExecuteMode__Max = 3,
};

enum class ERigBoneType : uint8
{
	ERigBoneType__Imported         = 0,
	ERigBoneType__User             = 1,
	ERigBoneType__ERigBoneType_MAX = 2,
};

enum class ERigMetadataType : uint8
{
	ERigMetadataType__Bool         = 0,
	ERigMetadataType__BoolArray    = 1,
	ERigMetadataType__Float        = 2,
	ERigMetadataType__FloatArray   = 3,
	ERigMetadataType__Int32        = 4,
	ERigMetadataType__Int32Array   = 5,
	ERigMetadataType__Name         = 6,
	ERigMetadataType__NameArray    = 7,
	ERigMetadataType__Vector       = 8,
	ERigMetadataType__VectorArray  = 9,
	ERigMetadataType__Rotator      = 10,
	ERigMetadataType__RotatorArray = 11,
	ERigMetadataType__Quat         = 12,
	ERigMetadataType__QuatArray    = 13,
	ERigMetadataType__Transform    = 14,
	ERigMetadataType__TransformArray = 15,
	ERigMetadataType__LinearColor  = 16,
	ERigMetadataType__LinearColorArray = 17,
	ERigMetadataType__RigElementKey = 18,
	ERigMetadataType__RigElementKeyArray = 19,
	ERigMetadataType__Invalid      = 20,
	ERigMetadataType__ERigMetadataType_MAX = 21,
};

enum class ERigHierarchyNotification : uint8
{
	ERigHierarchyNotification__ElementAdded = 0,
	ERigHierarchyNotification__ElementRemoved = 1,
	ERigHierarchyNotification__ElementRenamed = 2,
	ERigHierarchyNotification__ElementSelected = 3,
	ERigHierarchyNotification__ElementDeselected = 4,
	ERigHierarchyNotification__ParentChanged = 5,
	ERigHierarchyNotification__HierarchyReset = 6,
	ERigHierarchyNotification__ControlSettingChanged = 7,
	ERigHierarchyNotification__ControlVisibilityChanged = 8,
	ERigHierarchyNotification__ControlDrivenListChanged = 9,
	ERigHierarchyNotification__ControlShapeTransformChanged = 10,
	ERigHierarchyNotification__ParentWeightsChanged = 11,
	ERigHierarchyNotification__InteractionBracketOpened = 12,
	ERigHierarchyNotification__InteractionBracketClosed = 13,
	ERigHierarchyNotification__Max = 14,
};

enum class ERigEvent : uint8
{
	ERigEvent__None                = 0,
	ERigEvent__RequestAutoKey      = 1,
	ERigEvent__OpenUndoBracket     = 2,
	ERigEvent__CloseUndoBracket    = 3,
	ERigEvent__Max                 = 4,
};

enum class EControlRigSetKey : uint8
{
	EControlRigSetKey__DoNotCare   = 0,
	EControlRigSetKey__Always      = 1,
	EControlRigSetKey__Never       = 2,
	EControlRigSetKey__EControlRigSetKey_MAX = 3,
};

enum class ERigControlValueType : uint8
{
	ERigControlValueType__Initial  = 0,
	ERigControlValueType__Current  = 1,
	ERigControlValueType__Minimum  = 2,
	ERigControlValueType__Maximum  = 3,
	ERigControlValueType__ERigControlValueType_MAX = 4,
};

enum class ERigSpaceType : uint8
{
	ERigSpaceType__Global          = 0,
	ERigSpaceType__Bone            = 1,
	ERigSpaceType__Control         = 2,
	ERigSpaceType__Space           = 3,
	ERigSpaceType__ERigSpaceType_MAX = 4,
};

enum class EMovieSceneControlRigSpaceType : uint8
{
	EMovieSceneControlRigSpaceType__Parent = 0,
	EMovieSceneControlRigSpaceType__World = 1,
	EMovieSceneControlRigSpaceType__ControlRig = 2,
	EMovieSceneControlRigSpaceType__EMovieSceneControlRigSpaceType_MAX = 3,
};

enum class ERigUnitDebugPointMode : uint8
{
	ERigUnitDebugPointMode__Point  = 0,
	ERigUnitDebugPointMode__Vector = 1,
	ERigUnitDebugPointMode__Max    = 2,
};

enum class ERigUnitDebugTransformMode : uint8
{
	ERigUnitDebugTransformMode__Point = 0,
	ERigUnitDebugTransformMode__Axes = 1,
	ERigUnitDebugTransformMode__Box = 2,
	ERigUnitDebugTransformMode__Max = 3,
};

enum class ERigUnitVisualDebugPointMode : uint8
{
	ERigUnitVisualDebugPointMode__Point = 0,
	ERigUnitVisualDebugPointMode__Vector = 1,
	ERigUnitVisualDebugPointMode__Max = 2,
};

enum class EAimMode : uint8
{
	EAimMode__AimAtTarget          = 0,
	EAimMode__OrientToTarget       = 1,
	EAimMode__MAX                  = 2,
};

enum class EApplyTransformMode : uint8
{
	EApplyTransformMode__Override  = 0,
	EApplyTransformMode__Additive  = 1,
	EApplyTransformMode__Max       = 2,
};

enum class ERigSwitchParentMode : uint8
{
	ERigSwitchParentMode__World    = 0,
	ERigSwitchParentMode__DefaultParent = 1,
	ERigSwitchParentMode__ParentItem = 2,
	ERigSwitchParentMode__ERigSwitchParentMode_MAX = 3,
};

enum class EControlRigCurveAlignment : uint8
{
	EControlRigCurveAlignment__Front = 0,
	EControlRigCurveAlignment__Stretched = 1,
	EControlRigCurveAlignment__EControlRigCurveAlignment_MAX = 2,
};

enum class EControlRigModifyBoneMode : uint8
{
	EControlRigModifyBoneMode__OverrideLocal = 0,
	EControlRigModifyBoneMode__OverrideGlobal = 1,
	EControlRigModifyBoneMode__AdditiveLocal = 2,
	EControlRigModifyBoneMode__AdditiveGlobal = 3,
	EControlRigModifyBoneMode__Max = 4,
};

enum class EConstraintInterpType : uint8
{
	EConstraintInterpType__Average = 0,
	EConstraintInterpType__Shortest = 1,
	EConstraintInterpType__Max     = 2,
};

enum class ERBFKernelType : uint8
{
	ERBFKernelType__Gaussian       = 0,
	ERBFKernelType__Exponential    = 1,
	ERBFKernelType__Linear         = 2,
	ERBFKernelType__Cubic          = 3,
	ERBFKernelType__Quintic        = 4,
	ERBFKernelType__ERBFKernelType_MAX = 5,
};

enum class ERBFQuatDistanceType : uint8
{
	ERBFQuatDistanceType__Euclidean = 0,
	ERBFQuatDistanceType__ArcLength = 1,
	ERBFQuatDistanceType__SwingAngle = 2,
	ERBFQuatDistanceType__TwistAngle = 3,
	ERBFQuatDistanceType__ERBFQuatDistanceType_MAX = 4,
};

enum class ERBFVectorDistanceType : uint8
{
	ERBFVectorDistanceType__Euclidean = 0,
	ERBFVectorDistanceType__Manhattan = 1,
	ERBFVectorDistanceType__ArcLength = 2,
	ERBFVectorDistanceType__ERBFVectorDistanceType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementKey
struct FRigElementKey
{
public:
	enum class ERigElementType                   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1077[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigBaseElement
struct FRigBaseElement
{
public:
	uint8                                        Pad_1078[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Key;                                               // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1079[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NameString;                                        // 0x18(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Index;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SubIndex;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSelected;                                         // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_107A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CreatedAtInstructionIndex;                         // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_107B[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigComputedTransform
struct FRigComputedTransform
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_107D[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ControlRig.RigLocalAndGlobalTransform
struct FRigLocalAndGlobalTransform
{
public:
	struct FRigComputedTransform                 Local;                                             // 0x0(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigComputedTransform                 Global;                                            // 0x70(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct ControlRig.RigCurrentAndInitialTransform
struct FRigCurrentAndInitialTransform
{
public:
	struct FRigLocalAndGlobalTransform           Current;                                           // 0x0(0xE0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigLocalAndGlobalTransform           Initial;                                           // 0xE0(0xE0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x200 (0x2F0 - 0xF0)
// ScriptStruct ControlRig.RigTransformElement
struct FRigTransformElement : public FRigBaseElement
{
public:
	struct FRigCurrentAndInitialTransform        Pose;                                              // 0xF0(0x1C0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_107E[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x3F0 - 0x2F0)
// ScriptStruct ControlRig.RigMultiParentElement
struct FRigMultiParentElement : public FRigTransformElement
{
public:
	uint8                                        Pad_107F[0x100];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigControlLimitEnabled
struct FRigControlLimitEnabled
{
public:
	bool                                         bMinimum;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaximum;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValueStorage
struct FRigControlValueStorage
{
public:
	float                                        Float00;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float01;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float02;                                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float03;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float10;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float11;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float12;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float13;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float20;                                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float21;                                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float22;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float23;                                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float30;                                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float31;                                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float32;                                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float33;                                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float00_2;                                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float01_2;                                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float02_2;                                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float03_2;                                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float10_2;                                         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float11_2;                                         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float12_2;                                         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float13_2;                                         // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float20_2;                                         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float21_2;                                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float22_2;                                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float23_2;                                         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float30_2;                                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float31_2;                                         // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float32_2;                                         // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float33_2;                                         // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1082[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigControlValue
struct FRigControlValue
{
public:
	struct FRigControlValueStorage               FloatStorage;                                      // 0x0(0x84)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1083[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Storage;                                           // 0x90(0x60)(Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigControlElementCustomization
struct FRigControlElementCustomization
{
public:
	TArray<struct FRigElementKey>                AvailableSpaces;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                RemovedSpaces;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x280 (0x280 - 0x0)
// ScriptStruct ControlRig.RigControlSettings
struct FRigControlSettings
{
public:
	enum class ERigControlAnimationType          AnimationType;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlType                   ControlType;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1084[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayName;                                       // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurve;                                          // 0xD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1085[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigControlLimitEnabled>       LimitEnabled;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1086[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      MinimumValue;                                      // 0x30(0xF0)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      MaximumValue;                                      // 0x120(0xF0)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShapeVisible;                                     // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x211(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1088[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ShapeName;                                         // 0x214(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShapeColor;                                        // 0x21C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTransientControl;                               // 0x22C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 ControlEnum;                                       // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlElementCustomization       Customization;                                     // 0x238(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                DrivenControls;                                    // 0x258(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_108B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bGroupWithParentControl;                           // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimatable;                                       // 0x279(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShapeEnabled;                                     // 0x27A(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108D[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRig.RigPreferredEulerAngles
struct FRigPreferredEulerAngles
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_108F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Current;                                           // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Initial;                                           // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x640 (0xA30 - 0x3F0)
// ScriptStruct ControlRig.RigControlElement
struct FRigControlElement : public FRigMultiParentElement
{
public:
	struct FRigControlSettings                   Settings;                                          // 0x3F0(0x280)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigCurrentAndInitialTransform        Offset;                                            // 0x670(0x1C0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigCurrentAndInitialTransform        Shape;                                             // 0x830(0x1C0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigPreferredEulerAngles              PreferredEulerAngles;                              // 0x9F0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1092[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntry
struct FRigInfluenceEntry
{
public:
	struct FRigElementKey                        Source;                                            // 0x0(0xC)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1093[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x10(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMap
struct FRigInfluenceMap
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FRigInfluenceEntry>            Entries;                                           // 0x8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FRigElementKey, int32>           KeyToIndex;                                        // 0x18(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMapPerEvent
struct FRigInfluenceMapPerEvent
{
public:
	TArray<struct FRigInfluenceMap>              Maps;                                              // 0x0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, int32>                     EventToIndex;                                      // 0x10(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ControlRig.ControlRigDrawInstruction
struct FControlRigDrawInstruction
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigDrawSettings           PrimitiveType;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1095[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       Positions;                                         // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1096[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1097[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ControlRigDrawContainer
struct FControlRigDrawContainer
{
public:
	uint8                                        Pad_1099[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FControlRigDrawInstruction>    Instructions;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigHierarchySettings
struct FRigHierarchySettings
{
public:
	int32                                        ProceduralElementLimit;                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit
struct FRigUnit : public FRigVMStruct
{
public:
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.ControlRigExecuteContext
struct FControlRigExecuteContext : public FRigVMExecuteContext
{
public:
	uint8                                        Pad_109F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnitMutable
struct FRigUnitMutable : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x38)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
struct FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.CachedRigElement
struct FCachedRigElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       Index;                                             // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10A0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ContainerVersion;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10A1[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
struct FRigUnit_FitChainToCurve_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       ItemPositions;                                     // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemSegments;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       CurvePositions;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                CurveSegments;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationA;                                     // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationB;                                     // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRotationT;                                     // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
struct FRigUnit_FitChainToCurve_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          CurveColor;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SegmentsColor;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
struct FRigUnit_FitChainToCurve_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A5[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigElementKeyCollection
struct FRigElementKeyCollection
{
public:
	TArray<struct FRigElementKey>                Keys;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x148 - 0x8)
// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{
public:
	bool                                         bAdditive;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBoneFilter;                                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputBlendPose                       BoneFilter;                                        // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Weight;                                            // 0x20(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneEvaluationOperand          Operand;                                           // 0x130(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigTransformStackEntry
struct FRigTransformStackEntry
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigTransformStackEntryType       EntryType;                                         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigTransformType                 TransformType;                                     // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OldTransform;                                      // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            NewTransform;                                      // 0x70(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        Callstack;                                         // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x2F8 - 0x2F0)
// ScriptStruct ControlRig.RigSingleParentElement
struct FRigSingleParentElement : public FRigTransformElement
{
public:
	uint8                                        Pad_10AC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementWeight
struct FRigElementWeight
{
public:
	float                                        Location;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigElementParentConstraint
struct FRigElementParentConstraint
{
public:
	uint8                                        Pad_10AD[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x300 - 0x2F8)
// ScriptStruct ControlRig.RigBoneElement
struct FRigBoneElement : public FRigSingleParentElement
{
public:
	enum class ERigBoneType                      BoneType;                                          // 0x2F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x3F0 - 0x3F0)
// ScriptStruct ControlRig.RigNullElement
struct FRigNullElement : public FRigMultiParentElement
{
public:
};

// 0x8 (0xF8 - 0xF0)
// ScriptStruct ControlRig.RigCurveElement
struct FRigCurveElement : public FRigBaseElement
{
public:
	uint8                                        Pad_10B0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigRigidBodySettings
struct FRigRigidBodySettings
{
public:
	float                                        Mass;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x300 - 0x2F8)
// ScriptStruct ControlRig.RigRigidBodyElement
struct FRigRigidBodyElement : public FRigSingleParentElement
{
public:
	struct FRigRigidBodySettings                 Settings;                                          // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x310 - 0x2F8)
// ScriptStruct ControlRig.RigReferenceElement
struct FRigReferenceElement : public FRigSingleParentElement
{
public:
	uint8                                        Pad_10B2[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x200 (0x200 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
struct FRigHierarchyCopyPasteContentPerElement
{
public:
	struct FRigElementKey                        Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Content;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Parents;                                           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementWeight>             ParentWeights;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigCurrentAndInitialTransform        Pose;                                              // 0x40(0x1C0)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
struct FRigHierarchyCopyPasteContent
{
public:
	TArray<struct FRigHierarchyCopyPasteContentPerElement> Elements;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class ERigElementType>           Types;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Contents;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    LocalTransforms;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    GlobalTransforms;                                  // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimBase
struct FRigUnit_AnimBase : public FRigUnit
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugBase
struct FRigUnit_DebugBase : public FRigUnit
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
struct FRigUnit_DebugBaseMutable : public FRigUnitMutable
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HighlevelBase
struct FRigUnit_HighlevelBase : public FRigUnit
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBase
struct FRigUnit_MathBase : public FRigUnit
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_MathMutableBase
struct FRigUnit_MathMutableBase : public FRigUnitMutable
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_SimBase
struct FRigUnit_SimBase : public FRigUnit
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_SimBaseMutable
struct FRigUnit_SimBaseMutable : public FRigUnitMutable
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.StructReference
struct FStructReference
{
public:
	uint8                                        Pad_10B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.ControlRigIOSettings
struct FControlRigIOSettings
{
public:
	bool                                         bUpdatePose;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateCurves;                                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigAnimNodeEventName
struct FControlRigAnimNodeEventName
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x270 - 0x58)
// ScriptStruct ControlRig.AnimNode_ControlRigBase
struct FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{
public:
	struct FPoseLink                             Source;                                            // 0x58(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bResetInputPoseToInitial;                          // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferInputPose;                                // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferInputCurves;                              // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferPoseInGlobalSpace;                        // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FBoneReference>                InputBonesToTransfer;                              // 0x70(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_10BC[0x1C0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UNodeMappingContainer>  NodeMappingContainer;                              // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FControlRigIOSettings                 InputSettings;                                     // 0x248(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FControlRigIOSettings                 OutputSettings;                                    // 0x24A(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bExecute;                                          // 0x24C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10BE[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FControlRigAnimNodeEventName>  EventQueue;                                        // 0x258(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_10BF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x200 (0x470 - 0x270)
// ScriptStruct ControlRig.AnimNode_ControlRig
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x270(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UControlRig*                           ControlRig;                                        // 0x278(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Alpha;                                             // 0x280(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x284(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x285(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSetRefPoseFromSkeleton : 1;                       // Mask: 0x2, PropSize: 0x10x285(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_9E : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_10C1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x288(0x8)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x290(0x48)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  AlphaCurveName;                                    // 0x2D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x2E0(0x30)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               InputMapping;                                      // 0x310(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               OutputMapping;                                     // 0x360(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_10C2[0xB0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LODThreshold;                                      // 0x460(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10C3[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x278 - 0x270)
// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
struct FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{
public:
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA8 (0x920 - 0x878)
// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
struct FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_10C4[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedElement
struct FControlRigComponentMappedElement
{
public:
	struct FComponentReference                   ComponentReference;                                // 0x0(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        TransformIndex;                                    // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TransformName;                                     // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ElementName;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C6[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Offset;                                            // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0xB8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ElementIndex;                                      // 0xC0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubIndex;                                          // 0xC4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedComponent
struct FControlRigComponentMappedComponent
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedBone
struct FControlRigComponentMappedBone
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Target;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedCurve
struct FControlRigComponentMappedCurve
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Target;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x1D0 - 0x0)
// ScriptStruct ControlRig.ControlShapeActorCreationParam
struct FControlShapeActorCreationParam
{
public:
	uint8                                        Pad_10CB[0x1D0];                                   // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ControlRig.ControlRigShapeDefinition
struct FControlRigShapeDefinition
{
public:
	class FName                                  ShapeName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10CD[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.ControlRigValidationContext
struct FControlRigValidationContext
{
public:
	uint8                                        Pad_10CE[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.ControlRigDrawInterface
struct FControlRigDrawInterface : public FControlRigDrawContainer
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.CRFourPointBezier
struct FCRFourPointBezier
{
public:
	struct FVector                               A;                                                 // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               C;                                                 // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               D;                                                 // 0x48(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.CRSimContainer
struct FCRSimContainer
{
public:
	uint8                                        Pad_10CF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeStep;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedTime;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeftForStep;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.CRSimLinearSpring
struct FCRSimLinearSpring
{
public:
	int32                                        SubjectA;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubjectB;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Equilibrium;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.CRSimPoint
struct FCRSimPoint
{
public:
	float                                        Mass;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearDamping;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InheritMotion;                                     // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearVelocity;                                    // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.CRSimPointConstraint
struct FCRSimPointConstraint
{
public:
	enum class ECRSimConstraintType              Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SubjectA;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubjectB;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DataA;                                             // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DataB;                                             // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.CRSimPointForce
struct FCRSimPointForce
{
public:
	enum class ECRSimPointForceType              ForceType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalize;                                        // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.CRSimSoftCollision
struct FCRSimSoftCollision
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECRSimSoftCollisionType           ShapeType;                                         // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDistance;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         FalloffType;                                       // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Coefficient;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInverted;                                         // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DC[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x78 - 0x18)
// ScriptStruct ControlRig.CRSimPointContainer
struct FCRSimPointContainer : public FCRSimContainer
{
public:
	TArray<struct FCRSimPoint>                   Points;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimLinearSpring>            Springs;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointConstraint>         Constraints;                                       // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPoint>                   PreviousStep;                                      // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct ControlRig.ConstraintNodeData
struct FConstraintNodeData
{
public:
	struct FTransform                            RelativeParent;                                    // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FConstraintOffset                     ConstraintOffset;                                  // 0x60(0xC0)(NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LinkedNode;                                        // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransformConstraint>          Constraints;                                       // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10E2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x88 - 0x78)
// ScriptStruct ControlRig.AnimationHierarchy
struct FAnimationHierarchy : public FNodeHierarchyWithUserData
{
public:
	TArray<struct FConstraintNodeData>           UserData;                                          // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigElement
struct FRigElement
{
public:
	uint8                                        Pad_10E4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x158 (0x170 - 0x18)
// ScriptStruct ControlRig.RigBone
struct FRigBone : public FRigElement
{
public:
	class FName                                  ParentName;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E8[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x30(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            GlobalTransform;                                   // 0x90(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0xF0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Dependents;                                        // 0x150(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	enum class ERigBoneType                      Type;                                              // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E9[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigBoneHierarchy
struct FRigBoneHierarchy
{
public:
	TArray<struct FRigBone>                      Bones;                                             // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x4F8 (0x510 - 0x18)
// ScriptStruct ControlRig.RigControl
struct FRigControl : public FRigElement
{
public:
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayName;                                       // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentName;                                        // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpaceName;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpaceIndex;                                        // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigControlValue                      InitialValue;                                      // 0xA0(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      Value;                                             // 0x190(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurve;                                          // 0x281(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimatable;                                       // 0x282(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitTranslation;                                 // 0x283(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitRotation;                                    // 0x284(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitScale;                                       // 0x285(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x286(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EE[0x9];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      MinimumValue;                                      // 0x290(0xF0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlValue                      MaximumValue;                                      // 0x380(0xF0)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGizmoEnabled;                                     // 0x470(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGizmoVisible;                                     // 0x471(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GizmoName;                                         // 0x474(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GizmoTransform;                                    // 0x480(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GizmoColor;                                        // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Dependents;                                        // 0x4F0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bIsTransientControl;                               // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 ControlEnum;                                       // 0x508(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigControlHierarchy
struct FRigControlHierarchy
{
public:
	TArray<struct FRigControl>                   Controls;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct ControlRig.RigCurve
struct FRigCurve : public FRigElement
{
public:
	float                                        Value;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigCurveContainer
struct FRigCurveContainer
{
public:
	TArray<struct FRigCurve>                     Curves;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xD8 (0xF0 - 0x18)
// ScriptStruct ControlRig.RigSpace
struct FRigSpace : public FRigElement
{
public:
	enum class ERigSpaceType                     SpaceType;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParentName;                                        // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InitialTransform;                                  // 0x30(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x90(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigSpaceHierarchy
struct FRigSpaceHierarchy
{
public:
	TArray<struct FRigSpace>                     Spaces;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigHierarchyContainer
struct FRigHierarchyContainer
{
public:
	struct FRigBoneHierarchy                     BoneHierarchy;                                     // 0x0(0x10)(NativeAccessSpecifierPublic)
	struct FRigSpaceHierarchy                    SpaceHierarchy;                                    // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct FRigControlHierarchy                  ControlHierarchy;                                  // 0x20(0x10)(NativeAccessSpecifierPublic)
	struct FRigCurveContainer                    CurveContainer;                                    // 0x30(0x10)(NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ControlRig.RigHierarchyRef
struct FRigHierarchyRef
{
public:
	uint8                                        Pad_10FB[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigControlModifiedContext
struct FRigControlModifiedContext
{
public:
	uint8                                        Pad_10FC[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigEventContext
struct FRigEventContext
{
public:
	uint8                                        Pad_10FD[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigMirrorSettings
struct FRigMirrorSettings
{
public:
	enum class EAxis                             MirrorAxis;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SearchString;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReplaceString;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigBaseMetadata
struct FRigBaseMetadata
{
public:
	uint8                                        Pad_10FF[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERigMetadataType                  Type;                                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1100[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigBoolMetadata
struct FRigBoolMetadata : public FRigBaseMetadata
{
public:
	bool                                         Value;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1101[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigBoolArrayMetadata
struct FRigBoolArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<bool>                                 Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigFloatMetadata
struct FRigFloatMetadata : public FRigBaseMetadata
{
public:
	float                                        Value;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1102[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigFloatArrayMetadata
struct FRigFloatArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<float>                                Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigInt32Metadata
struct FRigInt32Metadata : public FRigBaseMetadata
{
public:
	int32                                        Value;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1105[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigInt32ArrayMetadata
struct FRigInt32ArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<int32>                                Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigNameMetadata
struct FRigNameMetadata : public FRigBaseMetadata
{
public:
	class FName                                  Value;                                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigNameArrayMetadata
struct FRigNameArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<class FName>                          Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ControlRig.RigVectorMetadata
struct FRigVectorMetadata : public FRigBaseMetadata
{
public:
	struct FVector                               Value;                                             // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigVectorArrayMetadata
struct FRigVectorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FVector>                       Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ControlRig.RigRotatorMetadata
struct FRigRotatorMetadata : public FRigBaseMetadata
{
public:
	struct FRotator                              Value;                                             // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigRotatorArrayMetadata
struct FRigRotatorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FRotator>                      Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct ControlRig.RigQuatMetadata
struct FRigQuatMetadata : public FRigBaseMetadata
{
public:
	uint8                                        Pad_110D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x30(0x20)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigQuatArrayMetadata
struct FRigQuatArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FQuat>                         Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x68 (0x90 - 0x28)
// ScriptStruct ControlRig.RigTransformMetadata
struct FRigTransformMetadata : public FRigBaseMetadata
{
public:
	uint8                                        Pad_110E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x30(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigTransformArrayMetadata
struct FRigTransformArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FTransform>                    Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigLinearColorMetadata
struct FRigLinearColorMetadata : public FRigBaseMetadata
{
public:
	struct FLinearColor                          Value;                                             // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigLinearColorArrayMetadata
struct FRigLinearColorArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FLinearColor>                  Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigElementKeyMetadata
struct FRigElementKeyMetadata : public FRigBaseMetadata
{
public:
	struct FRigElementKey                        Value;                                             // 0x28(0xC)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_110F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigElementKeyArrayMetadata
struct FRigElementKeyArrayMetadata : public FRigBaseMetadata
{
public:
	TArray<struct FRigElementKey>                Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigPoseElement
struct FRigPoseElement
{
public:
	struct FCachedRigElement                     Index;                                             // 0x0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            GlobalTransform;                                   // 0x20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x80(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1110[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigPose
struct FRigPose
{
public:
	TArray<struct FRigPoseElement>               Elements;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        HierarchyTopologyVersion;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoseHash;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1112[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntryModifier
struct FRigInfluenceEntryModifier
{
public:
	TArray<struct FRigElementKey>                AffectedList;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
struct FAnimNode_ControlRigInputPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1113[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0x920 - 0x878)
// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
struct FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_1114[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReference
struct FControlRigSequenceObjectReference
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
struct FControlRigSequenceObjectReferences
{
public:
	TArray<struct FControlRigSequenceObjectReference> Array;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
struct FControlRigSequenceObjectReferenceMap
{
public:
	TArray<struct FGuid>                         BindingIds;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FControlRigSequenceObjectReferences> References;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ControlRig.EnumParameterNameAndCurve
struct FEnumParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneByteChannel                ParameterCurve;                                    // 0x8(0x108)(NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct ControlRig.IntegerParameterNameAndCurve
struct FIntegerParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneIntegerChannel             ParameterCurve;                                    // 0x8(0x100)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
struct FMovieSceneControlRigSpaceBaseKey
{
public:
	enum class EMovieSceneControlRigSpaceType    SpaceType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1115[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        ControlRigElement;                                 // 0x4(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
struct FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneControlRigSpaceBaseKey> KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1116[0xA0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct ControlRig.SpaceControlNameAndChannel
struct FSpaceControlNameAndChannel
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneControlRigSpaceChannel     SpaceCurve;                                        // 0x8(0x110)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.ChannelMapInfo
struct FChannelMapInfo
{
public:
	int32                                        ControlIndex;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalChannelIndex;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentControlIndex;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ChannelTypeName;                                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoesHaveSpace;                                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1117[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SpaceChannelIndex;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskIndex;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CategoryIndex;                                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1118[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint32>                               ConstraintsIndex;                                  // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0xC0 - 0x80)
// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
struct FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{
public:
	TArray<struct FEnumParameterNameAndCurve>    Enums;                                             // 0x80(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FIntegerParameterNameAndCurve> Integers;                                          // 0x90(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpaceControlNameAndChannel>   Spaces;                                            // 0xA0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FConstraintAndActiveChannel>   Constraints;                                       // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
struct FControlRigSettingsPerPinBool
{
public:
	TMap<class FString, bool>                    Values;                                            // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x2A0 (0x2A0 - 0x0)
// ScriptStruct ControlRig.RigControlCopy
struct FRigControlCopy
{
public:
	uint8                                        Pad_1119[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigControlValue                      Value;                                             // 0x20(0xF0)(NoDestructor, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ParentKey;                                         // 0x110(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x120(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            ParentTransform;                                   // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x1E0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            GlobalTransform;                                   // 0x240(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.ControlRigControlPose
struct FControlRigControlPose
{
public:
	TArray<struct FRigControlCopy>               CopyOfControls;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_111C[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatchFactory
struct FRigDispatchFactory : public FRigVMDispatchFactory
{
public:
};

// 0x38 (0x50 - 0x18)
// ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
struct FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
{
public:
	uint8                                        Pad_111D[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
struct FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
struct FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimEasingType
struct FRigUnit_AnimEasingType : public FRigUnit_AnimBase
{
public:
	enum class EControlRigAnimEasingType         Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1120[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimEasing
struct FRigUnit_AnimEasing : public FRigUnit_AnimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         Type;                                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1121[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SourceMinimum;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1122[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimEvalRichCurve
struct FRigUnit_AnimEvalRichCurve : public FRigUnit_AnimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1123[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    Curve;                                             // 0x10(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	float                                        SourceMinimum;                                     // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1124[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_AnimRichCurve
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase
{
public:
	struct FRuntimeFloatCurve                    Curve;                                             // 0x8(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetDeltaTime
struct FRigUnit_GetDeltaTime : public FRigUnit_AnimBase
{
public:
	float                                        Result;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1125[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetWorldTime
struct FRigUnit_GetWorldTime : public FRigUnit_AnimBase
{
public:
	float                                        Year;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Month;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Day;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeekDay;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hours;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minutes;                                           // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverallSeconds;                                    // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_FramesToSeconds
struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase
{
public:
	float                                        Frames;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_SecondsToFrames
struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase
{
public:
	float                                        Seconds;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frames;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
struct FRigUnit_SphereTraceWorld : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 Channel;                                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1127[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1128[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
struct FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Radius;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
struct FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_112E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               HitLocation;                                       // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x180 - 0x8)
// ScriptStruct ControlRig.RigUnit_Control
struct FRigUnit_Control : public FRigUnit
{
public:
	struct FEulerTransform                       Transform;                                         // 0x8(0x48)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Base;                                              // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitTransform;                                     // 0xB0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x110(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0x170(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1131[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x1E0 - 0x180)
// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
struct FRigUnit_Control_StaticMesh : public FRigUnit_Control
{
public:
	struct FTransform                            MeshTransform;                                     // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatch_CoreBase
struct FRigDispatch_CoreBase : public FRigDispatchFactory
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatch_CoreEquals
struct FRigDispatch_CoreEquals : public FRigDispatch_CoreBase
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatch_CoreNotEquals
struct FRigDispatch_CoreNotEquals : public FRigDispatch_CoreEquals
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_NameBase
struct FRigUnit_NameBase : public FRigUnit
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_NameConcat
struct FRigUnit_NameConcat : public FRigUnit_NameBase
{
public:
	class FName                                  A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_NameTruncate
struct FRigUnit_NameTruncate : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromEnd;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1134[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Remainder;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Chopped;                                           // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_NameReplace
struct FRigUnit_NameReplace : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_EndsWith
struct FRigUnit_EndsWith : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Ending;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1137[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_StartsWith
struct FRigUnit_StartsWith : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Start;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_Contains
struct FRigUnit_Contains : public FRigUnit_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Search;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatch_Print
struct FRigDispatch_Print : public FRigDispatchFactory
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringBase
struct FRigUnit_StringBase : public FRigUnit
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringConcat
struct FRigUnit_StringConcat : public FRigUnit_StringBase
{
public:
	class FString                                A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringTruncate
struct FRigUnit_StringTruncate : public FRigUnit_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromEnd;                                           // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Remainder;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Chopped;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringReplace
struct FRigUnit_StringReplace : public FRigUnit_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Old;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                New;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringEndsWith
struct FRigUnit_StringEndsWith : public FRigUnit_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ending;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1140[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringStartsWith
struct FRigUnit_StringStartsWith : public FRigUnit_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Start;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1141[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringContains
struct FRigUnit_StringContains : public FRigUnit_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Search;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1144[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringLength
struct FRigUnit_StringLength : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Length;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1149[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringTrimWhitespace
struct FRigUnit_StringTrimWhitespace : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringToUppercase
struct FRigUnit_StringToUppercase : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringToLowercase
struct FRigUnit_StringToLowercase : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringReverse
struct FRigUnit_StringReverse : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reverse;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringLeft
struct FRigUnit_StringLeft : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringRight
struct FRigUnit_StringRight : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringMiddle
struct FRigUnit_StringMiddle : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Start;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringFind
struct FRigUnit_StringFind : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Search;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1150[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index;                                             // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringSplit
struct FRigUnit_StringSplit : public FRigUnit_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringJoin
struct FRigUnit_StringJoin : public FRigUnit_StringBase
{
public:
	TArray<class FString>                        Values;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_StringPadInteger
struct FRigUnit_StringPadInteger : public FRigUnit_StringBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Digits;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatch_ToString
struct FRigDispatch_ToString : public FRigDispatchFactory
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigDispatch_FromString
struct FRigDispatch_FromString : public FRigDispatchFactory
{
public:
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugBezier
struct FRigUnit_DebugBezier : public FRigUnit_DebugBaseMutable
{
public:
	struct FCRFourPointBezier                    Bezier;                                            // 0x40(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumU;                                          // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumU;                                          // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1158[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1159[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
struct FRigUnit_DebugBezierItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FCRFourPointBezier                    Bezier;                                            // 0x40(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumU;                                          // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumU;                                          // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0xC0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115B[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugHierarchy
struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
public:
	float                                        Scale;                                             // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x44(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115D[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugPose
struct FRigUnit_DebugPose : public FRigUnit_DebugBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x40(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xB4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115F[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0x100 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugLine
struct FRigUnit_DebugLine : public FRigUnit_DebugBaseMutable
{
public:
	struct FVector                               A;                                                 // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x84(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1161[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x90(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1162[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0x100 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
struct FRigUnit_DebugLineItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FVector                               A;                                                 // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x84(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x90(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1166[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugLineStrip
struct FRigUnit_DebugLineStrip : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x64(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1167[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1169[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
struct FRigUnit_DebugLineStripItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FVector>                       Points;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x64(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116B[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugPoint
struct FRigUnit_DebugPoint : public FRigUnit_DebugBase
{
public:
	struct FVector                               Vector;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugPointMode            Mode;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116E[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xF0 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugPointMutable
struct FRigUnit_DebugPointMutable : public FRigUnit_DebugBaseMutable
{
public:
	struct FVector                               Vector;                                            // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugPointMode            Mode;                                              // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x5C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x74(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1170[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1171[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x130 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugRectangle
struct FRigUnit_DebugRectangle : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0xC0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1174[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
struct FRigUnit_DebugRectangleItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0xB8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1175[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1176[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugArc
struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xC4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
struct FRigUnit_DebugArcItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0xC4(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117E[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x108 (0x110 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugTransform
struct FRigUnit_DebugTransform : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_1180[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1182[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x74(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1183[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xA0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1184[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
struct FRigUnit_DebugTransformMutable : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1185[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xA4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0xBC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1186[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1187[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
struct FRigUnit_DebugTransformMutableItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	struct FTransform                            Transform;                                         // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1189[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xA4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0xBC(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118C[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
struct FRigUnit_DebugTransformArrayMutable_WorkData
{
public:
	TArray<struct FTransform>                    DrawTransforms;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0x100 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
struct FRigUnit_DebugTransformArrayMutable : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x54(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x6C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118E[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_DebugTransformArrayMutable_WorkData WorkData;                                          // 0xE8(0x10)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1190[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0x100 - 0x40)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
struct FRigUnit_DebugTransformArrayMutableItemSpace : public FRigUnit_DebugBaseMutable
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1191[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x64(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x7C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1192[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x90(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1193[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
struct FRigUnit_StartProfilingTimer : public FRigUnit_DebugBaseMutable
{
public:
};

// 0x20 (0x60 - 0x40)
// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
public:
	int32                                        NumberOfMeasurements;                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1194[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Prefix;                                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedTime;                                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeasurementsLeft;                                  // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugVector
struct FRigUnit_VisualDebugVector : public FRigUnit_DebugBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1195[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1196[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
struct FRigUnit_VisualDebugVectorItemSpace : public FRigUnit_DebugBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1198[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x3C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_1199[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119B[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
struct FRigUnit_VisualDebugQuatItemSpace : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_119C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x3C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_119E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
struct FRigUnit_VisualDebugTransform : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_11A0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x7C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A2[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
struct FRigUnit_VisualDebugTransformItemSpace : public FRigUnit_DebugBase
{
public:
	uint8                                        Pad_11A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Space;                                             // 0x7C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertTransform
struct FRigUnit_ConvertTransform : public FRigUnit
{
public:
	uint8                                        Pad_11A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Input;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEulerTransform                       Result;                                            // 0x70(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A8[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
struct FRigUnit_ConvertEulerTransform : public FRigUnit
{
public:
	struct FEulerTransform                       Input;                                             // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotation
struct FRigUnit_ConvertRotation : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
struct FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
struct FRigUnit_ConvertQuaternion : public FRigUnit
{
public:
	uint8                                        Pad_11AA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AC[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
struct FRigUnit_ConvertVectorToRotation : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
struct FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
struct FRigUnit_ConvertRotationToVector : public FRigUnit
{
public:
	struct FRotator                              Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
struct FRigUnit_ConvertQuaternionToVector : public FRigUnit
{
public:
	uint8                                        Pad_11B1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
struct FRigUnit_ToSwingAndTwist : public FRigUnit
{
public:
	uint8                                        Pad_11B3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Swing;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Twist;                                             // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
struct FRigUnit_BinaryFloatOp : public FRigUnit
{
public:
	float                                        Argument0;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Argument1;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
struct FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
struct FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
struct FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
struct FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Clamp_Float
struct FRigUnit_Clamp_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MapRange_Float
struct FRigUnit_MapRange_Float : public FRigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinIn;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxIn;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinOut;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOut;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
struct FRigUnit_BinaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_11C0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument0;                                         // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Argument1;                                         // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
struct FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
struct FRigUnit_UnaryQuaternionOp : public FRigUnit
{
public:
	uint8                                        Pad_11C2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument;                                          // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_InverseQuaterion
struct FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
struct FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{
public:
	uint8                                        Pad_11C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Argument;                                          // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Axis;                                              // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
struct FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C9[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
struct FRigUnit_QuaternionToAngle : public FRigUnit
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Argument;                                          // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11CB[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
struct FRigUnit_BinaryTransformOp : public FRigUnit
{
public:
	uint8                                        Pad_11CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Argument0;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Argument1;                                         // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_MultiplyTransform
struct FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
struct FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
struct FRigUnit_BinaryVectorOp : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Argument1;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
struct FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Add_VectorVector
struct FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
struct FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
struct FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
struct FRigUnit_Distance_VectorVector : public FRigUnit
{
public:
	struct FVector                               Argument0;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Argument1;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11DC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.AimTarget
struct FAimTarget
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11DD[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AlignVector;                                       // 0x70(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11DE[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
struct FRigUnit_AimConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0xB0 - 0x40)
// ScriptStruct ControlRig.RigUnit_AimConstraint
struct FRigUnit_AimConstraint : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimMode                          AimMode;                                           // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimMode                          UpMode;                                            // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AimVector;                                         // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpVector;                                          // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAimTarget>                    AimTargets;                                        // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAimTarget>                    UpTargets;                                         // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimConstraint_WorkData       WorkData;                                          // 0xA0(0x10)(NativeAccessSpecifierPublic)
};

// 0xF0 (0x130 - 0x40)
// ScriptStruct ControlRig.RigUnit_ApplyFK
struct FRigUnit_ApplyFK : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11E8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0xB0(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EApplyTransformMode               ApplyTransformMode;                                // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               ApplyTransformSpace;                               // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EB[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0xC0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseJoint;                                         // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11EF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.BlendTarget
struct FBlendTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F1[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_BlendTransform
struct FRigUnit_BlendTransform : public FRigUnit
{
public:
	uint8                                        Pad_11F6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Source;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FBlendTarget>                  Targets;                                           // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x120 - 0x40)
// ScriptStruct ControlRig.RigUnit_GetJointTransform
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformGetterType              Type;                                              // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               TransformSpace;                                    // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseJoint;                                         // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1204[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Output;                                            // 0xC0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x310 (0x350 - 0x40)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
struct FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{
public:
	class FName                                  StartJoint;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndJoint;                                          // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleTarget;                                        // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spin;                                              // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1208[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            EndEffector;                                       // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IKBlend;                                           // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120B[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartJointFKTransform;                             // 0xE0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            MidJointFKTransform;                               // 0x140(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            EndJointFKTransform;                               // 0x1A0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PreviousFKIKBlend;                                 // 0x200(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1210[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            StartJointIKTransform;                             // 0x210(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            MidJointIKTransform;                               // 0x270(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTransform                            EndJointIKTransform;                               // 0x2D0(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        StartJointIndex;                                   // 0x330(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MidJointIndex;                                     // 0x334(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EndJointIndex;                                     // 0x338(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpperLimbLength;                                   // 0x33C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LowerLimbLength;                                   // 0x340(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1216[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
struct FRigUnit_DrawContainerGetInstruction : public FRigUnit
{
public:
	class FName                                  InstructionName;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x58 - 0x40)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
struct FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x50 - 0x40)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
struct FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1220[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0xB0 - 0x40)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
struct FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1222[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_BeginExecution
struct FRigUnit_BeginExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionBase
struct FRigUnit_CollectionBase : public FRigUnit
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
struct FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChain
struct FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        LastItem;                                          // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse;                                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1224[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChainArray
struct FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        FirstItem;                                         // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        LastItem;                                          // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse;                                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
struct FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1235[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
struct FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1237[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildren
struct FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1238[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
struct FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetAll
struct FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{
public:
	enum class ERigElementType                   TypeToSearch;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1241[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
struct FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1243[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
struct FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Result;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItems
struct FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetItems
struct FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
struct FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
struct FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionUnion
struct FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1252[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Collection;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionIntersection
struct FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionDifference
struct FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReverse
struct FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Reversed;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionCount
struct FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
struct FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0xA8 - 0x40)
// ScriptStruct ControlRig.RigUnit_CollectionLoop
struct FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x50(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Continue;                                          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             Completed;                                         // 0x70(0x38)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionAddItem
struct FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{
public:
	struct FRigElementKeyCollection              Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_125E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
struct FRigUnit_DynamicHierarchyBase : public FRigUnit
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
struct FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{
public:
};

// 0x18 (0x58 - 0x40)
// ScriptStruct ControlRig.RigUnit_AddParent
struct FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x4C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x58 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetDefaultParent
struct FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x4C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x60 - 0x40)
// ScriptStruct ControlRig.RigUnit_SwitchParent
struct FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	enum class ERigSwitchParentMode              Mode;                                              // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1264[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Child;                                             // 0x44(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x50(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainGlobal;                                   // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1266[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
struct FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1267[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             Weights;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Parents;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
struct FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1269[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             Weights;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Parents;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x60 - 0x40)
// ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
struct FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementWeight>             Weights;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_HierarchyReset
struct FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
};

// 0x20 (0x60 - 0x40)
// ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
struct FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	class FName                                  Namespace;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeCurves;                                    // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x50 - 0x40)
// ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
struct FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x60 - 0x40)
// ScriptStruct ControlRig.RigUnit_HierarchyAddElement
struct FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{
public:
	struct FRigElementKey                        Parent;                                            // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x54(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0xD0 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddBone
struct FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            Transform;                                         // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1273[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0xD0 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddNull
struct FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            Transform;                                         // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1275[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
struct FRigUnit_HierarchyAddControl_Settings
{
public:
	uint8                                        Pad_1277[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
struct FRigUnit_HierarchyAddControl_ShapeSettings
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1278[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
struct FRigUnit_HierarchyAddControl_ProxySettings
{
public:
	bool                                         bIsProxy;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                DrivenControls;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1280[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{
public:
	struct FRigControlLimitEnabled               Limit;                                             // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1282[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1284[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
struct FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1289[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings Limits;                                            // 0x14(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_128A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x140 (0x1A0 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
struct FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            OffsetTransform;                                   // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_128D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlFloat_Settings Settings;                                          // 0xD0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{
public:
	struct FRigControlLimitEnabled               Limit;                                             // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1290[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1294[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
struct FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1296[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlInteger_LimitSettings Limits;                                            // 0x14(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1297[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x140 (0x1A0 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
struct FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            OffsetTransform;                                   // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialValue;                                      // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_129C[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlInteger_Settings Settings;                                          // 0xD0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitX;                                            // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitY;                                            // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             MinValue;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaxValue;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xF0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
struct FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                                            // 0x18(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x160 (0x1C0 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
struct FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            OffsetTransform;                                   // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InitialValue;                                      // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControlVector2D_Settings Settings;                                          // 0xD0(0xF0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitX;                                            // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitY;                                            // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitZ;                                            // 0x4(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               MinValue;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxValue;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
struct FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	bool                                         bIsPosition;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlVector_LimitSettings Limits;                                            // 0x18(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x60(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xE0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x180 (0x1E0 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
struct FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            OffsetTransform;                                   // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12B9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlVector_Settings Settings;                                          // 0xE0(0x100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{
public:
	struct FRigControlLimitEnabled               LimitPitch;                                        // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitYaw;                                          // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigControlLimitEnabled               LimitRoll;                                         // 0x4(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BB[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              MinValue;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MaxValue;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12BC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xE0 (0xF0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
struct FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	struct FRigUnit_HierarchyAddControlRotator_LimitSettings Limits;                                            // 0x10(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x170 (0x1D0 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
struct FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            OffsetTransform;                                   // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InitialValue;                                      // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_HierarchyAddControlRotator_Settings Settings;                                          // 0xE0(0xF0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xA0 (0xB0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
struct FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{
public:
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x10(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0x90(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x170 (0x1D0 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
struct FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddElement
{
public:
	struct FTransform                            OffsetTransform;                                   // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialValue;                                      // 0xC0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_HierarchyAddControlTransform_Settings Settings;                                          // 0x120(0xB0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x8 (0x68 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
struct FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
{
public:
	bool                                         InitialValue;                                      // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MinimumValue;                                      // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MaximumValue;                                      // 0x62(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12CD[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
struct FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
{
public:
	float                                        InitialValue;                                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumValue;                                      // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumValue;                                      // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
struct FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{
public:
	int32                                        InitialValue;                                      // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumValue;                                      // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumValue;                                      // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x90 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
struct FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{
public:
	struct FVector2D                             InitialValue;                                      // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MinimumValue;                                      // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaximumValue;                                      // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0xA8 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
struct FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{
public:
	struct FVector                               InitialValue;                                      // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MinimumValue;                                      // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaximumValue;                                      // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0xA8 - 0x60)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
struct FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{
public:
	struct FRotator                              InitialValue;                                      // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MinimumValue;                                      // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MaximumValue;                                      // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x88 - 0x40)
// ScriptStruct ControlRig.RigUnit_ForLoopCount
struct FRigUnit_ForLoopCount : public FRigUnitMutable
{
public:
	int32                                        Count;                                             // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Continue;                                          // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             Completed;                                         // 0x50(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyBase
struct FRigUnit_HierarchyBase : public FRigUnit
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
struct FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{
public:
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
struct FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x14(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x40(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
struct FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverse;                                          // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Parents;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedParents;                                     // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
struct FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverse;                                          // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Parents;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedParents;                                     // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
struct FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Parent;                                            // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E6[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Children;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedChildren;                                    // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
struct FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Siblings;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
struct FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Siblings;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItem;                                        // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              CachedSiblings;                                    // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPose
struct FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              ItemsToGet;                                        // 0x10(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
struct FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12ED[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ItemsToGet;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigPose                              Pose;                                              // 0x20(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct ControlRig.RigUnit_HierarchySetPose
struct FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x40(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              ItemsToSet;                                        // 0xB8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
struct FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x40(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xB1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                ItemsToSet;                                        // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseIsEmpty
struct FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsEmpty;                                           // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItems
struct FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              Items;                                             // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
struct FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x120 (0x128 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetDelta
struct FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              PoseA;                                             // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRigPose                              PoseB;                                             // 0x78(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        PositionThreshold;                                 // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationThreshold;                                 // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleThreshold;                                    // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveThreshold;                                    // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              ItemsToCompare;                                    // 0x100(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PosesAreEqual;                                     // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1300[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKeyCollection              ItemsWithDelta;                                    // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransform
struct FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0x78(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x85(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1302[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x90(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseElementIndex;                            // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseHash;                                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1304[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
struct FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1307[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetCurve
struct FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{
public:
	struct FRigPose                              Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  Curve;                                             // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurveValue;                                        // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseElementIndex;                            // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseHash;                                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x1D0 - 0x40)
// ScriptStruct ControlRig.RigUnit_PoseLoop
struct FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{
public:
	struct FRigPose                              Pose;                                              // 0x40(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Item;                                              // 0xB0(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            GlobalTransform;                                   // 0xC0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalTransform;                                    // 0x120(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0x180(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x184(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x188(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x18C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Continue;                                          // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1311[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigExecuteContext             Completed;                                         // 0x198(0x38)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_InteractionExecution
struct FRigUnit_InteractionExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_InverseExecution
struct FRigUnit_InverseExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_IsInteracting
struct FRigUnit_IsInteracting : public FRigUnit
{
public:
	bool                                         bIsInteracting;                                    // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTranslating;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRotating;                                       // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsScaling;                                        // 0xB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1316[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemBase
struct FRigUnit_ItemBase : public FRigUnit
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
struct FRigUnit_ItemBaseMutable : public FRigUnitMutable
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemExists
struct FRigUnit_ItemExists : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Exists;                                            // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1319[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x18(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemReplace
struct FRigUnit_ItemReplace : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Result;                                            // 0x24(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemEquals
struct FRigUnit_ItemEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemNotEquals
struct FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1320[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeEquals
struct FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1326[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
struct FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{
public:
	struct FRigElementKey                        A;                                                 // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1329[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_PrepareForExecution
struct FRigUnit_PrepareForExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x118 (0x120 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceExecution
struct FRigUnit_SequenceExecution : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x38)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             A;                                                 // 0x40(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             B;                                                 // 0x78(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             C;                                                 // 0xB0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             D;                                                 // 0xE8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceAggregate
struct FRigUnit_SequenceAggregate : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x38)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             A;                                                 // 0x40(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct FControlRigExecuteContext             B;                                                 // 0x78(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_UserDefinedEvent
struct FRigUnit_UserDefinedEvent : public FRigUnit
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x8(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct ControlRig.RigUnit_AddBoneTransform
struct FRigUnit_AddBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1337[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostMultiply;                                     // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0xB8(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Item
struct FRigUnit_Item : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_BoneName
struct FRigUnit_BoneName : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpaceName
struct FRigUnit_SpaceName : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_ControlName
struct FRigUnit_ControlName : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
struct FRigUnit_GetAnimationChannelBase : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Channel;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1344[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        CachedChannelKey;                                  // 0x1C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedChannelHash;                                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1345[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
struct FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1347[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
struct FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
struct FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_134C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x40 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
struct FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FVector2D                             Value;                                             // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
struct FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FVector                               Value;                                             // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
struct FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FRotator                              Value;                                             // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x90 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
struct FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FTransform                            Value;                                             // 0x30(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x68 - 0x30)
// ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
struct FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{
public:
	struct FControlRigExecuteContext             ExecuteContext;                                    // 0x30(0x38)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
struct FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1351[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x70 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
struct FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1353[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x70 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
struct FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1354[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x78 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
struct FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FVector2D                             Value;                                             // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x80 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
struct FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FVector                               Value;                                             // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x80 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
struct FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	struct FRotator                              Value;                                             // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0xD0 - 0x68)
// ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
struct FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{
public:
	uint8                                        Pad_135B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetBoneTransform
struct FRigUnit_GetBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135D[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
struct FRigUnit_GetControlInitialTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_135F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x80(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlBool
struct FRigUnit_GetControlBool : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1362[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlFloat
struct FRigUnit_GetControlFloat : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1363[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInteger
struct FRigUnit_GetControlInteger : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1365[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector2D
struct FRigUnit_GetControlVector2D : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Vector;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Minimum;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Maximum;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x40(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector
struct FRigUnit_GetControlVector : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_136B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x60(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlRotator
struct FRigUnit_GetControlRotator : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1370[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotator;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Minimum;                                           // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              Maximum;                                           // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x60(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlTransform
struct FRigUnit_GetControlTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1375[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Minimum;                                           // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Maximum;                                           // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x140(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetCurveValue
struct FRigUnit_GetCurveValue : public FRigUnit
{
public:
	class FName                                  Curve;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1378[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x18(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
struct FRigUnit_GetInitialBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_137F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1380[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpace;                                       // 0xA0(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
struct FRigUnit_GetRelativeTransformForItem : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChildInitial;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1382[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Parent;                                            // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1383[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeTransform;                                 // 0x30(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0x90(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0xB0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             SpaceType;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1386[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x80(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransform
struct FRigUnit_GetTransform : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1387[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedIndex;                                       // 0x80(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformArray
struct FRigUnit_GetTransformArray : public FRigUnit
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1389[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformItemArray
struct FRigUnit_GetTransformItemArray : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x48 - 0x18)
// ScriptStruct ControlRig.RigDispatch_MetadataBase
struct FRigDispatch_MetadataBase : public FRigDispatchFactory
{
public:
	uint8                                        Pad_138C[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_GetMetadata
struct FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct ControlRig.RigDispatch_SetMetadata
struct FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
{
public:
};

// 0x38 (0x78 - 0x40)
// ScriptStruct ControlRig.RigUnit_RemoveMetadata
struct FRigUnit_RemoveMetadata : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x54(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1392[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x58(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
struct FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1394[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x50(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadata
struct FRigUnit_HasMetadata : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigMetadataType                  Type;                                              // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1398[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
struct FRigUnit_FindItemsWithMetadata : public FRigUnit
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigMetadataType                  Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetMetadataTags
struct FRigUnit_GetMetadataTags : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_139D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedIndex;                                       // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x78 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetMetadataTag
struct FRigUnit_SetMetadataTag : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x58(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x80 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tags;                                              // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedIndex;                                       // 0x60(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x78 - 0x40)
// ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
struct FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x54(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x58(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTag
struct FRigUnit_HasMetadataTag : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13AC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
struct FRigUnit_HasMetadataTagArray : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x30(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
struct FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Items;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
struct FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{
public:
	TArray<class FName>                          Tags;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Inclusive;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigElementKey>                Result;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedIndices;                                     // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
struct FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0xB8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BA[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1A0 (0x1E0 - 0x40)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKeyCollection              Parents;                                           // 0x50(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialGlobalTransform;                            // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BE[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Switched;                                          // 0x130(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSubject;                                     // 0x138(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x158(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeOffset;                                    // 0x180(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1E0 - 0x40)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
struct FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Subject;                                           // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Parents;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            InitialGlobalTransform;                            // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C7[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Switched;                                          // 0x130(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSubject;                                     // 0x138(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0x158(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            RelativeOffset;                                    // 0x180(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
struct FRigUnit_ProjectTransformToNewParent : public FRigUnit
{
public:
	struct FRigElementKey                        Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChildInitial;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        OldParent;                                         // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOldParentInitial;                                 // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        NewParent;                                         // 0x28(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewParentInitial;                                 // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D3[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x40(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedChild;                                       // 0xA0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedOldParent;                                   // 0xC0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedNewParent;                                   // 0xE0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRig.RigUnit_PropagateTransform
struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeGlobal;                                  // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyToChildren;                                  // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x50(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x58 - 0x40)
// ScriptStruct ControlRig.RigUnit_SendEvent
struct FRigUnit_SendEvent : public FRigUnitMutable
{
public:
	enum class ERigEvent                         Event;                                             // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Item;                                              // 0x44(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetInSeconds;                                   // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyDuringInteraction;                            // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D8[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
struct FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xB0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x111(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x118(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DD[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0xA0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetBoneRotation
struct FRigUnit_SetBoneRotation : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13DF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x50(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x80(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetBoneTransform
struct FRigUnit_SetBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xB0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x114(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x120(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x90 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0x70(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlColor
struct FRigUnit_GetControlColor : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x78 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlColor
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x58(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlDrivenList
struct FRigUnit_GetControlDrivenList : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Driven;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x78 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlDrivenList
struct FRigUnit_SetControlDrivenList : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Driven;                                            // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x58(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlOffset
struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Offset;                                            // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0xB8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetShapeTransform
struct FRigUnit_GetShapeTransform : public FRigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x70(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetShapeTransform
struct FRigUnit_SetShapeTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0xB0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlBool
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x50(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
struct FRigUnit_SetMultiControlBool_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x60 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlBool_Entry> Entries;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlFloat
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x50(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
struct FRigUnit_SetMultiControlFloat_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
struct FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlFloat_Entry> Entries;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlInteger
struct FRigUnit_SetControlInteger : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x50(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
struct FRigUnit_SetMultiControlInteger_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
struct FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlInteger_Entry> Entries;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1406[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x80 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlVector2D
struct FRigUnit_SetControlVector2D : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1407[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Vector;                                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedControlIndex;                                // 0x60(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
struct FRigUnit_SetMultiControlVector2D_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Vector;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlVector2D_Entry> Entries;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1408[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x90 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlVector
struct FRigUnit_SetControlVector : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1409[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Vector;                                            // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x70(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x90 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlRotator
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              Rotator;                                           // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x70(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
struct FRigUnit_SetMultiControlRotator_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotator;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
public:
	TArray<struct FRigUnit_SetMultiControlRotator_Entry> Entries;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlTransform
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1410[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1411[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0xB8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1412[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVisibility
struct FRigUnit_GetControlVisibility : public FRigUnit
{
public:
	struct FRigElementKey                        Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1413[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedControlIndex;                                // 0x18(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x78 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetControlVisibility
struct FRigUnit_SetControlVisibility : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1415[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Pattern;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1417[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedControlIndices;                              // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetCurveValue
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x50(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC0 (0x100 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
struct FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedBone;                                        // 0xB8(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0xD8(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1420[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x110 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
struct FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x4C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1424[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1425[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedChild;                                       // 0xC8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0xE8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1426[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0xC0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
struct FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x4C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Value;                                             // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x7C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedChild;                                       // 0x80(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0xA0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
struct FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        Parent;                                            // 0x4C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x60(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1430[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedChild;                                       // 0x88(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedParent;                                      // 0xA8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1431[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
public:
	class FName                                  SpaceName;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1433[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xB0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1437[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0x118(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1439[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
public:
	class FName                                  Space;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             SpaceType;                                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedSpaceIndex;                                  // 0xB8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143D[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xE0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetTransform
struct FRigUnit_SetTransform : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0xB8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1440[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x90 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetTranslation
struct FRigUnit_SetTranslation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1444[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Value;                                             // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1445[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x70(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0xA0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetRotation
struct FRigUnit_SetRotation : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1446[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x50(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1448[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x78(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1449[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x90 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetScale
struct FRigUnit_SetScale : public FRigUnitMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     CachedIndex;                                       // 0x70(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x80 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetTransformArray
struct FRigUnit_SetTransformArray : public FRigUnitMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1450[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1452[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x80 - 0x40)
// ScriptStruct ControlRig.RigUnit_SetTransformItemArray
struct FRigUnit_SetTransformItemArray : public FRigUnitMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             Space;                                             // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1453[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    Transforms;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1456[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCachedRigElement>             CachedIndex;                                       // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRig.RigUnit_UnsetCurveValue
struct FRigUnit_UnsetCurveValue : public FRigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedCurveIndex;                                  // 0x48(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
struct FRigUnit_ToWorldSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_1458[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            World;                                             // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
struct FRigUnit_ToRigSpace_Transform : public FRigUnit
{
public:
	uint8                                        Pad_145B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Global;                                            // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
struct FRigUnit_ToWorldSpace_Location : public FRigUnit
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               World;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
struct FRigUnit_ToRigSpace_Location : public FRigUnit
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Global;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
struct FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_145F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 World;                                             // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
struct FRigUnit_ToRigSpace_Rotation : public FRigUnit
{
public:
	uint8                                        Pad_1461[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Global;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
struct FRigUnit_BoneHarmonics_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
struct FRigUnit_Harmonics_TargetItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
struct FRigUnit_BoneHarmonics_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               WaveTime;                                          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x100 - 0x40)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics
struct FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_BoneHarmonics_BoneTarget> Bones;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               WaveSpeed;                                         // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveFrequency;                                     // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x80(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0xB0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         WaveEase;                                          // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1466[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaveMinimum;                                       // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1467[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0xD8(0x28)(Transient, NativeAccessSpecifierPublic)
};

// 0xC0 (0x100 - 0x40)
// ScriptStruct ControlRig.RigUnit_ItemHarmonics
struct FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_Harmonics_TargetItem> Targets;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector                               WaveSpeed;                                         // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveFrequency;                                     // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x80(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0xB0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         WaveEase;                                          // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1468[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WaveMinimum;                                       // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_BoneHarmonics_WorkData       WorkData;                                          // 0xD8(0x28)(Transient, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
struct FRigUnit_ChainHarmonics_Reach
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReachTarget;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReachAxis;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachMinimum;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachMaximum;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         ReachEase;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1471[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
struct FRigUnit_ChainHarmonics_Wave
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1473[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WaveFrequency;                                     // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveAmplitude;                                     // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveOffset;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WaveNoise;                                         // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMinimum;                                       // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         WaveEase;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1474[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
struct FRigUnit_ChainHarmonics_Pendulum
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1477[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PendulumStiffness;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PendulumGravity;                                   // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumBlend;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumDrag;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumMinimum;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumMaximum;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         PendulumEase;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               UnwindAxis;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnwindMinimum;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnwindMaximum;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
struct FRigUnit_ChainHarmonics_WorkData
{
public:
	struct FVector                               Time;                                              // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             Items;                                             // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Ratio;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       LocalTip;                                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumTip;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumPosition;                                  // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       PendulumVelocity;                                  // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       HierarchyLine;                                     // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       VelocityLines;                                     // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2D0 (0x310 - 0x40)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics
struct FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  ChainRoot;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x60(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0xA8(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0x120(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x1A8(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1487[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DrawWorldOffset;                                   // 0x210(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x270(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1488[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2D0 (0x310 - 0x40)
// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
struct FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ChainRoot;                                         // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Speed;                                             // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Reach         Reach;                                             // 0x68(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Wave          Wave;                                              // 0xB0(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    WaveCurve;                                         // 0x128(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_Pendulum      Pendulum;                                          // 0x1B0(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            DrawWorldOffset;                                   // 0x210(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_ChainHarmonics_WorkData      WorkData;                                          // 0x270(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1490[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_Target
struct FRigUnit_AimBone_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1491[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Space;                                             // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimItem_Target
struct FRigUnit_AimItem_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Space;                                             // 0x3C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
struct FRigUnit_AimBone_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x218 (0x220 - 0x8)
// ScriptStruct ControlRig.RigUnit_AimBoneMath
struct FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_14A4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InputTransform;                                    // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x70(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0xB8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A6[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x110(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x170(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x1E0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x200(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x170 (0x1B0 - 0x40)
// ScriptStruct ControlRig.RigUnit_AimBone
struct FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_Target               Primary;                                           // 0x48(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimBone_Target               Secondary;                                         // 0x90(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0xE0(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneIndex;                                   // 0x150(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x170(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x190(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x1C0 - 0x40)
// ScriptStruct ControlRig.RigUnit_AimItem
struct FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimItem_Target               Primary;                                           // 0x50(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_AimItem_Target               Secondary;                                         // 0x98(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BB[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0xF0(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItem;                                        // 0x160(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     PrimaryCachedSpace;                                // 0x180(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     SecondaryCachedSpace;                              // 0x1A0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorldUp
struct FRigUnit_AimConstraint_WorldUp
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        Space;                                             // 0x1C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_AdvancedSettings
struct FRigUnit_AimConstraint_AdvancedSettings
{
public:
	struct FRigUnit_AimBone_DebugSettings        DebugSettings;                                     // 0x0(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C4[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ConstraintParent
struct FConstraintParent
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x1A0 - 0x40)
// ScriptStruct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
struct FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x4D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               AimAxis;                                           // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpAxis;                                            // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_AimConstraint_WorldUp        WorldUp;                                           // 0x80(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintParent>             Parents;                                           // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_14CD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_AimConstraint_AdvancedSettings AdvancedSettings;                                  // 0xC0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     WorldUpSpaceCache;                                 // 0x148(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     ChildCache;                                        // 0x168(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D2[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
struct FRigUnit_CCDIK_RotationLimit
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limit;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
struct FRigUnit_CCDIK_RotationLimitPerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limit;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
struct FRigUnit_CCDIK_WorkData
{
public:
	TArray<struct FCCDIKChainLink>               Chain;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                RotationLimitIndex;                                // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                RotationLimitsPerItem;                             // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffector;                                    // 0x40(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_CCDIK
struct FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseRotationLimit;                                 // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimit>  RotationLimits;                                    // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0xE0(0x60)(NativeAccessSpecifierPublic)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
struct FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseRotationLimit;                                 // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0xE0(0x60)(NativeAccessSpecifierPublic)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_CCDIKItemArray
struct FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseRotationLimit;                                 // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_CCDIK_WorkData               WorkData;                                          // 0xE0(0x60)(NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
struct FRigUnit_DistributeRotation_Rotation
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E5[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
struct FRigUnit_DistributeRotation_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationA;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationB;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRotationT;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemLocalTransforms;                               // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0xC0 - 0x40)
// ScriptStruct ControlRig.RigUnit_DistributeRotation
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x70(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x78 (0xB8 - 0x40)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x68(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x78 (0xB8 - 0x40)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
struct FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_DistributeRotation_WorkData  WorkData;                                          // 0x68(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
struct FRigUnit_FABRIK_WorkData
{
public:
	TArray<struct FFABRIKChainLink>              Chain;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffector;                                    // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x110 - 0x40)
// ScriptStruct ControlRig.RigUnit_FABRIK
struct FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0xC0(0x40)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FD[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x110 - 0x40)
// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
struct FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0xC0(0x40)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14FF[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0x110 - 0x40)
// ScriptStruct ControlRig.RigUnit_FABRIKItemArray
struct FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            EffectorTransform;                                 // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1502[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigUnit_FABRIK_WorkData              WorkData;                                          // 0xC0(0x40)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1503[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x260 - 0x40)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve
struct FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                    Bezier;                                            // 0x50(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1505[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1509[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x130(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x1C0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_150C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x260 - 0x40)
// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
struct FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                    Bezier;                                            // 0x50(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1513[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1515[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x130(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x1C0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1517[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x220 (0x260 - 0x40)
// ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
struct FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                    Bezier;                                            // 0x50(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVectorPosition;                                // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         RotationEaseType;                                  // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x11C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1521[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x130(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_FitChainToCurve_WorkData     WorkData;                                          // 0x1C0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1522[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
struct FRigUnit_ModifyBoneTransforms_PerBone
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1527[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
struct FRigUnit_ModifyTransforms_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
struct FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{
public:
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
struct FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMinimum;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMaximum;                                     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1528[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_ModifyBoneTransforms_WorkData WorkData;                                          // 0x60(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
struct FRigUnit_ModifyTransforms_PerItem
{
public:
	struct FRigElementKey                        Item;                                              // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1529[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x70 - 0x40)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms
struct FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigUnit_ModifyTransforms_PerItem> ItemToModify;                                      // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMinimum;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMaximum;                                     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_ModifyTransforms_WorkData    WorkData;                                          // 0x60(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
struct FRigUnit_MultiFABRIK_WorkData
{
public:
	uint8                                        Pad_152C[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
struct FRigUnit_MultiFABRIK_EndEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK
struct FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  RootBone;                                          // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigUnit_MultiFABRIK_EndEffector> Effectors;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x5C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1530[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxIterations;                                     // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1531[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MultiFABRIK_WorkData         WorkData;                                          // 0x68(0x68)(Transient, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
struct FRigUnit_SlideChain_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1534[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                ItemSegments;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Transforms;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    BlendedTransforms;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0xA0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SlideChain
struct FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x58(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x60 (0xA0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
struct FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1544[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x58(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x60 (0xA0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SlideChainItemArray
struct FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{
public:
	TArray<struct FRigElementKey>                Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1547[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SlideChain_WorkData          WorkData;                                          // 0x58(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RegionScaleFactors
struct FRegionScaleFactors
{
public:
	float                                        PositiveWidth;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeWidth;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositiveHeight;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeHeight;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.SphericalRegion
struct FSphericalRegion
{
public:
	uint8                                        Pad_154E[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
struct FSphericalPoseReaderDebugSettings
{
public:
	bool                                         bDrawDebug;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDraw2D;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLocalAxes;                                    // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1550[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugScale;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugSegments;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x1E0 - 0x40)
// ScriptStruct ControlRig.RigUnit_SphericalPoseReader
struct FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{
public:
	float                                        OutputParam;                                       // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        DriverItem;                                        // 0x44(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DriverAxis;                                        // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationOffset;                                    // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveRegionSize;                                  // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRegionScaleFactors                   ActiveRegionScaleFactors;                          // 0x84(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FalloffSize;                                       // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRegionScaleFactors                   FalloffRegionScaleFactors;                         // 0x98(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         FlipWidthScaling;                                  // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FlipHeightScaling;                                 // 0xA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1561[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        OptionalParentItem;                                // 0xAC(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSphericalPoseReaderDebugSettings     Debug;                                             // 0xB8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSphericalRegion                      InnerRegion;                                       // 0xC8(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FSphericalRegion                      OuterRegion;                                       // 0xDC(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               DriverNormal;                                      // 0xF0(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Driver2D;                                          // 0x108(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     DriverCache;                                       // 0x120(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     OptionalParentCache;                               // 0x140(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            LocalDriverTransformInit;                          // 0x160(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CachedRotationOffset;                              // 0x1C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCachedInitTransforms;                             // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1575[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
struct FRigUnit_SpringIK_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1578[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
struct FRigUnit_SpringIK_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedBones;                                       // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVector;                                  // 0x10(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Transforms;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCRSimPointContainer                  Simulation;                                        // 0x40(0x78)(NativeAccessSpecifierPublic)
};

// 0x1D0 (0x210 - 0x40)
// ScriptStruct ControlRig.RigUnit_SpringIK
struct FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HierarchyStrength;                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectorStrength;                                  // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectorRatio;                                     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootStrength;                                      // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootRatio;                                         // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipPolePlane;                                    // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1588[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PoleVectorSpace;                                   // 0x84(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1589[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrimaryAxis;                                       // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLiveSimulation;                                   // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Iterations;                                        // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitLocalPosition;                               // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1590[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_SpringIK_DebugSettings       DebugSettings;                                     // 0xD0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_SpringIK_WorkData            WorkData;                                          // 0x150(0xB8)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1592[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.ConstraintTarget
struct FConstraintTarget
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0x65(0x9)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1595[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
struct FRigUnit_TransformConstraint_WorkData
{
public:
	TArray<struct FConstraintData>               ConstraintData;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           ConstraintDataToTargets;                           // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0xF0 (0x130 - 0x40)
// ScriptStruct ControlRig.RigUnit_TransformConstraint
struct FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseBone;                                          // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FConstraintTarget>             Targets;                                           // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTransforms;                             // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0xD0(0x60)(Transient, NativeAccessSpecifierPrivate)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
struct FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Item;                                              // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            BaseTransform;                                     // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        BaseItem;                                          // 0xB0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintTarget>             Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTransforms;                             // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TransformConstraint_WorkData WorkData;                                          // 0xD8(0x60)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15AB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
struct FRigUnit_ParentConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0xA0 - 0x40)
// ScriptStruct ControlRig.RigUnit_ParentConstraint
struct FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransformFilter                      Filter;                                            // 0x4D(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FConstraintParent>             Parents;                                           // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;                                  // 0x68(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     ChildCache;                                        // 0x70(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRig.RigUnit_PositionConstraint
struct FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x4D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintParent>             Parents;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x98 - 0x40)
// ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
struct FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x4D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintParent>             Parents;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     ChildCache;                                        // 0x68(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
struct FRigUnit_RotationConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRig.RigUnit_RotationConstraint
struct FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x4D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintParent>             Parents;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x60(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x98 - 0x40)
// ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
struct FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x4D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintParent>             Parents;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x60(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D5[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     ChildCache;                                        // 0x68(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x68 - 0x40)
// ScriptStruct ControlRig.RigUnit_ScaleConstraint
struct FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x4D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintParent>             Parents;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x98 - 0x40)
// ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
struct FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        Child;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  Filter;                                            // 0x4D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraintParent>             Parents;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCachedRigElement                     ChildCache;                                        // 0x68(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             ParentCaches;                                      // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
struct FRigUnit_TwistBones_WorkData
{
public:
	TArray<struct FCachedRigElement>             CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRatios;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ItemTransforms;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0xC0 - 0x40)
// ScriptStruct ControlRig.RigUnit_TwistBones
struct FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleAxis;                                          // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         TwistEaseType;                                     // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0x90(0x30)(Transient, NativeAccessSpecifierPublic)
};

// 0x80 (0xC0 - 0x40)
// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
struct FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKeyCollection              Items;                                             // 0x40(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleAxis;                                          // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigAnimEasingType         TwistEaseType;                                     // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwistBones_WorkData          WorkData;                                          // 0x90(0x30)(Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldOffset;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x230 - 0x40)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
struct FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{
public:
	class FName                                  BoneA;                                             // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneB;                                             // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1616[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Effector;                                          // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1618[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PoleVector;                                        // 0xF8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PoleVectorSpace;                                   // 0x114(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x134(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1620[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x140(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneAIndex;                                  // 0x1B0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedBoneBIndex;                                  // 0x1D0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffectorBoneIndex;                           // 0x1F0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x210(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x200 (0x240 - 0x40)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
struct FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{
public:
	struct FRigElementKey                        ItemA;                                             // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        ItemB;                                             // 0x4C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigElementKey                        EffectorItem;                                      // 0x58(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1624[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Effector;                                          // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0xE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1628[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PoleVector;                                        // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigElementKey                        PoleVectorSpace;                                   // 0x124(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemALength;                                       // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemBLength;                                       // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1630[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x150(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItemAIndex;                                  // 0x1C0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedItemBIndex;                                  // 0x1E0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedEffectorItemIndex;                           // 0x200(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCachedRigElement                     CachedPoleVectorSpaceIndex;                        // 0x220(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
struct FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{
public:
	struct FVector                               Root;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Effector;                                          // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1639[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Elbow;                                             // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
struct FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{
public:
	uint8                                        Pad_163E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Root;                                              // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PoleVector;                                        // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Effector;                                          // 0x90(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PrimaryAxis;                                       // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAxis;                                     // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1642[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StretchStartRatio;                                 // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1646[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Elbow;                                             // 0x140(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolBase
struct FRigUnit_MathBoolBase : public FRigUnit_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolConstant
struct FRigUnit_MathBoolConstant : public FRigUnit_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolUnaryOp
struct FRigUnit_MathBoolUnaryOp : public FRigUnit_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1651[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolBinaryOp
struct FRigUnit_MathBoolBinaryOp : public FRigUnit_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1653[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolBinaryAggregateOp
struct FRigUnit_MathBoolBinaryAggregateOp : public FRigUnit_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1655[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolConstTrue
struct FRigUnit_MathBoolConstTrue : public FRigUnit_MathBoolConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolConstFalse
struct FRigUnit_MathBoolConstFalse : public FRigUnit_MathBoolConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolNot
struct FRigUnit_MathBoolNot : public FRigUnit_MathBoolUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolAnd
struct FRigUnit_MathBoolAnd : public FRigUnit_MathBoolBinaryAggregateOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolNand
struct FRigUnit_MathBoolNand : public FRigUnit_MathBoolBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolNand2
struct FRigUnit_MathBoolNand2 : public FRigUnit_MathBoolBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathBoolOr
struct FRigUnit_MathBoolOr : public FRigUnit_MathBoolBinaryAggregateOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolEquals
struct FRigUnit_MathBoolEquals : public FRigUnit_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165D[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolNotEquals
struct FRigUnit_MathBoolNotEquals : public FRigUnit_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1660[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolToggled
struct FRigUnit_MathBoolToggled : public FRigUnit_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Toggled;                                           // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Initialized;                                       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1662[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolFlipFlop
struct FRigUnit_MathBoolFlipFlop : public FRigUnit_MathBoolBase
{
public:
	bool                                         StartValue;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1666[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1669[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeLeft;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolOnce
struct FRigUnit_MathBoolOnce : public FRigUnit_MathBoolBase
{
public:
	float                                        Duration;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TimeLeft;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolToFloat
struct FRigUnit_MathBoolToFloat : public FRigUnit_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1673[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathBoolToInteger
struct FRigUnit_MathBoolToInteger : public FRigUnit_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1676[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorBase
struct FRigUnit_MathColorBase : public FRigUnit_MathBase
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorBinaryOp
struct FRigUnit_MathColorBinaryOp : public FRigUnit_MathColorBase
{
public:
	struct FLinearColor                          A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorBinaryAggregateOp
struct FRigUnit_MathColorBinaryAggregateOp : public FRigUnit_MathColorBase
{
public:
	struct FLinearColor                          A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorFromFloat
struct FRigUnit_MathColorFromFloat : public FRigUnit_MathColorBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1681[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathColorAdd
struct FRigUnit_MathColorAdd : public FRigUnit_MathColorBinaryAggregateOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathColorSub
struct FRigUnit_MathColorSub : public FRigUnit_MathColorBinaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathColorMul
struct FRigUnit_MathColorMul : public FRigUnit_MathColorBinaryAggregateOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathColorLerp
struct FRigUnit_MathColorLerp : public FRigUnit_MathColorBase
{
public:
	struct FLinearColor                          A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Result;                                            // 0x2C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleBase
struct FRigUnit_MathDoubleBase : public FRigUnit_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleConstant
struct FRigUnit_MathDoubleConstant : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleUnaryOp
struct FRigUnit_MathDoubleUnaryOp : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleBinaryOp
struct FRigUnit_MathDoubleBinaryOp : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleBinaryAggregateOp
struct FRigUnit_MathDoubleBinaryAggregateOp : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathDoubleConstPi
struct FRigUnit_MathDoubleConstPi : public FRigUnit_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathDoubleConstHalfPi
struct FRigUnit_MathDoubleConstHalfPi : public FRigUnit_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathDoubleConstTwoPi
struct FRigUnit_MathDoubleConstTwoPi : public FRigUnit_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathDoubleConstE
struct FRigUnit_MathDoubleConstE : public FRigUnit_MathDoubleConstant
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathDoubleAdd
struct FRigUnit_MathDoubleAdd : public FRigUnit_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathDoubleSub
struct FRigUnit_MathDoubleSub : public FRigUnit_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathDoubleMul
struct FRigUnit_MathDoubleMul : public FRigUnit_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathDoubleDiv
struct FRigUnit_MathDoubleDiv : public FRigUnit_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathDoubleMod
struct FRigUnit_MathDoubleMod : public FRigUnit_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathDoubleMin
struct FRigUnit_MathDoubleMin : public FRigUnit_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathDoubleMax
struct FRigUnit_MathDoubleMax : public FRigUnit_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct ControlRig.RigUnit_MathDoublePow
struct FRigUnit_MathDoublePow : public FRigUnit_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleSqrt
struct FRigUnit_MathDoubleSqrt : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleNegate
struct FRigUnit_MathDoubleNegate : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleAbs
struct FRigUnit_MathDoubleAbs : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleFloor
struct FRigUnit_MathDoubleFloor : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleCeil
struct FRigUnit_MathDoubleCeil : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleRound
struct FRigUnit_MathDoubleRound : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleToInt
struct FRigUnit_MathDoubleToInt : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleSign
struct FRigUnit_MathDoubleSign : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleClamp
struct FRigUnit_MathDoubleClamp : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleLerp
struct FRigUnit_MathDoubleLerp : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       T;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleRemap
struct FRigUnit_MathDoubleRemap : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SourceMinimum;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SourceMaximum;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TargetMinimum;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TargetMaximum;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Result;                                            // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleEquals
struct FRigUnit_MathDoubleEquals : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleNotEquals
struct FRigUnit_MathDoubleNotEquals : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleGreater
struct FRigUnit_MathDoubleGreater : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16CD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleLess
struct FRigUnit_MathDoubleLess : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleGreaterEqual
struct FRigUnit_MathDoubleGreaterEqual : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleLessEqual
struct FRigUnit_MathDoubleLessEqual : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleIsNearlyZero
struct FRigUnit_MathDoubleIsNearlyZero : public FRigUnit_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Tolerance;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleIsNearlyEqual
struct FRigUnit_MathDoubleIsNearlyEqual : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Tolerance;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleDeg
struct FRigUnit_MathDoubleDeg : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleRad
struct FRigUnit_MathDoubleRad : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleSin
struct FRigUnit_MathDoubleSin : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleCos
struct FRigUnit_MathDoubleCos : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleTan
struct FRigUnit_MathDoubleTan : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleAsin
struct FRigUnit_MathDoubleAsin : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleAcos
struct FRigUnit_MathDoubleAcos : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleAtan
struct FRigUnit_MathDoubleAtan : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDoubleLawOfCosine
struct FRigUnit_MathDoubleLawOfCosine : public FRigUnit_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       C;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AlphaAngle;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       BetaAngle;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       GammaAngle;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathDoubleExponential
struct FRigUnit_MathDoubleExponential : public FRigUnit_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatBase
struct FRigUnit_MathFloatBase : public FRigUnit_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatConstant
struct FRigUnit_MathFloatConstant : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatUnaryOp
struct FRigUnit_MathFloatUnaryOp : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatBinaryOp
struct FRigUnit_MathFloatBinaryOp : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatBinaryAggregateOp
struct FRigUnit_MathFloatBinaryAggregateOp : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatConstPi
struct FRigUnit_MathFloatConstPi : public FRigUnit_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatConstHalfPi
struct FRigUnit_MathFloatConstHalfPi : public FRigUnit_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatConstTwoPi
struct FRigUnit_MathFloatConstTwoPi : public FRigUnit_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatConstE
struct FRigUnit_MathFloatConstE : public FRigUnit_MathFloatConstant
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatAdd
struct FRigUnit_MathFloatAdd : public FRigUnit_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatSub
struct FRigUnit_MathFloatSub : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatMul
struct FRigUnit_MathFloatMul : public FRigUnit_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatDiv
struct FRigUnit_MathFloatDiv : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatMod
struct FRigUnit_MathFloatMod : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatMin
struct FRigUnit_MathFloatMin : public FRigUnit_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatMax
struct FRigUnit_MathFloatMax : public FRigUnit_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathFloatPow
struct FRigUnit_MathFloatPow : public FRigUnit_MathFloatBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatSqrt
struct FRigUnit_MathFloatSqrt : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatNegate
struct FRigUnit_MathFloatNegate : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatAbs
struct FRigUnit_MathFloatAbs : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatFloor
struct FRigUnit_MathFloatFloor : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatCeil
struct FRigUnit_MathFloatCeil : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatRound
struct FRigUnit_MathFloatRound : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1701[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatToInt
struct FRigUnit_MathFloatToInt : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatSign
struct FRigUnit_MathFloatSign : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatClamp
struct FRigUnit_MathFloatClamp : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatLerp
struct FRigUnit_MathFloatLerp : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatRemap
struct FRigUnit_MathFloatRemap : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMinimum;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatEquals
struct FRigUnit_MathFloatEquals : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1711[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatNotEquals
struct FRigUnit_MathFloatNotEquals : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1713[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatGreater
struct FRigUnit_MathFloatGreater : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1717[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatLess
struct FRigUnit_MathFloatLess : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1719[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatGreaterEqual
struct FRigUnit_MathFloatGreaterEqual : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatLessEqual
struct FRigUnit_MathFloatLessEqual : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1722[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyZero
struct FRigUnit_MathFloatIsNearlyZero : public FRigUnit_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1724[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatIsNearlyEqual
struct FRigUnit_MathFloatIsNearlyEqual : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1727[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatSelectBool
struct FRigUnit_MathFloatSelectBool : public FRigUnit_MathFloatBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1728[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IfTrue;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IfFalse;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatDeg
struct FRigUnit_MathFloatDeg : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatRad
struct FRigUnit_MathFloatRad : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatSin
struct FRigUnit_MathFloatSin : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatCos
struct FRigUnit_MathFloatCos : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatTan
struct FRigUnit_MathFloatTan : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatAsin
struct FRigUnit_MathFloatAsin : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatAcos
struct FRigUnit_MathFloatAcos : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatAtan
struct FRigUnit_MathFloatAtan : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathFloatLawOfCosine
struct FRigUnit_MathFloatLawOfCosine : public FRigUnit_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        C;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlphaAngle;                                        // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BetaAngle;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GammaAngle;                                        // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1730[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathFloatExponential
struct FRigUnit_MathFloatExponential : public FRigUnit_MathFloatUnaryOp
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntBase
struct FRigUnit_MathIntBase : public FRigUnit_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntUnaryOp
struct FRigUnit_MathIntUnaryOp : public FRigUnit_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntBinaryOp
struct FRigUnit_MathIntBinaryOp : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1734[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntBinaryAggregateOp
struct FRigUnit_MathIntBinaryAggregateOp : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntAdd
struct FRigUnit_MathIntAdd : public FRigUnit_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntSub
struct FRigUnit_MathIntSub : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntMul
struct FRigUnit_MathIntMul : public FRigUnit_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntDiv
struct FRigUnit_MathIntDiv : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntMod
struct FRigUnit_MathIntMod : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntMin
struct FRigUnit_MathIntMin : public FRigUnit_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntMax
struct FRigUnit_MathIntMax : public FRigUnit_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_MathIntPow
struct FRigUnit_MathIntPow : public FRigUnit_MathIntBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathIntNegate
struct FRigUnit_MathIntNegate : public FRigUnit_MathIntUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathIntAbs
struct FRigUnit_MathIntAbs : public FRigUnit_MathIntUnaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntToFloat
struct FRigUnit_MathIntToFloat : public FRigUnit_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_MathIntSign
struct FRigUnit_MathIntSign : public FRigUnit_MathIntUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntClamp
struct FRigUnit_MathIntClamp : public FRigUnit_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntEquals
struct FRigUnit_MathIntEquals : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntNotEquals
struct FRigUnit_MathIntNotEquals : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1754[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntGreater
struct FRigUnit_MathIntGreater : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1756[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntLess
struct FRigUnit_MathIntLess : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntGreaterEqual
struct FRigUnit_MathIntGreaterEqual : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntLessEqual
struct FRigUnit_MathIntLessEqual : public FRigUnit_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1763[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixBase
struct FRigUnit_MathMatrixBase : public FRigUnit_MathBase
{
public:
};

// 0x108 (0x110 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixUnaryOp
struct FRigUnit_MathMatrixUnaryOp : public FRigUnit_MathMatrixBase
{
public:
	uint8                                        Pad_1764[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x90(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixBinaryOp
struct FRigUnit_MathMatrixBinaryOp : public FRigUnit_MathMatrixBase
{
public:
	uint8                                        Pad_1765[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               A;                                                 // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               B;                                                 // 0x90(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x110(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixBinaryAggregateOp
struct FRigUnit_MathMatrixBinaryAggregateOp : public FRigUnit_MathMatrixBase
{
public:
	uint8                                        Pad_1768[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               A;                                                 // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               B;                                                 // 0x90(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x110(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixToTransform
struct FRigUnit_MathMatrixToTransform : public FRigUnit_MathMatrixBase
{
public:
	uint8                                        Pad_176B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x90(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixFromTransform
struct FRigUnit_MathMatrixFromTransform : public FRigUnit_MathMatrixBase
{
public:
	uint8                                        Pad_176D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixFromTransformV2
struct FRigUnit_MathMatrixFromTransformV2 : public FRigUnit_MathMatrixBase
{
public:
	uint8                                        Pad_176F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMatrix                               Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixToVectors
struct FRigUnit_MathMatrixToVectors : public FRigUnit_MathMatrixBase
{
public:
	uint8                                        Pad_1777[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               X;                                                 // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Y;                                                 // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Z;                                                 // 0xD8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathMatrixFromVectors
struct FRigUnit_MathMatrixFromVectors : public FRigUnit_MathMatrixBase
{
public:
	struct FVector                               Origin;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               X;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Y;                                                 // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Z;                                                 // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1781[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMatrix                               Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x190 - 0x190)
// ScriptStruct ControlRig.RigUnit_MathMatrixMul
struct FRigUnit_MathMatrixMul : public FRigUnit_MathMatrixBinaryAggregateOp
{
public:
};

// 0x0 (0x110 - 0x110)
// ScriptStruct ControlRig.RigUnit_MathMatrixInverse
struct FRigUnit_MathMatrixInverse : public FRigUnit_MathMatrixUnaryOp
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionBase
struct FRigUnit_MathQuaternionBase : public FRigUnit_MathBase
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionUnaryOp
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_1783[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryOp
struct FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_1785[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionBinaryAggregateOp
struct FRigUnit_MathQuaternionBinaryAggregateOp : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_1787[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase
{
public:
	struct FVector                               Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1789[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromEuler
struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase
{
public:
	struct FVector                               Euler;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotator
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase
{
public:
	struct FRotator                              Rotator;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromRotatorV2
struct FRigUnit_MathQuaternionFromRotatorV2 : public FRigUnit_MathQuaternionBase
{
public:
	struct FRotator                              Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionFromTwoVectors
struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionToAxisAndAngle
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_1791[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Axis;                                              // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1796[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionScale
struct FRigUnit_MathQuaternionScale : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_1797[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1798[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionScaleV2
struct FRigUnit_MathQuaternionScaleV2 : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_1799[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179A[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionToEuler
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_179B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionToRotator
struct FRigUnit_MathQuaternionToRotator : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_179D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_179E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigUnit_MathQuaternionMul
struct FRigUnit_MathQuaternionMul : public FRigUnit_MathQuaternionBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathQuaternionInverse
struct FRigUnit_MathQuaternionInverse : public FRigUnit_MathQuaternionUnaryOp
{
public:
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionSlerp
struct FRigUnit_MathQuaternionSlerp : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17A1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A2[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionEquals
struct FRigUnit_MathQuaternionEquals : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17A5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A6[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionNotEquals
struct FRigUnit_MathQuaternionNotEquals : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AA[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionSelectBool
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 IfTrue;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 IfFalse;                                           // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionDot
struct FRigUnit_MathQuaternionDot : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17AC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AE[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathQuaternionUnit
struct FRigUnit_MathQuaternionUnit : public FRigUnit_MathQuaternionUnaryOp
{
public:
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionRotateVector
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17AF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Transform;                                         // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionGetAxis
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17B0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Quaternion;                                        // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionSwingTwist
struct FRigUnit_MathQuaternionSwingTwist : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17B3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TwistAxis;                                         // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Swing;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Twist;                                             // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionRotationOrder
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionMakeRelative
struct FRigUnit_MathQuaternionMakeRelative : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17B6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Global;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Parent;                                            // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Local;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionMakeAbsolute
struct FRigUnit_MathQuaternionMakeAbsolute : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17B8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Local;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Parent;                                            // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Global;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathQuaternionMirrorTransform
struct FRigUnit_MathQuaternionMirrorTransform : public FRigUnit_MathQuaternionBase
{
public:
	uint8                                        Pad_17BA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BB[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CentralTransform;                                  // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Result;                                            // 0xA0(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
struct FRigUnit_MathRBFInterpolateQuatWorkData
{
public:
	uint8                                        Pad_17BD[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
struct FRigUnit_MathRBFInterpolateVectorWorkData
{
public:
	uint8                                        Pad_17BF[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateBase
struct FRigUnit_MathRBFInterpolateBase : public FRigUnit_MathBase
{
public:
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatBase
struct FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase
{
public:
	uint8                                        Pad_17C0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFQuatDistanceType              DistanceFunction;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFKernelType                    SmoothingFunction;                                 // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingAngle;                                    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeOutput;                                  // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TwistAxis;                                         // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathRBFInterpolateQuatWorkData WorkData;                                          // 0x60(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorBase
struct FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase
{
public:
	struct FVector                               Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFVectorDistanceType            DistanceFunction;                                  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFKernelType                    SmoothingFunction;                                 // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C8[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmoothingRadius;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeOutput;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_MathRBFInterpolateVectorWorkData WorkData;                                          // 0x30(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatFloat_Target
struct FMathRBFInterpolateQuatFloat_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CC[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x110 - 0xF0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatFloat
struct FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x100(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CE[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatVector_Target
struct FMathRBFInterpolateQuatVector_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D0[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x120 - 0xF0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatVector
struct FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatVector_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0x100(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatColor_Target
struct FMathRBFInterpolateQuatColor_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x110 - 0xF0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatColor
struct FRigUnit_MathRBFInterpolateQuatColor : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatColor_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Output;                                            // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatQuat_Target
struct FMathRBFInterpolateQuatQuat_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Value;                                             // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x120 - 0xF0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatQuat
struct FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Output;                                            // 0x100(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateQuatXform_Target
struct FMathRBFInterpolateQuatXform_Target
{
public:
	struct FQuat                                 Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Value;                                             // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x160 - 0xF0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateQuatXform
struct FRigUnit_MathRBFInterpolateQuatXform : public FRigUnit_MathRBFInterpolateQuatBase
{
public:
	TArray<struct FMathRBFInterpolateQuatXform_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Output;                                            // 0x100(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorFloat_Target
struct FMathRBFInterpolateVectorFloat_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0xE0 - 0xC0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorFloat
struct FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0xD0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DF[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorVector_Target
struct FMathRBFInterpolateVectorVector_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xF0 - 0xC0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorVector
struct FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorVector_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               Output;                                            // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorColor_Target
struct FMathRBFInterpolateVectorColor_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xE0 - 0xC0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorColor
struct FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorColor_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          Output;                                            // 0xD0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorQuat_Target
struct FMathRBFInterpolateVectorQuat_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xF0 - 0xC0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorQuat
struct FRigUnit_MathRBFInterpolateVectorQuat : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQuat                                 Output;                                            // 0xD0(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.MathRBFInterpolateVectorXform_Target
struct FMathRBFInterpolateVectorXform_Target
{
public:
	struct FVector                               Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x130 - 0xC0)
// ScriptStruct ControlRig.RigUnit_MathRBFInterpolateVectorXform
struct FRigUnit_MathRBFInterpolateVectorXform : public FRigUnit_MathRBFInterpolateVectorBase
{
public:
	TArray<struct FMathRBFInterpolateVectorXform_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTransform                            Output;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformBase
struct FRigUnit_MathTransformBase : public FRigUnit_MathBase
{
public:
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_MathTransformMutableBase
struct FRigUnit_MathTransformMutableBase : public FRigUnit_MathMutableBase
{
public:
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformUnaryOp
struct FRigUnit_MathTransformUnaryOp : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_17EC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformBinaryOp
struct FRigUnit_MathTransformBinaryOp : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_17ED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformBinaryAggregateOp
struct FRigUnit_MathTransformBinaryAggregateOp : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_17EF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransform
struct FRigUnit_MathTransformFromEulerTransform : public FRigUnit_MathTransformBase
{
public:
	struct FEulerTransform                       EulerTransform;                                    // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformFromEulerTransformV2
struct FRigUnit_MathTransformFromEulerTransformV2 : public FRigUnit_MathTransformBase
{
public:
	struct FEulerTransform                       Value;                                             // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformToEulerTransform
struct FRigUnit_MathTransformToEulerTransform : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_17F4[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEulerTransform                       Result;                                            // 0x70(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_MathTransformMul
struct FRigUnit_MathTransformMul : public FRigUnit_MathTransformBinaryAggregateOp
{
public:
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformMakeRelative
struct FRigUnit_MathTransformMakeRelative : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_17F6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Global;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Parent;                                            // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Local;                                             // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformMakeAbsolute
struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_17F8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Local;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Parent;                                            // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Global;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0xD0 - 0x40)
// ScriptStruct ControlRig.RigUnit_MathTransformAccumulateArray
struct FRigUnit_MathTransformAccumulateArray : public FRigUnit_MathTransformMutableBase
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EBoneGetterSetterMode             TargetSpace;                                       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Root;                                              // 0x60(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct ControlRig.RigUnit_MathTransformInverse
struct FRigUnit_MathTransformInverse : public FRigUnit_MathTransformUnaryOp
{
public:
};

// 0x138 (0x140 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformLerp
struct FRigUnit_MathTransformLerp : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_17FC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17FD[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformSelectBool
struct FRigUnit_MathTransformSelectBool : public FRigUnit_MathTransformBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            IfTrue;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            IfFalse;                                           // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformRotateVector
struct FRigUnit_MathTransformRotateVector : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_17FF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Vector;                                            // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformTransformVector
struct FRigUnit_MathTransformTransformVector : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_1806[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformFromSRT
struct FRigUnit_MathTransformFromSRT : public FRigUnit_MathTransformBase
{
public:
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Rotation;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1807[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale;                                             // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1809[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x60(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEulerTransform                       EulerTransform;                                    // 0xC0(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_180A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformArrayToSRT
struct FRigUnit_MathTransformArrayToSRT : public FRigUnit_MathTransformBase
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Translations;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                         Rotations;                                         // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Scales;                                            // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformClampSpatially
struct FRigUnit_MathTransformClampSpatially : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_180C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigClampSpatialMode       Type;                                              // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Space;                                             // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1811[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DebugColor;                                        // 0xE4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1812[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x100(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x140 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathTransformMirrorTransform
struct FRigUnit_MathTransformMirrorTransform : public FRigUnit_MathTransformBase
{
public:
	uint8                                        Pad_1813[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1815[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CentralTransform;                                  // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBase
struct FRigUnit_MathVectorBase : public FRigUnit_MathBase
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorUnaryOp
struct FRigUnit_MathVectorUnaryOp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBinaryOp
struct FRigUnit_MathVectorBinaryOp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBinaryAggregateOp
struct FRigUnit_MathVectorBinaryAggregateOp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorFromFloat
struct FRigUnit_MathVectorFromFloat : public FRigUnit_MathVectorBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1818[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathVectorAdd
struct FRigUnit_MathVectorAdd : public FRigUnit_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathVectorSub
struct FRigUnit_MathVectorSub : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathVectorMul
struct FRigUnit_MathVectorMul : public FRigUnit_MathVectorBinaryAggregateOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorScale
struct FRigUnit_MathVectorScale : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathVectorDiv
struct FRigUnit_MathVectorDiv : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathVectorMod
struct FRigUnit_MathVectorMod : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathVectorMin
struct FRigUnit_MathVectorMin : public FRigUnit_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathVectorMax
struct FRigUnit_MathVectorMax : public FRigUnit_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorNegate
struct FRigUnit_MathVectorNegate : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorAbs
struct FRigUnit_MathVectorAbs : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorFloor
struct FRigUnit_MathVectorFloor : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorCeil
struct FRigUnit_MathVectorCeil : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorRound
struct FRigUnit_MathVectorRound : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorSign
struct FRigUnit_MathVectorSign : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorClamp
struct FRigUnit_MathVectorClamp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorLerp
struct FRigUnit_MathVectorLerp : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1822[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorRemap
struct FRigUnit_MathVectorRemap : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceMinimum;                                     // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceMaximum;                                     // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetMinimum;                                     // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetMaximum;                                     // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1824[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorEquals
struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1827[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorNotEquals
struct FRigUnit_MathVectorNotEquals : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyZero
struct FRigUnit_MathVectorIsNearlyZero : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorIsNearlyEqual
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x3C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1834[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorSelectBool
struct FRigUnit_MathVectorSelectBool : public FRigUnit_MathVectorBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1837[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               IfTrue;                                            // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               IfFalse;                                           // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorDeg
struct FRigUnit_MathVectorDeg : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorRad
struct FRigUnit_MathVectorRad : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorLengthSquared
struct FRigUnit_MathVectorLengthSquared : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1839[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorLength
struct FRigUnit_MathVectorLength : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorDistance
struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_MathVectorCross
struct FRigUnit_MathVectorCross : public FRigUnit_MathVectorBinaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorDot
struct FRigUnit_MathVectorDot : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1845[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x38 - 0x38)
// ScriptStruct ControlRig.RigUnit_MathVectorUnit
struct FRigUnit_MathVectorUnit : public FRigUnit_MathVectorUnaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorSetLength
struct FRigUnit_MathVectorSetLength : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1846[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorClampLength
struct FRigUnit_MathVectorClampLength : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumLength;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumLength;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMirror
struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorAngle
struct FRigUnit_MathVectorAngle : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1850[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorParallel
struct FRigUnit_MathVectorParallel : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1852[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorOrthogonal
struct FRigUnit_MathVectorOrthogonal : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_185A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorBezierFourPoint
struct FRigUnit_MathVectorBezierFourPoint : public FRigUnit_MathVectorBase
{
public:
	struct FCRFourPointBezier                    Bezier;                                            // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_185F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Tangent;                                           // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMakeBezierFourPoint
struct FRigUnit_MathVectorMakeBezierFourPoint : public FRigUnit_MathVectorBase
{
public:
	struct FCRFourPointBezier                    Bezier;                                            // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorClampSpatially
struct FRigUnit_MathVectorClampSpatially : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigClampSpatialMode       Type;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1865[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Minimum;                                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1867[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Space;                                             // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          DebugColor;                                        // 0x94(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathIntersectPlane
struct FRigUnit_MathIntersectPlane : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlanePoint;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlaneNormal;                                       // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathDistanceToPlane
struct FRigUnit_MathDistanceToPlane : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Point;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlanePoint;                                        // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PlaneNormal;                                       // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ClosestPointOnPlane;                               // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SignedDistance;                                    // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1872[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMakeRelative
struct FRigUnit_MathVectorMakeRelative : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Global;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Parent;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Local;                                             // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMakeAbsolute
struct FRigUnit_MathVectorMakeAbsolute : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Local;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Parent;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Global;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_MathVectorMirrorTransform
struct FRigUnit_MathVectorMirrorTransform : public FRigUnit_MathVectorBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1874[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CentralTransform;                                  // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1875[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_NoiseFloat
struct FRigUnit_NoiseFloat : public FRigUnit_MathBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1876[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_NoiseDouble
struct FRigUnit_NoiseDouble : public FRigUnit_MathBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Speed;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Frequency;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Time;                                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct ControlRig.RigUnit_NoiseVector
struct FRigUnit_NoiseVector : public FRigUnit_MathBase
{
public:
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Frequency;                                         // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Time;                                              // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_NoiseVector2
struct FRigUnit_NoiseVector2 : public FRigUnit_MathBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Speed;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Frequency;                                         // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Time;                                              // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_RandomFloat
struct FRigUnit_RandomFloat : public FRigUnit_MathBase
{
public:
	int32                                        Seed;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastResult;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSeed;                                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseSeed;                                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1888[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_RandomVector
struct FRigUnit_RandomVector : public FRigUnit_MathBase
{
public:
	int32                                        Seed;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Result;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LastResult;                                        // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSeed;                                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseSeed;                                          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateBase
struct FRigUnit_AccumulateBase : public FRigUnit_SimBase
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateFloatAdd
struct FRigUnit_AccumulateFloatAdd : public FRigUnit_AccumulateBase
{
public:
	float                                        Increment;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateVectorAdd
struct FRigUnit_AccumulateVectorAdd : public FRigUnit_AccumulateBase
{
public:
	struct FVector                               Increment;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateFloatMul
struct FRigUnit_AccumulateFloatMul : public FRigUnit_AccumulateBase
{
public:
	float                                        Multiplier;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateVectorMul
struct FRigUnit_AccumulateVectorMul : public FRigUnit_AccumulateBase
{
public:
	struct FVector                               Multiplier;                                        // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateQuatMul
struct FRigUnit_AccumulateQuatMul : public FRigUnit_AccumulateBase
{
public:
	uint8                                        Pad_18A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Multiplier;                                        // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 InitialValue;                                      // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOrder;                                        // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A4[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 AccumulatedValue;                                  // 0x80(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateTransformMul
struct FRigUnit_AccumulateTransformMul : public FRigUnit_AccumulateBase
{
public:
	uint8                                        Pad_18A9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Multiplier;                                        // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialValue;                                      // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOrder;                                        // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AE[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AccumulatedValue;                                  // 0x140(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateFloatLerp
struct FRigUnit_AccumulateFloatLerp : public FRigUnit_AccumulateBase
{
public:
	float                                        TargetValue;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateVectorLerp
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_AccumulateBase
{
public:
	struct FVector                               TargetValue;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateQuatLerp
struct FRigUnit_AccumulateQuatLerp : public FRigUnit_AccumulateBase
{
public:
	uint8                                        Pad_18BD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 TargetValue;                                       // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 InitialValue;                                      // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BE[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 AccumulatedValue;                                  // 0x80(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateTransformLerp
struct FRigUnit_AccumulateTransformLerp : public FRigUnit_AccumulateBase
{
public:
	uint8                                        Pad_18C1[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            TargetValue;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            InitialValue;                                      // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C7[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            AccumulatedValue;                                  // 0x140(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateFloatRange
struct FRigUnit_AccumulateFloatRange : public FRigUnit_AccumulateBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedMinimum;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedMaximum;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_AccumulateVectorRange
struct FRigUnit_AccumulateVectorRange : public FRigUnit_AccumulateBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Minimum;                                           // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Maximum;                                           // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedMinimum;                                // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedMaximum;                                // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ControlRig.RigUnit_AlphaInterp
struct FRigUnit_AlphaInterp : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputRange                           InRange;                                           // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                           OutRange;                                          // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClampMin;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpSpeedIncreasing;                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  ScaleBiasClamp;                                    // 0x44(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DA[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AlphaInterpVector
struct FRigUnit_AlphaInterpVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputRange                           InRange;                                           // 0x2C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                           OutRange;                                          // 0x34(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClampMin;                                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpSpeedIncreasing;                             // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  ScaleBiasClamp;                                    // 0x70(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_AlphaInterpQuat
struct FRigUnit_AlphaInterpQuat : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_18E9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputRange                           InRange;                                           // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputRange                           OutRange;                                          // 0x44(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ClampMin;                                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InterpSpeedIncreasing;                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F4[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  ScaleBiasClamp;                                    // 0x90(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousFloat
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delta;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousValue;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cache;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousVector
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Delta;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousValue;                                     // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Cache;                                             // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousQuat
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_18FD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Delta;                                             // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 PreviousValue;                                     // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 Cache;                                             // 0x70(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct ControlRig.RigUnit_DeltaFromPreviousTransform
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_1902[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Delta;                                             // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            PreviousValue;                                     // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Cache;                                             // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_KalmanFloat
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1904[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Buffer;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1905[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_KalmanVector
struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1906[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Buffer;                                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1908[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_KalmanTransform
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_1909[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190B[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Buffer;                                            // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190C[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
struct FRigUnit_PointSimulation_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionScale;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawPointsAsSpheres;                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1911[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            WorldOffset;                                       // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
struct FRigUnit_PointSimulation_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslationPoint;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimaryAimPoint;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryAimPoint;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
struct FRigUnit_PointSimulation_WorkData
{
public:
	struct FCRSimPointContainer                  Simulation;                                        // 0x0(0x78)(NativeAccessSpecifierPublic)
	TArray<struct FCachedRigElement>             BoneIndices;                                       // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x210 (0x250 - 0x40)
// ScriptStruct ControlRig.RigUnit_PointSimulation
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
public:
	TArray<struct FCRSimPoint>                   Points;                                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimLinearSpring>            Links;                                             // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimPointForce>              Forces;                                            // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCRSimSoftCollision>           CollisionVolumes;                                  // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SimulatedStepsPerSecond;                           // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECRSimPointIntegrateType          IntegratorType;                                    // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1918[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        VerletBlend;                                       // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1919[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigUnit_PointSimulation_BoneTarget> BoneTargets;                                       // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bLimitLocalPosition;                               // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               PrimaryAimAxis;                                    // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SecondaryAimAxis;                                  // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigUnit_PointSimulation_DebugSettings DebugSettings;                                     // 0xE0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FCRFourPointBezier                    Bezier;                                            // 0x160(0x60)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigUnit_PointSimulation_WorkData     WorkData;                                          // 0x1C0(0x88)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_191E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterp
struct FRigUnit_SpringInterp : public FRigUnit_SimBase
{
public:
	float                                        Current;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Target;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatSpringState                     SpringState;                                       // 0x20(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1922[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x98 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVector
struct FRigUnit_SpringInterpVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Current;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1925[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorSpringState                    SpringState;                                       // 0x60(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpV2
struct FRigUnit_SpringInterpV2 : public FRigUnit_SimBase
{
public:
	float                                        Target;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1926[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Current;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1927[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Result;                                            // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Velocity;                                          // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulatedResult;                                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatSpringState                     SpringState;                                       // 0x34(0xC)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
struct FRigUnit_SpringInterpVectorV2 : public FRigUnit_SimBase
{
public:
	struct FVector                               Target;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Force;                                             // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Current;                                           // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x80(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SimulatedResult;                                   // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVectorSpringState                    SpringState;                                       // 0xB0(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
struct FRigUnit_SpringInterpQuaternionV2 : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_192E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Target;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Torque;                                            // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Current;                                           // 0x60(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1931[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Result;                                            // 0x90(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0xB0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1932[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 SimulatedResult;                                   // 0xD0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuaternionSpringState                SpringState;                                       // 0xF0(0x40)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Timeline
struct FRigUnit_Timeline : public FRigUnit_SimBase
{
public:
	float                                        Speed;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1933[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_TimeLoop
struct FRigUnit_TimeLoop : public FRigUnit_SimBase
{
public:
	float                                        Speed;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Normalize;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1936[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Absolute;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Relative;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipFlop;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Even;                                              // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1937[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AccumulatedAbsolute;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedRelative;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumIterations;                                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_TimeOffsetFloat
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1939[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                Buffer;                                            // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_TimeOffsetVector
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Buffer;                                            // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct ControlRig.RigUnit_TimeOffsetTransform
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
public:
	uint8                                        Pad_1941[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1944[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    Buffer;                                            // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1949[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct ControlRig.RigUnit_VerletIntegrateVector
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
public:
	struct FVector                               Target;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damp;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Force;                                             // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Position;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Acceleration;                                      // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCRSimPoint                           Point;                                             // 0x90(0x40)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0xD0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1954[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
