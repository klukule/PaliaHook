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

void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkAndroidInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

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

void UAkGameObject::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, const class FString& RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "SetRTPCValue");

	Params::UAkGameObject_SetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.Value = Value;
	Parms.InterpolationTimeMs = InterpolationTimeMs;
	Parms.RTPC = RTPC;

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

void UAkGameObject::PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo, int32* PlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAssociatedAkEventAsync");

	Params::UAkGameObject_PostAssociatedAkEventAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

}


// Function AkAudio.AkGameObject.PostAssociatedAkEvent
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkGameObject::PostAssociatedAkEvent(int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAssociatedAkEvent");

	Params::UAkGameObject_PostAssociatedAkEvent_Params Parms{};

	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;

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

void UAkGameObject::PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32* PlayingID, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAkEventAsync");

	Params::UAkGameObject_PostAkEventAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

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

int32 UAkGameObject::PostAkEvent(class UAkAudioEvent* AkEvent, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& In_EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "PostAkEvent");

	Params::UAkGameObject_PostAkEvent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.In_EventName = In_EventName;

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

void UAkGameObject::GetRTPCValue(class UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, const class FString& RTPC, int32 PlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameObject", "GetRTPCValue");

	Params::UAkGameObject_GetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.InputValueType = InputValueType;
	Parms.RTPC = RTPC;
	Parms.PlayingID = PlayingID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (OutputValueType != nullptr)
		*OutputValueType = Parms.OutputValueType;

}


// Function AkAudio.AkComponent.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InUseReverbVolumes                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::UseReverbVolumes(bool InUseReverbVolumes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "UseReverbVolumes");

	Params::UAkComponent_UseReverbVolumes_Params Parms{};

	Parms.InUseReverbVolumes = InUseReverbVolumes;

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

void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "UseEarlyReflections");

	Params::UAkComponent_UseEarlyReflections_Params Parms{};

	Parms.AuxBus = AuxBus;
	Parms.Order = Order;
	Parms.BusSendGain = BusSendGain;
	Parms.MaxPathLength = MaxPathLength;
	Parms.SpotReflectors = SpotReflectors;
	Parms.AuxBusName = AuxBusName;

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

