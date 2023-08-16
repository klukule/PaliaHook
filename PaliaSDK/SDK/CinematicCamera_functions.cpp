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


// Function CinematicCamera.CineCameraComponent.SetLensSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraLensSettings         NewLensSettings                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetLensSettings(struct FCameraLensSettings& NewLensSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetLensSettings");

	Params::UCineCameraComponent_SetLensSettings_Params Parms{};

	Parms.NewLensSettings = NewLensSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetLensPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetLensPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetLensPresetByName");

	Params::UCineCameraComponent_SetLensPresetByName_Params Parms{};

	Parms.InPresetName = InPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetFocusSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraFocusSettings        NewFocusSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetFocusSettings(struct FCameraFocusSettings& NewFocusSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFocusSettings");

	Params::UCineCameraComponent_SetFocusSettings_Params Parms{};

	Parms.NewFocusSettings = NewFocusSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetFilmbackPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmbackPresetByName");

	Params::UCineCameraComponent_SetFilmbackPresetByName_Params Parms{};

	Parms.InPresetName = InPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetFilmback
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraFilmbackSettings     NewFilmback                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetFilmback(struct FCameraFilmbackSettings& NewFilmback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetFilmback");

	Params::UCineCameraComponent_SetFilmback_Params Parms{};

	Parms.NewFilmback = NewFilmback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFocalLength                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetCurrentFocalLength(float InFocalLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentFocalLength");

	Params::UCineCameraComponent_SetCurrentFocalLength_Params Parms{};

	Parms.InFocalLength = InFocalLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetCurrentAperture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewCurrentAperture                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetCurrentAperture(float NewCurrentAperture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCurrentAperture");

	Params::UCineCameraComponent_SetCurrentAperture_Params Parms{};

	Parms.NewCurrentAperture = NewCurrentAperture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetCropSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPlateCropSettings          NewCropSettings                                                  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetCropSettings(struct FPlateCropSettings& NewCropSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCropSettings");

	Params::UCineCameraComponent_SetCropSettings_Params Parms{};

	Parms.NewCropSettings = NewCropSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraComponent.SetCropPresetByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InPresetName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraComponent::SetCropPresetByName(const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraComponent", "SetCropPresetByName");

	Params::UCineCameraComponent_SetCropPresetByName_Params Parms{};

	Parms.InPresetName = InPresetName;

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

void UCineCameraSettings::SetLensPresets(TArray<struct FNamedLensPreset>& InLensPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetLensPresets");

	Params::UCineCameraSettings_SetLensPresets_Params Parms{};

	Parms.InLensPresets = InLensPresets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetFilmbackPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedFilmbackPreset>InFilmbackPresets                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetFilmbackPresets(TArray<struct FNamedFilmbackPreset>& InFilmbackPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetFilmbackPresets");

	Params::UCineCameraSettings_SetFilmbackPresets_Params Parms{};

	Parms.InFilmbackPresets = InFilmbackPresets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultLensPresetName                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultLensPresetName(const class FString& InDefaultLensPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensPresetName");

	Params::UCineCameraSettings_SetDefaultLensPresetName_Params Parms{};

	Parms.InDefaultLensPresetName = InDefaultLensPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensFStop
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              InDefaultLensFStop                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultLensFStop(float InDefaultLensFStop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFStop");

	Params::UCineCameraSettings_SetDefaultLensFStop_Params Parms{};

	Parms.InDefaultLensFStop = InDefaultLensFStop;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              InDefaultLensFocalLength                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultLensFocalLength(float InDefaultLensFocalLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultLensFocalLength");

	Params::UCineCameraSettings_SetDefaultLensFocalLength_Params Parms{};

	Parms.InDefaultLensFocalLength = InDefaultLensFocalLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultFilmbackPreset                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultFilmbackPreset");

	Params::UCineCameraSettings_SetDefaultFilmbackPreset_Params Parms{};

	Parms.InDefaultFilmbackPreset = InDefaultFilmbackPreset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FString                      InDefaultCropPresetName                                          (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetDefaultCropPresetName(const class FString& InDefaultCropPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetDefaultCropPresetName");

	Params::UCineCameraSettings_SetDefaultCropPresetName_Params Parms{};

	Parms.InDefaultCropPresetName = InDefaultCropPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CinematicCamera.CineCameraSettings.SetCropPresets
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FNamedPlateCropPreset>InCropPresets                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UCineCameraSettings::SetCropPresets(TArray<struct FNamedPlateCropPreset>& InCropPresets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "SetCropPresets");

	Params::UCineCameraSettings_SetCropPresets_Params Parms{};

	Parms.InCropPresets = InCropPresets;

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

bool UCineCameraSettings::GetLensPresetByName(const class FString& PresetName, struct FCameraLensSettings* LensSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetLensPresetByName");

	Params::UCineCameraSettings_GetLensPresetByName_Params Parms{};

	Parms.PresetName = PresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LensSettings != nullptr)
		*LensSettings = Parms.LensSettings;

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

bool UCineCameraSettings::GetFilmbackPresetByName(const class FString& PresetName, struct FCameraFilmbackSettings* FilmbackSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetFilmbackPresetByName");

	Params::UCineCameraSettings_GetFilmbackPresetByName_Params Parms{};

	Parms.PresetName = PresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FilmbackSettings != nullptr)
		*FilmbackSettings = Parms.FilmbackSettings;

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

bool UCineCameraSettings::GetCropPresetByName(const class FString& PresetName, struct FPlateCropSettings* CropSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CineCameraSettings", "GetCropPresetByName");

	Params::UCineCameraSettings_GetCropPresetByName_Params Parms{};

	Parms.PresetName = PresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (CropSettings != nullptr)
		*CropSettings = Parms.CropSettings;

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
