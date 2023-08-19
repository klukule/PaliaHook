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

enum class EPathFollowingResult : uint8
{
	EPathFollowingResult__Success  = 0,
	EPathFollowingResult__Blocked  = 1,
	EPathFollowingResult__OffPath  = 2,
	EPathFollowingResult__Aborted  = 3,
	EPathFollowingResult__Skipped_DEPRECATED = 4,
	EPathFollowingResult__Invalid  = 5,
	EPathFollowingResult__EPathFollowingResult_MAX = 6,
};

enum class EEnvQueryStatus : uint8
{
	EEnvQueryStatus__Processing    = 0,
	EEnvQueryStatus__Success       = 1,
	EEnvQueryStatus__Failed        = 2,
	EEnvQueryStatus__Aborted       = 3,
	EEnvQueryStatus__OwnerLost     = 4,
	EEnvQueryStatus__MissingParam  = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX = 6,
};

enum class EAIOptionFlag : uint8
{
	EAIOptionFlag__Default         = 0,
	EAIOptionFlag__Enable          = 1,
	EAIOptionFlag__Disable         = 2,
	EAIOptionFlag__MAX             = 3,
};

enum class EFAIDistanceType : uint8
{
	FAIDistanceType__Distance3D    = 0,
	FAIDistanceType__Distance2D    = 1,
	FAIDistanceType__DistanceZ     = 2,
	FAIDistanceType__MAX           = 3,
};

enum class EPawnActionAbortState : uint8
{
	EPawnActionAbortState__NeverStarted = 0,
	EPawnActionAbortState__NotBeingAborted = 1,
	EPawnActionAbortState__MarkPendingAbort = 2,
	EPawnActionAbortState__LatentAbortInProgress = 3,
	EPawnActionAbortState__AbortDone = 4,
	EPawnActionAbortState__MAX     = 5,
};

enum class EPawnActionResult : uint8
{
	EPawnActionResult__NotStarted  = 0,
	EPawnActionResult__InProgress  = 1,
	EPawnActionResult__Success     = 2,
	EPawnActionResult__Failed      = 3,
	EPawnActionResult__Aborted     = 4,
	EPawnActionResult__EPawnActionResult_MAX = 5,
};

enum class EPawnActionEventType : uint8
{
	EPawnActionEventType__Invalid  = 0,
	EPawnActionEventType__FailedToStart = 1,
	EPawnActionEventType__InstantAbort = 2,
	EPawnActionEventType__FinishedAborting = 3,
	EPawnActionEventType__FinishedExecution = 4,
	EPawnActionEventType__Push     = 5,
	EPawnActionEventType__EPawnActionEventType_MAX = 6,
};

enum class EAIRequestPriority : uint8
{
	EAIRequestPriority__SoftScript = 0,
	EAIRequestPriority__Logic      = 1,
	EAIRequestPriority__HardScript = 2,
	EAIRequestPriority__Reaction   = 3,
	EAIRequestPriority__Ultimate   = 4,
	EAIRequestPriority__MAX        = 5,
};

enum class EAILockSource : uint8
{
	EAILockSource__Animation       = 0,
	EAILockSource__Logic           = 1,
	EAILockSource__Script          = 2,
	EAILockSource__Gameplay        = 3,
	EAILockSource__MAX             = 4,
};

enum class EGenericAICheck : uint8
{
	EGenericAICheck__Less          = 0,
	EGenericAICheck__LessOrEqual   = 1,
	EGenericAICheck__Equal         = 2,
	EGenericAICheck__NotEqual      = 3,
	EGenericAICheck__GreaterOrEqual = 4,
	EGenericAICheck__Greater       = 5,
	EGenericAICheck__IsTrue        = 6,
	EGenericAICheck__MAX           = 7,
};

enum class EEnvTestPurpose : uint8
{
	EEnvTestPurpose__Filter        = 0,
	EEnvTestPurpose__Score         = 1,
	EEnvTestPurpose__FilterAndScore = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX = 3,
};

