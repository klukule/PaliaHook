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


// Function S6BlueprintExtensionsRuntime.S6BPFunctorObjectBase.SelfDestruct
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void US6BPFunctorObjectBase::SelfDestruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6BPFunctorObjectBase", "SelfDestruct");

	Params::US6BPFunctorObjectBase_SelfDestruct_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
