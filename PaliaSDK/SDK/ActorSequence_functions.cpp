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


// Function ActorSequence.ActorSequenceComponent.StopSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActorSequenceComponent::StopSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActorSequenceComponent", "StopSequence");

	Params::UActorSequenceComponent_StopSequence_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ActorSequence.ActorSequenceComponent.PlaySequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActorSequenceComponent::PlaySequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActorSequenceComponent", "PlaySequence");

	Params::UActorSequenceComponent_PlaySequence_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ActorSequence.ActorSequenceComponent.PauseSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UActorSequenceComponent::PauseSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActorSequenceComponent", "PauseSequence");

	Params::UActorSequenceComponent_PauseSequence_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