enum class EEnvTestFilterType : uint8
{
	EEnvTestFilterType__Minimum    = 0,
	EEnvTestFilterType__Maximum    = 1,
	EEnvTestFilterType__Range      = 2,
	EEnvTestFilterType__Match      = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX = 4,
};

enum class EEnvTestScoreEquation : uint8
{
	EEnvTestScoreEquation__Linear  = 0,
	EEnvTestScoreEquation__Square  = 1,
	EEnvTestScoreEquation__InverseLinear = 2,
	EEnvTestScoreEquation__SquareRoot = 3,
	EEnvTestScoreEquation__Constant = 4,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX = 5,
};

enum class EEnvTestWeight : uint8
{
	EEnvTestWeight__None           = 0,
	EEnvTestWeight__Square         = 1,
	EEnvTestWeight__Inverse        = 2,
	EEnvTestWeight__Unused         = 3,
	EEnvTestWeight__Constant       = 4,
	EEnvTestWeight__Skip           = 5,
	EEnvTestWeight__EEnvTestWeight_MAX = 6,
};

enum class EEnvTestCost : uint8
{
	EEnvTestCost__Low              = 0,
	EEnvTestCost__Medium           = 1,
	EEnvTestCost__High             = 2,
	EEnvTestCost__EEnvTestCost_MAX = 3,
};

enum class EEnvTestFilterOperator : uint8
{
	EEnvTestFilterOperator__AllPass = 0,
	EEnvTestFilterOperator__AnyPass = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX = 2,
};

enum class EEnvTestScoreOperator : uint8
{
	EEnvTestScoreOperator__AverageScore = 0,
	EEnvTestScoreOperator__MinScore = 1,
	EEnvTestScoreOperator__MaxScore = 2,
	EEnvTestScoreOperator__Multiply = 3,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX = 4,
};

enum class EEnvQueryRunMode : uint8
{
	EEnvQueryRunMode__SingleResult = 0,
	EEnvQueryRunMode__RandomBest5Pct = 1,
	EEnvQueryRunMode__RandomBest25Pct = 2,
	EEnvQueryRunMode__AllMatching  = 3,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX = 4,
};

enum class EEnvQueryParam : uint8
{
	EEnvQueryParam__Float          = 0,
	EEnvQueryParam__Int            = 1,
	EEnvQueryParam__Bool           = 2,
	EEnvQueryParam__EEnvQueryParam_MAX = 3,
};

enum class EAIParamType : uint8
{
	EAIParamType__Float            = 0,
	EAIParamType__Int              = 1,
	EAIParamType__Bool             = 2,
	EAIParamType__MAX              = 3,
};

enum class EEnvQueryTrace : uint8
{
	EEnvQueryTrace__None           = 0,
	EEnvQueryTrace__Navigation     = 1,
	EEnvQueryTrace__GeometryByChannel = 2,
	EEnvQueryTrace__GeometryByProfile = 3,
	EEnvQueryTrace__NavigationOverLedges = 4,
	EEnvQueryTrace__EEnvQueryTrace_MAX = 5,
};

enum class EEnvTraceShape : uint8
{
	EEnvTraceShape__Line           = 0,
	EEnvTraceShape__Box            = 1,
	EEnvTraceShape__Sphere         = 2,
	EEnvTraceShape__Capsule        = 3,
	EEnvTraceShape__EEnvTraceShape_MAX = 4,
};

enum class EEnvOverlapShape : uint8
{
	EEnvOverlapShape__Box          = 0,
	EEnvOverlapShape__Sphere       = 1,
	EEnvOverlapShape__Capsule      = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX = 3,
};

enum class EEnvDirection : uint8
{
	EEnvDirection__TwoPoints       = 0,
	EEnvDirection__Rotation        = 1,
	EEnvDirection__EEnvDirection_MAX = 2,
};

