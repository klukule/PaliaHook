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

enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,
};

enum class EGameplayEffectAttributeCaptureSource : uint8
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2,
};

enum class EGameplayCueEvent : uint8
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4,
};

enum class EGameplayAbilityActivationMode : uint8
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__Rejected = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 5,
};

enum class EAbilityGenericReplicatedEvent : uint8
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__GameCustom6 = 11,
	EAbilityGenericReplicatedEvent__MAX = 12,
};

enum class EGameplayCuePayloadType : uint8
{
	EGameplayCuePayloadType__CueParameters = 0,
	EGameplayCuePayloadType__FromSpec = 1,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 2,
};

enum class EGameplayAbilityInputBinds : uint8
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9,
};

enum class ETargetDataFilterSelf : uint8
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3,
};

enum class EAbilityTaskWaitState : uint8
{
	EAbilityTaskWaitState__WaitingOnGame = 1,
	EAbilityTaskWaitState__WaitingOnUser = 2,
	EAbilityTaskWaitState__WaitingOnAvatar = 4,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX = 5,
};

enum class ERootMotionMoveToActorTargetOffsetType : uint8
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX = 3,
};

enum class EAbilityTaskNetSyncType : uint8
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3,
};

enum class EWaitAttributeChangeComparison : uint8
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7,
};

enum class EWaitGameplayTagQueryTriggerCondition : uint8
{
	EWaitGameplayTagQueryTriggerCondition__WhenTrue = 0,
	EWaitGameplayTagQueryTriggerCondition__WhenFalse = 1,
	EWaitGameplayTagQueryTriggerCondition__EWaitGameplayTagQueryTriggerCondition_MAX = 2,
};

enum class EGameplayEffectReplicationMode : uint8
{
	EGameplayEffectReplicationMode__Minimal = 0,
	EGameplayEffectReplicationMode__Mixed = 1,
	EGameplayEffectReplicationMode__Full = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX = 3,
};

enum class EGameplayTargetingConfirmation : uint8
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4,
};

enum class EGameplayAbilityTargetingLocationType : uint8
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3,
};

enum class EGameplayAbilityInstancingPolicy : uint8
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3,
};

enum class EGameplayAbilityNetExecutionPolicy : uint8
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4,
};

enum class EGameplayAbilityNetSecurityPolicy : uint8
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly = 3,
	EGameplayAbilityNetSecurityPolicy__EGameplayAbilityNetSecurityPolicy_MAX = 4,
};

enum class EGameplayAbilityReplicationPolicy : uint8
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2,
};

enum class EGameplayAbilityTriggerSource : uint8
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3,
};

enum class ERepAnimPositionMethod : uint8
{
	ERepAnimPositionMethod__Position = 0,
	ERepAnimPositionMethod__CurrentSectionId = 1,
	ERepAnimPositionMethod__ERepAnimPositionMethod_MAX = 2,
};

enum class EGameplayCueNotify_EffectPlaySpace : uint8
{
	EGameplayCueNotify_EffectPlaySpace__WorldSpace = 0,
	EGameplayCueNotify_EffectPlaySpace__CameraSpace = 1,
	EGameplayCueNotify_EffectPlaySpace__EGameplayCueNotify_MAX = 2,
};

enum class EGameplayCueNotify_LocallyControlledSource : uint8
{
	EGameplayCueNotify_LocallyControlledSource__InstigatorActor = 0,
	EGameplayCueNotify_LocallyControlledSource__TargetActor = 1,
	EGameplayCueNotify_LocallyControlledSource__EGameplayCueNotify_MAX = 2,
};

enum class EGameplayCueNotify_LocallyControlledPolicy : uint8
{
	EGameplayCueNotify_LocallyControlledPolicy__Always = 0,
	EGameplayCueNotify_LocallyControlledPolicy__LocalOnly = 1,
	EGameplayCueNotify_LocallyControlledPolicy__NotLocal = 2,
	EGameplayCueNotify_LocallyControlledPolicy__EGameplayCueNotify_MAX = 3,
};

enum class EGameplayCueNotify_AttachPolicy : uint8
{
	EGameplayCueNotify_AttachPolicy__DoNotAttach = 0,
	EGameplayCueNotify_AttachPolicy__AttachToTarget = 1,
	EGameplayCueNotify_AttachPolicy__EGameplayCueNotify_MAX = 2,
};

