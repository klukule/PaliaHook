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

// 0x8 (0x2B8 - 0x2B0)
// BlueprintGeneratedClass Comp_CV_Parent.Comp_CV_Parent_C
class UComp_CV_Parent_C : public UValeriaAkTriggerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Comp_CV_Parent_C");
		return Clss;
	}

	void OverlapBegin(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool InbFromSweep, struct FHitResult& InSweepResult);
	void OverlapEnd(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason);
	void ExecuteUbergraph_Comp_CV_Parent(int32 InEntryPoint, class USceneComponent* InCallFunc_GetAttachParent_ReturnValue, class UPrimitiveComponent* InK2Node_CustomEvent_OverlappedComponent_1, class AActor* InK2Node_CustomEvent_OtherActor_1, class UPrimitiveComponent* InK2Node_CustomEvent_OtherComp_1, int32 InK2Node_CustomEvent_OtherBodyIndex_1, bool InK2Node_CustomEvent_bFromSweep, const struct FHitResult& InK2Node_CustomEvent_SweepResult, class UPrimitiveComponent* InK2Node_DynamicCast_AsPrimitive_Component, bool InK2Node_DynamicCast_bSuccess, class UPrimitiveComponent* InK2Node_CustomEvent_OverlappedComponent, class AActor* InK2Node_CustomEvent_OtherActor, class UPrimitiveComponent* InK2Node_CustomEvent_OtherComp, int32 InK2Node_CustomEvent_OtherBodyIndex, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason InK2Node_Event_EndPlayReason, class USceneComponent* InCallFunc_GetAttachParent_ReturnValue_1, class UPrimitiveComponent* InK2Node_DynamicCast_AsPrimitive_Component_1, bool InK2Node_DynamicCast_bSuccess_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
