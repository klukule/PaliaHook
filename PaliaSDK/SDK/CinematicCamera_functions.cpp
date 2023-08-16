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


// Function CinematicCamera.CineCameraComponent.SetLensSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraLensSettings         NewLensSettings                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetLensSettings(struct FCameraLensSettings& InNewLensSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetLensSettings");

	Params::UCineCameraComponent_SetLensSettings_Params Parms{};

	Parms.NewLensSettings = InNewLensSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetLensPresetByName(const class FString& InInPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetLensPresetByName");

	Params::UCineCameraComponent_SetLensPresetByName_Params Parms{};

	Parms.InPresetName = InInPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetFocusSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraFocusSettings        NewFocusSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetFocusSettings(struct FCameraFocusSettings& InNewFocusSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFocusSettings");

	Params::UCineCameraComponent_SetFocusSettings_Params Parms{};

	Parms.NewFocusSettings = InNewFocusSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetFilmbackPresetByName(const class FString& InInPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmbackPresetByName");

	Params::UCineCameraComponent_SetFilmbackPresetByName_Params Parms{};

	Parms.InPresetName = InInPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetFilmback
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraFilmbackSettings     NewFilmback                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetFilmback(struct FCameraFilmbackSettings& InNewFilmback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmback");

	Params::UCineCameraComponent_SetFilmback_Params Parms{};

	Parms.NewFilmback = InNewFilmback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFocalLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetCurrentFocalLength(float InInFocalLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentFocalLength");

	Params::UCineCameraComponent_SetCurrentFocalLength_Params Parms{};

	Parms.InFocalLength = InInFocalLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentAperture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCurrentAperture                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetCurrentAperture(float InNewCurrentAperture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentAperture");

	Params::UCineCameraComponent_SetCurrentAperture_Params Parms{};

	Parms.NewCurrentAperture = InNewCurrentAperture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetCropSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPlateCropSettings          NewCropSettings                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetCropSettings(struct FPlateCropSettings& InNewCropSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCropSettings");

	Params::UCineCameraComponent_SetCropSettings_Params Parms{};

	Parms.NewCropSettings = InNewCropSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetCropPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetCropPresetByName(const class FString& InInPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCropPresetByName");

	Params::UCineCameraComponent_SetCropPresetByName_Params Parms{};

	Parms.InPresetName = InInPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCineCameraComponent::GetVerticalFieldOfView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetVerticalFieldOfView");

	Params::UCineCameraComponent_GetVerticalFieldOfView_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FNamedLensPreset>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetLensPresetsCopy");

	Params::UCineCameraComponent_GetLensPresetsCopy_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetLensPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCineCameraComponent::GetLensPresetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetLensPresetName");

	Params::UCineCameraComponent_GetLensPresetName_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCineCameraComponent::GetHorizontalFieldOfView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetHorizontalFieldOfView");

	Params::UCineCameraComponent_GetHorizontalFieldOfView_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FNamedFilmbackPreset>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FNamedFilmbackPreset> UCineCameraComponent::GetFilmbackPresetsCopy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetFilmbackPresetsCopy");

	Params::UCineCameraComponent_GetFilmbackPresetsCopy_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCineCameraComponent::GetFilmbackPresetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetFilmbackPresetName");

	Params::UCineCameraComponent_GetFilmbackPresetName_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCineCameraComponent::GetDefaultFilmbackPresetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetDefaultFilmbackPresetName");

	Params::UCineCameraComponent_GetDefaultFilmbackPresetName_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraComponent.GetCropPresetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UCineCameraComponent::GetCropPresetName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "GetCropPresetName");

	Params::UCineCameraComponent_GetCropPresetName_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.SetLensPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedLensPreset>    InLensPresets                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetLensPresets(TArray<struct FNamedLensPreset>& InInLensPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetLensPresets");

	Params::UCineCameraSettings_SetLensPresets_Params Parms{};

	Parms.InLensPresets = InInLensPresets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedFilmbackPreset>InFilmbackPresets                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetFilmbackPresets(TArray<struct FNamedFilmbackPreset>& InInFilmbackPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetFilmbackPresets");

	Params::UCineCameraSettings_SetFilmbackPresets_Params Parms{};

	Parms.InFilmbackPresets = InInFilmbackPresets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultLensPresetName                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultLensPresetName(const class FString& InInDefaultLensPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensPresetName");

	Params::UCineCameraSettings_SetDefaultLensPresetName_Params Parms{};

	Parms.InDefaultLensPresetName = InInDefaultLensPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              InDefaultLensFStop                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultLensFStop(float InInDefaultLensFStop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFStop");

	Params::UCineCameraSettings_SetDefaultLensFStop_Params Parms{};

	Parms.InDefaultLensFStop = InInDefaultLensFStop;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              InDefaultLensFocalLength                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultLensFocalLength(float InInDefaultLensFocalLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFocalLength");

	Params::UCineCameraSettings_SetDefaultLensFocalLength_Params Parms{};

	Parms.InDefaultLensFocalLength = InInDefaultLensFocalLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultFilmbackPreset                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultFilmbackPreset(const class FString& InInDefaultFilmbackPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultFilmbackPreset");

	Params::UCineCameraSettings_SetDefaultFilmbackPreset_Params Parms{};

	Parms.InDefaultFilmbackPreset = InInDefaultFilmbackPreset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultCropPresetName                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultCropPresetName(const class FString& InInDefaultCropPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultCropPresetName");

	Params::UCineCameraSettings_SetDefaultCropPresetName_Params Parms{};

	Parms.InDefaultCropPresetName = InInDefaultCropPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetCropPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedPlateCropPreset>InCropPresets                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetCropPresets(TArray<struct FNamedPlateCropPreset>& InInCropPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetCropPresets");

	Params::UCineCameraSettings_SetCropPresets_Params Parms{};

	Parms.InCropPresets = InInCropPresets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.GetLensPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UCineCameraSettings::GetLensPresetNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetNames");

	Params::UCineCameraSettings_GetLensPresetNames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetLensPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraLensSettings         LensSettings                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCineCameraSettings::GetLensPresetByName(const class FString& InPresetName, struct FCameraLensSettings* InLensSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetByName");

	Params::UCineCameraSettings_GetLensPresetByName_Params Parms{};

	Parms.PresetName = InPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InLensSettings != nullptr)
		*InLensSettings = Parms.LensSettings;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UCineCameraSettings::GetFilmbackPresetNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetNames");

	Params::UCineCameraSettings_GetFilmbackPresetNames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraFilmbackSettings     FilmbackSettings                                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCineCameraSettings::GetFilmbackPresetByName(const class FString& InPresetName, struct FCameraFilmbackSettings* InFilmbackSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetByName");

	Params::UCineCameraSettings_GetFilmbackPresetByName_Params Parms{};

	Parms.PresetName = InPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InFilmbackSettings != nullptr)
		*InFilmbackSettings = Parms.FilmbackSettings;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetCropPresetNames
// (Final, Native, Private, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UCineCameraSettings::GetCropPresetNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetNames");

	Params::UCineCameraSettings_GetCropPresetNames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetCropPresetByName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      PresetName                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPlateCropSettings          CropSettings                                                     (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCineCameraSettings::GetCropPresetByName(const class FString& InPresetName, struct FPlateCropSettings* InCropSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetByName");

	Params::UCineCameraSettings_GetCropPresetByName_Params Parms{};

	Parms.PresetName = InPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InCropSettings != nullptr)
		*InCropSettings = Parms.CropSettings;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraSettings.GetCineCameraSettings
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UCineCameraSettings*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCineCameraSettings* UCineCameraSettings::GetCineCameraSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCineCameraSettings");

	Params::UCineCameraSettings_GetCineCameraSettings_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USplineComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraRig_Rail", "GetRailSplineComponent");

	Params::ACameraRig_Rail_GetRailSplineComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CinematicCamera.CineCameraActor.GetCineCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCineCameraComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraActor", "GetCineCameraComponent");

	Params::ACineCameraActor_GetCineCameraComponent_Params Parms{};


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
