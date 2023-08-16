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


// Function TeleporterInterface.TeleporterInterface_C.GetTeleportEntrance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTeleportFromComponent*      TeleportEntrance                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ITeleporterInterface_C::GetTeleportEntrance(class UTeleportFromComponent** InTeleportEntrance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeleporterInterface_C", "GetTeleportEntrance");

	Params::ITeleporterInterface_C_GetTeleportEntrance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InTeleportEntrance != nullptr)
		*InTeleportEntrance = Parms.TeleportEntrance;

}


// Function TeleporterInterface.TeleporterInterface_C.GetTeleporterExitNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTeleportToComponent*        TeleporterExitNode                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ITeleporterInterface_C::GetTeleporterExitNode(class UTeleportToComponent** InTeleporterExitNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeleporterInterface_C", "GetTeleporterExitNode");

	Params::ITeleporterInterface_C_GetTeleporterExitNode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InTeleporterExitNode != nullptr)
		*InTeleporterExitNode = Parms.TeleporterExitNode;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
