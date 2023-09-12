#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A (0x4E3 - 0x4B9)
// BlueprintGeneratedClass GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C
class UGA_Cooking_OneOff_Base_C : public UGA_MontageEvent_Base_C
{
public:
	uint8                                        Pad_21D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                CrafterInteractable;                               // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ECharacterState                   CSM_Locked_State;                                  // 0x4D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrafterComponent*                     CrafterComponent;                                  // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldEnforcePosition;                             // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldEnforceFacingTowardsInteractableOnly;        // 0x4E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldEngageCrafterComponent;                      // 0x4E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Cooking_OneOff_Base_C* GetDefaultObj();

	void GetLockParams(struct FVAL_InteractorLockParams* VAL_InteractorLockParams, class UObject* CallFunc_SelectObject_ReturnValue, const struct FVAL_InteractorLockParams& K2Node_MakeStruct_VAL_InteractorLockParams);
	void CanUnlockCharacterDuringAnimation(bool* CanUnlock);
	void SetMovementBlock(bool bLock, bool* Changed, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_SetMovementBlock_Changed_1, bool CallFunc_IsShuttingDown_NewParam, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue, bool CallFunc_LockPlayerToInteractable_ReturnValue, bool CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool CallFunc_BooleanOR_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue_1, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams_2, bool CallFunc_IsPlayerLockedToInteractable_ReturnValue, bool CallFunc_UnLockPlayerFromInteractable_ReturnValue, bool CallFunc_CanPlayerChangeLockWith_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Cooking_OneOff_Base(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue, class UInteractableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UCrafterComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, const struct FVAL_InteractorLockParams& CallFunc_GetLockParams_VAL_InteractorLockParams, bool CallFunc_Not_PreBool_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* CallFunc_GetInteractorComponent_ReturnValue, bool CallFunc_Client_TryInteractableLockSetup_ReturnValue, bool CallFunc_CanPlayerChangeLockWith_ReturnValue);
};

}


