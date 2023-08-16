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


// Function TypedElementFramework.TypedElementHandleLibrary.Release
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   ElementHandle                                                    (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTypedElementHandleLibrary::Release(struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "Release");

	Params::UTypedElementHandleLibrary_Release_Params Parms{};

	Parms.ElementHandle = ElementHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TypedElementFramework.TypedElementHandleLibrary.NotEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle   Lhs                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   Rhs                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementHandleLibrary::NotEqual(struct FScriptTypedElementHandle& Lhs, struct FScriptTypedElementHandle& Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "NotEqual");

	Params::UTypedElementHandleLibrary_NotEqual_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementHandleLibrary.IsSet
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementHandleLibrary::IsSet(struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "IsSet");

	Params::UTypedElementHandleLibrary_IsSet_Params Parms{};

	Parms.ElementHandle = ElementHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementHandleLibrary.Equal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementHandle   Lhs                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   Rhs                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementHandleLibrary::Equal(struct FScriptTypedElementHandle& Lhs, struct FScriptTypedElementHandle& Rhs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHandleLibrary", "Equal");

	Params::UTypedElementHandleLibrary_Equal_Params Parms{};

	Parms.Lhs = Lhs;
	Parms.Rhs = Rhs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Shrink
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Shrink(const struct FScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Shrink");

	Params::UTypedElementListLibrary_Shrink_Params Parms{};

	Parms.ElementList = ElementList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TypedElementFramework.TypedElementListLibrary.Reset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Reset(const struct FScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Reset");

	Params::UTypedElementListLibrary_Reset_Params Parms{};

	Parms.ElementList = ElementList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TypedElementFramework.TypedElementListLibrary.Reserve
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// int32                              Size                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Reserve(const struct FScriptTypedElementListProxy& ElementList, int32 Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Reserve");

	Params::UTypedElementListLibrary_Reserve_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TypedElementFramework.TypedElementListLibrary.Remove
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::Remove(const struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Remove");

	Params::UTypedElementListLibrary_Remove_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandle = ElementHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Num
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementListLibrary::Num(const struct FScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Num");

	Params::UTypedElementListLibrary_Num_Params Parms{};

	Parms.ElementList = ElementList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.IsValidIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::IsValidIndex(const struct FScriptTypedElementListProxy& ElementList, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "IsValidIndex");

	Params::UTypedElementListLibrary_IsValidIndex_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.HasElementsOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FName                        ElementTypeName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::HasElementsOfType(const struct FScriptTypedElementListProxy& ElementList, class FName ElementTypeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "HasElementsOfType");

	Params::UTypedElementListLibrary_HasElementsOfType_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementTypeName = ElementTypeName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.HasElements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      BaseInterfaceType                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::HasElements(const struct FScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "HasElements");

	Params::UTypedElementListLibrary_HasElements_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementInterface
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      BaseInterfaceType                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UTypedElementListLibrary::GetElementInterface(const struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle& ElementHandle, TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementInterface");

	Params::UTypedElementListLibrary_GetElementInterface_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandle = ElementHandle;
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementHandles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      BaseInterfaceType                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FScriptTypedElementHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FScriptTypedElementHandle> UTypedElementListLibrary::GetElementHandles(const struct FScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementHandles");

	Params::UTypedElementListLibrary_GetElementHandles_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.GetElementHandleAt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FScriptTypedElementHandle UTypedElementListLibrary::GetElementHandleAt(const struct FScriptTypedElementListProxy& ElementList, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "GetElementHandleAt");

	Params::UTypedElementListLibrary_GetElementHandleAt_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Empty
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// int32                              Slack                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Empty(const struct FScriptTypedElementListProxy& ElementList, int32 Slack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Empty");

	Params::UTypedElementListLibrary_Empty_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.Slack = Slack;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TypedElementFramework.TypedElementListLibrary.CreateScriptElementList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementRegistry*       Registry                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FScriptTypedElementListProxy UTypedElementListLibrary::CreateScriptElementList(class UTypedElementRegistry* Registry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CreateScriptElementList");

	Params::UTypedElementListLibrary_CreateScriptElementList_Params Parms{};

	Parms.Registry = Registry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.CountElementsOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// class FName                        ElementTypeName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementListLibrary::CountElementsOfType(const struct FScriptTypedElementListProxy& ElementList, class FName ElementTypeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CountElementsOfType");

	Params::UTypedElementListLibrary_CountElementsOfType_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementTypeName = ElementTypeName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.CountElements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      BaseInterfaceType                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementListLibrary::CountElements(const struct FScriptTypedElementListProxy& ElementList, TSubclassOf<class IInterface> BaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "CountElements");

	Params::UTypedElementListLibrary_CountElements_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.BaseInterfaceType = BaseInterfaceType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Contains
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::Contains(const struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Contains");

	Params::UTypedElementListLibrary_Contains_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandle = ElementHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.Clone
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FScriptTypedElementListProxy UTypedElementListLibrary::Clone(const struct FScriptTypedElementListProxy& ElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Clone");

	Params::UTypedElementListLibrary_Clone_Params Parms{};

	Parms.ElementList = ElementList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementListLibrary.AppendList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyOtherElementList                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::AppendList(const struct FScriptTypedElementListProxy& ElementList, const struct FScriptTypedElementListProxy& OtherElementList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "AppendList");

	Params::UTypedElementListLibrary_AppendList_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.OtherElementList = OtherElementList;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TypedElementFramework.TypedElementListLibrary.Append
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// TArray<struct FScriptTypedElementHandle>ElementHandles                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UTypedElementListLibrary::Append(const struct FScriptTypedElementListProxy& ElementList, TArray<struct FScriptTypedElementHandle>& ElementHandles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Append");

	Params::UTypedElementListLibrary_Append_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandles = ElementHandles;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TypedElementFramework.TypedElementListLibrary.Add
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementListProxyElementList                                                      (Parm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   ElementHandle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementListLibrary::Add(const struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle& ElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementListLibrary", "Add");

	Params::UTypedElementListLibrary_Add_Params Parms{};

	Parms.ElementList = ElementList;
	Parms.ElementHandle = ElementHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementRegistry.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementRegistry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTypedElementRegistry* UTypedElementRegistry::GetInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementRegistry", "GetInstance");

	Params::UTypedElementRegistry_GetInstance_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TypedElementRegistry.GetElementInterface
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      InBaseInterfaceType                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UTypedElementRegistry::GetElementInterface(struct FScriptTypedElementHandle& InElementHandle, TSubclassOf<class IInterface> InBaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementRegistry", "GetElementInterface");

	Params::UTypedElementRegistry_GetElementInterface_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        InNewName                                                        (Parm, NativeAccessSpecifierPublic)
// bool                               bNotify                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITestTypedElementInterfaceA::SetDisplayName(struct FScriptTypedElementHandle& InElementHandle, class FText InNewName, bool bNotify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceA", "SetDisplayName");

	Params::ITestTypedElementInterfaceA_SetDisplayName_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InNewName = InNewName;
	Parms.bNotify = bNotify;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText ITestTypedElementInterfaceA::GetDisplayName(struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceA", "GetDisplayName");

	Params::ITestTypedElementInterfaceA_GetDisplayName_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TestTypedElementInterfaceB.MarkAsTested
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITestTypedElementInterfaceB::MarkAsTested(struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceB", "MarkAsTested");

	Params::ITestTypedElementInterfaceB_MarkAsTested_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function TypedElementFramework.TestTypedElementInterfaceC.GetIsTested
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ITestTypedElementInterfaceC::GetIsTested(struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TestTypedElementInterfaceC", "GetIsTested");

	Params::ITestTypedElementInterfaceC_GetIsTested_Params Parms{};

	Parms.InElementHandle = InElementHandle;

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
