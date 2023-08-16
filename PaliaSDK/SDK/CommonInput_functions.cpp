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


// Function CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads
// (Final, Native, Static, Public)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FName> UCommonInputBaseControllerData::GetRegisteredGamepads()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputBaseControllerData", "GetRegisteredGamepads");

	Params::UCommonInputBaseControllerData_GetRegisteredGamepads_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled
// (Final, Native, Static, Public)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSettings::IsEnhancedInputSupportEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSettings", "IsEnhancedInputSupportEnabled");

	Params::UCommonInputSettings_IsEnhancedInputSupportEnabled_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::ShouldShowInputKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "ShouldShowInputKeys");

	Params::UCommonInputSubsystem_ShouldShowInputKeys_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InGamepadInputType                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetGamepadInputType(class FName InGamepadInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "SetGamepadInputType");

	Params::UCommonInputSubsystem_SetGamepadInputType_Params Parms{};

	Parms.InGamepadInputType = InGamepadInputType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonInputType        NewInputType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetCurrentInputType(enum class ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "SetCurrentInputType");

	Params::UCommonInputSubsystem_SetCurrentInputType_Params Parms{};

	Parms.NewInputType = NewInputType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::IsUsingPointerInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "IsUsingPointerInput");

	Params::UCommonInputSubsystem_IsUsingPointerInput_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.IsInputMethodActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        InputMethod                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::IsInputMethodActive(enum class ECommonInputType InputMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "IsInputMethodActive");

	Params::UCommonInputSubsystem_IsInputMethodActive_Params Parms{};

	Parms.InputMethod = InputMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonInputSubsystem::GetDefaultInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetDefaultInputType");

	Params::UCommonInputSubsystem_GetDefaultInputType_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECommonInputType        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECommonInputType UCommonInputSubsystem::GetCurrentInputType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentInputType");

	Params::UCommonInputSubsystem_GetCurrentInputType_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonInputSubsystem::GetCurrentGamepadName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentGamepadName");

	Params::UCommonInputSubsystem_GetCurrentGamepadName_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonInput.CommonInputSubsystem.BroadcastInputMethodChanged
// (Final, Native, Protected)
// Parameters:

void UCommonInputSubsystem::BroadcastInputMethodChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonInputSubsystem", "BroadcastInputMethodChanged");

	Params::UCommonInputSubsystem_BroadcastInputMethodChanged_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
