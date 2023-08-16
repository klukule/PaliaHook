#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.BlendSpacePlayerLibrary
class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BlendSpacePlayerLibrary");
		return Clss;
	}

	bool ShouldResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& InBlendSpacePlayer);
	struct FBlendSpacePlayerReference SetResetPlayTimeWhenBlendSpaceChanges(struct FBlendSpacePlayerReference& InBlendSpacePlayer, bool InbReset);
	struct FBlendSpacePlayerReference SetPlayRate(struct FBlendSpacePlayerReference& InBlendSpacePlayer, float InPlayRate);
	struct FBlendSpacePlayerReference SetLoop(struct FBlendSpacePlayerReference& InBlendSpacePlayer, bool InbLoop);
	struct FBlendSpacePlayerReference SetBlendSpaceWithInertialBlending(struct FAnimUpdateContext& InUpdateContext, struct FBlendSpacePlayerReference& InBlendSpacePlayer, class UBlendSpace* InBlendSpace, float InBlendTime);
	struct FBlendSpacePlayerReference SetBlendSpace(struct FBlendSpacePlayerReference& InBlendSpacePlayer, class UBlendSpace* InBlendSpace);
	float GetStartPosition(struct FBlendSpacePlayerReference& InBlendSpacePlayer);
	struct FVector GetPosition(struct FBlendSpacePlayerReference& InBlendSpacePlayer);
	float GetPlayRate(struct FBlendSpacePlayerReference& InBlendSpacePlayer);
	bool GetLoop(struct FBlendSpacePlayerReference& InBlendSpacePlayer);
	class UBlendSpace* GetBlendSpace(struct FBlendSpacePlayerReference& InBlendSpacePlayer);
	void ConvertToBlendSpacePlayerPure(struct FAnimNodeReference& InNode, struct FBlendSpacePlayerReference* InBlendSpacePlayer, bool* InResult);
	struct FBlendSpacePlayerReference ConvertToBlendSpacePlayer(struct FAnimNodeReference& InNode, enum class EAnimNodeReferenceConversionResult* InResult);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LayeredBoneBlendLibrary
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LayeredBoneBlendLibrary");
		return Clss;
	}

	struct FLayeredBoneBlendReference SetBlendMask(struct FAnimUpdateContext& InUpdateContext, struct FLayeredBoneBlendReference& InLayeredBoneBlend, int32 InPoseIndex, class FName InBlendMaskName);
	int32 GetNumPoses(struct FLayeredBoneBlendReference& InLayeredBoneBlend);
	struct FLayeredBoneBlendReference ConvertToLayeredBoneBlend(struct FAnimNodeReference& InNode, enum class EAnimNodeReferenceConversionResult* InResult);
	void ConvertToLayeredBlendPerBonePure(struct FAnimNodeReference& InNode, struct FLayeredBoneBlendReference* InLayeredBoneBlend, bool* InResult);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimationStateMachineLibrary
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationStateMachineLibrary");
		return Clss;
	}

	void SetState(struct FAnimUpdateContext& InUpdateContext, struct FAnimationStateMachineReference& InNode, class FName InTargetState, float InDuration, enum class ETransitionLogicType InBlendType, class UBlendProfile* InBlendProfile, enum class EAlphaBlendOption InAlphaBlendOption, class UCurveFloat* InCustomBlendCurve);
	bool IsStateBlendingOut(struct FAnimUpdateContext& InUpdateContext, struct FAnimationStateResultReference& InNode);
	bool IsStateBlendingIn(struct FAnimUpdateContext& InUpdateContext, struct FAnimationStateResultReference& InNode);
	class FName GetState(struct FAnimUpdateContext& InUpdateContext, struct FAnimationStateMachineReference& InNode);
	float GetRelevantAnimTimeRemainingFraction(struct FAnimUpdateContext& InUpdateContext, struct FAnimationStateResultReference& InNode);
	float GetRelevantAnimTimeRemaining(struct FAnimUpdateContext& InUpdateContext, struct FAnimationStateResultReference& InNode);
	void ConvertToAnimationStateResultPure(struct FAnimNodeReference& InNode, struct FAnimationStateResultReference* InAnimationState, bool* InResult);
	void ConvertToAnimationStateResult(struct FAnimNodeReference& InNode, struct FAnimationStateResultReference* InAnimationState, enum class EAnimNodeReferenceConversionResult* InResult);
	void ConvertToAnimationStateMachinePure(struct FAnimNodeReference& InNode, struct FAnimationStateMachineReference* InAnimationState, bool* InResult);
	void ConvertToAnimationStateMachine(struct FAnimNodeReference& InNode, struct FAnimationStateMachineReference* InAnimationState, enum class EAnimNodeReferenceConversionResult* InResult);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.AnimExecutionContextLibrary
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimExecutionContextLibrary");
		return Clss;
	}

	float GetDeltaTime(struct FAnimUpdateContext& InContext);
	float GetCurrentWeight(struct FAnimUpdateContext& InContext);
	struct FAnimNodeReference GetAnimNodeReference(class UAnimInstance* InInstance, int32 InIndex);
	class UAnimInstance* GetAnimInstance(struct FAnimExecutionContext& InContext);
	struct FAnimUpdateContext ConvertToUpdateContext(struct FAnimExecutionContext& InContext, enum class EAnimExecutionContextConversionResult* InResult);
	struct FAnimPoseContext ConvertToPoseContext(struct FAnimExecutionContext& InContext, enum class EAnimExecutionContextConversionResult* InResult);
	struct FAnimInitializationContext ConvertToInitializationContext(struct FAnimExecutionContext& InContext, enum class EAnimExecutionContextConversionResult* InResult);
	struct FAnimComponentSpacePoseContext ConvertToComponentSpacePoseContext(struct FAnimExecutionContext& InContext, enum class EAnimExecutionContextConversionResult* InResult);
};

