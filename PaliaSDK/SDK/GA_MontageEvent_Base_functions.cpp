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


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.IsShuttingDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::IsShuttingDown(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "IsShuttingDown");

	Params::UGA_MontageEvent_Base_C_IsShuttingDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.DoesMontageSectionExist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        MontageName                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SectionName                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_FindMontageByMapping_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MontageHasSection_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_MontageEvent_Base_C::DoesMontageSectionExist(class FName& MontageName, class FName& SectionName, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class FName Temp_name_Variable, class UAnimMontage* CallFunc_FindMontageByMapping_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MontageHasSection_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "DoesMontageSectionExist");

	Params::UGA_MontageEvent_Base_C_DoesMontageSectionExist_Params Parms{};

	Parms.MontageName = MontageName;
	Parms.SectionName = SectionName;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_FindMontageByMapping_ReturnValue = CallFunc_FindMontageByMapping_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MontageHasSection_ReturnValue = CallFunc_MontageHasSection_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.GetPlayingMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        AnimationName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MontageSection                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::GetPlayingMontage(class FName* AnimationName, class FName* MontageSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "GetPlayingMontage");

	Params::UGA_MontageEvent_Base_C_GetPlayingMontage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimationName != nullptr)
		*AnimationName = Parms.AnimationName;

	if (MontageSection != nullptr)
		*MontageSection = Parms.MontageSection;

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.IsAbilityLockedIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGASComponent*        CallFunc_GetGAS_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityMarkedLockedIn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_MontageEvent_Base_C::IsAbilityLockedIn(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsAbilityMarkedLockedIn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "IsAbilityLockedIn");

	Params::UGA_MontageEvent_Base_C_IsAbilityLockedIn_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGAS_ReturnValue = CallFunc_GetGAS_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsAbilityMarkedLockedIn_ReturnValue = CallFunc_IsAbilityMarkedLockedIn_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.EndTaskAndClearReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::EndTaskAndClearReference(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "EndTaskAndClearReference");

	Params::UGA_MontageEvent_Base_C_EndTaskAndClearReference_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.ClearSetMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_MontageEvent_Base_C::ClearSetMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "ClearSetMontage");

	Params::UGA_MontageEvent_Base_C_ClearSetMontage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMovementBlock_Changed                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMovementBlock_Changed_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_SetMovementBlock_Changed_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "HandleEvent");

	Params::UGA_MontageEvent_Base_C_HandleEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_SetMovementBlock_Changed_1 = CallFunc_SetMovementBlock_Changed_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.SetAbilityLockedIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LockedIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::SetAbilityLockedIn(bool LockedIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "SetAbilityLockedIn");

	Params::UGA_MontageEvent_Base_C_SetAbilityLockedIn_Params Parms{};

	Parms.LockedIn = LockedIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.SetMovementBlock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityLockedIn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "SetMovementBlock");

	Params::UGA_MontageEvent_Base_C_SetMovementBlock_Params Parms{};

	Parms.bLock = bLock;
	Parms.CallFunc_IsAbilityLockedIn_ReturnValue = CallFunc_IsAbilityLockedIn_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnAbilityEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_FNameIsNone_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMovementBlock_Changed                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::OnAbilityEnd(bool CallFunc_FNameIsNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetMovementBlock_Changed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnAbilityEnd");

	Params::UGA_MontageEvent_Base_C_OnAbilityEnd_Params Parms{};

	Parms.CallFunc_FNameIsNone_ReturnValue = CallFunc_FNameIsNone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnAbilityStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetMovementBlock_Changed                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::OnAbilityStart(bool CallFunc_SetMovementBlock_Changed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnAbilityStart");

	Params::UGA_MontageEvent_Base_C_OnAbilityStart_Params Parms{};

	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.EventReceived_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::EventReceived_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "EventReceived_7FADF818480F78C2A5D48AA0819385E5");

	Params::UGA_MontageEvent_Base_C_EventReceived_7FADF818480F78C2A5D48AA0819385E5_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnCancelled_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::OnCancelled_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnCancelled_7FADF818480F78C2A5D48AA0819385E5");

	Params::UGA_MontageEvent_Base_C_OnCancelled_7FADF818480F78C2A5D48AA0819385E5_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnInterrupted_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::OnInterrupted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnInterrupted_7FADF818480F78C2A5D48AA0819385E5");

	Params::UGA_MontageEvent_Base_C_OnInterrupted_7FADF818480F78C2A5D48AA0819385E5_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnBlendOut_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::OnBlendOut_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnBlendOut_7FADF818480F78C2A5D48AA0819385E5");

	Params::UGA_MontageEvent_Base_C_OnBlendOut_7FADF818480F78C2A5D48AA0819385E5_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnCompleted_7FADF818480F78C2A5D48AA0819385E5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_MontageEvent_Base_C::OnCompleted_7FADF818480F78C2A5D48AA0819385E5(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnCompleted_7FADF818480F78C2A5D48AA0819385E5");

	Params::UGA_MontageEvent_Base_C_OnCompleted_7FADF818480F78C2A5D48AA0819385E5_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.Event_OnActivateAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_MontageEvent_Base_C::Event_OnActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "Event_OnActivateAbility");

	Params::UGA_MontageEvent_Base_C_Event_OnActivateAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "K2_OnEndAbility");

	Params::UGA_MontageEvent_Base_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.PlayMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MontageSection                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EndAbilityWhenFinished                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Force__Used_by_child_outro_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::PlayMontage(class FName Montage, class FName MontageSection, bool EndAbilityWhenFinished, bool Force__Used_by_child_outro_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "PlayMontage");

	Params::UGA_MontageEvent_Base_C_PlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.MontageSection = MontageSection;
	Parms.EndAbilityWhenFinished = EndAbilityWhenFinished;
	Parms.Force__Used_by_child_outro_ = Force__Used_by_child_outro_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.ExecuteUbergraph_GA_MontageEvent_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_3                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_3                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_2                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_2                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_1                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag                                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData                                     ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable                                             ()
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Montage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_MontageSection                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_EndAbilityWhenFinished                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Force__Used_by_child_outro_                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_TaskProxy_PlayMontageAndWaitForEvent*CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_4                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_4                                   ()
// bool                               CallFunc_FNameIsNone_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesMontageSectionExist_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::ExecuteUbergraph_GA_MontageEvent_Base(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool K2Node_Event_bWasCancelled, class FName K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_MontageSection, bool K2Node_CustomEvent_EndAbilityWhenFinished, bool K2Node_CustomEvent_Force__Used_by_child_outro_, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, bool CallFunc_FNameIsNone_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_DoesMontageSectionExist_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "ExecuteUbergraph_GA_MontageEvent_Base");

	Params::UGA_MontageEvent_Base_C_ExecuteUbergraph_GA_MontageEvent_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventTag_3 = K2Node_CustomEvent_EventTag_3;
	Parms.K2Node_CustomEvent_EventData_3 = K2Node_CustomEvent_EventData_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventTag_2 = K2Node_CustomEvent_EventTag_2;
	Parms.K2Node_CustomEvent_EventData_2 = K2Node_CustomEvent_EventData_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_EventTag_1 = K2Node_CustomEvent_EventTag_1;
	Parms.K2Node_CustomEvent_EventData_1 = K2Node_CustomEvent_EventData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_EventTag = K2Node_CustomEvent_EventTag;
	Parms.K2Node_CustomEvent_EventData = K2Node_CustomEvent_EventData;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_CustomEvent_MontageSection = K2Node_CustomEvent_MontageSection;
	Parms.K2Node_CustomEvent_EndAbilityWhenFinished = K2Node_CustomEvent_EndAbilityWhenFinished;
	Parms.K2Node_CustomEvent_Force__Used_by_child_outro_ = K2Node_CustomEvent_Force__Used_by_child_outro_;
	Parms.CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue = CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_EventTag_4 = K2Node_CustomEvent_EventTag_4;
	Parms.K2Node_CustomEvent_EventData_4 = K2Node_CustomEvent_EventData_4;
	Parms.CallFunc_FNameIsNone_ReturnValue = CallFunc_FNameIsNone_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_DoesMontageSectionExist_ReturnValue = CallFunc_DoesMontageSectionExist_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnMovementBlockChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MovementBlocked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::OnMovementBlockChanged__DelegateSignature(bool MovementBlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnMovementBlockChanged__DelegateSignature");

	Params::UGA_MontageEvent_Base_C_OnMovementBlockChanged__DelegateSignature_Params Parms{};

	Parms.MovementBlocked = MovementBlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_MontageEvent_Base.GA_MontageEvent_Base_C.OnMontageDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMontageEventResult     Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_MontageEvent_Base_C::OnMontageDone__DelegateSignature(enum class EMontageEventResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_MontageEvent_Base_C", "OnMontageDone__DelegateSignature");

	Params::UGA_MontageEvent_Base_C_OnMontageDone__DelegateSignature_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
