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

void ULib_Audio_C::GetMusicManager(class UObject* __WorldContext, class UBP_MusicManager_C** AsBP_Music_Manager, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UMusicManager* CallFunc_GetMusicManager_ReturnValue, class UBP_MusicManager_C* K2Node_DynamicCast_AsBP_Music_Manager, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "GetMusicManager");

	Params::ULib_Audio_C_GetMusicManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance = K2Node_DynamicCast_AsValeria_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMusicManager_ReturnValue = CallFunc_GetMusicManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Music_Manager = K2Node_DynamicCast_AsBP_Music_Manager;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBP_Music_Manager != nullptr)
		*AsBP_Music_Manager = Parms.AsBP_Music_Manager;

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

void ULib_Audio_C::Try_to_Propagate_Rtpcs(class AActor* Actor, class UAkComponent* AkComponent, class UObject* __WorldContext, bool* Success, class UComp_RtpcTracker_C* Tracker, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UComp_RtpcTracker_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Try to Propagate Rtpcs");

	Params::ULib_Audio_C_Try_to_Propagate_Rtpcs_Params Parms{};

	Parms.Actor = Actor;
	Parms.AkComponent = AkComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.Tracker = Tracker;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

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

void ULib_Audio_C::AkGetComponent(class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType, bool bAutoDestroy, class UObject* __WorldContext, bool* ComponentCreated, class UAkComponent** AkComponent, bool CallFunc_VAkGetComponent_ComponentCreated, class UAkComponent* CallFunc_VAkGetComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkGetComponent");

	Params::ULib_Audio_C_AkGetComponent_Params Parms{};

	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.LocationType = LocationType;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_VAkGetComponent_ComponentCreated = CallFunc_VAkGetComponent_ComponentCreated;
	Parms.CallFunc_VAkGetComponent_ReturnValue = CallFunc_VAkGetComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ComponentCreated != nullptr)
		*ComponentCreated = Parms.ComponentCreated;

	if (AkComponent != nullptr)
		*AkComponent = Parms.AkComponent;

}


// Function Lib_Audio.Lib_Audio_C.AkExecuteActionOnPlayingID
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAkActionOnEventType    ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayingID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TransitionDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAkCurveInterpolation   FadeCurve                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::AkExecuteActionOnPlayingID(enum class EAkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkExecuteActionOnPlayingID");

	Params::ULib_Audio_C_AkExecuteActionOnPlayingID_Params Parms{};

	Parms.ActionType = ActionType;
	Parms.PlayingID = PlayingID;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;
	Parms.__WorldContext = __WorldContext;

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

void ULib_Audio_C::IsInside(const struct FVector& Location, class UObject* __WorldContext, bool* IsInside, bool Inside, bool Temp_bool_True_if_break_was_hit_Variable, class UAkRoomComponent* CallFunc_GetAkAudioRoomAtLocation_HighestPriorityRoom, TArray<class UAkRoomComponent*>& CallFunc_GetAkAudioRoomAtLocation_AllRooms, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AAkSpatialAudioVolume* K2Node_DynamicCast_AsAk_Spatial_Audio_Volume, bool K2Node_DynamicCast_bSuccess, TArray<class UComp_CV_Local_RTPC_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class UComp_CV_Local_RTPC_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "IsInside");

	Params::ULib_Audio_C_IsInside_Params Parms{};

	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.Inside = Inside;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_GetAkAudioRoomAtLocation_HighestPriorityRoom = CallFunc_GetAkAudioRoomAtLocation_HighestPriorityRoom;
	Parms.CallFunc_GetAkAudioRoomAtLocation_AllRooms = CallFunc_GetAkAudioRoomAtLocation_AllRooms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Spatial_Audio_Volume = K2Node_DynamicCast_AsAk_Spatial_Audio_Volume;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInside != nullptr)
		*IsInside = Parms.IsInside;

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

