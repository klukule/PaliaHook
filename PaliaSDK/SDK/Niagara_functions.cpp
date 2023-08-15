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


// Function Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                      InSource                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceStaticMesh::OnSourceEndPlay(class AActor* InSource, enum class EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceStaticMesh", "OnSourceEndPlay");

	Params::UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Params Parms{};

	Parms.InSource = InSource;
	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        UserParameterName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        GraphName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        RemapName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceUObjectPropertyReader::SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, class FName UserParameterName, class FName GraphName, class FName RemapName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceUObjectPropertyReader", "SetUObjectReaderPropertyRemap");

	Params::UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Params Parms{};

	Parms.NiagaraComponent = NiagaraComponent;
	Parms.UserParameterName = UserParameterName;
	Parms.GraphName = GraphName;
	Parms.RemapName = RemapName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraActor.SetDestroyOnSystemFinish
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldDestroyOnSystemFinish                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraActor", "SetDestroyOnSystemFinish");

	Params::ANiagaraActor_SetDestroyOnSystemFinish_Params Parms{};

	Parms.bShouldDestroyOnSystemFinish = bShouldDestroyOnSystemFinish;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraActor.OnNiagaraSystemFinished
// (Final, Native, Private)
// Parameters:
// class UNiagaraComponent*           FinishedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraActor::OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraActor", "OnNiagaraSystemFinished");

	Params::ANiagaraActor_OnNiagaraSystemFinished_Params Parms{};

	Parms.FinishedComponent = FinishedComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec4
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec4(class FName InVariableName, struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec4");

	Params::UNiagaraComponent_SetVariableVec4_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec3(class FName InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec3");

	Params::UNiagaraComponent_SetVariableVec3_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableVec2(class FName InVariableName, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableVec2");

	Params::UNiagaraComponent_SetVariableVec2_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget*        TextureRenderTarget                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableTextureRenderTarget(class FName InVariableName, class UTextureRenderTarget* TextureRenderTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableTextureRenderTarget");

	Params::UNiagaraComponent_SetVariableTextureRenderTarget_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.TextureRenderTarget = TextureRenderTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableTexture(class FName InVariableName, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableTexture");

	Params::UNiagaraComponent_SetVariableTexture_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Texture = Texture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableStaticMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 InValue                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableStaticMesh(class FName InVariableName, class UStaticMesh* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableStaticMesh");

	Params::UNiagaraComponent_SetVariableStaticMesh_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableQuat(class FName InVariableName, struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableQuat");

	Params::UNiagaraComponent_SetVariableQuat_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariablePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariablePosition(class FName InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariablePosition");

	Params::UNiagaraComponent_SetVariablePosition_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableObject(class FName InVariableName, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableObject");

	Params::UNiagaraComponent_SetVariableObject_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableMatrix
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMatrix                     InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableMatrix(class FName InVariableName, struct FMatrix& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableMatrix");

	Params::UNiagaraComponent_SetVariableMatrix_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableMaterial(class FName InVariableName, class UMaterialInterface* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableMaterial");

	Params::UNiagaraComponent_SetVariableMaterial_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableLinearColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableLinearColor(class FName InVariableName, struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableLinearColor");

	Params::UNiagaraComponent_SetVariableLinearColor_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableInt(class FName InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableInt");

	Params::UNiagaraComponent_SetVariableInt_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableFloat(class FName InVariableName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableFloat");

	Params::UNiagaraComponent_SetVariableFloat_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableBool(class FName InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableBool");

	Params::UNiagaraComponent_SetVariableBool_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetVariableActor(class FName InVariableName, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetVariableActor");

	Params::UNiagaraComponent_SetVariableActor_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetTickBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENiagaraTickBehavior    NewTickBehavior                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetTickBehavior");

	Params::UNiagaraComponent_SetTickBehavior_Params Parms{};

	Parms.NewTickBehavior = NewTickBehavior;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetSystemFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        LocalBounds                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetSystemFixedBounds(const struct FBox& LocalBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetSystemFixedBounds");

	Params::UNiagaraComponent_SetSystemFixedBounds_Params Parms{};

	Parms.LocalBounds = LocalBounds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetSimCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSimCache*            SimCache                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResetSystem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetSimCache");

	Params::UNiagaraComponent_SetSimCache_Params Parms{};

	Parms.SimCache = SimCache;
	Parms.bResetSystem = bResetSystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSeekDelta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetSeekDelta");

	Params::UNiagaraComponent_SetSeekDelta_Params Parms{};

	Parms.InSeekDelta = InSeekDelta;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRenderingEnabled                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetRenderingEnabled");

	Params::UNiagaraComponent_SetRenderingEnabled_Params Parms{};

	Parms.bInRenderingEnabled = bInRenderingEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetRandomSeedOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewRandomSeedOffset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetRandomSeedOffset(int32 NewRandomSeedOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetRandomSeedOffset");

	Params::UNiagaraComponent_SetRandomSeedOffset_Params Parms{};

	Parms.NewRandomSeedOffset = NewRandomSeedOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnablePreviewLODDistance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PreviewLODDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PreviewMaxDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetPreviewLODDistance");

	Params::UNiagaraComponent_SetPreviewLODDistance_Params Parms{};

	Parms.bEnablePreviewLODDistance = bEnablePreviewLODDistance;
	Parms.PreviewLODDistance = PreviewLODDistance;
	Parms.PreviewMaxDistance = PreviewMaxDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInPaused                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetPaused(bool bInPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetPaused");

	Params::UNiagaraComponent_SetPaused_Params Parms{};

	Parms.bInPaused = bInPaused;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec4(const class FString& InVariableName, struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec4");

	Params::UNiagaraComponent_SetNiagaraVariableVec4_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec3");

	Params::UNiagaraComponent_SetNiagaraVariableVec3_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableVec2");

	Params::UNiagaraComponent_SetNiagaraVariableVec2_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableQuat(const class FString& InVariableName, struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableQuat");

	Params::UNiagaraComponent_SetNiagaraVariableQuat_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariablePosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariablePosition(const class FString& InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariablePosition");

	Params::UNiagaraComponent_SetNiagaraVariablePosition_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableObject");

	Params::UNiagaraComponent_SetNiagaraVariableObject_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableMatrix
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMatrix                     InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableMatrix(const class FString& InVariableName, struct FMatrix& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableMatrix");

	Params::UNiagaraComponent_SetNiagaraVariableMatrix_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableLinearColor(const class FString& InVariableName, struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableLinearColor");

	Params::UNiagaraComponent_SetNiagaraVariableLinearColor_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableInt");

	Params::UNiagaraComponent_SetNiagaraVariableInt_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableFloat(const class FString& InVariableName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableFloat");

	Params::UNiagaraComponent_SetNiagaraVariableFloat_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableBool(const class FString& InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableBool");

	Params::UNiagaraComponent_SetNiagaraVariableBool_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetNiagaraVariableActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetNiagaraVariableActor");

	Params::UNiagaraComponent_SetNiagaraVariableActor_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetMaxSimTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetMaxSimTime");

	Params::UNiagaraComponent_SetMaxSimTime_Params Parms{};

	Parms.InMaxTime = InMaxTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bLock                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetLockDesiredAgeDeltaTimeToSeekDelta");

	Params::UNiagaraComponent_SetLockDesiredAgeDeltaTimeToSeekDelta_Params Parms{};

	Parms.bLock = bLock;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetGpuComputeDebug
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnableDebug                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetGpuComputeDebug");

	Params::UNiagaraComponent_SetGpuComputeDebug_Params Parms{};

	Parms.bEnableDebug = bEnableDebug;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetForceSolo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInForceSolo                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetForceSolo");

	Params::UNiagaraComponent_SetForceSolo_Params Parms{};

	Parms.bInForceSolo = bInForceSolo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetForceLocalPlayerEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsPlayerEffect                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetForceLocalPlayerEffect(bool bIsPlayerEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetForceLocalPlayerEffect");

	Params::UNiagaraComponent_SetForceLocalPlayerEffect_Params Parms{};

	Parms.bIsPlayerEffect = bIsPlayerEffect;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetEmitterFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        LocalBounds                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetEmitterFixedBounds(class FName EmitterName, const struct FBox& LocalBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetEmitterFixedBounds");

	Params::UNiagaraComponent_SetEmitterFixedBounds_Params Parms{};

	Parms.EmitterName = EmitterName;
	Parms.LocalBounds = LocalBounds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDesiredAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetDesiredAge");

	Params::UNiagaraComponent_SetDesiredAge_Params Parms{};

	Parms.InDesiredAge = InDesiredAge;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetCustomTimeDilation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Dilation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetCustomTimeDilation(float Dilation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetCustomTimeDilation");

	Params::UNiagaraComponent_SetCustomTimeDilation_Params Parms{};

	Parms.Dilation = Dilation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanRenderWhileSeeking                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetCanRenderWhileSeeking");

	Params::UNiagaraComponent_SetCanRenderWhileSeeking_Params Parms{};

	Parms.bInCanRenderWhileSeeking = bInCanRenderWhileSeeking;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetAutoDestroy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAutoDestroy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAutoDestroy");

	Params::UNiagaraComponent_SetAutoDestroy_Params Parms{};

	Parms.bInAutoDestroy = bInAutoDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              InAsset                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResetExistingOverrideParameters                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAsset");

	Params::UNiagaraComponent_SetAsset_Params Parms{};

	Parms.InAsset = InAsset;
	Parms.bResetExistingOverrideParameters = bResetExistingOverrideParameters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetAllowScalability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllow                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAllowScalability(bool bAllow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAllowScalability");

	Params::UNiagaraComponent_SetAllowScalability_Params Parms{};

	Parms.bAllow = bAllow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ENiagaraAgeUpdateMode   InAgeUpdateMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SetAgeUpdateMode");

	Params::UNiagaraComponent_SetAgeUpdateMode_Params Parms{};

	Parms.InAgeUpdateMode = InAgeUpdateMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.SeekToDesiredAge
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDesiredAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "SeekToDesiredAge");

	Params::UNiagaraComponent_SeekToDesiredAge_Params Parms{};

	Parms.InDesiredAge = InDesiredAge;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.ResetSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ResetSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ResetSystem");

	Params::UNiagaraComponent_ResetSystem_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.ReinitializeSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ReinitializeSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ReinitializeSystem");

	Params::UNiagaraComponent_ReinitializeSystem_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "IsPaused");

	Params::UNiagaraComponent_IsPaused_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.InitForPerformanceBaseline
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::InitForPerformanceBaseline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "InitForPerformanceBaseline");

	Params::UNiagaraComponent_InitForPerformanceBaseline_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.GetTickBehavior
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraTickBehavior    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetTickBehavior");

	Params::UNiagaraComponent_GetTickBehavior_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetSystemFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UNiagaraComponent::GetSystemFixedBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetSystemFixedBounds");

	Params::UNiagaraComponent_GetSystemFixedBounds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetSimCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSimCache*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraSimCache* UNiagaraComponent::GetSimCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetSimCache");

	Params::UNiagaraComponent_GetSimCache_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetSeekDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetSeekDelta");

	Params::UNiagaraComponent_GetSeekDelta_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetRandomSeedOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraComponent::GetRandomSeedOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetRandomSeedOffset");

	Params::UNiagaraComponent_GetRandomSeedOffset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::GetPreviewLODDistanceEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetPreviewLODDistanceEnabled");

	Params::UNiagaraComponent_GetPreviewLODDistanceEnabled_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetPreviewLODDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetPreviewLODDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetPreviewLODDistance");

	Params::UNiagaraComponent_GetPreviewLODDistance_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValueName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValueVec3_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticleValueVec3_DebugOnly_Params Parms{};

	Parms.InEmitterName = InEmitterName;
	Parms.InValueName = InValueName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InValueName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticleValues_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticleValues_DebugOnly_Params Parms{};

	Parms.InEmitterName = InEmitterName;
	Parms.InValueName = InValueName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InEmitterName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetNiagaraParticlePositions_DebugOnly");

	Params::UNiagaraComponent_GetNiagaraParticlePositions_DebugOnly_Params Parms{};

	Parms.InEmitterName = InEmitterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetMaxSimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetMaxSimTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetMaxSimTime");

	Params::UNiagaraComponent_GetMaxSimTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetLockDesiredAgeDeltaTimeToSeekDelta");

	Params::UNiagaraComponent_GetLockDesiredAgeDeltaTimeToSeekDelta_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetForceSolo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::GetForceSolo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetForceSolo");

	Params::UNiagaraComponent_GetForceSolo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetForceLocalPlayerEffect
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::GetForceLocalPlayerEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetForceLocalPlayerEffect");

	Params::UNiagaraComponent_GetForceLocalPlayerEffect_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetEmitterFixedBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UNiagaraComponent::GetEmitterFixedBounds(class FName EmitterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetEmitterFixedBounds");

	Params::UNiagaraComponent_GetEmitterFixedBounds_Params Parms{};

	Parms.EmitterName = EmitterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetDesiredAge
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetDesiredAge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetDesiredAge");

	Params::UNiagaraComponent_GetDesiredAge_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetDataInterface
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraDataInterface*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetDataInterface");

	Params::UNiagaraComponent_GetDataInterface_Params Parms{};

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetCustomTimeDilation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraComponent::GetCustomTimeDilation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetCustomTimeDilation");

	Params::UNiagaraComponent_GetCustomTimeDilation_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UNiagaraSystem*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraSystem* UNiagaraComponent::GetAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetAsset");

	Params::UNiagaraComponent_GetAsset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAllowScalability
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraComponent::GetAllowScalability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetAllowScalability");

	Params::UNiagaraComponent_GetAllowScalability_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.GetAgeUpdateMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraAgeUpdateMode   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "GetAgeUpdateMode");

	Params::UNiagaraComponent_GetAgeUpdateMode_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraComponent.ClearSystemFixedBounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UNiagaraComponent::ClearSystemFixedBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ClearSystemFixedBounds");

	Params::UNiagaraComponent_ClearSystemFixedBounds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.ClearSimCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bResetSystem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::ClearSimCache(bool bResetSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ClearSimCache");

	Params::UNiagaraComponent_ClearSimCache_Params Parms{};

	Parms.bResetSystem = bResetSystem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.ClearEmitterFixedBounds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::ClearEmitterFixedBounds(class FName EmitterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "ClearEmitterFixedBounds");

	Params::UNiagaraComponent_ClearEmitterFixedBounds_Params Parms{};

	Parms.EmitterName = EmitterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.AdvanceSimulationByTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SimulateTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TickDeltaSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulationByTime");

	Params::UNiagaraComponent_AdvanceSimulationByTime_Params Parms{};

	Parms.SimulateTime = SimulateTime;
	Parms.TickDeltaSeconds = TickDeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraComponent.AdvanceSimulation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TickCount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TickDeltaSeconds                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraComponent::AdvanceSimulation(int32 TickCount, float TickDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraComponent", "AdvanceSimulation");

	Params::UNiagaraComponent_AdvanceSimulation_Params Parms{};

	Parms.TickCount = TickCount;
	Parms.TickDeltaSeconds = TickDeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVectorValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector4& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector4Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector4>            ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector4>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector4");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector2D& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector2DValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector2D>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector2D");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, int32 Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayUInt8Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<int32>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayUInt8");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Value                                                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FQuat& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayQuatValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>               ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FQuat>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayQuat");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayPositionValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayPosition");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, int32 Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayInt32Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<int32>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayInt32");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, float Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayFloatValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<float>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayFloat");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FLinearColor& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayColorValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FLinearColor>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayColor");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSizeToFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, bool& Value, bool bSizeToFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayBoolValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;
	Parms.Value = Value;
	Parms.bSizeToFit = bSizeToFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       ArrayData                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<bool>& ArrayData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayBool");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.ArrayData = ArrayData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVectorValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector4Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector4>            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector4");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector2DValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector2D");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayUInt8Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayUInt8");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQuat UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayQuatValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FQuat>               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayQuat");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayPositionValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayPosition");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayInt32Value");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayInt32");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayFloatValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayFloat");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayColorValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayColor");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayBoolValue");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayBool");

	Params::UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData>  Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UNiagaraSystem*              NiagaraSystem                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SimulationPositionOffset                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void INiagaraParticleCallbackHandler::ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParticleCallbackHandler", "ReceiveParticleData");

	Params::INiagaraParticleCallbackHandler_ReceiveParticleData_Params Parms{};

	Parms.Data = Data;
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = SimulationPositionOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeX                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeY                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetTextureSize");

	Params::UNiagaraDataInterfaceGrid2DCollection_GetTextureSize_Params Parms{};

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeX                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeY                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetRawTextureSize");

	Params::UNiagaraDataInterfaceGrid2DCollection_GetRawTextureSize_Params Parms{};

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      Dest                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillTexture2D");

	Params::UNiagaraDataInterfaceGrid2DCollection_FillTexture2D_Params Parms{};

	Parms.Component = Component;
	Parms.Dest = Dest;
	Parms.AttributeIndex = AttributeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      Dest                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TilesX                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TilesY                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillRawTexture2D");

	Params::UNiagaraDataInterfaceGrid2DCollection_FillRawTexture2D_Params Parms{};

	Parms.Component = Component;
	Parms.Dest = Dest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TilesX != nullptr)
		*TilesX = Parms.TilesX;

	if (TilesY != nullptr)
		*TilesY = Parms.TilesY;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeX                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeY                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeZ                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "GetTextureSize");

	Params::UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Params Parms{};

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

	if (SizeZ != nullptr)
		*SizeZ = Parms.SizeZ;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeX                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeY                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SizeZ                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "GetRawTextureSize");

	Params::UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Params Parms{};

	Parms.Component = Component;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SizeX != nullptr)
		*SizeX = Parms.SizeX;

	if (SizeY != nullptr)
		*SizeY = Parms.SizeY;

	if (SizeZ != nullptr)
		*SizeZ = Parms.SizeZ;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*              Dest                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              AttributeIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "FillVolumeTexture");

	Params::UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Params Parms{};

	Parms.Component = Component;
	Parms.Dest = Dest;
	Parms.AttributeIndex = AttributeIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           Component                                                        (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*              Dest                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TilesX                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TilesY                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TileZ                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32* TilesX, int32* TilesY, int32* TileZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceGrid3DCollection", "FillRawVolumeTexture");

	Params::UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Params Parms{};

	Parms.Component = Component;
	Parms.Dest = Dest;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TilesX != nullptr)
		*TilesX = Parms.TilesX;

	if (TilesY != nullptr)
		*TilesY = Parms.TilesY;

	if (TileZ != nullptr)
		*TileZ = Parms.TileZ;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OverrideName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              SourceActors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraDIRigidMeshCollisionFunctionLibrary::SetSourceActors(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<class AActor*>& SourceActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDIRigidMeshCollisionFunctionLibrary", "SetSourceActors");

	Params::UNiagaraDIRigidMeshCollisionFunctionLibrary_SetSourceActors_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.SourceActors = SourceActors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                      InSource                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          Reason                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraDataInterfaceSkeletalMesh::OnSourceEndPlay(class AActor* InSource, enum class EEndPlayReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraDataInterfaceSkeletalMesh", "OnSourceEndPlay");

	Params::UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Params Parms{};

	Parms.InSource = InSource;
	Parms.Reason = Reason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFXSystemSpawnParameters    SpawnParams                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters* SpawnParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttachedWithParams");

	Params::UNiagaraFunctionLibrary_SpawnSystemAttachedWithParams_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SpawnParams != nullptr)
		*SpawnParams = Parms.SpawnParams;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              SystemTemplate                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoActivate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ENCPoolMethod           PoolingMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreCullCheck                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttached");

	Params::UNiagaraFunctionLibrary_SpawnSystemAttached_Params Parms{};

	Parms.SystemTemplate = SystemTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.bAutoActivate = bAutoActivate;
	Parms.PoolingMethod = PoolingMethod;
	Parms.bPreCullCheck = bPreCullCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFXSystemSpawnParameters    SpawnParams                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters* SpawnParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocationWithParams");

	Params::UNiagaraFunctionLibrary_SpawnSystemAtLocationWithParams_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SpawnParams != nullptr)
		*SpawnParams = Parms.SpawnParams;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSystem*              SystemTemplate                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                     Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoDestroy                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAutoActivate                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ENCPoolMethod           PoolingMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPreCullCheck                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocation");

	Params::UNiagaraFunctionLibrary_SpawnSystemAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SystemTemplate = SystemTemplate;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;
	Parms.bAutoDestroy = bAutoDestroy;
	Parms.bAutoActivate = bAutoActivate;
	Parms.PoolingMethod = PoolingMethod;
	Parms.bPreCullCheck = bPreCullCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVolumeTexture*              Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetVolumeTextureObject");

	Params::UNiagaraFunctionLibrary_SetVolumeTextureObject_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Texture = Texture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetTextureObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture*                    Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetTextureObject");

	Params::UNiagaraFunctionLibrary_SetTextureObject_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Texture = Texture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2DArray*             Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture2DArray* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetTexture2DArrayObject");

	Params::UNiagaraFunctionLibrary_SetTexture2DArrayObject_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.Texture = Texture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                SamplingRegions                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& SamplingRegions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceSamplingRegions");

	Params::UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceSamplingRegions_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.SamplingRegions = SamplingRegions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                FilteredSockets                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& FilteredSockets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceFilteredSockets");

	Params::UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredSockets_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.FilteredSockets = FilteredSockets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FName>                FilteredBones                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& FilteredBones)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceFilteredBones");

	Params::UNiagaraFunctionLibrary_SetSkeletalMeshDataInterfaceFilteredBones_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.FilteredBones = FilteredBones;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         Primitive                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CollisionGroup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32 CollisionGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetComponentNiagaraGPURayTracedCollisionGroup");

	Params::UNiagaraFunctionLibrary_SetComponentNiagaraGPURayTracedCollisionGroup_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Primitive = Primitive;
	Parms.CollisionGroup = CollisionGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CollisionGroup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32 CollisionGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "SetActorNiagaraGPURayTracedCollisionGroup");

	Params::UNiagaraFunctionLibrary_SetActorNiagaraGPURayTracedCollisionGroup_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Actor = Actor;
	Parms.CollisionGroup = CollisionGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CollisionGroup                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32 CollisionGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "ReleaseNiagaraGPURayTracedCollisionGroup");

	Params::UNiagaraFunctionLibrary_ReleaseNiagaraGPURayTracedCollisionGroup_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CollisionGroup = CollisionGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*        StaticMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMeshComponent");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMeshComponent_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.StaticMeshComponent = StaticMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMesh");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableStaticMesh_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.StaticMesh = StaticMesh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UNiagaraComponent*           NiagaraSystem                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OverrideName                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableSkeletalMeshComponent");

	Params::UNiagaraFunctionLibrary_OverrideSystemUserVariableSkeletalMeshComponent_Params Parms{};

	Parms.NiagaraSystem = NiagaraSystem;
	Parms.OverrideName = OverrideName;
	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollection* Collection                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraParameterCollectionInstance*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "GetNiagaraParameterCollection");

	Params::UNiagaraFunctionLibrary_GetNiagaraParameterCollection_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Collection = Collection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraFunctionLibrary::AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraFunctionLibrary", "AcquireNiagaraGPURayTracedCollisionGroup");

	Params::UNiagaraFunctionLibrary_AcquireNiagaraGPURayTracedCollisionGroup_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVectorParameter");

	Params::UNiagaraParameterCollectionInstance_SetVectorParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    InValue                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVector4Parameter(const class FString& InVariableName, struct FVector4& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector4Parameter");

	Params::UNiagaraParameterCollectionInstance_SetVector4Parameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetVector2DParameter");

	Params::UNiagaraParameterCollectionInstance_SetVector2DParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       InValue                                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetQuatParameter(const class FString& InVariableName, struct FQuat& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetQuatParameter");

	Params::UNiagaraParameterCollectionInstance_SetQuatParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetIntParameter(const class FString& InVariableName, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetIntParameter");

	Params::UNiagaraParameterCollectionInstance_SetIntParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetFloatParameter(const class FString& InVariableName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetFloatParameter");

	Params::UNiagaraParameterCollectionInstance_SetFloatParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetColorParameter");

	Params::UNiagaraParameterCollectionInstance_SetColorParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraParameterCollectionInstance::SetBoolParameter(const class FString& InVariableName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "SetBoolParameter");

	Params::UNiagaraParameterCollectionInstance_SetBoolParameter_Params Parms{};

	Parms.InVariableName = InVariableName;
	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVectorParameter");

	Params::UNiagaraParameterCollectionInstance_GetVectorParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector4Parameter");

	Params::UNiagaraParameterCollectionInstance_GetVector4Parameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetVector2DParameter");

	Params::UNiagaraParameterCollectionInstance_GetVector2DParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetQuatParameter");

	Params::UNiagaraParameterCollectionInstance_GetQuatParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraParameterCollectionInstance::GetIntParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetIntParameter");

	Params::UNiagaraParameterCollectionInstance_GetIntParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraParameterCollectionInstance::GetFloatParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetFloatParameter");

	Params::UNiagaraParameterCollectionInstance_GetFloatParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetColorParameter");

	Params::UNiagaraParameterCollectionInstance_GetColorParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InVariableName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraParameterCollectionInstance::GetBoolParameter(const class FString& InVariableName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraParameterCollectionInstance", "GetBoolParameter");

	Params::UNiagaraParameterCollectionInstance_GetBoolParameter_Params Parms{};

	Parms.InVariableName = InVariableName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraBaselineController.OnTickTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraBaselineController::OnTickTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "OnTickTest");

	Params::UNiagaraBaselineController_OnTickTest_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraBaselineController.OnOwnerTick
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraBaselineController::OnOwnerTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "OnOwnerTick");

	Params::UNiagaraBaselineController_OnOwnerTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraBaselineController.OnEndTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FNiagaraPerfBaselineStats   Stats                                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UNiagaraBaselineController::OnEndTest(const struct FNiagaraPerfBaselineStats& Stats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "OnEndTest");

	Params::UNiagaraBaselineController_OnEndTest_Params Parms{};

	Parms.Stats = Stats;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraBaselineController.OnBeginTest
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UNiagaraBaselineController::OnBeginTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "OnBeginTest");

	Params::UNiagaraBaselineController_OnBeginTest_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraBaselineController.GetSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UNiagaraSystem*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraSystem* UNiagaraBaselineController::GetSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraBaselineController", "GetSystem");

	Params::UNiagaraBaselineController_GetSystem_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraPreviewBase.SetSystem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              InSystem                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraPreviewBase::SetSystem(class UNiagaraSystem* InSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewBase", "SetSystem");

	Params::ANiagaraPreviewBase_SetSystem_Params Parms{};

	Parms.InSystem = InSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Niagara.NiagaraPreviewBase.SetLabelText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InXAxisText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        InYAxisText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void ANiagaraPreviewBase::SetLabelText(class FText& InXAxisText, class FText& InYAxisText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewBase", "SetLabelText");

	Params::ANiagaraPreviewBase_SetLabelText_Params Parms{};

	Parms.InXAxisText = InXAxisText;
	Parms.InYAxisText = InYAxisText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Niagara.NiagaraPreviewAxis.Num
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraPreviewAxis::Num()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewAxis", "Num");

	Params::UNiagaraPreviewAxis_Num_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraPreviewAxis.ApplyToPreview
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           PreviewComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PreviewIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsXAxis                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutLabelText                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraPreviewAxis::ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewAxis", "ApplyToPreview");

	Params::UNiagaraPreviewAxis_ApplyToPreview_Params Parms{};

	Parms.PreviewComponent = PreviewComponent;
	Parms.PreviewIndex = PreviewIndex;
	Parms.bIsXAxis = bIsXAxis;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLabelText != nullptr)
		*OutLabelText = Parms.OutLabelText;

}


// Function Niagara.NiagaraPreviewGrid.SetPaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bPaused                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraPreviewGrid::SetPaused(bool bPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewGrid", "SetPaused");

	Params::ANiagaraPreviewGrid_SetPaused_Params Parms{};

	Parms.bPaused = bPaused;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraPreviewGrid.GetPreviews
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UNiagaraComponent*>   OutPreviews                                                      (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void ANiagaraPreviewGrid::GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewGrid", "GetPreviews");

	Params::ANiagaraPreviewGrid_GetPreviews_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutPreviews != nullptr)
		*OutPreviews = Parms.OutPreviews;

}


// Function Niagara.NiagaraPreviewGrid.DeactivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ANiagaraPreviewGrid::DeactivatePreviews()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewGrid", "DeactivatePreviews");

	Params::ANiagaraPreviewGrid_DeactivatePreviews_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraPreviewGrid.ActivatePreviews
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraPreviewGrid", "ActivatePreviews");

	Params::ANiagaraPreviewGrid_ActivatePreviews_Params Parms{};

	Parms.bReset = bReset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
// (Final, Native, Public)
// Parameters:

void UNiagaraScript::RaiseOnGPUCompilationComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraScript", "RaiseOnGPUCompilationComplete");

	Params::UNiagaraScript_RaiseOnGPUCompilationComplete_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Niagara.NiagaraSimCache.ReadVectorAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadVectorAttribute(TArray<struct FVector>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVectorAttribute");

	Params::UNiagaraSimCache_ReadVectorAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadVector4Attribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector4>            OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadVector4Attribute(TArray<struct FVector4>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVector4Attribute");

	Params::UNiagaraSimCache_ReadVector4Attribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadVector2Attribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector2D>           OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadVector2Attribute(TArray<struct FVector2D>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadVector2Attribute");

	Params::UNiagaraSimCache_ReadVector2Attribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FQuat>               OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FQuat                       Quat                                                             (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadQuatAttributeWithRebase(TArray<struct FQuat>* OutValues, const struct FQuat& Quat, class FName AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadQuatAttributeWithRebase");

	Params::UNiagaraSimCache_ReadQuatAttributeWithRebase_Params Parms{};

	Parms.Quat = Quat;
	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadQuatAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FQuat>               OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLocalSpaceToWorld                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadQuatAttribute(TArray<struct FQuat>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadQuatAttribute");

	Params::UNiagaraSimCache_ReadQuatAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.bLocalSpaceToWorld = bLocalSpaceToWorld;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadPositionAttributeWithRebase(TArray<struct FVector>* OutValues, const struct FTransform& Transform, class FName AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadPositionAttributeWithRebase");

	Params::UNiagaraSimCache_ReadPositionAttributeWithRebase_Params Parms{};

	Parms.Transform = Transform;
	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadPositionAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLocalSpaceToWorld                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadPositionAttribute(TArray<struct FVector>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadPositionAttribute");

	Params::UNiagaraSimCache_ReadPositionAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.bLocalSpaceToWorld = bLocalSpaceToWorld;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadIntAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<int32>                      OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadIntAttribute(TArray<int32>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadIntAttribute");

	Params::UNiagaraSimCache_ReadIntAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadFloatAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<float>                      OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadFloatAttribute(TArray<float>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadFloatAttribute");

	Params::UNiagaraSimCache_ReadFloatAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.ReadColorAttribute
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FLinearColor>        OutValues                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class FName                        AttributeName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        EmitterName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FrameIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNiagaraSimCache::ReadColorAttribute(TArray<struct FLinearColor>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "ReadColorAttribute");

	Params::UNiagaraSimCache_ReadColorAttribute_Params Parms{};

	Parms.AttributeName = AttributeName;
	Parms.EmitterName = EmitterName;
	Parms.FrameIndex = FrameIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

}


// Function Niagara.NiagaraSimCache.IsEmpty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraSimCache::IsEmpty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "IsEmpty");

	Params::UNiagaraSimCache_IsEmpty_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.IsCacheValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraSimCache::IsCacheValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "IsCacheValid");

	Params::UNiagaraSimCache_IsCacheValid_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetStartSeconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNiagaraSimCache::GetStartSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetStartSeconds");

	Params::UNiagaraSimCache_GetStartSeconds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetNumFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraSimCache::GetNumFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetNumFrames");

	Params::UNiagaraSimCache_GetNumFrames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetNumEmitters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNiagaraSimCache::GetNumEmitters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetNumEmitters");

	Params::UNiagaraSimCache_GetNumEmitters_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetEmitterNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UNiagaraSimCache::GetEmitterNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetEmitterNames");

	Params::UNiagaraSimCache_GetEmitterNames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetEmitterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              EmitterIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UNiagaraSimCache::GetEmitterName(int32 EmitterIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetEmitterName");

	Params::UNiagaraSimCache_GetEmitterName_Params Parms{};

	Parms.EmitterIndex = EmitterIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCache.GetAttributeCaptureMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ENiagaraSimCacheAttributeCaptureModeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ENiagaraSimCacheAttributeCaptureMode UNiagaraSimCache::GetAttributeCaptureMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCache", "GetAttributeCaptureMode");

	Params::UNiagaraSimCache_GetAttributeCaptureMode_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAsyncNiagaraCaptureSimCache::OnCaptureComplete__DelegateSignature(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncNiagaraCaptureSimCache", "OnCaptureComplete__DelegateSignature");

	Params::UAsyncNiagaraCaptureSimCache_OnCaptureComplete__DelegateSignature_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraSimCache*            SimCache                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNiagaraSimCacheCreateParametersCreateParameters                                                 (Parm, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           NiagaraComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSimCache*            OutSimCache                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CaptureRate                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAdvanceSimulation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AdvanceDeltaTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncNiagaraCaptureSimCache*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncNiagaraCaptureSimCache", "CaptureNiagaraSimCacheUntilComplete");

	Params::UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheUntilComplete_Params Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = CreateParameters;
	Parms.NiagaraComponent = NiagaraComponent;
	Parms.CaptureRate = CaptureRate;
	Parms.bAdvanceSimulation = bAdvanceSimulation;
	Parms.AdvanceDeltaTime = AdvanceDeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSimCache != nullptr)
		*OutSimCache = Parms.OutSimCache;

	return Parms.ReturnValue;

}


// Function Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraSimCache*            SimCache                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNiagaraSimCacheCreateParametersCreateParameters                                                 (Parm, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           NiagaraComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSimCache*            OutSimCache                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumFrames                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CaptureRate                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAdvanceSimulation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AdvanceDeltaTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncNiagaraCaptureSimCache*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncNiagaraCaptureSimCache* UAsyncNiagaraCaptureSimCache::CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncNiagaraCaptureSimCache", "CaptureNiagaraSimCacheMultiFrame");

	Params::UAsyncNiagaraCaptureSimCache_CaptureNiagaraSimCacheMultiFrame_Params Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = CreateParameters;
	Parms.NiagaraComponent = NiagaraComponent;
	Parms.NumFrames = NumFrames;
	Parms.CaptureRate = CaptureRate;
	Parms.bAdvanceSimulation = bAdvanceSimulation;
	Parms.AdvanceDeltaTime = AdvanceDeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSimCache != nullptr)
		*OutSimCache = Parms.OutSimCache;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSimCache*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNiagaraSimCache* UNiagaraSimCacheFunctionLibrary::CreateNiagaraSimCache(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCacheFunctionLibrary", "CreateNiagaraSimCache");

	Params::UNiagaraSimCacheFunctionLibrary_CreateNiagaraSimCache_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UNiagaraSimCache*            SimCache                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FNiagaraSimCacheCreateParametersCreateParameters                                                 (Parm, NativeAccessSpecifierPublic)
// class UNiagaraComponent*           NiagaraComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNiagaraSimCache*            OutSimCache                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAdvanceSimulation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AdvanceDeltaTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNiagaraSimCacheFunctionLibrary::CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NiagaraSimCacheFunctionLibrary", "CaptureNiagaraSimCacheImmediate");

	Params::UNiagaraSimCacheFunctionLibrary_CaptureNiagaraSimCacheImmediate_Params Parms{};

	Parms.SimCache = SimCache;
	Parms.CreateParameters = CreateParameters;
	Parms.NiagaraComponent = NiagaraComponent;
	Parms.bAdvanceSimulation = bAdvanceSimulation;
	Parms.AdvanceDeltaTime = AdvanceDeltaTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSimCache != nullptr)
		*OutSimCache = Parms.OutSimCache;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
