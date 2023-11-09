#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x4F3 - 0x4E3)
// BlueprintGeneratedClass GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C
class UGA_Cooking_Minigame_Base_C : public UGA_Cooking_OneOff_Base_C
{
public:
	uint8                                        Pad_2A45[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsDoingOutro;                                      // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutroQueued;                                       // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QueueOutroAfterActionAnimation;                    // 0x4F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Cooking_Minigame_Base_C* GetDefaultObj();

	void SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_SetMovementBlock_Changed, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);
	void Callback_SuccessfulInputReceived(class UMinigameComponentMasterQTE* Comp, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandleMovementBlockChanged(bool MovementBlocked, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FRecipeConfig& CallFunc_GetRecipeConfig_ReturnValue, bool CallFunc_Server_Collect_ReturnValue, enum class ECrafterState CallFunc_GetCrafterState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void PlayMontage(class FName Montage, class FName MontageSection, bool EndAbilityWhenFinished, bool Force__Used_by_child_outro_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void CanUnlockCharacterDuringAnimation(bool* CanUnlock, bool CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool CallFunc_BooleanAND_ReturnValue);
	void OnOutroStarted();
	void OnAbilityEnd(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);
	void OnAbilityStart(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);
	void IsPlayingMinigame(bool* IsPlayingMinigame, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Minigame_OnStateChanged(class UMinigameComponentBase* Comp, enum class EMinigameState PrevState, enum class EMinigameState NewState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsPlayingMinigame_IsPlayingMinigame);
	void DoOutro();
	void Queue_Outro();
	void ExecuteUbergraph_GA_Cooking_Minigame_Base(int32 EntryPoint, bool CallFunc_IsShuttingDown_NewParam, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class FName CallFunc_GetMontageCurrentSectionName_ReturnValue, bool CallFunc_IsShuttingDown_NewParam_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


