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
	uint8                                        Pad_EF2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnimationName;                                     // 0x454(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MontageSection;                                    // 0x45C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GameplayEffect_AbilityLockedIn;                    // 0x464(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GameplayEffect_MovementBlocker;                    // 0x46C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URPGAbilityTask_PlayMontageAndWaitForEvent* MontageTask;                                       // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UVAL_TaskProxy_PlayMontageAndWaitForEvent* Async_Task;                                        // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LockedIn;                                          // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMontageDone;                                     // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShuttingDown;                                      // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMovementBlockChanged;                            // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         WasCancelled;                                      // 0x4B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_MontageEvent_Base_C");
		return Clss;
	}

	void IsShuttingDown(bool* InNewParam);
	bool DoesMontageSectionExist(class FName& InMontageName, class FName& InSectionName, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class FName InTemp_name_Variable, class UAnimMontage* InCallFunc_FindMontageByMapping_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_MontageHasSection_ReturnValue);
	void GetPlayingMontage(class FName* InAnimationName, class FName* InMontageSection);
	bool IsAbilityLockedIn(class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UValeriaGASComponent* InCallFunc_GetGAS_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> InCallFunc_HasMatchingGameplayTag_self_CastInput, bool InCallFunc_HasMatchingGameplayTag_ReturnValue, bool InCallFunc_IsAbilityMarkedLockedIn_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue_1);
	void EndTaskAndClearReference(bool InCallFunc_IsValid_ReturnValue);
	void ClearSetMontage();
	void HandleEvent(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData, bool InGameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool InCallFunc_SetMovementBlock_Changed, bool InCallFunc_SetMovementBlock_Changed_1);
	void SetAbilityLockedIn(bool InLockedIn);
	void SetMovementBlock(bool InbLock, bool* InChanged, bool InCallFunc_IsAbilityLockedIn_ReturnValue, bool InCallFunc_NotEqual_BoolBool_ReturnValue, const struct FActiveGameplayEffectHandle& InCallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void OnAbilityEnd(bool InCallFunc_FNameIsNone_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_SetMovementBlock_Changed);
	void OnAbilityStart(bool InCallFunc_SetMovementBlock_Changed);
	void EventReceived_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnCancelled_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnInterrupted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnBlendOut_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnCompleted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void Event_OnActivateAbility();
	void K2_OnEndAbility(bool InbWasCancelled);
	void PlayMontage(class FName InMontage, class FName InMontageSection, bool InEndAbilityWhenFinished, bool InForce__Used_by_child_outro_);
	void ExecuteUbergraph_GA_MontageEvent_Base(int32 InEntryPoint, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_3, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& InK2Node_CustomEvent_EventTag, const struct FGameplayEventData& InK2Node_CustomEvent_EventData, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayEventData& InTemp_struct_Variable, const struct FGameplayTag& InTemp_struct_Variable_1, bool InCallFunc_K2_CommitAbility_ReturnValue, bool InK2Node_Event_bWasCancelled, class FName InK2Node_CustomEvent_Montage, class FName InK2Node_CustomEvent_MontageSection, bool InK2Node_CustomEvent_EndAbilityWhenFinished, bool InK2Node_CustomEvent_Force__Used_by_child_outro_, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* InCallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool InCallFunc_IsValid_ReturnValue, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_4, bool InCallFunc_FNameIsNone_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_4, bool InCallFunc_DoesMontageSectionExist_ReturnValue);
	void OnMovementBlockChanged__DelegateSignature(bool InMovementBlocked);
	void OnMontageDone__DelegateSignature(enum class EMontageEventResult InResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
