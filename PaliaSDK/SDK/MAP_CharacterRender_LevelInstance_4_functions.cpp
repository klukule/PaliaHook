#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C
// (Actor)

class UClass* AMAP_CharacterRender_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MAP_CharacterRender_C");

	return Clss;
}


// MAP_CharacterRender_C MAP_CharacterRender_LevelInstance_4.Default__MAP_CharacterRender_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMAP_CharacterRender_C* AMAP_CharacterRender_C::GetDefaultObj()
{
	static class AMAP_CharacterRender_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMAP_CharacterRender_C*>(AMAP_CharacterRender_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetAllTaggedActors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSet<class AActor*>                ReturnValue                                                      (Parm, OutParm, ReturnParm)

TSet<class AActor*> AMAP_CharacterRender_C::GetAllTaggedActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterRender_C", "GetAllTaggedActors");

	Params::AMAP_CharacterRender_C_GetAllTaggedActors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetAllCameraActors
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSet<class AActor*>                ReturnValue                                                      (Parm, OutParm, ReturnParm)

TSet<class AActor*> AMAP_CharacterRender_C::GetAllCameraActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterRender_C", "GetAllCameraActors");

	Params::AMAP_CharacterRender_C_GetAllCameraActors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetCameraActorForCosmeticAsset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UVAL_CharacterCustomizationItemBase*Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EVAL_CharacterBodyType  BodyType                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* AMAP_CharacterRender_C::GetCameraActorForCosmeticAsset(class UVAL_CharacterCustomizationItemBase* Item, enum class EVAL_CharacterBodyType BodyType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterRender_C", "GetCameraActorForCosmeticAsset");

	Params::AMAP_CharacterRender_C_GetCameraActorForCosmeticAsset_Params Parms{};

	Parms.Item = Item;
	Parms.BodyType = BodyType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AValeriaCharacter*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AValeriaCharacter* AMAP_CharacterRender_C::GetCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterRender_C", "GetCharacter");

	Params::AMAP_CharacterRender_C_GetCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetDefaultCameraActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* AMAP_CharacterRender_C::GetDefaultCameraActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterRender_C", "GetDefaultCameraActor");

	Params::AMAP_CharacterRender_C_GetDefaultCameraActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMAP_CharacterRender_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterRender_C", "ReceiveBeginPlay");

	Params::AMAP_CharacterRender_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.ExecuteUbergraph_MAP_CharacterRender
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMAP_CharacterRender_C::ExecuteUbergraph_MAP_CharacterRender(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_CharacterRender_C", "ExecuteUbergraph_MAP_CharacterRender");

	Params::AMAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


