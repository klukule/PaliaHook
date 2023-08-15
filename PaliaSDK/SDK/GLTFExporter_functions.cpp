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


// Function GLTFExporter.GLTFExporter.ExportToGLTF
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGLTFExportOptions*          Options                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSet<class AActor*>                SelectedActors                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGLTFExportMessages         OutMessages                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGLTFExporter::ExportToGLTF(class UObject* Object, const class FString& FilePath, class UGLTFExportOptions* Options, TSet<class AActor*>& SelectedActors, struct FGLTFExportMessages* OutMessages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GLTFExporter", "ExportToGLTF");

	Params::UGLTFExporter_ExportToGLTF_Params Parms{};

	Parms.Object = Object;
	Parms.FilePath = FilePath;
	Parms.Options = Options;
	Parms.SelectedActors = SelectedActors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMessages != nullptr)
		*OutMessages = Parms.OutMessages;

	return Parms.ReturnValue;

}


// Function GLTFExporter.GLTFExportOptions.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGLTFExportOptions::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GLTFExportOptions", "ResetToDefault");

	Params::UGLTFExportOptions_ResetToDefault_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GLTFExporter.GLTFProxyOptions.ResetToDefault
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGLTFProxyOptions::ResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GLTFProxyOptions", "ResetToDefault");

	Params::UGLTFProxyOptions_ResetToDefault_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
