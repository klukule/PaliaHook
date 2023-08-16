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


// Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTraceUtilLibrary::TraceMarkRegionStart(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceMarkRegionStart");

	Params::UTraceUtilLibrary_TraceMarkRegionStart_Params Parms{};

	Parms.Name = InName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTraceUtilLibrary::TraceMarkRegionEnd(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceMarkRegionEnd");

	Params::UTraceUtilLibrary_TraceMarkRegionEnd_Params Parms{};

	Parms.Name = InName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TraceUtilities.TraceUtilLibrary.TraceBookmark
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTraceUtilLibrary::TraceBookmark(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "TraceBookmark");

	Params::UTraceUtilLibrary_TraceBookmark_Params Parms{};

	Parms.Name = InName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TraceUtilities.TraceUtilLibrary.ToggleChannel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceUtilLibrary::ToggleChannel(const class FString& InChannelName, bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "ToggleChannel");

	Params::UTraceUtilLibrary_ToggleChannel_Params Parms{};

	Parms.ChannelName = InChannelName;
	Parms.Enabled = InEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.StopTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceUtilLibrary::StopTracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StopTracing");

	Params::UTraceUtilLibrary_StopTracing_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.StartTraceToFile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Channels                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceUtilLibrary::StartTraceToFile(const class FString& InFilename, TArray<class FString>& InChannels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StartTraceToFile");

	Params::UTraceUtilLibrary_StartTraceToFile_Params Parms{};

	Parms.Filename = InFilename;
	Parms.Channels = InChannels;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.StartTraceSendTo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Target                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Channels                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceUtilLibrary::StartTraceSendTo(const class FString& InTarget, TArray<class FString>& InChannels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "StartTraceSendTo");

	Params::UTraceUtilLibrary_StartTraceSendTo_Params Parms{};

	Parms.Target = InTarget;
	Parms.Channels = InChannels;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.ResumeTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceUtilLibrary::ResumeTracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "ResumeTracing");

	Params::UTraceUtilLibrary_ResumeTracing_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.PauseTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceUtilLibrary::PauseTracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "PauseTracing");

	Params::UTraceUtilLibrary_PauseTracing_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.IsTracing
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceUtilLibrary::IsTracing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "IsTracing");

	Params::UTraceUtilLibrary_IsTracing_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.IsChannelEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ChannelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTraceUtilLibrary::IsChannelEnabled(const class FString& InChannelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "IsChannelEnabled");

	Params::UTraceUtilLibrary_IsChannelEnabled_Params Parms{};

	Parms.ChannelName = InChannelName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.GetEnabledChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UTraceUtilLibrary::GetEnabledChannels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "GetEnabledChannels");

	Params::UTraceUtilLibrary_GetEnabledChannels_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TraceUtilities.TraceUtilLibrary.GetAllChannels
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UTraceUtilLibrary::GetAllChannels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TraceUtilLibrary", "GetAllChannels");

	Params::UTraceUtilLibrary_GetAllChannels_Params Parms{};


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
