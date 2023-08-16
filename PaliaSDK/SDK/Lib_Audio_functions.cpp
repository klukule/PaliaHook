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


// Function Lib_Audio.Lib_Audio_C.GetMusicManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MusicManager_C*          AsBP_Music_Manager                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameInstance*        K2Node_DynamicCast_AsValeria_Game_Instance                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicManager*               CallFunc_GetMusicManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MusicManager_C*          K2Node_DynamicCast_AsBP_Music_Manager                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::GetMusicManager(class UObject* In__WorldContext, class UBP_MusicManager_C** InAsBP_Music_Manager, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance, bool InK2Node_DynamicCast_bSuccess, class UMusicManager* InCallFunc_GetMusicManager_ReturnValue, class UBP_MusicManager_C* InK2Node_DynamicCast_AsBP_Music_Manager, bool InK2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "GetMusicManager");

	Params::ULib_Audio_C_GetMusicManager_Params Parms{};

	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = InCallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance = InK2Node_DynamicCast_AsValeria_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMusicManager_ReturnValue = InCallFunc_GetMusicManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Music_Manager = InK2Node_DynamicCast_AsBP_Music_Manager;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InAsBP_Music_Manager != nullptr)
		*InAsBP_Music_Manager = Parms.AsBP_Music_Manager;

}


// Function Lib_Audio.Lib_Audio_C.Try to Propagate Rtpcs
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_RtpcTracker_C*         Tracker                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_RtpcTracker_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::Try_to_Propagate_Rtpcs(class AActor* InActor, class UAkComponent* InAkComponent, class UObject* In__WorldContext, bool* InSuccess, class UComp_RtpcTracker_C* InTracker, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, class UComp_RtpcTracker_C* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Try to Propagate Rtpcs");

	Params::ULib_Audio_C_Try_to_Propagate_Rtpcs_Params Parms{};

	Parms.Actor = InActor;
	Parms.AkComponent = InAkComponent;
	Parms.__WorldContext = In__WorldContext;
	Parms.Tracker = InTracker;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (InSuccess != nullptr)
		*InSuccess = Parms.Success;

}


// Function Lib_Audio.Lib_Audio_C.AkGetComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        AttachPointName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachLocation         LocationType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAutoDestroy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ComponentCreated                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_VAkGetComponent_ComponentCreated                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_VAkGetComponent_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkGetComponent(class USceneComponent* InAttachToComponent, class FName InAttachPointName, const struct FVector& InLocation, enum class EAttachLocation InLocationType, bool InbAutoDestroy, class UObject* In__WorldContext, bool* InComponentCreated, class UAkComponent** InAkComponent, bool InCallFunc_VAkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_VAkGetComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkGetComponent");

	Params::ULib_Audio_C_AkGetComponent_Params Parms{};

	Parms.AttachToComponent = InAttachToComponent;
	Parms.AttachPointName = InAttachPointName;
	Parms.Location = InLocation;
	Parms.LocationType = InLocationType;
	Parms.bAutoDestroy = InbAutoDestroy;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_VAkGetComponent_ComponentCreated = InCallFunc_VAkGetComponent_ComponentCreated;
	Parms.CallFunc_VAkGetComponent_ReturnValue = InCallFunc_VAkGetComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InComponentCreated != nullptr)
		*InComponentCreated = Parms.ComponentCreated;

	if (InAkComponent != nullptr)
		*InAkComponent = Parms.AkComponent;

}


// Function Lib_Audio.Lib_Audio_C.AkExecuteActionOnPlayingID
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAkActionOnEventType    ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayingID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TransitionDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAkCurveInterpolation   FadeCurve                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkExecuteActionOnPlayingID(enum class EAkActionOnEventType InActionType, int32 InPlayingID, int32 InTransitionDuration, enum class EAkCurveInterpolation InFadeCurve, class UObject* In__WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkExecuteActionOnPlayingID");

	Params::ULib_Audio_C_AkExecuteActionOnPlayingID_Params Parms{};

	Parms.ActionType = InActionType;
	Parms.PlayingID = InPlayingID;
	Parms.TransitionDuration = InTransitionDuration;
	Parms.FadeCurve = InFadeCurve;
	Parms.__WorldContext = In__WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lib_Audio.Lib_Audio_C.IsInside
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsInside                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Inside                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkRoomComponent*            CallFunc_GetAkAudioRoomAtLocation_HighestPriorityRoom            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkRoomComponent*>    CallFunc_GetAkAudioRoomAtLocation_AllRooms                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAkSpatialAudioVolume*       K2Node_DynamicCast_AsAk_Spatial_Audio_Volume                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UComp_CV_Local_RTPC_C*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_CV_Local_RTPC_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::IsInside(const struct FVector& InLocation, class UObject* In__WorldContext, bool* InIsInside, bool InInside, bool InTemp_bool_True_if_break_was_hit_Variable, class UAkRoomComponent* InCallFunc_GetAkAudioRoomAtLocation_HighestPriorityRoom, TArray<class UAkRoomComponent*>& InCallFunc_GetAkAudioRoomAtLocation_AllRooms, bool InCallFunc_IsValid_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, class AAkSpatialAudioVolume* InK2Node_DynamicCast_AsAk_Spatial_Audio_Volume, bool InK2Node_DynamicCast_bSuccess, TArray<class UComp_CV_Local_RTPC_C*>& InCallFunc_K2_GetComponentsByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, int32 InTemp_int_Array_Index_Variable, class UComp_CV_Local_RTPC_C* InCallFunc_Array_Get_Item, bool InCallFunc_EqualEqual_DoubleDouble_ReturnValue, bool InCallFunc_EqualEqual_ObjectObject_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "IsInside");

	Params::ULib_Audio_C_IsInside_Params Parms{};

	Parms.Location = InLocation;
	Parms.__WorldContext = In__WorldContext;
	Parms.Inside = InInside;
	Parms.Temp_bool_True_if_break_was_hit_Variable = InTemp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetAkAudioRoomAtLocation_HighestPriorityRoom = InCallFunc_GetAkAudioRoomAtLocation_HighestPriorityRoom;
	Parms.CallFunc_GetAkAudioRoomAtLocation_AllRooms = InCallFunc_GetAkAudioRoomAtLocation_AllRooms;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Spatial_Audio_Volume = InK2Node_DynamicCast_AsAk_Spatial_Audio_Volume;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = InCallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = InCallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = InCallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = InCallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InIsInside != nullptr)
		*InIsInside = Parms.IsInside;

}