enum class EEnvQueryTestClamping : uint8
{
	EEnvQueryTestClamping__None    = 0,
	EEnvQueryTestClamping__SpecifiedValue = 1,
	EEnvQueryTestClamping__FilterThreshold = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX = 3,
};

enum class ETeamAttitude : uint8
{
	ETeamAttitude__Friendly        = 0,
	ETeamAttitude__Neutral         = 1,
	ETeamAttitude__Hostile         = 2,
	ETeamAttitude__ETeamAttitude_MAX = 3,
};

enum class EPawnSubActionTriggeringPolicy : uint8
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX = 2,
};

enum class EPawnActionFailHandling : uint8
{
	EPawnActionFailHandling__RequireSuccess = 0,
	EPawnActionFailHandling__IgnoreFailure = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX = 2,
};

enum class EPawnActionMoveMode : uint8
{
	EPawnActionMoveMode__UsePathfinding = 0,
	EPawnActionMoveMode__StraightLine = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX = 2,
};

enum class EBTNodeResult : uint8
{
	EBTNodeResult__Succeeded       = 0,
	EBTNodeResult__Failed          = 1,
	EBTNodeResult__Aborted         = 2,
	EBTNodeResult__InProgress      = 3,
	EBTNodeResult__EBTNodeResult_MAX = 4,
};

enum class EBTFlowAbortMode : uint8
{
	EBTFlowAbortMode__None         = 0,
	EBTFlowAbortMode__LowerPriority = 1,
	EBTFlowAbortMode__Self         = 2,
	EBTFlowAbortMode__Both         = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX = 4,
};

enum class EBasicKeyOperation : uint8
{
	EBasicKeyOperation__Set        = 0,
	EBasicKeyOperation__NotSet     = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX = 2,
};

enum class EArithmeticKeyOperation : uint8
{
	EArithmeticKeyOperation__Equal = 0,
	EArithmeticKeyOperation__NotEqual = 1,
	EArithmeticKeyOperation__Less  = 2,
	EArithmeticKeyOperation__LessOrEqual = 3,
	EArithmeticKeyOperation__Greater = 4,
	EArithmeticKeyOperation__GreaterOrEqual = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX = 6,
};

enum class ETextKeyOperation : uint8
{
	ETextKeyOperation__Equal       = 0,
	ETextKeyOperation__NotEqual    = 1,
	ETextKeyOperation__Contain     = 2,
	ETextKeyOperation__NotContain  = 3,
	ETextKeyOperation__ETextKeyOperation_MAX = 4,
};

enum class EBTChildIndex : uint8
{
	EBTChildIndex__FirstNode       = 0,
	EBTChildIndex__TaskNode        = 1,
	EBTChildIndex__EBTChildIndex_MAX = 2,
};

enum class EBTDecoratorLogic : uint8
{
	EBTDecoratorLogic__Invalid     = 0,
	EBTDecoratorLogic__Test        = 1,
	EBTDecoratorLogic__And         = 2,
	EBTDecoratorLogic__Or          = 3,
	EBTDecoratorLogic__Not         = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX = 5,
};

enum class EBTParallelMode : uint8
{
	EBTParallelMode__AbortBackground = 0,
	EBTParallelMode__WaitForBackground = 1,
	EBTParallelMode__EBTParallelMode_MAX = 2,
};

enum class EBTBlackboardRestart : uint8
{
	EBTBlackboardRestart__ValueChange = 0,
	EBTBlackboardRestart__ResultChange = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX = 2,
};

enum class EBlackBoardEntryComparison : uint8
{
	EBlackBoardEntryComparison__Equal = 0,
	EBlackBoardEntryComparison__NotEqual = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX = 2,
};

enum class EPathExistanceQueryType : uint8
{
	EPathExistanceQueryType__NavmeshRaycast2D = 0,
	EPathExistanceQueryType__HierarchicalQuery = 1,
	EPathExistanceQueryType__RegularPathFinding = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX = 3,
};

enum class EEQSNormalizationType : uint8
{
	EEQSNormalizationType__Absolute = 0,
	EEQSNormalizationType__RelativeToScores = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX = 2,
};

