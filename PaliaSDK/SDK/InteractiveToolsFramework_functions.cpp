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


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
// (Final, Native, Public)
// Parameters:
// bool                               bWorldIn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateWorldLocalState(bool InbWorldIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoBaseComponent", "UpdateWorldLocalState");

	Params::UGizmoBaseComponent_UpdateWorldLocalState_Params Parms{};

	Parms.bWorldIn = InbWorldIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
// (Final, Native, Public)
// Parameters:
// bool                               bHoveringIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGizmoBaseComponent::UpdateHoverState(bool InbHoveringIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoBaseComponent", "UpdateHoverState");

	Params::UGizmoBaseComponent_UpdateHoverState_Params Parms{};

	Parms.bHoveringIn = InbHoveringIn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FTransform                  NewTransform                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoTransformSource::SetTransform(struct FTransform& InNewTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoTransformSource", "SetTransform");

	Params::IGizmoTransformSource_SetTransform_Params Parms{};

	Parms.NewTransform = InNewTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform IGizmoTransformSource::GetTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoTransformSource", "GetTransform");

	Params::IGizmoTransformSource_GetTransform_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
// (Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IGizmoAxisSource::HasTangentVectors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoAxisSource", "HasTangentVectors");

	Params::IGizmoAxisSource_HasTangentVectors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
// (Native, Public, HasOutParams, HasDefaults, Const)
// Parameters:
// struct FVector                     TangentXOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TangentYOut                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoAxisSource::GetTangentVectors(struct FVector* InTangentXOut, struct FVector* InTangentYOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoAxisSource", "GetTangentVectors");

	Params::IGizmoAxisSource_GetTangentVectors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InTangentXOut != nullptr)
		*InTangentXOut = Parms.TangentXOut;

	if (InTangentYOut != nullptr)
		*InTangentYOut = Parms.TangentYOut;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IGizmoAxisSource::GetOrigin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoAxisSource", "GetOrigin");

	Params::IGizmoAxisSource_GetOrigin_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector IGizmoAxisSource::GetDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoAxisSource", "GetDirection");

	Params::IGizmoAxisSource_GetDirection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState
// (Native, Public)
// Parameters:
// bool                               bInteracting                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickTarget::UpdateInteractingState(bool InbInteracting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoClickTarget", "UpdateInteractingState");

	Params::IGizmoClickTarget_UpdateInteractingState_Params Parms{};

	Parms.bInteracting = InbInteracting;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
// (Native, Public)
// Parameters:
// bool                               bHovering                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickTarget::UpdateHoverState(bool InbHovering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoClickTarget", "UpdateHoverState");

	Params::IGizmoClickTarget_UpdateHoverState_Params Parms{};

	Parms.bHovering = InbHovering;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState
// (Native, Public)
// Parameters:
// bool                               bInteracting                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InPartIdentifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickMultiTarget::UpdateInteractingState(bool InbInteracting, uint32 InInPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateInteractingState");

	Params::IGizmoClickMultiTarget_UpdateInteractingState_Params Parms{};

	Parms.bInteracting = InbInteracting;
	Parms.InPartIdentifier = InInPartIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState
// (Native, Public)
// Parameters:
// bool                               bHovering                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InPartIdentifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickMultiTarget::UpdateHoverState(bool InbHovering, uint32 InInPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateHoverState");

	Params::IGizmoClickMultiTarget_UpdateHoverState_Params Parms{};

	Parms.bHovering = InbHovering;
	Parms.InPartIdentifier = InInPartIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState
// (Native, Public)
// Parameters:
// bool                               bHittable                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InPartIdentifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoClickMultiTarget::UpdateHittableState(bool InbHittable, uint32 InInPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoClickMultiTarget", "UpdateHittableState");

	Params::IGizmoClickMultiTarget_UpdateHittableState_Params Parms{};

	Parms.bHittable = InbHittable;
	Parms.InPartIdentifier = InInPartIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState
// (Native, Public)
// Parameters:
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InPartIdentifier                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoRenderMultiTarget::UpdateVisibilityState(bool InbVisible, uint32 InInPartIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoRenderMultiTarget", "UpdateVisibilityState");

	Params::IGizmoRenderMultiTarget_UpdateVisibilityState_Params Parms{};

	Parms.bVisible = InbVisible;
	Parms.InPartIdentifier = InInPartIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
// (Native, Public)
// Parameters:

void IGizmoStateTarget::EndUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoStateTarget", "EndUpdate");

	Params::IGizmoStateTarget_EndUpdate_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
// (Native, Public)
// Parameters:

void IGizmoStateTarget::BeginUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoStateTarget", "BeginUpdate");

	Params::IGizmoStateTarget_BeginUpdate_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
// (Native, Public)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoFloatParameterSource::SetParameter(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoFloatParameterSource", "SetParameter");

	Params::IGizmoFloatParameterSource_SetParameter_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
// (Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float IGizmoFloatParameterSource::GetParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoFloatParameterSource", "GetParameter");

	Params::IGizmoFloatParameterSource_GetParameter_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
// (Native, Public)
// Parameters:

void IGizmoFloatParameterSource::EndModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoFloatParameterSource", "EndModify");

	Params::IGizmoFloatParameterSource_EndModify_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
// (Native, Public)
// Parameters:

void IGizmoFloatParameterSource::BeginModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoFloatParameterSource", "BeginModify");

	Params::IGizmoFloatParameterSource_BeginModify_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// struct FVector2D                   NewValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IGizmoVec2ParameterSource::SetParameter(struct FVector2D& InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "SetParameter");

	Params::IGizmoVec2ParameterSource_SetParameter_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
// (Native, Public, HasDefaults, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D IGizmoVec2ParameterSource::GetParameter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "GetParameter");

	Params::IGizmoVec2ParameterSource_GetParameter_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
// (Native, Public)
// Parameters:

void IGizmoVec2ParameterSource::EndModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "EndModify");

	Params::IGizmoVec2ParameterSource_EndModify_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
// (Native, Public)
// Parameters:

void IGizmoVec2ParameterSource::BeginModify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GizmoVec2ParameterSource", "BeginModify");

	Params::IGizmoVec2ParameterSource_BeginModify_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
