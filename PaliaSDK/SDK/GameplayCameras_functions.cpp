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


// Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULegacyCameraShake>ShakeClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraShakeSourceComponent* SourceComponent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    UserPlaySpaceRot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyCameraShake", "StartLegacyCameraShakeFromSource");

	Params::ULegacyCameraShake_StartLegacyCameraShakeFromSource_Params Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.SourceComponent = SourceComponent;
	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = UserPlaySpaceRot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULegacyCameraShake>ShakeClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECameraShakePlaySpace   PlaySpace                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    UserPlaySpaceRot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShake::StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyCameraShake", "StartLegacyCameraShake");

	Params::ULegacyCameraShake_StartLegacyCameraShake_Params Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = UserPlaySpaceRot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.LegacyCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bImmediately                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULegacyCameraShake::ReceiveStopShake(bool bImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyCameraShake", "ReceiveStopShake");

	Params::ULegacyCameraShake_ReceiveStopShake_Params Parms{};

	Parms.bImmediately = bImmediately;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayCameras.LegacyCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULegacyCameraShake::ReceivePlayShake(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyCameraShake", "ReceivePlayShake");

	Params::ULegacyCameraShake_ReceivePlayShake_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULegacyCameraShake::ReceiveIsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyCameraShake", "ReceiveIsFinished");

	Params::ULegacyCameraShake_ReceiveIsFinished_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Alpha                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo            POV                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo            ModifiedPOV                                                      (Parm, OutParm, NativeAccessSpecifierPublic)

void ULegacyCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyCameraShake", "BlueprintUpdateCameraShake");

	Params::ULegacyCameraShake_BlueprintUpdateCameraShake_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Alpha = Alpha;
	Parms.POV = POV;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = Parms.ModifiedPOV;

}


// Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraShakeBase*            CameraShake                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULegacyCameraShake*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULegacyCameraShake* ULegacyCameraShakeFunctionLibrary::Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LegacyCameraShakeFunctionLibrary", "Conv_LegacyCameraShake");

	Params::ULegacyCameraShakeFunctionLibrary_Conv_LegacyCameraShake_Params Parms{};

	Parms.CameraShake = CameraShake;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopCameraAnimation(struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopCameraAnimation");

	Params::UCameraAnimationCameraModifier_StopCameraAnimation_Params Parms{};

	Parms.Handle = Handle;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimationsOf");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimationsOf_Params Parms{};

	Parms.Sequence = Sequence;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCameraAnimationCameraModifier::StopAllCameraAnimations(bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "StopAllCameraAnimations");

	Params::UCameraAnimationCameraModifier_StopAllCameraAnimations_Params Parms{};

	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnimationSequence*    Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraAnimationParams      Params                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FCameraAnimationHandle UCameraAnimationCameraModifier::PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "PlayCameraAnimation");

	Params::UCameraAnimationCameraModifier_PlayCameraAnimation_Params Parms{};

	Parms.Sequence = Sequence;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCameraAnimationHandle      Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCameraAnimationCameraModifier::IsCameraAnimationActive(struct FCameraAnimationHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "IsCameraAnimationActive");

	Params::UCameraAnimationCameraModifier_IsCameraAnimationActive_Params Parms{};

	Parms.Handle = Handle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromPlayerController");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromPlayerController_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ControllerId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32 ControllerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifierFromID");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifierFromID_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ControllerId = ControllerId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayerIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UCameraAnimationCameraModifier::GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32 PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraAnimationCameraModifier", "GetCameraAnimationCameraModifier");

	Params::UCameraAnimationCameraModifier_GetCameraAnimationCameraModifier_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerIndex = PlayerIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECameraAnimationPlaySpaceCameraAnimationPlaySpace                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECameraShakePlaySpace   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECameraShakePlaySpace UGameplayCamerasFunctionLibrary::Conv_CameraShakePlaySpace(enum class ECameraAnimationPlaySpace CameraAnimationPlaySpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasFunctionLibrary", "Conv_CameraShakePlaySpace");

	Params::UGameplayCamerasFunctionLibrary_Conv_CameraShakePlaySpace_Params Parms{};

	Parms.CameraAnimationPlaySpace = CameraAnimationPlaySpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ECameraShakePlaySpace   CameraShakePlaySpace                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECameraAnimationPlaySpaceReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECameraAnimationPlaySpace UGameplayCamerasFunctionLibrary::Conv_CameraAnimationPlaySpace(enum class ECameraShakePlaySpace CameraShakePlaySpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasFunctionLibrary", "Conv_CameraAnimationPlaySpace");

	Params::UGameplayCamerasFunctionLibrary_Conv_CameraAnimationPlaySpace_Params Parms{};

	Parms.CameraShakePlaySpace = CameraShakePlaySpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerCameraManager*        PlayerCameraManager                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationCameraModifier*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraAnimationCameraModifier* UGameplayCamerasFunctionLibrary::Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasFunctionLibrary", "Conv_CameraAnimationCameraModifier");

	Params::UGameplayCamerasFunctionLibrary_Conv_CameraAnimationCameraModifier_Params Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle      Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayCamerasSubsystem::StopCameraAnimation(class APlayerController* PlayerController, struct FCameraAnimationHandle& Handle, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopCameraAnimation");

	Params::UGameplayCamerasSubsystem_StopCameraAnimation_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Handle = Handle;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationSequence*    Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimationsOf");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimationsOf_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Sequence = Sequence;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bImmediate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayCamerasSubsystem::StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "StopAllCameraAnimations");

	Params::UGameplayCamerasSubsystem_StopAllCameraAnimations_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bImmediate = bImmediate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraAnimationSequence*    Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraAnimationParams      Params                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle      ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FCameraAnimationHandle UGameplayCamerasSubsystem::PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "PlayCameraAnimation");

	Params::UGameplayCamerasSubsystem_PlayCameraAnimation_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Sequence = Sequence;
	Parms.Params = Params;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FCameraAnimationHandle      Handle                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameplayCamerasSubsystem::IsCameraAnimationActive(class APlayerController* PlayerController, struct FCameraAnimationHandle& Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayCamerasSubsystem", "IsCameraAnimationActive");

	Params::UGameplayCamerasSubsystem_IsCameraAnimationActive_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Handle = Handle;

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