// Function Lib_Audio.Lib_Audio_C.IsWet
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsWet                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInside_IsInside                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherStateProperties     CallFunc_GetCurrentWorldWeatherState_ReturnValue                 ()
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::IsWet(const struct FVector& InLocation, class UObject* In__WorldContext, bool* InIsWet, class UValeriaWeather* InCallFunc_GetWorldSubsystem_ReturnValue, bool InCallFunc_IsInside_IsInside, const struct FWeatherStateProperties& InCallFunc_GetCurrentWorldWeatherState_ReturnValue, bool InCallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "IsWet");

	Params::ULib_Audio_C_IsWet_Params Parms{};

	Parms.Location = InLocation;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = InCallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsInside_IsInside = InCallFunc_IsInside_IsInside;
	Parms.CallFunc_GetCurrentWorldWeatherState_ReturnValue = InCallFunc_GetCurrentWorldWeatherState_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = InCallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InIsWet != nullptr)
		*InIsWet = Parms.IsWet;

}


// Function Lib_Audio.Lib_Audio_C.AkCulledAssignAndStart
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkCulledComponent*          AkCulledComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             LocallyControlled                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkCulledAssignAndStart(class UAkAudioEvent* InAkEvent, class UAkCulledComponent* InAkCulledComponent, class UObject* In__WorldContext, double InLocallyControlled, bool InCallFunc_IsDedicatedServer_ReturnValue, bool InCallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkCulledAssignAndStart");

	Params::ULib_Audio_C_AkCulledAssignAndStart_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.AkCulledComponent = InAkCulledComponent;
	Parms.__WorldContext = In__WorldContext;
	Parms.LocallyControlled = InLocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lib_Audio.Lib_Audio_C.GetAkAudioRoomAtLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkRoomComponent*            HighestPriorityRoom                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkRoomComponent*>    AllRooms                                                         (Parm, OutParm, ContainsInstancedReference)
// TArray<class UAkRoomComponent*>    LRoomComponents                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// class UAkRoomComponent*            LHighestPriorityRoom                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             LHighestPriority                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkRoomComponent*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class UPrimitiveComponent*> CallFunc_SphereOverlapComponents_OutComponents                   (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_SphereOverlapComponents_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkRoomComponent*            K2Node_DynamicCast_AsAk_Room_Component                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaSpatialAudioVolume*  K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LHighestPriority_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::GetAkAudioRoomAtLocation(const struct FVector& InLocation, class UObject* In__WorldContext, class UAkRoomComponent** InHighestPriorityRoom, TArray<class UAkRoomComponent*>* InAllRooms, const TArray<class UAkRoomComponent*>& InLRoomComponents, class UAkRoomComponent* InLHighestPriorityRoom, double InLHighestPriority, int32 InTemp_int_Loop_Counter_Variable, int32 InTemp_int_Loop_Counter_Variable_1, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue_1, int32 InTemp_int_Loop_Counter_Variable_2, int32 InCallFunc_Add_IntInt_ReturnValue_2, int32 InTemp_int_Array_Index_Variable, int32 InTemp_int_Array_Index_Variable_1, int32 InTemp_int_Array_Index_Variable_2, int32 InTemp_int_Loop_Counter_Variable_3, int32 InCallFunc_Add_IntInt_ReturnValue_3, int32 InTemp_int_Array_Index_Variable_3, class UAkRoomComponent* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& InTemp_object_Variable, TArray<class AActor*>& InTemp_object_Variable_1, TArray<enum class EObjectTypeQuery>& InK2Node_MakeArray_Array, TArray<class UPrimitiveComponent*>& InCallFunc_SphereOverlapComponents_OutComponents, bool InCallFunc_SphereOverlapComponents_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue, class UPrimitiveComponent* InCallFunc_Array_Get_Item_1, TArray<class USceneComponent*>& InCallFunc_GetChildrenComponents_Children, int32 InCallFunc_Array_Length_ReturnValue_1, class USceneComponent* InCallFunc_Array_Get_Item_2, bool InCallFunc_Less_IntInt_ReturnValue_1, class UAkRoomComponent* InK2Node_DynamicCast_AsAk_Room_Component, bool InK2Node_DynamicCast_bSuccess, int32 InCallFunc_Array_AddUnique_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue_2, TArray<class AActor*>& InCallFunc_SphereOverlapActors_OutActors, bool InCallFunc_SphereOverlapActors_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue_2, class AActor* InCallFunc_Array_Get_Item_3, class AValeriaSpatialAudioVolume* InK2Node_DynamicCast_AsValeria_Spatial_Audio_Volume, bool InK2Node_DynamicCast_bSuccess_1, int32 InCallFunc_Array_Length_ReturnValue_3, bool InCallFunc_Less_IntInt_ReturnValue_3, int32 InCallFunc_Array_AddUnique_ReturnValue_1, double InCallFunc_Greater_DoubleDouble_A_ImplicitCast, double InK2Node_VariableSet_LHighestPriority_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "GetAkAudioRoomAtLocation");

	Params::ULib_Audio_C_GetAkAudioRoomAtLocation_Params Parms{};

	Parms.Location = InLocation;
	Parms.__WorldContext = In__WorldContext;
	Parms.LRoomComponents = InLRoomComponents;
	Parms.LHighestPriorityRoom = InLHighestPriorityRoom;
	Parms.LHighestPriority = InLHighestPriority;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = InTemp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = InCallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = InTemp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = InCallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = InTemp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = InTemp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = InTemp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = InCallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = InTemp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.Temp_object_Variable_1 = InTemp_object_Variable_1;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_SphereOverlapComponents_OutComponents = InCallFunc_SphereOverlapComponents_OutComponents;
	Parms.CallFunc_SphereOverlapComponents_ReturnValue = InCallFunc_SphereOverlapComponents_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = InCallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = InCallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetChildrenComponents_Children = InCallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Length_ReturnValue_1 = InCallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = InCallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = InCallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAk_Room_Component = InK2Node_DynamicCast_AsAk_Room_Component;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = InCallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = InCallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_SphereOverlapActors_OutActors = InCallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = InCallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = InCallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = InCallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume = InK2Node_DynamicCast_AsValeria_Spatial_Audio_Volume;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = InCallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = InCallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = InCallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = InCallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_LHighestPriority_ImplicitCast = InK2Node_VariableSet_LHighestPriority_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InHighestPriorityRoom != nullptr)
		*InHighestPriorityRoom = Parms.HighestPriorityRoom;

	if (InAllRooms != nullptr)
		*InAllRooms = Parms.AllRooms;

}


