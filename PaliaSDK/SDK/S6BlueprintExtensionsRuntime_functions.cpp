#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6BlueprintExtensionsRuntime.S6BPFunctorObjectBase
// (None)

class UClass* US6BPFunctorObjectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6BPFunctorObjectBase");

	return Clss;
}


// S6BPFunctorObjectBase S6BlueprintExtensionsRuntime.Default__S6BPFunctorObjectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class US6BPFunctorObjectBase* US6BPFunctorObjectBase::GetDefaultObj()
{
	static class US6BPFunctorObjectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<US6BPFunctorObjectBase*>(US6BPFunctorObjectBase::StaticClass()->DefaultObject);

	return Default;
}


// Function S6BlueprintExtensionsRuntime.S6BPFunctorObjectBase.SelfDestruct
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void US6BPFunctorObjectBase::SelfDestruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6BPFunctorObjectBase", "SelfDestruct");

	Params::US6BPFunctorObjectBase_SelfDestruct_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


