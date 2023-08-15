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


// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UResonanceAudioReverbPluginPreset*InPreset                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioBlueprintFunctionLibrary::SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioBlueprintFunctionLibrary", "SetGlobalReverbPreset");

	Params::UResonanceAudioBlueprintFunctionLibrary_SetGlobalReverbPreset_Params Parms{};

	Parms.InPreset = InPreset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UResonanceAudioReverbPluginPreset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UResonanceAudioReverbPluginPreset* UResonanceAudioBlueprintFunctionLibrary::GetGlobalReverbPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioBlueprintFunctionLibrary", "GetGlobalReverbPreset");

	Params::UResonanceAudioBlueprintFunctionLibrary_GetGlobalReverbPreset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                       InRotation                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetRoomRotation(struct FQuat& InRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomRotation");

	Params::UResonanceAudioReverbPluginPreset_SetRoomRotation_Params Parms{};

	Parms.InRotation = InRotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetRoomPosition(struct FVector& InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomPosition");

	Params::UResonanceAudioReverbPluginPreset_SetRoomPosition_Params Parms{};

	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<enum class ERaMaterialName> InMaterials                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetRoomMaterials(TArray<enum class ERaMaterialName>& InMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomMaterials");

	Params::UResonanceAudioReverbPluginPreset_SetRoomMaterials_Params Parms{};

	Parms.InMaterials = InMaterials;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InDimensions                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetRoomDimensions(struct FVector& InDimensions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetRoomDimensions");

	Params::UResonanceAudioReverbPluginPreset_SetRoomDimensions_Params Parms{};

	Parms.InDimensions = InDimensions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbTimeModifier                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetReverbTimeModifier(float InReverbTimeModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbTimeModifier");

	Params::UResonanceAudioReverbPluginPreset_SetReverbTimeModifier_Params Parms{};

	Parms.InReverbTimeModifier = InReverbTimeModifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbGain                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetReverbGain(float InReverbGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbGain");

	Params::UResonanceAudioReverbPluginPreset_SetReverbGain_Params Parms{};

	Parms.InReverbGain = InReverbGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReverbBrightness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetReverbBrightness(float InReverbBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReverbBrightness");

	Params::UResonanceAudioReverbPluginPreset_SetReverbBrightness_Params Parms{};

	Parms.InReverbBrightness = InReverbBrightness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReflectionScalar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetReflectionScalar(float InReflectionScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetReflectionScalar");

	Params::UResonanceAudioReverbPluginPreset_SetReflectionScalar_Params Parms{};

	Parms.InReflectionScalar = InReflectionScalar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInEnableRoomEffects                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioReverbPluginPreset::SetEnableRoomEffects(bool bInEnableRoomEffects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioReverbPluginPreset", "SetEnableRoomEffects");

	Params::UResonanceAudioReverbPluginPreset_SetEnableRoomEffects_Params Parms{};

	Parms.bInEnableRoomEffects = bInEnableRoomEffects;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSpread                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceSpread(float InSpread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioSpatializationSourceSettings", "SetSoundSourceSpread");

	Params::UResonanceAudioSpatializationSourceSettings_SetSoundSourceSpread_Params Parms{};

	Parms.InSpread = InSpread;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPattern                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InSharpness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UResonanceAudioSpatializationSourceSettings::SetSoundSourceDirectivity(float InPattern, float InSharpness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResonanceAudioSpatializationSourceSettings", "SetSoundSourceDirectivity");

	Params::UResonanceAudioSpatializationSourceSettings_SetSoundSourceDirectivity_Params Parms{};

	Parms.InPattern = InPattern;
	Parms.InSharpness = InSharpness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
