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


// Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImgMediaSource::SetTokenizedSequencePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetTokenizedSequencePath");

	Params::UImgMediaSource_SetTokenizedSequencePath_Params Parms{};

	Parms.Path = Path;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ImgMedia.ImgMediaSource.SetSequencePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImgMediaSource::SetSequencePath(const class FString& Path)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetSequencePath");

	Params::UImgMediaSource_SetSequencePath_Params Parms{};

	Parms.Path = Path;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ImgMedia.ImgMediaSource.SetMipLevelDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImgMediaSource::SetMipLevelDistance(float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "SetMipLevelDistance");

	Params::UImgMediaSource_SetMipLevelDistance_Params Parms{};

	Parms.Distance = Distance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ImgMedia.ImgMediaSource.RemoveTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImgMediaSource::RemoveTargetObject(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "RemoveTargetObject");

	Params::UImgMediaSource_RemoveTargetObject_Params Parms{};

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImgMediaSource::RemoveGlobalCamera(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "RemoveGlobalCamera");

	Params::UImgMediaSource_RemoveGlobalCamera_Params Parms{};

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ImgMedia.ImgMediaSource.GetSequencePath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UImgMediaSource::GetSequencePath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "GetSequencePath");

	Params::UImgMediaSource_GetSequencePath_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ImgMedia.ImgMediaSource.GetProxies
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              OutProxies                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UImgMediaSource::GetProxies(TArray<class FString>* OutProxies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "GetProxies");

	Params::UImgMediaSource_GetProxies_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutProxies != nullptr)
		*OutProxies = Parms.OutProxies;

}


// Function ImgMedia.ImgMediaSource.AddTargetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImgMediaSource::AddTargetObject(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "AddTargetObject");

	Params::UImgMediaSource_AddTargetObject_Params Parms{};

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ImgMedia.ImgMediaSource.AddGlobalCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImgMediaSource::AddGlobalCamera(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ImgMediaSource", "AddGlobalCamera");

	Params::UImgMediaSource_AddGlobalCamera_Params Parms{};

	Parms.InActor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
