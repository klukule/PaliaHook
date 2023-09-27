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


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.Get Voice Audio Component
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                AkComponent                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaVillagerCharacter*   K2Node_DynamicCast_AsValeria_Villager_Character                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AkGetComponent_ComponentCreated                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkGetComponent_AkComponent                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::Get_Voice_Audio_Component(class UAkComponent** AkComponent, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaVillagerCharacter* K2Node_DynamicCast_AsValeria_Villager_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "Get Voice Audio Component");

	Params::UComp_Actor_Audio_Data_C_Get_Voice_Audio_Component_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Villager_Character = K2Node_DynamicCast_AsValeria_Villager_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AkGetComponent_ComponentCreated = CallFunc_AkGetComponent_ComponentCreated;
	Parms.CallFunc_AkGetComponent_AkComponent = CallFunc_AkGetComponent_AkComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (AkComponent != nullptr)
		*AkComponent = Parms.AkComponent;

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.GetDialogBookend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Intro                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogueComponent*          Dialog                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               DialogEvent                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaVillagerCharacter*   Villager                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UDialogBookendAudioSet_C*    CurrentDialogSet                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_DialogBookendConfig>Config                                                           (Edit, BlueprintVisible)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_GetRandomDialogEvent_DialogEvent                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogBookendConfig CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaVillagerCharacter*   K2Node_DynamicCast_AsValeria_Villager_Character                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDialogueRequirementMetForWorldVillager_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_GetRandomDialogEvent_DialogEvent_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_DialogBookendConfig>K2Node_Select_Default                                            (ReferenceParm)

