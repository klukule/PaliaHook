#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_LeftHand_Dequip.GA_LeftHand_Dequip_C
// (None)

class UClass* UGA_LeftHand_Dequip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_LeftHand_Dequip_C");

	return Clss;
}


// GA_LeftHand_Dequip_C GA_LeftHand_Dequip.Default__GA_LeftHand_Dequip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_LeftHand_Dequip_C* UGA_LeftHand_Dequip_C::GetDefaultObj()
{
	static class UGA_LeftHand_Dequip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_LeftHand_Dequip_C*>(UGA_LeftHand_Dequip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.OnCancelled_20445A2640D644CD6B9EFA9754DC209A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LeftHand_Dequip_C::OnCancelled_20445A2640D644CD6B9EFA9754DC209A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LeftHand_Dequip_C", "OnCancelled_20445A2640D644CD6B9EFA9754DC209A");

	Params::UGA_LeftHand_Dequip_C_OnCancelled_20445A2640D644CD6B9EFA9754DC209A_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.OnInterrupted_20445A2640D644CD6B9EFA9754DC209A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LeftHand_Dequip_C::OnInterrupted_20445A2640D644CD6B9EFA9754DC209A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LeftHand_Dequip_C", "OnInterrupted_20445A2640D644CD6B9EFA9754DC209A");

	Params::UGA_LeftHand_Dequip_C_OnInterrupted_20445A2640D644CD6B9EFA9754DC209A_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.OnBlendOut_20445A2640D644CD6B9EFA9754DC209A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LeftHand_Dequip_C::OnBlendOut_20445A2640D644CD6B9EFA9754DC209A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LeftHand_Dequip_C", "OnBlendOut_20445A2640D644CD6B9EFA9754DC209A");

	Params::UGA_LeftHand_Dequip_C_OnBlendOut_20445A2640D644CD6B9EFA9754DC209A_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.OnCompleted_20445A2640D644CD6B9EFA9754DC209A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LeftHand_Dequip_C::OnCompleted_20445A2640D644CD6B9EFA9754DC209A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LeftHand_Dequip_C", "OnCompleted_20445A2640D644CD6B9EFA9754DC209A");

	Params::UGA_LeftHand_Dequip_C_OnCompleted_20445A2640D644CD6B9EFA9754DC209A_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_LeftHand_Dequip_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LeftHand_Dequip_C", "K2_ActivateAbility");

	Params::UGA_LeftHand_Dequip_C_K2_ActivateAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.ExecuteUbergraph_GA_LeftHand_Dequip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageByAbility_Montage                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)

void UGA_LeftHand_Dequip_C::ExecuteUbergraph_GA_LeftHand_Dequip(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetMontageByAbility_Montage, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LeftHand_Dequip_C", "ExecuteUbergraph_GA_LeftHand_Dequip");

	Params::UGA_LeftHand_Dequip_C_ExecuteUbergraph_GA_LeftHand_Dequip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetMontageByAbility_Montage = CallFunc_GetMontageByAbility_Montage;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