void UAkComponent::SetSwitch(class UAkSwitchValue* SwitchValue, const class FString& SwitchGroup, const class FString& SwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetSwitch");

	Params::UAkComponent_SetSwitch_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.SwitchGroup = SwitchGroup;
	Parms.SwitchState = SwitchState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bStopWhenOwnerDestroyed                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetStopWhenOwnerDestroyed");

	Params::UAkComponent_SetStopWhenOwnerDestroyed_Params Parms{};

	Parms.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              BusVolume                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetOutputBusVolume");

	Params::UAkComponent_SetOutputBusVolume_Params Parms{};

	Parms.BusVolume = BusVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetListeners
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UAkComponent*>        Listeners                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAkComponent::SetListeners(TArray<class UAkComponent*>& Listeners)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetListeners");

	Params::UAkComponent_SetListeners_Params Parms{};

	Parms.Listeners = Listeners;

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

void UAkComponent::SetGameObjectRadius(float In_outerRadius, float In_innerRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetGameObjectRadius");

	Params::UAkComponent_SetGameObjectRadius_Params Parms{};

	Parms.In_outerRadius = In_outerRadius;
	Parms.In_innerRadius = In_innerRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              SendVolume                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetEarlyReflectionsVolume(float SendVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetEarlyReflectionsVolume");

	Params::UAkComponent_SetEarlyReflectionsVolume_Params Parms{};

	Parms.SendVolume = SendVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AuxBusName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetEarlyReflectionsAuxBus(const class FString& AuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetEarlyReflectionsAuxBus");

	Params::UAkComponent_SetEarlyReflectionsAuxBus_Params Parms{};

	Parms.AuxBusName = AuxBusName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "SetAttenuationScalingFactor");

	Params::UAkComponent_SetAttenuationScalingFactor_Params Parms{};

	Parms.Value = Value;

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

void UAkComponent::PostTrigger(class UAkTrigger* TriggerValue, const class FString& Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostTrigger");

	Params::UAkComponent_PostTrigger_Params Parms{};

	Parms.TriggerValue = TriggerValue;
	Parms.Trigger = Trigger;

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

void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int32* PlayingID, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEndAsync");

	Params::UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params Parms{};

	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

}


// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAssociatedAkEventAndWaitForEnd");

	Params::UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params Parms{};

	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

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

int32 UAkComponent::PostAkEventByName(const class FString& In_EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventByName");

	Params::UAkComponent_PostAkEventByName_Params Parms{};

	Parms.In_EventName = In_EventName;

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

void UAkComponent::PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32* PlayingID, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventAndWaitForEndAsync");

	Params::UAkComponent_PostAkEventAndWaitForEndAsync_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

}


// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      In_EventName                                                     (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FAkExternalSourceInfo>ExternalSources                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const class FString& In_EventName, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkComponent", "PostAkEventAndWaitForEnd");

	Params::UAkComponent_PostAkEventAndWaitForEnd_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.In_EventName = In_EventName;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

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

void UAkCheckBox::SetIsChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetIsChecked");

	Params::UAkCheckBox_SetIsChecked_Params Parms{};

	Parms.InIsChecked = InIsChecked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkCheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECheckBoxState          InCheckedState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetCheckedState(enum class ECheckBoxState InCheckedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetCheckedState");

	Params::UAkCheckBox_SetCheckedState_Params Parms{};

	Parms.InCheckedState = InCheckedState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkCheckBox.SetAkItemId
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetAkItemId(struct FGuid& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetAkItemId");

	Params::UAkCheckBox_SetAkItemId_Params Parms{};

	Parms.ItemId = ItemId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkCheckBox.SetAkBoolProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemProperty                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkCheckBox::SetAkBoolProperty(const class FString& ItemProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkCheckBox", "SetAkBoolProperty");

	Params::UAkCheckBox_SetAkBoolProperty_Params Parms{};

	Parms.ItemProperty = ItemProperty;

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

void UAkGameplayStatics::UseReverbVolumes(bool InUseReverbVolumes, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UseReverbVolumes");

	Params::UAkGameplayStatics_UseReverbVolumes_Params Parms{};

	Parms.InUseReverbVolumes = InUseReverbVolumes;
	Parms.Actor = Actor;

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

void UAkGameplayStatics::UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const class FString& AuxBusName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UseEarlyReflections");

	Params::UAkGameplayStatics_UseEarlyReflections_Params Parms{};

	Parms.Actor = Actor;
	Parms.AuxBus = AuxBus;
	Parms.Order = Order;
	Parms.BusSendGain = BusSendGain;
	Parms.MaxPathLength = MaxPathLength;
	Parms.SpotReflectors = SpotReflectors;
	Parms.AuxBusName = AuxBusName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BankName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::UnloadBankByName(const class FString& BankName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBankByName");

	Params::UAkGameplayStatics_UnloadBankByName_Params Parms{};

	Parms.BankName = BankName;

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

void UAkGameplayStatics::UnloadBankAsync(class UAkAudioBank* Bank, FDelegateProperty_& BankUnloadedCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBankAsync");

	Params::UAkGameplayStatics_UnloadBankAsync_Params Parms{};

	Parms.Bank = Bank;
	Parms.BankUnloadedCallback = BankUnloadedCallback;

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

void UAkGameplayStatics::UnloadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "UnloadBank");

	Params::UAkGameplayStatics_UnloadBank_Params Parms{};

	Parms.Bank = Bank;
	Parms.BankName = BankName;
	Parms.LatentInfo = LatentInfo;
	Parms.WorldContextObject = WorldContextObject;

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

void UAkGameplayStatics::StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopAllAmbientSounds");

	Params::UAkGameplayStatics_StopAllAmbientSounds_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

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

void UAkGameplayStatics::StopActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StopActor");

	Params::UAkGameplayStatics_StopActor_Params Parms{};

	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartProfilerCapture(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartProfilerCapture");

	Params::UAkGameplayStatics_StartProfilerCapture_Params Parms{};

	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartOutputCapture(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartOutputCapture");

	Params::UAkGameplayStatics_StartOutputCapture_Params Parms{};

	Parms.Filename = Filename;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "StartAllAmbientSounds");

	Params::UAkGameplayStatics_StartAllAmbientSounds_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

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

class UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const class FString& EventName, bool AutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SpawnAkComponentAtLocation");

	Params::UAkGameplayStatics_SpawnAkComponentAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Orientation = Orientation;
	Parms.AutoPost = AutoPost;
	Parms.EventName = EventName;
	Parms.AutoDestroy = AutoDestroy;

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

void UAkGameplayStatics::SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, class FName SwitchGroup, class FName SwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetSwitch");

	Params::UAkGameplayStatics_SetSwitch_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.Actor = Actor;
	Parms.SwitchGroup = SwitchGroup;
	Parms.SwitchState = SwitchState;

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

void UAkGameplayStatics::SetState(class UAkStateValue* StateValue, class FName StateGroup, class FName State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetState");

	Params::UAkGameplayStatics_SetState_Params Parms{};

	Parms.StateValue = StateValue;
	Parms.StateGroup = StateGroup;
	Parms.State = State;

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

void UAkGameplayStatics::SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, const class FString& DeviceShareset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetSpeakerAngles");

	Params::UAkGameplayStatics_SetSpeakerAngles_Params Parms{};

	Parms.SpeakerAngles = SpeakerAngles;
	Parms.HeightAngle = HeightAngle;
	Parms.DeviceShareset = DeviceShareset;

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

void UAkGameplayStatics::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetRTPCValue");

	Params::UAkGameplayStatics_SetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.Value = Value;
	Parms.InterpolationTimeMs = InterpolationTimeMs;
	Parms.Actor = Actor;
	Parms.RTPC = RTPC;

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

void UAkGameplayStatics::SetReflectionsOrder(int32 Order, bool RefreshPaths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetReflectionsOrder");

	Params::UAkGameplayStatics_SetReflectionsOrder_Params Parms{};

	Parms.Order = Order;
	Parms.RefreshPaths = RefreshPaths;

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

void UAkGameplayStatics::SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPortalToPortalObstruction");

	Params::UAkGameplayStatics_SetPortalToPortalObstruction_Params Parms{};

	Parms.PortalComponent0 = PortalComponent0;
	Parms.PortalComponent1 = PortalComponent1;
	Parms.ObstructionValue = ObstructionValue;

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

void UAkGameplayStatics::SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPortalObstructionAndOcclusion");

	Params::UAkGameplayStatics_SetPortalObstructionAndOcclusion_Params Parms{};

	Parms.PortalComponent = PortalComponent;
	Parms.ObstructionValue = ObstructionValue;
	Parms.OcclusionValue = OcclusionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetPanningRule
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EPanningRule            PanRule                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetPanningRule(enum class EPanningRule PanRule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetPanningRule");

	Params::UAkGameplayStatics_SetPanningRule_Params Parms{};

	Parms.PanRule = PanRule;

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

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOutputBusVolume");

	Params::UAkGameplayStatics_SetOutputBusVolume_Params Parms{};

	Parms.BusVolume = BusVolume;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              ScalingFactor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOcclusionScalingFactor");

	Params::UAkGameplayStatics_SetOcclusionScalingFactor_Params Parms{};

	Parms.ScalingFactor = ScalingFactor;

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

void UAkGameplayStatics::SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetOcclusionRefreshInterval");

	Params::UAkGameplayStatics_SetOcclusionRefreshInterval_Params Parms{};

	Parms.RefreshInterval = RefreshInterval;
	Parms.Actor = Actor;

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

void UAkGameplayStatics::SetMultiplePositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultiplePositions");

	Params::UAkGameplayStatics_SetMultiplePositions_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.Positions = Positions;
	Parms.MultiPositionType = MultiPositionType;

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

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<struct FAkChannelMask>& ChannelMasks, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultipleChannelMaskEmitterPositions");

	Params::UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.ChannelMasks = ChannelMasks;
	Parms.Positions = Positions;
	Parms.MultiPositionType = MultiPositionType;

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

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, const TArray<enum class EAkChannelConfiguration>& ChannelMasks, const TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetMultipleChannelEmitterPositions");

	Params::UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.ChannelMasks = ChannelMasks;
	Parms.Positions = Positions;
	Parms.MultiPositionType = MultiPositionType;

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

void UAkGameplayStatics::SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetGameObjectToPortalObstruction");

	Params::UAkGameplayStatics_SetGameObjectToPortalObstruction_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.PortalComponent = PortalComponent;
	Parms.ObstructionValue = ObstructionValue;

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

void UAkGameplayStatics::SetCurrentAudioCultureAsync(const class FString& AudioCulture, FDelegateProperty_& Completed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetCurrentAudioCultureAsync");

	Params::UAkGameplayStatics_SetCurrentAudioCultureAsync_Params Parms{};

	Parms.AudioCulture = AudioCulture;
	Parms.Completed = Completed;

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

void UAkGameplayStatics::SetCurrentAudioCulture(const class FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetCurrentAudioCulture");

	Params::UAkGameplayStatics_SetCurrentAudioCulture_Params Parms{};

	Parms.AudioCulture = AudioCulture;
	Parms.LatentInfo = LatentInfo;
	Parms.WorldContextObject = WorldContextObject;

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

void UAkGameplayStatics::SetBusConfig(const class FString& BusName, enum class EAkChannelConfiguration ChannelConfiguration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "SetBusConfig");

	Params::UAkGameplayStatics_SetBusConfig_Params Parms{};

	Parms.BusName = BusName;
	Parms.ChannelConfiguration = ChannelConfiguration;

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

void UAkGameplayStatics::ResetRTPCValue(class UAkRtpc* RTPCValue, int32 InterpolationTimeMs, class AActor* Actor, class FName RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ResetRTPCValue");

	Params::UAkGameplayStatics_ResetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.InterpolationTimeMs = InterpolationTimeMs;
	Parms.Actor = Actor;
	Parms.RTPC = RTPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.ReplaceMainOutput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkOutputSettings           MainOutputSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAkGameplayStatics::ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ReplaceMainOutput");

	Params::UAkGameplayStatics_ReplaceMainOutput_Params Parms{};

	Parms.MainOutputSettings = MainOutputSettings;

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

void UAkGameplayStatics::PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, class FName Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostTrigger");

	Params::UAkGameplayStatics_PostTrigger_Params Parms{};

	Parms.TriggerValue = TriggerValue;
	Parms.Actor = Actor;
	Parms.Trigger = Trigger;

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

void UAkGameplayStatics::PostGlobalSwitch(class UAkSwitchValue* SwitchValue, class FName SwitchGroup, class FName SwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostGlobalSwitch");

	Params::UAkGameplayStatics_PostGlobalSwitch_Params Parms{};

	Parms.SwitchValue = SwitchValue;
	Parms.SwitchGroup = SwitchGroup;
	Parms.SwitchState = SwitchState;

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

int32 UAkGameplayStatics::PostGlobalMusic(class UAkAudioEvent* AkEvent, int32 CallbackMask, FDelegateProperty_& PostEventCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostGlobalMusic");

	Params::UAkGameplayStatics_PostGlobalMusic_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;

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

int32 UAkGameplayStatics::PostGlobalEvent(class UAkAudioEvent* AkEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostGlobalEvent");

	Params::UAkGameplayStatics_PostGlobalEvent_Params Parms{};

	Parms.AkEvent = AkEvent;

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

void UAkGameplayStatics::PostEventByName(const class FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventByName");

	Params::UAkGameplayStatics_PostEventByName_Params Parms{};

	Parms.EventName = EventName;
	Parms.Actor = Actor;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

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

int32 UAkGameplayStatics::PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, class FName AttachPointName, bool bStopWhenAttachedToDestroyed, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAttached");

	Params::UAkGameplayStatics_PostEventAttached_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.AttachPointName = AttachPointName;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.EventName = EventName;

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

void UAkGameplayStatics::PostEventAtLocationByName(const class FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAtLocationByName");

	Params::UAkGameplayStatics_PostEventAtLocationByName_Params Parms{};

	Parms.EventName = EventName;
	Parms.Location = Location;
	Parms.Orientation = Orientation;
	Parms.WorldContextObject = WorldContextObject;

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

int32 UAkGameplayStatics::PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const class FString& EventName, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEventAtLocation");

	Params::UAkGameplayStatics_PostEventAtLocation_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Orientation = Orientation;
	Parms.EventName = EventName;
	Parms.WorldContextObject = WorldContextObject;

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

int32 UAkGameplayStatics::PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const class FString& EventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostEvent");

	Params::UAkGameplayStatics_PostEvent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.EventName = EventName;

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

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostAndWaitForEndOfEventAsync");

	Params::UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.ExternalSources = ExternalSources;
	Parms.LatentInfo = LatentInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PlayingID != nullptr)
		*PlayingID = Parms.PlayingID;

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

int32 UAkGameplayStatics::PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& ExternalSources, const class FString& EventName, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "PostAndWaitForEndOfEvent");

	Params::UAkGameplayStatics_PostAndWaitForEndOfEvent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	Parms.ExternalSources = ExternalSources;
	Parms.EventName = EventName;
	Parms.LatentInfo = LatentInfo;

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

void UAkGameplayStatics::LoadBanks(TArray<class UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBanks");

	Params::UAkGameplayStatics_LoadBanks_Params Parms{};

	Parms.SoundBanks = SoundBanks;
	Parms.SynchronizeSoundBanks = SynchronizeSoundBanks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      BankName                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::LoadBankByName(const class FString& BankName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBankByName");

	Params::UAkGameplayStatics_LoadBankByName_Params Parms{};

	Parms.BankName = BankName;

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

void UAkGameplayStatics::LoadBankAsync(class UAkAudioBank* Bank, FDelegateProperty_& BankLoadedCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBankAsync");

	Params::UAkGameplayStatics_LoadBankAsync_Params Parms{};

	Parms.Bank = Bank;
	Parms.BankLoadedCallback = BankLoadedCallback;

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

void UAkGameplayStatics::LoadBank(class UAkAudioBank* Bank, const class FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "LoadBank");

	Params::UAkGameplayStatics_LoadBank_Params Parms{};

	Parms.Bank = Bank;
	Parms.BankName = BankName;
	Parms.LatentInfo = LatentInfo;
	Parms.WorldContextObject = WorldContextObject;

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

bool UAkGameplayStatics::IsGame(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "IsGame");

	Params::UAkGameplayStatics_IsGame_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

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

void UAkGameplayStatics::GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const class FString& DeviceShareset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetSpeakerAngles");

	Params::UAkGameplayStatics_GetSpeakerAngles_Params Parms{};

	Parms.DeviceShareset = DeviceShareset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SpeakerAngles != nullptr)
		*SpeakerAngles = Parms.SpeakerAngles;

	if (HeightAngle != nullptr)
		*HeightAngle = Parms.HeightAngle;

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

void UAkGameplayStatics::GetRTPCValue(class UAkRtpc* RTPCValue, int32 PlayingID, enum class ERTPCValueType InputValueType, float* Value, enum class ERTPCValueType* OutputValueType, class AActor* Actor, class FName RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetRTPCValue");

	Params::UAkGameplayStatics_GetRTPCValue_Params Parms{};

	Parms.RTPCValue = RTPCValue;
	Parms.PlayingID = PlayingID;
	Parms.InputValueType = InputValueType;
	Parms.Actor = Actor;
	Parms.RTPC = RTPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (OutputValueType != nullptr)
		*OutputValueType = Parms.OutputValueType;

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

class UObject* UAkGameplayStatics::GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkMediaAssetUserData");

	Params::UAkGameplayStatics_GetAkMediaAssetUserData_Params Parms{};

	Parms.Instance = Instance;
	Parms.Type = Type;

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

class UAkComponent* UAkGameplayStatics::GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, class FName AttachPointName, const struct FVector& Location, enum class EAttachLocation LocationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkComponent");

	Params::UAkGameplayStatics_GetAkComponent_Params Parms{};

	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.LocationType = LocationType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ComponentCreated != nullptr)
		*ComponentCreated = Parms.ComponentCreated;

	return Parms.ReturnValue;

}


// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioType*                Instance                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Type                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAkGameplayStatics::GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "GetAkAudioTypeUserData");

	Params::UAkGameplayStatics_GetAkAudioTypeUserData_Params Parms{};

	Parms.Instance = Instance;
	Parms.Type = Type;

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

void UAkGameplayStatics::ExecuteActionOnPlayingID(enum class EAkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ExecuteActionOnPlayingID");

	Params::UAkGameplayStatics_ExecuteActionOnPlayingID_Params Parms{};

	Parms.ActionType = ActionType;
	Parms.PlayingID = PlayingID;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;

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

void UAkGameplayStatics::ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, enum class EAkActionOnEventType ActionType, class AActor* Actor, int32 TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32 PlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "ExecuteActionOnEvent");

	Params::UAkGameplayStatics_ExecuteActionOnEvent_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.ActionType = ActionType;
	Parms.Actor = Actor;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;
	Parms.PlayingID = PlayingID;

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

void UAkGameplayStatics::CancelEventCallback(FDelegateProperty_& PostEventCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "CancelEventCallback");

	Params::UAkGameplayStatics_CancelEventCallback_Params Parms{};

	Parms.PostEventCallback = PostEventCallback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      MarkerText                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkGameplayStatics::AddOutputCaptureMarker(const class FString& MarkerText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkGameplayStatics", "AddOutputCaptureMarker");

	Params::UAkGameplayStatics_AddOutputCaptureMarker_Params Parms{};

	Parms.MarkerText = MarkerText;

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

bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetProgramChange");

	Params::UAkMIDIEventCallbackInfo_GetProgramChange_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AsProgramChange != nullptr)
		*AsProgramChange = Parms.AsProgramChange;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiPitchBend            AsPitchBend                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetPitchBend");

	Params::UAkMIDIEventCallbackInfo_GetPitchBend_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AsPitchBend != nullptr)
		*AsPitchBend = Parms.AsPitchBend;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff            AsNoteOn                                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOn");

	Params::UAkMIDIEventCallbackInfo_GetNoteOn_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AsNoteOn != nullptr)
		*AsNoteOn = Parms.AsNoteOn;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteOnOff            AsNoteOff                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteOff");

	Params::UAkMIDIEventCallbackInfo_GetNoteOff_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AsNoteOff != nullptr)
		*AsNoteOff = Parms.AsNoteOff;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiNoteAftertouch       AsNoteAftertouch                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetNoteAftertouch");

	Params::UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AsNoteAftertouch != nullptr)
		*AsNoteAftertouch = Parms.AsNoteAftertouch;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiGeneric              AsGeneric                                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetGeneric");

	Params::UAkMIDIEventCallbackInfo_GetGeneric_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AsGeneric != nullptr)
		*AsGeneric = Parms.AsGeneric;

	return Parms.ReturnValue;

}


// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkMidiChannelAftertouch    AsChannelAftertouch                                              (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetChannelAftertouch");

	Params::UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AsChannelAftertouch != nullptr)
		*AsChannelAftertouch = Parms.AsChannelAftertouch;

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

bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMIDIEventCallbackInfo", "GetCc");

	Params::UAkMIDIEventCallbackInfo_GetCc_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AsCc != nullptr)
		*AsCc = Parms.AsCc;

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

void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkHololensInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

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

class FText UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolPropertiesConv", "Conv_FAkBoolPropertyToControlToText");

	Params::UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params Parms{};

	Parms.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

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

class FString UAkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolPropertiesConv", "Conv_FAkBoolPropertyToControlToString");

	Params::UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params Parms{};

	Parms.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

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

void UAkItemBoolProperties::SetSearchText(const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemBoolProperties", "SetSearchText");

	Params::UAkItemBoolProperties_SetSearchText_Params Parms{};

	Parms.NewText = NewText;

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

class FText UAkItemPropertiesConv::Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemPropertiesConv", "Conv_FAkPropertyToControlToText");

	Params::UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params Parms{};

	Parms.INAkPropertyToControl = INAkPropertyToControl;

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

class FString UAkItemPropertiesConv::Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemPropertiesConv", "Conv_FAkPropertyToControlToString");

	Params::UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params Parms{};

	Parms.INAkPropertyToControl = INAkPropertyToControl;

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

void UAkItemProperties::SetSearchText(const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkItemProperties", "SetSearchText");

	Params::UAkItemProperties_SetSearchText_Params Parms{};

	Parms.NewText = NewText;

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

void UAkLateReverbComponent::AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* TextureSetComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkLateReverbComponent", "AssociateAkTextureSetComponent");

	Params::UAkLateReverbComponent_AssociateAkTextureSetComponent_Params Parms{};

	Parms.TextureSetComponent = TextureSetComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkLinuxInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMacInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkMacInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
// (Final, Native, Public)
// Parameters:
// bool                               NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkPS4InitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkRoomComponent.SetGeometryComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAcousticTextureSetComponent*TextureSetComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkRoomComponent::SetGeometryComponent(class UAkAcousticTextureSetComponent* TextureSetComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkRoomComponent", "SetGeometryComponent");

	Params::UAkRoomComponent_SetGeometryComponent_Params Parms{};

	Parms.TextureSetComponent = TextureSetComponent;

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

void UAkSlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetValue");

	Params::UAkSlider_SetValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetStepSize(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetStepSize");

	Params::UAkSlider_SetStepSize_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetSliderHandleColor");

	Params::UAkSlider_SetSliderHandleColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetSliderBarColor");

	Params::UAkSlider_SetSliderBarColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetLocked(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetLocked");

	Params::UAkSlider_SetLocked_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetIndentHandle(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetIndentHandle");

	Params::UAkSlider_SetIndentHandle_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetAkSliderItemProperty
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ItemProperty                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetAkSliderItemProperty(const class FString& ItemProperty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetAkSliderItemProperty");

	Params::UAkSlider_SetAkSliderItemProperty_Params Parms{};

	Parms.ItemProperty = ItemProperty;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkSlider.SetAkSliderItemId
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       ItemId                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkSlider::SetAkSliderItemId(struct FGuid& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSlider", "SetAkSliderItemId");

	Params::UAkSlider_SetAkSliderItemId_Params Parms{};

	Parms.ItemId = ItemId;

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

void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkSwitchInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

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

struct FAKWaapiJsonObject UAkWaapiCalls::Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Unsubscribe");

	Params::UAkWaapiCalls_Unsubscribe_Params Parms{};

	Parms.SubscriptionId = SubscriptionId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (UnsubscriptionDone != nullptr)
		*UnsubscriptionDone = Parms.UnsubscriptionDone;

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

struct FAKWaapiJsonObject UAkWaapiCalls::SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, FDelegateProperty_& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "SubscribeToWaapi");

	Params::UAkWaapiCalls_SubscribeToWaapi_Params Parms{};

	Parms.WaapiUri = WaapiUri;
	Parms.WaapiOptions = WaapiOptions;
	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SubscriptionId != nullptr)
		*SubscriptionId = Parms.SubscriptionId;

	if (SubscriptionDone != nullptr)
		*SubscriptionDone = Parms.SubscriptionDone;

	return Parms.ReturnValue;

}


// Function AkAudio.AkWaapiCalls.SetSubscriptionID
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAkWaapiSubscriptionId      Subscription                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ID                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWaapiCalls::SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "SetSubscriptionID");

	Params::UAkWaapiCalls_SetSubscriptionID_Params Parms{};

	Parms.Subscription = Subscription;
	Parms.ID = ID;

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

bool UAkWaapiCalls::RegisterWaapiProjectLoadedCallback(FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "RegisterWaapiProjectLoadedCallback");

	Params::UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params Parms{};

	Parms.Callback = Callback;

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

bool UAkWaapiCalls::RegisterWaapiConnectionLostCallback(FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "RegisterWaapiConnectionLostCallback");

	Params::UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params Parms{};

	Parms.Callback = Callback;

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

int32 UAkWaapiCalls::GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "GetSubscriptionID");

	Params::UAkWaapiCalls_GetSubscriptionID_Params Parms{};

	Parms.Subscription = Subscription;

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

class FText UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Conv_FAkWaapiSubscriptionIdToText");

	Params::UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params Parms{};

	Parms.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

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

class FString UAkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "Conv_FAkWaapiSubscriptionIdToString");

	Params::UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params Parms{};

	Parms.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

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

struct FAKWaapiJsonObject UAkWaapiCalls::CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiCalls", "CallWaapi");

	Params::UAkWaapiCalls_CallWaapi_Params Parms{};

	Parms.WaapiUri = WaapiUri;
	Parms.WaapiArgs = WaapiArgs;
	Parms.WaapiOptions = WaapiOptions;

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

class FText USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SAkWaapiFieldNamesConv", "Conv_FAkWaapiFieldNamesToText");

	Params::USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params Parms{};

	Parms.INAkWaapiFieldNames = INAkWaapiFieldNames;

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

class FString USAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SAkWaapiFieldNamesConv", "Conv_FAkWaapiFieldNamesToString");

	Params::USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params Parms{};

	Parms.INAkWaapiFieldNames = INAkWaapiFieldNames;

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

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetStringField(struct FAkWaapiFieldNames& FieldName, const class FString& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetStringField");

	Params::UAkWaapiJsonManager_SetStringField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;
	Parms.Target = Target;

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

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetObjectField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetObjectField");

	Params::UAkWaapiJsonManager_SetObjectField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;
	Parms.Target = Target;

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

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetNumberField");

	Params::UAkWaapiJsonManager_SetNumberField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;
	Parms.Target = Target;

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

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetBoolField");

	Params::UAkWaapiJsonManager_SetBoolField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldValue = FieldValue;
	Parms.Target = Target;

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

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, TArray<class FString>& FieldStringValues, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetArrayStringFields");

	Params::UAkWaapiJsonManager_SetArrayStringFields_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldStringValues = FieldStringValues;
	Parms.Target = Target;

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

struct FAKWaapiJsonObject UAkWaapiJsonManager::SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject>& FieldObjectValues, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "SetArrayObjectFields");

	Params::UAkWaapiJsonManager_SetArrayObjectFields_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.FieldObjectValues = FieldObjectValues;
	Parms.Target = Target;

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

class FString UAkWaapiJsonManager::GetStringField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetStringField");

	Params::UAkWaapiJsonManager_GetStringField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

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

struct FAKWaapiJsonObject UAkWaapiJsonManager::GetObjectField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetObjectField");

	Params::UAkWaapiJsonManager_GetObjectField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

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

float UAkWaapiJsonManager::GetNumberField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetNumberField");

	Params::UAkWaapiJsonManager_GetNumberField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

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

int32 UAkWaapiJsonManager::GetIntegerField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetIntegerField");

	Params::UAkWaapiJsonManager_GetIntegerField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

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

bool UAkWaapiJsonManager::GetBoolField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetBoolField");

	Params::UAkWaapiJsonManager_GetBoolField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

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

TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::GetArrayField(struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "GetArrayField");

	Params::UAkWaapiJsonManager_GetArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Target = Target;

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

class FText UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "Conv_FAKWaapiJsonObjectToText");

	Params::UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params Parms{};

	Parms.INAKWaapiJsonObject = INAKWaapiJsonObject;

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

class FString UAkWaapiJsonManager::Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiJsonManager", "Conv_FAKWaapiJsonObjectToString");

	Params::UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params Parms{};

	Parms.INAKWaapiJsonObject = INAKWaapiJsonObject;

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

class FText UAkWaapiUriConv::Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiUriConv", "Conv_FAkWaapiUriToText");

	Params::UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params Parms{};

	Parms.INAkWaapiUri = INAkWaapiUri;

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

class FString UAkWaapiUriConv::Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWaapiUriConv", "Conv_FAkWaapiUriToString");

	Params::UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params Parms{};

	Parms.INAkWaapiUri = INAkWaapiUri;

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

void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWindowsInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AkAudio.AkWwiseTree.SetSearchText
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewText                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkWwiseTree::SetSearchText(const class FString& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkWwiseTree", "SetSearchText");

	Params::UAkWwiseTree_SetSearchText_Params Parms{};

	Parms.NewText = NewText;

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

void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkXboxOneInitializationSettings", "MigrateMultiCoreRendering");

	Params::UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params Parms{};

	Parms.NewValue = NewValue;

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

class UPostEventAsync* UPostEventAsync::PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32 CallbackMask, FDelegateProperty_& PostEventCallback, TArray<struct FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAsync", "PostEventAsync");

	Params::UPostEventAsync_PostEventAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.Actor = Actor;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;
	Parms.ExternalSources = ExternalSources;
	Parms.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

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

class UPostEventAtLocationAsync* UPostEventAtLocationAsync::PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostEventAtLocationAsync", "PostEventAtLocationAsync");

	Params::UPostEventAtLocationAsync_PostEventAtLocationAsync_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Orientation = Orientation;

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
