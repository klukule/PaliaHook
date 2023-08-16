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


// Function EnhancedInput.EnhancedInputComponent.GetBoundActionValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputComponent::GetBoundActionValue(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputComponent", "GetBoundActionValue");

	Params::UEnhancedInputComponent_GetBoundActionValue_Params Parms{};

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        Context                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceImmediately                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "RequestRebuildControlMappingsUsingContext");

	Params::UEnhancedInputLibrary_RequestRebuildControlMappingsUsingContext_Params Parms{};

	Parms.Context = Context;
	Parms.bForceImmediately = bForceImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionValueType   ValueType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValueOfType(double X, double Y, double Z, enum class EInputActionValueType ValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValueOfType");

	Params::UEnhancedInputLibrary_MakeInputActionValueOfType_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.ValueType = ValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             X                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           MatchValueType                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::MakeInputActionValue(double X, double Y, double Z, struct FInputActionValue& MatchValueType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "MakeInputActionValue");

	Params::UEnhancedInputLibrary_MakeInputActionValue_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.MatchValueType = MatchValueType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UEnhancedInputLibrary::GetBoundActionValue(class AActor* Actor, class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "GetBoundActionValue");

	Params::UEnhancedInputLibrary_GetBoundActionValue_Params Parms{};

	Parms.Actor = Actor;
	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UEnhancedInputLibrary::Conv_InputActionValueToString(const struct FInputActionValue& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToString");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToString_Params Parms{};

	Parms.ActionValue = ActionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnhancedInputLibrary::Conv_InputActionValueToBool(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToBool");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToBool_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UEnhancedInputLibrary::Conv_InputActionValueToAxis3D(const struct FInputActionValue& ActionValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis3D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis3D_Params Parms{};

	Parms.ActionValue = ActionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UEnhancedInputLibrary::Conv_InputActionValueToAxis2D(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis2D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis2D_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InValue                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double UEnhancedInputLibrary::Conv_InputActionValueToAxis1D(const struct FInputActionValue& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "Conv_InputActionValueToAxis1D");

	Params::UEnhancedInputLibrary_Conv_InputActionValueToAxis1D_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInputActionValue           InActionValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Z                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputActionValueType   Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputLibrary::BreakInputActionValue(const struct FInputActionValue& InActionValue, double* X, double* Y, double* Z, enum class EInputActionValueType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputLibrary", "BreakInputActionValue");

	Params::UEnhancedInputLibrary_BreakInputActionValue_Params Parms{};

	Parms.InActionValue = InActionValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Z != nullptr)
		*Z = Parms.Z;

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        InContext                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputMappingContext*        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInputMappingContext* UEnhancedInputPlatformData::GetContextRedirect(class UInputMappingContext* InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputPlatformData", "GetContextRedirect");

	Params::UEnhancedInputPlatformData_GetContextRedirect_Params Parms{};

	Parms.InContext = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputMappingRebuildTypeRebuildType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RequestRebuildControlMappings");

	Params::IEnhancedInputSubsystemInterface_RequestRebuildControlMappings_Params Parms{};

	Parms.Options = Options;
	Parms.RebuildType = RebuildType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappedKey
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IEnhancedInputSubsystemInterface::RemovePlayerMappedKey(class FName MappingName, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemovePlayerMappedKey");

	Params::IEnhancedInputSubsystemInterface_RemovePlayerMappedKey_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemovePlayerMappableConfig");

	Params::IEnhancedInputSubsystemInterface_RemovePlayerMappableConfig_Params Parms{};

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::RemoveMappingContext(class UInputMappingContext* MappingContext, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveMappingContext");

	Params::IEnhancedInputSubsystemInterface_RemoveMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::RemoveAllPlayerMappedKeys(struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "RemoveAllPlayerMappedKeys");

	Params::IEnhancedInputSubsystemInterface_RemoveAllPlayerMappedKeys_Params Parms{};

	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UInputMappingContext*>PrioritizedActiveContexts                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UInputMappingContext*        InputContext                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMappingQueryIssue      BlockingIssues                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMappingQueryResult     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMappingQueryResult IEnhancedInputSubsystemInterface::QueryMapKeyInContextSet(TArray<class UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInContextSet");

	Params::IEnhancedInputSubsystemInterface_QueryMapKeyInContextSet_Params Parms{};

	Parms.PrioritizedActiveContexts = PrioritizedActiveContexts;
	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = Key;
	Parms.BlockingIssues = BlockingIssues;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIssues != nullptr)
		*OutIssues = Parms.OutIssues;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        InputContext                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMappingQueryIssue>  OutIssues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EMappingQueryIssue      BlockingIssues                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMappingQueryResult     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMappingQueryResult IEnhancedInputSubsystemInterface::QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, const struct FKey& Key, TArray<struct FMappingQueryIssue>* OutIssues, enum class EMappingQueryIssue BlockingIssues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryMapKeyInActiveContextSet");

	Params::IEnhancedInputSubsystemInterface_QueryMapKeyInActiveContextSet_Params Parms{};

	Parms.InputContext = InputContext;
	Parms.Action = Action;
	Parms.Key = Key;
	Parms.BlockingIssues = BlockingIssues;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutIssues != nullptr)
		*OutIssues = Parms.OutIssues;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKey>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKey> IEnhancedInputSubsystemInterface::QueryKeysMappedToAction(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "QueryKeysMappedToAction");

	Params::IEnhancedInputSubsystemInterface_QueryKeysMappedToAction_Params Parms{};

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::InjectInputVectorForAction(class UInputAction* Action, const struct FVector& Value, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputVectorForAction");

	Params::IEnhancedInputSubsystemInterface_InjectInputVectorForAction_Params Parms{};

	Parms.Action = Action;
	Parms.Value = Value;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           RawValue                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class UInputModifier*>      Modifiers                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UInputTrigger*>       Triggers                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::InjectInputForAction(class UInputAction* Action, const struct FInputActionValue& RawValue, TArray<class UInputModifier*>& Modifiers, TArray<class UInputTrigger*>& Triggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "InjectInputForAction");

	Params::IEnhancedInputSubsystemInterface_InjectInputForAction_Params Parms{};

	Parms.Action = Action;
	Parms.RawValue = RawValue;
	Parms.Modifiers = Modifiers;
	Parms.Triggers = Triggers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutFoundPriority                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IEnhancedInputSubsystemInterface::HasMappingContext(class UInputMappingContext* MappingContext, int32* OutFoundPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "HasMappingContext");

	Params::IEnhancedInputSubsystemInterface_HasMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFoundPriority != nullptr)
		*OutFoundPriority = Parms.OutFoundPriority;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetPlayerMappedKey
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FKey IEnhancedInputSubsystemInterface::GetPlayerMappedKey(class FName MappingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetPlayerMappedKey");

	Params::IEnhancedInputSubsystemInterface_GetPlayerMappedKey_Params Parms{};

	Parms.MappingName = MappingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> IEnhancedInputSubsystemInterface::GetAllPlayerMappableActionKeyMappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "GetAllPlayerMappableActionKeyMappings");

	Params::IEnhancedInputSubsystemInterface_GetAllPlayerMappableActionKeyMappings_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void IEnhancedInputSubsystemInterface::ClearAllMappings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "ClearAllMappings");

	Params::IEnhancedInputSubsystemInterface_ClearAllMappings_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappedKey
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        NewKey                                                           (ConstParm, Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 IEnhancedInputSubsystemInterface::AddPlayerMappedKey(class FName MappingName, const struct FKey& NewKey, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddPlayerMappedKey");

	Params::IEnhancedInputSubsystemInterface_AddPlayerMappedKey_Params Parms{};

	Parms.MappingName = MappingName;
	Parms.NewKey = NewKey;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerMappableInputConfig*  Config                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddPlayerMappableConfig");

	Params::IEnhancedInputSubsystemInterface_AddPlayerMappableConfig_Params Parms{};

	Parms.Config = Config;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void IEnhancedInputSubsystemInterface::AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemInterface", "AddMappingContext");

	Params::IEnhancedInputSubsystemInterface_AddMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Priority = Priority;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.UnmapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapKey(class UInputAction* Action, const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapKey");

	Params::UInputMappingContext_UnmapKey_Params Parms{};

	Parms.Action = Action;
	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapAllKeysFromAction(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAllKeysFromAction");

	Params::UInputMappingContext_UnmapAllKeysFromAction_Params Parms{};

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.UnmapAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInputMappingContext::UnmapAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAll");

	Params::UInputMappingContext_UnmapAll_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.UnmapAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputMappingContext::UnmapAction(class UInputAction* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "UnmapAction");

	Params::UInputMappingContext_UnmapAction_Params Parms{};

	Parms.Action = Action;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.InputMappingContext.MapKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                Action                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        ToKey                                                            (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FEnhancedActionKeyMapping UInputMappingContext::MapKey(class UInputAction* Action, const struct FKey& ToKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputMappingContext", "MapKey");

	Params::UInputMappingContext_MapKey_Params Parms{};

	Parms.Action = Action;
	Parms.ToKey = ToKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputModifier.ModifyRaw
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           CurrentValue                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FInputActionValue UInputModifier::ModifyRaw(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& CurrentValue, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputModifier", "ModifyRaw");

	Params::UInputModifier_ModifyRaw_Params Parms{};

	Parms.PlayerInput = PlayerInput;
	Parms.CurrentValue = CurrentValue;
	Parms.DeltaTime = DeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputModifier.GetVisualizationColor
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FInputActionValue           SampleValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FInputActionValue           FinalValue                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UInputModifier::GetVisualizationColor(const struct FInputActionValue& SampleValue, const struct FInputActionValue& FinalValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputModifier", "GetVisualizationColor");

	Params::UInputModifier_GetVisualizationColor_Params Parms{};

	Parms.SampleValue = SampleValue;
	Parms.FinalValue = FinalValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.UpdateState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnhancedPlayerInput*        PlayerInput                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputActionValue           ModifiedValue                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETriggerState           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETriggerState UInputTrigger::UpdateState(class UEnhancedPlayerInput* PlayerInput, const struct FInputActionValue& ModifiedValue, float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "UpdateState");

	Params::UInputTrigger_UpdateState_Params Parms{};

	Parms.PlayerInput = PlayerInput;
	Parms.ModifiedValue = ModifiedValue;
	Parms.DeltaTime = DeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.IsActuated
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInputActionValue           ForValue                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputTrigger::IsActuated(struct FInputActionValue& ForValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "IsActuated");

	Params::UInputTrigger_IsActuated_Params Parms{};

	Parms.ForValue = ForValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.InputTrigger.GetTriggerType
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ETriggerType            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETriggerType UInputTrigger::GetTriggerType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputTrigger", "GetTriggerType");

	Params::UInputTrigger_GetTriggerType_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UPlayerMappableInputConfig::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "ResetToDefault");

	Params::UPlayerMappableInputConfig_ResetToDefault_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EnhancedInput.PlayerMappableInputConfig.IsDeprecated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPlayerMappableInputConfig::IsDeprecated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "IsDeprecated");

	Params::UPlayerMappableInputConfig_IsDeprecated_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetPlayerMappableKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetPlayerMappableKeys");

	Params::UPlayerMappableInputConfig_GetPlayerMappableKeys_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UPlayerMappableInputConfig::GetMetadata()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMetadata");

	Params::UPlayerMappableInputConfig_GetMetadata_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class UInputMappingContext*, int32>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<class UInputMappingContext*, int32> UPlayerMappableInputConfig::GetMappingContexts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingContexts");

	Params::UPlayerMappableInputConfig_GetMappingContexts_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetMappingByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        MappingName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEnhancedActionKeyMapping   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FEnhancedActionKeyMapping UPlayerMappableInputConfig::GetMappingByName(class FName MappingName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetMappingByName");

	Params::UPlayerMappableInputConfig_GetMappingByName_Params Parms{};

	Parms.MappingName = MappingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                InAction                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEnhancedActionKeyMapping>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FEnhancedActionKeyMapping> UPlayerMappableInputConfig::GetKeysBoundToAction(class UInputAction* InAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetKeysBoundToAction");

	Params::UPlayerMappableInputConfig_GetKeysBoundToAction_Params Parms{};

	Parms.InAction = InAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

class FText UPlayerMappableInputConfig::GetDisplayName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetDisplayName");

	Params::UPlayerMappableInputConfig_GetDisplayName_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EnhancedInput.PlayerMappableInputConfig.GetConfigName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UPlayerMappableInputConfig::GetConfigName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerMappableInputConfig", "GetConfigName");

	Params::UPlayerMappableInputConfig_GetConfigName_Params Parms{};


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
