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


// Function ChaosCloth.ChaosClothingInteractor.SetWind
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Drag                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Lift                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AirDensity                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WindVelocity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetWind(const struct FVector2D& InDrag, const struct FVector2D& InLift, float InAirDensity, const struct FVector& InWindVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetWind");

	Params::UChaosClothingInteractor_SetWind_Params Parms{};

	Parms.Drag = InDrag;
	Parms.Lift = InLift;
	Parms.AirDensity = InAirDensity;
	Parms.WindVelocity = InWindVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     LinearVelocityScale                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AngularVelocityScale                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FictitiousAngularScale                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetVelocityScale(const struct FVector& InLinearVelocityScale, float InAngularVelocityScale, float InFictitiousAngularScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetVelocityScale");

	Params::UChaosClothingInteractor_SetVelocityScale_Params Parms{};

	Parms.LinearVelocityScale = InLinearVelocityScale;
	Parms.AngularVelocityScale = InAngularVelocityScale;
	Parms.FictitiousAngularScale = InFictitiousAngularScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetPressure
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Pressure                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetPressure(const struct FVector2D& InPressure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetPressure");

	Params::UChaosClothingInteractor_SetPressure_Params Parms{};

	Parms.Pressure = InPressure;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              EdgeStiffness                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BendingStiffness                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AreaStiffness                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetMaterialLinear(float InEdgeStiffness, float InBendingStiffness, float InAreaStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetMaterialLinear");

	Params::UChaosClothingInteractor_SetMaterialLinear_Params Parms{};

	Parms.EdgeStiffness = InEdgeStiffness;
	Parms.BendingStiffness = InBendingStiffness;
	Parms.AreaStiffness = InAreaStiffness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetMaterial
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   EdgeStiffness                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   BendingStiffness                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   AreaStiffness                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetMaterial(const struct FVector2D& InEdgeStiffness, const struct FVector2D& InBendingStiffness, const struct FVector2D& InAreaStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetMaterial");

	Params::UChaosClothingInteractor_SetMaterial_Params Parms{};

	Parms.EdgeStiffness = InEdgeStiffness;
	Parms.BendingStiffness = InBendingStiffness;
	Parms.AreaStiffness = InAreaStiffness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TetherStiffness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TetherScale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetLongRangeAttachmentLinear(float InTetherStiffness, float InTetherScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetLongRangeAttachmentLinear");

	Params::UChaosClothingInteractor_SetLongRangeAttachmentLinear_Params Parms{};

	Parms.TetherStiffness = InTetherStiffness;
	Parms.TetherScale = InTetherScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   TetherStiffness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   TetherScale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetLongRangeAttachment(const struct FVector2D& InTetherStiffness, const struct FVector2D& InTetherScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetLongRangeAttachment");

	Params::UChaosClothingInteractor_SetLongRangeAttachment_Params Parms{};

	Parms.TetherStiffness = InTetherStiffness;
	Parms.TetherScale = InTetherScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetGravity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              GravityScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGravityOverridden                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     GravityOverride                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetGravity(float InGravityScale, bool InbIsGravityOverridden, const struct FVector& InGravityOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetGravity");

	Params::UChaosClothingInteractor_SetGravity_Params Parms{};

	Parms.GravityScale = InGravityScale;
	Parms.bIsGravityOverridden = InbIsGravityOverridden;
	Parms.GravityOverride = InGravityOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetDamping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DampingCoefficient                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LocalDampingCoefficient                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetDamping(float InDampingCoefficient, float InLocalDampingCoefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetDamping");

	Params::UChaosClothingInteractor_SetDamping_Params Parms{};

	Parms.DampingCoefficient = InDampingCoefficient;
	Parms.LocalDampingCoefficient = InLocalDampingCoefficient;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetCollision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              CollisionThickness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FrictionCoefficient                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseCCD                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SelfCollisionThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetCollision(float InCollisionThickness, float InFrictionCoefficient, bool InbUseCCD, float InSelfCollisionThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetCollision");

	Params::UChaosClothingInteractor_SetCollision_Params Parms{};

	Parms.CollisionThickness = InCollisionThickness;
	Parms.FrictionCoefficient = InFrictionCoefficient;
	Parms.bUseCCD = InbUseCCD;
	Parms.SelfCollisionThickness = InSelfCollisionThickness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetBackstop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetBackstop(bool InbEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetBackstop");

	Params::UChaosClothingInteractor_SetBackstop_Params Parms{};

	Parms.bEnabled = InbEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AnimDriveStiffness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAnimDriveLinear(float InAnimDriveStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAnimDriveLinear");

	Params::UChaosClothingInteractor_SetAnimDriveLinear_Params Parms{};

	Parms.AnimDriveStiffness = InAnimDriveStiffness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   AnimDriveStiffness                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   AnimDriveDamping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAnimDrive(const struct FVector2D& InAnimDriveStiffness, const struct FVector2D& InAnimDriveDamping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAnimDrive");

	Params::UChaosClothingInteractor_SetAnimDrive_Params Parms{};

	Parms.AnimDriveStiffness = InAnimDriveStiffness;
	Parms.AnimDriveDamping = InAnimDriveDamping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DragCoefficient                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LiftCoefficient                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WindVelocity                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::SetAerodynamics(float InDragCoefficient, float InLiftCoefficient, const struct FVector& InWindVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "SetAerodynamics");

	Params::UChaosClothingInteractor_SetAerodynamics_Params Parms{};

	Parms.DragCoefficient = InDragCoefficient;
	Parms.LiftCoefficient = InLiftCoefficient;
	Parms.WindVelocity = InWindVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTeleport                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosClothingInteractor::ResetAndTeleport(bool InbReset, bool InbTeleport)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChaosClothingInteractor", "ResetAndTeleport");

	Params::UChaosClothingInteractor_ResetAndTeleport_Params Parms{};

	Parms.bReset = InbReset;
	Parms.bTeleport = InbTeleport;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
