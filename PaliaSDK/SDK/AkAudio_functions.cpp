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


// Function AkAudio.AkPortalComponent.PortalPlacementValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkPortalComponent::PortalPlacementValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "PortalPlacementValid");

	Params::UAkPortalComponent_PortalPlacementValid_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkPortalComponent.OpenPortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkPortalComponent::OpenPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "OpenPortal");

	Params::UAkPortalComponent_OpenPortal_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkPortalComponent.GetPrimitiveParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "GetPrimitiveParent");

	Params::UAkPortalComponent_GetPrimitiveParent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkPortalComponent.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAkAcousticPortalState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAkAcousticPortalState UAkPortalComponent::GetCurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "GetCurrentState");

	Params::UAkPortalComponent_GetCurrentState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkPortalComponent.ClosePortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkPortalComponent::ClosePortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPortalComponent", "ClosePortal");

	Params::UAkPortalComponent_ClosePortal_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkAcousticPortal.OpenPortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAkAcousticPortal::OpenPortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAcousticPortal", "OpenPortal");

	Params::AAkAcousticPortal_OpenPortal_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkAcousticPortal.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAkAcousticPortalState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAcousticPortal", "GetCurrentState");

	Params::AAkAcousticPortal_GetCurrentState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAcousticPortal.ClosePortal
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAkAcousticPortal::ClosePortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAcousticPortal", "ClosePortal");

	Params::AAkAcousticPortal_ClosePortal_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkAmbientSound.StopAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void AAkAmbientSound::StopAmbientSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAmbientSound", "StopAmbientSound");

	Params::AAkAmbientSound_StopAmbientSound_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void AAkAmbientSound::StartAmbientSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAmbientSound", "StartAmbientSound");

	Params::AAkAmbientSound_StartAmbientSound_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAndroidInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkAudioEvent.GetMinimumDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMinimumDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioEvent", "GetMinimumDuration");

	Params::UAkAudioEvent_GetMinimumDuration_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAudioEvent.GetMaximumDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMaximumDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioEvent", "GetMaximumDuration");

	Params::UAkAudioEvent_GetMaximumDuration_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkAudioEvent::GetMaxAttenuationRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioEvent", "GetMaxAttenuationRadius");

	Params::UAkAudioEvent_GetMaxAttenuationRadius_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAudioEvent.GetIsInfinite
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkAudioEvent::GetIsInfinite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioEvent", "GetIsInfinite");

	Params::UAkAudioEvent_GetIsInfinite_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameObject.Stop
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAkGameObject::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "Stop");

	Params::UAkGameObject_Stop_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameObject.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InterpolationTimeMs                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RTPC                                                             (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameObject::SetRTPCValue(class UAkRtpc* InRTPCValue, float InValue, int32 InInterpolationTimeMs, const class FString& InRTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "SetRTPCValue");

	Params::UAkGameObject_SetRTPCValue_Params Parms{};

	Parms.RTPCValue = InRTPCValue;
	Parms.Value = InValue;
	Parms.InterpolationTimeMs = InInterpolationTimeMs;
	Parms.RTPC = InRTPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameObject::PostAssociatedAkEventAsync(class UObject* InWorldContextObject, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo, int32* InPlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAssociatedAkEventAsync");

	Params::UAkGameObject_PostAssociatedAkEventAsync_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.CallbackMask = InCallbackMask;
	Parms.PostEventCallback = InPostEventCallback;
	Parms.ExternalSources = InExternalSources;
	Parms.LatentInfo = InLatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InPlayingID != nullptr)
		*InPlayingID = Parms.PlayingID;

}


// Function AkAudio.AkGameObject.PostAssociatedAkEvent
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameObject::PostAssociatedAkEvent(int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAssociatedAkEvent");

	Params::UAkGameObject_PostAssociatedAkEvent_Params Parms{};

	Parms.CallbackMask = InCallbackMask;
	Parms.PostEventCallback = InPostEventCallback;
	Parms.ExternalSources = InExternalSources;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameObject.PostAkEventAsync
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

void UAkGameObject::PostAkEventAsync(class UObject* InWorldContextObject, class UAkAudioEvent* InAkEvent, int32* InPlayingID, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAkEventAsync");

	Params::UAkGameObject_PostAkEventAsync_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.AkEvent = InAkEvent;
	Parms.CallbackMask = InCallbackMask;
	Parms.PostEventCallback = InPostEventCallback;
	Parms.ExternalSources = InExternalSources;
	Parms.LatentInfo = InLatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InPlayingID != nullptr)
		*InPlayingID = Parms.PlayingID;

}


// Function AkAudio.AkGameObject.PostAkEvent
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// class FString                      In_EventName                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameObject::PostAkEvent(class UAkAudioEvent* InAkEvent, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, const class FString& InIn_EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAkEvent");

	Params::UAkGameObject_PostAkEvent_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.CallbackMask = InCallbackMask;
	Parms.PostEventCallback = InPostEventCallback;
	Parms.ExternalSources = InExternalSources;
	Parms.In_EventName = InIn_EventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameObject.GetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERTPCValueType          InputValueType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERTPCValueType          OutputValueType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RTPC                                                             (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameObject::GetRTPCValue(class UAkRtpc* InRTPCValue, enum class ERTPCValueType InInputValueType, float* InValue, enum class ERTPCValueType* InOutputValueType, const class FString& InRTPC, int32 InPlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "GetRTPCValue");

	Params::UAkGameObject_GetRTPCValue_Params Parms{};

	Parms.RTPCValue = InRTPCValue;
	Parms.InputValueType = InInputValueType;
	Parms.RTPC = InRTPC;
	Parms.PlayingID = InPlayingID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InValue != nullptr)
		*InValue = Parms.Value;

	if (InOutputValueType != nullptr)
		*InOutputValueType = Parms.OutputValueType;

}


