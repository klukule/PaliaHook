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


// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateTickWhenPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewTickWhenPaused                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::UpdateTickWhenPaused(bool InNewTickWhenPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "UpdateTickWhenPaused");

	Params::UNiagaraSystemWidget_UpdateTickWhenPaused_Params Parms{};

	Parms.NewTickWhenPaused = InNewTickWhenPaused;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.UpdateNiagaraSystemReference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              NewNiagaraSystem                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::UpdateNiagaraSystemReference(class UNiagaraSystem* InNewNiagaraSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "UpdateNiagaraSystemReference");

	Params::UNiagaraSystemWidget_UpdateNiagaraSystemReference_Params Parms{};

	Parms.NewNiagaraSystem = InNewNiagaraSystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.GetNiagaraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UNiagaraUIComponent*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraUIComponent* UNiagaraSystemWidget::GetNiagaraComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "GetNiagaraComponent");

	Params::UNiagaraSystemWidget_GetNiagaraComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.DeactivateSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraSystemWidget::DeactivateSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "DeactivateSystem");

	Params::UNiagaraSystemWidget_DeactivateSystem_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function NiagaraUIRenderer.NiagaraSystemWidget.ActivateSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Reset                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSystemWidget::ActivateSystem(bool InReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSystemWidget", "ActivateSystem");

	Params::UNiagaraSystemWidget_ActivateSystem_Params Parms{};

	Parms.Reset = InReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
