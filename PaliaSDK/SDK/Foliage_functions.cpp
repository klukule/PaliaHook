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


// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CenterPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFoliageStatistics::FoliageOverlappingSphereCount(class UObject* InWorldContextObject, class UStaticMesh* InStaticMesh, const struct FVector& InCenterPosition, float InRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingSphereCount");

	Params::UFoliageStatistics_FoliageOverlappingSphereCount_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.StaticMesh = InStaticMesh;
	Parms.CenterPosition = InCenterPosition;
	Parms.Radius = InRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          OutTransforms                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFoliageStatistics::FoliageOverlappingBoxTransforms(class UObject* InWorldContextObject, class UStaticMesh* InStaticMesh, const struct FBox& InBox, TArray<struct FTransform>* InOutTransforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingBoxTransforms");

	Params::UFoliageStatistics_FoliageOverlappingBoxTransforms_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.StaticMesh = InStaticMesh;
	Parms.Box = InBox;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutTransforms != nullptr)
		*InOutTransforms = Parms.OutTransforms;

}


// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMesh*                 StaticMesh                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        Box                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFoliageStatistics::FoliageOverlappingBoxCount(class UObject* InWorldContextObject, class UStaticMesh* InStaticMesh, const struct FBox& InBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FoliageStatistics", "FoliageOverlappingBoxCount");

	Params::UFoliageStatistics_FoliageOverlappingBoxCount_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.StaticMesh = InStaticMesh;
	Parms.Box = InBox;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Other                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OverlapInfo                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* InOverlappedComp, class AActor* InOther, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool InbFromSweep, struct FHitResult& InOverlapInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InteractiveFoliageActor", "CapsuleTouched");

	Params::AInteractiveFoliageActor_CapsuleTouched_Params Parms{};

	Parms.OverlappedComp = InOverlappedComp;
	Parms.Other = InOther;
	Parms.OtherComp = InOtherComp;
	Parms.OtherBodyIndex = InOtherBodyIndex;
	Parms.bFromSweep = InbFromSweep;
	Parms.OverlapInfo = InOverlapInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumSteps                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralFoliageSpawner::Simulate(int32 InNumSteps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralFoliageSpawner", "Simulate");

	Params::UProceduralFoliageSpawner_Simulate_Params Parms{};

	Parms.NumSteps = InNumSteps;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
