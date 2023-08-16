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

// 0xC4 (0x600 - 0x53C)
// BlueprintGeneratedClass GA_Gather.GA_Gather_C
class UGA_Gather_C : public UGA_LoopableEvent_Base_C
{
public:
	uint8                                        Pad_1E3A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                    GatherEventData;                                   // 0x548(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle           GameplayEffect_GatherBlocker;                      // 0x5F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Gather_C");
		return Clss;
	}

	void SetMovementBlock(bool InbLock, const struct FActiveGameplayEffectHandle& InCallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void GetTargetActor(class AActor** InActor);
	void OnGatherServer(class AActor* InActor, class ULootInteractorBaseComponent* InLootInteractorComponent, class UGatherableComponent* InGatherableComponent, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_Server_TriggerGather_ReturnValue, class ULootInteractorBaseComponent* InCallFunc_GetComponentByClass_ReturnValue, class UGatherableComponent* InCallFunc_GetComponentByClass_ReturnValue_1, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_1, bool InK2Node_DynamicCast_bSuccess_1, bool InCallFunc_IsValid_ReturnValue_1);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData);
	void ExecuteUbergraph_GA_Gather(int32 InEntryPoint, const struct FGameplayEventData& InK2Node_Event_EventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
