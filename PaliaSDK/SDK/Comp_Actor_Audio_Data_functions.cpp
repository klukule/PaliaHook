#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C
// (None)

class UClass* UComp_Actor_Audio_Data_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Comp_Actor_Audio_Data_C");

	return Clss;
}


// Comp_Actor_Audio_Data_C Comp_Actor_Audio_Data.Default__Comp_Actor_Audio_Data_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComp_Actor_Audio_Data_C* UComp_Actor_Audio_Data_C::GetDefaultObj()
{
	static class UComp_Actor_Audio_Data_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComp_Actor_Audio_Data_C*>(UComp_Actor_Audio_Data_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.WeatherManagerIsRaining
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsRaining                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWeatherStateProperties     CallFunc_GetCurrentWorldWeatherState_ReturnValue                 (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::WeatherManagerIsRaining(bool* bIsRaining, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, const struct FWeatherStateProperties& CallFunc_GetCurrentWorldWeatherState_ReturnValue, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "WeatherManagerIsRaining");

	Params::UComp_Actor_Audio_Data_C_WeatherManagerIsRaining_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentWorldWeatherState_ReturnValue = CallFunc_GetCurrentWorldWeatherState_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsRaining != nullptr)
		*bIsRaining = Parms.bIsRaining;

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.UpdatePhysmat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*           PhysMat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::UpdatePhysmat(class UPhysicalMaterial* PhysMat, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "UpdatePhysmat");

	Params::UComp_Actor_Audio_Data_C_UpdatePhysmat_Params Parms{};

	Parms.PhysMat = PhysMat;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.SetDialogIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayingIntro                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::SetDialogIntro(bool IsPlayingIntro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "SetDialogIntro");

	Params::UComp_Actor_Audio_Data_C_SetDialogIntro_Params Parms{};

	Parms.IsPlayingIntro = IsPlayingIntro;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.SetDialogOutro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlayingOutro                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::SetDialogOutro(bool IsPlayingOutro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "SetDialogOutro");

	Params::UComp_Actor_Audio_Data_C_SetDialogOutro_Params Parms{};

	Parms.IsPlayingOutro = IsPlayingOutro;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.RainStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Actor_Audio_Data_C::RainStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "RainStop");

	Params::UComp_Actor_Audio_Data_C_RainStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_Actor_Audio_Data_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "ReceiveBeginPlay");

	Params::UComp_Actor_Audio_Data_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DistanceFade_Exterior_Overlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Actor_Audio_Data_C::DistanceFade_Exterior_Overlap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "DistanceFade_Exterior_Overlap");

	Params::UComp_Actor_Audio_Data_C_DistanceFade_Exterior_Overlap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DistanceFadeInteriorOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Actor_Audio_Data_C::DistanceFadeInteriorOverlap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "DistanceFadeInteriorOverlap");

	Params::UComp_Actor_Audio_Data_C_DistanceFadeInteriorOverlap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.HasEnteredWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TURR                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::HasEnteredWater(bool TURR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "HasEnteredWater");

	Params::UComp_Actor_Audio_Data_C_HasEnteredWater_Params Parms{};

	Parms.TURR = TURR;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.HasEnteredWetArea
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TURR                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::HasEnteredWetArea(bool TURR)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "HasEnteredWetArea");

	Params::UComp_Actor_Audio_Data_C_HasEnteredWetArea_Params Parms{};

	Parms.TURR = TURR;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.WeatherChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeatherStateProperties     State                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void UComp_Actor_Audio_Data_C::WeatherChanged(const struct FWeatherStateProperties& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "WeatherChanged");

	Params::UComp_Actor_Audio_Data_C_WeatherChanged_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.RainStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Actor_Audio_Data_C::RainStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "RainStart");

	Params::UComp_Actor_Audio_Data_C_RainStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.Raining
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Actor_Audio_Data_C::Raining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "Raining");

	Params::UComp_Actor_Audio_Data_C_Raining_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.NotRaining
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Actor_Audio_Data_C::NotRaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "NotRaining");

	Params::UComp_Actor_Audio_Data_C_NotRaining_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DecreaseWetness
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Actor_Audio_Data_C::DecreaseWetness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "DecreaseWetness");

	Params::UComp_Actor_Audio_Data_C_DecreaseWetness_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.ExecuteUbergraph_Comp_Actor_Audio_Data
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_True_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_True                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeatherManagerIsRaining_bIsRaining                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherStateProperties     K2Node_CustomEvent_state                                         (ConstParm)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeatherManagerIsRaining_bIsRaining_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInside_IsInside                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::ExecuteUbergraph_Comp_Actor_Audio_Data(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool K2Node_CustomEvent_True_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool K2Node_CustomEvent_True, double CallFunc_FClamp_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_WeatherManagerIsRaining_bIsRaining, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FWeatherStateProperties& K2Node_CustomEvent_state, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_WeatherManagerIsRaining_bIsRaining_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsInside_IsInside, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "ExecuteUbergraph_Comp_Actor_Audio_Data");

	Params::UComp_Actor_Audio_Data_C_ExecuteUbergraph_Comp_Actor_Audio_Data_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.K2Node_CustomEvent_True_1 = K2Node_CustomEvent_True_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_True = K2Node_CustomEvent_True;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_WeatherManagerIsRaining_bIsRaining = CallFunc_WeatherManagerIsRaining_bIsRaining;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_state = K2Node_CustomEvent_state;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_WeatherManagerIsRaining_bIsRaining_1 = CallFunc_WeatherManagerIsRaining_bIsRaining_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsInside_IsInside = CallFunc_IsInside_IsInside;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


