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

// 0x10 (0x4F3 - 0x4E3)
// BlueprintGeneratedClass GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C
class UGA_Cooking_Minigame_Base_C : public UGA_Cooking_OneOff_Base_C
{
public:
	uint8                                        Pad_1A87[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsDoingOutro;                                      // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutroQueued;                                       // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QueueOutroAfterActionAnimation;                    // 0x4F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Cooking_Minigame_Base_C");
		return Clss;
	}

	void SetMovementBlock(bool InbLock, bool* InChanged, bool InCallFunc_SetMovementBlock_Changed, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);
	void Callback_SuccessfulInputReceived(class UMinigameComponentMasterQTE* InComp, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue);
	void HandleMovementBlockChanged(bool InMovementBlocked, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_IsServer_ReturnValue, const struct FRecipeConfig& InCallFunc_GetRecipeConfig_ReturnValue, bool InCallFunc_Server_Collect_ReturnValue, enum class ECrafterState InCallFunc_GetCrafterState_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1, bool InCallFunc_BooleanAND_ReturnValue_2);
	void PlayMontage(class FName InMontage, class FName InMontageSection, bool InEndAbilityWhenFinished, bool InForce__Used_by_child_outro_, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue);
	void CanUnlockCharacterDuringAnimation(bool* InCanUnlock, bool InCallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool InCallFunc_BooleanAND_ReturnValue);
	void OnOutroStarted();
	void OnAbilityEnd(FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);
	void OnAbilityStart(FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue);
	void IsPlayingMinigame(bool* InIsPlayingMinigame, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_IsPlaying_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue);
	void HandleEvent(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData, bool InGameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_IsValid_ReturnValue);
	void Minigame_OnStateChanged(class UMinigameComponentBase* InComp, enum class EMinigameState InPrevState, enum class EMinigameState InNewState, bool InK2Node_SwitchEnum_CmpSuccess, bool InCallFunc_IsPlayingMinigame_IsPlayingMinigame);
	void DoOutro();
	void Queue_Outro();
	void ExecuteUbergraph_GA_Cooking_Minigame_Base(int32 InEntryPoint, bool InCallFunc_IsShuttingDown_NewParam, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue_1, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UAnimMontage* InCallFunc_GetCurrentMontage_ReturnValue, class FName InCallFunc_GetMontageCurrentSectionName_ReturnValue, bool InCallFunc_IsShuttingDown_NewParam_1, bool InCallFunc_EqualEqual_NameName_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue_2, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
