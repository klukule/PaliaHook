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


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniAssetBlueprintComponent::SetToggleValueAt(const class FString& Name, bool Value, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "SetToggleValueAt");

	Params::UHoudiniAssetBlueprintComponent_SetToggleValueAt_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniAssetBlueprintComponent::SetFloatParameter(const class FString& Name, float Value, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "SetFloatParameter");

	Params::UHoudiniAssetBlueprintComponent_SetFloatParameter_Params Parms{};

	Parms.Name = Name;
	Parms.Value = Value;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniAssetBlueprintComponent::HasParameter(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniAssetBlueprintComponent", "HasParameter");

	Params::UHoudiniAssetBlueprintComponent_HasParameter_Params Parms{};

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InVertexIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   InPosition                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetVertexPosition(uint32 InVertexIndex, struct FVector3f& InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetVertexPosition");

	Params::UHoudiniStaticMesh_SetVertexPosition_Params Parms{};

	Parms.InVertexIndex = InVertexIndex;
	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   InVTangent                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InVTangent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexVTangent");

	Params::UHoudiniStaticMesh_SetTriangleVertexVTangent_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InVTangent = InVTangent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InUVLayer                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   InUV                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, struct FVector2D& InUV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexUV");

	Params::UHoudiniStaticMesh_SetTriangleVertexUV_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InUVLayer = InUVLayer;
	Parms.InUV = InUV;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   InUTangent                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InUTangent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexUTangent");

	Params::UHoudiniStaticMesh_SetTriangleVertexUTangent_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InUTangent = InUTangent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector3f                   InNormal                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FVector3f& InNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexNormal");

	Params::UHoudiniStaticMesh_SetTriangleVertexNormal_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InNormal = InNormal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntVector                  InTriangleVertexIndices                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexIndices(uint32 InTriangleIndex, struct FIntVector& InTriangleVertexIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexIndices");

	Params::UHoudiniStaticMesh_SetTriangleVertexIndices_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndices = InTriangleVertexIndices;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTriangleVertexIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      InColor                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, struct FColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleVertexColor");

	Params::UHoudiniStaticMesh_SetTriangleVertexColor_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InTriangleVertexIndex = InTriangleVertexIndex;
	Parms.InColor = InColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
// (Final, Native, Public)
// Parameters:
// uint32                             InTriangleIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMaterialID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetTriangleMaterialID");

	Params::UHoudiniStaticMesh_SetTriangleMaterialID_Params Parms{};

	Parms.InTriangleIndex = InTriangleIndex;
	Parms.InMaterialID = InMaterialID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
// (Final, Native, Public, HasOutParams)
// Parameters:
// uint32                             InMaterialIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FStaticMaterial             InStaticMaterial                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetStaticMaterial(uint32 InMaterialIndex, struct FStaticMaterial& InStaticMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetStaticMaterial");

	Params::UHoudiniStaticMesh_SetStaticMaterial_Params Parms{};

	Parms.InMaterialIndex = InMaterialIndex;
	Parms.InStaticMaterial = InStaticMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
// (Final, Native, Public)
// Parameters:
// uint32                             InNumUVLayers                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetNumUVLayers(uint32 InNumUVLayers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetNumUVLayers");

	Params::UHoudiniStaticMesh_SetNumUVLayers_Params Parms{};

	Parms.InNumUVLayers = InNumUVLayers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
// (Final, Native, Public)
// Parameters:
// uint32                             InNumStaticMaterials                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetNumStaticMaterials(uint32 InNumStaticMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetNumStaticMaterials");

	Params::UHoudiniStaticMesh_SetNumStaticMaterials_Params Parms{};

	Parms.InNumStaticMaterials = InNumStaticMaterials;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
// (Final, Native, Public)
// Parameters:
// bool                               bInHasTangents                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetHasTangents(bool bInHasTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasTangents");

	Params::UHoudiniStaticMesh_SetHasTangents_Params Parms{};

	Parms.bInHasTangents = bInHasTangents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
// (Final, Native, Public)
// Parameters:
// bool                               bInHasPerFaceMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetHasPerFaceMaterials(bool bInHasPerFaceMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasPerFaceMaterials");

	Params::UHoudiniStaticMesh_SetHasPerFaceMaterials_Params Parms{};

	Parms.bInHasPerFaceMaterials = bInHasPerFaceMaterials;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
// (Final, Native, Public)
// Parameters:
// bool                               bInHasNormals                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetHasNormals(bool bInHasNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasNormals");

	Params::UHoudiniStaticMesh_SetHasNormals_Params Parms{};

	Parms.bInHasNormals = bInHasNormals;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
// (Final, Native, Public)
// Parameters:
// bool                               bInHasColors                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::SetHasColors(bool bInHasColors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "SetHasColors");

	Params::UHoudiniStaticMesh_SetHasColors_Params Parms{};

	Parms.bInHasColors = bInHasColors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
// (Final, Native, Public)
// Parameters:

void UHoudiniStaticMesh::Optimize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "Optimize");

	Params::UHoudiniStaticMesh_Optimize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
// (Final, Native, Public, Const)
// Parameters:
// bool                               bInSkipVertexIndicesCheck                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::IsValid(bool bInSkipVertexIndicesCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "IsValid");

	Params::UHoudiniStaticMesh_IsValid_Params Parms{};

	Parms.bInSkipVertexIndicesCheck = bInSkipVertexIndicesCheck;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
// (Final, Native, Public)
// Parameters:
// uint32                             InNumVertices                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InNumTriangles                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InNumUVLayers                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint32                             InInitialNumStaticMaterials                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasNormals                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasTangents                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasColors                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInHasPerFaceMaterials                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "Initialize");

	Params::UHoudiniStaticMesh_Initialize_Params Parms{};

	Parms.InNumVertices = InNumVertices;
	Parms.InNumTriangles = InNumTriangles;
	Parms.InNumUVLayers = InNumUVLayers;
	Parms.InInitialNumStaticMaterials = InInitialNumStaticMaterials;
	Parms.bInHasNormals = bInHasNormals;
	Parms.bInHasTangents = bInHasTangents;
	Parms.bInHasColors = bInHasColors;
	Parms.bInHasPerFaceMaterials = bInHasPerFaceMaterials;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::HasTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasTangents");

	Params::UHoudiniStaticMesh_HasTangents_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::HasPerFaceMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasPerFaceMaterials");

	Params::UHoudiniStaticMesh_HasPerFaceMaterials_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::HasNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasNormals");

	Params::UHoudiniStaticMesh_HasNormals_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMesh::HasColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "HasColors");

	Params::UHoudiniStaticMesh_HasColors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexPositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexPositions");

	Params::UHoudiniStaticMesh_GetVertexPositions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceVTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceVTangents");

	Params::UHoudiniStaticMesh_GetVertexInstanceVTangents_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector2D>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector2D> UHoudiniStaticMesh::GetVertexInstanceUVs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceUVs");

	Params::UHoudiniStaticMesh_GetVertexInstanceUVs_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceUTangents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceUTangents");

	Params::UHoudiniStaticMesh_GetVertexInstanceUTangents_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FVector3f>           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector3f> UHoudiniStaticMesh::GetVertexInstanceNormals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceNormals");

	Params::UHoudiniStaticMesh_GetVertexInstanceNormals_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FColor>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FColor> UHoudiniStaticMesh::GetVertexInstanceColors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetVertexInstanceColors");

	Params::UHoudiniStaticMesh_GetVertexInstanceColors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FIntVector>          ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FIntVector> UHoudiniStaticMesh::GetTriangleIndices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetTriangleIndices");

	Params::UHoudiniStaticMesh_GetTriangleIndices_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
// (Final, Native, Public, Const)
// Parameters:
// TArray<struct FStaticMaterial>     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FStaticMaterial> UHoudiniStaticMesh::GetStaticMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetStaticMaterials");

	Params::UHoudiniStaticMesh_GetStaticMaterials_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumVertices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumVertices");

	Params::UHoudiniStaticMesh_GetNumVertices_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumVertexInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumVertexInstances");

	Params::UHoudiniStaticMesh_GetNumVertexInstances_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumUVLayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumUVLayers");

	Params::UHoudiniStaticMesh_GetNumUVLayers_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumTriangles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumTriangles");

	Params::UHoudiniStaticMesh_GetNumTriangles_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
// (Final, Native, Public, Const)
// Parameters:
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::GetNumStaticMaterials()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetNumStaticMaterials");

	Params::UHoudiniStaticMesh_GetNumStaticMaterials_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
// (Final, Native, Public, Const)
// Parameters:
// class FName                        InMaterialSlotName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UHoudiniStaticMesh::GetMaterialIndex(class FName InMaterialSlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterialIndex");

	Params::UHoudiniStaticMesh_GetMaterialIndex_Params Parms{};

	Parms.InMaterialSlotName = InMaterialSlotName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
// (Final, Native, Public, Const)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<int32> UHoudiniStaticMesh::GetMaterialIDsPerTriangle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterialIDsPerTriangle");

	Params::UHoudiniStaticMesh_GetMaterialIDsPerTriangle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
// (Final, Native, Public)
// Parameters:
// int32                              InMaterialIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UHoudiniStaticMesh::GetMaterial(int32 InMaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "GetMaterial");

	Params::UHoudiniStaticMesh_GetMaterial_Params Parms{};

	Parms.InMaterialIndex = InMaterialIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
// (Final, Native, Public)
// Parameters:
// bool                               bInComputeWeightedNormals                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::CalculateTangents(bool bInComputeWeightedNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalculateTangents");

	Params::UHoudiniStaticMesh_CalculateTangents_Params Parms{};

	Parms.bInComputeWeightedNormals = bInComputeWeightedNormals;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
// (Final, Native, Public)
// Parameters:
// bool                               bInComputeWeightedNormals                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMesh::CalculateNormals(bool bInComputeWeightedNormals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalculateNormals");

	Params::UHoudiniStaticMesh_CalculateNormals_Params Parms{};

	Parms.bInComputeWeightedNormals = bInComputeWeightedNormals;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UHoudiniStaticMesh::CalcBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "CalcBounds");

	Params::UHoudiniStaticMesh_CalcBounds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FStaticMaterial             InStaticMaterial                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// uint32                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint32 UHoudiniStaticMesh::AddStaticMaterial(struct FStaticMaterial& InStaticMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMesh", "AddStaticMaterial");

	Params::UHoudiniStaticMesh_AddStaticMaterial_Params Parms{};

	Parms.InStaticMaterial = InStaticMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
