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


// Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractorNv", "SetAnimDriveDamperStiffness");

	Params::UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Params Parms{};

	Parms.InStiffness = InStiffness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
