#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

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

void UGA_Cooking_Minigame_Base_C::SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_SetMovementBlock_Changed, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "SetMovementBlock");

	Params::UGA_Cooking_Minigame_Base_C_SetMovementBlock_Params Parms{};

	Parms.bLock = bLock;
	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Callback_SuccessfulInputReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMinigameComponentMasterQTE* Comp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::Callback_SuccessfulInputReceived(class UMinigameComponentMasterQTE* Comp, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "Callback_SuccessfulInputReceived");

	Params::UGA_Cooking_Minigame_Base_C_Callback_SuccessfulInputReceived_Params Parms{};

	Parms.Comp = Comp;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

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

void UGA_Cooking_Minigame_Base_C::HandleMovementBlockChanged(bool MovementBlocked, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FRecipeConfig& CallFunc_GetRecipeConfig_ReturnValue, bool CallFunc_Server_Collect_ReturnValue, enum class ECrafterState CallFunc_GetCrafterState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "HandleMovementBlockChanged");

	Params::UGA_Cooking_Minigame_Base_C_HandleMovementBlockChanged_Params Parms{};

	Parms.MovementBlocked = MovementBlocked;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetRecipeConfig_ReturnValue = CallFunc_GetRecipeConfig_ReturnValue;
	Parms.CallFunc_Server_Collect_ReturnValue = CallFunc_Server_Collect_ReturnValue;
	Parms.CallFunc_GetCrafterState_ReturnValue = CallFunc_GetCrafterState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

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

void UGA_Cooking_Minigame_Base_C::PlayMontage(class FName Montage, class FName MontageSection, bool EndAbilityWhenFinished, bool Force__Used_by_child_outro_, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "PlayMontage");

	Params::UGA_Cooking_Minigame_Base_C_PlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.MontageSection = MontageSection;
	Parms.EndAbilityWhenFinished = EndAbilityWhenFinished;
	Parms.Force__Used_by_child_outro_ = Force__Used_by_child_outro_;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.CanUnlockCharacterDuringAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanUnlock                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::CanUnlockCharacterDuringAnimation(bool* CanUnlock, bool CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "CanUnlockCharacterDuringAnimation");

	Params::UGA_Cooking_Minigame_Base_C_CanUnlockCharacterDuringAnimation_Params Parms{};

	Parms.CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock = CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUnlock != nullptr)
		*CanUnlock = Parms.CanUnlock;

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

void UGA_Cooking_Minigame_Base_C::OnAbilityEnd(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "OnAbilityEnd");

	Params::UGA_Cooking_Minigame_Base_C_OnAbilityEnd_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnAbilityStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::OnAbilityStart(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "OnAbilityStart");

	Params::UGA_Cooking_Minigame_Base_C_OnAbilityStart_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;

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

void UGA_Cooking_Minigame_Base_C::IsPlayingMinigame(bool* IsPlayingMinigame, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "IsPlayingMinigame");

	Params::UGA_Cooking_Minigame_Base_C_IsPlayingMinigame_Params Parms{};

	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayingMinigame != nullptr)
		*IsPlayingMinigame = Parms.IsPlayingMinigame;

}


// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_Minigame_Base_C::HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "HandleEvent");

	Params::UGA_Cooking_Minigame_Base_C_HandleEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

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

void UGA_Cooking_Minigame_Base_C::Minigame_OnStateChanged(class UMinigameComponentBase* Comp, enum class EMinigameState PrevState, enum class EMinigameState NewState, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsPlayingMinigame_IsPlayingMinigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "Minigame OnStateChanged");

	Params::UGA_Cooking_Minigame_Base_C_Minigame_OnStateChanged_Params Parms{};

	Parms.Comp = Comp;
	Parms.PrevState = PrevState;
	Parms.NewState = NewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsPlayingMinigame_IsPlayingMinigame = CallFunc_IsPlayingMinigame_IsPlayingMinigame;

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

void UGA_Cooking_Minigame_Base_C::ExecuteUbergraph_GA_Cooking_Minigame_Base(int32 EntryPoint, bool CallFunc_IsShuttingDown_NewParam, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class FName CallFunc_GetMontageCurrentSectionName_ReturnValue, bool CallFunc_IsShuttingDown_NewParam_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_Minigame_Base_C", "ExecuteUbergraph_GA_Cooking_Minigame_Base");

	Params::UGA_Cooking_Minigame_Base_C_ExecuteUbergraph_GA_Cooking_Minigame_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsShuttingDown_NewParam = CallFunc_IsShuttingDown_NewParam;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_GetMontageCurrentSectionName_ReturnValue = CallFunc_GetMontageCurrentSectionName_ReturnValue;
	Parms.CallFunc_IsShuttingDown_NewParam_1 = CallFunc_IsShuttingDown_NewParam_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