// Function Lib_Audio.Lib_Audio_C.PlayTempBeep
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Global                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildIsShipping_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkEventLocation_AkComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventLocation_Playing_ID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventGlobal_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::PlayTempBeep(bool InGlobal, const struct FVector& InLocation, class UObject* In__WorldContext, bool InCallFunc_BuildIsShipping_ReturnValue, class UAkComponent* InCallFunc_AkEventLocation_AkComponent, int32 InCallFunc_AkEventLocation_Playing_ID, int32 InCallFunc_AkEventGlobal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "PlayTempBeep");

	Params::ULib_Audio_C_PlayTempBeep_Params Parms{};

	Parms.Global = InGlobal;
	Parms.Location = InLocation;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_BuildIsShipping_ReturnValue = InCallFunc_BuildIsShipping_ReturnValue;
	Parms.CallFunc_AkEventLocation_AkComponent = InCallFunc_AkEventLocation_AkComponent;
	Parms.CallFunc_AkEventLocation_Playing_ID = InCallFunc_AkEventLocation_Playing_ID;
	Parms.CallFunc_AkEventGlobal_ReturnValue = InCallFunc_AkEventGlobal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Lib_Audio.Lib_Audio_C.LoadAudioUserSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkStateValue*               Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkStateValue*               Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkStateValue*               Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAudioMixProfiles       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameUserSettings*    CallFunc_GetValeriaGameUserSettings_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkStateValue*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AkSetRTPC_Value_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AkSetRTPC_Value_ImplicitCast_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AkSetRTPC_Value_ImplicitCast_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_AkSetRTPC_Value_ImplicitCast_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::LoadAudioUserSettings(class UObject* In__WorldContext, class UAkStateValue* InTemp_object_Variable, class UAkStateValue* InTemp_object_Variable_1, class UAkStateValue* InTemp_object_Variable_2, enum class EAudioMixProfiles InTemp_byte_Variable, class UValeriaGameUserSettings* InCallFunc_GetValeriaGameUserSettings_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class UAkStateValue* InK2Node_Select_Default, double InCallFunc_AkSetRTPC_Value_ImplicitCast, double InCallFunc_AkSetRTPC_Value_ImplicitCast_1, double InCallFunc_AkSetRTPC_Value_ImplicitCast_2, double InCallFunc_AkSetRTPC_Value_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "LoadAudioUserSettings");

	Params::ULib_Audio_C_LoadAudioUserSettings_Params Parms{};

	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.Temp_object_Variable_1 = InTemp_object_Variable_1;
	Parms.Temp_object_Variable_2 = InTemp_object_Variable_2;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.CallFunc_GetValeriaGameUserSettings_ReturnValue = InCallFunc_GetValeriaGameUserSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_AkSetRTPC_Value_ImplicitCast = InCallFunc_AkSetRTPC_Value_ImplicitCast;
	Parms.CallFunc_AkSetRTPC_Value_ImplicitCast_1 = InCallFunc_AkSetRTPC_Value_ImplicitCast_1;
	Parms.CallFunc_AkSetRTPC_Value_ImplicitCast_2 = InCallFunc_AkSetRTPC_Value_ImplicitCast_2;
	Parms.CallFunc_AkSetRTPC_Value_ImplicitCast_3 = InCallFunc_AkSetRTPC_Value_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lib_Audio.Lib_Audio_C.Ak Music Switch
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreTimeOfDay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_MusicManager_C*          CallFunc_GetMusicManager_AsBP_Music_Manager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_Listener_Padding_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::Ak_Music_Switch(class UAkSwitchValue* InSwitchValue, bool InIgnoreTimeOfDay, class UObject* In__WorldContext, bool InCallFunc_IsDedicatedServer_ReturnValue, class APlayerController* InCallFunc_GetPlayerController_ReturnValue, class APawn* InCallFunc_K2_GetPawn_ReturnValue, class UBP_MusicManager_C* InCallFunc_GetMusicManager_AsBP_Music_Manager, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, class UComp_Listener_Padding_C* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Ak Music Switch");

	Params::ULib_Audio_C_Ak_Music_Switch_Params Parms{};

	Parms.SwitchValue = InSwitchValue;
	Parms.IgnoreTimeOfDay = InIgnoreTimeOfDay;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = InCallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = InCallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetMusicManager_AsBP_Music_Manager = InCallFunc_GetMusicManager_AsBP_Music_Manager;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lib_Audio.Lib_Audio_C.FindClosestVector
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             InVectors                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     ReferencePoint                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ClosestVector                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             IterateDistance                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ClosestInd                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ClosestVect                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::FindClosestVector(TArray<struct FVector>& InInVectors, const struct FVector& InReferencePoint, class UObject* In__WorldContext, struct FVector* InClosestVector, int32* InIndex, double InIterateDistance, int32 InClosestInd, const struct FVector& InClosestVect, double InDistance, int32 InTemp_int_Array_Index_Variable, int32 InCallFunc_Array_Length_ReturnValue, const struct FVector& InCallFunc_Array_Get_Item, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_Less_DoubleDouble_ReturnValue, double InCallFunc_Vector_Distance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "FindClosestVector");

	Params::ULib_Audio_C_FindClosestVector_Params Parms{};

	Parms.InVectors = InInVectors;
	Parms.ReferencePoint = InReferencePoint;
	Parms.__WorldContext = In__WorldContext;
	Parms.IterateDistance = InIterateDistance;
	Parms.ClosestInd = InClosestInd;
	Parms.ClosestVect = InClosestVect;
	Parms.Distance = InDistance;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = InCallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = InCallFunc_Vector_Distance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InClosestVector != nullptr)
		*InClosestVector = Parms.ClosestVector;

	if (InIndex != nullptr)
		*InIndex = Parms.Index;

}


