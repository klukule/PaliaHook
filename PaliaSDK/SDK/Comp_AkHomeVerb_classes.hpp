#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x3A9 - 0x3A0)
// BlueprintGeneratedClass Comp_AkHomeVerb.Comp_AkHomeVerb_C
class UComp_AkHomeVerb_C : public UValeriaAkHomeVerbComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Debug;                                             // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComp_AkHomeVerb_C* GetDefaultObj();

	void AudioDebugAbsorption(bool On);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Comp_AkHomeVerb(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_On, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class USceneComponent* CallFunc_GetAttachParent_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TArray<class UGatherableComponent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UGatherableComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast_1);
};

}


