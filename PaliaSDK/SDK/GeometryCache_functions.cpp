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


// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGeometryCacheComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheActor", "GetGeometryCacheComponent");

	Params::AGeometryCacheActor_GetGeometryCacheComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIsRunning                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInBackwards                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIsLooping                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "TickAtThisTime");

	Params::UGeometryCacheComponent_TickAtThisTime_Params Parms{};

	Parms.Time = Time;
	Parms.bInIsRunning = bInIsRunning;
	Parms.bInBackwards = bInBackwards;
	Parms.bInIsLooping = bInIsLooping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Stop");

	Params::UGeometryCacheComponent_Stop_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetWireframeOverrideColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetWireframeOverrideColor");

	Params::UGeometryCacheComponent_SetWireframeOverrideColor_Params Parms{};

	Parms.Color = Color;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewStartTimeOffset                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetStartTimeOffset");

	Params::UGeometryCacheComponent_SetStartTimeOffset_Params Parms{};

	Parms.NewStartTimeOffset = NewStartTimeOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPlaybackSpeed                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetPlaybackSpeed");

	Params::UGeometryCacheComponent_SetPlaybackSpeed_Params Parms{};

	Parms.NewPlaybackSpeed = NewPlaybackSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bOverride                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetOverrideWireframeColor(bool bOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetOverrideWireframeColor");

	Params::UGeometryCacheComponent_SetOverrideWireframeColor_Params Parms{};

	Parms.bOverride = bOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewMotionVectorScale                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetMotionVectorScale(float NewMotionVectorScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetMotionVectorScale");

	Params::UGeometryCacheComponent_SetMotionVectorScale_Params Parms{};

	Parms.NewMotionVectorScale = NewMotionVectorScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewLooping                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetLooping(bool bNewLooping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetLooping");

	Params::UGeometryCacheComponent_SetLooping_Params Parms{};

	Parms.bNewLooping = bNewLooping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGeometryCache*              NewGeomCache                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetGeometryCache");

	Params::UGeometryCacheComponent_SetGeometryCache_Params Parms{};

	Parms.NewGeomCache = NewGeomCache;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewExtrapolating                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheComponent::SetExtrapolateFrames(bool bNewExtrapolating)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "SetExtrapolateFrames");

	Params::UGeometryCacheComponent_SetExtrapolateFrames_Params Parms{};

	Parms.bNewExtrapolating = bNewExtrapolating;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayReversedFromEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayReversedFromEnd");

	Params::UGeometryCacheComponent_PlayReversedFromEnd_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.PlayReversed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayReversed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayReversed");

	Params::UGeometryCacheComponent_PlayReversed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "PlayFromStart");

	Params::UGeometryCacheComponent_PlayFromStart_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Play");

	Params::UGeometryCacheComponent_Play_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGeometryCacheComponent::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "Pause");

	Params::UGeometryCacheComponent_Pause_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsPlayingReversed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsPlayingReversed");

	Params::UGeometryCacheComponent_IsPlayingReversed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsPlaying");

	Params::UGeometryCacheComponent_IsPlaying_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsLooping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsLooping");

	Params::UGeometryCacheComponent_IsLooping_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::IsExtrapolatingFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "IsExtrapolatingFrames");

	Params::UGeometryCacheComponent_IsExtrapolatingFrames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UGeometryCacheComponent::GetWireframeOverrideColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetWireframeOverrideColor");

	Params::UGeometryCacheComponent_GetWireframeOverrideColor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetStartTimeOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetStartTimeOffset");

	Params::UGeometryCacheComponent_GetStartTimeOffset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetPlaybackSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetPlaybackSpeed");

	Params::UGeometryCacheComponent_GetPlaybackSpeed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetPlaybackDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetPlaybackDirection");

	Params::UGeometryCacheComponent_GetPlaybackDirection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGeometryCacheComponent::GetOverrideWireframeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetOverrideWireframeColor");

	Params::UGeometryCacheComponent_GetOverrideWireframeColor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGeometryCacheComponent::GetNumberOfFrames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetNumberOfFrames");

	Params::UGeometryCacheComponent_GetNumberOfFrames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetMotionVectorScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetMotionVectorScale");

	Params::UGeometryCacheComponent_GetMotionVectorScale_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetDuration");

	Params::UGeometryCacheComponent_GetDuration_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGeometryCacheComponent::GetAnimationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheComponent", "GetAnimationTime");

	Params::UGeometryCacheComponent_GetAnimationTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      MeshData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              SampleTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_FlipbookAnimation", "AddMeshSample");

	Params::UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params Parms{};

	Parms.MeshData = MeshData;
	Parms.SampleTime = SampleTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      NewMeshData                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_TransformAnimation::SetMesh(struct FGeometryCacheMeshData& NewMeshData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_TransformAnimation", "SetMesh");

	Params::UGeometryCacheTrack_TransformAnimation_SetMesh_Params Parms{};

	Parms.NewMeshData = NewMeshData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FGeometryCacheMeshData      NewMeshData                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(struct FGeometryCacheMeshData& NewMeshData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeometryCacheTrack_TransformGroupAnimation", "SetMesh");

	Params::UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params Parms{};

	Parms.NewMeshData = NewMeshData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