// Function Lib_Audio.Lib_Audio_C.GetDopplerPitchMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Listener                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             DopplerIntensity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             PitchMultiplier                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FinalPitchScale                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PitchScale                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DopplerPitchScale                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ListenerVelocityMagnitude                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SourceVelocityMagnitude                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::GetDopplerPitchMultiplier(class AActor* InListener, class AActor* InObject, double InDopplerIntensity, class UObject* In__WorldContext, double* InPitchMultiplier, double InFinalPitchScale, double InPitchScale, double InDopplerPitchScale, double InListenerVelocityMagnitude, double InSourceVelocityMagnitude, double InCallFunc_Divide_DoubleDouble_ReturnValue, double InCallFunc_Subtract_DoubleDouble_ReturnValue, double InCallFunc_Subtract_DoubleDouble_ReturnValue_1, double InCallFunc_Multiply_DoubleDouble_ReturnValue, double InCallFunc_Divide_DoubleDouble_ReturnValue_1, double InCallFunc_Add_DoubleDouble_ReturnValue, double InCallFunc_Subtract_DoubleDouble_ReturnValue_2, const struct FVector& InCallFunc_GetVelocity_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& InCallFunc_GetVelocity_ReturnValue_1, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& InCallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& InCallFunc_Normal_ReturnValue, double InCallFunc_Dot_VectorVector_ReturnValue, double InCallFunc_Dot_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "GetDopplerPitchMultiplier");

	Params::ULib_Audio_C_GetDopplerPitchMultiplier_Params Parms{};

	Parms.Listener = InListener;
	Parms.Object = InObject;
	Parms.DopplerIntensity = InDopplerIntensity;
	Parms.__WorldContext = In__WorldContext;
	Parms.FinalPitchScale = InFinalPitchScale;
	Parms.PitchScale = InPitchScale;
	Parms.DopplerPitchScale = InDopplerPitchScale;
	Parms.ListenerVelocityMagnitude = InListenerVelocityMagnitude;
	Parms.SourceVelocityMagnitude = InSourceVelocityMagnitude;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = InCallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = InCallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = InCallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = InCallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = InCallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = InCallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = InCallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetVelocity_ReturnValue = InCallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = InCallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = InCallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = InCallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = InCallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = InCallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = InCallFunc_Dot_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InPitchMultiplier != nullptr)
		*InPitchMultiplier = Parms.PitchMultiplier;

}


