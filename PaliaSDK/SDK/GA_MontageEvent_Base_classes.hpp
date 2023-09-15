#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x4B9 - 0x438)
// BlueprintGeneratedClass GA_MontageEvent_Base.GA_MontageEvent_Base_C
class UGA_MontageEvent_Base_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  InMontageName;                                     // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InMontageSection;                                  // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MovementBlocked;                                   // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EndAbilityAfterFirstAnimation;                     // 0x451(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnimationName;                                     // 0x454(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MontageSection;                                    // 0x45C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GameplayEffect_AbilityLockedIn;                    // 0x464(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GameplayEffect_MovementBlocker;                    // 0x46C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URPGAbilityTask_PlayMontageAndWaitForEvent* MontageTask;                                       // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVAL_TaskProxy_PlayMontageAndWaitForEvent* Async_Task;                                        // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LockedIn;                                          // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMontageDone;                                     // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShuttingDown;                                      // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMovementBlockChanged;                            // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         WasCancelled;                                      // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_MontageEvent_Base_C* GetDefaultObj();

	void GetWasCancelled(bool* WasCancelled);
	void IsShuttingDown(bool* NewParam);
	bool DoesMontageSectionExist(class FName& MontageName, class FName& SectionName, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class FName Temp_name_Variable, class UAnimMontage* CallFunc_FindMontageByMapping_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MontageHasSection_ReturnValue);
	void GetPlayingMontage(class FName* AnimationName, class FName* MontageSection);
	bool IsAbilityLockedIn(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsAbilityMarkedLockedIn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void EndTaskAndClearReference(bool CallFunc_IsValid_ReturnValue);
	void ClearSetMontage();
	void HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_SetMovementBlock_Changed_1);
	void SetAbilityLockedIn(bool LockedIn);
	void SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void OnAbilityEnd(bool CallFunc_FNameIsNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetMovementBlock_Changed);
	void OnAbilityStart(bool CallFunc_SetMovementBlock_Changed);
	void EventReceived_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void Event_OnActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void PlayMontage(class FName Montage, class FName MontageSection, bool EndAbilityWhenFinished, bool Force__Used_by_child_outro_);
	void ExecuteUbergraph_GA_MontageEvent_Base(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, class FName K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_MontageSection, bool K2Node_CustomEvent_EndAbilityWhenFinished, bool K2Node_CustomEvent_Force__Used_by_child_outro_, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, bool CallFunc_FNameIsNone_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_DoesMontageSectionExist_ReturnValue);
	void OnMovementBlockChanged__DelegateSignature(bool MovementBlocked);
	void OnMontageDone__DelegateSignature(enum class EMontageEventResult Result);
};

}