// 0x8 (0x40 - 0x38)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	class FName                                  NotifyName;                                        // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotify");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	class FName                                  NotifyName;                                        // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotifyWindow");
		return Clss;
	}

};

// 0x0 (0x350 - 0x350)
// Class AnimGraphRuntime.AnimSequencerInstance
class UAnimSequencerInstance : public UAnimInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSequencerInstance");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.KismetAnimationLibrary
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KismetAnimationLibrary");
		return Clss;
	}

	void K2_TwoBoneIK(struct FVector& InRootPos, struct FVector& InJointPos, struct FVector& InEndPos, struct FVector& InJointTarget, struct FVector& InEffector, struct FVector* InOutJointPos, struct FVector* InOutEndPos, bool InbAllowStretching, float InStartStretchRatio, float InMaxStretchScale);
	void K2_StartProfilingTimer();
	struct FVector K2_MakePerlinNoiseVectorAndRemap(float InX, float InY, float InZ, float InRangeOutMinX, float InRangeOutMaxX, float InRangeOutMinY, float InRangeOutMaxY, float InRangeOutMinZ, float InRangeOutMaxZ);
	float K2_MakePerlinNoiseAndRemap(float InValue, float InRangeOutMin, float InRangeOutMax);
	struct FTransform K2_LookAt(struct FTransform& InCurrentTransform, struct FVector& InTargetPosition, const struct FVector& InLookAtVector, bool InbUseUpVector, const struct FVector& InUpVector, float InClampConeInDegree);
	float K2_EndProfilingTimer(bool InbLog, const class FString& InLogPrefix);
	float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* InComponent, class FName InSocketOrBoneNameA, enum class ERelativeTransformSpace InSocketSpaceA, class FName InSocketOrBoneNameB, enum class ERelativeTransformSpace InSocketSpaceB, bool InbRemapRange, float InInRangeMin, float InInRangeMax, float InOutRangeMin, float InOutRangeMax);
	struct FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* InComponent, class FName InSocketOrBoneNameFrom, class FName InSocketOrBoneNameTo);
	float K2_CalculateVelocityFromSockets(float InDeltaSeconds, class USkeletalMeshComponent* InComponent, class FName InSocketOrBoneName, class FName InReferenceSocketOrBone, enum class ERelativeTransformSpace InSocketSpace, const struct FVector& InOffsetInBoneSpace, struct FPositionHistory& InHistory, int32 InNumberOfSamples, float InVelocityMin, float InVelocityMax, enum class EEasingFuncType InEasingType, struct FRuntimeFloatCurve& InCustomCurve);
	float K2_CalculateVelocityFromPositionHistory(float InDeltaSeconds, const struct FVector& InPosition, struct FPositionHistory& InHistory, int32 InNumberOfSamples, float InVelocityMin, float InVelocityMax);
	float CalculateDirection(struct FVector& InVelocity, struct FRotator& InBaseRotation);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.LinkedAnimGraphLibrary
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LinkedAnimGraphLibrary");
		return Clss;
	}

	bool HasLinkedAnimInstance(struct FLinkedAnimGraphReference& InNode);
	class UAnimInstance* GetLinkedAnimInstance(struct FLinkedAnimGraphReference& InNode);
	void ConvertToLinkedAnimGraphPure(struct FAnimNodeReference& InNode, struct FLinkedAnimGraphReference* InLinkedAnimGraph, bool* InResult);
	struct FLinkedAnimGraphReference ConvertToLinkedAnimGraph(struct FAnimNodeReference& InNode, enum class EAnimNodeReferenceConversionResult* InResult);
};

