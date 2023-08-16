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


// Function Epic_Game.AbilityTask_AnimInstancePlayMontageAndWait.AnimInstancePlayMontageAndWaitForEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimInstance*               InAnimInstance                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                MontageToPlay                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       EventTags                                                        (Parm, NativeAccessSpecifierPublic)
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartSection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAbilityEnds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_AnimInstancePlayMontageAndWait*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_AnimInstancePlayMontageAndWait* UAbilityTask_AnimInstancePlayMontageAndWait::AnimInstancePlayMontageAndWaitForEvent(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, class UAnimInstance* InInAnimInstance, class UAnimMontage* InMontageToPlay, const struct FGameplayTagContainer& InEventTags, float InRate, class FName InStartSection, bool InbStopWhenAbilityEnds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_AnimInstancePlayMontageAndWait", "AnimInstancePlayMontageAndWaitForEvent");

	Params::UAbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.InAnimInstance = InInAnimInstance;
	Parms.MontageToPlay = InMontageToPlay;
	Parms.EventTags = InEventTags;
	Parms.Rate = InRate;
	Parms.StartSection = InStartSection;
	Parms.bStopWhenAbilityEnds = InbStopWhenAbilityEnds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Epic_Game.RPGAbilityTask_PlayMontageAndWaitForEvent.PlayMontageAndWaitForEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                MontageToPlay                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       EventTags                                                        (Parm, NativeAccessSpecifierPublic)
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartSection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAbilityEnds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AnimRootMotionTranslationScale                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URPGAbilityTask_PlayMontageAndWaitForEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URPGAbilityTask_PlayMontageAndWaitForEvent* URPGAbilityTask_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, class UAnimMontage* InMontageToPlay, const struct FGameplayTagContainer& InEventTags, float InRate, class FName InStartSection, bool InbStopWhenAbilityEnds, float InAnimRootMotionTranslationScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RPGAbilityTask_PlayMontageAndWaitForEvent", "PlayMontageAndWaitForEvent");

	Params::URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.MontageToPlay = InMontageToPlay;
	Parms.EventTags = InEventTags;
	Parms.Rate = InRate;
	Parms.StartSection = InStartSection;
	Parms.bStopWhenAbilityEnds = InbStopWhenAbilityEnds;
	Parms.AnimRootMotionTranslationScale = InAnimRootMotionTranslationScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
