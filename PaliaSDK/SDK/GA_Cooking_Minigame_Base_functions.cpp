#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.SetMovementBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMovementBlock_Changed                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::SetMovementBlock(bool InbLock, bool* InChanged, bool InCallFunc_SetMovementBlock_Changed, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "SetMovementBlock");

	Params::UGA_Cooking_Minigame_Base_C_SetMovementBlock_Params Parms{};

	Parms.bLock = InbLock;
	Parms.CallFunc_SetMovementBlock_Changed = InCallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InChanged != nullptr)
		*InChanged = Parms.Changed;

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Callback_SuccessfulInputReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMinigameComponentMasterQTE* Comp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::Callback_SuccessfulInputReceived(class UMinigameComponentMasterQTE* InComp, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "Callback_SuccessfulInputReceived");

	Params::UGA_Cooking_Minigame_Base_C_Callback_SuccessfulInputReceived_Params Parms{};

	Parms.Comp = InComp;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.HandleMovementBlockChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MovementBlocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipeConfig               CallFunc_GetRecipeConfig_ReturnValue                             (ConstParm)
// bool                               CallFunc_Server_Collect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECrafterState           CallFunc_GetCrafterState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::HandleMovementBlockChanged(bool InMovementBlocked, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_IsServer_ReturnValue, const struct FRecipeConfig& InCallFunc_GetRecipeConfig_ReturnValue, bool InCallFunc_Server_Collect_ReturnValue, enum class ECrafterState InCallFunc_GetCrafterState_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1, bool InCallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "HandleMovementBlockChanged");

	Params::UGA_Cooking_Minigame_Base_C_HandleMovementBlockChanged_Params Parms{};

	Parms.MovementBlocked = InMovementBlocked;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetRecipeConfig_ReturnValue = InCallFunc_GetRecipeConfig_ReturnValue;
	Parms.CallFunc_Server_Collect_ReturnValue = InCallFunc_Server_Collect_ReturnValue;
	Parms.CallFunc_GetCrafterState_ReturnValue = InCallFunc_GetCrafterState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = InCallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = InCallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.PlayMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MontageSection                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EndAbilityWhenFinished                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Force__Used_by_child_outro_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::PlayMontage(class FName InMontage, class FName InMontageSection, bool InEndAbilityWhenFinished, bool InForce__Used_by_child_outro_, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "PlayMontage");

	Params::UGA_Cooking_Minigame_Base_C_PlayMontage_Params Parms{};

	Parms.Montage = InMontage;
	Parms.MontageSection = InMontageSection;
	Parms.EndAbilityWhenFinished = InEndAbilityWhenFinished;
	Parms.Force__Used_by_child_outro_ = InForce__Used_by_child_outro_;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = InCallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.CanUnlockCharacterDuringAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanUnlock                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::CanUnlockCharacterDuringAnimation(bool* InCanUnlock, bool InCallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "CanUnlockCharacterDuringAnimation");

	Params::UGA_Cooking_Minigame_Base_C_CanUnlockCharacterDuringAnimation_Params Parms{};

	Parms.CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock = InCallFunc_CanUnlockCharacterDuringAnimation_CanUnlock;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InCanUnlock != nullptr)
		*InCanUnlock = Parms.CanUnlock;

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnOutroStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Cooking_Minigame_Base_C::OnOutroStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "OnOutroStarted");

	Params::UGA_Cooking_Minigame_Base_C_OnOutroStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnAbilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::OnAbilityEnd(FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "OnAbilityEnd");

	Params::UGA_Cooking_Minigame_Base_C_OnAbilityEnd_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnAbilityStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::OnAbilityStart(FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "OnAbilityStart");

	Params::UGA_Cooking_Minigame_Base_C_OnAbilityStart_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = InK2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.IsPlayingMinigame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlayingMinigame                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::IsPlayingMinigame(bool* InIsPlayingMinigame, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_IsPlaying_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "IsPlayingMinigame");

	Params::UGA_Cooking_Minigame_Base_C_IsPlayingMinigame_Params Parms{};

	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = InCallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InIsPlayingMinigame != nullptr)
		*InIsPlayingMinigame = Parms.IsPlayingMinigame;

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::HandleEvent(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData, bool InGameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "HandleEvent");

	Params::UGA_Cooking_Minigame_Base_C_HandleEvent_Params Parms{};

	Parms.EventTag = InEventTag;
	Parms.EventData = InEventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = InGameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Minigame OnStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMinigameComponentBase*      Comp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EMinigameState          PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMinigameState          NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingMinigame_IsPlayingMinigame                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::Minigame_OnStateChanged(class UMinigameComponentBase* InComp, enum class EMinigameState InPrevState, enum class EMinigameState InNewState, bool InK2Node_SwitchEnum_CmpSuccess, bool InCallFunc_IsPlayingMinigame_IsPlayingMinigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "Minigame OnStateChanged");

	Params::UGA_Cooking_Minigame_Base_C_Minigame_OnStateChanged_Params Parms{};

	Parms.Comp = InComp;
	Parms.PrevState = InPrevState;
	Parms.NewState = InNewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsPlayingMinigame_IsPlayingMinigame = InCallFunc_IsPlayingMinigame_IsPlayingMinigame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.DoOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Cooking_Minigame_Base_C::DoOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "DoOutro");

	Params::UGA_Cooking_Minigame_Base_C_DoOutro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Queue Outro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Cooking_Minigame_Base_C::Queue_Outro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "Queue Outro");

	Params::UGA_Cooking_Minigame_Base_C_Queue_Outro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.ExecuteUbergraph_GA_Cooking_Minigame_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShuttingDown_NewParam                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMontageCurrentSectionName_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShuttingDown_NewParam_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::ExecuteUbergraph_GA_Cooking_Minigame_Base(int32 InEntryPoint, bool InCallFunc_IsShuttingDown_NewParam, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue_1, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UAnimMontage* InCallFunc_GetCurrentMontage_ReturnValue, class FName InCallFunc_GetMontageCurrentSectionName_ReturnValue, bool InCallFunc_IsShuttingDown_NewParam_1, bool InCallFunc_EqualEqual_NameName_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue_2, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "ExecuteUbergraph_GA_Cooking_Minigame_Base");

	Params::UGA_Cooking_Minigame_Base_C_ExecuteUbergraph_GA_Cooking_Minigame_Base_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.CallFunc_IsShuttingDown_NewParam = InCallFunc_IsShuttingDown_NewParam;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = InCallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = InCallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_GetMontageCurrentSectionName_ReturnValue = InCallFunc_GetMontageCurrentSectionName_ReturnValue;
	Parms.CallFunc_IsShuttingDown_NewParam_1 = InCallFunc_IsShuttingDown_NewParam_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = InCallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = InCallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = InCallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
