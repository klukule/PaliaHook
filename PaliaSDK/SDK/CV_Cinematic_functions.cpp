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

void UCV_Cinematic_C::BindToSequencePlayerEvents(bool Bind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "BindToSequencePlayerEvents");

	Params::UCV_Cinematic_C_BindToSequencePlayerEvents_Params Parms{};

	Parms.Bind = Bind;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = CallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.HandleScriptStartRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>DesiredSequence                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class ULevelSequence>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftObjectReference_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::HandleScriptStartRequest(TSoftObjectPtr<class ULevelSequence> DesiredSequence, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class ULevelSequence> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "HandleScriptStartRequest");

	Params::UCV_Cinematic_C_HandleScriptStartRequest_Params Parms{};

	Parms.DesiredSequence = DesiredSequence;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_EqualEqual_SoftObjectReference_ReturnValue = CallFunc_EqualEqual_SoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnEndCinMus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimeOfDayFilter            K2Node_MakeStruct_TimeOfDayFilter                                (NoDestructor)
// class UValeriaTimeManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithinTimeOfDayFilter_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::OnEndCinMus(bool CallFunc_IsValid_ReturnValue, const struct FTimeOfDayFilter& K2Node_MakeStruct_TimeOfDayFilter, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsWithinTimeOfDayFilter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnEndCinMus");

	Params::UCV_Cinematic_C_OnEndCinMus_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_TimeOfDayFilter = K2Node_MakeStruct_TimeOfDayFilter;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsWithinTimeOfDayFilter_ReturnValue = CallFunc_IsWithinTimeOfDayFilter_ReturnValue;

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

void UCV_Cinematic_C::FastForwardToEnd(double DesiredTime, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, const struct FQualifiedFrameTime& CallFunc_GetCurrentTime_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, float CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue, const struct FQualifiedFrameTime& CallFunc_GetEndTime_ReturnValue, float CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "FastForwardToEnd");

	Params::UCV_Cinematic_C_FastForwardToEnd_Params Parms{};

	Parms.DesiredTime = DesiredTime;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetCurrentTime_ReturnValue = CallFunc_GetCurrentTime_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = CallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue = CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1 = CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_2 = CallFunc_GetSequencePlayer_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackParams = K2Node_MakeStruct_MovieSceneSequencePlaybackParams;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_3 = CallFunc_GetSequencePlayer_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_B_ImplicitCast = CallFunc_Greater_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_MakeStruct_Time_ImplicitCast = K2Node_MakeStruct_Time_ImplicitCast;

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

void UCV_Cinematic_C::SetAudioListener(bool ListenerToCamera, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UComp_Listener_Padding_C* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "SetAudioListener");

	Params::UCV_Cinematic_C_SetAudioListener_Params Parms{};

	Parms.ListenerToCamera = ListenerToCamera;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

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

void UCV_Cinematic_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "ReceiveEndPlay");

	Params::UCV_Cinematic_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.BeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCV_Cinematic_C::BeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "BeginOverlap");

	Params::UCV_Cinematic_C_BeginOverlap_Params Parms{};

	Parms.OverlappedActor = OverlappedActor;
	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.OnScriptStartCinematic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class ULevelSequence>LevelSequence                                                    (BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void UCV_Cinematic_C::OnScriptStartCinematic(TSoftObjectPtr<class ULevelSequence> LevelSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "OnScriptStartCinematic");

	Params::UCV_Cinematic_C_OnScriptStartCinematic_Params Parms{};

	Parms.LevelSequence = LevelSequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CV_Cinematic.CV_Cinematic_C.ExecuteUbergraph_CV_Cinematic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// class UValeriaWeather*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValEnvironmentManager*      CallFunc_GetCurrentEnvManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_2                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_6                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Cinematic_WIP_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// TArray<class UUserWidget*>         CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameInstance*        K2Node_DynamicCast_AsValeria_Game_Instance                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameInstance*        K2Node_DynamicCast_AsValeria_Game_Instance_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OverlappedActor                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTagValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventGlobal_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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

void UCV_Cinematic_C::ExecuteUbergraph_CV_Cinematic(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ULevelSequence* CallFunc_GetSequence_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_1, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_2, bool K2Node_DynamicCast_bSuccess_3, class UWBP_Cinematic_WIP_C* CallFunc_Create_ReturnValue_1, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1, class UClass* CallFunc_Array_Get_Item, class UClass* CallFunc_Array_Get_Item_1, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance, bool K2Node_DynamicCast_bSuccess_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_5, class AActor* K2Node_Event_OverlappedActor, class AActor* K2Node_Event_OtherActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_GetTagValue_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UUserWidget* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, TSoftObjectPtr<class ULevelSequence> K2Node_CustomEvent_LevelSequence, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, int32 Temp_int_Loop_Counter_Variable_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_4, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Client_TryUnequip_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_8, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CV_Cinematic_C", "ExecuteUbergraph_CV_Cinematic");

	Params::UCV_Cinematic_C_ExecuteUbergraph_CV_Cinematic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCSM_ReturnValue = CallFunc_GetCSM_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue = CallFunc_GetValeriaCharacterMovementComponent_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSequence_ReturnValue = CallFunc_GetSequence_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller = K2Node_DynamicCast_AsValeria_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentEnvManager_ReturnValue = CallFunc_GetCurrentEnvManager_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Character_1 = K2Node_DynamicCast_AsValeria_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_GetPawn_ReturnValue_2 = CallFunc_K2_GetPawn_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_6 = CallFunc_GetPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsValeria_Character_2 = K2Node_DynamicCast_AsValeria_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1 = CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance = K2Node_DynamicCast_AsValeria_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance_1 = K2Node_DynamicCast_AsValeria_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_Event_OverlappedActor = K2Node_Event_OverlappedActor;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsValeria_Character_3 = K2Node_DynamicCast_AsValeria_Character_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetTagValue_ReturnValue = CallFunc_GetTagValue_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_LevelSequence = K2Node_CustomEvent_LevelSequence;
	Parms.CallFunc_GetPlayerController_ReturnValue_7 = CallFunc_GetPlayerController_ReturnValue_7;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_3 = CallFunc_K2_GetPawn_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsValeria_Character_4 = K2Node_DynamicCast_AsValeria_Character_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Client_TryUnequip_ReturnValue = CallFunc_Client_TryUnequip_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_8 = CallFunc_GetPlayerController_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue_9 = CallFunc_GetPlayerController_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller_1 = K2Node_DynamicCast_AsValeria_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller_2 = K2Node_DynamicCast_AsValeria_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;

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