void UComp_Actor_Audio_Data_C::GetDialogBookend(bool Intro, class UDialogueComponent* Dialog, class AValeriaCharacter* Player, class UAkAudioEvent** DialogEvent, class AValeriaVillagerCharacter* Villager, class UDialogBookendAudioSet_C* CurrentDialogSet, const TArray<struct FStruct_DialogBookendConfig>& Config, bool CallFunc_IsLocallyControlled_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable, class UAkAudioEvent* CallFunc_GetRandomDialogEvent_DialogEvent, const struct FStruct_DialogBookendConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaVillagerCharacter* K2Node_DynamicCast_AsValeria_Villager_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDialogueRequirementMetForWorldVillager_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAkAudioEvent* CallFunc_GetRandomDialogEvent_DialogEvent_1, TArray<struct FStruct_DialogBookendConfig>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "GetDialogBookend");

	Params::UComp_Actor_Audio_Data_C_GetDialogBookend_Params Parms{};

	Parms.Intro = Intro;
	Parms.Dialog = Dialog;
	Parms.Player = Player;
	Parms.Villager = Villager;
	Parms.CurrentDialogSet = CurrentDialogSet;
	Parms.Config = Config;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetRandomDialogEvent_DialogEvent = CallFunc_GetRandomDialogEvent_DialogEvent;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Villager_Character = K2Node_DynamicCast_AsValeria_Villager_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDialogueRequirementMetForWorldVillager_ReturnValue = CallFunc_IsDialogueRequirementMetForWorldVillager_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetRandomDialogEvent_DialogEvent_1 = CallFunc_GetRandomDialogEvent_DialogEvent_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogEvent != nullptr)
		*DialogEvent = Parms.DialogEvent;

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


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DialogStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueComponent*          Diag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           PlayerParticipant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::DialogStarted(class UDialogueComponent* Diag, class AValeriaCharacter* PlayerParticipant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "DialogStarted");

	Params::UComp_Actor_Audio_Data_C_DialogStarted_Params Parms{};

	Parms.Diag = Diag;
	Parms.PlayerParticipant = PlayerParticipant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DialogEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDialogueComponent*          Diag                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           PlayerParticipant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::DialogEnded(class UDialogueComponent* Diag, class AValeriaCharacter* PlayerParticipant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "DialogEnded");

	Params::UComp_Actor_Audio_Data_C_DialogEnded_Params Parms{};

	Parms.Diag = Diag;
	Parms.PlayerParticipant = PlayerParticipant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.IntroAudioFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAkCallbackType         CallbackType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*             CallbackInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::IntroAudioFinished(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "IntroAudioFinished");

	Params::UComp_Actor_Audio_Data_C_IntroAudioFinished_Params Parms{};

	Parms.CallbackType = CallbackType;
	Parms.CallbackInfo = CallbackInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.OutroAudioFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAkCallbackType         CallbackType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*             CallbackInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::OutroAudioFinished(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "OutroAudioFinished");

	Params::UComp_Actor_Audio_Data_C_OutroAudioFinished_Params Parms{};

	Parms.CallbackType = CallbackType;
	Parms.CallbackInfo = CallbackInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.PlayDialogBookend
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Intro                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::PlayDialogBookend(bool Intro, class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "PlayDialogBookend");

	Params::UComp_Actor_Audio_Data_C_PlayDialogBookend_Params Parms{};

	Parms.Intro = Intro;
	Parms.AkEvent = AkEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.ExecuteUbergraph_Comp_Actor_Audio_Data
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_True_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_True                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeatherManagerIsRaining_bIsRaining                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherStateProperties     K2Node_CustomEvent_state                                         (ConstParm)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WeatherManagerIsRaining_bIsRaining_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInside_IsInside                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDialogueComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDialogueComponent*          K2Node_CustomEvent_diag_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_CustomEvent_playerParticipant_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_GetDialogBookend_DialogEvent                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDialogueComponent*          K2Node_CustomEvent_diag                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_CustomEvent_playerParticipant                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_GetDialogBookend_DialogEvent_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAkCallbackType         K2Node_CustomEvent_CallbackType_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*             K2Node_CustomEvent_CallbackInfo_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAkCallbackType         K2Node_CustomEvent_CallbackType                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*             K2Node_CustomEvent_CallbackInfo                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_Get_Voice_Audio_Component_AkComponent                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Intro                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_CustomEvent_AkEvent                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Select_Default                                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventComponentCallback_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Actor_Audio_Data_C::ExecuteUbergraph_Comp_Actor_Audio_Data(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool K2Node_CustomEvent_True_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_True, bool CallFunc_WeatherManagerIsRaining_bIsRaining, bool CallFunc_BooleanOR_ReturnValue_1, const struct FWeatherStateProperties& K2Node_CustomEvent_state, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_WeatherManagerIsRaining_bIsRaining_1, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsInside_IsInside, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UDialogueComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UDialogueComponent* K2Node_CustomEvent_diag_1, class AValeriaCharacter* K2Node_CustomEvent_playerParticipant_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAkAudioEvent* CallFunc_GetDialogBookend_DialogEvent, class UDialogueComponent* K2Node_CustomEvent_diag, class AValeriaCharacter* K2Node_CustomEvent_playerParticipant, class UAkAudioEvent* CallFunc_GetDialogBookend_DialogEvent_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, enum class EAkCallbackType K2Node_CustomEvent_CallbackType_1, class UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo_1, enum class EAkCallbackType K2Node_CustomEvent_CallbackType, class UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo, class UAkComponent* CallFunc_Get_Voice_Audio_Component_AkComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_Intro, class UAkAudioEvent* K2Node_CustomEvent_AkEvent, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_Select_Default, int32 CallFunc_AkEventComponentCallback_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Actor_Audio_Data_C", "ExecuteUbergraph_Comp_Actor_Audio_Data");

	Params::UComp_Actor_Audio_Data_C_ExecuteUbergraph_Comp_Actor_Audio_Data_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_True_1 = K2Node_CustomEvent_True_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CustomEvent_True = K2Node_CustomEvent_True;
	Parms.CallFunc_WeatherManagerIsRaining_bIsRaining = CallFunc_WeatherManagerIsRaining_bIsRaining;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CustomEvent_state = K2Node_CustomEvent_state;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_WeatherManagerIsRaining_bIsRaining_1 = CallFunc_WeatherManagerIsRaining_bIsRaining_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsInside_IsInside = CallFunc_IsInside_IsInside;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_diag_1 = K2Node_CustomEvent_diag_1;
	Parms.K2Node_CustomEvent_playerParticipant_1 = K2Node_CustomEvent_playerParticipant_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetDialogBookend_DialogEvent = CallFunc_GetDialogBookend_DialogEvent;
	Parms.K2Node_CustomEvent_diag = K2Node_CustomEvent_diag;
	Parms.K2Node_CustomEvent_playerParticipant = K2Node_CustomEvent_playerParticipant;
	Parms.CallFunc_GetDialogBookend_DialogEvent_1 = CallFunc_GetDialogBookend_DialogEvent_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.K2Node_CustomEvent_CallbackType_1 = K2Node_CustomEvent_CallbackType_1;
	Parms.K2Node_CustomEvent_CallbackInfo_1 = K2Node_CustomEvent_CallbackInfo_1;
	Parms.K2Node_CustomEvent_CallbackType = K2Node_CustomEvent_CallbackType;
	Parms.K2Node_CustomEvent_CallbackInfo = K2Node_CustomEvent_CallbackInfo;
	Parms.CallFunc_Get_Voice_Audio_Component_AkComponent = CallFunc_Get_Voice_Audio_Component_AkComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Intro = K2Node_CustomEvent_Intro;
	Parms.K2Node_CustomEvent_AkEvent = K2Node_CustomEvent_AkEvent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AkEventComponentCallback_ReturnValue = CallFunc_AkEventComponentCallback_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