// (Final, Native, Public)
// Parameters:
// class UHoudiniStaticMesh*          InMesh                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMeshComponent::SetMesh(class UHoudiniStaticMesh* InMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "SetMesh");

	Params::UHoudiniStaticMeshComponent_SetMesh_Params Parms{};

	Parms.InMesh = InMesh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
// (Final, Native, Public)
// Parameters:
// bool                               bInHoudiniIconVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHoudiniStaticMeshComponent::SetHoudiniIconVisible(bool bInHoudiniIconVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "SetHoudiniIconVisible");

	Params::UHoudiniStaticMeshComponent_SetHoudiniIconVisible_Params Parms{};

	Parms.bInHoudiniIconVisible = bInHoudiniIconVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
// (Final, Native, Public)
// Parameters:

void UHoudiniStaticMeshComponent::NotifyMeshUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "NotifyMeshUpdated");

	Params::UHoudiniStaticMeshComponent_NotifyMeshUpdated_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UHoudiniStaticMeshComponent::IsHoudiniIconVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "IsHoudiniIconVisible");

	Params::UHoudiniStaticMeshComponent_IsHoudiniIconVisible_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
// (Final, Native, Public)
// Parameters:
// class UHoudiniStaticMesh*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHoudiniStaticMesh* UHoudiniStaticMeshComponent::GetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HoudiniStaticMeshComponent", "GetMesh");

	Params::UHoudiniStaticMeshComponent_GetMesh_Params Parms{};


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