// 0x80 (0xA8 - 0x28)
// Class AnimGraphRuntime.PlayMontageCallbackProxy
class UPlayMontageCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyBegin;                                     // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotifyEnd;                                       // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2370[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayMontageCallbackProxy");
		return Clss;
	}

	void OnNotifyEndReceived(class FName InNotifyName, struct FBranchingPointNotifyPayload& InBranchingPointNotifyPayload);
	void OnNotifyBeginReceived(class FName InNotifyName, struct FBranchingPointNotifyPayload& InBranchingPointNotifyPayload);
	void OnMontageEnded(class UAnimMontage* InMontage, bool InbInterrupted);
	void OnMontageBlendingOut(class UAnimMontage* InMontage, bool InbInterrupted);
	class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InInSkeletalMeshComponent, class UAnimMontage* InMontageToPlay, float InPlayRate, float InStartingPosition, class FName InStartingSection);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequenceEvaluatorLibrary
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SequenceEvaluatorLibrary");
		return Clss;
	}

	struct FSequenceEvaluatorReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& InUpdateContext, struct FSequenceEvaluatorReference& InSequenceEvaluator, class UAnimSequenceBase* InSequence, float InBlendTime);
	struct FSequenceEvaluatorReference SetSequence(struct FSequenceEvaluatorReference& InSequenceEvaluator, class UAnimSequenceBase* InSequence);
	struct FSequenceEvaluatorReference SetExplicitTime(struct FSequenceEvaluatorReference& InSequenceEvaluator, float InTime);
	class UAnimSequenceBase* GetSequence(struct FSequenceEvaluatorReference& InSequenceEvaluator);
	float GetAccumulatedTime(struct FSequenceEvaluatorReference& InSequenceEvaluator);
	void ConvertToSequenceEvaluatorPure(struct FAnimNodeReference& InNode, struct FSequenceEvaluatorReference* InSequenceEvaluator, bool* InResult);
	struct FSequenceEvaluatorReference ConvertToSequenceEvaluator(struct FAnimNodeReference& InNode, enum class EAnimNodeReferenceConversionResult* InResult);
	struct FSequenceEvaluatorReference AdvanceTime(struct FAnimUpdateContext& InUpdateContext, struct FSequenceEvaluatorReference& InSequenceEvaluator, float InPlayRate);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencePlayerLibrary
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SequencePlayerLibrary");
		return Clss;
	}

	struct FSequencePlayerReference SetStartPosition(struct FSequencePlayerReference& InSequencePlayer, float InStartPosition);
	struct FSequencePlayerReference SetSequenceWithInertialBlending(struct FAnimUpdateContext& InUpdateContext, struct FSequencePlayerReference& InSequencePlayer, class UAnimSequenceBase* InSequence, float InBlendTime);
	struct FSequencePlayerReference SetSequence(struct FSequencePlayerReference& InSequencePlayer, class UAnimSequenceBase* InSequence);
	struct FSequencePlayerReference SetPlayRate(struct FSequencePlayerReference& InSequencePlayer, float InPlayRate);
	struct FSequencePlayerReference SetAccumulatedTime(struct FSequencePlayerReference& InSequencePlayer, float InTime);
	float GetStartPosition(struct FSequencePlayerReference& InSequencePlayer);
	class UAnimSequenceBase* GetSequencePure(struct FSequencePlayerReference& InSequencePlayer);
	struct FSequencePlayerReference GetSequence(struct FSequencePlayerReference& InSequencePlayer, class UAnimSequenceBase*& InSequenceBase);
	float GetPlayRate(struct FSequencePlayerReference& InSequencePlayer);
	bool GetLoopAnimation(struct FSequencePlayerReference& InSequencePlayer);
	float GetAccumulatedTime(struct FSequencePlayerReference& InSequencePlayer);
	void ConvertToSequencePlayerPure(struct FAnimNodeReference& InNode, struct FSequencePlayerReference* InSequencePlayer, bool* InResult);
	struct FSequencePlayerReference ConvertToSequencePlayer(struct FAnimNodeReference& InNode, enum class EAnimNodeReferenceConversionResult* InResult);
	float ComputePlayRateFromDuration(struct FSequencePlayerReference& InSequencePlayer, float InDuration);
};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SequencerAnimationSupport
class ISequencerAnimationSupport : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SequencerAnimationSupport");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AnimGraphRuntime.SkeletalControlLibrary
class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SkeletalControlLibrary");
		return Clss;
	}

	struct FSkeletalControlReference SetAlpha(struct FSkeletalControlReference& InSkeletalControl, float InAlpha);
	float GetAlpha(struct FSkeletalControlReference& InSkeletalControl);
	void ConvertToSkeletalControlPure(struct FAnimNodeReference& InNode, struct FSkeletalControlReference* InSkeletalControl, bool* InResult);
	struct FSkeletalControlReference ConvertToSkeletalControl(struct FAnimNodeReference& InNode, enum class EAnimNodeReferenceConversionResult* InResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
