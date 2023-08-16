#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MAP_PreGame.MAP_PreGame_C.GetRenderStudioSpawnLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AMAP_PreGame_C::GetRenderStudioSpawnLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_PreGame_C", "GetRenderStudioSpawnLocation");

	Params::AMAP_PreGame_C_GetRenderStudioSpawnLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_PreGame.MAP_PreGame_C.GetCharacterInventoryPreviewer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVAL_CharacterPreviewer*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AVAL_CharacterPreviewer* AMAP_PreGame_C::GetCharacterInventoryPreviewer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_PreGame_C", "GetCharacterInventoryPreviewer");

	Params::AMAP_PreGame_C_GetCharacterInventoryPreviewer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_PreGame.MAP_PreGame_C.GetCharacterPreviewer
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVAL_CharacterPreviewer*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CharacterPreview_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class AVAL_CharacterPreviewer* AMAP_PreGame_C::GetCharacterPreviewer(bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CharacterPreview_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_PreGame_C", "GetCharacterPreviewer");

	Params::AMAP_PreGame_C_GetCharacterPreviewer_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_PreGame.MAP_PreGame_C.GetCharacterRenderStudio
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVAL_CharacterRenderStudio*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AVAL_CharacterRenderStudio* AMAP_PreGame_C::GetCharacterRenderStudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_PreGame_C", "GetCharacterRenderStudio");

	Params::AMAP_PreGame_C_GetCharacterRenderStudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_PreGame.MAP_PreGame_C.GetItemPreviewerSpawnLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AMAP_PreGame_C::GetItemPreviewerSpawnLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_PreGame_C", "GetItemPreviewerSpawnLocation");

	Params::AMAP_PreGame_C_GetItemPreviewerSpawnLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_PreGame.MAP_PreGame_C.GetLobbyCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AValeriaCharacter* AMAP_PreGame_C::GetLobbyCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_PreGame_C", "GetLobbyCharacter");

	Params::AMAP_PreGame_C_GetLobbyCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