// Function Lib_Audio.Lib_Audio_C.AkSetRTPC
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InterpolationTimeMs                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkComponent*>        AkComponents                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// class UComp_RtpcTracker_C*         RtpcTracker                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkComponent*>        CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_RtpcTracker_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkSetRTPC(class UAkRtpc* InRTPCValue, double InValue, int32 InInterpolationTimeMs, class AActor* InActor, class UObject* In__WorldContext, const TArray<class UAkComponent*>& InAkComponents, class UComp_RtpcTracker_C* InRtpcTracker, bool InCallFunc_IsValid_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue, TArray<class UAkComponent*>& InCallFunc_K2_GetComponentsByClass_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue_1, bool InCallFunc_Greater_IntInt_ReturnValue, int32 InTemp_int_Array_Index_Variable, class UAkComponent* InCallFunc_Array_Get_Item, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, class UComp_RtpcTracker_C* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, float InCallFunc_SetRTPCValue_Value_ImplicitCast, float InCallFunc_SetRTPCValue_Value_ImplicitCast_1, float InCallFunc_SetRTPCValue_Value_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkSetRTPC");

	Params::ULib_Audio_C_AkSetRTPC_Params Parms{};

	Parms.RTPCValue = InRTPCValue;
	Parms.Value = InValue;
	Parms.InterpolationTimeMs = InInterpolationTimeMs;
	Parms.Actor = InActor;
	Parms.__WorldContext = In__WorldContext;
	Parms.AkComponents = InAkComponents;
	Parms.RtpcTracker = InRtpcTracker;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = InCallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = InCallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = InCallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = InCallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_1 = InCallFunc_SetRTPCValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_2 = InCallFunc_SetRTPCValue_Value_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lib_Audio.Lib_Audio_C.Broadcast Ak Event Location
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorHit                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               WasDamaged                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Search_Radius                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           PCT_To_Exclude                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>Held_ItemType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             LocallyControlled                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    K2Node_DynamicCast_AsValeria_Player_Controller                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::Broadcast_Ak_Event_Location(class AActor* InActorHit, bool InWasDamaged, class AActor* InInstigator, int32 InSearch_Radius, class APlayerController* InPCT_To_Exclude, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InHeld_ItemType, class UObject* In__WorldContext, double InLocallyControlled, class AValeriaPlayerController* InK2Node_DynamicCast_AsValeria_Player_Controller, bool InK2Node_DynamicCast_bSuccess, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Broadcast Ak Event Location");

	Params::ULib_Audio_C_Broadcast_Ak_Event_Location_Params Parms{};

	Parms.ActorHit = InActorHit;
	Parms.WasDamaged = InWasDamaged;
	Parms.Instigator = InInstigator;
	Parms.Search_Radius = InSearch_Radius;
	Parms.PCT_To_Exclude = InPCT_To_Exclude;
	Parms.Held_ItemType = InHeld_ItemType;
	Parms.__WorldContext = In__WorldContext;
	Parms.LocallyControlled = InLocallyControlled;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller = InK2Node_DynamicCast_AsValeria_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Lib_Audio.Lib_Audio_C.AkEventSpawnAttached
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AutoDestroy                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GetRtpcFromOwner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AK                                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayingID                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             LocallyControlled                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Try_to_Propagate_Rtpcs_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithinAttenuation_Within                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkEventSpawnAttached(class UAkAudioEvent* InAkEvent, class AActor* InInstigator, class USceneComponent* InOwner, class FName InSocketName, bool InAutoDestroy, bool InGetRtpcFromOwner, class UObject* In__WorldContext, class UAkComponent** InAK, int32* InID, int32 InPlayingID, class UAkComponent* InAkComponent, double InLocallyControlled, bool InCallFunc_IsDedicatedServer_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, bool InCallFunc_Try_to_Propagate_Rtpcs_Success, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue_1, class APawn* InK2Node_DynamicCast_AsPawn, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsLocallyControlled_ReturnValue, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue, bool InCallFunc_IsWithinAttenuation_Within, FDelegateProperty_ InTemp_delegate_Variable, class UAkComponent* InCallFunc_SpawnAkComponentAtLocation_ReturnValue, bool InCallFunc_K2_AttachToComponent_ReturnValue, TArray<struct FAkExternalSourceInfo>& InTemp_struct_Variable, int32 InCallFunc_PostAkEvent_ReturnValue, float InCallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventSpawnAttached");

	Params::ULib_Audio_C_AkEventSpawnAttached_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Instigator = InInstigator;
	Parms.Owner = InOwner;
	Parms.SocketName = InSocketName;
	Parms.AutoDestroy = InAutoDestroy;
	Parms.GetRtpcFromOwner = InGetRtpcFromOwner;
	Parms.__WorldContext = In__WorldContext;
	Parms.PlayingID = InPlayingID;
	Parms.AkComponent = InAkComponent;
	Parms.LocallyControlled = InLocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = InCallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = InCallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = InK2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = InCallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_IsWithinAttenuation_Within = InCallFunc_IsWithinAttenuation_Within;
	Parms.Temp_delegate_Variable = InTemp_delegate_Variable;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = InCallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = InCallFunc_K2_AttachToComponent_ReturnValue;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = InCallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = InCallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InAK != nullptr)
		*InAK = Parms.AK;

	if (InID != nullptr)
		*InID = Parms.ID;

}


// Function Lib_Audio.Lib_Audio_C.SurfaceDTPM
// (Static, Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PhysMat                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Sound                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Decal_Left_Foot                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Decal_Right_Foot                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              Niagara_System                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        DefaultInGamePhysmat                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RowNamePhysmat                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        DefaultPhysmatEditorAudition                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_RightChop_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPackagedForDistribution_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Physmat             CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::SurfaceDTPM(class AActor* InActor, class UDataTable* InDataTable, class UPhysicalMaterial* InPhysMat, class UObject* In__WorldContext, class UAkAudioEvent** InSound, class UMaterialInstance** InDecal_Left_Foot, class UMaterialInstance** InDecal_Right_Foot, class UNiagaraSystem** InNiagara_System, class FName InDefaultInGamePhysmat, class FName InRowNamePhysmat, enum class EPhysicalSurface InDefaultPhysmatEditorAudition, const class FString& InCallFunc_GetDisplayName_ReturnValue, bool InCallFunc_EqualEqual_StrStr_ReturnValue, bool InCallFunc_EqualEqual_StrStr_ReturnValue_1, bool InCallFunc_EqualEqual_StrStr_ReturnValue_2, const class FString& InCallFunc_RightChop_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue_1, bool InCallFunc_IsPackagedForDistribution_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, const class FString& InCallFunc_GetDisplayName_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue_1, const struct FStruct_Physmat& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue, const class FString& InCallFunc_Conv_NameToString_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue_2, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, bool InCallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "SurfaceDTPM");

	Params::ULib_Audio_C_SurfaceDTPM_Params Parms{};

	Parms.Actor = InActor;
	Parms.DataTable = InDataTable;
	Parms.PhysMat = InPhysMat;
	Parms.__WorldContext = In__WorldContext;
	Parms.DefaultInGamePhysmat = InDefaultInGamePhysmat;
	Parms.RowNamePhysmat = InRowNamePhysmat;
	Parms.DefaultPhysmatEditorAudition = InDefaultPhysmatEditorAudition;
	Parms.CallFunc_GetDisplayName_ReturnValue = InCallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = InCallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = InCallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = InCallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_RightChop_ReturnValue = InCallFunc_RightChop_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = InCallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = InCallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = InCallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = InCallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = InCallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = InCallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = InCallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = InCallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = InCallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = InCallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = InCallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = InCallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InSound != nullptr)
		*InSound = Parms.Sound;

	if (InDecal_Left_Foot != nullptr)
		*InDecal_Left_Foot = Parms.Decal_Left_Foot;

	if (InDecal_Right_Foot != nullptr)
		*InDecal_Right_Foot = Parms.Decal_Right_Foot;

	if (InNiagara_System != nullptr)
		*InNiagara_System = Parms.Niagara_System;

}