// Function AkAudio.AkComponent.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InUseReverbVolumes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::UseReverbVolumes(bool InInUseReverbVolumes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "UseReverbVolumes");

	Params::UAkComponent_UseReverbVolumes_Params Parms{};

	Parms.InUseReverbVolumes = InInUseReverbVolumes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.UseEarlyReflections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAuxBus*                   AuxBus                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Order                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BusSendGain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SpotReflectors                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AuxBusName                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::UseEarlyReflections(class UAkAuxBus* InAuxBus, int32 InOrder, float InBusSendGain, float InMaxPathLength, bool InSpotReflectors, const class FString& InAuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "UseEarlyReflections");

	Params::UAkComponent_UseEarlyReflections_Params Parms{};

	Parms.AuxBus = InAuxBus;
	Parms.Order = InOrder;
	Parms.BusSendGain = InBusSendGain;
	Parms.MaxPathLength = InMaxPathLength;
	Parms.SpotReflectors = InSpotReflectors;
	Parms.AuxBusName = InAuxBusName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetSwitch
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SwitchGroup                                                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SwitchState                                                      (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetSwitch(class UAkSwitchValue* InSwitchValue, const class FString& InSwitchGroup, const class FString& InSwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetSwitch");

	Params::UAkComponent_SetSwitch_Params Parms{};

	Parms.SwitchValue = InSwitchValue;
	Parms.SwitchGroup = InSwitchGroup;
	Parms.SwitchState = InSwitchState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bStopWhenOwnerDestroyed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetStopWhenOwnerDestroyed(bool InbStopWhenOwnerDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetStopWhenOwnerDestroyed");

	Params::UAkComponent_SetStopWhenOwnerDestroyed_Params Parms{};

	Parms.bStopWhenOwnerDestroyed = InbStopWhenOwnerDestroyed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              BusVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetOutputBusVolume(float InBusVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetOutputBusVolume");

	Params::UAkComponent_SetOutputBusVolume_Params Parms{};

	Parms.BusVolume = InBusVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetListeners
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>        Listeners                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAkComponent::SetListeners(TArray<class UAkComponent*>& InListeners)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetListeners");

	Params::UAkComponent_SetListeners_Params Parms{};

	Parms.Listeners = InListeners;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetGameObjectRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              In_outerRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              In_innerRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetGameObjectRadius(float InIn_outerRadius, float InIn_innerRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetGameObjectRadius");

	Params::UAkComponent_SetGameObjectRadius_Params Parms{};

	Parms.In_outerRadius = InIn_outerRadius;
	Parms.In_innerRadius = InIn_innerRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              SendVolume                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetEarlyReflectionsVolume(float InSendVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetEarlyReflectionsVolume");

	Params::UAkComponent_SetEarlyReflectionsVolume_Params Parms{};

	Parms.SendVolume = InSendVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AuxBusName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetEarlyReflectionsAuxBus(const class FString& InAuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetEarlyReflectionsAuxBus");

	Params::UAkComponent_SetEarlyReflectionsAuxBus_Params Parms{};

	Parms.AuxBusName = InAuxBusName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetAttenuationScalingFactor(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetAttenuationScalingFactor");

	Params::UAkComponent_SetAttenuationScalingFactor_Params Parms{};

	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.PostTrigger
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkTrigger*                  TriggerValue                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Trigger                                                          (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::PostTrigger(class UAkTrigger* InTriggerValue, const class FString& InTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostTrigger");

	Params::UAkComponent_PostTrigger_Params Parms{};

	Parms.TriggerValue = InTriggerValue;
	Parms.Trigger = InTrigger;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32* InPlayingID, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEndAsync");

	Params::UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params Parms{};

	Parms.ExternalSources = InExternalSources;
	Parms.LatentInfo = InLatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InPlayingID != nullptr)
		*InPlayingID = Parms.PlayingID;

}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEnd");

	Params::UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params Parms{};

	Parms.ExternalSources = InExternalSources;
	Parms.LatentInfo = InLatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkComponent.PostAkEventByName
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      In_EventName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkComponent::PostAkEventByName(const class FString& InIn_EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventByName");

	Params::UAkComponent_PostAkEventByName_Params Parms{};

	Parms.In_EventName = InIn_EventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

void UAkComponent::PostAkEventAndWaitForEndAsync(class UAkAudioEvent* InAkEvent, int32* InPlayingID, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventAndWaitForEndAsync");

	Params::UAkComponent_PostAkEventAndWaitForEndAsync_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.ExternalSources = InExternalSources;
	Parms.LatentInfo = InLatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InPlayingID != nullptr)
		*InPlayingID = Parms.PlayingID;

}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      In_EventName                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* InAkEvent, const class FString& InIn_EventName, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventAndWaitForEnd");

	Params::UAkComponent_PostAkEventAndWaitForEnd_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.In_EventName = InIn_EventName;
	Parms.ExternalSources = InExternalSources;
	Parms.LatentInfo = InLatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkComponent.GetAutoDestroy
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkComponent::GetAutoDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "GetAutoDestroy");

	Params::UAkComponent_GetAutoDestroy_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkComponent::GetAttenuationRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "GetAttenuationRadius");

	Params::UAkComponent_GetAttenuationRadius_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkAudioInputComponent::PostAssociatedAudioInputEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAudioInputComponent", "PostAssociatedAudioInputEvent");

	Params::UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InIsChecked                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetIsChecked(bool InInIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetIsChecked");

	Params::UAkCheckBox_SetIsChecked_Params Parms{};

	Parms.InIsChecked = InInIsChecked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkCheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECheckBoxState          InCheckedState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetCheckedState(enum class ECheckBoxState InInCheckedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetCheckedState");

	Params::UAkCheckBox_SetCheckedState_Params Parms{};

	Parms.InCheckedState = InInCheckedState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkCheckBox.SetAkItemId
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetAkItemId(struct FGuid& InItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetAkItemId");

	Params::UAkCheckBox_SetAkItemId_Params Parms{};

	Parms.ItemId = InItemId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkCheckBox.SetAkBoolProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemProperty                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetAkBoolProperty(const class FString& InItemProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetAkBoolProperty");

	Params::UAkCheckBox_SetAkBoolProperty_Params Parms{};

	Parms.ItemProperty = InItemProperty;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkCheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkCheckBox::IsPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "IsPressed");

	Params::UAkCheckBox_IsPressed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkCheckBox::IsChecked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "IsChecked");

	Params::UAkCheckBox_IsChecked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UAkCheckBox::GetCheckedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "GetCheckedState");

	Params::UAkCheckBox_GetCheckedState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.GetAkProperty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkCheckBox::GetAkProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "GetAkProperty");

	Params::UAkCheckBox_GetAkProperty_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkCheckBox.GetAkItemId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UAkCheckBox::GetAkItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "GetAkItemId");

	Params::UAkCheckBox_GetAkItemId_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               InUseReverbVolumes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UseReverbVolumes(bool InInUseReverbVolumes, class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UseReverbVolumes");

	Params::UAkGameplayStatics_UseReverbVolumes_Params Parms{};

	Parms.InUseReverbVolumes = InInUseReverbVolumes;
	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.UseEarlyReflections
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAuxBus*                   AuxBus                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Order                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BusSendGain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxPathLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SpotReflectors                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      AuxBusName                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UseEarlyReflections(class AActor* InActor, class UAkAuxBus* InAuxBus, int32 InOrder, float InBusSendGain, float InMaxPathLength, bool InSpotReflectors, const class FString& InAuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UseEarlyReflections");

	Params::UAkGameplayStatics_UseEarlyReflections_Params Parms{};

	Parms.Actor = InActor;
	Parms.AuxBus = InAuxBus;
	Parms.Order = InOrder;
	Parms.BusSendGain = InBusSendGain;
	Parms.MaxPathLength = InMaxPathLength;
	Parms.SpotReflectors = InSpotReflectors;
	Parms.AuxBusName = InAuxBusName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BankName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBankByName(const class FString& InBankName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBankByName");

	Params::UAkGameplayStatics_UnloadBankByName_Params Parms{};

	Parms.BankName = InBankName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBankAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                Bank                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 BankUnloadedCallback                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBankAsync(class UAkAudioBank* InBank, FDelegateProperty_& InBankUnloadedCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBankAsync");

	Params::UAkGameplayStatics_UnloadBankAsync_Params Parms{};

	Parms.Bank = InBank;
	Parms.BankUnloadedCallback = InBankUnloadedCallback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                Bank                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BankName                                                         (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBank(class UAkAudioBank* InBank, const class FString& InBankName, const struct FLatentActionInfo& InLatentInfo, class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBank");

	Params::UAkGameplayStatics_UnloadBank_Params Parms{};

	Parms.Bank = InBank;
	Parms.BankName = InBankName;
	Parms.LatentInfo = InLatentInfo;
	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::StopProfilerCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopProfilerCapture");

	Params::UAkGameplayStatics_StopProfilerCapture_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::StopOutputCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopOutputCapture");

	Params::UAkGameplayStatics_StopOutputCapture_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StopAllAmbientSounds(class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopAllAmbientSounds");

	Params::UAkGameplayStatics_StopAllAmbientSounds_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StopAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::StopAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopAll");

	Params::UAkGameplayStatics_StopAll_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StopActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StopActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopActor");

	Params::UAkGameplayStatics_StopActor_Params Parms{};

	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartProfilerCapture(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartProfilerCapture");

	Params::UAkGameplayStatics_StartProfilerCapture_Params Parms{};

	Parms.Filename = InFilename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartOutputCapture(const class FString& InFilename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartOutputCapture");

	Params::UAkGameplayStatics_StartOutputCapture_Params Parms{};

	Parms.Filename = InFilename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartAllAmbientSounds(class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartAllAmbientSounds");

	Params::UAkGameplayStatics_StartAllAmbientSounds_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoPost                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AutoDestroy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* InWorldContextObject, class UAkAudioEvent* InAkEvent, const struct FVector& InLocation, const struct FRotator& InOrientation, bool InAutoPost, const class FString& InEventName, bool InAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SpawnAkComponentAtLocation");

	Params::UAkGameplayStatics_SpawnAkComponentAtLocation_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.AkEvent = InAkEvent;
	Parms.Location = InLocation;
	Parms.Orientation = InOrientation;
	Parms.AutoPost = InAutoPost;
	Parms.EventName = InEventName;
	Parms.AutoDestroy = InAutoDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.SetSwitch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SwitchGroup                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SwitchState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetSwitch(class UAkSwitchValue* InSwitchValue, class AActor* InActor, class FName InSwitchGroup, class FName InSwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetSwitch");

	Params::UAkGameplayStatics_SetSwitch_Params Parms{};

	Parms.SwitchValue = InSwitchValue;
	Parms.Actor = InActor;
	Parms.SwitchGroup = InSwitchGroup;
	Parms.SwitchState = InSwitchState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkStateValue*               StateValue                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StateGroup                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetState(class UAkStateValue* InStateValue, class FName InStateGroup, class FName InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetState");

	Params::UAkGameplayStatics_SetState_Params Parms{};

	Parms.StateValue = InStateValue;
	Parms.StateGroup = InStateGroup;
	Parms.State = InState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      SpeakerAngles                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              HeightAngle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DeviceShareset                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetSpeakerAngles(TArray<float>& InSpeakerAngles, float InHeightAngle, const class FString& InDeviceShareset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetSpeakerAngles");

	Params::UAkGameplayStatics_SetSpeakerAngles_Params Parms{};

	Parms.SpeakerAngles = InSpeakerAngles;
	Parms.HeightAngle = InHeightAngle;
	Parms.DeviceShareset = InDeviceShareset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InterpolationTimeMs                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RTPC                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetRTPCValue(class UAkRtpc* InRTPCValue, float InValue, int32 InInterpolationTimeMs, class AActor* InActor, class FName InRTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetRTPCValue");

	Params::UAkGameplayStatics_SetRTPCValue_Params Parms{};

	Parms.RTPCValue = InRTPCValue;
	Parms.Value = InValue;
	Parms.InterpolationTimeMs = InInterpolationTimeMs;
	Parms.Actor = InActor;
	Parms.RTPC = InRTPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetReflectionsOrder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Order                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RefreshPaths                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetReflectionsOrder(int32 InOrder, bool InRefreshPaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetReflectionsOrder");

	Params::UAkGameplayStatics_SetReflectionsOrder_Params Parms{};

	Parms.Order = InOrder;
	Parms.RefreshPaths = InRefreshPaths;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkPortalComponent*          PortalComponent0                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkPortalComponent*          PortalComponent1                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObstructionValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetPortalToPortalObstruction(class UAkPortalComponent* InPortalComponent0, class UAkPortalComponent* InPortalComponent1, float InObstructionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPortalToPortalObstruction");

	Params::UAkGameplayStatics_SetPortalToPortalObstruction_Params Parms{};

	Parms.PortalComponent0 = InPortalComponent0;
	Parms.PortalComponent1 = InPortalComponent1;
	Parms.ObstructionValue = InObstructionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkPortalComponent*          PortalComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObstructionValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OcclusionValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetPortalObstructionAndOcclusion(class UAkPortalComponent* InPortalComponent, float InObstructionValue, float InOcclusionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPortalObstructionAndOcclusion");

	Params::UAkGameplayStatics_SetPortalObstructionAndOcclusion_Params Parms{};

	Parms.PortalComponent = InPortalComponent;
	Parms.ObstructionValue = InObstructionValue;
	Parms.OcclusionValue = InOcclusionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EPanningRule            PanRule                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetPanningRule(enum class EPanningRule InPanRule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPanningRule");

	Params::UAkGameplayStatics_SetPanningRule_Params Parms{};

	Parms.PanRule = InPanRule;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              BusVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOutputBusVolume(float InBusVolume, class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOutputBusVolume");

	Params::UAkGameplayStatics_SetOutputBusVolume_Params Parms{};

	Parms.BusVolume = InBusVolume;
	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ScalingFactor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOcclusionScalingFactor(float InScalingFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOcclusionScalingFactor");

	Params::UAkGameplayStatics_SetOcclusionScalingFactor_Params Parms{};

	Parms.ScalingFactor = InScalingFactor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              RefreshInterval                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOcclusionRefreshInterval(float InRefreshInterval, class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOcclusionRefreshInterval");

	Params::UAkGameplayStatics_SetOcclusionRefreshInterval_Params Parms{};

	Parms.RefreshInterval = InRefreshInterval;
	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetMultiplePositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Positions                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EAkMultiPositionType    MultiPositionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultiplePositions(class UAkComponent* InGameObjectAkComponent, const TArray<struct FTransform>& InPositions, enum class EAkMultiPositionType InMultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultiplePositions");

	Params::UAkGameplayStatics_SetMultiplePositions_Params Parms{};

	Parms.GameObjectAkComponent = InGameObjectAkComponent;
	Parms.Positions = InPositions;
	Parms.MultiPositionType = InMultiPositionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkChannelMask>      ChannelMasks                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Positions                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EAkMultiPositionType    MultiPositionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(class UAkComponent* InGameObjectAkComponent, const TArray<struct FAkChannelMask>& InChannelMasks, const TArray<struct FTransform>& InPositions, enum class EAkMultiPositionType InMultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultipleChannelMaskEmitterPositions");

	Params::UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params Parms{};

	Parms.GameObjectAkComponent = InGameObjectAkComponent;
	Parms.ChannelMasks = InChannelMasks;
	Parms.Positions = InPositions;
	Parms.MultiPositionType = InMultiPositionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<enum class EAkChannelConfiguration>ChannelMasks                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Positions                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EAkMultiPositionType    MultiPositionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(class UAkComponent* InGameObjectAkComponent, const TArray<enum class EAkChannelConfiguration>& InChannelMasks, const TArray<struct FTransform>& InPositions, enum class EAkMultiPositionType InMultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultipleChannelEmitterPositions");

	Params::UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params Parms{};

	Parms.GameObjectAkComponent = InGameObjectAkComponent;
	Parms.ChannelMasks = InChannelMasks;
	Parms.Positions = InPositions;
	Parms.MultiPositionType = InMultiPositionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkPortalComponent*          PortalComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObstructionValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetGameObjectToPortalObstruction(class UAkComponent* InGameObjectAkComponent, class UAkPortalComponent* InPortalComponent, float InObstructionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetGameObjectToPortalObstruction");

	Params::UAkGameplayStatics_SetGameObjectToPortalObstruction_Params Parms{};

	Parms.GameObjectAkComponent = InGameObjectAkComponent;
	Parms.PortalComponent = InPortalComponent;
	Parms.ObstructionValue = InObstructionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AudioCulture                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Completed                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetCurrentAudioCultureAsync(const class FString& InAudioCulture, FDelegateProperty_& InCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetCurrentAudioCultureAsync");

	Params::UAkGameplayStatics_SetCurrentAudioCultureAsync_Params Parms{};

	Parms.AudioCulture = InAudioCulture;
	Parms.Completed = InCompleted;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      AudioCulture                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetCurrentAudioCulture(const class FString& InAudioCulture, const struct FLatentActionInfo& InLatentInfo, class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetCurrentAudioCulture");

	Params::UAkGameplayStatics_SetCurrentAudioCulture_Params Parms{};

	Parms.AudioCulture = InAudioCulture;
	Parms.LatentInfo = InLatentInfo;
	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetBusConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BusName                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAkChannelConfiguration ChannelConfiguration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetBusConfig(const class FString& InBusName, enum class EAkChannelConfiguration InChannelConfiguration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetBusConfig");

	Params::UAkGameplayStatics_SetBusConfig_Params Parms{};

	Parms.BusName = InBusName;
	Parms.ChannelConfiguration = InChannelConfiguration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.ResetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InterpolationTimeMs                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RTPC                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ResetRTPCValue(class UAkRtpc* InRTPCValue, int32 InInterpolationTimeMs, class AActor* InActor, class FName InRTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ResetRTPCValue");

	Params::UAkGameplayStatics_ResetRTPCValue_Params Parms{};

	Parms.RTPCValue = InRTPCValue;
	Parms.InterpolationTimeMs = InInterpolationTimeMs;
	Parms.Actor = InActor;
	Parms.RTPC = InRTPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.ReplaceMainOutput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkOutputSettings           MainOutputSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ReplaceMainOutput(struct FAkOutputSettings& InMainOutputSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ReplaceMainOutput");

	Params::UAkGameplayStatics_ReplaceMainOutput_Params Parms{};

	Parms.MainOutputSettings = InMainOutputSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.PostTrigger
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkTrigger*                  TriggerValue                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Trigger                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostTrigger(class UAkTrigger* InTriggerValue, class AActor* InActor, class FName InTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostTrigger");

	Params::UAkGameplayStatics_PostTrigger_Params Parms{};

	Parms.TriggerValue = InTriggerValue;
	Parms.Actor = InActor;
	Parms.Trigger = InTrigger;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.PostGlobalSwitch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SwitchGroup                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SwitchState                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostGlobalSwitch(class UAkSwitchValue* InSwitchValue, class FName InSwitchGroup, class FName InSwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostGlobalSwitch");

	Params::UAkGameplayStatics_PostGlobalSwitch_Params Parms{};

	Parms.SwitchValue = InSwitchValue;
	Parms.SwitchGroup = InSwitchGroup;
	Parms.SwitchState = InSwitchState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.PostGlobalMusic
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostGlobalMusic(class UAkAudioEvent* InAkEvent, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostGlobalMusic");

	Params::UAkGameplayStatics_PostGlobalMusic_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.CallbackMask = InCallbackMask;
	Parms.PostEventCallback = InPostEventCallback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.PostGlobalEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostGlobalEvent(class UAkAudioEvent* InAkEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostGlobalEvent");

	Params::UAkGameplayStatics_PostGlobalEvent_Params Parms{};

	Parms.AkEvent = InAkEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.PostEventByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostEventByName(const class FString& InEventName, class AActor* InActor, bool InbStopWhenAttachedToDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventByName");

	Params::UAkGameplayStatics_PostEventByName_Params Parms{};

	Parms.EventName = InEventName;
	Parms.Actor = InActor;
	Parms.bStopWhenAttachedToDestroyed = InbStopWhenAttachedToDestroyed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* InAkEvent, class AActor* InActor, class FName InAttachPointName, bool InbStopWhenAttachedToDestroyed, const class FString& InEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAttached");

	Params::UAkGameplayStatics_PostEventAttached_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Actor = InActor;
	Parms.AttachPointName = InAttachPointName;
	Parms.bStopWhenAttachedToDestroyed = InbStopWhenAttachedToDestroyed;
	Parms.EventName = InEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      EventName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostEventAtLocationByName(const class FString& InEventName, const struct FVector& InLocation, const struct FRotator& InOrientation, class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAtLocationByName");

	Params::UAkGameplayStatics_PostEventAtLocationByName_Params Parms{};

	Parms.EventName = InEventName;
	Parms.Location = InLocation;
	Parms.Orientation = InOrientation;
	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* InAkEvent, const struct FVector& InLocation, const struct FRotator& InOrientation, const class FString& InEventName, class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAtLocation");

	Params::UAkGameplayStatics_PostEventAtLocation_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Location = InLocation;
	Parms.Orientation = InOrientation;
	Parms.EventName = InEventName;
	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.PostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostEvent(class UAkAudioEvent* InAkEvent, class AActor* InActor, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, bool InbStopWhenAttachedToDestroyed, const class FString& InEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEvent");

	Params::UAkGameplayStatics_PostEvent_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Actor = InActor;
	Parms.CallbackMask = InCallbackMask;
	Parms.PostEventCallback = InPostEventCallback;
	Parms.ExternalSources = InExternalSources;
	Parms.bStopWhenAttachedToDestroyed = InbStopWhenAttachedToDestroyed;
	Parms.EventName = InEventName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(class UAkAudioEvent* InAkEvent, class AActor* InActor, int32* InPlayingID, bool InbStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostAndWaitForEndOfEventAsync");

	Params::UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Actor = InActor;
	Parms.bStopWhenAttachedToDestroyed = InbStopWhenAttachedToDestroyed;
	Parms.ExternalSources = InExternalSources;
	Parms.LatentInfo = InLatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InPlayingID != nullptr)
		*InPlayingID = Parms.PlayingID;

}


// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// class FString                      EventName                                                        (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameplayStatics::PostAndWaitForEndOfEvent(class UAkAudioEvent* InAkEvent, class AActor* InActor, bool InbStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& InExternalSources, const class FString& InEventName, const struct FLatentActionInfo& InLatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostAndWaitForEndOfEvent");

	Params::UAkGameplayStatics_PostAndWaitForEndOfEvent_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.Actor = InActor;
	Parms.bStopWhenAttachedToDestroyed = InbStopWhenAttachedToDestroyed;
	Parms.ExternalSources = InExternalSources;
	Parms.EventName = InEventName;
	Parms.LatentInfo = InLatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::LoadInitBank()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadInitBank");

	Params::UAkGameplayStatics_LoadInitBank_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.LoadBanks
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UAkAudioBank*>        SoundBanks                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               SynchronizeSoundBanks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*>& InSoundBanks, bool InSynchronizeSoundBanks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBanks");

	Params::UAkGameplayStatics_LoadBanks_Params Parms{};

	Parms.SoundBanks = InSoundBanks;
	Parms.SynchronizeSoundBanks = InSynchronizeSoundBanks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BankName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBankByName(const class FString& InBankName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBankByName");

	Params::UAkGameplayStatics_LoadBankByName_Params Parms{};

	Parms.BankName = InBankName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.LoadBankAsync
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                Bank                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 BankLoadedCallback                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBankAsync(class UAkAudioBank* InBank, FDelegateProperty_& InBankLoadedCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBankAsync");

	Params::UAkGameplayStatics_LoadBankAsync_Params Parms{};

	Parms.Bank = InBank;
	Parms.BankLoadedCallback = InBankLoadedCallback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.LoadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*                Bank                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      BankName                                                         (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBank(class UAkAudioBank* InBank, const class FString& InBankName, const struct FLatentActionInfo& InLatentInfo, class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBank");

	Params::UAkGameplayStatics_LoadBank_Params Parms{};

	Parms.Bank = InBank;
	Parms.BankName = InBankName;
	Parms.LatentInfo = InLatentInfo;
	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.IsGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkGameplayStatics::IsGame(class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "IsGame");

	Params::UAkGameplayStatics_IsGame_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.IsEditor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkGameplayStatics::IsEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "IsEditor");

	Params::UAkGameplayStatics_IsEditor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      SpeakerAngles                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              HeightAngle                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      DeviceShareset                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::GetSpeakerAngles(TArray<float>* InSpeakerAngles, float* InHeightAngle, const class FString& InDeviceShareset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetSpeakerAngles");

	Params::UAkGameplayStatics_GetSpeakerAngles_Params Parms{};

	Parms.DeviceShareset = InDeviceShareset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InSpeakerAngles != nullptr)
		*InSpeakerAngles = Parms.SpeakerAngles;

	if (InHeightAngle != nullptr)
		*InHeightAngle = Parms.HeightAngle;

}


// Function AkAudio.AkGameplayStatics.GetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     RTPCValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERTPCValueType          InputValueType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ERTPCValueType          OutputValueType                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RTPC                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::GetRTPCValue(class UAkRtpc* InRTPCValue, int32 InPlayingID, enum class ERTPCValueType InInputValueType, float* InValue, enum class ERTPCValueType* InOutputValueType, class AActor* InActor, class FName InRTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetRTPCValue");

	Params::UAkGameplayStatics_GetRTPCValue_Params Parms{};

	Parms.RTPCValue = InRTPCValue;
	Parms.PlayingID = InPlayingID;
	Parms.InputValueType = InInputValueType;
	Parms.Actor = InActor;
	Parms.RTPC = InRTPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InValue != nullptr)
		*InValue = Parms.Value;

	if (InOutputValueType != nullptr)
		*InOutputValueType = Parms.OutputValueType;

}


// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkGameplayStatics::GetOcclusionScalingFactor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetOcclusionScalingFactor");

	Params::UAkGameplayStatics_GetOcclusionScalingFactor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkGameplayStatics::GetCurrentAudioCulture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetCurrentAudioCulture");

	Params::UAkGameplayStatics_GetCurrentAudioCulture_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UAkGameplayStatics::GetAvailableAudioCultures()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAvailableAudioCultures");

	Params::UAkGameplayStatics_GetAvailableAudioCultures_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkMediaAsset*               Instance                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Type                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAkGameplayStatics::GetAkMediaAssetUserData(class UAkMediaAsset* InInstance, class UClass* InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkMediaAssetUserData");

	Params::UAkGameplayStatics_GetAkMediaAssetUserData_Params Parms{};

	Parms.Instance = InInstance;
	Parms.Type = InType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ComponentCreated                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkComponent*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* InAttachToComponent, bool* InComponentCreated, class FName InAttachPointName, const struct FVector& InLocation, enum class EAttachLocation InLocationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkComponent");

	Params::UAkGameplayStatics_GetAkComponent_Params Parms{};

	Parms.AttachToComponent = InAttachToComponent;
	Parms.AttachPointName = InAttachPointName;
	Parms.Location = InLocation;
	Parms.LocationType = InLocationType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InComponentCreated != nullptr)
		*InComponentCreated = Parms.ComponentCreated;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioType*                Instance                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Type                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAkGameplayStatics::GetAkAudioTypeUserData(class UAkAudioType* InInstance, class UClass* InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkAudioTypeUserData");

	Params::UAkGameplayStatics_GetAkAudioTypeUserData_Params Parms{};

	Parms.Instance = InInstance;
	Parms.Type = InType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EAkActionOnEventType    ActionType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAkCurveInterpolation   FadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ExecuteActionOnPlayingID(enum class EAkActionOnEventType InActionType, int32 InPlayingID, int32 InTransitionDuration, enum class EAkCurveInterpolation InFadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ExecuteActionOnPlayingID");

	Params::UAkGameplayStatics_ExecuteActionOnPlayingID_Params Parms{};

	Parms.ActionType = InActionType;
	Parms.PlayingID = InPlayingID;
	Parms.TransitionDuration = InTransitionDuration;
	Parms.FadeCurve = InFadeCurve;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAkActionOnEventType    ActionType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAkCurveInterpolation   FadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ExecuteActionOnEvent(class UAkAudioEvent* InAkEvent, enum class EAkActionOnEventType InActionType, class AActor* InActor, int32 InTransitionDuration, enum class EAkCurveInterpolation InFadeCurve, int32 InPlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ExecuteActionOnEvent");

	Params::UAkGameplayStatics_ExecuteActionOnEvent_Params Parms{};

	Parms.AkEvent = InAkEvent;
	Parms.ActionType = InActionType;
	Parms.Actor = InActor;
	Parms.TransitionDuration = InTransitionDuration;
	Parms.FadeCurve = InFadeCurve;
	Parms.PlayingID = InPlayingID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.ClearBanks
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UAkGameplayStatics::ClearBanks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ClearBanks");

	Params::UAkGameplayStatics_ClearBanks_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.CancelEventCallback
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::CancelEventCallback(FDelegateProperty_& InPostEventCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "CancelEventCallback");

	Params::UAkGameplayStatics_CancelEventCallback_Params Parms{};

	Parms.PostEventCallback = InPostEventCallback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      MarkerText                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::AddOutputCaptureMarker(const class FString& InMarkerText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "AddOutputCaptureMarker");

	Params::UAkGameplayStatics_AddOutputCaptureMarker_Params Parms{};

	Parms.MarkerText = InMarkerText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAkMidiEventType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetType");

	Params::UAkMIDIEventCallbackInfo_GetType_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiProgramChange        AsProgramChange                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* InAsProgramChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetProgramChange");

	Params::UAkMIDIEventCallbackInfo_GetProgramChange_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InAsProgramChange != nullptr)
		*InAsProgramChange = Parms.AsProgramChange;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiPitchBend            AsPitchBend                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* InAsPitchBend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetPitchBend");

	Params::UAkMIDIEventCallbackInfo_GetPitchBend_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InAsPitchBend != nullptr)
		*InAsPitchBend = Parms.AsPitchBend;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff            AsNoteOn                                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* InAsNoteOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOn");

	Params::UAkMIDIEventCallbackInfo_GetNoteOn_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InAsNoteOn != nullptr)
		*InAsNoteOn = Parms.AsNoteOn;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff            AsNoteOff                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* InAsNoteOff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOff");

	Params::UAkMIDIEventCallbackInfo_GetNoteOff_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InAsNoteOff != nullptr)
		*InAsNoteOff = Parms.AsNoteOff;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteAftertouch       AsNoteAftertouch                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* InAsNoteAftertouch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteAftertouch");

	Params::UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InAsNoteAftertouch != nullptr)
		*InAsNoteAftertouch = Parms.AsNoteAftertouch;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiGeneric              AsGeneric                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* InAsGeneric)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetGeneric");

	Params::UAkMIDIEventCallbackInfo_GetGeneric_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InAsGeneric != nullptr)
		*InAsGeneric = Parms.AsGeneric;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiChannelAftertouch    AsChannelAftertouch                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* InAsChannelAftertouch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetChannelAftertouch");

	Params::UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InAsChannelAftertouch != nullptr)
		*InAsChannelAftertouch = Parms.AsChannelAftertouch;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UAkMIDIEventCallbackInfo::GetChannel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetChannel");

	Params::UAkMIDIEventCallbackInfo_GetChannel_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiCc                   AsCc                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* InAsCc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetCc");

	Params::UAkMIDIEventCallbackInfo_GetCc_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InAsCc != nullptr)
		*InAsCc = Parms.AsCc;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGeometryComponent.UpdateGeometry
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkGeometryComponent::UpdateGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGeometryComponent", "UpdateGeometry");

	Params::UAkGeometryComponent_UpdateGeometry_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGeometryComponent.SendGeometry
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkGeometryComponent::SendGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGeometryComponent", "SendGeometry");

	Params::UAkGeometryComponent_SendGeometry_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGeometryComponent.RemoveGeometry
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkGeometryComponent::RemoveGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGeometryComponent", "RemoveGeometry");

	Params::UAkGeometryComponent_RemoveGeometry_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGeometryComponent.ConvertMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkGeometryComponent::ConvertMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGeometryComponent", "ConvertMesh");

	Params::UAkGeometryComponent_ConvertMesh_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkHololensInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl    INAkBoolPropertyToControl                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& InINAkBoolPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolPropertiesConv", "Conv_FAkBoolPropertyToControlToText");

	Params::UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params Parms{};

	Parms.INAkBoolPropertyToControl = InINAkBoolPropertyToControl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkBoolPropertyToControl    INAkBoolPropertyToControl                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& InINAkBoolPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolPropertiesConv", "Conv_FAkBoolPropertyToControlToString");

	Params::UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params Parms{};

	Parms.INAkBoolPropertyToControl = InINAkBoolPropertyToControl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemBoolProperties.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewText                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkItemBoolProperties::SetSearchText(const class FString& InNewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolProperties", "SetSearchText");

	Params::UAkItemBoolProperties_SetSearchText_Params Parms{};

	Parms.NewText = InNewText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemBoolProperties::GetSelectedProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolProperties", "GetSelectedProperty");

	Params::UAkItemBoolProperties_GetSelectedProperty_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemBoolProperties.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemBoolProperties::GetSearchText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolProperties", "GetSearchText");

	Params::UAkItemBoolProperties_GetSearchText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkPropertyToControl        INAkPropertyToControl                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& InINAkPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemPropertiesConv", "Conv_FAkPropertyToControlToText");

	Params::UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params Parms{};

	Parms.INAkPropertyToControl = InINAkPropertyToControl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkPropertyToControl        INAkPropertyToControl                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& InINAkPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemPropertiesConv", "Conv_FAkPropertyToControlToString");

	Params::UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params Parms{};

	Parms.INAkPropertyToControl = InINAkPropertyToControl;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemProperties.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewText                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkItemProperties::SetSearchText(const class FString& InNewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemProperties", "SetSearchText");

	Params::UAkItemProperties_SetSearchText_Params Parms{};

	Parms.NewText = InNewText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkItemProperties.GetSelectedProperty
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemProperties::GetSelectedProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemProperties", "GetSelectedProperty");

	Params::UAkItemProperties_GetSelectedProperty_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkItemProperties.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkItemProperties::GetSearchText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemProperties", "GetSearchText");

	Params::UAkItemProperties_GetSearchText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAcousticTextureSetComponent*TextureSetComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkLateReverbComponent::AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* InTextureSetComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkLateReverbComponent", "AssociateAkTextureSetComponent");

	Params::UAkLateReverbComponent_AssociateAkTextureSetComponent_Params Parms{};

	Parms.TextureSetComponent = InTextureSetComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkLinuxInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMacInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkMacInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPS4InitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkRoomComponent.SetGeometryComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAcousticTextureSetComponent*TextureSetComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkRoomComponent::SetGeometryComponent(class UAkAcousticTextureSetComponent* InTextureSetComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkRoomComponent", "SetGeometryComponent");

	Params::UAkRoomComponent_SetGeometryComponent_Params Parms{};

	Parms.TextureSetComponent = InTextureSetComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkRoomComponent.GetPrimitiveParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkRoomComponent", "GetPrimitiveParent");

	Params::UAkRoomComponent_GetPrimitiveParent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkSlider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetValue(float InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetValue");

	Params::UAkSlider_SetValue_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetStepSize(float InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetStepSize");

	Params::UAkSlider_SetStepSize_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetSliderHandleColor");

	Params::UAkSlider_SetSliderHandleColor_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetSliderBarColor(const struct FLinearColor& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetSliderBarColor");

	Params::UAkSlider_SetSliderBarColor_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetLocked(bool InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetLocked");

	Params::UAkSlider_SetLocked_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetIndentHandle(bool InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetIndentHandle");

	Params::UAkSlider_SetIndentHandle_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemProperty                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetAkSliderItemProperty(const class FString& InItemProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetAkSliderItemProperty");

	Params::UAkSlider_SetAkSliderItemProperty_Params Parms{};

	Parms.ItemProperty = InItemProperty;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetAkSliderItemId
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetAkSliderItemId(struct FGuid& InItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetAkSliderItemId");

	Params::UAkSlider_SetAkSliderItemId_Params Parms{};

	Parms.ItemId = InItemId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkSlider::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "GetValue");

	Params::UAkSlider_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkSlider.GetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkSlider::GetAkSliderItemProperty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "GetAkSliderItemProperty");

	Params::UAkSlider_GetAkSliderItemProperty_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkSlider.GetAkSliderItemId
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UAkSlider::GetAkSliderItemId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "GetAkSliderItemId");

	Params::UAkSlider_GetAkSliderItemId_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSurfaceReflectorSetComponent", "UpdateSurfaceReflectorSet");

	Params::UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSurfaceReflectorSetComponent", "SendSurfaceReflectorSet");

	Params::UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSurfaceReflectorSetComponent", "RemoveSurfaceReflectorSet");

	Params::UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSwitchInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkWaapiCalls.Unsubscribe
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId      SubscriptionId                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               UnsubscriptionDone                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(struct FAkWaapiSubscriptionId& InSubscriptionId, bool* InUnsubscriptionDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Unsubscribe");

	Params::UAkWaapiCalls_Unsubscribe_Params Parms{};

	Parms.SubscriptionId = InSubscriptionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InUnsubscriptionDone != nullptr)
		*InUnsubscriptionDone = Parms.UnsubscriptionDone;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiUri                 WaapiUri                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          WaapiOptions                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAkWaapiSubscriptionId      SubscriptionId                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               SubscriptionDone                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(struct FAkWaapiUri& InWaapiUri, struct FAKWaapiJsonObject& InWaapiOptions, FDelegateProperty_& InCallback, struct FAkWaapiSubscriptionId* InSubscriptionId, bool* InSubscriptionDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "SubscribeToWaapi");

	Params::UAkWaapiCalls_SubscribeToWaapi_Params Parms{};

	Parms.WaapiUri = InWaapiUri;
	Parms.WaapiOptions = InWaapiOptions;
	Parms.Callback = InCallback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InSubscriptionId != nullptr)
		*InSubscriptionId = Parms.SubscriptionId;

	if (InSubscriptionDone != nullptr)
		*InSubscriptionDone = Parms.SubscriptionDone;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.SetSubscriptionID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId      Subscription                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWaapiCalls::SetSubscriptionID(struct FAkWaapiSubscriptionId& InSubscription, int32 InID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "SetSubscriptionID");

	Params::UAkWaapiCalls_SetSubscriptionID_Params Parms{};

	Parms.Subscription = InSubscription;
	Parms.ID = InID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(FDelegateProperty_& InCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "RegisterWaapiProjectLoadedCallback");

	Params::UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params Parms{};

	Parms.Callback = InCallback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(FDelegateProperty_& InCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "RegisterWaapiConnectionLostCallback");

	Params::UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params Parms{};

	Parms.Callback = InCallback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.GetSubscriptionID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId      Subscription                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkWaapiCalls::GetSubscriptionID(struct FAkWaapiSubscriptionId& InSubscription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "GetSubscriptionID");

	Params::UAkWaapiCalls_GetSubscriptionID_Params Parms{};

	Parms.Subscription = InSubscription;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId      INAkWaapiSubscriptionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& InINAkWaapiSubscriptionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Conv_FAkWaapiSubscriptionIdToText");

	Params::UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params Parms{};

	Parms.INAkWaapiSubscriptionId = InINAkWaapiSubscriptionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiSubscriptionId      INAkWaapiSubscriptionId                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& InINAkWaapiSubscriptionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Conv_FAkWaapiSubscriptionIdToString");

	Params::UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params Parms{};

	Parms.INAkWaapiSubscriptionId = InINAkWaapiSubscriptionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.CallWaapi
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiUri                 WaapiUri                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          WaapiArgs                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          WaapiOptions                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(struct FAkWaapiUri& InWaapiUri, struct FAKWaapiJsonObject& InWaapiArgs, struct FAKWaapiJsonObject& InWaapiOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "CallWaapi");

	Params::UAkWaapiCalls_CallWaapi_Params Parms{};

	Parms.WaapiUri = InWaapiUri;
	Parms.WaapiArgs = InWaapiArgs;
	Parms.WaapiOptions = InWaapiOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames          INAkWaapiFieldNames                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& InINAkWaapiFieldNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SAkWaapiFieldNamesConv", "Conv_FAkWaapiFieldNamesToText");

	Params::USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params Parms{};

	Parms.INAkWaapiFieldNames = InINAkWaapiFieldNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiFieldNames          INAkWaapiFieldNames                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& InINAkWaapiFieldNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SAkWaapiFieldNamesConv", "Conv_FAkWaapiFieldNamesToString");

	Params::USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params Parms{};

	Parms.INAkWaapiFieldNames = InINAkWaapiFieldNames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetStringField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      FieldValue                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(struct FAkWaapiFieldNames& InFieldName, const class FString& InFieldValue, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetStringField");

	Params::UAkWaapiJsonManager_SetStringField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.FieldValue = InFieldValue;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetObjectField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          FieldValue                                                       (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InFieldValue, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetObjectField");

	Params::UAkWaapiJsonManager_SetObjectField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.FieldValue = InFieldValue;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetNumberField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              FieldValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(struct FAkWaapiFieldNames& InFieldName, float InFieldValue, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetNumberField");

	Params::UAkWaapiJsonManager_SetNumberField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.FieldValue = InFieldValue;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetBoolField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               FieldValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(struct FAkWaapiFieldNames& InFieldName, bool InFieldValue, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetBoolField");

	Params::UAkWaapiJsonManager_SetBoolField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.FieldValue = InFieldValue;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              FieldStringValues                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(struct FAkWaapiFieldNames& InFieldName, TArray<class FString>& InFieldStringValues, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetArrayStringFields");

	Params::UAkWaapiJsonManager_SetArrayStringFields_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.FieldStringValues = InFieldStringValues;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject>  FieldObjectValues                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(struct FAkWaapiFieldNames& InFieldName, TArray<struct FAKWaapiJsonObject>& InFieldObjectValues, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetArrayObjectFields");

	Params::UAkWaapiJsonManager_SetArrayObjectFields_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.FieldObjectValues = InFieldObjectValues;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetStringField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWaapiJsonManager::GetStringField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetStringField");

	Params::UAkWaapiJsonManager_GetStringField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetObjectField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetObjectField");

	Params::UAkWaapiJsonManager_GetObjectField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetNumberField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAkWaapiJsonManager::GetNumberField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetNumberField");

	Params::UAkWaapiJsonManager_GetNumberField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetIntegerField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkWaapiJsonManager::GetIntegerField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetIntegerField");

	Params::UAkWaapiJsonManager_GetIntegerField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetBoolField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkWaapiJsonManager::GetBoolField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetBoolField");

	Params::UAkWaapiJsonManager_GetBoolField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.GetArrayField
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiFieldNames          FieldName                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAKWaapiJsonObject          Target                                                           (Parm, NativeAccessSpecifierPublic)
// TArray<struct FAKWaapiJsonObject>  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetArrayField");

	Params::UAkWaapiJsonManager_GetArrayField_Params Parms{};

	Parms.FieldName = InFieldName;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject          INAKWaapiJsonObject                                              (Parm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& InINAKWaapiJsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "Conv_FAKWaapiJsonObjectToText");

	Params::UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params Parms{};

	Parms.INAKWaapiJsonObject = InINAKWaapiJsonObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAKWaapiJsonObject          INAKWaapiJsonObject                                              (Parm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& InINAKWaapiJsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "Conv_FAKWaapiJsonObjectToString");

	Params::UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params Parms{};

	Parms.INAKWaapiJsonObject = InINAKWaapiJsonObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiUri                 INAkWaapiUri                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(struct FAkWaapiUri& InINAkWaapiUri)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiUriConv", "Conv_FAkWaapiUriToText");

	Params::UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params Parms{};

	Parms.INAkWaapiUri = InINAkWaapiUri;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAkWaapiUri                 INAkWaapiUri                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(struct FAkWaapiUri& InINAkWaapiUri)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiUriConv", "Conv_FAkWaapiUriToString");

	Params::UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params Parms{};

	Parms.INAkWaapiUri = InINAkWaapiUri;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWindowsInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkWwiseTree.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewText                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWwiseTree::SetSearchText(const class FString& InNewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWwiseTree", "SetSearchText");

	Params::UAkWwiseTree_SetSearchText_Params Parms{};

	Parms.NewText = InNewText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkWwiseTree.GetSelectedItem
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAkWwiseObjectDetails       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWwiseTree", "GetSelectedItem");

	Params::UAkWwiseTree_GetSelectedItem_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWwiseTree.GetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAkWwiseTree::GetSearchText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWwiseTree", "GetSearchText");

	Params::UAkWwiseTree_GetSearchText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkXboxOneInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.PostEventAsync.PostEventAsync
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                               bStopWhenAttachedToDestroyed                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPostEventAsync*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPostEventAsync* UPostEventAsync::PostEventAsync(class UObject* InWorldContextObject, class UAkAudioEvent* InAkEvent, class AActor* InActor, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, bool InbStopWhenAttachedToDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAsync", "PostEventAsync");

	Params::UPostEventAsync_PostEventAsync_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.AkEvent = InAkEvent;
	Parms.Actor = InActor;
	Parms.CallbackMask = InCallbackMask;
	Parms.PostEventCallback = InPostEventCallback;
	Parms.ExternalSources = InExternalSources;
	Parms.bStopWhenAttachedToDestroyed = InbStopWhenAttachedToDestroyed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.PostEventAsync.PollPostEventFuture
// (Final, Native, Private)
// Parameters:

void UPostEventAsync::PollPostEventFuture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAsync", "PollPostEventFuture");

	Params::UPostEventAsync_PollPostEventFuture_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UPostEventAtLocationAsync*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPostEventAtLocationAsync* UPostEventAtLocationAsync::PostEventAtLocationAsync(class UObject* InWorldContextObject, class UAkAudioEvent* InAkEvent, const struct FVector& InLocation, const struct FRotator& InOrientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAtLocationAsync", "PostEventAtLocationAsync");

	Params::UPostEventAtLocationAsync_PostEventAtLocationAsync_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.AkEvent = InAkEvent;
	Parms.Location = InLocation;
	Parms.Orientation = InOrientation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
// (Final, Native, Private)
// Parameters:

void UPostEventAtLocationAsync::PollPostEventFuture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAtLocationAsync", "PollPostEventFuture");

	Params::UPostEventAtLocationAsync_PollPostEventFuture_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
