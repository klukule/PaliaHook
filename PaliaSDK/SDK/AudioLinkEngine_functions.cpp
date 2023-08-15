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


// Function AudioLinkEngine.AudioLinkBlueprintInterface.StopLink
// (Native, Public, BlueprintCallable)
// Parameters:

void IAudioLinkBlueprintInterface::StopLink()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "StopLink");

	Params::IAudioLinkBlueprintInterface_StopLink_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.SetLinkSound
// (Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  NewSound                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioLinkBlueprintInterface::SetLinkSound(class USoundBase* NewSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "SetLinkSound");

	Params::IAudioLinkBlueprintInterface_SetLinkSound_Params Parms{};

	Parms.NewSound = NewSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.PlayLink
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioLinkBlueprintInterface::PlayLink(float StartTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "PlayLink");

	Params::IAudioLinkBlueprintInterface_PlayLink_Params Parms{};

	Parms.StartTime = StartTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioLinkEngine.AudioLinkBlueprintInterface.IsLinkPlaying
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IAudioLinkBlueprintInterface::IsLinkPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioLinkBlueprintInterface", "IsLinkPlaying");

	Params::IAudioLinkBlueprintInterface_IsLinkPlaying_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