void ULib_Audio_C::IsWet(const struct FVector& Location, class UObject* __WorldContext, bool* IsWet, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsInside_IsInside, const struct FWeatherStateProperties& CallFunc_GetCurrentWorldWeatherState_ReturnValue, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "IsWet");

	Params::ULib_Audio_C_IsWet_Params Parms{};

	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsInside_IsInside = CallFunc_IsInside_IsInside;
	Parms.CallFunc_GetCurrentWorldWeatherState_ReturnValue = CallFunc_GetCurrentWorldWeatherState_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsWet != nullptr)
		*IsWet = Parms.IsWet;

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

void ULib_Audio_C::AkCulledAssignAndStart(class UAkAudioEvent* AkEvent, class UAkCulledComponent* AkCulledComponent, class UObject* __WorldContext, double LocallyControlled, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkCulledAssignAndStart");

	Params::ULib_Audio_C_AkCulledAssignAndStart_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.AkCulledComponent = AkCulledComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.LocallyControlled = LocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

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

void ULib_Audio_C::GetAkAudioRoomAtLocation(const struct FVector& Location, class UObject* __WorldContext, class UAkRoomComponent** HighestPriorityRoom, TArray<class UAkRoomComponent*>* AllRooms, const TArray<class UAkRoomComponent*>& LRoomComponents, class UAkRoomComponent* LHighestPriorityRoom, double LHighestPriority, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class UAkRoomComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class UPrimitiveComponent*>& CallFunc_SphereOverlapComponents_OutComponents, bool CallFunc_SphereOverlapComponents_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UAkRoomComponent* K2Node_DynamicCast_AsAk_Room_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_3, class AValeriaSpatialAudioVolume* K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_LHighestPriority_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "GetAkAudioRoomAtLocation");

	Params::ULib_Audio_C_GetAkAudioRoomAtLocation_Params Parms{};

	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.LRoomComponents = LRoomComponents;
	Parms.LHighestPriorityRoom = LHighestPriorityRoom;
	Parms.LHighestPriority = LHighestPriority;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_SphereOverlapComponents_OutComponents = CallFunc_SphereOverlapComponents_OutComponents;
	Parms.CallFunc_SphereOverlapComponents_ReturnValue = CallFunc_SphereOverlapComponents_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsAk_Room_Component = K2Node_DynamicCast_AsAk_Room_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume = K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_LHighestPriority_ImplicitCast = K2Node_VariableSet_LHighestPriority_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (HighestPriorityRoom != nullptr)
		*HighestPriorityRoom = Parms.HighestPriorityRoom;

	if (AllRooms != nullptr)
		*AllRooms = Parms.AllRooms;

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

int32 ULib_Audio_C::PlayTempBeep(bool Global, const struct FVector& Location, class UObject* __WorldContext, bool CallFunc_BuildIsShipping_ReturnValue, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID, int32 CallFunc_AkEventGlobal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "PlayTempBeep");

	Params::ULib_Audio_C_PlayTempBeep_Params Parms{};

	Parms.Global = Global;
	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BuildIsShipping_ReturnValue = CallFunc_BuildIsShipping_ReturnValue;
	Parms.CallFunc_AkEventLocation_AkComponent = CallFunc_AkEventLocation_AkComponent;
	Parms.CallFunc_AkEventLocation_Playing_ID = CallFunc_AkEventLocation_Playing_ID;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;

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

void ULib_Audio_C::LoadAudioUserSettings(class UObject* __WorldContext, class UAkStateValue* Temp_object_Variable, class UAkStateValue* Temp_object_Variable_1, class UAkStateValue* Temp_object_Variable_2, enum class EAudioMixProfiles Temp_byte_Variable, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAkStateValue* K2Node_Select_Default, double CallFunc_AkSetRTPC_Value_ImplicitCast, double CallFunc_AkSetRTPC_Value_ImplicitCast_1, double CallFunc_AkSetRTPC_Value_ImplicitCast_2, double CallFunc_AkSetRTPC_Value_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "LoadAudioUserSettings");

	Params::ULib_Audio_C_LoadAudioUserSettings_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetValeriaGameUserSettings_ReturnValue = CallFunc_GetValeriaGameUserSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AkSetRTPC_Value_ImplicitCast = CallFunc_AkSetRTPC_Value_ImplicitCast;
	Parms.CallFunc_AkSetRTPC_Value_ImplicitCast_1 = CallFunc_AkSetRTPC_Value_ImplicitCast_1;
	Parms.CallFunc_AkSetRTPC_Value_ImplicitCast_2 = CallFunc_AkSetRTPC_Value_ImplicitCast_2;
	Parms.CallFunc_AkSetRTPC_Value_ImplicitCast_3 = CallFunc_AkSetRTPC_Value_ImplicitCast_3;

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

void ULib_Audio_C::Ak_Music_Switch(class UAkSwitchValue* SwitchValue, bool IgnoreTimeOfDay, class UObject* __WorldContext, bool CallFunc_IsDedicatedServer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_MusicManager_C* CallFunc_GetMusicManager_AsBP_Music_Manager, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UComp_Listener_Padding_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Ak Music Switch");

	Params::ULib_Audio_C_Ak_Music_Switch_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.IgnoreTimeOfDay = IgnoreTimeOfDay;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetMusicManager_AsBP_Music_Manager = CallFunc_GetMusicManager_AsBP_Music_Manager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

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

void ULib_Audio_C::FindClosestVector(TArray<struct FVector>& InVectors, const struct FVector& ReferencePoint, class UObject* __WorldContext, struct FVector* ClosestVector, int32* Index, double IterateDistance, int32 ClosestInd, const struct FVector& ClosestVect, double Distance, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Vector_Distance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "FindClosestVector");

	Params::ULib_Audio_C_FindClosestVector_Params Parms{};

	Parms.InVectors = InVectors;
	Parms.ReferencePoint = ReferencePoint;
	Parms.__WorldContext = __WorldContext;
	Parms.IterateDistance = IterateDistance;
	Parms.ClosestInd = ClosestInd;
	Parms.ClosestVect = ClosestVect;
	Parms.Distance = Distance;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestVector != nullptr)
		*ClosestVector = Parms.ClosestVector;

	if (Index != nullptr)
		*Index = Parms.Index;

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

void ULib_Audio_C::GetDopplerPitchMultiplier(class AActor* Listener, class AActor* Object, double DopplerIntensity, class UObject* __WorldContext, double* PitchMultiplier, double FinalPitchScale, double PitchScale, double DopplerPitchScale, double ListenerVelocityMagnitude, double SourceVelocityMagnitude, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "GetDopplerPitchMultiplier");

	Params::ULib_Audio_C_GetDopplerPitchMultiplier_Params Parms{};

	Parms.Listener = Listener;
	Parms.Object = Object;
	Parms.DopplerIntensity = DopplerIntensity;
	Parms.__WorldContext = __WorldContext;
	Parms.FinalPitchScale = FinalPitchScale;
	Parms.PitchScale = PitchScale;
	Parms.DopplerPitchScale = DopplerPitchScale;
	Parms.ListenerVelocityMagnitude = ListenerVelocityMagnitude;
	Parms.SourceVelocityMagnitude = SourceVelocityMagnitude;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2 = CallFunc_Subtract_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PitchMultiplier != nullptr)
		*PitchMultiplier = Parms.PitchMultiplier;

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