enum class EEnvQueryHightlightMode : uint8
{
	EEnvQueryHightlightMode__All   = 0,
	EEnvQueryHightlightMode__Best5Pct = 1,
	EEnvQueryHightlightMode__Best25Pct = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX = 3,
};

enum class EPointOnCircleSpacingMethod : uint8
{
	EPointOnCircleSpacingMethod__BySpaceBetween = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX = 2,
};

enum class EEnvTestDistance : uint8
{
	EEnvTestDistance__Distance3D   = 0,
	EEnvTestDistance__Distance2D   = 1,
	EEnvTestDistance__DistanceZ    = 2,
	EEnvTestDistance__DistanceAbsoluteZ = 3,
	EEnvTestDistance__EEnvTestDistance_MAX = 4,
};

enum class EEnvTestDot : uint8
{
	EEnvTestDot__Dot3D             = 0,
	EEnvTestDot__Dot2D             = 1,
	EEnvTestDot__EEnvTestDot_MAX   = 2,
};

enum class EEnvTestPathfinding : uint8
{
	EEnvTestPathfinding__PathExist = 0,
	EEnvTestPathfinding__PathCost  = 1,
	EEnvTestPathfinding__PathLength = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX = 3,
};

enum class EPathFollowingStatus : uint8
{
	EPathFollowingStatus__Idle     = 0,
	EPathFollowingStatus__Waiting  = 1,
	EPathFollowingStatus__Paused   = 2,
	EPathFollowingStatus__Moving   = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX = 4,
};

enum class EPathFollowingAction : uint8
{
	EPathFollowingAction__Error    = 0,
	EPathFollowingAction__NoMove   = 1,
	EPathFollowingAction__DirectMove = 2,
	EPathFollowingAction__PartialPath = 3,
	EPathFollowingAction__PathToGoal = 4,
	EPathFollowingAction__EPathFollowingAction_MAX = 5,
};

enum class EPathFollowingRequestResult : uint8
{
	EPathFollowingRequestResult__Failed = 0,
	EPathFollowingRequestResult__AlreadyAtGoal = 1,
	EPathFollowingRequestResult__RequestSuccessful = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX = 3,
};

enum class EAISenseNotifyType : uint8
{
	EAISenseNotifyType__OnEveryPerception = 0,
	EAISenseNotifyType__OnPerceptionChange = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX = 2,
};