// Function Lib_Audio.Lib_Audio_C.Surface DT
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PhysMat                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Sound                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Decal_Left_Foot                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Decal_Right_Foot                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              NiagaraSystem                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              NS                                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_Footwear              FootwearDebug                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Footwear                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           DR                                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           DL                                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               S                                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        RowNamePhysmat                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        DefaultPhysmatEditorAudition                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        DefaultPhysmatInGame                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_Actor_Audio_Data_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Footwear            CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Left_ReturnValue                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_SurfaceDTPM_Sound                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_SurfaceDTPM_Decal_Left_Foot                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_SurfaceDTPM_Decal_Right_Foot                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_SurfaceDTPM_Niagara_System                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_SurfaceDTPM_Sound_1                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_SurfaceDTPM_Decal_Left_Foot_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_SurfaceDTPM_Decal_Right_Foot_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_SurfaceDTPM_Niagara_System_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::Surface_DT(class AActor* InActor, class UDataTable* InDataTable, class UPhysicalMaterial* InPhysMat, class UObject* In__WorldContext, class UAkAudioEvent** InSound, class UMaterialInstance** InDecal_Left_Foot, class UMaterialInstance** InDecal_Right_Foot, class UNiagaraSystem** InNiagaraSystem, class UNiagaraSystem* InNS, enum class E_Footwear InFootwearDebug, class FName InFootwear, class UMaterialInstance* InDR, class UMaterialInstance* InDL, class UAkAudioEvent* InS, class FName InRowNamePhysmat, enum class EPhysicalSurface InDefaultPhysmatEditorAudition, enum class EPhysicalSurface InDefaultPhysmatInGame, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue, class UComp_Actor_Audio_Data_C* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName InCallFunc_Conv_StringToName_ReturnValue_1, const struct FStruct_Footwear& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue, const class FString& InCallFunc_GetObjectName_ReturnValue, const class FString& InCallFunc_Left_ReturnValue, bool InK2Node_SwitchString_CmpSuccess, class UAkAudioEvent* InCallFunc_SurfaceDTPM_Sound, class UMaterialInstance* InCallFunc_SurfaceDTPM_Decal_Left_Foot, class UMaterialInstance* InCallFunc_SurfaceDTPM_Decal_Right_Foot, class UNiagaraSystem* InCallFunc_SurfaceDTPM_Niagara_System, class UAkAudioEvent* InCallFunc_SurfaceDTPM_Sound_1, class UMaterialInstance* InCallFunc_SurfaceDTPM_Decal_Left_Foot_1, class UMaterialInstance* InCallFunc_SurfaceDTPM_Decal_Right_Foot_1, class UNiagaraSystem* InCallFunc_SurfaceDTPM_Niagara_System_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Surface DT");

	Params::ULib_Audio_C_Surface_DT_Params Parms{};

	Parms.Actor = InActor;
	Parms.DataTable = InDataTable;
	Parms.PhysMat = InPhysMat;
	Parms.__WorldContext = In__WorldContext;
	Parms.NS = InNS;
	Parms.FootwearDebug = InFootwearDebug;
	Parms.Footwear = InFootwear;
	Parms.DR = InDR;
	Parms.DL = InDL;
	Parms.S = InS;
	Parms.RowNamePhysmat = InRowNamePhysmat;
	Parms.DefaultPhysmatEditorAudition = InDefaultPhysmatEditorAudition;
	Parms.DefaultPhysmatInGame = InDefaultPhysmatInGame;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = InCallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = InCallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = InCallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = InCallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = InCallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Left_ReturnValue = InCallFunc_Left_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = InK2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_SurfaceDTPM_Sound = InCallFunc_SurfaceDTPM_Sound;
	Parms.CallFunc_SurfaceDTPM_Decal_Left_Foot = InCallFunc_SurfaceDTPM_Decal_Left_Foot;
	Parms.CallFunc_SurfaceDTPM_Decal_Right_Foot = InCallFunc_SurfaceDTPM_Decal_Right_Foot;
	Parms.CallFunc_SurfaceDTPM_Niagara_System = InCallFunc_SurfaceDTPM_Niagara_System;
	Parms.CallFunc_SurfaceDTPM_Sound_1 = InCallFunc_SurfaceDTPM_Sound_1;
	Parms.CallFunc_SurfaceDTPM_Decal_Left_Foot_1 = InCallFunc_SurfaceDTPM_Decal_Left_Foot_1;
	Parms.CallFunc_SurfaceDTPM_Decal_Right_Foot_1 = InCallFunc_SurfaceDTPM_Decal_Right_Foot_1;
	Parms.CallFunc_SurfaceDTPM_Niagara_System_1 = InCallFunc_SurfaceDTPM_Niagara_System_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InSound != nullptr)
		*InSound = Parms.Sound;

	if (InDecal_Left_Foot != nullptr)
		*InDecal_Left_Foot = Parms.Decal_Left_Foot;

	if (InDecal_Right_Foot != nullptr)
		*InDecal_Right_Foot = Parms.Decal_Right_Foot;

	if (InNiagaraSystem != nullptr)
		*InNiagaraSystem = Parms.NiagaraSystem;

}