void ULib_Audio_C::AkSetRTPC(class UAkRtpc* RTPCValue, double Value, int32 InterpolationTimeMs, class AActor* Actor, class UObject* __WorldContext, const TArray<class UAkComponent*>& AkComponents, class UComp_RtpcTracker_C* RtpcTracker, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UAkComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAkComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UComp_RtpcTracker_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1, float CallFunc_SetRTPCValue_Value_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkSetRTPC");

	Params::ULib_Audio_C_AkSetRTPC_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.Value = Value;
	Parms.InterpolationTimeMs = InterpolationTimeMs;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.AkComponents = AkComponents;
	Parms.RtpcTracker = RtpcTracker;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_1 = CallFunc_SetRTPCValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_2 = CallFunc_SetRTPCValue_Value_ImplicitCast_2;

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

void ULib_Audio_C::Broadcast_Ak_Event_Location(class AActor* ActorHit, bool WasDamaged, class AActor* Instigator, int32 Search_Radius, class APlayerController* PCT_To_Exclude, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> Held_ItemType, class UObject* __WorldContext, double LocallyControlled, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Broadcast Ak Event Location");

	Params::ULib_Audio_C_Broadcast_Ak_Event_Location_Params Parms{};

	Parms.ActorHit = ActorHit;
	Parms.WasDamaged = WasDamaged;
	Parms.Instigator = Instigator;
	Parms.Search_Radius = Search_Radius;
	Parms.PCT_To_Exclude = PCT_To_Exclude;
	Parms.Held_ItemType = Held_ItemType;
	Parms.__WorldContext = __WorldContext;
	Parms.LocallyControlled = LocallyControlled;
	Parms.K2Node_DynamicCast_AsValeria_Player_Controller = K2Node_DynamicCast_AsValeria_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

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

void ULib_Audio_C::AkEventSpawnAttached(class UAkAudioEvent* AkEvent, class AActor* Instigator, class USceneComponent* Owner, class FName SocketName, bool AutoDestroy, bool GetRtpcFromOwner, class UObject* __WorldContext, class UAkComponent** AK, int32* ID, int32 PlayingID, class UAkComponent* AkComponent, double LocallyControlled, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Try_to_Propagate_Rtpcs_Success, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsWithinAttenuation_Within, FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventSpawnAttached");

	Params::ULib_Audio_C_AkEventSpawnAttached_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Instigator = Instigator;
	Parms.Owner = Owner;
	Parms.SocketName = SocketName;
	Parms.AutoDestroy = AutoDestroy;
	Parms.GetRtpcFromOwner = GetRtpcFromOwner;
	Parms.__WorldContext = __WorldContext;
	Parms.PlayingID = PlayingID;
	Parms.AkComponent = AkComponent;
	Parms.LocallyControlled = LocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = CallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_IsWithinAttenuation_Within = CallFunc_IsWithinAttenuation_Within;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = CallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (AK != nullptr)
		*AK = Parms.AK;

	if (ID != nullptr)
		*ID = Parms.ID;

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

void ULib_Audio_C::SurfaceDTPM(class AActor* Actor, class UDataTable* DataTable, class UPhysicalMaterial* PhysMat, class UObject* __WorldContext, class UAkAudioEvent** Sound, class UMaterialInstance** Decal_Left_Foot, class UMaterialInstance** Decal_Right_Foot, class UNiagaraSystem** Niagara_System, class FName DefaultInGamePhysmat, class FName RowNamePhysmat, enum class EPhysicalSurface DefaultPhysmatEditorAudition, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, const class FString& CallFunc_RightChop_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FStruct_Physmat& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "SurfaceDTPM");

	Params::ULib_Audio_C_SurfaceDTPM_Params Parms{};

	Parms.Actor = Actor;
	Parms.DataTable = DataTable;
	Parms.PhysMat = PhysMat;
	Parms.__WorldContext = __WorldContext;
	Parms.DefaultInGamePhysmat = DefaultInGamePhysmat;
	Parms.RowNamePhysmat = RowNamePhysmat;
	Parms.DefaultPhysmatEditorAudition = DefaultPhysmatEditorAudition;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_RightChop_ReturnValue = CallFunc_RightChop_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsPackagedForDistribution_ReturnValue = CallFunc_IsPackagedForDistribution_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Sound != nullptr)
		*Sound = Parms.Sound;

	if (Decal_Left_Foot != nullptr)
		*Decal_Left_Foot = Parms.Decal_Left_Foot;

	if (Decal_Right_Foot != nullptr)
		*Decal_Right_Foot = Parms.Decal_Right_Foot;

	if (Niagara_System != nullptr)
		*Niagara_System = Parms.Niagara_System;

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

void ULib_Audio_C::Surface_DT(class AActor* Actor, class UDataTable* DataTable, class UPhysicalMaterial* PhysMat, class UObject* __WorldContext, class UAkAudioEvent** Sound, class UMaterialInstance** Decal_Left_Foot, class UMaterialInstance** Decal_Right_Foot, class UNiagaraSystem** NiagaraSystem, class UNiagaraSystem* NS, enum class E_Footwear FootwearDebug, class FName Footwear, class UMaterialInstance* DR, class UMaterialInstance* DL, class UAkAudioEvent* S, class FName RowNamePhysmat, enum class EPhysicalSurface DefaultPhysmatEditorAudition, enum class EPhysicalSurface DefaultPhysmatInGame, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UComp_Actor_Audio_Data_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FStruct_Footwear& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, const class FString& CallFunc_Left_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class UAkAudioEvent* CallFunc_SurfaceDTPM_Sound, class UMaterialInstance* CallFunc_SurfaceDTPM_Decal_Left_Foot, class UMaterialInstance* CallFunc_SurfaceDTPM_Decal_Right_Foot, class UNiagaraSystem* CallFunc_SurfaceDTPM_Niagara_System, class UAkAudioEvent* CallFunc_SurfaceDTPM_Sound_1, class UMaterialInstance* CallFunc_SurfaceDTPM_Decal_Left_Foot_1, class UMaterialInstance* CallFunc_SurfaceDTPM_Decal_Right_Foot_1, class UNiagaraSystem* CallFunc_SurfaceDTPM_Niagara_System_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Surface DT");

	Params::ULib_Audio_C_Surface_DT_Params Parms{};

	Parms.Actor = Actor;
	Parms.DataTable = DataTable;
	Parms.PhysMat = PhysMat;
	Parms.__WorldContext = __WorldContext;
	Parms.NS = NS;
	Parms.FootwearDebug = FootwearDebug;
	Parms.Footwear = Footwear;
	Parms.DR = DR;
	Parms.DL = DL;
	Parms.S = S;
	Parms.RowNamePhysmat = RowNamePhysmat;
	Parms.DefaultPhysmatEditorAudition = DefaultPhysmatEditorAudition;
	Parms.DefaultPhysmatInGame = DefaultPhysmatInGame;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Left_ReturnValue = CallFunc_Left_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_SurfaceDTPM_Sound = CallFunc_SurfaceDTPM_Sound;
	Parms.CallFunc_SurfaceDTPM_Decal_Left_Foot = CallFunc_SurfaceDTPM_Decal_Left_Foot;
	Parms.CallFunc_SurfaceDTPM_Decal_Right_Foot = CallFunc_SurfaceDTPM_Decal_Right_Foot;
	Parms.CallFunc_SurfaceDTPM_Niagara_System = CallFunc_SurfaceDTPM_Niagara_System;
	Parms.CallFunc_SurfaceDTPM_Sound_1 = CallFunc_SurfaceDTPM_Sound_1;
	Parms.CallFunc_SurfaceDTPM_Decal_Left_Foot_1 = CallFunc_SurfaceDTPM_Decal_Left_Foot_1;
	Parms.CallFunc_SurfaceDTPM_Decal_Right_Foot_1 = CallFunc_SurfaceDTPM_Decal_Right_Foot_1;
	Parms.CallFunc_SurfaceDTPM_Niagara_System_1 = CallFunc_SurfaceDTPM_Niagara_System_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Sound != nullptr)
		*Sound = Parms.Sound;

	if (Decal_Left_Foot != nullptr)
		*Decal_Left_Foot = Parms.Decal_Left_Foot;

	if (Decal_Right_Foot != nullptr)
		*Decal_Right_Foot = Parms.Decal_Right_Foot;

	if (NiagaraSystem != nullptr)
		*NiagaraSystem = Parms.NiagaraSystem;

}


// Function Lib_Audio.Lib_Audio_C.IsWithinAttenuation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkAudioEvent*               Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Within                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_VIsWithinAttenuation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULib_Audio_C::IsWithinAttenuation(class UAkAudioEvent* Event, const struct FVector& Location, class UObject* __WorldContext, bool* Within, bool CallFunc_VIsWithinAttenuation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "IsWithinAttenuation");

	Params::ULib_Audio_C_IsWithinAttenuation_Params Parms{};

	Parms.Event = Event;
	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_VIsWithinAttenuation_ReturnValue = CallFunc_VIsWithinAttenuation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Within != nullptr)
		*Within = Parms.Within;

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

