#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// (None)

class UClass* UAnimationBudgetBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationBudgetBlueprintLibrary");

	return Clss;
}


// AnimationBudgetBlueprintLibrary AnimationBudgetAllocator.Default__AnimationBudgetBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationBudgetBlueprintLibrary* UAnimationBudgetBlueprintLibrary::GetDefaultObj()
{
	static class UAnimationBudgetBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationBudgetBlueprintLibrary*>(UAnimationBudgetBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAnimationBudgetAllocatorParametersInParameters                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters(class UObject* WorldContextObject, struct FAnimationBudgetAllocatorParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationBudgetBlueprintLibrary", "SetAnimationBudgetParameters");

	Params::UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InParameters = InParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationBudgetBlueprintLibrary", "EnableAnimationBudget");

	Params::UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* USkeletalMeshComponentBudgeted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkeletalMeshComponentBudgeted");

	return Clss;
}


// SkeletalMeshComponentBudgeted AnimationBudgetAllocator.Default__SkeletalMeshComponentBudgeted
// (Public, ClassDefaultObject, ArchetypeObject)

class USkeletalMeshComponentBudgeted* USkeletalMeshComponentBudgeted::GetDefaultObj()
{
	static class USkeletalMeshComponentBudgeted* Default = nullptr;

	if (!Default)
		Default = static_cast<USkeletalMeshComponentBudgeted*>(USkeletalMeshComponentBudgeted::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAutoRegisterWithBudgetAllocator                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalMeshComponentBudgeted", "SetAutoRegisterWithBudgetAllocator");

	Params::USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params Parms{};

	Parms.bInAutoRegisterWithBudgetAllocator = bInAutoRegisterWithBudgetAllocator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


