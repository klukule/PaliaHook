#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Comp_PlaceableAudio.Comp_PlaceableAudio_C
// (None)

class UClass* UComp_PlaceableAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Comp_PlaceableAudio_C");

	return Clss;
}


// Comp_PlaceableAudio_C Comp_PlaceableAudio.Default__Comp_PlaceableAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComp_PlaceableAudio_C* UComp_PlaceableAudio_C::GetDefaultObj()
{
	static class UComp_PlaceableAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComp_PlaceableAudio_C*>(UComp_PlaceableAudio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.StopPersistSoundLoopCulled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkCulledComponent*          Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::StopPersistSoundLoopCulled(class UAkCulledComponent* Component, bool CallFunc_Set_Remove_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "StopPersistSoundLoopCulled");

	Params::UComp_PlaceableAudio_C_StopPersistSoundLoopCulled_Params Parms{};

	Parms.Component = Component;
	Parms.CallFunc_Set_Remove_ReturnValue = CallFunc_Set_Remove_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.ResumePersistantLoopsCulled
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                AkComponent                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_PersistentSound>LocalValues                                                      (Edit, BlueprintVisible)
// TArray<class UAkComponent*>        LocalKeys                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkCulledComponent*>  CallFunc_Set_ToArray_Result                                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCulledComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::ResumePersistantLoopsCulled(class UAkComponent* AkComponent, const TArray<struct FStruct_PersistentSound>& LocalValues, const TArray<class UAkComponent*>& LocalKeys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkCulledComponent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UAkCulledComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "ResumePersistantLoopsCulled");

	Params::UComp_PlaceableAudio_C_ResumePersistantLoopsCulled_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.LocalValues = LocalValues;
	Parms.LocalKeys = LocalKeys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.StopPersistantLoopsCulled
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkCulledComponent*>  CallFunc_Set_ToArray_Result                                      (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCulledComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::StopPersistantLoopsCulled(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkCulledComponent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UAkCulledComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "StopPersistantLoopsCulled");

	Params::UComp_PlaceableAudio_C_StopPersistantLoopsCulled_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.PlayPersistSoundCulled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkCulledComponent*          CulledComponent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Am_I_Visible_On_Plot_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::PlayPersistSoundCulled(class UAkCulledComponent* CulledComponent, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "PlayPersistSoundCulled");

	Params::UComp_PlaceableAudio_C_PlayPersistSoundCulled_Params Parms{};

	Parms.CulledComponent = CulledComponent;
	Parms.CallFunc_Am_I_Visible_On_Plot_ReturnValue = CallFunc_Am_I_Visible_On_Plot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.PlayPersistSoundLoopCulled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkCulledComponent*          AkCulledComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       AudioEvents                                                      (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::PlayPersistSoundLoopCulled(class UAkCulledComponent* AkCulledComponent, const TArray<class UAkAudioEvent*>& AudioEvents, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "PlayPersistSoundLoopCulled");

	Params::UComp_PlaceableAudio_C_PlayPersistSoundLoopCulled_Params Parms{};

	Parms.AkCulledComponent = AkCulledComponent;
	Parms.AudioEvents = AudioEvents;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.ResumePersistantLoops
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                AkComponent                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStruct_PersistentSound>LocalValues                                                      (Edit, BlueprintVisible)
// TArray<class UAkComponent*>        LocalKeys                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_PersistentSound     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PlayPersistSound_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkComponent*>        CallFunc_Map_Keys_Keys                                           (ReferenceParm, ContainsInstancedReference)
// TArray<struct FStruct_PersistentSound>CallFunc_Map_Values_Values                                       (ReferenceParm)

void UComp_PlaceableAudio_C::ResumePersistantLoops(class UAkComponent* AkComponent, const TArray<struct FStruct_PersistentSound>& LocalValues, const TArray<class UAkComponent*>& LocalKeys, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FStruct_PersistentSound& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAkComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UAkAudioEvent* CallFunc_Array_Get_Item_2, int32 CallFunc_PlayPersistSound_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class UAkComponent*>& CallFunc_Map_Keys_Keys, TArray<struct FStruct_PersistentSound>& CallFunc_Map_Values_Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "ResumePersistantLoops");

	Params::UComp_PlaceableAudio_C_ResumePersistantLoops_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.LocalValues = LocalValues;
	Parms.LocalKeys = LocalKeys;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_PlayPersistSound_ReturnValue = CallFunc_PlayPersistSound_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.StopPersistantLoops
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::StopPersistantLoops(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "StopPersistantLoops");

	Params::UComp_PlaceableAudio_C_StopPersistantLoops_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.Am I Visible On Plot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHousingOwnershipActor*      CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UComp_PlaceableAudio_C::Am_I_Visible_On_Plot(class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, enum class EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "Am I Visible On Plot");

	Params::UComp_PlaceableAudio_C_Am_I_Visible_On_Plot_Params Parms{};

	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel = CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue = CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.StopPersistSoundLoop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              PlayingID                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::StopPersistSoundLoop(class UAkComponent* Component, int32& PlayingID, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "StopPersistSoundLoop");

	Params::UComp_PlaceableAudio_C_StopPersistSoundLoop_Params Parms{};

	Parms.Component = Component;
	Parms.PlayingID = PlayingID;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.PlayPersistSoundLoop
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       AudioEvents                                                      (Edit, BlueprintVisible)
// int32                              CallFunc_PlayPersistSound_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_PersistentSound     K2Node_MakeStruct_Struct_PersistentSound                         (HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FStruct_PersistentSound     K2Node_MakeStruct_Struct_PersistentSound_1                       (HasGetValueTypeHash)
// struct FStruct_PersistentSound     CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UComp_PlaceableAudio_C::PlayPersistSoundLoop(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, const TArray<class UAkAudioEvent*>& AudioEvents, int32 CallFunc_PlayPersistSound_ReturnValue, const struct FStruct_PersistentSound& K2Node_MakeStruct_Struct_PersistentSound, TArray<class UAkAudioEvent*>& K2Node_MakeArray_Array, const struct FStruct_PersistentSound& K2Node_MakeStruct_Struct_PersistentSound_1, const struct FStruct_PersistentSound& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "PlayPersistSoundLoop");

	Params::UComp_PlaceableAudio_C_PlayPersistSoundLoop_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.AkComponent = AkComponent;
	Parms.AudioEvents = AudioEvents;
	Parms.CallFunc_PlayPersistSound_ReturnValue = CallFunc_PlayPersistSound_ReturnValue;
	Parms.K2Node_MakeStruct_Struct_PersistentSound = K2Node_MakeStruct_Struct_PersistentSound;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_Struct_PersistentSound_1 = K2Node_MakeStruct_Struct_PersistentSound_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.PlayPersistSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Am_I_Visible_On_Plot_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventComponent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UComp_PlaceableAudio_C::PlayPersistSound(class UAkAudioEvent* AkEvent, class UAkComponent* Component, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "PlayPersistSound");

	Params::UComp_PlaceableAudio_C_PlayPersistSound_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Component = Component;
	Parms.CallFunc_Am_I_Visible_On_Plot_ReturnValue = CallFunc_Am_I_Visible_On_Plot_ReturnValue;
	Parms.CallFunc_AkEventComponent_ReturnValue = CallFunc_AkEventComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.SetSpatialComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULevelerComponent*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkPortalComponent*>  CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// class UAkLateReverbComponent*      CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkRoomComponent*            CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::SetSpatialComponents(class AActor* Actor, class ULevelerComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class UAkPortalComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UAkLateReverbComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAkRoomComponent* CallFunc_GetComponentByClass_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "SetSpatialComponents");

	Params::UComp_PlaceableAudio_C_SetSpatialComponents_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_PlaceableAudio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "ReceiveBeginPlay");

	Params::UComp_PlaceableAudio_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.LevelChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelerComponent*           Leveler                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::LevelChanged(class ULevelerComponent* Leveler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "LevelChanged");

	Params::UComp_PlaceableAudio_C_LevelChanged_Params Parms{};

	Parms.Leveler = Leveler;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_PlaceableAudio_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "show");

	Params::UComp_PlaceableAudio_C_Show_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_PlaceableAudio_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "hide");

	Params::UComp_PlaceableAudio_C_Hide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.EnableSpatialAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::EnableSpatialAudio(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "EnableSpatialAudio");

	Params::UComp_PlaceableAudio_C_EnableSpatialAudio_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.HandleOnActiveHousingSlotChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHousingOwnershipActor*      AHousingOwnershipActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              NewId                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::HandleOnActiveHousingSlotChanged(class AHousingOwnershipActor* AHousingOwnershipActor, int32 NewId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "HandleOnActiveHousingSlotChanged");

	Params::UComp_PlaceableAudio_C_HandleOnActiveHousingSlotChanged_Params Parms{};

	Parms.AHousingOwnershipActor = AHousingOwnershipActor;
	Parms.NewId = NewId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.ExecuteUbergraph_Comp_PlaceableAudio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelerComponent*           K2Node_CustomEvent_Leveler                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAtMaxLevel_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHousingOwnershipActor*      CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Am_I_Visible_On_Plot_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAtMaxLevel_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkPortalComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAssociatedAkEvent_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHousingOwnershipActor*      K2Node_CustomEvent_AHousingOwnershipActor                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewId                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Am_I_Visible_On_Plot_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::ExecuteUbergraph_Comp_PlaceableAudio(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class ULevelerComponent* K2Node_CustomEvent_Leveler, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsAtMaxLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, enum class EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue, bool CallFunc_IsAtMaxLevel_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_CustomEvent_Enable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, class UAkPortalComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, class AHousingOwnershipActor* K2Node_CustomEvent_AHousingOwnershipActor, int32 K2Node_CustomEvent_NewId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "ExecuteUbergraph_Comp_PlaceableAudio");

	Params::UComp_PlaceableAudio_C_ExecuteUbergraph_Comp_PlaceableAudio_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Leveler = K2Node_CustomEvent_Leveler;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsAtMaxLevel_ReturnValue = CallFunc_IsAtMaxLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel = CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel;
	Parms.CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue = CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Am_I_Visible_On_Plot_ReturnValue = CallFunc_Am_I_Visible_On_Plot_ReturnValue;
	Parms.CallFunc_IsAtMaxLevel_ReturnValue_1 = CallFunc_IsAtMaxLevel_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_PostAssociatedAkEvent_ReturnValue = CallFunc_PostAssociatedAkEvent_ReturnValue;
	Parms.K2Node_CustomEvent_AHousingOwnershipActor = K2Node_CustomEvent_AHousingOwnershipActor;
	Parms.K2Node_CustomEvent_NewId = K2Node_CustomEvent_NewId;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Am_I_Visible_On_Plot_ReturnValue_1 = CallFunc_Am_I_Visible_On_Plot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.ResumedLoop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LoopId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_PlaceableAudio_C::ResumedLoop__DelegateSignature(int32 LoopId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "ResumedLoop__DelegateSignature");

	Params::UComp_PlaceableAudio_C_ResumedLoop__DelegateSignature_Params Parms{};

	Parms.LoopId = LoopId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.AudioShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_PlaceableAudio_C::AudioShown__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "AudioShown__DelegateSignature");

	Params::UComp_PlaceableAudio_C_AudioShown__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_PlaceableAudio.Comp_PlaceableAudio_C.AudioHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_PlaceableAudio_C::AudioHidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_PlaceableAudio_C", "AudioHidden__DelegateSignature");

	Params::UComp_PlaceableAudio_C_AudioHidden__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


