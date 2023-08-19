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

// 0x2A (0x4E3 - 0x4B9)
// BlueprintGeneratedClass GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C
class UGA_Cooking_OneOff_Base_C : public UGA_MontageEvent_Base_C
{
public:
	uint8                                        Pad_2981[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                CrafterInteractable;                               // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ECharacterState                   CSM_Locked_State;                                  // 0x4D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2982[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrafterComponent*                     CrafterComponent;                                  // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldEnforcePosition;                             // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldEnforceFacingTowardsInteractableOnly;        // 0x4E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldEngageCrafterComponent;                      // 0x4E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Cooking_OneOff_Base_C");
		return Clss;
	}

	void GetLockParams(struct FVAL_InteractorLockParams* InVAL_InteractorLockParams, class UObject* InCallFunc_SelectObject_ReturnValue, const struct FVAL_InteractorLockParams& InK2Node_MakeStruct_VAL_InteractorLockParams);
	void CanUnlockCharacterDuringAnimation(bool* InCanUnlock);
	void SetMovementBlock(bool InbLock, bool* InChanged, const struct FVAL_InteractorLockParams& InCallFunc_GetLockParams_VAL_InteractorLockParams, const struct FVAL_InteractorLockParams& InCallFunc_GetLockParams_VAL_InteractorLockParams_1, bool InCallFunc_IsServer_ReturnValue, bool InCallFunc_IsServer_ReturnValue_1, bool InCallFunc_IsAbilityLockedIn_ReturnValue, bool InCallFunc_NotEqual_BoolBool_ReturnValue, bool InCallFunc_SetMovementBlock_Changed, bool InCallFunc_SetMovementBlock_Changed_1, bool InCallFunc_IsShuttingDown_NewParam, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* InCallFunc_GetInteractorComponent_ReturnValue, bool InCallFunc_LockPlayerToInteractable_ReturnValue, bool InCallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool InCallFunc_BooleanOR_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UInteractorComponent* InCallFunc_GetInteractorComponent_ReturnValue_1, const struct FVAL_InteractorLockParams& InCallFunc_GetLockParams_VAL_InteractorLockParams_2, bool InCallFunc_IsPlayerLockedToInteractable_ReturnValue, bool InCallFunc_UnLockPlayerFromInteractable_ReturnValue, bool InCallFunc_CanPlayerChangeLockWith_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData);
	void ExecuteUbergraph_GA_Cooking_OneOff_Base(int32 InEntryPoint, const struct FGameplayEventData& InK2Node_Event_EventData, bool InCallFunc_IsValid_ReturnValue, class UInteractableComponent* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, class UCrafterComponent* InCallFunc_GetComponentByClass_ReturnValue_1, bool InCallFunc_IsServer_ReturnValue, const struct FVAL_InteractorLockParams& InCallFunc_GetLockParams_VAL_InteractorLockParams, bool InCallFunc_Not_PreBool_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* InCallFunc_GetInteractorComponent_ReturnValue, bool InCallFunc_Client_TryInteractableLockSetup_ReturnValue, bool InCallFunc_CanPlayerChangeLockWith_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
