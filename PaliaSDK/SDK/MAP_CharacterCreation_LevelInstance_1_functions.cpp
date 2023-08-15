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


// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetAllTaggedActors
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSet<class AActor*>                ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TSet<class AActor*>                K2Node_MakeSet_Set                                               ()

TSet<class AActor*> AMAP_CharacterCreation_C::GetAllTaggedActors(TSet<class AActor*> K2Node_MakeSet_Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterCreation_C", "GetAllTaggedActors");

	Params::AMAP_CharacterCreation_C_GetAllTaggedActors_Params Parms{};

	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetCameraActorForCosmeticAsset
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UVAL_CharacterCustomizationItemBase*Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EVAL_CharacterBodyType  BodyType                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// TSet<class UClass*>                FacialCamClassTargets                                            (Edit, BlueprintVisible)
// class AActor*                      Actor                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSet<class UClass*>                K2Node_MakeVariable_MakeVariableOutput                           ()
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetDefaultCameraActor_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EVAL_CharacterBodyType  Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class AActor* AMAP_CharacterCreation_C::GetCameraActorForCosmeticAsset(class UVAL_CharacterCustomizationItemBase* Item, enum class EVAL_CharacterBodyType BodyType, TSet<class UClass*> FacialCamClassTargets, class AActor* Actor, class AActor* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSet<class UClass*> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Set_Contains_ReturnValue, class AActor* CallFunc_GetDefaultCameraActor_ReturnValue, class AActor* Temp_object_Variable_1, enum class EVAL_CharacterBodyType Temp_byte_Variable, class AActor* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterCreation_C", "GetCameraActorForCosmeticAsset");

	Params::AMAP_CharacterCreation_C_GetCameraActorForCosmeticAsset_Params Parms{};

	Parms.Item = Item;
	Parms.BodyType = BodyType;
	Parms.FacialCamClassTargets = FacialCamClassTargets;
	Parms.Actor = Actor;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_GetDefaultCameraActor_ReturnValue = CallFunc_GetDefaultCameraActor_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetAllCameraActors
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSet<class AActor*>                ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TSet<class AActor*>                K2Node_MakeSet_Set                                               ()

TSet<class AActor*> AMAP_CharacterCreation_C::GetAllCameraActors(TSet<class AActor*> K2Node_MakeSet_Set)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterCreation_C", "GetAllCameraActors");

	Params::AMAP_CharacterCreation_C_GetAllCameraActors_Params Parms{};

	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetDefaultCameraActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* AMAP_CharacterCreation_C::GetDefaultCameraActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterCreation_C", "GetDefaultCameraActor");

	Params::AMAP_CharacterCreation_C_GetDefaultCameraActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AValeriaCharacter*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AValeriaCharacter* AMAP_CharacterCreation_C::GetCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterCreation_C", "GetCharacter");

	Params::AMAP_CharacterCreation_C_GetCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMAP_CharacterCreation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterCreation_C", "ReceiveBeginPlay");

	Params::AMAP_CharacterCreation_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMAP_CharacterCreation_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterCreation_C", "ReceiveEndPlay");

	Params::AMAP_CharacterCreation_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.ExecuteUbergraph_MAP_CharacterCreation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomManager*     CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacterCustomManager*     CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVAL_CharacterRenderStudio*  CallFunc_GetCharacterRenderStudio_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AVAL_CharacterRenderStudio*  CallFunc_GetCharacterRenderStudio_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMAP_CharacterCreation_C::ExecuteUbergraph_MAP_CharacterCreation(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UCharacterCustomManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UCharacterCustomManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AVAL_CharacterRenderStudio* CallFunc_GetCharacterRenderStudio_ReturnValue, class AVAL_CharacterRenderStudio* CallFunc_GetCharacterRenderStudio_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterCreation_C", "ExecuteUbergraph_MAP_CharacterCreation");

	Params::AMAP_CharacterCreation_C_ExecuteUbergraph_MAP_CharacterCreation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1 = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCharacterRenderStudio_ReturnValue = CallFunc_GetCharacterRenderStudio_ReturnValue;
	Parms.CallFunc_GetCharacterRenderStudio_ReturnValue_1 = CallFunc_GetCharacterRenderStudio_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