enum class EGameplayEffectMagnitudeCalculation : uint8
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4,
};

enum class EAttributeBasedFloatCalculationType : uint8
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 4,
};

enum class EGameplayEffectScopedModifierAggregatorType : uint8
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient = 1,
	EGameplayEffectScopedModifierAggregatorType__EGameplayEffectScopedModifierAggregatorType_MAX = 2,
};

enum class EGameplayEffectDurationType : uint8
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3,
};

enum class EGameplayEffectStackingDurationPolicy : uint8
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2,
};

enum class EGameplayEffectStackingPeriodPolicy : uint8
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2,
};

enum class EGameplayEffectStackingExpirationPolicy : uint8
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX = 3,
};

enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy__EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3,
};

enum class EGameplayModEvaluationChannel : uint8
{
	EGameplayModEvaluationChannel__Channel0 = 0,
	EGameplayModEvaluationChannel__Channel1 = 1,
	EGameplayModEvaluationChannel__Channel2 = 2,
	EGameplayModEvaluationChannel__Channel3 = 3,
	EGameplayModEvaluationChannel__Channel4 = 4,
	EGameplayModEvaluationChannel__Channel5 = 5,
	EGameplayModEvaluationChannel__Channel6 = 6,
	EGameplayModEvaluationChannel__Channel7 = 7,
	EGameplayModEvaluationChannel__Channel8 = 8,
	EGameplayModEvaluationChannel__Channel9 = 9,
	EGameplayModEvaluationChannel__Channel_MAX = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX = 11,
};

enum class EGameplayModOp : uint8
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4,
};

enum class EGameplayEffectStackingType : uint8
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3,
};

