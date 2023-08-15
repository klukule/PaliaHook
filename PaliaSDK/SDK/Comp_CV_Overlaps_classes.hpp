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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Comp_CV_Overlaps_C");

		return Clss;
	}

	void ReceiveBeginPlay();
	void BeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void EndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_Comp_CV_Overlaps(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_CustomEvent_OverlappedActor_1, class AActor* K2Node_CustomEvent_OtherActor_1, class AActor* K2Node_CustomEvent_OverlappedActor, class AActor* K2Node_CustomEvent_OtherActor, enum class EEndPlayReason K2Node_Event_EndPlayReason, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
