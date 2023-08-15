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


// Function AudioCapture.AudioCapture.StopCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioCapture::StopCapturingAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "StopCapturingAudio");

	Params::UAudioCapture_StopCapturingAudio_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioCapture.AudioCapture.StartCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioCapture::StartCapturingAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "StartCapturingAudio");

	Params::UAudioCapture_StartCapturingAudio_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioCapture.AudioCapture.IsCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioCapture::IsCapturingAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "IsCapturingAudio");

	Params::UAudioCapture_IsCapturingAudio_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioCaptureDeviceInfo     OutInfo                                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "GetAudioCaptureDeviceInfo");

	Params::UAudioCapture_GetAudioCaptureDeviceInfo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutInfo != nullptr)
		*OutInfo = Parms.OutInfo;

	return Parms.ReturnValue;

}


// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioCapture*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioCapture* UAudioCaptureFunctionLibrary::CreateAudioCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCaptureFunctionLibrary", "CreateAudioCapture");

	Params::UAudioCaptureFunctionLibrary_CreateAudioCapture_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnObtainDevicesEvent                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices(class UObject* WorldContextObject, FDelegateProperty_& OnObtainDevicesEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCaptureBlueprintLibrary", "GetAvailableAudioInputDevices");

	Params::UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OnObtainDevicesEvent = OnObtainDevicesEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAudioInputDeviceInfo       Info                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAudioCaptureBlueprintLibrary::Conv_AudioInputDeviceInfoToString(struct FAudioInputDeviceInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCaptureBlueprintLibrary", "Conv_AudioInputDeviceInfoToString");

	Params::UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Params Parms{};

	Parms.Info = Info;

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
