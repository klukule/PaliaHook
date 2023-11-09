#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DecorInteraction.GA_DecorInteraction_C
// (None)

class UClass* UGA_DecorInteraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DecorInteraction_C");

	return Clss;
}


// GA_DecorInteraction_C GA_DecorInteraction.Default__GA_DecorInteraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DecorInteraction_C* UGA_DecorInteraction_C::GetDefaultObj()
{
	static class UGA_DecorInteraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DecorInteraction_C*>(UGA_DecorInteraction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DecorInteraction.GA_DecorInteraction_C.UnbindEnforcedRules
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValeriaCharacterMoveComponent*Move                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetMovement_Movement                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_DecorInteraction_C::UnbindEnforcedRules(class UValeriaCharacterMoveComponent* Move, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "UnbindEnforcedRules");

	Params::UGA_DecorInteraction_C_UnbindEnforcedRules_Params Parms{};

	Parms.Move = Move;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetMovement_Movement = CallFunc_GetMovement_Movement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.BindEnforcedRules
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValeriaCharacterMoveComponent*Move                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetMovement_Movement                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_DecorInteraction_C::BindEnforcedRules(class UValeriaCharacterMoveComponent* Move, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "BindEnforcedRules");

	Params::UGA_DecorInteraction_C_BindEnforcedRules_Params Parms{};

	Parms.Move = Move;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetMovement_Movement = CallFunc_GetMovement_Movement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.MoveOutOfPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValeriaCharacterMoveComponent*MoveComp                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetMovement_Movement                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DecorInteraction_C::MoveOutOfPosition(class UValeriaCharacterMoveComponent* MoveComp, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "MoveOutOfPosition");

	Params::UGA_DecorInteraction_C_MoveOutOfPosition_Params Parms{};

	Parms.MoveComp = MoveComp;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GetMovement_Movement = CallFunc_GetMovement_Movement;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.MoveIntoPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValeriaCharacterMoveComponent*MoveComp                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetMovement_Movement                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Server_AddSpeedScalarModifier_inSpeedScalarModifier_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DecorInteraction_C::MoveIntoPosition(class UValeriaCharacterMoveComponent* MoveComp, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Server_AddSpeedScalarModifier_inSpeedScalarModifier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "MoveIntoPosition");

	Params::UGA_DecorInteraction_C_MoveIntoPosition_Params Parms{};

	Parms.MoveComp = MoveComp;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetMovement_Movement = CallFunc_GetMovement_Movement;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Server_AddSpeedScalarModifier_inSpeedScalarModifier_ImplicitCast = CallFunc_Server_AddSpeedScalarModifier_inSpeedScalarModifier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.GetMovement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UValeriaCharacterMoveComponent*Movement                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_DecorInteraction_C::GetMovement(class UValeriaCharacterMoveComponent** Movement, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "GetMovement");

	Params::UGA_DecorInteraction_C_GetMovement_Params Parms{};

	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue = CallFunc_GetValeriaCharacterMovementComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Movement != nullptr)
		*Movement = Parms.Movement;

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.OnCancelled_C69B5BA140BAB0CA85D5798BE1C3B007
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::OnCancelled_C69B5BA140BAB0CA85D5798BE1C3B007()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "OnCancelled_C69B5BA140BAB0CA85D5798BE1C3B007");

	Params::UGA_DecorInteraction_C_OnCancelled_C69B5BA140BAB0CA85D5798BE1C3B007_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.OnInterrupted_C69B5BA140BAB0CA85D5798BE1C3B007
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::OnInterrupted_C69B5BA140BAB0CA85D5798BE1C3B007()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "OnInterrupted_C69B5BA140BAB0CA85D5798BE1C3B007");

	Params::UGA_DecorInteraction_C_OnInterrupted_C69B5BA140BAB0CA85D5798BE1C3B007_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.OnBlendOut_C69B5BA140BAB0CA85D5798BE1C3B007
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::OnBlendOut_C69B5BA140BAB0CA85D5798BE1C3B007()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "OnBlendOut_C69B5BA140BAB0CA85D5798BE1C3B007");

	Params::UGA_DecorInteraction_C_OnBlendOut_C69B5BA140BAB0CA85D5798BE1C3B007_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.OnCompleted_C69B5BA140BAB0CA85D5798BE1C3B007
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::OnCompleted_C69B5BA140BAB0CA85D5798BE1C3B007()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "OnCompleted_C69B5BA140BAB0CA85D5798BE1C3B007");

	Params::UGA_DecorInteraction_C_OnCompleted_C69B5BA140BAB0CA85D5798BE1C3B007_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.OnCancelled_E44A1AA9495B352538FA178DBDCF7CC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::OnCancelled_E44A1AA9495B352538FA178DBDCF7CC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "OnCancelled_E44A1AA9495B352538FA178DBDCF7CC8");

	Params::UGA_DecorInteraction_C_OnCancelled_E44A1AA9495B352538FA178DBDCF7CC8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.OnInterrupted_E44A1AA9495B352538FA178DBDCF7CC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::OnInterrupted_E44A1AA9495B352538FA178DBDCF7CC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "OnInterrupted_E44A1AA9495B352538FA178DBDCF7CC8");

	Params::UGA_DecorInteraction_C_OnInterrupted_E44A1AA9495B352538FA178DBDCF7CC8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.OnBlendOut_E44A1AA9495B352538FA178DBDCF7CC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::OnBlendOut_E44A1AA9495B352538FA178DBDCF7CC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "OnBlendOut_E44A1AA9495B352538FA178DBDCF7CC8");

	Params::UGA_DecorInteraction_C_OnBlendOut_E44A1AA9495B352538FA178DBDCF7CC8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.OnCompleted_E44A1AA9495B352538FA178DBDCF7CC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::OnCompleted_E44A1AA9495B352538FA178DBDCF7CC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "OnCompleted_E44A1AA9495B352538FA178DBDCF7CC8");

	Params::UGA_DecorInteraction_C_OnCompleted_E44A1AA9495B352538FA178DBDCF7CC8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DecorInteraction_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "K2_OnEndAbility");

	Params::UGA_DecorInteraction_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_DecorInteraction_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_DecorInteraction_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.MovementInputTriggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::MovementInputTriggered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "MovementInputTriggered");

	Params::UGA_DecorInteraction_C_MovementInputTriggered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.PrimaryInteractPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::PrimaryInteractPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "PrimaryInteractPressed");

	Params::UGA_DecorInteraction_C_PrimaryInteractPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.EnforcedStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DecorInteraction_C::EnforcedStarted(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "EnforcedStarted");

	Params::UGA_DecorInteraction_C_EnforcedStarted_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.EnforcedEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_DecorInteraction_C::EnforcedEnded(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "EnforcedEnded");

	Params::UGA_DecorInteraction_C_EnforcedEnded_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.ReopenTimeoutGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::ReopenTimeoutGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "ReopenTimeoutGate");

	Params::UGA_DecorInteraction_C_ReopenTimeoutGate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.PrepCancelInputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_DecorInteraction_C::PrepCancelInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "PrepCancelInputs");

	Params::UGA_DecorInteraction_C_PrepCancelInputs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DecorInteraction.GA_DecorInteraction_C.ExecuteUbergraph_GA_DecorInteraction
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// struct FTransform                  CallFunc_GetTargetDataEndPointTransform_ReturnValue              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TargetDataHasEndPoint_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTargetDataOrigin_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TargetDataHasOrigin_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaGASComponent*        CallFunc_GetGAS_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValeriaGASComponent*        CallFunc_GetGAS_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMappingNameByAbility_Mapping_Name                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FNameIsNone_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_TaskProxy_PlayMontageAndWait*CallFunc_PlayMontageByMappingAndWait_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    K2Node_CustomEvent_Rotation                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVAL_TaskProxy_PlayMontageAndWait*CallFunc_PlayMontageByMappingAndWait_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_DecorInteractSpeed_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DecorInteraction_C::ExecuteUbergraph_GA_DecorInteraction(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, const struct FTransform& CallFunc_GetTargetDataEndPointTransform_ReturnValue, bool CallFunc_TargetDataHasEndPoint_ReturnValue, const struct FTransform& CallFunc_GetTargetDataOrigin_ReturnValue, bool CallFunc_TargetDataHasOrigin_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName CallFunc_GetMappingNameByAbility_Mapping_Name, bool CallFunc_FNameIsNone_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWait* CallFunc_PlayMontageByMappingAndWait_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FVector& K2Node_CustomEvent_Location_1, const struct FRotator& K2Node_CustomEvent_Rotation_1, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Rotation, class UVAL_TaskProxy_PlayMontageAndWait* CallFunc_PlayMontageByMappingAndWait_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double K2Node_VariableSet_DecorInteractSpeed_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DecorInteraction_C", "ExecuteUbergraph_GA_DecorInteraction");

	Params::UGA_DecorInteraction_C_ExecuteUbergraph_GA_DecorInteraction_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetTargetDataEndPointTransform_ReturnValue = CallFunc_GetTargetDataEndPointTransform_ReturnValue;
	Parms.CallFunc_TargetDataHasEndPoint_ReturnValue = CallFunc_TargetDataHasEndPoint_ReturnValue;
	Parms.CallFunc_GetTargetDataOrigin_ReturnValue = CallFunc_GetTargetDataOrigin_ReturnValue;
	Parms.CallFunc_TargetDataHasOrigin_ReturnValue = CallFunc_TargetDataHasOrigin_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetGAS_ReturnValue = CallFunc_GetGAS_ReturnValue;
	Parms.CallFunc_GetGAS_ReturnValue_1 = CallFunc_GetGAS_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetMappingNameByAbility_Mapping_Name = CallFunc_GetMappingNameByAbility_Mapping_Name;
	Parms.CallFunc_FNameIsNone_ReturnValue = CallFunc_FNameIsNone_ReturnValue;
	Parms.CallFunc_PlayMontageByMappingAndWait_ReturnValue = CallFunc_PlayMontageByMappingAndWait_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.K2Node_CustomEvent_Rotation_1 = K2Node_CustomEvent_Rotation_1;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Rotation = K2Node_CustomEvent_Rotation;
	Parms.CallFunc_PlayMontageByMappingAndWait_ReturnValue_1 = CallFunc_PlayMontageByMappingAndWait_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_VariableSet_DecorInteractSpeed_ImplicitCast = K2Node_VariableSet_DecorInteractSpeed_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