enum class EGameplayTagEventType : uint8
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAttribute
struct FGameplayAttribute
{
public:
	class FString                                AttributeName;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          Attribute;                                         // 0x10(0x20)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStruct*                               AttributeOwner;                                    // 0x30(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
struct FGameplayEffectModifiedAttribute
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TotalMagnitude;                                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
struct FGameplayEffectAttributeCaptureDefinition
{
public:
	struct FGameplayAttribute                    AttributeToCapture;                                // 0x0(0x38)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectAttributeCaptureSource AttributeSource;                                   // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapshot;                                         // 0x39(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED3[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
struct FGameplayEffectAttributeCaptureSpec
{
public:
	struct FGameplayEffectAttributeCaptureDefinition BackingDefinition;                                 // 0x0(0x40)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ED4[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
struct FGameplayEffectAttributeCaptureSpecContainer
{
public:
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bHasNonSnapshottedAttributes;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ED6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.TagContainerAggregator
struct FTagContainerAggregator
{
public:
	struct FGameplayTagContainer                 CapturedActorTags;                                 // 0x0(0x20)(NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 CapturedSpecTags;                                  // 0x20(0x20)(NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 ScopedTags;                                        // 0x40(0x20)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_ED7[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.ModifierSpec
struct FModifierSpec
{
public:
	float                                        EvaluatedMagnitude;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.ScalableFloat
struct FScalableFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCurveTableRowHandle                  Curve;                                             // 0x8(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistryType                     RegistryType;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
struct FGameplayAbilitySpecHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
struct FGameplayAbilitySpecDef
{
public:
	TSubclassOf<class UGameplayAbility>          Ability;                                           // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        LevelScalableFloat;                                // 0x8(0x28)(Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy;                                     // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDD[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilitySpecHandle            AssignedHandle;                                    // 0x90(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EDE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
struct FGameplayEffectContextHandle
{
public:
	uint8                                        Pad_EDF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x298 (0x298 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpec
struct FGameplayEffectSpec
{
public:
	class UGameplayEffect*                       Def;                                               // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                        // 0x18(0x28)(RepSkip, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE2[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToApplyToTarget;                             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EE4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagContainerAggregator               CapturedSourceTags;                                // 0x60(0x88)(RepSkip, NativeAccessSpecifierPublic)
	struct FTagContainerAggregator               CapturedTargetTags;                                // 0xE8(0x88)(RepSkip, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DynamicGrantedTags;                                // 0x170(0x20)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DynamicAssetTags;                                  // 0x190(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FModifierSpec>                 Modifiers;                                         // 0x1B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StackCount;                                        // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCompletedSourceAttributeCapture : 1;              // Mask: 0x1, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCompletedTargetAttributeCapture : 1;              // Mask: 0x2, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDurationLocked : 1;                               // Mask: 0x4, PropSize: 0x10x1C4(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_94 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_EE9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayAbilitySpecDef>       GrantedAbilitySpecs;                               // 0x1C8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_EEB[0xA0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x278(0x18)(NativeAccessSpecifierPrivate)
	float                                        Level;                                             // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EED[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.PredictionKey
struct FPredictionKey
{
public:
	class UPackageMap*                           PredictiveConnection;                              // 0x0(0x8)(ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Current;                                           // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        Base;                                              // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsStale;                                          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsServerInitiated;                                // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EEE[0xA];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x34C (0x358 - 0xC)
// ScriptStruct GameplayAbilities.ActiveGameplayEffect
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_EF0[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectSpec                   Spec;                                              // 0x18(0x298)(NativeAccessSpecifierPublic)
	struct FPredictionKey                        PredictionKey;                                     // 0x2B0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartServerWorldTime;                              // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedStartServerWorldTime;                        // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartWorldTime;                                    // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInhibited;                                      // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF1[0x83];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
struct FActiveGameplayEffectHandle
{
public:
	int32                                        Handle;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bPassedFiltersAndWasExecuted;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EF2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
struct FGameplayEffectSpecHandle
{
public:
	uint8                                        Pad_EF4[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueParameters
struct FGameplayCueParameters
{
public:
	float                                        NormalizedMagnitude;                               // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawMagnitude;                                      // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x8(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTag                          MatchedTagName;                                    // 0x20(0x8)(BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          OriginalTag;                                       // 0x28(0x8)(BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedSourceTags;                              // 0x30(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedTargetTags;                              // 0x50(0x20)(BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 Location;                                          // 0x70(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             Normal;                                            // 0x88(0x18)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Instigator;                                        // 0xA0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 EffectCauser;                                      // 0xA8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0xB0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPhysicalMaterial>      PhysicalMaterial;                                  // 0xB8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0xC0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityLevel;                                      // 0xC4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        TargetAttachComponent;                             // 0xC8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateLocationWhenUsingMinimalRepProxy;        // 0xD0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
struct FGameplayEffectRemovalInfo
{
public:
	bool                                         bPrematureRemoval;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StackCount;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
struct FGameplayAbilityTargetDataHandle
{
public:
	uint8                                        Pad_F01[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEventData
struct FGameplayEventData
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalObject;                                    // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalObject2;                                   // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          ContextHandle;                                     // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 InstigatorTags;                                    // 0x40(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTags;                                        // 0x60(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        EventMagnitude;                                    // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x88(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagRequirements
struct FGameplayTagRequirements
{
public:
	struct FGameplayTagContainer                 RequireTags;                                       // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 IgnoreTags;                                        // 0x20(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
struct FGameplayTargetDataFilterHandle
{
public:
	uint8                                        Pad_F05[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
struct FGameplayAbilityActivationInfo
{
public:
	enum class EGameplayAbilityActivationMode    ActivationMode;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanBeEndedByOtherInstance : 1;                    // Mask: 0x1, PropSize: 0x10x1(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_95 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F07[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKeyWhenActivated;                        // 0x8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectQuery
struct FGameplayEffectQuery
{
public:
	uint8                                        Pad_F08[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           CustomMatchDelegate_BP;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     OwningTagQuery;                                    // 0x20(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     EffectTagQuery;                                    // 0x68(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayTagQuery                     SourceTagQuery;                                    // 0xB0(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FGameplayAttribute                    ModifyingAttribute;                                // 0xF8(0x38)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EffectSource;                                      // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           EffectDefinition;                                  // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F09[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
struct FGameplayEffectSpecForRPC
{
public:
	class UGameplayEffect*                       Def;                                               // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectModifiedAttribute> ModifiedAttributes;                                // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x18(0x18)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedSourceTags;                              // 0x30(0x20)(NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AggregatedTargetTags;                              // 0x50(0x20)(NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AbilityLevel;                                      // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
struct FServerAbilityRPCBatch
{
public:
	struct FGameplayAbilitySpecHandle            AbilitySpecHandle;                                 // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x8(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x20(0x28)(NativeAccessSpecifierPublic)
	bool                                         InputPressed;                                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Ended;                                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Started;                                           // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0E[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x28 - 0xC)
// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_F0F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x118 - 0x108)
// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
public:
	TArray<struct FReplicatedPredictionKeyItem>  PredictionKeys;                                    // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
struct FMinimalReplicationTagCountMap
{
public:
	uint8                                        Pad_F12[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               Owner;                                             // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F14[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x104 (0x110 - 0xC)
// ScriptStruct GameplayAbilities.ActiveGameplayCue
struct FActiveGameplayCue : public FFastArraySerializerItem
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0xC(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F16[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                Parameters;                                        // 0x30(0xD8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bPredictivelyRemoved;                              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F18[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x128 - 0x108)
// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
public:
	TArray<struct FActiveGameplayCue>            GameplayCues;                                      // 0x108(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               Owner;                                             // 0x120(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x370 (0x478 - 0x108)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
public:
	uint8                                        Pad_F1B[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FActiveGameplayEffect>         GameplayEffects_Internal;                          // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1D[0x310];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayEffect*>               ApplicationImmunityQueryEffects;                   // 0x450(0x10)(ZeroConstructor, RepSkip, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1E[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
struct FGameplayAbilityLocalAnimMontage
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PlayInstanceId;                                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F1F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      AnimatingAbility;                                  // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
struct FGameplayAbilityRepAnimMontage
{
public:
	class UAnimMontage*                          AnimMontage;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Position;                                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NextSectionID;                                     // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PlayInstanceId;                                    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRepPosition : 1;                                  // Mask: 0x1, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IsStopped : 1;                                     // Mask: 0x2, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SkipPositionCorrection : 1;                        // Mask: 0x4, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipPlayRate : 1;                                 // Mask: 0x8, PropSize: 0x10x16(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_96 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F24[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        SectionIdToPlay;                                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F26[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xDC (0xE8 - 0xC)
// ScriptStruct GameplayAbilities.GameplayAbilitySpec
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
public:
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0xC(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      Ability;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InputID;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ActiveCount;                                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InputPressed : 1;                                  // Mask: 0x1, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RemoveAfterActivation : 1;                         // Mask: 0x2, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PendingRemove : 1;                                 // Mask: 0x4, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bActivateOnce : 1;                                 // Mask: 0x8, PropSize: 0x10x29(0x1)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_97 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F2A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityActivationInfo        ActivationInfo;                                    // 0x30(0x20)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 DynamicAbilityTags;                                // 0x50(0x20)(NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>              NonReplicatedInstances;                            // 0x70(0x10)(ZeroConstructor, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UGameplayAbility*>              ReplicatedInstances;                               // 0x80(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           GameplayEffectHandle;                              // 0x90(0x8)(RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2B[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x120 - 0x108)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
public:
	TArray<struct FGameplayAbilitySpec>          Items;                                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               Owner;                                             // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.AttributeDefaults
struct FAttributeDefaults
{
public:
	TSubclassOf<class UAttributeSet>             Attributes;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataTable*                            DefaultStartingTable;                              // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
struct FGameplayAbilityRepAnimMontageNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_F3A[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
struct FGameplayCuePendingExecute
{
public:
	uint8                                        Pad_F3B[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPredictionKey                        PredictionKey;                                     // 0x18(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCuePayloadType           PayloadType;                                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               OwningComponent;                                   // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayEffectSpecForRPC             FromSpec;                                          // 0x40(0x78)(NativeAccessSpecifierPublic)
	struct FGameplayCueParameters                CueParameters;                                     // 0xB8(0xD8)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotifyActorArray
struct FGameplayCueNotifyActorArray
{
public:
	TArray<class AGameplayCueNotify_Actor*>      Actors;                                            // 0x0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct GameplayAbilities.PreallocationInfo
struct FPreallocationInfo
{
public:
	TMap<TSubclassOf<class UObject>, struct FGameplayCueNotifyActorArray> PreallocatedInstances;                             // 0x0(0x50)(Transient, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class AGameplayCueNotify_Actor>> ClassesNeedingPreallocation;                       // 0x50(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x1 - 0x1)
// ScriptStruct GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
struct FGameplayEffectContextHandleNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectContextNetSerializerConfig
struct FGameplayEffectContextNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_F3E[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayAbilities.PredictionKeyNetSerializerConfig
struct FPredictionKeyNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_F40[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct GameplayAbilities.AbilityTriggerData
struct FAbilityTriggerData
{
public:
	struct FGameplayTag                          TriggerTag;                                        // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayAbilityTriggerSource     TriggerSource;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F42[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
struct FGameplayAbilityBindInfo
{
public:
	enum class EGameplayAbilityInputBinds        Command;                                           // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F43[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGameplayAbility>          GameplayAbilityClass;                              // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
struct FGameplayTargetDataFilter
{
public:
	uint8                                        Pad_F44[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SelfActor;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    RequiredActorClass;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETargetDataFilterSelf             SelfFilter;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseFilter;                                    // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F46[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.WorldReticleParameters
struct FWorldReticleParameters
{
public:
	struct FVector                               AOEScale;                                          // 0x0(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.NetSerializeScriptStructCache
struct FNetSerializeScriptStructCache
{
public:
	TArray<class UScriptStruct*>                 ScriptStructs;                                     // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAttributeData
struct FGameplayAttributeData
{
public:
	uint8                                        Pad_F49[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BaseValue;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentValue;                                      // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct GameplayAbilities.AttributeMetaData
struct FAttributeMetaData : public FTableRowBase
{
public:
	float                                        BaseValue;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DerivedAttributeInfo;                              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanStack;                                         // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
struct FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_F4E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
struct FGameplayAbilityTargetingLocationInfo
{
public:
	uint8                                        Pad_F4F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EGameplayAbilityTargetingLocationType LocationType;                                      // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F50[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LiteralTransform;                                  // 0x20(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x80(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMeshComponent*                        SourceComponent;                                   // 0x88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayAbility*                      SourceAbility;                                     // 0x90(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x98(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x150 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_F52[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;                                    // 0x10(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameplayAbilityTargetingLocationInfo TargetLocation;                                    // 0xB0(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
public:
	uint8                                        Pad_F53[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetingLocationInfo SourceLocation;                                    // 0x10(0xA0)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class AActor>>         TargetActorArray;                                  // 0xB0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
public:
	struct FHitResult                            HitResult;                                         // 0x8(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHitReplaced;                                      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F55[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
struct FGameplayAbilityActorInfo
{
public:
	uint8                                        Pad_F56[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 OwnerActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 AvatarActor;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APlayerController>      PlayerController;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAbilitySystemComponent> AbilitySystemComponent;                            // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USkeletalMeshComponent> SkeletalMeshComponent;                             // 0x28(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UAnimInstance>          AnimInstance;                                      // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMovementComponent>     MovementComponent;                                 // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AffectedAnimInstanceTag;                           // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.AbilityEndedData
struct FAbilityEndedData
{
public:
	class UGameplayAbility*                      AbilityThatEnded;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayAbilitySpecHandle            AbilitySpecHandle;                                 // 0x8(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateEndAbility;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWasCancelled;                                     // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F58[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
struct FAbilityTaskDebugMessage
{
public:
	class UGameplayTask*                         FromTask;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
struct FGameplayAbilitySpecHandleAndPredictionKey
{
public:
	struct FGameplayAbilitySpecHandle            AbilityHandle;                                     // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PredictionKeyAtCreation;                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTag
struct FGameplayCueTag
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x350 (0x350 - 0x0)
// ScriptStruct GameplayAbilities.MinimalGameplayCueReplicationProxy
struct FMinimalGameplayCueReplicationProxy
{
public:
	uint8                                        Pad_F5A[0x340];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbilitySystemComponent*               Owner;                                             // 0x340(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F5B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
struct FGameplayCueObjectLibrary
{
public:
	TArray<class FString>                        Paths;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F60[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObjectLibrary*                        ActorObjectLibrary;                                // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObjectLibrary*                        StaticObjectLibrary;                               // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayCueSet*                       CueSet;                                            // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F62[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bShouldSyncScan;                                   // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldAsyncLoad;                                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSyncLoad;                                   // 0x4E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBeenInitialized;                               // 0x4F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_SpawnCondition
struct FGameplayCueNotify_SpawnCondition
{
public:
	enum class EGameplayCueNotify_LocallyControlledSource LocallyControlledSource;                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueNotify_LocallyControlledPolicy LocallyControlledPolicy;                           // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F66[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ChanceToPlay;                                      // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EPhysicalSurface>          AllowedSurfaceTypes;                               // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_F67[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EPhysicalSurface>          RejectedSurfaceTypes;                              // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_F69[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_PlacementInfo
struct FGameplayCueNotify_PlacementInfo
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueNotify_AttachPolicy   AttachPolicy;                                      // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AttachmentRule;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverrideRotation : 1;                             // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideScale : 1;                                // Mask: 0x2, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9A : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F6E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              RotationOverride;                                  // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               ScaleOverride;                                     // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_SpawnResult
struct FGameplayCueNotify_SpawnResult
{
public:
	TArray<class UFXSystemComponent*>            FxSystemComponents;                                // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UCameraShakeBase*>              CameraShakes;                                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TScriptInterface<class ICameraLensEffectInterface>> CameraLensEffects;                                 // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UForceFeedbackComponent*               ForceFeedbackComponent;                            // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ForceFeedbackTargetPC;                             // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDecalComponent*                       DecalComponent;                                    // 0x50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_ParticleInfo
struct FGameplayCueNotify_ParticleInfo
{
public:
	struct FGameplayCueNotify_SpawnCondition     SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_PlacementInfo      PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        NiagaraSystem;                                     // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadow : 1;                                   // Mask: 0x4, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F74[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
struct FGameplayCueNotify_SoundParameterInterfaceInfo
{
public:
	class FName                                  StopTriggerName;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_SoundInfo
struct FGameplayCueNotify_SoundInfo
{
public:
	struct FGameplayCueNotify_SpawnCondition     SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_PlacementInfo      PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class USoundBase*                            Sound;                                             // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundBase*                            SoundCue;                                          // 0x80(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoopingFadeOutDuration;                            // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoopingFadeVolumeLevel;                            // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_SoundParameterInterfaceInfo SoundParameterInterfaceInfo;                       // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseSoundParameterInterface : 1;                   // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F78[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_CameraShakeInfo
struct FGameplayCueNotify_CameraShakeInfo
{
public:
	struct FGameplayCueNotify_SpawnCondition     SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_PlacementInfo      PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          CameraShake;                                       // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShakeScale;                                        // 0x80(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayCueNotify_EffectPlaySpace PlaySpace;                                         // 0x84(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F81[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayInWorld : 1;                                  // Mask: 0x4, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9D : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F83[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WorldInnerRadius;                                  // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldOuterRadius;                                  // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldFalloffExponent;                              // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
struct FGameplayCueNotify_CameraLensEffectInfo
{
public:
	struct FGameplayCueNotify_SpawnCondition     SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_PlacementInfo      PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class AActor>                    CameraLensEffect;                                  // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayInWorld : 1;                                  // Mask: 0x4, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9E : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F86[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WorldInnerRadius;                                  // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WorldOuterRadius;                                  // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
struct FGameplayCueNotify_ForceFeedbackInfo
{
public:
	struct FGameplayCueNotify_SpawnCondition     SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_PlacementInfo      PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UForceFeedbackEffect*                  ForceFeedbackEffect;                               // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ForceFeedbackTag;                                  // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsLooping : 1;                                    // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x2, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x4, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPlayInWorld : 1;                                  // Mask: 0x8, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9F : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F8E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WorldIntensity;                                    // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UForceFeedbackAttenuation*             WorldAttenuation;                                  // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_DecalInfo
struct FGameplayCueNotify_DecalInfo
{
public:
	struct FGameplayCueNotify_SpawnCondition     SpawnConditionOverride;                            // 0x0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayCueNotify_PlacementInfo      PlacementInfoOverride;                             // 0x38(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DecalMaterial;                                     // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               DecalSize;                                         // 0x80(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideSpawnCondition : 1;                       // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePlacementInfo : 1;                        // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFadeOut : 1;                              // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A0 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_F92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeOutStartDelay;                                 // 0x9C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDuration;                                   // 0xA0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F93[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x288 (0x288 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_BurstEffects
struct FGameplayCueNotify_BurstEffects
{
public:
	TArray<struct FGameplayCueNotify_ParticleInfo> BurstParticles;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayCueNotify_SoundInfo>  BurstSounds;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_CameraShakeInfo    BurstCameraShake;                                  // 0x20(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_CameraLensEffectInfo BurstCameraLensEffect;                             // 0xB8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_ForceFeedbackInfo  BurstForceFeedback;                                // 0x148(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_DecalInfo          BurstDecal;                                        // 0x1E0(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotify_LoopingEffects
struct FGameplayCueNotify_LoopingEffects
{
public:
	TArray<struct FGameplayCueNotify_ParticleInfo> LoopingParticles;                                  // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayCueNotify_SoundInfo>  LoopingSounds;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_CameraShakeInfo    LoopingCameraShake;                                // 0x20(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_CameraLensEffectInfo LoopingCameraLensEffect;                           // 0xB8(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FGameplayCueNotify_ForceFeedbackInfo  LoopingForceFeedback;                              // 0x148(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueNotifyData
struct FGameplayCueNotifyData
{
public:
	struct FGameplayTag                          GameplayCueTag;                                    // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       GameplayCueNotifyObj;                              // 0x8(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   LoadedGameplayCueClass;                            // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
struct FGameplayCueTranslatorNodeIndex
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
struct FGameplayCueTranslationLink
{
public:
	class UGameplayCueTranslator*                RulesCDO;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
struct FGameplayCueTranslatorNode
{
public:
	TArray<struct FGameplayCueTranslationLink>   Links;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGameplayCueTranslatorNodeIndex       CachedIndex;                                       // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          CachedGameplayTag;                                 // 0x14(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CachedGameplayTagName;                             // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA5[0x54];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
struct FGameplayCueTranslationManager
{
public:
	TArray<struct FGameplayCueTranslatorNode>    TranslationLUT;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                         // 0x10(0x50)(NativeAccessSpecifierPrivate)
	class UGameplayTagsManager*                  TagManager;                                        // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FA7[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct GameplayAbilities.AttributeBasedFloat
struct FAttributeBasedFloat
{
public:
	struct FScalableFloat                        Coefficient;                                       // 0x0(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PreMultiplyAdditiveValue;                          // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PostMultiplyAdditiveValue;                         // 0x50(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayEffectAttributeCaptureDefinition BackingAttribute;                                  // 0x78(0x40)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  AttributeCurve;                                    // 0xB8(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttributeBasedFloatCalculationType AttributeCalculationType;                          // 0xC8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModEvaluationChannel     FinalChannel;                                      // 0xC9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FAE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 SourceTagFilter;                                   // 0xD0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 TargetTagFilter;                                   // 0xF0(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
struct FCustomCalculationBasedFloat
{
public:
	TSubclassOf<class UGameplayModMagnitudeCalculation> CalculationClassMagnitude;                         // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScalableFloat                        Coefficient;                                       // 0x8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PreMultiplyAdditiveValue;                          // 0x30(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        PostMultiplyAdditiveValue;                         // 0x58(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FCurveTableRowHandle                  FinalLookupCurve;                                  // 0x80(0x10)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayAbilities.SetByCallerFloat
struct FSetByCallerFloat
{
public:
	class FName                                  DataName;                                          // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          DataTag;                                           // 0x8(0x8)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
struct FGameplayEffectModifierMagnitude
{
public:
	enum class EGameplayEffectMagnitudeCalculation MagnitudeCalculationType;                          // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FB1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ScalableFloatMagnitude;                            // 0x8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FAttributeBasedFloat                  AttributeBasedMagnitude;                           // 0x30(0x110)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FCustomCalculationBasedFloat          CustomMagnitude;                                   // 0x140(0x90)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSetByCallerFloat                     SetByCallerMagnitude;                              // 0x1D0(0x10)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
struct FGameplayModEvaluationChannelSettings
{
public:
	enum class EGameplayModEvaluationChannel     Channel;                                           // 0x0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x2B8 (0x2B8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
struct FGameplayEffectExecutionScopedModifierInfo
{
public:
	struct FGameplayEffectAttributeCaptureDefinition CapturedAttribute;                                 // 0x0(0x40)(Edit, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          TransientAggregatorIdentifier;                     // 0x40(0x8)(Edit, DisableEditOnInstance, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayEffectScopedModifierAggregatorType AggregatorType;                                    // 0x48(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x49(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEffectModifierMagnitude      ModifierMagnitude;                                 // 0x50(0x1E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings;                         // 0x230(0x1)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagRequirements              SourceTags;                                        // 0x238(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTags;                                        // 0x278(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
struct FConditionalGameplayEffect
{
public:
	TSubclassOf<class UGameplayEffect>           EffectClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequiredSourceTags;                                // 0x8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
struct FGameplayEffectExecutionDefinition
{
public:
	TSubclassOf<class UGameplayEffectExecutionCalculation> CalculationClass;                                  // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PassedInTags;                                      // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                              // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   ConditionalGameplayEffectClasses;                  // 0x38(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FConditionalGameplayEffect>    ConditionalGameplayEffects;                        // 0x48(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x2D0 (0x2D0 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModifierInfo
struct FGameplayModifierInfo
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        Magnitude;                                         // 0x40(0x28)(NativeAccessSpecifierPublic)
	struct FGameplayEffectModifierMagnitude      ModifierMagnitude;                                 // 0x68(0x1E0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayModEvaluationChannelSettings EvaluationChannelSettings;                         // 0x248(0x1)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagRequirements              SourceTags;                                        // 0x250(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagRequirements              TargetTags;                                        // 0x290(0x40)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCue
struct FGameplayEffectCue
{
public:
	struct FGameplayAttribute                    MagnitudeAttribute;                                // 0x0(0x38)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinLevel;                                          // 0x38(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLevel;                                          // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 GameplayCueTags;                                   // 0x40(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct GameplayAbilities.InheritedTagContainer
struct FInheritedTagContainer
{
public:
	struct FGameplayTagContainer                 CombinedTags;                                      // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Added;                                             // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Removed;                                           // 0x40(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
struct FActiveGameplayEffectQuery
{
public:
	uint8                                        Pad_FC8[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
struct FGameplayEffectCustomExecutionParameters
{
public:
	uint8                                        Pad_FC9[0xF8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
struct FGameplayModifierEvaluatedData
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayModOp                    ModifierOp;                                        // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Magnitude;                                         // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActiveGameplayEffectHandle           Handle;                                            // 0x40(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValid;                                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
struct FGameplayEffectCustomExecutionOutput
{
public:
	TArray<struct FGameplayModifierEvaluatedData> OutputModifiers;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        bTriggerConditionalGameplayEffects : 1;            // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHandledStackCountManually : 1;                    // Mask: 0x2, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHandledGameplayCuesManually : 1;                  // Mask: 0x4, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FCD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct GameplayAbilities.GameplayEffectContext
struct FGameplayEffectContext
{
public:
	uint8                                        Pad_FD2[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 Instigator;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 EffectCauser;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>       AbilityCDO;                                        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameplayAbility>       AbilityInstanceNotReplicated;                      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AbilityLevel;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAbilitySystemComponent> InstigatorAbilitySystemComponent;                  // 0x34(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class AActor>>         Actors;                                            // 0x40(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD6[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               WorldOrigin;                                       // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHasWorldOrigin : 1;                               // Mask: 0x1, PropSize: 0x10x78(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReplicateSourceObject : 1;                        // Mask: 0x2, PropSize: 0x10x78(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FD8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMapping
struct FGameplayTagBlueprintPropertyMapping
{
public:
	struct FGameplayTag                          TagToMap;                                          // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          PropertyToEdit;                                    // 0x8(0x20)(Edit, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x28(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PropertyGuid;                                      // 0x30(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagBlueprintPropertyMap
struct FGameplayTagBlueprintPropertyMap
{
public:
	uint8                                        Pad_FDE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTagBlueprintPropertyMapping> PropertyMappings;                                  // 0x10(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagReponsePair
struct FGameplayTagReponsePair
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGameplayEffect>           ResponseGameplayEffect;                            // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UGameplayEffect>>   ResponseGameplayEffects;                           // 0x10(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        SoftCountCap;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
struct FGameplayTagResponseTableEntry
{
public:
	struct FGameplayTagReponsePair               Positive;                                          // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FGameplayTagReponsePair               Negative;                                          // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct GameplayAbilities.MovieSceneGameplayCueKey
struct FMovieSceneGameplayCueKey
{
public:
	struct FGameplayCueTag                       Cue;                                               // 0x0(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachSocketName;                                  // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedMagnitude;                               // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            Instigator;                                        // 0x44(0x18)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            EffectCauser;                                      // 0x5C(0x18)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GameplayEffectLevel;                               // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AbilityLevel;                                      // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAttachToBinding;                                  // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct GameplayAbilities.MovieSceneGameplayCueChannel
struct FMovieSceneGameplayCueChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneGameplayCueKey>     KeyValues;                                         // 0x60(0x10)(ZeroConstructor, AssetRegistrySearchable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FE6[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
