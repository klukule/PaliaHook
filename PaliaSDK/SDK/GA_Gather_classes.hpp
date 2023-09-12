#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_2CAD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayEventData                    GatherEventData;                                   // 0x548(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle           GameplayEffect_GatherBlocker;                      // 0x5F8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Gather_C* GetDefaultObj();

	void SetMovementBlock(bool bLock, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void GetTargetActor(class AActor** Actor);
	void OnGatherServer(class AActor* Actor, class ULootInteractorBaseComponent* LootInteractorComponent, class UGatherableComponent* GatherableComponent, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Server_TriggerGather_ReturnValue, class ULootInteractorBaseComponent* CallFunc_GetComponentByClass_ReturnValue, class UGatherableComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Gather(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData);
};

}


