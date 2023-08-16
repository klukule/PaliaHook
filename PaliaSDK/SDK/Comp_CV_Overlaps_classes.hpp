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

// 0x10 (0xB0 - 0xA0)
// BlueprintGeneratedClass Comp_CV_Overlaps.Comp_CV_Overlaps_C
class UComp_CV_Overlaps_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Owner;                                             // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Comp_CV_Overlaps_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void BeginOverlap(class AActor* InOverlappedActor, class AActor* InOtherActor);
	void EndOverlap(class AActor* InOverlappedActor, class AActor* InOtherActor);
	void ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason);
	void ExecuteUbergraph_Comp_CV_Overlaps(int32 InEntryPoint, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, int32 InTemp_int_Array_Index_Variable, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class AActor* InCallFunc_GetOwner_ReturnValue, class AActor* InK2Node_CustomEvent_OverlappedActor_1, class AActor* InK2Node_CustomEvent_OtherActor_1, class AActor* InK2Node_CustomEvent_OverlappedActor, class AActor* InK2Node_CustomEvent_OtherActor, enum class EEndPlayReason InK2Node_Event_EndPlayReason, int32 InTemp_int_Loop_Counter_Variable, TArray<class AActor*>& InCallFunc_GetOverlappingActors_OverlappingActors, class AActor* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
