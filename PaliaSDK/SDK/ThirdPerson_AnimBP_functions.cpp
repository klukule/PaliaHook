#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UThirdPerson_AnimBP_C::AnimGraph(struct FPoseLink* InAnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "AnimGraph");

	Params::UThirdPerson_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InAnimGraph != nullptr)
		*InAnimGraph = Parms.AnimGraph;

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF
// (BlueprintEvent)
// Parameters:

void UThirdPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF");

	Params::UThirdPerson_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_F867B5374C7EFB9ED9010FA7431019DF_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E
// (BlueprintEvent)
// Parameters:

void UThirdPerson_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E");

	Params::UThirdPerson_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ThirdPerson_AnimBP_AnimGraphNode_TransitionResult_175FFF54400CA0EC412B7083B0989D7E_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThirdPerson_AnimBP_C::BlueprintUpdateAnimation(float InDeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UThirdPerson_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = InDeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ThirdPerson_AnimBP.ThirdPerson_AnimBP_C.ExecuteUbergraph_ThirdPerson_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UThirdPerson_AnimBP_C::ExecuteUbergraph_ThirdPerson_AnimBP(int32 InEntryPoint, float InCallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue, bool InCallFunc_Less_DoubleDouble_ReturnValue, float InK2Node_Event_DeltaTimeX, class APawn* InCallFunc_TryGetPawnOwner_ReturnValue, float InCallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1, const struct FVector& InCallFunc_GetVelocity_ReturnValue, bool InCallFunc_Less_DoubleDouble_ReturnValue_1, double InCallFunc_VSize_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class UPawnMovementComponent* InCallFunc_GetMovementComponent_ReturnValue, bool InCallFunc_IsActive_ReturnValue, bool InCallFunc_IsFalling_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, double InCallFunc_Less_DoubleDouble_A_ImplicitCast, double InCallFunc_Less_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThirdPerson_AnimBP_C", "ExecuteUbergraph_ThirdPerson_AnimBP");

	Params::UThirdPerson_AnimBP_C_ExecuteUbergraph_ThirdPerson_AnimBP_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue = InCallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = InCallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = InK2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = InCallFunc_TryGetPawnOwner_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1 = InCallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = InCallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = InCallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = InCallFunc_VSize_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = InCallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = InCallFunc_IsActive_ReturnValue;
	Parms.CallFunc_IsFalling_ReturnValue = InCallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = InCallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast_1 = InCallFunc_Less_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
