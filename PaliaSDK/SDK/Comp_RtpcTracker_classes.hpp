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

// 0xC0 (0x160 - 0xA0)
// BlueprintGeneratedClass Comp_RtpcTracker.Comp_RtpcTracker_C
class UComp_RtpcTracker_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<class UAkRtpc*, double>                 RTPC_Map;                                          // 0xA8(0x50)(Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnRtpcChanged;                                     // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Debug;                                             // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_1813[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class UAkComponent*>                    TrackedAkComponents;                               // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Comp_RtpcTracker_C");
		return Clss;
	}

	void DrawDebug(const class FString& InBuiltString, const TArray<class UAkRtpc*>& InKeys, const TArray<double>& InValues, int32 InTemp_int_Array_Index_Variable, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InCallFunc_Set_Length_ReturnValue, const class FString& InCallFunc_Conv_IntToString_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, double InCallFunc_Array_Get_Item, TMap<class UAkRtpc*, double> InCallFunc_GetRtpcs_RTPC_Map, const class FString& InCallFunc_Conv_DoubleToString_ReturnValue, TArray<class UAkRtpc*>& InCallFunc_Map_Keys_Keys, class UAkRtpc* InCallFunc_Array_Get_Item_1, int32 InCallFunc_Array_Length_ReturnValue, const class FString& InCallFunc_GetDisplayName_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue_3, class AActor* InCallFunc_GetOwner_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue_4, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, TMap<class UAkRtpc*, double> InCallFunc_GetRtpcs_RTPC_Map_1, TArray<double>& InCallFunc_Map_Values_Values);
	void PropagateRtpcs(class UAkComponent* InAkComponent, const TArray<double>& InValues, const TArray<class UAkRtpc*>& InKeys, int32 InTemp_int_Array_Index_Variable, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_IsValid_ReturnValue, double InCallFunc_Array_Get_Item, class UAkRtpc* InCallFunc_Array_Get_Item_1, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, TMap<class UAkRtpc*, double> InCallFunc_GetRtpcs_RTPC_Map, TArray<double>& InCallFunc_Map_Values_Values, TMap<class UAkRtpc*, double> InCallFunc_GetRtpcs_RTPC_Map_1, TArray<class UAkRtpc*>& InCallFunc_Map_Keys_Keys, float InCallFunc_SetRTPCValue_Value_ImplicitCast);
	void GetRtpcs(TMap<class UAkRtpc*, double>* InRTPC_Map);
	void UpdateRtpcValue(class UAkRtpc*& InRTPC, double& InValue, int32 InInterpolation, int32 InTemp_int_Array_Index_Variable, TArray<class UAkComponent*>& InCallFunc_Set_ToArray_Result, class UAkComponent* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Set_Remove_ReturnValue, bool InCallFunc_IsValid_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, float InCallFunc_SetRTPCValue_Value_ImplicitCast);
	void GetRTPCValue(class UAkRtpc*& InRTPC, double* InValue, bool* InFound, double InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue);
	void AudioDebugRtpc(bool InOn);
	void ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason);
	void ExecuteUbergraph_Comp_RtpcTracker(int32 InEntryPoint, enum class EEndPlayReason InK2Node_Event_EndPlayReason, bool InCallFunc_IsDedicatedServer_ReturnValue, bool InCallFunc_BuildIsShipping_ReturnValue, bool InK2Node_CustomEvent_On);
	void OnRtpcChanged__DelegateSignature(class UComp_RtpcTracker_C* InRtpcTrackerComp, class UAkRtpc* InRTPC, double InValue, int32 InInterpolation_ms_);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
