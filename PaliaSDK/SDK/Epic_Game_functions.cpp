#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Epic_Game.AbilityTask_AnimInstancePlayMontageAndWait
// (None)

class UClass* UAbilityTask_AnimInstancePlayMontageAndWait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityTask_AnimInstancePlayMontageAndWait");

	return Clss;
}


// AbilityTask_AnimInstancePlayMontageAndWait Epic_Game.Default__AbilityTask_AnimInstancePlayMontageAndWait
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAbilityTask_AnimInstancePlayMontageAndWait* UAbilityTask_AnimInstancePlayMontageAndWait::GetDefaultObj()
{
	static class UAbilityTask_AnimInstancePlayMontageAndWait* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbilityTask_AnimInstancePlayMontageAndWait*>(UAbilityTask_AnimInstancePlayMontageAndWait::StaticClass()->DefaultObject);

	return Default;
}


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

class UAbilityTask_AnimInstancePlayMontageAndWait* UAbilityTask_AnimInstancePlayMontageAndWait::AnimInstancePlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimInstance* InAnimInstance, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, class FName StartSection, bool bStopWhenAbilityEnds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_AnimInstancePlayMontageAndWait", "AnimInstancePlayMontageAndWaitForEvent");

	Params::UAbilityTask_AnimInstancePlayMontageAndWait_AnimInstancePlayMontageAndWaitForEvent_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.InAnimInstance = InAnimInstance;
	Parms.MontageToPlay = MontageToPlay;
	Parms.EventTags = EventTags;
	Parms.Rate = Rate;
	Parms.StartSection = StartSection;
	Parms.bStopWhenAbilityEnds = bStopWhenAbilityEnds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Epic_Game.RPGAbilityTask_PlayMontageAndWaitForEvent
// (None)

class UClass* URPGAbilityTask_PlayMontageAndWaitForEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RPGAbilityTask_PlayMontageAndWaitForEvent");

	return Clss;
}


// RPGAbilityTask_PlayMontageAndWaitForEvent Epic_Game.Default__RPGAbilityTask_PlayMontageAndWaitForEvent
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class URPGAbilityTask_PlayMontageAndWaitForEvent* URPGAbilityTask_PlayMontageAndWaitForEvent::GetDefaultObj()
{
	static class URPGAbilityTask_PlayMontageAndWaitForEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<URPGAbilityTask_PlayMontageAndWaitForEvent*>(URPGAbilityTask_PlayMontageAndWaitForEvent::StaticClass()->DefaultObject);

	return Default;
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

class URPGAbilityTask_PlayMontageAndWaitForEvent* URPGAbilityTask_PlayMontageAndWaitForEvent::PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RPGAbilityTask_PlayMontageAndWaitForEvent", "PlayMontageAndWaitForEvent");

	Params::URPGAbilityTask_PlayMontageAndWaitForEvent_PlayMontageAndWaitForEvent_Params Parms{};

	Parms.OwningAbility = OwningAbility;
	Parms.TaskInstanceName = TaskInstanceName;
	Parms.MontageToPlay = MontageToPlay;
	Parms.EventTags = EventTags;
	Parms.Rate = Rate;
	Parms.StartSection = StartSection;
	Parms.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	Parms.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


