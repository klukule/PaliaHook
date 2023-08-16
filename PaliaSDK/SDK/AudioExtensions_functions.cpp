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


// Function AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetTriggerParameter(class FName InInName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetTriggerParameter");

	Params::IAudioParameterControllerInterface_SetTriggerParameter_Params Parms{};

	Parms.InName = InInName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValue                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetStringParameter(class FName InInName, const class FString& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringParameter");

	Params::IAudioParameterControllerInterface_SetStringParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetStringArrayParameter(class FName InInName, TArray<class FString>& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetStringArrayParameter");

	Params::IAudioParameterControllerInterface_SetStringArrayParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FAudioParameter>     InParameters                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetParameters_Blueprint(TArray<struct FAudioParameter>& InInParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetParameters_Blueprint");

	Params::IAudioParameterControllerInterface_SetParameters_Blueprint_Params Parms{};

	Parms.InParameters = InInParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InValue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetObjectParameter(class FName InInName, class UObject* InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectParameter");

	Params::IAudioParameterControllerInterface_SetObjectParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetObjectArrayParameter(class FName InInName, TArray<class UObject*>& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetObjectArrayParameter");

	Params::IAudioParameterControllerInterface_SetObjectArrayParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InInt                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetIntParameter(class FName InInName, int32 InInInt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntParameter");

	Params::IAudioParameterControllerInterface_SetIntParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InInt = InInInt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetIntArrayParameter(class FName InInName, TArray<int32>& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetIntArrayParameter");

	Params::IAudioParameterControllerInterface_SetIntArrayParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InFloat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetFloatParameter(class FName InInName, float InInFloat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatParameter");

	Params::IAudioParameterControllerInterface_SetFloatParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InFloat = InInFloat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetFloatArrayParameter(class FName InInName, TArray<float>& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetFloatArrayParameter");

	Params::IAudioParameterControllerInterface_SetFloatArrayParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
// (Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InBool                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetBoolParameter(class FName InInName, bool InInBool)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolParameter");

	Params::IAudioParameterControllerInterface_SetBoolParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InBool = InInBool;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InName                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void IAudioParameterControllerInterface::SetBoolArrayParameter(class FName InInName, TArray<bool>& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "SetBoolArrayParameter");

	Params::IAudioParameterControllerInterface_SetBoolArrayParameter_Params Parms{};

	Parms.InName = InInName;
	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioExtensions.AudioParameterControllerInterface.ResetParameters
// (Native, Public, BlueprintCallable)
// Parameters:

void IAudioParameterControllerInterface::ResetParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioParameterControllerInterface", "ResetParameters");

	Params::IAudioParameterControllerInterface_ResetParameters_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
