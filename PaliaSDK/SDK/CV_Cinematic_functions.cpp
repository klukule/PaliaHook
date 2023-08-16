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


// Function CV_Cinematic.CV_Cinematic_C.Set NPCVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_ValeriaVillagerCharacter_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValeriaVillagerCharacter_C*K2Node_DynamicCast_AsBP_Valeria_Villager_Character               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::Set_NPCVisibility(bool InIsVisible, int32 InTemp_int_Array_Index_Variable, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, TArray<class ABP_ValeriaVillagerCharacter_C*>& InCallFunc_GetAllActorsOfClass_OutActors, int32 InCallFunc_Array_Length_ReturnValue, class AActor* InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, class ABP_ValeriaVillagerCharacter_C* InK2Node_DynamicCast_AsBP_Valeria_Villager_Character, bool InK2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "Set NPCVisibility");

	Params::UCV_Cinematic_C_Set_NPCVisibility_Params Parms{};

	Parms.IsVisible = InIsVisible;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = InCallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Valeria_Villager_Character = InK2Node_DynamicCast_AsBP_Valeria_Villager_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.BindToSequencePlayerEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bind                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::BindToSequencePlayerEvents(bool InBind, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "BindToSequencePlayerEvents");

	Params::UCV_Cinematic_C_BindToSequencePlayerEvents_Params Parms{};

	Parms.Bind = InBind;
	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = InCallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = InCallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = InK2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = InK2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.HandleScriptStartRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>DesiredSequence                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class ULevelSequence>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftObjectReference_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::HandleScriptStartRequest(TSoftObjectPtr<class ULevelSequence> InDesiredSequence, bool InCallFunc_IsValid_ReturnValue, TSoftObjectPtr<class ULevelSequence> InCallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool InCallFunc_EqualEqual_SoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "HandleScriptStartRequest");

	Params::UCV_Cinematic_C_HandleScriptStartRequest_Params Parms{};

	Parms.DesiredSequence = InDesiredSequence;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = InCallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_EqualEqual_SoftObjectReference_ReturnValue = InCallFunc_EqualEqual_SoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnEndCinMus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeOfDayFilter            K2Node_MakeStruct_TimeOfDayFilter                                (NoDestructor)
