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


// Function GameplayAbilities.AbilityAsync.EndAction
// (Native, Public, BlueprintCallable)
// Parameters:

void UAbilityAsync::EndAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync", "EndAction");

	Params::UAbilityAsync_EndAction_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitAttributeChanged*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitAttributeChanged* UAbilityAsync_WaitAttributeChanged::WaitForAttributeChanged(class AActor* InTargetActor, const struct FGameplayAttribute& InAttribute, bool InOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitAttributeChanged", "WaitForAttributeChanged");

	Params::UAbilityAsync_WaitAttributeChanged_WaitForAttributeChanged_Params Parms{};

	Parms.TargetActor = InTargetActor;
	Parms.Attribute = InAttribute;
	Parms.OnlyTriggerOnce = InOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OldValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityAsync_WaitAttributeChanged::AsyncWaitAttributeChangedDelegate__DelegateSignature(const struct FGameplayAttribute& InAttribute, float InNewValue, float InOldValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitAttributeChanged", "AsyncWaitAttributeChangedDelegate__DelegateSignature");

	Params::UAbilityAsync_WaitAttributeChanged_AsyncWaitAttributeChangedDelegate__DelegateSignature_Params Parms{};

	Parms.Attribute = InAttribute;
	Parms.NewValue = InNewValue;
	Parms.OldValue = InOldValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayEffectApplied*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayEffectApplied* UAbilityAsync_WaitGameplayEffectApplied::WaitGameplayEffectAppliedToActor(class AActor* InTargetActor, const struct FGameplayTargetDataFilterHandle& InSourceFilter, const struct FGameplayTagRequirements& InSourceTagRequirements, const struct FGameplayTagRequirements& InTargetTagRequirements, bool InTriggerOnce, bool InListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitGameplayEffectApplied", "WaitGameplayEffectAppliedToActor");

	Params::UAbilityAsync_WaitGameplayEffectApplied_WaitGameplayEffectAppliedToActor_Params Parms{};

	Parms.TargetActor = InTargetActor;
	Parms.SourceFilter = InSourceFilter;
	Parms.SourceTagRequirements = InSourceTagRequirements;
	Parms.TargetTagRequirements = InTargetTagRequirements;
	Parms.TriggerOnce = InTriggerOnce;
	Parms.ListenForPeriodicEffect = InListenForPeriodicEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AActor*                      Source                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityAsync_WaitGameplayEffectApplied::OnAppliedDelegate__DelegateSignature(class AActor* InSource, const struct FGameplayEffectSpecHandle& InSpecHandle, const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitGameplayEffectApplied", "OnAppliedDelegate__DelegateSignature");

	Params::UAbilityAsync_WaitGameplayEffectApplied_OnAppliedDelegate__DelegateSignature_Params Parms{};

	Parms.Source = InSource;
	Parms.SpecHandle = InSpecHandle;
	Parms.ActiveHandle = InActiveHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyMatchExact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayEvent* UAbilityAsync_WaitGameplayEvent::WaitGameplayEventToActor(class AActor* InTargetActor, const struct FGameplayTag& InEventTag, bool InOnlyTriggerOnce, bool InOnlyMatchExact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitGameplayEvent", "WaitGameplayEventToActor");

	Params::UAbilityAsync_WaitGameplayEvent_WaitGameplayEventToActor_Params Parms{};

	Parms.TargetActor = InTargetActor;
	Parms.EventTag = InEventTag;
	Parms.OnlyTriggerOnce = InOnlyTriggerOnce;
	Parms.OnlyMatchExact = InOnlyMatchExact;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)

void UAbilityAsync_WaitGameplayEvent::EventReceivedDelegate__DelegateSignature(const struct FGameplayEventData& InPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitGameplayEvent", "EventReceivedDelegate__DelegateSignature");

	Params::UAbilityAsync_WaitGameplayEvent_EventReceivedDelegate__DelegateSignature_Params Parms{};

	Parms.Payload = InPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayTagAdded*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayTagAdded* UAbilityAsync_WaitGameplayTagAdded::WaitGameplayTagAddToActor(class AActor* InTargetActor, const struct FGameplayTag& InTag, bool InOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitGameplayTagAdded", "WaitGameplayTagAddToActor");

	Params::UAbilityAsync_WaitGameplayTagAdded_WaitGameplayTagAddToActor_Params Parms{};

	Parms.TargetActor = InTargetActor;
	Parms.Tag = InTag;
	Parms.OnlyTriggerOnce = InOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayTagRemoved*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayTagRemoved* UAbilityAsync_WaitGameplayTagRemoved::WaitGameplayTagRemoveFromActor(class AActor* InTargetActor, const struct FGameplayTag& InTag, bool InOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitGameplayTagRemoved", "WaitGameplayTagRemoveFromActor");

	Params::UAbilityAsync_WaitGameplayTagRemoved_WaitGameplayTagRemoveFromActor_Params Parms{};

	Parms.TargetActor = InTargetActor;
	Parms.Tag = InTag;
	Parms.OnlyTriggerOnce = InOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
// (Final, Native, Static, Protected, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Parm, NativeAccessSpecifierPublic)
// enum class EWaitGameplayTagQueryTriggerConditionTriggerCondition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyTriggerOnce                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityAsync_WaitGameplayTagQuery*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityAsync_WaitGameplayTagQuery* UAbilityAsync_WaitGameplayTagQuery::WaitGameplayTagQueryOnActor(class AActor* InTargetActor, const struct FGameplayTagQuery& InTagQuery, enum class EWaitGameplayTagQueryTriggerCondition InTriggerCondition, bool InbOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityAsync_WaitGameplayTagQuery", "WaitGameplayTagQueryOnActor");

	Params::UAbilityAsync_WaitGameplayTagQuery_WaitGameplayTagQueryOnActor_Params Parms{};

	Parms.TargetActor = InTargetActor;
	Parms.TagQuery = InTagQuery;
	Parms.TriggerCondition = InTriggerCondition;
	Parms.bOnlyTriggerOnce = InbOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldBlockAbilities                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool InbShouldBlockAbilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "SetShouldBlockOtherAbilities");

	Params::UGameplayAbility_SetShouldBlockOtherAbilities_Params Parms{};

	Parms.bShouldBlockAbilities = InbShouldBlockAbilities;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanBeCanceled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::SetCanBeCanceled(bool InbCanBeCanceled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "SetCanBeCanceled");

	Params::UGameplayAbility_SetCanBeCanceled_Params Parms{};

	Parms.bCanBeCanceled = InbCanBeCanceled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "SendGameplayEvent");

	Params::UGameplayAbility_SendGameplayEvent_Params Parms{};

	Parms.EventTag = InEventTag;
	Parms.Payload = InPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
// (Native, Public, BlueprintCallable)
// Parameters:

void UGameplayAbility::RemoveGrantedByEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "RemoveGrantedByEffect");

	Params::UGameplayAbility_RemoveGrantedByEffect_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                              OverrideBlendOutTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageStop(float InOverrideBlendOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MontageStop");

	Params::UGameplayAbility_MontageStop_Params Parms{};

	Parms.OverrideBlendOutTime = InOverrideBlendOutTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        FromSectionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ToSectionName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageSetNextSectionName(class FName InFromSectionName, class FName InToSectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MontageSetNextSectionName");

	Params::UGameplayAbility_MontageSetNextSectionName_Params Parms{};

	Parms.FromSectionName = InFromSectionName;
	Parms.ToSectionName = InToSectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::MontageJumpToSection(class FName InSectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MontageJumpToSection");

	Params::UGameplayAbility_MontageJumpToSection_Params Parms{};

	Parms.SectionName = InSectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetingLocationInfoReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(class FName InSocketName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");

	Params::UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params Parms{};

	Parms.SocketName = InSocketName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfoReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MakeTargetLocationInfoFromOwnerActor");

	Params::UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(TSubclassOf<class UGameplayEffect> InGameplayEffectClass, float InLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "MakeOutgoingGameplayEffectSpec");

	Params::UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params Parms{};

	Parms.GameplayEffectClass = InGameplayEffectClass;
	Parms.Level = InLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& InActorInfo, const struct FGameplayEventData& InPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ShouldAbilityRespondToEvent");

	Params::UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = InActorInfo;
	Parms.Payload = InPayload;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& InGameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_RemoveGameplayCue");

	Params::UGameplayAbility_K2_RemoveGameplayCue_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_OnEndAbility(bool InbWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_OnEndAbility");

	Params::UGameplayAbility_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = InbWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.K2_HasAuthority
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_HasAuthority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_HasAuthority");

	Params::UGameplayAbility_K2_HasAuthority_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& InGameplayCueTag, struct FGameplayCueParameters& InGameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ExecuteGameplayCueWithParams");

	Params::UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.GameplayCueParameters = InGameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& InGameplayCueTag, const struct FGameplayEffectContextHandle& InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ExecuteGameplayCue");

	Params::UGameplayAbility_K2_ExecuteGameplayCue_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.Context = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
// (Native, Protected, BlueprintCallable)
// Parameters:

void UGameplayAbility::K2_EndAbilityLocally()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_EndAbilityLocally");

	Params::UGameplayAbility_K2_EndAbilityLocally_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (Native, Protected, BlueprintCallable)
// Parameters:

void UGameplayAbility::K2_EndAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_EndAbility");

	Params::UGameplayAbility_K2_EndAbility_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (Event, Public, BlueprintEvent)
// Parameters:

void UGameplayAbility::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitExecute");

	Params::UGameplayAbility_K2_CommitExecute_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               BroadcastCommitEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbilityCost(bool InBroadcastCommitEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbilityCost");

	Params::UGameplayAbility_K2_CommitAbilityCost_Params Parms{};

	Parms.BroadcastCommitEvent = InBroadcastCommitEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               BroadcastCommitEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ForceCooldown                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool InBroadcastCommitEvent, bool InForceCooldown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbilityCooldown");

	Params::UGameplayAbility_K2_CommitAbilityCooldown_Params Parms{};

	Parms.BroadcastCommitEvent = InBroadcastCommitEvent;
	Parms.ForceCooldown = InForceCooldown;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CommitAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CommitAbility");

	Params::UGameplayAbility_K2_CommitAbility_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CheckAbilityCost");

	Params::UGameplayAbility_K2_CheckAbilityCost_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CheckAbilityCooldown");

	Params::UGameplayAbility_K2_CheckAbilityCooldown_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_CancelAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayAbility::K2_CancelAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CancelAbility");

	Params::UGameplayAbility_K2_CancelAbility_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& InActorInfo, const struct FGameplayAbilitySpecHandle& InHandle, struct FGameplayTagContainer* InRelevantTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_CanActivateAbility");

	Params::UGameplayAbility_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = InActorInfo;
	Parms.Handle = InHandle;

	UObject::ProcessEvent(Func, &Parms);

	if (InRelevantTags != nullptr)
		*InRelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   EffectSpecHandle                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& InEffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& InTargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToTarget");

	Params::UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params Parms{};

	Parms.EffectSpecHandle = InEffectSpecHandle;
	Parms.TargetData = InTargetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   EffectSpecHandle                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& InEffectSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ApplyGameplayEffectSpecToOwner");

	Params::UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params Parms{};

	Parms.EffectSpecHandle = InEffectSpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
// (Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameter                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bRemoveOnAbilityEnd                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_AddGameplayCueWithParams(const struct FGameplayTag& InGameplayCueTag, struct FGameplayCueParameters& InGameplayCueParameter, bool InbRemoveOnAbilityEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_AddGameplayCueWithParams");

	Params::UGameplayAbility_K2_AddGameplayCueWithParams_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.GameplayCueParameter = InGameplayCueParameter;
	Parms.bRemoveOnAbilityEnd = InbRemoveOnAbilityEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// bool                               bRemoveOnAbilityEnd                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& InGameplayCueTag, const struct FGameplayEffectContextHandle& InContext, bool InbRemoveOnAbilityEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_AddGameplayCue");

	Params::UGameplayAbility_K2_AddGameplayCue_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.Context = InContext;
	Parms.bRemoveOnAbilityEnd = InbRemoveOnAbilityEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGameplayAbility::K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ActivateAbilityFromEvent");

	Params::UGameplayAbility_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = InEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGameplayAbility::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "K2_ActivateAbility");

	Params::UGameplayAbility_K2_ActivateAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbility.IsLocallyControlled
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayAbility::IsLocallyControlled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "IsLocallyControlled");

	Params::UGameplayAbility_IsLocallyControlled_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UGameplayAbility::InvalidateClientPredictionKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "InvalidateClientPredictionKey");

	Params::UGameplayAbility_InvalidateClientPredictionKey_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.GetSourceObject_BP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilitySpecHandle  Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGameplayAbility::GetSourceObject_BP(const struct FGameplayAbilitySpecHandle& InHandle, struct FGameplayAbilityActorInfo& InActorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetSourceObject_BP");

	Params::UGameplayAbility_GetSourceObject_BP_Params Parms{};

	Parms.Handle = InHandle;
	Parms.ActorInfo = InActorInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetOwningComponentFromActorInfo");

	Params::UGameplayAbility_GetOwningComponentFromActorInfo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetOwningActorFromActorInfo");

	Params::UGameplayAbility_GetOwningActorFromActorInfo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetGrantedByEffectContext");

	Params::UGameplayAbility_GetGrantedByEffectContext_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetCurrentSourceObject");

	Params::UGameplayAbility_GetCurrentSourceObject_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetCurrentMontage");

	Params::UGameplayAbility_GetCurrentMontage_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayAbility::GetCooldownTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetCooldownTimeRemaining");

	Params::UGameplayAbility_GetCooldownTimeRemaining_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandleOptionalTargetData                                               (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& InOptionalTargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetContextFromOwner");

	Params::UGameplayAbility_GetContextFromOwner_Params Parms{};

	Parms.OptionalTargetData = InOptionalTargetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetAvatarActorFromActorInfo");

	Params::UGameplayAbility_GetAvatarActorFromActorInfo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetActorInfo");

	Params::UGameplayAbility_GetActorInfo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAbilitySystemComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilitySystemComponent* UGameplayAbility::GetAbilitySystemComponentFromActorInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetAbilitySystemComponentFromActorInfo");

	Params::UGameplayAbility_GetAbilitySystemComponentFromActorInfo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilitySpecHandle  Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameplayAbility::GetAbilityLevel_BP(const struct FGameplayAbilitySpecHandle& InHandle, struct FGameplayAbilityActorInfo& InActorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetAbilityLevel_BP");

	Params::UGameplayAbility_GetAbilityLevel_BP_Params Parms{};

	Parms.Handle = InHandle;
	Parms.ActorInfo = InActorInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGameplayAbility::GetAbilityLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "GetAbilityLevel");

	Params::UGameplayAbility_GetAbilityLevel_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::EndTaskByInstanceName(class FName InInstanceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "EndTaskByInstanceName");

	Params::UGameplayAbility_EndTaskByInstanceName_Params Parms{};

	Parms.InstanceName = InInstanceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        OptionalStateNameToEnd                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::EndAbilityState(class FName InOptionalStateNameToEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "EndAbilityState");

	Params::UGameplayAbility_EndAbilityState_Params Parms{};

	Parms.OptionalStateNameToEnd = InOptionalStateNameToEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEndTask                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::ConfirmTaskByInstanceName(class FName InInstanceName, bool InbEndTask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "ConfirmTaskByInstanceName");

	Params::UGameplayAbility_ConfirmTaskByInstanceName_Params Parms{};

	Parms.InstanceName = InInstanceName;
	Parms.bEndTask = InbEndTask;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        InstanceName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::CancelTaskByInstanceName(class FName InInstanceName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "CancelTaskByInstanceName");

	Params::UGameplayAbility_CancelTaskByInstanceName_Params Parms{};

	Parms.InstanceName = InInstanceName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& InHandle, int32 InStacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithHandle");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params Parms{};

	Parms.Handle = InHandle;
	Parms.StacksToRemove = InStacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       WithGrantedTags                                                  (Parm, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& InWithGrantedTags, int32 InStacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithGrantedTags");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params Parms{};

	Parms.WithGrantedTags = InWithGrantedTags;
	Parms.StacksToRemove = InStacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       WithAssetTags                                                    (Parm, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& InWithAssetTags, int32 InStacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_RemoveGameplayEffectFromOwnerWithAssetTags");

	Params::UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params Parms{};

	Parms.WithAssetTags = InWithAssetTags;
	Parms.StacksToRemove = InStacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Stacks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& InTargetData, TSubclassOf<class UGameplayEffect> InGameplayEffectClass, int32 InGameplayEffectLevel, int32 InStacks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToTarget");

	Params::UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.GameplayEffectClass = InGameplayEffectClass;
	Parms.GameplayEffectLevel = InGameplayEffectLevel;
	Parms.Stacks = InStacks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Stacks                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(TSubclassOf<class UGameplayEffect> InGameplayEffectClass, int32 InGameplayEffectLevel, int32 InStacks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbility", "BP_ApplyGameplayEffectToOwner");

	Params::UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params Parms{};

	Parms.GameplayEffectClass = InGameplayEffectClass;
	Parms.GameplayEffectLevel = InGameplayEffectLevel;
	Parms.Stacks = InStacks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (Native, Public)
// Parameters:

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityTargetActor", "ConfirmTargeting");

	Params::AGameplayAbilityTargetActor_ConfirmTargeting_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (Native, Public)
// Parameters:

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityTargetActor", "CancelTargeting");

	Params::AGameplayAbilityTargetActor_CancelTargeting_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(class FName InParamName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamVector");

	Params::AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params Parms{};

	Parms.ParamName = InParamName;
	Parms.Value = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(class FName InParamName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "SetReticleMaterialParamFloat");

	Params::AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params Parms{};

	Parms.ParamName = InParamName;
	Parms.Value = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool InbNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnValidTargetChanged");

	Params::AGameplayAbilityWorldReticle_OnValidTargetChanged_Params Parms{};

	Parms.bNewValue = InbNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool InbNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnTargetingAnActor");

	Params::AGameplayAbilityWorldReticle_OnTargetingAnActor_Params Parms{};

	Parms.bNewValue = InbNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (Event, Public, BlueprintEvent)
// Parameters:

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "OnParametersInitialized");

	Params::AGameplayAbilityWorldReticle_OnParametersInitialized_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFaceIn2D                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayAbilityWorldReticle::FaceTowardSource(bool InbFaceIn2D)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayAbilityWorldReticle", "FaceTowardSource");

	Params::AGameplayAbilityWorldReticle_FaceTowardSource_Params Parms{};

	Parms.bFaceIn2D = InbFaceIn2D;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldDirection                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAdditive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthOverTime                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnableGravity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionConstantForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::ApplyRootMotionConstantForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FVector& InWorldDirection, float InStrength, float InDuration, bool InbIsAdditive, class UCurveFloat* InStrengthOverTime, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish, bool InbEnableGravity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionConstantForce", "ApplyRootMotionConstantForce");

	Params::UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.WorldDirection = InWorldDirection;
	Parms.Strength = InStrength;
	Parms.Duration = InDuration;
	Parms.bIsAdditive = InbIsAdditive;
	Parms.StrengthOverTime = InStrengthOverTime;
	Parms.VelocityOnFinishMode = InVelocityOnFinishMode;
	Parms.SetVelocityOnFinish = InSetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = InClampVelocityOnFinish;
	Parms.bEnableGravity = InbEnableGravity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(struct FHitResult& InHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "OnLandedCallback");

	Params::UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params Parms{};

	Parms.Hit = InHit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAbilityTask_ApplyRootMotionJumpForce::Finish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "Finish");

	Params::UAbilityTask_ApplyRootMotionJumpForce_Finish_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumLandedTriggerTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFinishOnLanded                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionJumpForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::ApplyRootMotionJumpForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FRotator& InRotation, float InDistance, float InHeight, float InDuration, float InMinimumLandedTriggerTime, bool InbFinishOnLanded, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish, class UCurveVector* InPathOffsetCurve, class UCurveFloat* InTimeMappingCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionJumpForce", "ApplyRootMotionJumpForce");

	Params::UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.Rotation = InRotation;
	Parms.Distance = InDistance;
	Parms.Height = InHeight;
	Parms.Duration = InDuration;
	Parms.MinimumLandedTriggerTime = InMinimumLandedTriggerTime;
	Parms.bFinishOnLanded = InbFinishOnLanded;
	Parms.VelocityOnFinishMode = InVelocityOnFinishMode;
	Parms.SetVelocityOnFinish = InSetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = InClampVelocityOnFinish;
	Parms.PathOffsetCurve = InPathOffsetCurve;
	Parms.TimeMappingCurve = InTimeMappingCurve;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
// (Final, Native, Public)
// Parameters:
// class AActor*                      OriginalTarget                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      NewTarget                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(class AActor* InOriginalTarget, class AActor* InNewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnTargetActorSwapped");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params Parms{};

	Parms.OriginalTarget = InOriginalTarget;
	Parms.NewTarget = InNewTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
// (Final, Native, Protected)
// Parameters:

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "OnRep_TargetLocation");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (Parm, NativeAccessSpecifierPublic)
// int32                              TargetDataIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TargetActorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionMoveToActorTargetOffsetTypeOffsetAlignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedHorizontal                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedVertical                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisableDestinationReachedInterrupt                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToActorForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FGameplayAbilityTargetDataHandle& InTargetDataHandle, int32 InTargetDataIndex, int32 InTargetActorIndex, const struct FVector& InTargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType InOffsetAlignment, float InDuration, class UCurveFloat* InTargetLerpSpeedHorizontal, class UCurveFloat* InTargetLerpSpeedVertical, bool InbSetNewMovementMode, enum class EMovementMode InMovementMode, bool InbRestrictSpeedToExpected, class UCurveVector* InPathOffsetCurve, class UCurveFloat* InTimeMappingCurve, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish, bool InbDisableDestinationReachedInterrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToTargetDataActorForce");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.TargetDataHandle = InTargetDataHandle;
	Parms.TargetDataIndex = InTargetDataIndex;
	Parms.TargetActorIndex = InTargetActorIndex;
	Parms.TargetLocationOffset = InTargetLocationOffset;
	Parms.OffsetAlignment = InOffsetAlignment;
	Parms.Duration = InDuration;
	Parms.TargetLerpSpeedHorizontal = InTargetLerpSpeedHorizontal;
	Parms.TargetLerpSpeedVertical = InTargetLerpSpeedVertical;
	Parms.bSetNewMovementMode = InbSetNewMovementMode;
	Parms.MovementMode = InMovementMode;
	Parms.bRestrictSpeedToExpected = InbRestrictSpeedToExpected;
	Parms.PathOffsetCurve = InPathOffsetCurve;
	Parms.TimeMappingCurve = InTimeMappingCurve;
	Parms.VelocityOnFinishMode = InVelocityOnFinishMode;
	Parms.SetVelocityOnFinish = InSetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = InClampVelocityOnFinish;
	Parms.bDisableDestinationReachedInterrupt = InbDisableDestinationReachedInterrupt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocationOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionMoveToActorTargetOffsetTypeOffsetAlignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedHorizontal                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TargetLerpSpeedVertical                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 TimeMappingCurve                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisableDestinationReachedInterrupt                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToActorForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::ApplyRootMotionMoveToActorForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, class AActor* InTargetActor, const struct FVector& InTargetLocationOffset, enum class ERootMotionMoveToActorTargetOffsetType InOffsetAlignment, float InDuration, class UCurveFloat* InTargetLerpSpeedHorizontal, class UCurveFloat* InTargetLerpSpeedVertical, bool InbSetNewMovementMode, enum class EMovementMode InMovementMode, bool InbRestrictSpeedToExpected, class UCurveVector* InPathOffsetCurve, class UCurveFloat* InTimeMappingCurve, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish, bool InbDisableDestinationReachedInterrupt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToActorForce", "ApplyRootMotionMoveToActorForce");

	Params::UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.TargetActor = InTargetActor;
	Parms.TargetLocationOffset = InTargetLocationOffset;
	Parms.OffsetAlignment = InOffsetAlignment;
	Parms.Duration = InDuration;
	Parms.TargetLerpSpeedHorizontal = InTargetLerpSpeedHorizontal;
	Parms.TargetLerpSpeedVertical = InTargetLerpSpeedVertical;
	Parms.bSetNewMovementMode = InbSetNewMovementMode;
	Parms.MovementMode = InMovementMode;
	Parms.bRestrictSpeedToExpected = InbRestrictSpeedToExpected;
	Parms.PathOffsetCurve = InPathOffsetCurve;
	Parms.TimeMappingCurve = InTimeMappingCurve;
	Parms.VelocityOnFinishMode = InVelocityOnFinishMode;
	Parms.SetVelocityOnFinish = InSetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = InClampVelocityOnFinish;
	Parms.bDisableDestinationReachedInterrupt = InbDisableDestinationReachedInterrupt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
// (Final, Native, Static, Private, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSetNewMovementMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           MovementMode                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestrictSpeedToExpected                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                PathOffsetCurve                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionMoveToForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::ApplyRootMotionMoveToForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FVector& InTargetLocation, float InDuration, bool InbSetNewMovementMode, enum class EMovementMode InMovementMode, bool InbRestrictSpeedToExpected, class UCurveVector* InPathOffsetCurve, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionMoveToForce", "ApplyRootMotionMoveToForce");

	Params::UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.TargetLocation = InTargetLocation;
	Parms.Duration = InDuration;
	Parms.bSetNewMovementMode = InbSetNewMovementMode;
	Parms.MovementMode = InMovementMode;
	Parms.bRestrictSpeedToExpected = InbRestrictSpeedToExpected;
	Parms.PathOffsetCurve = InPathOffsetCurve;
	Parms.VelocityOnFinishMode = InVelocityOnFinishMode;
	Parms.SetVelocityOnFinish = InSetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = InClampVelocityOnFinish;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      LocationActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsPush                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAdditive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNoZForce                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthDistanceFalloff                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 StrengthOverTime                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseFixedWorldDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    FixedWorldDirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class ERootMotionFinishVelocityModeVelocityOnFinishMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SetVelocityOnFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClampVelocityOnFinish                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_ApplyRootMotionRadialForce*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::ApplyRootMotionRadialForce(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FVector& InLocation, class AActor* InLocationActor, float InStrength, float InDuration, float InRadius, bool InbIsPush, bool InbIsAdditive, bool InbNoZForce, class UCurveFloat* InStrengthDistanceFalloff, class UCurveFloat* InStrengthOverTime, bool InbUseFixedWorldDirection, const struct FRotator& InFixedWorldDirection, enum class ERootMotionFinishVelocityMode InVelocityOnFinishMode, const struct FVector& InSetVelocityOnFinish, float InClampVelocityOnFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_ApplyRootMotionRadialForce", "ApplyRootMotionRadialForce");

	Params::UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.Location = InLocation;
	Parms.LocationActor = InLocationActor;
	Parms.Strength = InStrength;
	Parms.Duration = InDuration;
	Parms.Radius = InRadius;
	Parms.bIsPush = InbIsPush;
	Parms.bIsAdditive = InbIsAdditive;
	Parms.bNoZForce = InbNoZForce;
	Parms.StrengthDistanceFalloff = InStrengthDistanceFalloff;
	Parms.StrengthOverTime = InStrengthOverTime;
	Parms.bUseFixedWorldDirection = InbUseFixedWorldDirection;
	Parms.FixedWorldDirection = InFixedWorldDirection;
	Parms.VelocityOnFinishMode = InVelocityOnFinishMode;
	Parms.SetVelocityOnFinish = InSetVelocityOnFinish;
	Parms.ClampVelocityOnFinish = InClampVelocityOnFinish;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveFloat*                 OptionalInterpolationCurve                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCurveVector*                OptionalVectorInterpolationCurve                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_MoveToLocation* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::MoveToLocation(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, const struct FVector& InLocation, float InDuration, class UCurveFloat* InOptionalInterpolationCurve, class UCurveVector* InOptionalVectorInterpolationCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_MoveToLocation", "MoveToLocation");

	Params::UAbilityTask_MoveToLocation_MoveToLocation_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.Location = InLocation;
	Parms.Duration = InDuration;
	Parms.OptionalInterpolationCurve = InOptionalInterpolationCurve;
	Parms.OptionalVectorInterpolationCurve = InOptionalVectorInterpolationCurve;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAbilityTaskNetSyncType SyncType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_NetworkSyncPoint*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::WaitNetSync(class UGameplayAbility* InOwningAbility, enum class EAbilityTaskNetSyncType InSyncType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_NetworkSyncPoint", "WaitNetSync");

	Params::UAbilityTask_NetworkSyncPoint_WaitNetSync_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.SyncType = InSyncType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_NetworkSyncPoint", "OnSignalCallback");

	Params::UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (Final, Native, Public)
// Parameters:

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageInterrupted");

	Params::UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(class UAnimMontage* InMontage, bool InbInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageEnded");

	Params::UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params Parms{};

	Parms.Montage = InMontage;
	Parms.bInterrupted = InbInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                Montage                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* InMontage, bool InbInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "OnMontageBlendingOut");

	Params::UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = InMontage;
	Parms.bInterrupted = InbInterrupted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAnimMontage*                MontageToPlay                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Rate                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StartSection                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAbilityEnds                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AnimRootMotionTranslationScale                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTimeSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_PlayMontageAndWait*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::CreatePlayMontageAndWaitProxy(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, class UAnimMontage* InMontageToPlay, float InRate, class FName InStartSection, bool InbStopWhenAbilityEnds, float InAnimRootMotionTranslationScale, float InStartTimeSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_PlayMontageAndWait", "CreatePlayMontageAndWaitProxy");

	Params::UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.MontageToPlay = InMontageToPlay;
	Parms.Rate = InRate;
	Parms.StartSection = InStartSection;
	Parms.bStopWhenAbilityEnds = InbStopWhenAbilityEnds;
	Parms.AnimRootMotionTranslationScale = InAnimRootMotionTranslationScale;
	Parms.StartTimeSeconds = InStartTimeSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeBetweenActions                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalActionCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_Repeat*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_Repeat* UAbilityTask_Repeat::RepeatAction(class UGameplayAbility* InOwningAbility, float InTimeBetweenActions, int32 InTotalActionCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_Repeat", "RepeatAction");

	Params::UAbilityTask_Repeat_RepeatAction_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TimeBetweenActions = InTimeBetweenActions;
	Parms.TotalActionCount = InTotalActionCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_SpawnActor*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::SpawnActor(class UGameplayAbility* InOwningAbility, const struct FGameplayAbilityTargetDataHandle& InTargetData, TSubclassOf<class AActor> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_SpawnActor", "SpawnActor");

	Params::UAbilityTask_SpawnActor_SpawnActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TargetData = InTargetData;
	Parms.Class = InClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// class AActor*                      SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_SpawnActor::FinishSpawningActor(class UGameplayAbility* InOwningAbility, const struct FGameplayAbilityTargetDataHandle& InTargetData, class AActor* InSpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_SpawnActor", "FinishSpawningActor");

	Params::UAbilityTask_SpawnActor_FinishSpawningActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TargetData = InTargetData;
	Parms.SpawnedActor = InSpawnedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class AActor>          Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UGameplayAbility* InOwningAbility, const struct FGameplayAbilityTargetDataHandle& InTargetData, TSubclassOf<class AActor> InClass, class AActor** InSpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_SpawnActor", "BeginSpawningActor");

	Params::UAbilityTask_SpawnActor_BeginSpawningActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TargetData = InTargetData;
	Parms.Class = InClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InSpawnedActor != nullptr)
		*InSpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StateName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEndCurrentState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_StartAbilityState*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::StartAbilityState(class UGameplayAbility* InOwningAbility, class FName InStateName, bool InbEndCurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_StartAbilityState", "StartAbilityState");

	Params::UAbilityTask_StartAbilityState_StartAbilityState_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.StateName = InStateName;
	Parms.bEndCurrentState = InbEndCurrentState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_VisualizeTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargetingUsingActor(class UGameplayAbility* InOwningAbility, class AGameplayAbilityTargetActor* InTargetActor, class FName InTaskInstanceName, float InDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargetingUsingActor");

	Params::UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TargetActor = InTargetActor;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.Duration = InDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_VisualizeTargeting*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::VisualizeTargeting(class UGameplayAbility* InOwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> InClass, class FName InTaskInstanceName, float InDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "VisualizeTargeting");

	Params::UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Class = InClass;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.Duration = InDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UGameplayAbility* InOwningAbility, class AGameplayAbilityTargetActor* InSpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "FinishSpawningActor");

	Params::UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.SpawnedActor = InSpawnedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UGameplayAbility* InOwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> InClass, class AGameplayAbilityTargetActor** InSpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_VisualizeTargeting", "BeginSpawningActor");

	Params::UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Class = InClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InSpawnedActor != nullptr)
		*InSpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TagRequirements                                                  (Parm, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* InOwningAbility, const struct FGameplayTagRequirements& InTagRequirements, bool InIncludeTriggeredAbilities, bool InTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivateWithTagRequirements");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TagRequirements = InTagRequirements;
	Parms.IncludeTriggeredAbilities = InIncludeTriggeredAbilities;
	Parms.TriggerOnce = InTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           Query                                                            (Parm, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate_Query(class UGameplayAbility* InOwningAbility, const struct FGameplayTagQuery& InQuery, bool InIncludeTriggeredAbilities, bool InTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate_Query");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Query = InQuery;
	Parms.IncludeTriggeredAbilities = InIncludeTriggeredAbilities;
	Parms.TriggerOnce = InTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IncludeTriggeredAbilities                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityActivate*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::WaitForAbilityActivate(class UGameplayAbility* InOwningAbility, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, bool InIncludeTriggeredAbilities, bool InTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "WaitForAbilityActivate");

	Params::UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.WithTag = InWithTag;
	Parms.WithoutTag = InWithoutTag;
	Parms.IncludeTriggeredAbilities = InIncludeTriggeredAbilities;
	Parms.TriggerOnce = InTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* InActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityActivate", "OnAbilityActivate");

	Params::UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params Parms{};

	Parms.ActivatedAbility = InActivatedAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           Query                                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityCommit*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit_Query(class UGameplayAbility* InOwningAbility, const struct FGameplayTagQuery& InQuery, bool InTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit_Query");

	Params::UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Query = InQuery;
	Parms.TriggerOnce = InTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutTage                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAbilityCommit*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::WaitForAbilityCommit(class UGameplayAbility* InOwningAbility, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTage, bool InTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "WaitForAbilityCommit");

	Params::UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.WithTag = InWithTag;
	Parms.WithoutTage = InWithoutTage;
	Parms.TriggerOnce = InTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            ActivatedAbility                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* InActivatedAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAbilityCommit", "OnAbilityCommit");

	Params::UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params Parms{};

	Parms.ActivatedAbility = InActivatedAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          InAttribute                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InWithTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                InWithoutTag                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonInComparisonType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InComparisonValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChangeWithComparison(class UGameplayAbility* InOwningAbility, const struct FGameplayAttribute& InInAttribute, const struct FGameplayTag& InInWithTag, const struct FGameplayTag& InInWithoutTag, enum class EWaitAttributeChangeComparison InInComparisonType, float InInComparisonValue, bool InTriggerOnce, class AActor* InOptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChangeWithComparison");

	Params::UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.InAttribute = InInAttribute;
	Parms.InWithTag = InInWithTag;
	Parms.InWithoutTag = InInWithoutTag;
	Parms.InComparisonType = InInComparisonType;
	Parms.InComparisonValue = InInComparisonValue;
	Parms.TriggerOnce = InTriggerOnce;
	Parms.OptionalExternalOwner = InOptionalExternalOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithSrcTag                                                       (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                WithoutSrcTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::WaitForAttributeChange(class UGameplayAbility* InOwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithSrcTag, const struct FGameplayTag& InWithoutSrcTag, bool InTriggerOnce, class AActor* InOptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAttributeChange", "WaitForAttributeChange");

	Params::UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Attribute = InAttribute;
	Parms.WithSrcTag = InWithSrcTag;
	Parms.WithoutSrcTag = InWithoutSrcTag;
	Parms.TriggerOnce = InTriggerOnce;
	Parms.OptionalExternalOwner = InOptionalExternalOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeNumerator                                               (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeDenominator                                             (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonComparisonType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ComparisonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriggerOnce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChangeRatioThreshold*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::WaitForAttributeChangeRatioThreshold(class UGameplayAbility* InOwningAbility, const struct FGameplayAttribute& InAttributeNumerator, const struct FGameplayAttribute& InAttributeDenominator, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool InbTriggerOnce, class AActor* InOptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAttributeChangeRatioThreshold", "WaitForAttributeChangeRatioThreshold");

	Params::UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.AttributeNumerator = InAttributeNumerator;
	Parms.AttributeDenominator = InAttributeDenominator;
	Parms.ComparisonType = InComparisonType;
	Parms.ComparisonValue = InComparisonValue;
	Parms.bTriggerOnce = InbTriggerOnce;
	Parms.OptionalExternalOwner = InOptionalExternalOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitAttributeChangeComparisonComparisonType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ComparisonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTriggerOnce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitAttributeChangeThreshold*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::WaitForAttributeChangeThreshold(class UGameplayAbility* InOwningAbility, const struct FGameplayAttribute& InAttribute, enum class EWaitAttributeChangeComparison InComparisonType, float InComparisonValue, bool InbTriggerOnce, class AActor* InOptionalExternalOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitAttributeChangeThreshold", "WaitForAttributeChangeThreshold");

	Params::UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Attribute = InAttribute;
	Parms.ComparisonType = InComparisonType;
	Parms.ComparisonValue = InComparisonValue;
	Parms.bTriggerOnce = InbTriggerOnce;
	Parms.OptionalExternalOwner = InOptionalExternalOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitCancel*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::WaitCancel(class UGameplayAbility* InOwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitCancel", "WaitCancel");

	Params::UAbilityTask_WaitCancel_WaitCancel_Params Parms{};

	Parms.OwningAbility = InOwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitCancel", "OnLocalCancelCallback");

	Params::UAbilityTask_WaitCancel_OnLocalCancelCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitCancel", "OnCancelCallback");

	Params::UAbilityTask_WaitCancel_OnCancelCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitConfirm*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::WaitConfirm(class UGameplayAbility* InOwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirm", "WaitConfirm");

	Params::UAbilityTask_WaitConfirm_WaitConfirm_Params Parms{};

	Parms.OwningAbility = InOwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*            InAbility                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* InInAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirm", "OnConfirmCallback");

	Params::UAbilityTask_WaitConfirm_OnConfirmCallback_Params Parms{};

	Parms.InAbility = InInAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitConfirmCancel*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::WaitConfirmCancel(class UGameplayAbility* InOwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "WaitConfirmCancel");

	Params::UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params Parms{};

	Parms.OwningAbility = InOwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalConfirmCallback");

	Params::UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnLocalCancelCallback");

	Params::UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnConfirmCallback");

	Params::UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitConfirmCancel", "OnCancelCallback");

	Params::UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitDelay*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::WaitDelay(class UGameplayAbility* InOwningAbility, float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitDelay", "WaitDelay");

	Params::UAbilityTask_WaitDelay_WaitDelay_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Time = InTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec         SpecApplied                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* InTarget, struct FGameplayEffectSpec& InSpecApplied, const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied", "OnApplyGameplayEffectCallback");

	Params::UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params Parms{};

	Parms.Target = InTarget;
	Parms.SpecApplied = InSpecApplied;
	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           SourceTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TargetTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Self*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* InOwningAbility, const struct FGameplayTargetDataFilterHandle& InSourceFilter, const struct FGameplayTagQuery& InSourceTagQuery, const struct FGameplayTagQuery& InTargetTagQuery, bool InTriggerOnce, class AActor* InOptionalExternalOwner, bool InListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf_Query");

	Params::UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.SourceFilter = InSourceFilter;
	Parms.SourceTagQuery = InSourceTagQuery;
	Parms.TargetTagQuery = InTargetTagQuery;
	Parms.TriggerOnce = InTriggerOnce;
	Parms.OptionalExternalOwner = InOptionalExternalOwner;
	Parms.ListenForPeriodicEffect = InListenForPeriodicEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Self*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(class UGameplayAbility* InOwningAbility, const struct FGameplayTargetDataFilterHandle& InSourceFilter, const struct FGameplayTagRequirements& InSourceTagRequirements, const struct FGameplayTagRequirements& InTargetTagRequirements, bool InTriggerOnce, class AActor* InOptionalExternalOwner, bool InListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Self", "WaitGameplayEffectAppliedToSelf");

	Params::UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.SourceFilter = InSourceFilter;
	Parms.SourceTagRequirements = InSourceTagRequirements;
	Parms.TargetTagRequirements = InTargetTagRequirements;
	Parms.TriggerOnce = InTriggerOnce;
	Parms.OptionalExternalOwner = InOptionalExternalOwner;
	Parms.ListenForPeriodicEffect = InListenForPeriodicEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleSourceFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           SourceTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TargetTagQuery                                                   (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffect                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Target*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* InOwningAbility, const struct FGameplayTargetDataFilterHandle& InSourceFilter, const struct FGameplayTagQuery& InSourceTagQuery, const struct FGameplayTagQuery& InTargetTagQuery, bool InTriggerOnce, class AActor* InOptionalExternalOwner, bool InListenForPeriodicEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget_Query");

	Params::UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.SourceFilter = InSourceFilter;
	Parms.SourceTagQuery = InSourceTagQuery;
	Parms.TargetTagQuery = InTargetTagQuery;
	Parms.TriggerOnce = InTriggerOnce;
	Parms.OptionalExternalOwner = InOptionalExternalOwner;
	Parms.ListenForPeriodicEffect = InListenForPeriodicEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleTargetFilter                                                     (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// bool                               TriggerOnce                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalOwner                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ListenForPeriodicEffects                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectApplied_Target*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(class UGameplayAbility* InOwningAbility, const struct FGameplayTargetDataFilterHandle& InTargetFilter, const struct FGameplayTagRequirements& InSourceTagRequirements, const struct FGameplayTagRequirements& InTargetTagRequirements, bool InTriggerOnce, class AActor* InOptionalExternalOwner, bool InListenForPeriodicEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectApplied_Target", "WaitGameplayEffectAppliedToTarget");

	Params::UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TargetFilter = InTargetFilter;
	Parms.SourceTagRequirements = InSourceTagRequirements;
	Parms.TargetTagRequirements = InTargetTagRequirements;
	Parms.TriggerOnce = InTriggerOnce;
	Parms.OptionalExternalOwner = InOptionalExternalOwner;
	Parms.ListenForPeriodicEffects = InListenForPeriodicEffects;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagRequirements                                            (Parm, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalTarget                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectBlockedImmunity*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* InOwningAbility, const struct FGameplayTagRequirements& InSourceTagRequirements, const struct FGameplayTagRequirements& InTargetTagRequirements, class AActor* InOptionalExternalTarget, bool InOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectBlockedImmunity", "WaitGameplayEffectBlockedByImmunity");

	Params::UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.SourceTagRequirements = InSourceTagRequirements;
	Parms.TargetTagRequirements = InTargetTagRequirements;
	Parms.OptionalExternalTarget = InOptionalExternalTarget;
	Parms.OnlyTriggerOnce = InOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectRemoved*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(class UGameplayAbility* InOwningAbility, const struct FActiveGameplayEffectHandle& InHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "WaitForGameplayEffectRemoved");

	Params::UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Handle = InHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayEffectRemovalInfo  InGameplayEffectRemovalInfo                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(struct FGameplayEffectRemovalInfo& InInGameplayEffectRemovalInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectRemoved", "OnGameplayEffectRemoved");

	Params::UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params Parms{};

	Parms.InGameplayEffectRemovalInfo = InInGameplayEffectRemovalInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEffectStackChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(class UGameplayAbility* InOwningAbility, const struct FActiveGameplayEffectHandle& InHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "WaitForGameplayEffectStackChange");

	Params::UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Handle = InHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
// (Final, Native, Public)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OldCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& InHandle, int32 InNewCount, int32 InOldCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEffectStackChange", "OnGameplayEffectStackChange");

	Params::UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params Parms{};

	Parms.Handle = InHandle;
	Parms.NewCount = InNewCount;
	Parms.OldCount = InOldCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OptionalExternalTarget                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyMatchExact                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayEvent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(class UGameplayAbility* InOwningAbility, const struct FGameplayTag& InEventTag, class AActor* InOptionalExternalTarget, bool InOnlyTriggerOnce, bool InOnlyMatchExact)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayEvent", "WaitGameplayEvent");

	Params::UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.EventTag = InEventTag;
	Parms.OptionalExternalTarget = InOptionalExternalTarget;
	Parms.OnlyTriggerOnce = InOnlyTriggerOnce;
	Parms.OnlyMatchExact = InOnlyMatchExact;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (Native, Public)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& InTag, int32 InNewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTag", "GameplayTagCallback");

	Params::UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params Parms{};

	Parms.Tag = InTag;
	Parms.NewCount = InNewCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InOptionalExternalTarget                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagAdded*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::WaitGameplayTagAdd(class UGameplayAbility* InOwningAbility, const struct FGameplayTag& InTag, class AActor* InInOptionalExternalTarget, bool InOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTagAdded", "WaitGameplayTagAdd");

	Params::UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Tag = InTag;
	Parms.InOptionalExternalTarget = InInOptionalExternalTarget;
	Parms.OnlyTriggerOnce = InOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InOptionalExternalTarget                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               OnlyTriggerOnce                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagRemoved*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::WaitGameplayTagRemove(class UGameplayAbility* InOwningAbility, const struct FGameplayTag& InTag, class AActor* InInOptionalExternalTarget, bool InOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTagRemoved", "WaitGameplayTagRemove");

	Params::UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Tag = InTag;
	Parms.InOptionalExternalTarget = InInOptionalExternalTarget;
	Parms.OnlyTriggerOnce = InOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Parm, NativeAccessSpecifierPublic)
// class AActor*                      InOptionalExternalTarget                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWaitGameplayTagQueryTriggerConditionTriggerCondition                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyTriggerOnce                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitGameplayTagQuery*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitGameplayTagQuery* UAbilityTask_WaitGameplayTagQuery::WaitGameplayTagQuery(class UGameplayAbility* InOwningAbility, const struct FGameplayTagQuery& InTagQuery, class AActor* InInOptionalExternalTarget, enum class EWaitGameplayTagQueryTriggerCondition InTriggerCondition, bool InbOnlyTriggerOnce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTagQuery", "WaitGameplayTagQuery");

	Params::UAbilityTask_WaitGameplayTagQuery_WaitGameplayTagQuery_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TagQuery = InTagQuery;
	Parms.InOptionalExternalTarget = InInOptionalExternalTarget;
	Parms.TriggerCondition = InTriggerCondition;
	Parms.bOnlyTriggerOnce = InbOnlyTriggerOnce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitGameplayTagQuery::UpdateTargetTags(const struct FGameplayTag& InTag, int32 InNewCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitGameplayTagQuery", "UpdateTargetTags");

	Params::UAbilityTask_WaitGameplayTagQuery_UpdateTargetTags_Params Parms{};

	Parms.Tag = InTag;
	Parms.NewCount = InNewCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTestAlreadyPressed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitInputPress* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::WaitInputPress(class UGameplayAbility* InOwningAbility, bool InbTestAlreadyPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitInputPress", "WaitInputPress");

	Params::UAbilityTask_WaitInputPress_WaitInputPress_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.bTestAlreadyPressed = InbTestAlreadyPressed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitInputPress", "OnPressCallback");

	Params::UAbilityTask_WaitInputPress_OnPressCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTestAlreadyReleased                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitInputRelease*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::WaitInputRelease(class UGameplayAbility* InOwningAbility, bool InbTestAlreadyReleased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitInputRelease", "WaitInputRelease");

	Params::UAbilityTask_WaitInputRelease_WaitInputRelease_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.bTestAlreadyReleased = InbTestAlreadyReleased;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitInputRelease", "OnReleaseCallback");

	Params::UAbilityTask_WaitInputRelease_OnReleaseCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (Final, Native, Public)
// Parameters:
// class ACharacter*                  Character                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* InCharacter, enum class EMovementMode InPrevMovementMode, uint8 InPreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitMovementModeChange", "OnMovementModeChange");

	Params::UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params Parms{};

	Parms.Character = InCharacter;
	Parms.PrevMovementMode = InPrevMovementMode;
	Parms.PreviousCustomMode = InPreviousCustomMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           NewMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitMovementModeChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::CreateWaitMovementModeChange(class UGameplayAbility* InOwningAbility, enum class EMovementMode InNewMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitMovementModeChange", "CreateWaitMovementModeChange");

	Params::UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.NewMode = InNewMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitOverlap*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::WaitForOverlap(class UGameplayAbility* InOwningAbility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitOverlap", "WaitForOverlap");

	Params::UAbilityTask_WaitOverlap_WaitForOverlap_Params Parms{};

	Parms.OwningAbility = InOwningAbility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UPrimitiveComponent*         HitComp                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilityTask_WaitOverlap::OnHitCallback(class UPrimitiveComponent* InHitComp, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, const struct FVector& InNormalImpulse, struct FHitResult& InHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitOverlap", "OnHitCallback");

	Params::UAbilityTask_WaitOverlap_OnHitCallback_Params Parms{};

	Parms.HitComp = InHitComp;
	Parms.OtherActor = InOtherActor;
	Parms.OtherComp = InOtherComp;
	Parms.NormalImpulse = InNormalImpulse;
	Parms.Hit = InHit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayTargetingConfirmationConfirmationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitTargetData* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetDataUsingActor(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, enum class EGameplayTargetingConfirmation InConfirmationType, class AGameplayAbilityTargetActor* InTargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "WaitTargetDataUsingActor");

	Params::UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.ConfirmationType = InConfirmationType;
	Parms.TargetActor = InTargetActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TaskInstanceName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayTargetingConfirmationConfirmationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitTargetData* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::WaitTargetData(class UGameplayAbility* InOwningAbility, class FName InTaskInstanceName, enum class EGameplayTargetingConfirmation InConfirmationType, TSubclassOf<class AGameplayAbilityTargetActor> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "WaitTargetData");

	Params::UAbilityTask_WaitTargetData_WaitTargetData_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.TaskInstanceName = InTaskInstanceName;
	Parms.ConfirmationType = InConfirmationType;
	Parms.Class = InClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (Final, Native, Public)
// Parameters:

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCancelledCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ActivationTag                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(struct FGameplayAbilityTargetDataHandle& InData, const struct FGameplayTag& InActivationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReplicatedCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params Parms{};

	Parms.Data = InData;
	Parms.ActivationTag = InActivationTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(struct FGameplayAbilityTargetDataHandle& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataReadyCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params Parms{};

	Parms.Data = InData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGameplayAbilityTargetDataHandleData                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(struct FGameplayAbilityTargetDataHandle& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "OnTargetDataCancelledCallback");

	Params::UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params Parms{};

	Parms.Data = InData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UGameplayAbility* InOwningAbility, class AGameplayAbilityTargetActor* InSpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "FinishSpawningActor");

	Params::UAbilityTask_WaitTargetData_FinishSpawningActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.SpawnedActor = InSpawnedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class AGameplayAbilityTargetActor>Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AGameplayAbilityTargetActor* SpawnedActor                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UGameplayAbility* InOwningAbility, TSubclassOf<class AGameplayAbilityTargetActor> InClass, class AGameplayAbilityTargetActor** InSpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitTargetData", "BeginSpawningActor");

	Params::UAbilityTask_WaitTargetData_BeginSpawningActor_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Class = InClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InSpawnedActor != nullptr)
		*InSpawnedActor = Parms.SpawnedActor;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*            OwningAbility                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumMagnitude                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilityTask_WaitVelocityChange*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(class UGameplayAbility* InOwningAbility, const struct FVector& InDirection, float InMinimumMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityTask_WaitVelocityChange", "CreateWaitVelocityChange");

	Params::UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params Parms{};

	Parms.OwningAbility = InOwningAbility;
	Parms.Direction = InDirection;
	Parms.MinimumMagnitude = InMinimumMagnitude;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasOrigin(struct FGameplayAbilityTargetDataHandle& InTargetData, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasOrigin");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleHitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasHitResult(struct FGameplayAbilityTargetDataHandle& InHitResult, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasHitResult");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params Parms{};

	Parms.HitResult = InHitResult;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasEndPoint(struct FGameplayAbilityTargetDataHandle& InTargetData, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasEndPoint");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::TargetDataHasActor(struct FGameplayAbilityTargetDataHandle& InTargetData, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "TargetDataHasActor");

	Params::UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCountToMax(const struct FGameplayEffectSpecHandle& InSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCountToMax");

	Params::UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params Parms{};

	Parms.SpecHandle = InSpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// int32                              StackCount                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetStackCount(const struct FGameplayEffectSpecHandle& InSpecHandle, int32 InStackCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetStackCount");

	Params::UAbilitySystemBlueprintLibrary_SetStackCount_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.StackCount = InStackCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::SetDuration(const struct FGameplayEffectSpecHandle& InSpecHandle, float InDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SetDuration");

	Params::UAbilitySystemBlueprintLibrary_SetDuration_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.Duration = InDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                EventTag                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          Payload                                                          (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(class AActor* InActor, const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "SendGameplayEventToActor");

	Params::UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params Parms{};

	Parms.Actor = InActor;
	Parms.EventTag = InEventTag;
	Parms.Payload = InPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.RemoveLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bShouldReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::RemoveLooseGameplayTags(class AActor* InActor, struct FGameplayTagContainer& InGameplayTags, bool InbShouldReplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "RemoveLooseGameplayTags");

	Params::UAbilitySystemBlueprintLibrary_RemoveLooseGameplayTags_Params Parms{};

	Parms.Actor = InActor;
	Parms.GameplayTags = InGameplayTags;
	Parms.bShouldReplicate = InbShouldReplicate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          AttributeA                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeB                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& InAttributeA, const struct FGameplayAttribute& InAttributeB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_GameplayAttributeGameplayAttribute");

	Params::UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params Parms{};

	Parms.AttributeA = InAttributeA;
	Parms.AttributeB = InAttributeB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAbilitySpecHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle  A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::NotEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& InA, struct FGameplayAbilitySpecHandle& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_GameplayAbilitySpecHandle");

	Params::UAbilitySystemBlueprintLibrary_NotEqual_GameplayAbilitySpecHandle_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_ActiveGameplayEffectHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::NotEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& InA, struct FActiveGameplayEffectHandle& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "NotEqual_ActiveGameplayEffectHandle");

	Params::UAbilitySystemBlueprintLibrary_NotEqual_ActiveGameplayEffectHandle_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayEffect*             InGameplayEffect                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InEffectCauser                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InLevel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::MakeSpecHandle(class UGameplayEffect* InInGameplayEffect, class AActor* InInInstigator, class AActor* InInEffectCauser, float InInLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeSpecHandle");

	Params::UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params Parms{};

	Parms.InGameplayEffect = InInGameplayEffect;
	Parms.InInstigator = InInInstigator;
	Parms.InEffectCauser = InInEffectCauser;
	Parms.InLevel = InInLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeGameplayCueParameters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              NormalizedMagnitude                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawMagnitude                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                MatchedTagName                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OriginalTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedSourceTags                                             (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedTargetTags                                             (Parm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      EffectCauser                                                     (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SourceObject                                                     (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysicalMaterial                                                 (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AbilityLevel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetAttachComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplicateLocationWhenUsingMinimalRepProxy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayCueParameters UAbilitySystemBlueprintLibrary::MakeGameplayCueParameters(float InNormalizedMagnitude, float InRawMagnitude, const struct FGameplayEffectContextHandle& InEffectContext, const struct FGameplayTag& InMatchedTagName, const struct FGameplayTag& InOriginalTag, const struct FGameplayTagContainer& InAggregatedSourceTags, const struct FGameplayTagContainer& InAggregatedTargetTags, const struct FVector& InLocation, const struct FVector& InNormal, class AActor* InInstigator, class AActor* InEffectCauser, class UObject* InSourceObject, class UPhysicalMaterial* InPhysicalMaterial, int32 InGameplayEffectLevel, int32 InAbilityLevel, class USceneComponent* InTargetAttachComponent, bool InbReplicateLocationWhenUsingMinimalRepProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeGameplayCueParameters");

	Params::UAbilitySystemBlueprintLibrary_MakeGameplayCueParameters_Params Parms{};

	Parms.NormalizedMagnitude = InNormalizedMagnitude;
	Parms.RawMagnitude = InRawMagnitude;
	Parms.EffectContext = InEffectContext;
	Parms.MatchedTagName = InMatchedTagName;
	Parms.OriginalTag = InOriginalTag;
	Parms.AggregatedSourceTags = InAggregatedSourceTags;
	Parms.AggregatedTargetTags = InAggregatedTargetTags;
	Parms.Location = InLocation;
	Parms.Normal = InNormal;
	Parms.Instigator = InInstigator;
	Parms.EffectCauser = InEffectCauser;
	Parms.SourceObject = InSourceObject;
	Parms.PhysicalMaterial = InPhysicalMaterial;
	Parms.GameplayEffectLevel = InGameplayEffectLevel;
	Parms.AbilityLevel = InAbilityLevel;
	Parms.TargetAttachComponent = InTargetAttachComponent;
	Parms.bReplicateLocationWhenUsingMinimalRepProxy = InbReplicateLocationWhenUsingMinimalRepProxy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTargetDataFilter   Filter                                                           (Parm, NativeAccessSpecifierPublic)
// class AActor*                      FilterActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::MakeFilterHandle(const struct FGameplayTargetDataFilter& InFilter, class AActor* InFilterActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "MakeFilterHandle");

	Params::UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params Parms{};

	Parms.Filter = InFilter;
	Parms.FilterActor = InFilterActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsValid(const struct FGameplayAttribute& InAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsValid");

	Params::UAbilitySystemBlueprintLibrary_IsValid_Params Parms{};

	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlledPlayer");

	Params::UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::IsInstigatorLocallyControlled(const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "IsInstigatorLocallyControlled");

	Params::UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::HasHitResult(const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "HasHitResult");

	Params::UAbilitySystemBlueprintLibrary_HasHitResult_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataOrigin(struct FGameplayAbilityTargetDataHandle& InTargetData, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataOrigin");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetTargetDataEndPointTransform(struct FGameplayAbilityTargetDataHandle& InTargetData, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPointTransform");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::GetTargetDataEndPoint(struct FGameplayAbilityTargetDataHandle& InTargetData, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetTargetDataEndPoint");

	Params::UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::GetOrigin(const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetOrigin");

	Params::UAbilitySystemBlueprintLibrary_GetOrigin_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& InSpecHandle, const struct FGameplayAttribute& InAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetModifiedAttributeMagnitude");

	Params::UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UAbilitySystemBlueprintLibrary::GetInstigatorTransform(const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorTransform");

	Params::UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::GetInstigatorActor(const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleHitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResultFromTargetData(struct FGameplayAbilityTargetDataHandle& InHitResult, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResultFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params Parms{};

	Parms.HitResult = InHitResult;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::GetHitResult(const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetHitResult");

	Params::UAbilitySystemBlueprintLibrary_GetHitResult_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectUIData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> EffectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayEffectUIData>DataType                                                         (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayEffectUIData*       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayEffectUIData* UAbilitySystemBlueprintLibrary::GetGameplayEffectUIData(TSubclassOf<class UGameplayEffect> InEffectClass, TSubclassOf<class UGameplayEffectUIData> InDataType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayEffectUIData");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayEffectUIData_Params Parms{};

	Parms.EffectClass = InEffectClass;
	Parms.DataType = InDataType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayEffectFromActiveEffectHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayEffect*             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayEffect* UAbilitySystemBlueprintLibrary::GetGameplayEffectFromActiveEffectHandle(struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayEffectFromActiveEffectHandle");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayEffectFromActiveEffectHandle_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueEndLocationAndNormal(class AActor* InTargetActor, const struct FGameplayCueParameters& InParameters, struct FVector* InLocation, struct FVector* InNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueEndLocationAndNormal");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params Parms{};

	Parms.TargetActor = InTargetActor;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InLocation != nullptr)
		*InLocation = Parms.Location;

	if (InNormal != nullptr)
		*InNormal = Parms.Normal;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVector                     Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::GetGameplayCueDirection(class AActor* InTargetActor, const struct FGameplayCueParameters& InParameters, struct FVector* InDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayCueDirection");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params Parms{};

	Parms.TargetActor = InTargetActor;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InDirection != nullptr)
		*InDirection = Parms.Direction;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayAbilityFromSpecHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilitySpecHandle                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsInstance                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGameplayAbility*            ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameplayAbility* UAbilitySystemBlueprintLibrary::GetGameplayAbilityFromSpecHandle(class UAbilitySystemComponent* InAbilitySystem, struct FGameplayAbilitySpecHandle& InAbilitySpecHandle, bool* InbIsInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetGameplayAbilityFromSpecHandle");

	Params::UAbilitySystemBlueprintLibrary_GetGameplayAbilityFromSpecHandle_Params Parms{};

	Parms.AbilitySystem = InAbilitySystem;
	Parms.AbilitySpecHandle = InAbilitySpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbIsInstance != nullptr)
		*InbIsInstance = Parms.bIsInstance;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* InAbilitySystem, const struct FGameplayAttribute& InAttribute, bool* InbSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeFromAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params Parms{};

	Parms.AbilitySystem = InAbilitySystem;
	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbSuccessfullyFoundAttribute != nullptr)
		*InbSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystemComponent                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* InAbilitySystemComponent, const struct FGameplayAttribute& InAttribute, bool* InbSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBaseFromAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params Parms{};

	Parms.AbilitySystemComponent = InAbilitySystemComponent;
	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbSuccessfullyFoundAttribute != nullptr)
		*InbSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttributeBase(class AActor* InActor, const struct FGameplayAttribute& InAttribute, bool* InbSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttributeBase");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params Parms{};

	Parms.Actor = InActor;
	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbSuccessfullyFoundAttribute != nullptr)
		*InbSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccessfullyFoundAttribute                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetFloatAttribute(class AActor* InActor, const struct FGameplayAttribute& InAttribute, bool* InbSuccessfullyFoundAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetFloatAttribute");

	Params::UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params Parms{};

	Parms.Actor = InActor;
	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbSuccessfullyFoundAttribute != nullptr)
		*InbSuccessfullyFoundAttribute = Parms.bSuccessfullyFoundAttribute;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::GetEffectContext(const struct FGameplayEffectSpecHandle& InSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetEffectContext");

	Params::UAbilitySystemBlueprintLibrary_GetEffectContext_Params Parms{};

	Parms.SpecHandle = InSpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDebugStringFromGameplayAttribute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAbilitySystemBlueprintLibrary::GetDebugStringFromGameplayAttribute(struct FGameplayAttribute& InAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetDebugStringFromGameplayAttribute");

	Params::UAbilitySystemBlueprintLibrary_GetDebugStringFromGameplayAttribute_Params Parms{};

	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetDataCountFromTargetData(struct FGameplayAbilityTargetDataHandle& InTargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetDataCountFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params Parms{};

	Parms.TargetData = InTargetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// TArray<struct FGameplayEffectSpecHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& InSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAllLinkedGameplayEffectSpecHandles");

	Params::UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params Parms{};

	Parms.SpecHandle = InSpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllActorsFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetAllActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& InTargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAllActorsFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetAllActorsFromTargetData_Params Parms{};

	Parms.TargetData = InTargetData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::GetActorsFromTargetData(struct FGameplayAbilityTargetDataHandle& InTargetData, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorsFromTargetData");

	Params::UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActorCount(const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorCount");

	Params::UAbilitySystemBlueprintLibrary_GetActorCount_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::GetActorByIndex(const struct FGameplayCueParameters& InParameters, int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActorByIndex");

	Params::UAbilitySystemBlueprintLibrary_GetActorByIndex_Params Parms{};

	Parms.Parameters = InParameters;
	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectTotalDuration");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStartTime");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackLimitCount");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectStackCount");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(class UObject* InWorldContextObject, const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectRemainingDuration");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectExpectedEndTime");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAbilitySystemBlueprintLibrary::GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& InActiveHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetActiveGameplayEffectDebugString");

	Params::UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "GetAbilitySystemComponent");

	Params::UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params Parms{};

	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGameplayCueInterface>TargetCueInterface                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::ForwardGameplayCueToTarget(TScriptInterface<class IGameplayCueInterface> InTargetCueInterface, enum class EGameplayCueEvent InEventType, const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "ForwardGameplayCueToTarget");

	Params::UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params Parms{};

	Parms.TargetCueInterface = InTargetCueInterface;
	Parms.EventType = InEventType;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetDataHandle                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTargetDataFilterHandleActorFilterClass                                                 (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::FilterTargetData(struct FGameplayAbilityTargetDataHandle& InTargetDataHandle, const struct FGameplayTargetDataFilterHandle& InActorFilterClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "FilterTargetData");

	Params::UAbilitySystemBlueprintLibrary_FilterTargetData_Params Parms{};

	Parms.TargetDataHandle = InTargetDataHandle;
	Parms.ActorFilterClass = InActorFilterClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TargetTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              BaseValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* InAbilitySystem, const struct FGameplayAttribute& InAttribute, struct FGameplayTagContainer& InSourceTags, struct FGameplayTagContainer& InTargetTags, float InBaseValue, bool* InbSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTagsAndBase");

	Params::UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params Parms{};

	Parms.AbilitySystem = InAbilitySystem;
	Parms.Attribute = InAttribute;
	Parms.SourceTags = InSourceTags;
	Parms.TargetTags = InTargetTags;
	Parms.BaseValue = InBaseValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbSuccess != nullptr)
		*InbSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TargetTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemBlueprintLibrary::EvaluateAttributeValueWithTags(class UAbilitySystemComponent* InAbilitySystem, const struct FGameplayAttribute& InAttribute, struct FGameplayTagContainer& InSourceTags, struct FGameplayTagContainer& InTargetTags, bool* InbSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EvaluateAttributeValueWithTags");

	Params::UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params Parms{};

	Parms.AbilitySystem = InAbilitySystem;
	Parms.Attribute = InAttribute;
	Parms.SourceTags = InSourceTags;
	Parms.TargetTags = InTargetTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbSuccess != nullptr)
		*InbSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute          AttributeA                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          AttributeB                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& InAttributeA, const struct FGameplayAttribute& InAttributeB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_GameplayAttributeGameplayAttribute");

	Params::UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params Parms{};

	Parms.AttributeA = InAttributeA;
	Parms.AttributeB = InAttributeB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAbilitySpecHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilitySpecHandle  A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EqualEqual_GameplayAbilitySpecHandle(struct FGameplayAbilitySpecHandle& InA, struct FGameplayAbilitySpecHandle& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_GameplayAbilitySpecHandle");

	Params::UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAbilitySpecHandle_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_ActiveGameplayEffectHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EqualEqual_ActiveGameplayEffectHandle(struct FActiveGameplayEffectHandle& InA, struct FActiveGameplayEffectHandle& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EqualEqual_ActiveGameplayEffectHandle");

	Params::UAbilitySystemBlueprintLibrary_EqualEqual_ActiveGameplayEffectHandle_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FVector                     Origin                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::EffectContextSetOrigin(const struct FGameplayEffectContextHandle& InEffectContext, const struct FVector& InOrigin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextSetOrigin");

	Params::UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params Parms{};

	Parms.EffectContext = InEffectContext;
	Parms.Origin = InOrigin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextIsValid(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsValid");

	Params::UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextIsInstigatorLocallyControlled");

	Params::UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::EffectContextHasHitResult(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextHasHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAbilitySystemBlueprintLibrary::EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetSourceObject");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOriginalInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAbilitySystemBlueprintLibrary::EffectContextGetOrigin(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetOrigin");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetInstigatorActor");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FHitResult                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UAbilitySystemBlueprintLibrary::EffectContextGetHitResult(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UAbilitySystemBlueprintLibrary::EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextGetEffectCauser");

	Params::UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params Parms{};

	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FHitResult                  HitResult                                                        (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bReset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::EffectContextAddHitResult(const struct FGameplayEffectContextHandle& InEffectContext, const struct FHitResult& InHitResult, bool InbReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "EffectContextAddHitResult");

	Params::UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params Parms{};

	Parms.EffectContext = InEffectContext;
	Parms.HitResult = InHitResult;
	Parms.bReset = InbReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::DoesTargetDataContainActor(struct FGameplayAbilityTargetDataHandle& InTargetData, int32 InIndex, class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "DoesTargetDataContainActor");

	Params::UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params Parms{};

	Parms.TargetData = InTargetData;
	Parms.Index = InIndex;
	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    SourceTagReqs                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagRequirements    TargetTagReqs                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& InParameters, struct FGameplayTagRequirements& InSourceTagReqs, struct FGameplayTagRequirements& InTargetTagReqs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "DoesGameplayCueMeetTagRequirements");

	Params::UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params Parms{};

	Parms.Parameters = InParameters;
	Parms.SourceTagReqs = InSourceTagReqs;
	Parms.TargetTagReqs = InTargetTagReqs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InNewInstigator                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      InEffectCauser                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   GameplayEffectSpecHandle_Clone                                   (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::CloneSpecHandle(class AActor* InInNewInstigator, class AActor* InInEffectCauser, const struct FGameplayEffectSpecHandle& InGameplayEffectSpecHandle_Clone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "CloneSpecHandle");

	Params::UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params Parms{};

	Parms.InNewInstigator = InInNewInstigator;
	Parms.InEffectCauser = InInEffectCauser;
	Parms.GameplayEffectSpecHandle_Clone = InGameplayEffectSpecHandle_Clone;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.BreakGameplayCueParameters
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// float                              NormalizedMagnitude                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RawMagnitude                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                MatchedTagName                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                OriginalTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedSourceTags                                             (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       AggregatedTargetTags                                             (Parm, OutParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Normal                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Instigator                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      EffectCauser                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     SourceObject                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPhysicalMaterial*           PhysicalMaterial                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GameplayEffectLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AbilityLevel                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             TargetAttachComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bReplicateLocationWhenUsingMinimalRepProxy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemBlueprintLibrary::BreakGameplayCueParameters(struct FGameplayCueParameters& InParameters, float* InNormalizedMagnitude, float* InRawMagnitude, struct FGameplayEffectContextHandle* InEffectContext, struct FGameplayTag* InMatchedTagName, struct FGameplayTag* InOriginalTag, struct FGameplayTagContainer* InAggregatedSourceTags, struct FGameplayTagContainer* InAggregatedTargetTags, struct FVector* InLocation, struct FVector* InNormal, class AActor** InInstigator, class AActor** InEffectCauser, class UObject** InSourceObject, class UPhysicalMaterial** InPhysicalMaterial, int32* InGameplayEffectLevel, int32* InAbilityLevel, class USceneComponent** InTargetAttachComponent, bool* InbReplicateLocationWhenUsingMinimalRepProxy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "BreakGameplayCueParameters");

	Params::UAbilitySystemBlueprintLibrary_BreakGameplayCueParameters_Params Parms{};

	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InNormalizedMagnitude != nullptr)
		*InNormalizedMagnitude = Parms.NormalizedMagnitude;

	if (InRawMagnitude != nullptr)
		*InRawMagnitude = Parms.RawMagnitude;

	if (InEffectContext != nullptr)
		*InEffectContext = Parms.EffectContext;

	if (InMatchedTagName != nullptr)
		*InMatchedTagName = Parms.MatchedTagName;

	if (InOriginalTag != nullptr)
		*InOriginalTag = Parms.OriginalTag;

	if (InAggregatedSourceTags != nullptr)
		*InAggregatedSourceTags = Parms.AggregatedSourceTags;

	if (InAggregatedTargetTags != nullptr)
		*InAggregatedTargetTags = Parms.AggregatedTargetTags;

	if (InLocation != nullptr)
		*InLocation = Parms.Location;

	if (InNormal != nullptr)
		*InNormal = Parms.Normal;

	if (InInstigator != nullptr)
		*InInstigator = Parms.Instigator;

	if (InEffectCauser != nullptr)
		*InEffectCauser = Parms.EffectCauser;

	if (InSourceObject != nullptr)
		*InSourceObject = Parms.SourceObject;

	if (InPhysicalMaterial != nullptr)
		*InPhysicalMaterial = Parms.PhysicalMaterial;

	if (InGameplayEffectLevel != nullptr)
		*InGameplayEffectLevel = Parms.GameplayEffectLevel;

	if (InAbilityLevel != nullptr)
		*InAbilityLevel = Parms.AbilityLevel;

	if (InTargetAttachComponent != nullptr)
		*InTargetAttachComponent = Parms.TargetAttachComponent;

	if (InbReplicateLocationWhenUsingMinimalRepProxy != nullptr)
		*InbReplicateLocationWhenUsingMinimalRepProxy = Parms.bReplicateLocationWhenUsingMinimalRepProxy;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                DataTag                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Magnitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& InSpecHandle, const struct FGameplayTag& InDataTag, float InMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AssignTagSetByCallerMagnitude");

	Params::UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.DataTag = InDataTag;
	Parms.Magnitude = InMagnitude;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// class FName                        DataName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Magnitude                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& InSpecHandle, class FName InDataName, float InMagnitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AssignSetByCallerMagnitude");

	Params::UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.DataName = InDataName;
	Parms.Magnitude = InMagnitude;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetHandle                                                     (Parm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleHandleToAdd                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& InTargetHandle, struct FGameplayAbilityTargetDataHandle& InHandleToAdd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AppendTargetDataHandle");

	Params::UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params Parms{};

	Parms.TargetHandle = InTargetHandle;
	Parms.HandleToAdd = InHandleToAdd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bShouldReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemBlueprintLibrary::AddLooseGameplayTags(class AActor* InActor, struct FGameplayTagContainer& InGameplayTags, bool InbShouldReplicate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddLooseGameplayTags");

	Params::UAbilitySystemBlueprintLibrary_AddLooseGameplayTags_Params Parms{};

	Parms.Actor = InActor;
	Parms.GameplayTags = InGameplayTags;
	Parms.bShouldReplicate = InbShouldReplicate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   LinkedGameplayEffectSpec                                         (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& InSpecHandle, const struct FGameplayEffectSpecHandle& InLinkedGameplayEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffectSpec");

	Params::UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.LinkedGameplayEffectSpec = InLinkedGameplayEffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class UGameplayEffect> LinkedGameplayEffect                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& InSpecHandle, TSubclassOf<class UGameplayEffect> InLinkedGameplayEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddLinkedGameplayEffect");

	Params::UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.LinkedGameplayEffect = InLinkedGameplayEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       NewGameplayTags                                                  (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTags(const struct FGameplayEffectSpecHandle& InSpecHandle, const struct FGameplayTagContainer& InNewGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTags");

	Params::UAbilitySystemBlueprintLibrary_AddGrantedTags_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.NewGameplayTags = InNewGameplayTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewGameplayTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddGrantedTag(const struct FGameplayEffectSpecHandle& InSpecHandle, const struct FGameplayTag& InNewGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddGrantedTag");

	Params::UAbilitySystemBlueprintLibrary_AddGrantedTag_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.NewGameplayTag = InNewGameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       NewGameplayTags                                                  (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTags(const struct FGameplayEffectSpecHandle& InSpecHandle, const struct FGameplayTagContainer& InNewGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTags");

	Params::UAbilitySystemBlueprintLibrary_AddAssetTags_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.NewGameplayTags = InNewGameplayTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (Parm, NativeAccessSpecifierPublic)
// struct FGameplayTag                NewGameplayTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::AddAssetTag(const struct FGameplayEffectSpecHandle& InSpecHandle, const struct FGameplayTag& InNewGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AddAssetTag");

	Params::UAbilitySystemBlueprintLibrary_AddAssetTag_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.NewGameplayTag = InNewGameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfoSourceLocation                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetingLocationInfoTargetLocation                                                   (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromLocations(struct FGameplayAbilityTargetingLocationInfo& InSourceLocation, struct FGameplayAbilityTargetingLocationInfo& InTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromLocations");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params Parms{};

	Parms.SourceLocation = InSourceLocation;
	Parms.TargetLocation = InTargetLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromHitResult(struct FHitResult& InHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromHitResult");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params Parms{};

	Parms.HitResult = InHitResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>              ActorArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               OneTargetPerHandle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActorArray(TArray<class AActor*>& InActorArray, bool InOneTargetPerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActorArray");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params Parms{};

	Parms.ActorArray = InActorArray;
	Parms.OneTargetPerHandle = InOneTargetPerHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemBlueprintLibrary", "AbilityTargetDataFromActor");

	Params::UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params Parms{};

	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
// (BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FGameplayTag, float>   NewSetByCallerValues                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::UpdateActiveGameplayEffectSetByCallerMagnitudes(const struct FActiveGameplayEffectHandle& InActiveHandle, TMap<struct FGameplayTag, float>& InNewSetByCallerValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "UpdateActiveGameplayEffectSetByCallerMagnitudes");

	Params::UAbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitudes_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;
	Parms.NewSetByCallerValues = InNewSetByCallerValues;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                SetByCallerTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::UpdateActiveGameplayEffectSetByCallerMagnitude(const struct FActiveGameplayEffectHandle& InActiveHandle, const struct FGameplayTag& InSetByCallerTag, float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "UpdateActiveGameplayEffectSetByCallerMagnitude");

	Params::UAbilitySystemComponent_UpdateActiveGameplayEffectSetByCallerMagnitude_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;
	Parms.SetByCallerTag = InSetByCallerTag;
	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayAbility>InAbilityToActivate                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRemoteActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbilityByClass(TSubclassOf<class UGameplayAbility> InInAbilityToActivate, bool InbAllowRemoteActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbilityByClass");

	Params::UAbilitySystemComponent_TryActivateAbilityByClass_Params Parms{};

	Parms.InAbilityToActivate = InInAbilityToActivate;
	Parms.bAllowRemoteActivation = InbAllowRemoteActivation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRemoteActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbility(const struct FGameplayAbilitySpecHandle& InAbilityToActivate, bool InbAllowRemoteActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbility");

	Params::UAbilitySystemComponent_TryActivateAbility_Params Parms{};

	Parms.AbilityToActivate = InAbilityToActivate;
	Parms.bAllowRemoteActivation = InbAllowRemoteActivation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       GameplayTagContainer                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowRemoteActivation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(struct FGameplayTagContainer& InGameplayTagContainer, bool InbAllowRemoteActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TryActivateAbilitiesByTag");

	Params::UAbilitySystemComponent_TryActivateAbilitiesByTag_Params Parms{};

	Parms.GameplayTagContainer = InGameplayTagContainer;
	Parms.bAllowRemoteActivation = InbAllowRemoteActivation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::TargetConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TargetConfirm");

	Params::UAbilitySystemComponent_TargetConfirm_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::TargetCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "TargetCancel");

	Params::UAbilitySystemComponent_TargetCancel_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewInhibit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool InNewInhibit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "SetUserAbilityActivationInhibited");

	Params::UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params Parms{};

	Parms.NewInhibit = InNewInhibit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectQuery        Query                                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& InQuery, int32 InNewLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevelUsingQuery");

	Params::UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params Parms{};

	Parms.Query = InQuery;
	Parms.NewLevel = InNewLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewLevel                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& InActiveHandle, int32 InNewLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "SetActiveGameplayEffectLevel");

	Params::UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params Parms{};

	Parms.ActiveHandle = InActiveHandle;
	Parms.NewLevel = InNewLevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InputPressed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          TriggerEventData                                                 (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& InAbilityToActivate, bool InInputPressed, const struct FPredictionKey& InPredictionKey, const struct FGameplayEventData& InTriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerTryActivateAbilityWithEventData");

	Params::UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params Parms{};

	Parms.AbilityToActivate = InAbilityToActivate;
	Parms.InputPressed = InInputPressed;
	Parms.PredictionKey = InPredictionKey;
	Parms.TriggerEventData = InTriggerEventData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InputPressed                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& InAbilityToActivate, bool InInputPressed, const struct FPredictionKey& InPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerTryActivateAbility");

	Params::UAbilitySystemComponent_ServerTryActivateAbility_Params Parms{};

	Parms.AbilityToActivate = InAbilityToActivate;
	Parms.InputPressed = InInputPressed;
	Parms.PredictionKey = InPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& InAbilityHandle, const struct FPredictionKey& InAbilityOriginalPredictionKey, const struct FPredictionKey& InCurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetDataCancelled");

	Params::UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params Parms{};

	Parms.AbilityHandle = InAbilityHandle;
	Parms.AbilityOriginalPredictionKey = InAbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = InCurrentPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityTargetDataHandleReplicatedTargetDataHandle                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                ApplicationTag                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& InAbilityHandle, const struct FPredictionKey& InAbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle& InReplicatedTargetDataHandle, const struct FGameplayTag& InApplicationTag, const struct FPredictionKey& InCurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedTargetData");

	Params::UAbilitySystemComponent_ServerSetReplicatedTargetData_Params Parms{};

	Parms.AbilityHandle = InAbilityHandle;
	Parms.AbilityOriginalPredictionKey = InAbilityOriginalPredictionKey;
	Parms.ReplicatedTargetDataHandle = InReplicatedTargetDataHandle;
	Parms.ApplicationTag = InApplicationTag;
	Parms.CurrentPredictionKey = InCurrentPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector_NetQuantize100      VectorPayload                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(enum class EAbilityGenericReplicatedEvent InEventType, const struct FGameplayAbilitySpecHandle& InAbilityHandle, const struct FPredictionKey& InAbilityOriginalPredictionKey, const struct FPredictionKey& InCurrentPredictionKey, const struct FVector_NetQuantize100& InVectorPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEventWithPayload");

	Params::UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params Parms{};

	Parms.EventType = InEventType;
	Parms.AbilityHandle = InAbilityHandle;
	Parms.AbilityOriginalPredictionKey = InAbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = InCurrentPredictionKey;
	Parms.VectorPayload = InVectorPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              CurrentPredictionKey                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent InEventType, const struct FGameplayAbilitySpecHandle& InAbilityHandle, const struct FPredictionKey& InAbilityOriginalPredictionKey, const struct FPredictionKey& InCurrentPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetReplicatedEvent");

	Params::UAbilitySystemComponent_ServerSetReplicatedEvent_Params Parms{};

	Parms.EventType = InEventType;
	Parms.AbilityHandle = InAbilityHandle;
	Parms.AbilityOriginalPredictionKey = InAbilityOriginalPredictionKey;
	Parms.CurrentPredictionKey = InCurrentPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& InAbilityHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetInputReleased");

	Params::UAbilitySystemComponent_ServerSetInputReleased_Params Parms{};

	Parms.AbilityHandle = InAbilityHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& InAbilityHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerSetInputPressed");

	Params::UAbilitySystemComponent_ServerSetInputPressed_Params Parms{};

	Parms.AbilityHandle = InAbilityHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<class FString>              Strings                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(TArray<class FString>& InStrings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerPrintDebug_RequestWithStrings");

	Params::UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params Parms{};

	Parms.Strings = InStrings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UAbilitySystemComponent::ServerPrintDebug_Request()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerPrintDebug_Request");

	Params::UAbilitySystemComponent_ServerPrintDebug_Request_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToEnd                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& InAbilityToEnd, const struct FGameplayAbilityActivationInfo& InActivationInfo, const struct FPredictionKey& InPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerEndAbility");

	Params::UAbilitySystemComponent_ServerEndAbility_Params Parms{};

	Parms.AbilityToEnd = InAbilityToEnd;
	Parms.ActivationInfo = InActivationInfo;
	Parms.PredictionKey = InPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InPlayRate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(class UAnimMontage* InClientAnimMontage, float InInPlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetPlayRate");

	Params::UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params Parms{};

	Parms.ClientAnimMontage = InClientAnimMontage;
	Parms.InPlayRate = InInPlayRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ClientPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NextSectionName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* InClientAnimMontage, float InClientPosition, class FName InSectionName, class FName InNextSectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageSetNextSectionName");

	Params::UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params Parms{};

	Parms.ClientAnimMontage = InClientAnimMontage;
	Parms.ClientPosition = InClientPosition;
	Parms.SectionName = InSectionName;
	Parms.NextSectionName = InNextSectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*                ClientAnimMontage                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SectionName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* InClientAnimMontage, class FName InSectionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCurrentMontageJumpToSectionName");

	Params::UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params Parms{};

	Parms.ClientAnimMontage = InClientAnimMontage;
	Parms.SectionName = InSectionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToCancel                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& InAbilityToCancel, const struct FGameplayAbilityActivationInfo& InActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerCancelAbility");

	Params::UAbilitySystemComponent_ServerCancelAbility_Params Parms{};

	Parms.AbilityToCancel = InAbilityToCancel;
	Parms.ActivationInfo = InActivationInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FServerAbilityRPCBatch      BatchInfo                                                        (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ServerAbilityRPCBatch(const struct FServerAbilityRPCBatch& InBatchInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ServerAbilityRPCBatch");

	Params::UAbilitySystemComponent_ServerAbilityRPCBatch_Params Parms{};

	Parms.BatchInfo = InBatchInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffect                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     InstigatorAbilitySystemComponent                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(TSubclassOf<class UGameplayEffect> InGameplayEffect, class UAbilitySystemComponent* InInstigatorAbilitySystemComponent, int32 InStacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffectBySourceEffect");

	Params::UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params Parms{};

	Parms.GameplayEffect = InGameplayEffect;
	Parms.InstigatorAbilitySystemComponent = InInstigatorAbilitySystemComponent;
	Parms.StacksToRemove = InStacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              StacksToRemove                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& InHandle, int32 InStacksToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveGameplayEffect");

	Params::UAbilitySystemComponent_RemoveActiveGameplayEffect_Params Parms{};

	Parms.Handle = InHandle;
	Parms.StacksToRemove = InStacksToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params Parms{};

	Parms.Tags = InTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithSourceTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params Parms{};

	Parms.Tags = InTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithGrantedTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params Parms{};

	Parms.Tags = InTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "RemoveActiveEffectsWithAppliedTags");

	Params::UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params Parms{};

	Parms.Tags = InTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.ReleaseInputID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ReleaseInputID(int32 InInputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ReleaseInputID");

	Params::UAbilitySystemComponent_ReleaseInputID_Params Parms{};

	Parms.InputID = InInputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.PressInputID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::PressInputID(int32 InInputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "PressInputID");

	Params::UAbilitySystemComponent_PressInputID_Params Parms{};

	Parms.InputID = InInputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
// (Final, Native, Public)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::OnSpawnedAttributesEndPlayed(class AActor* InInActor, enum class EEndPlayReason InEndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnSpawnedAttributesEndPlayed");

	Params::UAbilitySystemComponent_OnSpawnedAttributesEndPlayed_Params Parms{};

	Parms.InActor = InInActor;
	Parms.EndPlayReason = InEndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
// (Final, Native, Private, HasOutParams)
// Parameters:
// TArray<class UAttributeSet*>       PreviousSpawnedAttributes                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::OnRep_SpawnedAttributes(TArray<class UAttributeSet*>& InPreviousSpawnedAttributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_SpawnedAttributes");

	Params::UAbilitySystemComponent_OnRep_SpawnedAttributes_Params Parms{};

	Parms.PreviousSpawnedAttributes = InPreviousSpawnedAttributes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
// (Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_ServerDebugString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ServerDebugString");

	Params::UAbilitySystemComponent_OnRep_ServerDebugString_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (Native, Protected)
// Parameters:

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ReplicatedAnimMontage");

	Params::UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (Final, Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_OwningActor");

	Params::UAbilitySystemComponent_OnRep_OwningActor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
// (Native, Public)
// Parameters:

void UAbilitySystemComponent::OnRep_ClientDebugString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ClientDebugString");

	Params::UAbilitySystemComponent_OnRep_ClientDebugString_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (Native, Protected)
// Parameters:

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnRep_ActivateAbilities");

	Params::UAbilitySystemComponent_OnRep_ActivateAbilities_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::OnOwnerActorDestroyed(class AActor* InInActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnOwnerActorDestroyed");

	Params::UAbilitySystemComponent_OnOwnerActorDestroyed_Params Parms{};

	Parms.InActor = InInActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::OnAvatarActorDestroyed(class AActor* InInActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "OnAvatarActorDestroyed");

	Params::UAbilitySystemComponent_OnAvatarActorDestroyed_Params Parms{};

	Parms.InActor = InInActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& InGameplayCueTags, const struct FPredictionKey& InPredictionKey, const struct FGameplayCueParameters& InGameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params Parms{};

	Parms.GameplayCueTags = InGameplayCueTags;
	Parms.PredictionKey = InPredictionKey;
	Parms.GameplayCueParameters = InGameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& InGameplayCueTags, const struct FPredictionKey& InPredictionKey, const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesExecuted");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params Parms{};

	Parms.GameplayCueTags = InGameplayCueTags;
	Parms.PredictionKey = InPredictionKey;
	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer       GameplayCueTags                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& InGameplayCueTags, const struct FPredictionKey& InPredictionKey, const struct FGameplayCueParameters& InGameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params Parms{};

	Parms.GameplayCueTags = InGameplayCueTags;
	Parms.PredictionKey = InPredictionKey;
	Parms.GameplayCueParameters = InGameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& InGameplayCueTag, const struct FPredictionKey& InPredictionKey, const struct FGameplayCueParameters& InGameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.PredictionKey = InPredictionKey;
	Parms.GameplayCueParameters = InGameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC   Spec                                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& InSpec, const struct FPredictionKey& InPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted_FromSpec");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params Parms{};

	Parms.Spec = InSpec;
	Parms.PredictionKey = InPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& InGameplayCueTag, const struct FPredictionKey& InPredictionKey, const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueExecuted");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.PredictionKey = InPredictionKey;
	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      GameplayCueParameters                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& InGameplayCueTag, const struct FPredictionKey& InPredictionKey, const struct FGameplayCueParameters& InGameplayCueParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.PredictionKey = InPredictionKey;
	Parms.GameplayCueParameters = InGameplayCueParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC   Spec                                                             (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(struct FGameplayEffectSpecForRPC& InSpec, const struct FPredictionKey& InPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params Parms{};

	Parms.Spec = InSpec;
	Parms.PredictionKey = InPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& InGameplayCueTag, const struct FPredictionKey& InPredictionKey, const struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded_WithParams");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.PredictionKey = InPredictionKey;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& InGameplayCueTag, const struct FPredictionKey& InPredictionKey, const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "NetMulticast_InvokeGameplayCueAdded");

	Params::UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.PredictionKey = InPredictionKey;
	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpecHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(TSubclassOf<class UGameplayEffect> InGameplayEffectClass, float InLevel, const struct FGameplayEffectContextHandle& InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "MakeOutgoingSpec");

	Params::UAbilitySystemComponent_MakeOutgoingSpec_Params Parms{};

	Parms.GameplayEffectClass = InGameplayEffectClass;
	Parms.Level = InLevel;
	Parms.Context = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandleReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "MakeEffectContext");

	Params::UAbilitySystemComponent_MakeEffectContext_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAttributeSet>   Attributes                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*                  DataTable                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::K2_InitStats(TSubclassOf<class UAttributeSet> InAttributes, class UDataTable* InDataTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "K2_InitStats");

	Params::UAbilitySystemComponent_K2_InitStats_Params Parms{};

	Parms.Attributes = InAttributes;
	Parms.DataTable = InDataTable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayAbility>AbilityClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayAbilitySpecHandle UAbilitySystemComponent::K2_GiveAbilityAndActivateOnce(TSubclassOf<class UGameplayAbility> InAbilityClass, int32 InLevel, int32 InInputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "K2_GiveAbilityAndActivateOnce");

	Params::UAbilitySystemComponent_K2_GiveAbilityAndActivateOnce_Params Parms{};

	Parms.AbilityClass = InAbilityClass;
	Parms.Level = InLevel;
	Parms.InputID = InInputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayAbility>AbilityClass                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayAbilitySpecHandle UAbilitySystemComponent::K2_GiveAbility(TSubclassOf<class UGameplayAbility> InAbilityClass, int32 InLevel, int32 InInputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "K2_GiveAbility");

	Params::UAbilitySystemComponent_K2_GiveAbility_Params Parms{};

	Parms.AbilityClass = InAbilityClass;
	Parms.Level = InLevel;
	Parms.InputID = InInputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& InGameplayCueTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "IsGameplayCueActive");

	Params::UAbilitySystemComponent_IsGameplayCueActive_Params Parms{};

	Parms.GameplayCueTag = InGameplayCueTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.InputConfirm
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::InputConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "InputConfirm");

	Params::UAbilitySystemComponent_InputConfirm_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.InputCancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::InputCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "InputCancel");

	Params::UAbilitySystemComponent_InputCancel_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetUserAbilityActivationInhibited");

	Params::UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                GameplayTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::GetGameplayTagCount(const struct FGameplayTag& InGameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayTagCount");

	Params::UAbilitySystemComponent_GetGameplayTagCount_Params Parms{};

	Parms.GameplayTag = InGameplayTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& InHandle, const struct FGameplayAttribute& InAttribute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectMagnitude");

	Params::UAbilitySystemComponent_GetGameplayEffectMagnitude_Params Parms{};

	Parms.Handle = InHandle;
	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftClassPtr<class UGameplayEffect>SoftSourceGameplayEffect                                         (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     OptionalInstigatorFilterComponent                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnforceOnGoingCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::GetGameplayEffectCount_IfLoaded(TSoftClassPtr<class UGameplayEffect> InSoftSourceGameplayEffect, class UAbilitySystemComponent* InOptionalInstigatorFilterComponent, bool InbEnforceOnGoingCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectCount_IfLoaded");

	Params::UAbilitySystemComponent_GetGameplayEffectCount_IfLoaded_Params Parms{};

	Parms.SoftSourceGameplayEffect = InSoftSourceGameplayEffect;
	Parms.OptionalInstigatorFilterComponent = InOptionalInstigatorFilterComponent;
	Parms.bEnforceOnGoingCheck = InbEnforceOnGoingCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UGameplayEffect> SourceGameplayEffect                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     OptionalInstigatorFilterComponent                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnforceOnGoingCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAbilitySystemComponent::GetGameplayEffectCount(TSubclassOf<class UGameplayEffect> InSourceGameplayEffect, class UAbilitySystemComponent* InOptionalInstigatorFilterComponent, bool InbEnforceOnGoingCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayEffectCount");

	Params::UAbilitySystemComponent_GetGameplayEffectCount_Params Parms{};

	Parms.SourceGameplayEffect = InSourceGameplayEffect;
	Parms.OptionalInstigatorFilterComponent = InOptionalInstigatorFilterComponent;
	Parms.bEnforceOnGoingCheck = InbEnforceOnGoingCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFound                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAbilitySystemComponent::GetGameplayAttributeValue(const struct FGameplayAttribute& InAttribute, bool* InbFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetGameplayAttributeValue");

	Params::UAbilitySystemComponent_GetGameplayAttributeValue_Params Parms{};

	Parms.Attribute = InAttribute;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbFound != nullptr)
		*InbFound = Parms.bFound;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetAttributeSet
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TSubclassOf<class UAttributeSet>   AttributeSetClass                                                (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAttributeSet*               ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAttributeSet* UAbilitySystemComponent::GetAttributeSet(TSubclassOf<class UAttributeSet> InAttributeSetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetAttributeSet");

	Params::UAbilitySystemComponent_GetAttributeSet_Params Parms{};

	Parms.AttributeSetClass = InAttributeSetClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetAllAttributes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FGameplayAttribute>  OutAttributes                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::GetAllAttributes(TArray<struct FGameplayAttribute>* InOutAttributes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetAllAttributes");

	Params::UAbilitySystemComponent_GetAllAttributes_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutAttributes != nullptr)
		*InOutAttributes = Parms.OutAttributes;

}


// Function GameplayAbilities.AbilitySystemComponent.GetAllAbilities
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FGameplayAbilitySpecHandle>OutAbilityHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::GetAllAbilities(TArray<struct FGameplayAbilitySpecHandle>* InOutAbilityHandles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetAllAbilities");

	Params::UAbilitySystemComponent_GetAllAbilities_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutAbilityHandles != nullptr)
		*InOutAbilityHandles = Parms.OutAbilityHandles;

}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffectsWithAllTags(const struct FGameplayTagContainer& InTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetActiveEffectsWithAllTags");

	Params::UAbilitySystemComponent_GetActiveEffectsWithAllTags_Params Parms{};

	Parms.Tags = InTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// struct FGameplayEffectQuery        Query                                                            (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TArray<struct FActiveGameplayEffectHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(struct FGameplayEffectQuery& InQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "GetActiveEffects");

	Params::UAbilitySystemComponent_GetActiveEffects_Params Parms{};

	Parms.Query = InQuery;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FGameplayAbilitySpecHandle>OutAbilityHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       Tags                                                             (Parm, NativeAccessSpecifierPublic)
// bool                               bExactMatch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::FindAllAbilitiesWithTags(TArray<struct FGameplayAbilitySpecHandle>* InOutAbilityHandles, const struct FGameplayTagContainer& InTags, bool InbExactMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesWithTags");

	Params::UAbilitySystemComponent_FindAllAbilitiesWithTags_Params Parms{};

	Parms.Tags = InTags;
	Parms.bExactMatch = InbExactMatch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutAbilityHandles != nullptr)
		*InOutAbilityHandles = Parms.OutAbilityHandles;

}


// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FGameplayAbilitySpecHandle>OutAbilityHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::FindAllAbilitiesWithInputID(TArray<struct FGameplayAbilitySpecHandle>* InOutAbilityHandles, int32 InInputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesWithInputID");

	Params::UAbilitySystemComponent_FindAllAbilitiesWithInputID_Params Parms{};

	Parms.InputID = InInputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutAbilityHandles != nullptr)
		*InOutAbilityHandles = Parms.OutAbilityHandles;

}


// Function GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FGameplayAbilitySpecHandle>OutAbilityHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FGameplayTagQuery           Query                                                            (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::FindAllAbilitiesMatchingQuery(TArray<struct FGameplayAbilitySpecHandle>* InOutAbilityHandles, const struct FGameplayTagQuery& InQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "FindAllAbilitiesMatchingQuery");

	Params::UAbilitySystemComponent_FindAllAbilitiesMatchingQuery_Params Parms{};

	Parms.Query = InQuery;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutAbilityHandles != nullptr)
		*InOutAbilityHandles = Parms.OutAbilityHandles;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& InAbilityToActivate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientTryActivateAbility");

	Params::UAbilitySystemComponent_ClientTryActivateAbility_Params Parms{};

	Parms.AbilityToActivate = InAbilityToActivate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// enum class EAbilityGenericReplicatedEventEventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilitySpecHandle  AbilityHandle                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              AbilityOriginalPredictionKey                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientSetReplicatedEvent(enum class EAbilityGenericReplicatedEvent InEventType, const struct FGameplayAbilitySpecHandle& InAbilityHandle, const struct FPredictionKey& InAbilityOriginalPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientSetReplicatedEvent");

	Params::UAbilitySystemComponent_ClientSetReplicatedEvent_Params Parms{};

	Parms.EventType = InEventType;
	Parms.AbilityHandle = InAbilityHandle;
	Parms.AbilityOriginalPredictionKey = InAbilityOriginalPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<class FString>              Strings                                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              GameFlags                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientPrintDebug_Response(TArray<class FString>& InStrings, int32 InGameFlags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientPrintDebug_Response");

	Params::UAbilitySystemComponent_ClientPrintDebug_Response_Params Parms{};

	Parms.Strings = InStrings;
	Parms.GameFlags = InGameFlags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToEnd                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& InAbilityToEnd, const struct FGameplayAbilityActivationInfo& InActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientEndAbility");

	Params::UAbilitySystemComponent_ClientEndAbility_Params Parms{};

	Parms.AbilityToEnd = InAbilityToEnd;
	Parms.ActivationInfo = InActivationInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToCancel                                                  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayAbilityActivationInfoActivationInfo                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& InAbilityToCancel, const struct FGameplayAbilityActivationInfo& InActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientCancelAbility");

	Params::UAbilitySystemComponent_ClientCancelAbility_Params Parms{};

	Parms.AbilityToCancel = InAbilityToCancel;
	Parms.ActivationInfo = InActivationInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEventData          TriggerEventData                                                 (Parm, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& InAbilityToActivate, const struct FPredictionKey& InPredictionKey, const struct FGameplayEventData& InTriggerEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceedWithEventData");

	Params::UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params Parms{};

	Parms.AbilityToActivate = InAbilityToActivate;
	Parms.PredictionKey = InPredictionKey;
	Parms.TriggerEventData = InTriggerEventData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPredictionKey              PredictionKey                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& InAbilityToActivate, const struct FPredictionKey& InPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilitySucceed");

	Params::UAbilitySystemComponent_ClientActivateAbilitySucceed_Params Parms{};

	Parms.AbilityToActivate = InAbilityToActivate;
	Parms.PredictionKey = InPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle  AbilityToActivate                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int16                              PredictionKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& InAbilityToActivate, int16 InPredictionKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClientActivateAbilityFailed");

	Params::UAbilitySystemComponent_ClientActivateAbilityFailed_Params Parms{};

	Parms.AbilityToActivate = InAbilityToActivate;
	Parms.PredictionKey = InPredictionKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClearAllAbilitiesWithInputID(int32 InInputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClearAllAbilitiesWithInputID");

	Params::UAbilitySystemComponent_ClearAllAbilitiesWithInputID_Params Parms{};

	Parms.InputID = InInputID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UAbilitySystemComponent::ClearAllAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClearAllAbilities");

	Params::UAbilitySystemComponent_ClearAllAbilities_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.ClearAbility
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::ClearAbility(struct FGameplayAbilitySpecHandle& InHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "ClearAbility");

	Params::UAbilitySystemComponent_ClearAbility_Params Parms{};

	Parms.Handle = InHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleContext                                                          (Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(TSubclassOf<class UGameplayEffect> InGameplayEffectClass, class UAbilitySystemComponent* InTarget, float InLevel, const struct FGameplayEffectContextHandle& InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToTarget");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params Parms{};

	Parms.GameplayEffectClass = InGameplayEffectClass;
	Parms.Target = InTarget;
	Parms.Level = InLevel;
	Parms.Context = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> GameplayEffectClass                                              (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Level                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectContextHandleEffectContext                                                    (Parm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(TSubclassOf<class UGameplayEffect> InGameplayEffectClass, float InLevel, const struct FGameplayEffectContextHandle& InEffectContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectToSelf");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params Parms{};

	Parms.GameplayEffectClass = InGameplayEffectClass;
	Parms.Level = InLevel;
	Parms.EffectContext = InEffectContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     Target                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& InSpecHandle, class UAbilitySystemComponent* InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToTarget");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params Parms{};

	Parms.SpecHandle = InSpecHandle;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle   SpecHandle                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FActiveGameplayEffectHandle ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& InSpecHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "BP_ApplyGameplayEffectSpecToSelf");

	Params::UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params Parms{};

	Parms.SpecHandle = InSpecHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "AbilityConfirmOrCancel__DelegateSignature");

	Params::UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              InputID                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int32 InInputID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemComponent", "AbilityAbilityKey__DelegateSignature");

	Params::UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params Parms{};

	Parms.InputID = InInputID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// (Exec, Native, Public)
// Parameters:

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ToggleIgnoreAbilitySystemCosts");

	Params::UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// (Exec, Native, Public)
// Parameters:

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ToggleIgnoreAbilitySystemCooldowns");

	Params::UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemGlobals.ServerEndPlayerAbility
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      AbilityNameMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerEndPlayerAbility(const class FString& InAbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerEndPlayerAbility");

	Params::UAbilitySystemGlobals_ServerEndPlayerAbility_Params Parms{};

	Parms.AbilityNameMatch = InAbilityNameMatch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemGlobals.ServerCancelPlayerAbility
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      AbilityNameMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerCancelPlayerAbility(const class FString& InAbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerCancelPlayerAbility");

	Params::UAbilitySystemGlobals_ServerCancelPlayerAbility_Params Parms{};

	Parms.AbilityNameMatch = InAbilityNameMatch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemGlobals.ServerActivatePlayerAbility
// (Final, Exec, Native, Public)
// Parameters:
// class FString                      AbilityNameMatch                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAbilitySystemGlobals::ServerActivatePlayerAbility(const class FString& InAbilityNameMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ServerActivatePlayerAbility");

	Params::UAbilitySystemGlobals_ServerActivatePlayerAbility_Params Parms{};

	Parms.AbilityNameMatch = InAbilityNameMatch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.AbilitySystemGlobals.ListPlayerAbilities
// (Final, Exec, Native, Public)
// Parameters:

void UAbilitySystemGlobals::ListPlayerAbilities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilitySystemGlobals", "ListPlayerAbilities");

	Params::UAbilitySystemGlobals_ListPlayerAbilities_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueFunctionLibrary.RemoveGameplayCueOnActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueFunctionLibrary::RemoveGameplayCueOnActor(class AActor* InTarget, const struct FGameplayTag& InGameplayCueTag, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueFunctionLibrary", "RemoveGameplayCueOnActor");

	Params::UGameplayCueFunctionLibrary_RemoveGameplayCueOnActor_Params Parms{};

	Parms.Target = InTarget;
	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueFunctionLibrary.MakeGameplayCueParametersFromHitResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FGameplayCueParameters UGameplayCueFunctionLibrary::MakeGameplayCueParametersFromHitResult(struct FHitResult& InHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueFunctionLibrary", "MakeGameplayCueParametersFromHitResult");

	Params::UGameplayCueFunctionLibrary_MakeGameplayCueParametersFromHitResult_Params Parms{};

	Parms.HitResult = InHitResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueFunctionLibrary.ExecuteGameplayCueOnActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueFunctionLibrary::ExecuteGameplayCueOnActor(class AActor* InTarget, const struct FGameplayTag& InGameplayCueTag, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueFunctionLibrary", "ExecuteGameplayCueOnActor");

	Params::UGameplayCueFunctionLibrary_ExecuteGameplayCueOnActor_Params Parms{};

	Parms.Target = InTarget;
	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueFunctionLibrary.AddGameplayCueOnActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayCueTag                                                   (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueFunctionLibrary::AddGameplayCueOnActor(class AActor* InTarget, const struct FGameplayTag& InGameplayCueTag, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueFunctionLibrary", "AddGameplayCueOnActor");

	Params::UGameplayCueFunctionLibrary_AddGameplayCueOnActor_Params Parms{};

	Parms.Target = InTarget;
	Parms.GameplayCueTag = InGameplayCueTag;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void IGameplayCueInterface::ForwardGameplayCueToParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueInterface", "ForwardGameplayCueToParent");

	Params::IGameplayCueInterface_ForwardGameplayCueToParent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void IGameplayCueInterface::BlueprintCustomHandler(enum class EGameplayCueEvent InEventType, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueInterface", "BlueprintCustomHandler");

	Params::IGameplayCueInterface_BlueprintCustomHandler_Params Parms{};

	Parms.EventType = InEventType;
	Parms.Parameters = InParameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::WhileActive(class AActor* InMyTarget, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "WhileActive");

	Params::AGameplayCueNotify_Actor_WhileActive_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnRemove(class AActor* InMyTarget, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnRemove");

	Params::AGameplayCueNotify_Actor_OnRemove_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (Native, Public)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGameplayCueNotify_Actor::OnOwnerDestroyed(class AActor* InDestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnOwnerDestroyed");

	Params::AGameplayCueNotify_Actor_OnOwnerDestroyed_Params Parms{};

	Parms.DestroyedActor = InDestroyedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnExecute(class AActor* InMyTarget, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnExecute");

	Params::AGameplayCueNotify_Actor_OnExecute_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGameplayCueNotify_Actor::OnActive(class AActor* InMyTarget, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "OnActive");

	Params::AGameplayCueNotify_Actor_OnActive_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* InMyTarget, enum class EGameplayCueEvent InEventType, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "K2_HandleGameplayCue");

	Params::AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.EventType = InEventType;
	Parms.Parameters = InParameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
// (Native, Public, BlueprintCallable)
// Parameters:

void AGameplayCueNotify_Actor::K2_EndGameplayCue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Actor", "K2_EndGameplayCue");

	Params::AGameplayCueNotify_Actor_K2_EndGameplayCue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::WhileActive(class AActor* InMyTarget, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "WhileActive");

	Params::UGameplayCueNotify_Static_WhileActive_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnRemove(class AActor* InMyTarget, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnRemove");

	Params::UGameplayCueNotify_Static_OnRemove_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnExecute(class AActor* InMyTarget, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnExecute");

	Params::UGameplayCueNotify_Static_OnExecute_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCueNotify_Static::OnActive(class AActor* InMyTarget, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "OnActive");

	Params::UGameplayCueNotify_Static_OnActive_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.Parameters = InParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class AActor*                      MyTarget                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGameplayCueEvent       EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* InMyTarget, enum class EGameplayCueEvent InEventType, struct FGameplayCueParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Static", "K2_HandleGameplayCue");

	Params::UGameplayCueNotify_Static_K2_HandleGameplayCue_Params Parms{};

	Parms.MyTarget = InMyTarget;
	Parms.EventType = InEventType;
	Parms.Parameters = InParameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Burst.OnBurst
// (Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGameplayCueNotify_Burst::OnBurst(class AActor* InTarget, struct FGameplayCueParameters& InParameters, struct FGameplayCueNotify_SpawnResult& InSpawnResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Burst", "OnBurst");

	Params::UGameplayCueNotify_Burst_OnBurst_Params Parms{};

	Parms.Target = InTarget;
	Parms.Parameters = InParameters;
	Parms.SpawnResults = InSpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AGameplayCueNotify_BurstLatent::OnBurst(class AActor* InTarget, struct FGameplayCueParameters& InParameters, struct FGameplayCueNotify_SpawnResult& InSpawnResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_BurstLatent", "OnBurst");

	Params::AGameplayCueNotify_BurstLatent_OnBurst_Params Parms{};

	Parms.Target = InTarget;
	Parms.Parameters = InParameters;
	Parms.SpawnResults = InSpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AGameplayCueNotify_Looping::OnRemoval(class AActor* InTarget, struct FGameplayCueParameters& InParameters, struct FGameplayCueNotify_SpawnResult& InSpawnResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Looping", "OnRemoval");

	Params::AGameplayCueNotify_Looping_OnRemoval_Params Parms{};

	Parms.Target = InTarget;
	Parms.Parameters = InParameters;
	Parms.SpawnResults = InSpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AGameplayCueNotify_Looping::OnRecurring(class AActor* InTarget, struct FGameplayCueParameters& InParameters, struct FGameplayCueNotify_SpawnResult& InSpawnResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Looping", "OnRecurring");

	Params::AGameplayCueNotify_Looping_OnRecurring_Params Parms{};

	Parms.Target = InTarget;
	Parms.Parameters = InParameters;
	Parms.SpawnResults = InSpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AGameplayCueNotify_Looping::OnLoopingStart(class AActor* InTarget, struct FGameplayCueParameters& InParameters, struct FGameplayCueNotify_SpawnResult& InSpawnResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Looping", "OnLoopingStart");

	Params::AGameplayCueNotify_Looping_OnLoopingStart_Params Parms{};

	Parms.Target = InTarget;
	Parms.Parameters = InParameters;
	Parms.SpawnResults = InSpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayCueNotify_Looping.OnApplication
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayCueParameters      Parameters                                                       (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayCueNotify_SpawnResultSpawnResults                                                     (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AGameplayCueNotify_Looping::OnApplication(class AActor* InTarget, struct FGameplayCueParameters& InParameters, struct FGameplayCueNotify_SpawnResult& InSpawnResults)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCueNotify_Looping", "OnApplication");

	Params::AGameplayCueNotify_Looping_OnApplication_Params Parms{};

	Parms.Target = InTarget;
	Parms.Parameters = InParameters;
	Parms.SpawnResults = InSpawnResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UGameplayEffect*             GameplayEffect                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ASC                                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(class UGameplayEffect* InGameplayEffect, struct FGameplayEffectSpec& InSpec, class UAbilitySystemComponent* InASC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayEffectCustomApplicationRequirement", "CanApplyGameplayEffect");

	Params::UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params Parms{};

	Parms.GameplayEffect = InGameplayEffect;
	Parms.Spec = InSpec;
	Parms.ASC = InASC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void UGameplayEffectExecutionCalculation::Execute(struct FGameplayEffectCustomExecutionParameters& InExecutionParams, struct FGameplayEffectCustomExecutionOutput* InOutExecutionOutput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayEffectExecutionCalculation", "Execute");

	Params::UGameplayEffectExecutionCalculation_Execute_Params Parms{};

	Parms.ExecutionParams = InExecutionParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutExecutionOutput != nullptr)
		*InOutExecutionOutput = Parms.OutExecutionOutput;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayAttribute          Attribute                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       TargetTags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::K2_GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& InEffectSpec, const struct FGameplayAttribute& InAttribute, struct FGameplayTagContainer& InSourceTags, struct FGameplayTagContainer& InTargetTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "K2_GetCapturedAttributeMagnitude");

	Params::UGameplayModMagnitudeCalculation_K2_GetCapturedAttributeMagnitude_Params Parms{};

	Parms.EffectSpec = InEffectSpec;
	Parms.Attribute = InAttribute;
	Parms.SourceTags = InSourceTags;
	Parms.TargetTags = InTargetTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetSpecTags(struct FGameplayEffectSpec& InEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetSpecTags");

	Params::UGameplayModMagnitudeCalculation_GetTargetSpecTags_Params Parms{};

	Parms.EffectSpec = InEffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetAggregatedTags(struct FGameplayEffectSpec& InEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetAggregatedTags");

	Params::UGameplayModMagnitudeCalculation_GetTargetAggregatedTags_Params Parms{};

	Parms.EffectSpec = InEffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetTargetActorTags(struct FGameplayEffectSpec& InEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetTargetActorTags");

	Params::UGameplayModMagnitudeCalculation_GetTargetActorTags_Params Parms{};

	Parms.EffectSpec = InEffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceSpecTags(struct FGameplayEffectSpec& InEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceSpecTags");

	Params::UGameplayModMagnitudeCalculation_GetSourceSpecTags_Params Parms{};

	Parms.EffectSpec = InEffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceAggregatedTags(struct FGameplayEffectSpec& InEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceAggregatedTags");

	Params::UGameplayModMagnitudeCalculation_GetSourceAggregatedTags_Params Parms{};

	Parms.EffectSpec = InEffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UGameplayModMagnitudeCalculation::GetSourceActorTags(struct FGameplayEffectSpec& InEffectSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSourceActorTags");

	Params::UGameplayModMagnitudeCalculation_GetSourceActorTags_Params Parms{};

	Parms.EffectSpec = InEffectSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& InEffectSpec, struct FGameplayTag& InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSetByCallerMagnitudeByTag");

	Params::UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByTag_Params Parms{};

	Parms.EffectSpec = InEffectSpec;
	Parms.Tag = InTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpec         EffectSpec                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        MagnitudeName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& InEffectSpec, class FName& InMagnitudeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "GetSetByCallerMagnitudeByName");

	Params::UGameplayModMagnitudeCalculation_GetSetByCallerMagnitudeByName_Params Parms{};

	Parms.EffectSpec = InEffectSpec;
	Parms.MagnitudeName = InMagnitudeName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec         Spec                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(struct FGameplayEffectSpec& InSpec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayModMagnitudeCalculation", "CalculateBaseMagnitude");

	Params::UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params Parms{};

	Parms.Spec = InSpec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAbilitySystemComponent*     ASC                                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Idx                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& InTag, int32 InNewCount, class UAbilitySystemComponent* InASC, int32 InIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTagReponseTable", "TagResponseEvent");

	Params::UGameplayTagReponseTable_TagResponseEvent_Params Parms{};

	Parms.Tag = InTag;
	Parms.NewCount = InNewCount;
	Parms.ASC = InASC;
	Parms.Idx = InIdx;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 InGameplayCueTrackHandler                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneGameplayCueTrack::SetSequencerTrackHandler(FDelegateProperty_ InInGameplayCueTrackHandler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MovieSceneGameplayCueTrack", "SetSequencerTrackHandler");

	Params::UMovieSceneGameplayCueTrack_SetSequencerTrackHandler_Params Parms{};

	Parms.InGameplayCueTrackHandler = InInGameplayCueTrackHandler;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
