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


// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   UV                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UVIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::SetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, const struct FVector2D& UV, int32 UVIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetVertexInstanceUV");

	Params::UStaticMeshDescription_SetVertexInstanceUV_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.UV = UV;
	Parms.UVIndex = UVIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPolygonGroupID             PolygonGroupID                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SlotName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& PolygonGroupID, class FName& SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "SetPolygonGroupMaterialSlotName");

	Params::UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params Parms{};

	Parms.PolygonGroupID = PolygonGroupID;
	Parms.SlotName = SlotName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVertexInstanceID           VertexInstanceID                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UVIndex                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UStaticMeshDescription::GetVertexInstanceUV(const struct FVertexInstanceID& VertexInstanceID, int32 UVIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "GetVertexInstanceUV");

	Params::UStaticMeshDescription_GetVertexInstanceUV_Params Parms{};

	Parms.VertexInstanceID = VertexInstanceID;
	Parms.UVIndex = UVIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Center                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HalfExtents                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonGroupID             PolygonGroup                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  PolygonID_PlusX                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  PolygonID_MinusX                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  PolygonID_PlusY                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  PolygonID_MinusY                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  PolygonID_PlusZ                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPolygonID                  PolygonID_MinusZ                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStaticMeshDescription::CreateCube(const struct FVector& Center, const struct FVector& HalfExtents, const struct FPolygonGroupID& PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StaticMeshDescription", "CreateCube");

	Params::UStaticMeshDescription_CreateCube_Params Parms{};

	Parms.Center = Center;
	Parms.HalfExtents = HalfExtents;
	Parms.PolygonGroup = PolygonGroup;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PolygonID_PlusX != nullptr)
		*PolygonID_PlusX = Parms.PolygonID_PlusX;

	if (PolygonID_MinusX != nullptr)
		*PolygonID_MinusX = Parms.PolygonID_MinusX;

	if (PolygonID_PlusY != nullptr)
		*PolygonID_PlusY = Parms.PolygonID_PlusY;

	if (PolygonID_MinusY != nullptr)
		*PolygonID_MinusY = Parms.PolygonID_MinusY;

	if (PolygonID_PlusZ != nullptr)
		*PolygonID_PlusZ = Parms.PolygonID_PlusZ;

	if (PolygonID_MinusZ != nullptr)
		*PolygonID_MinusZ = Parms.PolygonID_MinusZ;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