enum class EAITaskPriority : uint8
{
	EAITaskPriority__Lowest        = 0,
	EAITaskPriority__Low           = 64,
	EAITaskPriority__AutonomousAI  = 127,
	EAITaskPriority__High          = 192,
	EAITaskPriority__Ultimate      = 254,
	EAITaskPriority__EAITaskPriority_MAX = 255,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct AIModule.AIStimulus
struct FAIStimulus
{
public:
	float                                        Age;                                               // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ExpirationAge;                                     // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F35[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               StimulusLocation;                                  // 0x10(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReceiverLocation;                                  // 0x28(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F36[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        BitPad_A9 : 1;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bSuccessfullySensed : 1;                           // Mask: 0x2, PropSize: 0x10x54(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F37[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct AIModule.ActorPerceptionUpdateInfo
struct FActorPerceptionUpdateInfo
{
public:
	int32                                        TargetId;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Target;                                            // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F39[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAIStimulus                           Stimulus;                                          // 0x10(0x58)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.AIRequestID
struct FAIRequestID
{
public:
	uint32                                       RequestId;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AIModule.AIMoveRequest
struct FAIMoveRequest
{
public:
	TWeakObjectPtr<class AActor>                 GoalActor;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F4B[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AIModule.IntervalCountdown
struct FIntervalCountdown
{
public:
	float                                        Interval;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AIModule.EnvNamedValue
struct FEnvNamedValue
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIParamType                      ParamType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F50[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.EnvDirection
struct FEnvDirection
{
public:
	TSubclassOf<class UEnvQueryContext>          LineFrom;                                          // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          LineTo;                                            // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          Rotation;                                          // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvDirection                     DirMode;                                           // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F53[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.EnvTraceData
struct FEnvTraceData
{
public:
	int32                                        VersionNum;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F54[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UNavigationQueryFilter>    NavigationFilter;                                  // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectDown;                                       // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectUp;                                         // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentX;                                           // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentY;                                           // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentZ;                                           // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostProjectionVerticalOffset;                      // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 SerializedChannel;                                 // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F56[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TraceProfileName;                                  // 0x2C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvTraceShape                    TraceShape;                                        // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvQueryTrace                    TraceMode;                                         // 0x35(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F58[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bTraceComplex : 1;                                 // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyBlockingHits : 1;                             // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTraceOnNavMesh : 1;                            // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTraceOnGeometry : 1;                           // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanDisableTrace : 1;                              // Mask: 0x10, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanProjectDown : 1;                               // Mask: 0x20, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.EnvOverlapData
struct FEnvOverlapData
{
public:
	float                                        ExtentX;                                           // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentY;                                           // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentZ;                                           // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ShapeOffset;                                       // 0x10(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvOverlapShape                  OverlapShape;                                      // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOnlyBlockingHits : 1;                             // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverlapComplex : 1;                               // Mask: 0x2, PropSize: 0x10x2C(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipOverlapQuerier : 1;                           // Mask: 0x4, PropSize: 0x10x2C(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.EnvQueryResult
struct FEnvQueryResult
{
public:
	uint8                                        Pad_F62[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UEnvQueryItemType>         ItemType;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F63[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OptionIndex;                                       // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryID;                                           // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F64[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AIModule.BlackboardKeySelector
struct FBlackboardKeySelector
{
public:
	TArray<class UBlackboardKeyType*>            AllowedTypes;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class FName                                  SelectedKeyName;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UBlackboardKeyType>        SelectedKeyType;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SelectedKeyID;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F66[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bNoneIsAllowedValue : 1;                           // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F67[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AIModule.AIDynamicParam
struct FAIDynamicParam
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIParamType                      ParamType;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F68[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                BBKey;                                             // 0x10(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
struct FEQSParametrizedQueryExecutionRequest
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIDynamicParam>               QueryConfig;                                       // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                EQSQueryBlackboardKey;                             // 0x18(0x28)(Edit, NativeAccessSpecifierPublic)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bUseBBKeyForQueryTemplate : 1;                     // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6C[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct AIModule.GenericTeamId
struct FGenericTeamId
{
public:
	uint8                                        TeamID;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.SimpleIndexedHandleBase
struct FSimpleIndexedHandleBase
{
public:
	uint8                                        Pad_F6D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x8 - 0x4)
// ScriptStruct AIModule.IndexedHandleBase
struct FIndexedHandleBase : public FSimpleIndexedHandleBase
{
public:
	uint8                                        Pad_F6E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.CompactIndexedHandleBase
struct FCompactIndexedHandleBase
{
public:
	uint8                                        Pad_F6F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.SequentialIDBase
struct FSequentialIDBase
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.PawnActionEvent
struct FPawnActionEvent
{
public:
	class UPawnAction*                           Action;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F72[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AIModule.PawnActionStack
struct FPawnActionStack
{
public:
	class UPawnAction*                           TopAction;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.BehaviorTreeTemplateInfo
struct FBehaviorTreeTemplateInfo
{
public:
	class UBehaviorTree*                         Asset;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBTCompositeNode*                      Template;                                          // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F75[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.BlackboardEntry
struct FBlackboardEntry
{
public:
	class FName                                  EntryName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardKeyType*                    KeyType;                                           // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInstanceSynced : 1;                               // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F76[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.BTDecoratorLogic
struct FBTDecoratorLogic
{
public:
	enum class EBTDecoratorLogic                 Operation;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F77[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       Number;                                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.BTCompositeChild
struct FBTCompositeChild
{
public:
	class UBTCompositeNode*                      ChildComposite;                                    // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBTTaskNode*                           ChildTask;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBTDecorator*>                  Decorators;                                        // 0x10(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FBTDecoratorLogic>             DecoratorOps;                                      // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.AIDataProviderValue
struct FAIDataProviderValue
{
public:
	uint8                                        Pad_F79[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAIDataProvider*                       DataBinding;                                       // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataField;                                         // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct AIModule.AIDataProviderTypedValue
struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
public:
	TSubclassOf<class UObject>                   PropertyType;                                      // 0x20(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x30 - 0x20)
// ScriptStruct AIModule.AIDataProviderStructValue
struct FAIDataProviderStructValue : public FAIDataProviderValue
{
public:
	uint8                                        Pad_F7C[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderIntValue
struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
public:
	int32                                        DefaultValue;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderFloatValue
struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
public:
	float                                        DefaultValue;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderBoolValue
struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
public:
	bool                                         DefaultValue;                                      // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.EnvQueryManagerConfig
struct FEnvQueryManagerConfig
{
public:
	float                                        MaxAllowedTestingTime;                             // 0x0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestQueriesUsingBreadth;                          // 0x4(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F84[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QueryCountWarningThreshold;                        // 0x8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F85[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       QueryCountWarningInterval;                         // 0x10(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ExecutionTimeWarningSeconds;                       // 0x18(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       HandlingResultTimeWarningSeconds;                  // 0x20(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       GenerationTimeWarningSeconds;                      // 0x28(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct AIModule.EnvQueryRequest
struct FEnvQueryRequest
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               Owner;                                             // 0x8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorld*                                World;                                             // 0x10(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F87[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x178 (0x178 - 0x0)
// ScriptStruct AIModule.EnvQueryInstanceCache
struct FEnvQueryInstanceCache
{
public:
	class UEnvQuery*                             Template;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F89[0x170];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AIModule.CrowdAvoidanceConfig
struct FCrowdAvoidanceConfig
{
public:
	float                                        VelocityBias;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredVelocityWeight;                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentVelocityWeight;                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SideBiasWeight;                                    // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactTimeWeight;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactTimeRange;                                   // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomPatternIdx;                                  // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AdaptiveDivisions;                                 // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AdaptiveRings;                                     // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AdaptiveDepth;                                     // 0x1B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
struct FCrowdAvoidanceSamplingPattern
{
public:
	TArray<float>                                Angles;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Radii;                                             // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct AIModule.RecastGraphWrapper
struct FRecastGraphWrapper
{
public:
	class ARecastNavMesh*                        RecastNavMeshActor;                                // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F8B[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
struct FActorPerceptionBlueprintInfo
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIStimulus>                   LastSensedStimuli;                                 // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsHostile : 1;                                    // Mask: 0x1, PropSize: 0x10x18(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.AISenseAffiliationFilter
struct FAISenseAffiliationFilter
{
public:
	uint8                                        bDetectEnemies : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDetectNeutrals : 1;                               // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDetectFriendlies : 1;                             // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AIModule.AIDamageEvent
struct FAIDamageEvent
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F90[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamagedActor;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.AINoiseEvent
struct FAINoiseEvent
{
public:
	uint8                                        Pad_F92[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               NoiseLocation;                                     // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Loudness;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F93[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.AIPredictionEvent
struct FAIPredictionEvent
{
public:
	class AActor*                                Requestor;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PredictedActor;                                    // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F94[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.AISightEvent
struct FAISightEvent
{
public:
	uint8                                        Pad_F98[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SeenActor;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Observer;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AIModule.AITeamStimulusEvent
struct FAITeamStimulusEvent
{
public:
	uint8                                        Pad_F9B[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Broadcaster;                                       // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                Enemy;                                             // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AIModule.AITouchEvent
struct FAITouchEvent
{
public:
	uint8                                        Pad_F9D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TouchReceiver;                                     // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
