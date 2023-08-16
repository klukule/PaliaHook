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


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumSubsteps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::SetNumSubsteps(int32 InNumSubsteps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetNumSubsteps");

	Params::UClothingSimulationInteractor_SetNumSubsteps_Params Parms{};

	Parms.NumSubsteps = InNumSubsteps;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumIterations                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::SetNumIterations(int32 InNumIterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetNumIterations");

	Params::UClothingSimulationInteractor_SetNumIterations_Params Parms{};

	Parms.NumIterations = InNumIterations;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              MaxNumIterations                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::SetMaxNumIterations(int32 InMaxNumIterations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetMaxNumIterations");

	Params::UClothingSimulationInteractor_SetMaxNumIterations_Params Parms{};

	Parms.MaxNumIterations = InMaxNumIterations;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InStiffness                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InInStiffness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "SetAnimDriveSpringStiffness");

	Params::UClothingSimulationInteractor_SetAnimDriveSpringStiffness_Params Parms{};

	Parms.InStiffness = InInStiffness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::PhysicsAssetUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "PhysicsAssetUpdated");

	Params::UClothingSimulationInteractor_PhysicsAssetUpdated_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UClothingSimulationInteractor::GetSimulationTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetSimulationTime");

	Params::UClothingSimulationInteractor_GetSimulationTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UClothingSimulationInteractor::GetNumSubsteps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumSubsteps");

	Params::UClothingSimulationInteractor_GetNumSubsteps_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UClothingSimulationInteractor::GetNumKinematicParticles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumKinematicParticles");

	Params::UClothingSimulationInteractor_GetNumKinematicParticles_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UClothingSimulationInteractor::GetNumIterations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumIterations");

	Params::UClothingSimulationInteractor_GetNumIterations_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UClothingSimulationInteractor::GetNumDynamicParticles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumDynamicParticles");

	Params::UClothingSimulationInteractor_GetNumDynamicParticles_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UClothingSimulationInteractor::GetNumCloths()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetNumCloths");

	Params::UClothingSimulationInteractor_GetNumCloths_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ClothingAssetName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClothingInteractor*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClothingInteractor* UClothingSimulationInteractor::GetClothingInteractor(const class FString& InClothingAssetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "GetClothingInteractor");

	Params::UClothingSimulationInteractor_GetClothingInteractor_Params Parms{};

	Parms.ClothingAssetName = InClothingAssetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InVector                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UClothingSimulationInteractor::EnableGravityOverride(struct FVector& InInVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "EnableGravityOverride");

	Params::UClothingSimulationInteractor_EnableGravityOverride_Params Parms{};

	Parms.InVector = InInVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::DisableGravityOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "DisableGravityOverride");

	Params::UClothingSimulationInteractor_DisableGravityOverride_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
// (Native, Public, BlueprintCallable)
// Parameters:

void UClothingSimulationInteractor::ClothConfigUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ClothingSimulationInteractor", "ClothConfigUpdated");

	Params::UClothingSimulationInteractor_ClothConfigUpdated_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