// class UValeriaTimeManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithinTimeOfDayFilter_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::OnEndCinMus(bool InCallFunc_IsValid_ReturnValue, const struct FTimeOfDayFilter& InK2Node_MakeStruct_TimeOfDayFilter, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue, bool InCallFunc_IsWithinTimeOfDayFilter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnEndCinMus");

	Params::UCV_Cinematic_C_OnEndCinMus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_TimeOfDayFilter = InK2Node_MakeStruct_TimeOfDayFilter;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = InCallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsWithinTimeOfDayFilter_ReturnValue = InCallFunc_IsWithinTimeOfDayFilter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.FastForwardToEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DesiredTime                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQualifiedFrameTime         CallFunc_GetCurrentTime_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQualifiedFrameTime         CallFunc_GetEndTime_ReturnValue                                  (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackParamsK2Node_MakeStruct_MovieSceneSequencePlaybackParams               ()
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Time_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::FastForwardToEnd(double InDesiredTime, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue, const struct FQualifiedFrameTime& InCallFunc_GetCurrentTime_ReturnValue, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue_1, float InCallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue, const struct FQualifiedFrameTime& InCallFunc_GetEndTime_ReturnValue, float InCallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue_2, double InCallFunc_Subtract_DoubleDouble_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue, const struct FMovieSceneSequencePlaybackParams& InK2Node_MakeStruct_MovieSceneSequencePlaybackParams, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue_3, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, double InCallFunc_Greater_DoubleDouble_B_ImplicitCast, double InCallFunc_Subtract_DoubleDouble_A_ImplicitCast, float InK2Node_MakeStruct_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "FastForwardToEnd");

	Params::UCV_Cinematic_C_FastForwardToEnd_Params Parms{};

	Parms.DesiredTime = InDesiredTime;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = InCallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetCurrentTime_ReturnValue = InCallFunc_GetCurrentTime_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = InCallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue = InCallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = InCallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1 = InCallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_2 = InCallFunc_GetSequencePlayer_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = InCallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = InCallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackParams = InK2Node_MakeStruct_MovieSceneSequencePlaybackParams;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_3 = InCallFunc_GetSequencePlayer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = InCallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = InCallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_MakeStruct_Time_ImplicitCast = InK2Node_MakeStruct_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.SetAudioListener
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ListenerToCamera                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_Listener_Padding_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::SetAudioListener(bool InListenerToCamera, class APawn* InCallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UComp_Listener_Padding_C* InCallFunc_GetComponentByClass_ReturnValue, class AController* InCallFunc_GetController_ReturnValue, class APlayerController* InK2Node_DynamicCast_AsPlayer_Controller, bool InK2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "SetAudioListener");

	Params::UCV_Cinematic_C_SetAudioListener_Params Parms{};

	Parms.ListenerToCamera = InListenerToCamera;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = InCallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = InCallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = InK2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.Start Cinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCV_Cinematic_C::Start_Cinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "Start Cinematic");

	Params::UCV_Cinematic_C_Start_Cinematic_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnCinBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCV_Cinematic_C::OnCinBegin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnCinBegin");

	Params::UCV_Cinematic_C_OnCinBegin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnCinEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCV_Cinematic_C::OnCinEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnCinEnd");

	Params::UCV_Cinematic_C_OnCinEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.Stop Cinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCV_Cinematic_C::Stop_Cinematic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "Stop Cinematic");

	Params::UCV_Cinematic_C_Stop_Cinematic_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UCV_Cinematic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "ReceiveBeginPlay");

	Params::UCV_Cinematic_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnSkipCutsceneCnsleCmd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCV_Cinematic_C::OnSkipCutsceneCnsleCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnSkipCutsceneCnsleCmd");

	Params::UCV_Cinematic_C_OnSkipCutsceneCnsleCmd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "ReceiveEndPlay");

	Params::UCV_Cinematic_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = InEndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.BeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::BeginOverlap(class AActor* InOverlappedActor, class AActor* InOtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "BeginOverlap");

	Params::UCV_Cinematic_C_BeginOverlap_Params Parms{};

	Parms.OverlappedActor = InOverlappedActor;
	Parms.OtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnScriptStartCinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>LevelSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void UCV_Cinematic_C::OnScriptStartCinematic(TSoftObjectPtr<class ULevelSequence> InLevelSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnScriptStartCinematic");

	Params::UCV_Cinematic_C_OnScriptStartCinematic_Params Parms{};

	Parms.LevelSequence = InLevelSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.ExecuteUbergraph_CV_Cinematic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterStateMachineComponent*CallFunc_GetCSM_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              CallFunc_GetSequence_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    K2Node_DynamicCast_AsValeria_Player_Controller                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Cinematic_WIP_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameInstance*        K2Node_DynamicCast_AsValeria_Game_Instance                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameInstance*        K2Node_DynamicCast_AsValeria_Game_Instance_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OverlappedActor                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTagValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventGlobal_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValEnvironmentManager*      CallFunc_GetCurrentEnvManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class ULevelSequence>K2Node_CustomEvent_LevelSequence                                 (UObjectWrapper, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_7                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_3                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Client_TryUnequip_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_8                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_9                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    K2Node_DynamicCast_AsValeria_Player_Controller_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    K2Node_DynamicCast_AsValeria_Player_Controller_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::ExecuteUbergraph_CV_Cinematic(int32 InEntryPoint, int32 InTemp_int_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InTemp_int_Array_Index_Variable, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue, class APlayerController* InCallFunc_GetPlayerController_ReturnValue, class APawn* InCallFunc_K2_GetPawn_ReturnValue, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UCharacterStateMachineComponent* InCallFunc_GetCSM_ReturnValue, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_2, class UUserWidget* InCallFunc_Create_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class ULevelSequence* InCallFunc_GetSequence_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_3, class AValeriaPlayerController* InK2Node_DynamicCast_AsValeria_Player_Controller, bool InK2Node_DynamicCast_bSuccess_1, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_4, class APawn* InCallFunc_K2_GetPawn_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_1, bool InK2Node_DynamicCast_bSuccess_2, int32 InTemp_int_Array_Index_Variable_1, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_5, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_6, class APawn* InCallFunc_K2_GetPawn_ReturnValue_2, class UWBP_Cinematic_WIP_C* InCallFunc_Create_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_2, bool InK2Node_DynamicCast_bSuccess_3, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1, class UClass* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, TArray<class UUserWidget*>& InCallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* InCallFunc_Array_Get_Item_1, class UClass* InCallFunc_Array_Get_Item_2, TArray<class UUserWidget*>& InCallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 InCallFunc_Array_Length_ReturnValue_1, int32 InCallFunc_Array_Length_ReturnValue_2, int32 InCallFunc_Array_Length_ReturnValue_3, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance, bool InK2Node_DynamicCast_bSuccess_4, enum class EEndPlayReason InK2Node_Event_EndPlayReason, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue_1, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance_1, bool InK2Node_DynamicCast_bSuccess_5, class AActor* InK2Node_Event_OverlappedActor, class AActor* InK2Node_Event_OtherActor, int32 InTemp_int_Loop_Counter_Variable, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_3, bool InK2Node_DynamicCast_bSuccess_6, bool InCallFunc_IsLocallyControlled_ReturnValue, int32 InCallFunc_GetTagValue_ReturnValue, bool InCallFunc_Greater_IntInt_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue_1, int32 InCallFunc_Add_IntInt_ReturnValue_1, int32 InCallFunc_AkEventGlobal_ReturnValue, class UValeriaWeather* InCallFunc_GetWorldSubsystem_ReturnValue, class AValEnvironmentManager* InCallFunc_GetCurrentEnvManager_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, bool InCallFunc_IsValid_ReturnValue_3, int32 InTemp_int_Variable_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, int32 InCallFunc_Add_IntInt_ReturnValue_2, class UUserWidget* InCallFunc_Array_Get_Item_3, bool InCallFunc_Less_IntInt_ReturnValue_2, TSoftObjectPtr<class ULevelSequence> InK2Node_CustomEvent_LevelSequence, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_7, int32 InTemp_int_Loop_Counter_Variable_1, class APawn* InCallFunc_K2_GetPawn_ReturnValue_3, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_4, bool InK2Node_DynamicCast_bSuccess_7, bool InCallFunc_Less_IntInt_ReturnValue_3, bool InCallFunc_Client_TryUnequip_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue_3, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_8, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_9, class AValeriaPlayerController* InK2Node_DynamicCast_AsValeria_Player_Controller_1, bool InK2Node_DynamicCast_bSuccess_8, class AValeriaPlayerController* InK2Node_DynamicCast_AsValeria_Player_Controller_2, bool InK2Node_DynamicCast_bSuccess_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "ExecuteUbergraph_CV_Cinematic");

	Params::UCV_Cinematic_C_ExecuteUbergraph_CV_Cinematic_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.Temp_int_Variable = InTemp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = InCallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = InCallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = InCallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = InCallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCSM_ReturnValue = InCallFunc_GetCSM_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue = InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = InCallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue = InCallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSequence_ReturnValue = InCallFunc_GetSequence_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = InCallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller = InK2Node_DynamicCast_AsValeria_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = InCallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = InCallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Character_1 = InK2Node_DynamicCast_AsValeria_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = InK2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Array_Index_Variable_1 = InTemp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = InCallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = InCallFunc_GetPlayerController_ReturnValue_6;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = InCallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_1 = InCallFunc_Create_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Character_2 = InK2Node_DynamicCast_AsValeria_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = InK2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1 = InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = InCallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_1 = InCallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = InCallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = InCallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = InCallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = InCallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = InCallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = InCallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance = InK2Node_DynamicCast_AsValeria_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_4 = InK2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_EndPlayReason = InK2Node_Event_EndPlayReason;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = InCallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance_1 = InK2Node_DynamicCast_AsValeria_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = InK2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_Event_OverlappedActor = InK2Node_Event_OverlappedActor;
	Parms.K2Node_Event_OtherActor = InK2Node_Event_OtherActor;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsValeria_Character_3 = InK2Node_DynamicCast_AsValeria_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = InK2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetTagValue_ReturnValue = InCallFunc_GetTagValue_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = InCallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = InCallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = InCallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_AkEventGlobal_ReturnValue = InCallFunc_AkEventGlobal_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = InCallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentEnvManager_ReturnValue = InCallFunc_GetCurrentEnvManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_3 = InCallFunc_IsValid_ReturnValue_3;
	Parms.Temp_int_Variable_1 = InTemp_int_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = InCallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = InCallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = InCallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_LevelSequence = InK2Node_CustomEvent_LevelSequence;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = InCallFunc_GetPlayerController_ReturnValue_7;
	Parms.Temp_int_Loop_Counter_Variable_1 = InTemp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = InCallFunc_K2_GetPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsValeria_Character_4 = InK2Node_DynamicCast_AsValeria_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = InK2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = InCallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Client_TryUnequip_ReturnValue = InCallFunc_Client_TryUnequip_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = InCallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = InCallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = InCallFunc_GetPlayerController_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller_1 = InK2Node_DynamicCast_AsValeria_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = InK2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller_2 = InK2Node_DynamicCast_AsValeria_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = InK2Node_DynamicCast_bSuccess_9;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnCinematicBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCV_Cinematic_C::OnCinematicBegin__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnCinematicBegin__DelegateSignature");

	Params::UCV_Cinematic_C_OnCinematicBegin__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnCinematicEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCV_Cinematic_C::OnCinematicEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnCinematicEnded__DelegateSignature");

	Params::UCV_Cinematic_C_OnCinematicEnded__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
