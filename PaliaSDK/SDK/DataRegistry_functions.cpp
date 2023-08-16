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


// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType           A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryType           B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::NotEqual_DataRegistryType(const struct FDataRegistryType& InA, const struct FDataRegistryType& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "NotEqual_DataRegistryType");

	Params::UDataRegistrySubsystem_NotEqual_DataRegistryType_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.NotEqual_DataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId             A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryId             B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::NotEqual_DataRegistryId(const struct FDataRegistryId& InA, const struct FDataRegistryId& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "NotEqual_DataRegistryId");

	Params::UDataRegistrySubsystem_NotEqual_DataRegistryId_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType           DataRegistryType                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::IsValidDataRegistryType(const struct FDataRegistryType& InDataRegistryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "IsValidDataRegistryType");

	Params::UDataRegistrySubsystem_IsValidDataRegistryType_Params Parms{};

	Parms.DataRegistryType = InDataRegistryType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.IsValidDataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId             DataRegistryId                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::IsValidDataRegistryId(const struct FDataRegistryId& InDataRegistryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "IsValidDataRegistryId");

	Params::UDataRegistrySubsystem_IsValidDataRegistryId_Params Parms{};

	Parms.DataRegistryId = InDataRegistryId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemFromLookupBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryLookup         ResolvedLookup                                                   (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutItem                                                          (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::GetCachedItemFromLookupBP(const struct FDataRegistryId& InItemId, struct FDataRegistryLookup& InResolvedLookup, struct FTableRowBase* InOutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "GetCachedItemFromLookupBP");

	Params::UDataRegistrySubsystem_GetCachedItemFromLookupBP_Params Parms{};

	Parms.ItemId = InItemId;
	Parms.ResolvedLookup = InResolvedLookup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutItem != nullptr)
		*InOutItem = Parms.OutItem;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.GetCachedItemBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutItem                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::GetCachedItemBP(const struct FDataRegistryId& InItemId, struct FTableRowBase& InOutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "GetCachedItemBP");

	Params::UDataRegistrySubsystem_GetCachedItemBP_Params Parms{};

	Parms.ItemId = InItemId;
	Parms.OutItem = InOutItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.FindCachedItemBP
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDataRegistrySubsystemGetItemResultOutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTableRowBase               OutItem                                                          (Parm, OutParm, NativeAccessSpecifierPublic)

void UDataRegistrySubsystem::FindCachedItemBP(const struct FDataRegistryId& InItemId, enum class EDataRegistrySubsystemGetItemResult* InOutResult, struct FTableRowBase* InOutItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "FindCachedItemBP");

	Params::UDataRegistrySubsystem_FindCachedItemBP_Params Parms{};

	Parms.ItemId = InItemId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutResult != nullptr)
		*InOutResult = Parms.OutResult;

	if (InOutItem != nullptr)
		*InOutItem = Parms.OutItem;

}


// Function DataRegistry.DataRegistrySubsystem.EvaluateDataRegistryCurve
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InputValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DefaultValue                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDataRegistrySubsystemGetItemResultOutResult                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutValue                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDataRegistrySubsystem::EvaluateDataRegistryCurve(const struct FDataRegistryId& InItemId, float InInputValue, float InDefaultValue, enum class EDataRegistrySubsystemGetItemResult* InOutResult, float* InOutValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "EvaluateDataRegistryCurve");

	Params::UDataRegistrySubsystem_EvaluateDataRegistryCurve_Params Parms{};

	Parms.ItemId = InItemId;
	Parms.InputValue = InInputValue;
	Parms.DefaultValue = InDefaultValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutResult != nullptr)
		*InOutResult = Parms.OutResult;

	if (InOutValue != nullptr)
		*InOutValue = Parms.OutValue;

}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType           A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryType           B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::EqualEqual_DataRegistryType(const struct FDataRegistryType& InA, const struct FDataRegistryType& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "EqualEqual_DataRegistryType");

	Params::UDataRegistrySubsystem_EqualEqual_DataRegistryType_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.EqualEqual_DataRegistryId
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId             A                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDataRegistryId             B                                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::EqualEqual_DataRegistryId(const struct FDataRegistryId& InA, const struct FDataRegistryId& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "EqualEqual_DataRegistryId");

	Params::UDataRegistrySubsystem_EqualEqual_DataRegistryId_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryTypeToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryType           DataRegistryType                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDataRegistrySubsystem::Conv_DataRegistryTypeToString(const struct FDataRegistryType& InDataRegistryType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "Conv_DataRegistryTypeToString");

	Params::UDataRegistrySubsystem_Conv_DataRegistryTypeToString_Params Parms{};

	Parms.DataRegistryType = InDataRegistryType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.Conv_DataRegistryIdToString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDataRegistryId             DataRegistryId                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UDataRegistrySubsystem::Conv_DataRegistryIdToString(const struct FDataRegistryId& InDataRegistryId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "Conv_DataRegistryIdToString");

	Params::UDataRegistrySubsystem_Conv_DataRegistryIdToString_Params Parms{};

	Parms.DataRegistryId = InDataRegistryId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function DataRegistry.DataRegistrySubsystem.AcquireItemBP
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDataRegistryId             ItemId                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 AcquireCallback                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDataRegistrySubsystem::AcquireItemBP(const struct FDataRegistryId& InItemId, FDelegateProperty_ InAcquireCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataRegistrySubsystem", "AcquireItemBP");

	Params::UDataRegistrySubsystem_AcquireItemBP_Params Parms{};

	Parms.ItemId = InItemId;
	Parms.AcquireCallback = InAcquireCallback;

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