// Function Lib_Audio.Lib_Audio_C.IsWithinAttenuation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkAudioEvent*               Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Within                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_VIsWithinAttenuation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::IsWithinAttenuation(class UAkAudioEvent* InEvent, const struct FVector& InLocation, class UObject* In__WorldContext, bool* InWithin, bool InCallFunc_VIsWithinAttenuation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "IsWithinAttenuation");

	Params::ULib_Audio_C_IsWithinAttenuation_Params Parms{};

	Parms.Event = InEvent;
	Parms.Location = InLocation;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_VIsWithinAttenuation_ReturnValue = InCallFunc_VIsWithinAttenuation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InWithin != nullptr)
		*InWithin = Parms.Within;

}


// Function Lib_Audio.Lib_Audio_C.AkEventLocationWithActor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               GetRtpcFromActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Playing_ID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComp                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             LocallyControlled                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Try_to_Propagate_Rtpcs_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkSpawnAtLocation_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithinAttenuation_Within                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkEventLocationWithActor(class UAkAudioEvent* InAkEvent, const struct FVector& InLocation, class AActor* InActor, bool InGetRtpcFromActor, class UObject* In__WorldContext, class UAkComponent** InAkComponent, int32* InPlaying_ID, class UAkComponent* InAkComp, double InLocallyControlled, bool InCallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ InTemp_delegate_Variable, bool InCallFunc_Try_to_Propagate_Rtpcs_Success, class APawn* InK2Node_DynamicCast_AsPawn, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsLocallyControlled_ReturnValue, bool InCallFunc_IsLocallyControlled_ReturnValue_1, class UAkComponent* InCallFunc_AkSpawnAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& InTemp_struct_Variable, int32 InCallFunc_PostAkEvent_ReturnValue, bool InCallFunc_IsWithinAttenuation_Within, bool InCallFunc_IsValid_ReturnValue_1, float InCallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventLocationWithActor");

	Params::ULib_Audio_C_AkEventLocationWithActor_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Location = InLocation;
	Parms.Actor = InActor;
	Parms.GetRtpcFromActor = InGetRtpcFromActor;
	Parms.__WorldContext = In__WorldContext;
	Parms.AkComp = InAkComp;
	Parms.LocallyControlled = InLocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_delegate_Variable = InTemp_delegate_Variable;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = InCallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.K2Node_DynamicCast_AsPawn = InK2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = InCallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_AkSpawnAtLocation_ReturnValue = InCallFunc_AkSpawnAtLocation_ReturnValue;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = InCallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_IsWithinAttenuation_Within = InCallFunc_IsWithinAttenuation_Within;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = InCallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InAkComponent != nullptr)
		*InAkComponent = Parms.AkComponent;

	if (InPlaying_ID != nullptr)
		*InPlaying_ID = Parms.Playing_ID;

}


// Function Lib_Audio.Lib_Audio_C.AkEventLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               GetRtpcsFromInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Playing_ID                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayingID                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComp                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             LocallyControlled                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_VAkEventLocation_OutComponent                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_VAkEventLocation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Try_to_Propagate_Rtpcs_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkEventLocation(class UAkAudioEvent* InAkEvent, const struct FVector& InLocation, class AActor* InInstigator, bool InGetRtpcsFromInstigator, class UObject* In__WorldContext, class UAkComponent** InAkComponent, int32* InPlaying_ID, int32 InPlayingID, class UAkComponent* InAkComp, double InLocallyControlled, class UAkComponent* InCallFunc_VAkEventLocation_OutComponent, int32 InCallFunc_VAkEventLocation_ReturnValue, bool InCallFunc_Try_to_Propagate_Rtpcs_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventLocation");

	Params::ULib_Audio_C_AkEventLocation_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Location = InLocation;
	Parms.Instigator = InInstigator;
	Parms.GetRtpcsFromInstigator = InGetRtpcsFromInstigator;
	Parms.__WorldContext = In__WorldContext;
	Parms.PlayingID = InPlayingID;
	Parms.AkComp = InAkComp;
	Parms.LocallyControlled = InLocallyControlled;
	Parms.CallFunc_VAkEventLocation_OutComponent = InCallFunc_VAkEventLocation_OutComponent;
	Parms.CallFunc_VAkEventLocation_ReturnValue = InCallFunc_VAkEventLocation_ReturnValue;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = InCallFunc_Try_to_Propagate_Rtpcs_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (InAkComponent != nullptr)
		*InAkComponent = Parms.AkComponent;

	if (InPlaying_ID != nullptr)
		*InPlaying_ID = Parms.Playing_ID;

}


