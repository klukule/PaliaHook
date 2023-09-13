#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x160 - 0xA0)
// BlueprintGeneratedClass Comp_RtpcTracker.Comp_RtpcTracker_C
class UComp_RtpcTracker_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class UAkRtpc*, double>                 RTPC_Map;                                          // 0xA8(0x50)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnRtpcChanged;                                     // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Debug;                                             // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_2962[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UAkComponent*>                    TrackedAkComponents;                               // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UComp_RtpcTracker_C* GetDefaultObj();

	void DrawDebug(const class FString& BuiltString, const TArray<class UAkRtpc*>& Keys, const TArray<double>& Values, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Set_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Array_Get_Item, TMap<class UAkRtpc*, double> CallFunc_GetRtpcs_RTPC_Map, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, TArray<class UAkRtpc*>& CallFunc_Map_Keys_Keys, class UAkRtpc* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TMap<class UAkRtpc*, double> CallFunc_GetRtpcs_RTPC_Map_1, TArray<double>& CallFunc_Map_Values_Values);
	void PropagateRtpcs(class UAkComponent* AkComponent, const TArray<double>& Values, const TArray<class UAkRtpc*>& Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Array_Get_Item, class UAkRtpc* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TMap<class UAkRtpc*, double> CallFunc_GetRtpcs_RTPC_Map, TArray<double>& CallFunc_Map_Values_Values, TMap<class UAkRtpc*, double> CallFunc_GetRtpcs_RTPC_Map_1, TArray<class UAkRtpc*>& CallFunc_Map_Keys_Keys, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void GetRtpcs(TMap<class UAkRtpc*, double>* RTPC_Map);
	void UpdateRtpcValue(class UAkRtpc*& RTPC, double& Value, int32 Interpolation, int32 Temp_int_Array_Index_Variable, TArray<class UAkComponent*>& CallFunc_Set_ToArray_Result, class UAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Set_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void GetRTPCValue(class UAkRtpc*& RTPC, double* Value, bool* Found, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void AudioDebugRtpc(bool On);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Comp_RtpcTracker(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BuildIsShipping_ReturnValue, bool K2Node_CustomEvent_On);
	void OnRtpcChanged__DelegateSignature(class UComp_RtpcTracker_C* RtpcTrackerComp, class UAkRtpc* RTPC, double Value, int32 Interpolation_ms_);
};

}


