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

// 0x380 (0x6D0 - 0x350)
// AnimBlueprintGeneratedClass ThirdPerson_AnimBP.ThirdPerson_AnimBP_C
class UThirdPerson_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x8)(HasGetValueTypeHash)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)()
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)()
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x370(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x390(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x3B8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x3E0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x408(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x430(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x478(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x498(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x4E0(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x500(0x48)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x548(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x568(0x70)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x5D8(0x20)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x5F8(0xC8)()
	bool                                         IsInAir_;                                          // 0x6C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4235[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Speed;                                             // 0x6C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ThirdPerson_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* InAnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E();
	void BlueprintUpdateAnimation(float InDeltaTimeX);
	void ExecuteUbergraph_ThirdPerson_AnimBP(int32 InEntryPoint, float InCallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool InCallFunc_Less_DoubleDouble_ReturnValue, float InK2Node_Event_DeltaTimeX, class APawn* InCallFunc_TryGetPawnOwner_ReturnValue, float InCallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, const struct FVector& InCallFunc_GetVelocity_ReturnValue, bool InCallFunc_Less_DoubleDouble_ReturnValue_1, double InCallFunc_VSize_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class UPawnMovementComponent* InCallFunc_GetMovementComponent_ReturnValue, bool InCallFunc_IsActive_ReturnValue, bool InCallFunc_IsFalling_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, double InCallFunc_Less_DoubleDouble_A_ImplicitCast, double InCallFunc_Less_DoubleDouble_A_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
