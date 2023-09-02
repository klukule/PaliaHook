#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TeleporterInterface.TeleporterInterface_C
// (None)

class UClass* ITeleporterInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeleporterInterface_C");

	return Clss;
}


// TeleporterInterface_C TeleporterInterface.Default__TeleporterInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ITeleporterInterface_C* ITeleporterInterface_C::GetDefaultObj()
{
	static class ITeleporterInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ITeleporterInterface_C*>(ITeleporterInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TeleporterInterface.TeleporterInterface_C.GetTeleportEntrance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTeleportFromComponent*      TeleportEntrance                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ITeleporterInterface_C::GetTeleportEntrance(class UTeleportFromComponent** TeleportEntrance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeleporterInterface_C", "GetTeleportEntrance");

	Params::ITeleporterInterface_C_GetTeleportEntrance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TeleportEntrance != nullptr)
		*TeleportEntrance = Parms.TeleportEntrance;

}


// Function TeleporterInterface.TeleporterInterface_C.GetTeleporterExitNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTeleportToComponent*        TeleporterExitNode                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ITeleporterInterface_C::GetTeleporterExitNode(class UTeleportToComponent** TeleporterExitNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeleporterInterface_C", "GetTeleporterExitNode");

	Params::ITeleporterInterface_C_GetTeleporterExitNode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TeleporterExitNode != nullptr)
		*TeleporterExitNode = Parms.TeleporterExitNode;

}

}