void ULib_Audio_C::AkEventLocationWithActor(class UAkAudioEvent* AkEvent, const struct FVector& Location, class AActor* Actor, bool GetRtpcFromActor, class UObject* __WorldContext, class UAkComponent** AkComponent, int32* Playing_ID, class UAkComponent* AkComp, double LocallyControlled, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_Try_to_Propagate_Rtpcs_Success, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, class UAkComponent* CallFunc_AkSpawnAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsWithinAttenuation_Within, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventLocationWithActor");

	Params::ULib_Audio_C_AkEventLocationWithActor_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Actor = Actor;
	Parms.GetRtpcFromActor = GetRtpcFromActor;
	Parms.__WorldContext = __WorldContext;
	Parms.AkComp = AkComp;
	Parms.LocallyControlled = LocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = CallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_AkSpawnAtLocation_ReturnValue = CallFunc_AkSpawnAtLocation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_IsWithinAttenuation_Within = CallFunc_IsWithinAttenuation_Within;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (AkComponent != nullptr)
		*AkComponent = Parms.AkComponent;

	if (Playing_ID != nullptr)
		*Playing_ID = Parms.Playing_ID;

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

void ULib_Audio_C::AkEventLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, class AActor* Instigator, bool GetRtpcsFromInstigator, class UObject* __WorldContext, class UAkComponent** AkComponent, int32* Playing_ID, int32 PlayingID, class UAkComponent* AkComp, double LocallyControlled, class UAkComponent* CallFunc_VAkEventLocation_OutComponent, int32 CallFunc_VAkEventLocation_ReturnValue, bool CallFunc_Try_to_Propagate_Rtpcs_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventLocation");

	Params::ULib_Audio_C_AkEventLocation_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Instigator = Instigator;
	Parms.GetRtpcsFromInstigator = GetRtpcsFromInstigator;
	Parms.__WorldContext = __WorldContext;
	Parms.PlayingID = PlayingID;
	Parms.AkComp = AkComp;
	Parms.LocallyControlled = LocallyControlled;
	Parms.CallFunc_VAkEventLocation_OutComponent = CallFunc_VAkEventLocation_OutComponent;
	Parms.CallFunc_VAkEventLocation_ReturnValue = CallFunc_VAkEventLocation_ReturnValue;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = CallFunc_Try_to_Propagate_Rtpcs_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (AkComponent != nullptr)
		*AkComponent = Parms.AkComponent;

	if (Playing_ID != nullptr)
		*Playing_ID = Parms.Playing_ID;

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

int32 ULib_Audio_C::AkEventComponentCallback(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, int32 CallbackMask, FDelegateProperty_& PostEventCallback, bool CheckAttenuation, bool GetRtpcFromOwner, class UObject* __WorldContext, double LocallyControlled, bool CallFunc_IsDedicatedServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Try_to_Propagate_Rtpcs_Success, bool CallFunc_GetAutoDestroy_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_VIsWithinAttenuation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_PostAkEvent_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventComponentCallback");

	Params::ULib_Audio_C_AkEventComponentCallback_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.AkComponent = AkComponent;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.CheckAttenuation = CheckAttenuation;
	Parms.GetRtpcFromOwner = GetRtpcFromOwner;
	Parms.__WorldContext = __WorldContext;
	Parms.LocallyControlled = LocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = CallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.CallFunc_GetAutoDestroy_ReturnValue = CallFunc_GetAutoDestroy_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_VIsWithinAttenuation_ReturnValue = CallFunc_VIsWithinAttenuation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

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

int32 ULib_Audio_C::AkEventComponent(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, bool GetRtpcFromOwner, class UObject* __WorldContext, double LocallyControlled, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_VAkEventComponent_ReturnValue, bool CallFunc_Try_to_Propagate_Rtpcs_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventComponent");

	Params::ULib_Audio_C_AkEventComponent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.AkComponent = AkComponent;
	Parms.GetRtpcFromOwner = GetRtpcFromOwner;
	Parms.__WorldContext = __WorldContext;
	Parms.LocallyControlled = LocallyControlled;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_VAkEventComponent_ReturnValue = CallFunc_VAkEventComponent_ReturnValue;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = CallFunc_Try_to_Propagate_Rtpcs_Success;

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

int32 ULib_Audio_C::AkEventActor(class UAkAudioEvent* AkEvent, class AActor* Actor, class UObject* __WorldContext, double LocallyControlled, bool CallFunc_IsDedicatedServer_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, bool CallFunc_Try_to_Propagate_Rtpcs_Success, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsWithinAttenuation_Within, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventActor");

	Params::ULib_Audio_C_AkEventActor_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;
	Parms.LocallyControlled = LocallyControlled;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_AkGetComponent_ComponentCreated = CallFunc_AkGetComponent_ComponentCreated;
	Parms.CallFunc_AkGetComponent_AkComponent = CallFunc_AkGetComponent_AkComponent;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = CallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsWithinAttenuation_Within = CallFunc_IsWithinAttenuation_Within;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

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

int32 ULib_Audio_C::AkEventGlobal(class UAkAudioEvent* AkEvent, class UObject* __WorldContext, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostGlobalEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "AkEventGlobal");

	Params::ULib_Audio_C_AkEventGlobal_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostGlobalEvent_ReturnValue = CallFunc_PostGlobalEvent_ReturnValue;

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

void ULib_Audio_C::Ak_Object_Velocity(class UAkComponent* AK, double VectorLengthMax, double Delta_Time, const struct FVector& Get_Previous_Location, int32 InterpTimeMs, class UObject* __WorldContext, struct FVector* Set_Previous_Location, double* VectorLength, double* VectorLengthClamped, class FName Object_velocity, double VectorMax, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Lib_Audio_C", "Ak Object Velocity");

	Params::ULib_Audio_C_Ak_Object_Velocity_Params Parms{};

	Parms.AK = AK;
	Parms.VectorLengthMax = VectorLengthMax;
	Parms.Delta_Time = Delta_Time;
	Parms.Get_Previous_Location = Get_Previous_Location;
	Parms.InterpTimeMs = InterpTimeMs;
	Parms.__WorldContext = __WorldContext;
	Parms.Object_velocity = Object_velocity;
	Parms.VectorMax = VectorMax;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Set_Previous_Location != nullptr)
		*Set_Previous_Location = Parms.Set_Previous_Location;

	if (VectorLength != nullptr)
		*VectorLength = Parms.VectorLength;

	if (VectorLengthClamped != nullptr)
		*VectorLengthClamped = Parms.VectorLengthClamped;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