// Function Lib_Audio.Lib_Audio_C.AkEventComponentCallback
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallbackMask                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               CheckAttenuation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GetRtpcFromOwner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LocallyControlled                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Try_to_Propagate_Rtpcs_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAutoDestroy_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_VIsWithinAttenuation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::AkEventComponentCallback(class UAkAudioEvent* InAkEvent, class UAkComponent* InAkComponent, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, bool InCheckAttenuation, bool InGetRtpcFromOwner, class UObject* In__WorldContext, double InLocallyControlled, bool InCallFunc_IsDedicatedServer_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, bool InCallFunc_Try_to_Propagate_Rtpcs_Success, bool InCallFunc_GetAutoDestroy_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue_1, class APawn* InK2Node_DynamicCast_AsPawn, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsLocallyControlled_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsLocallyControlled_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_1, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, bool InCallFunc_VIsWithinAttenuation_ReturnValue, TArray<struct FAkExternalSourceInfo>& InTemp_struct_Variable, bool InCallFunc_IsValid_ReturnValue_2, int32 InCallFunc_PostAkEvent_ReturnValue, float InCallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventComponentCallback");

	Params::ULib_Audio_C_AkEventComponentCallback_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.AkComponent = InAkComponent;
	Parms.CallbackMask = InCallbackMask;
	Parms.PostEventCallback = InPostEventCallback;
	Parms.CheckAttenuation = InCheckAttenuation;
	Parms.GetRtpcFromOwner = InGetRtpcFromOwner;
	Parms.__WorldContext = In__WorldContext;
	Parms.LocallyControlled = InLocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = InCallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.CallFunc_GetAutoDestroy_ReturnValue = InCallFunc_GetAutoDestroy_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = InCallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = InK2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = InCallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_VIsWithinAttenuation_ReturnValue = InCallFunc_VIsWithinAttenuation_ReturnValue;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PostAkEvent_ReturnValue = InCallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = InCallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Lib_Audio.Lib_Audio_C.AkEventComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               GetRtpcFromOwner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LocallyControlled                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_VAkEventComponent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Try_to_Propagate_Rtpcs_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::AkEventComponent(class UAkAudioEvent* InAkEvent, class UAkComponent* InAkComponent, bool InGetRtpcFromOwner, class UObject* In__WorldContext, double InLocallyControlled, class AActor* InCallFunc_GetOwner_ReturnValue, int32 InCallFunc_VAkEventComponent_ReturnValue, bool InCallFunc_Try_to_Propagate_Rtpcs_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventComponent");

	Params::ULib_Audio_C_AkEventComponent_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.AkComponent = InAkComponent;
	Parms.GetRtpcFromOwner = InGetRtpcFromOwner;
	Parms.__WorldContext = In__WorldContext;
	Parms.LocallyControlled = InLocallyControlled;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_VAkEventComponent_ReturnValue = InCallFunc_VAkEventComponent_ReturnValue;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = InCallFunc_Try_to_Propagate_Rtpcs_Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Lib_Audio.Lib_Audio_C.AkEventActor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LocallyControlled                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AkGetComponent_ComponentCreated                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkGetComponent_AkComponent                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Try_to_Propagate_Rtpcs_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithinAttenuation_Within                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::AkEventActor(class UAkAudioEvent* InAkEvent, class AActor* InActor, class UObject* In__WorldContext, double InLocallyControlled, bool InCallFunc_IsDedicatedServer_ReturnValue, class APawn* InK2Node_DynamicCast_AsPawn, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsLocallyControlled_ReturnValue, class USceneComponent* InCallFunc_K2_GetRootComponent_ReturnValue, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, bool InCallFunc_Try_to_Propagate_Rtpcs_Success, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsLocallyControlled_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_1, FDelegateProperty_ InTemp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& InTemp_struct_Variable, int32 InCallFunc_PostAkEvent_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, bool InCallFunc_IsWithinAttenuation_Within, bool InCallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventActor");

	Params::ULib_Audio_C_AkEventActor_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Actor = InActor;
	Parms.__WorldContext = In__WorldContext;
	Parms.LocallyControlled = InLocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = InK2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = InCallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_AkGetComponent_ComponentCreated = InCallFunc_AkGetComponent_ComponentCreated;
	Parms.CallFunc_AkGetComponent_AkComponent = InCallFunc_AkGetComponent_AkComponent;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = InCallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = InCallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.Temp_delegate_Variable = InTemp_delegate_Variable;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = InCallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsWithinAttenuation_Within = InCallFunc_IsWithinAttenuation_Within;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Lib_Audio.Lib_Audio_C.AkEventGlobal
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostGlobalEvent_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULib_Audio_C::AkEventGlobal(class UAkAudioEvent* InAkEvent, class UObject* In__WorldContext, bool InCallFunc_IsDedicatedServer_ReturnValue, bool InCallFunc_IsValid_ReturnValue, int32 InCallFunc_PostGlobalEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventGlobal");

	Params::ULib_Audio_C_AkEventGlobal_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostGlobalEvent_ReturnValue = InCallFunc_PostGlobalEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Lib_Audio.Lib_Audio_C.Ak Object Velocity
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                AK                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             VectorLengthMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Delta_Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Get_Previous_Location                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InterpTimeMs                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Set_Previous_Location                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VectorLength                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VectorLengthClamped                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Object_velocity                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             VectorMax                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::Ak_Object_Velocity(class UAkComponent* InAK, double InVectorLengthMax, double InDelta_Time, const struct FVector& InGet_Previous_Location, int32 InInterpTimeMs, class UObject* In__WorldContext, struct FVector* InSet_Previous_Location, double* InVectorLength, double* InVectorLengthClamped, class FName InObject_velocity, double InVectorMax, bool InCallFunc_IsDedicatedServer_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& InCallFunc_Subtract_VectorVector_ReturnValue, double InCallFunc_VSize_ReturnValue, double InCallFunc_Divide_DoubleDouble_ReturnValue, double InCallFunc_MapRangeClamped_ReturnValue, bool InCallFunc_IsValid_ReturnValue, float InCallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Ak Object Velocity");

	Params::ULib_Audio_C_Ak_Object_Velocity_Params Parms{};

	Parms.AK = InAK;
	Parms.VectorLengthMax = InVectorLengthMax;
	Parms.Delta_Time = InDelta_Time;
	Parms.Get_Previous_Location = InGet_Previous_Location;
	Parms.InterpTimeMs = InInterpTimeMs;
	Parms.__WorldContext = In__WorldContext;
	Parms.Object_velocity = InObject_velocity;
	Parms.VectorMax = InVectorMax;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = InCallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = InCallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = InCallFunc_VSize_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = InCallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = InCallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = InCallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InSet_Previous_Location != nullptr)
		*InSet_Previous_Location = Parms.Set_Previous_Location;

	if (InVectorLength != nullptr)
		*InVectorLength = Parms.VectorLength;

	if (InVectorLengthClamped != nullptr)
		*InVectorLengthClamped = Parms.VectorLengthClamped;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
