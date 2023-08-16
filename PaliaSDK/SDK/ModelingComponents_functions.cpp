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


// Function ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDynamicMesh*                NewMesh                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOctreeDynamicMeshComponent::SetDynamicMesh(class UDynamicMesh* InNewMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OctreeDynamicMeshComponent", "SetDynamicMesh");

	Params::UOctreeDynamicMeshComponent_SetDynamicMesh_Params Parms{};

	Parms.NewMesh = InNewMesh;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelingComponents.PreviewGeometry.SetPointSetVisibility
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetPointSetVisibility(const class FString& InPointSetIdentifier, bool InbVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetPointSetVisibility");

	Params::UPreviewGeometry_SetPointSetVisibility_Params Parms{};

	Parms.PointSetIdentifier = InPointSetIdentifier;
	Parms.bVisible = InbVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetPointSetMaterial
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetPointSetMaterial(const class FString& InPointSetIdentifier, class UMaterialInterface* InNewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetPointSetMaterial");

	Params::UPreviewGeometry_SetPointSetMaterial_Params Parms{};

	Parms.PointSetIdentifier = InPointSetIdentifier;
	Parms.NewMaterial = InNewMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bVisible                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetLineSetVisibility(const class FString& InLineSetIdentifier, bool InbVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetLineSetVisibility");

	Params::UPreviewGeometry_SetLineSetVisibility_Params Parms{};

	Parms.LineSetIdentifier = InLineSetIdentifier;
	Parms.bVisible = InbVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          NewMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::SetLineSetMaterial(const class FString& InLineSetIdentifier, class UMaterialInterface* InNewMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetLineSetMaterial");

	Params::UPreviewGeometry_SetLineSetMaterial_Params Parms{};

	Parms.LineSetIdentifier = InLineSetIdentifier;
	Parms.NewMaterial = InNewMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
// (Final, Native, Public)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::SetAllPointSetsMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetAllPointSetsMaterial");

	Params::UPreviewGeometry_SetAllPointSetsMaterial_Params Parms{};

	Parms.Material = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
// (Final, Native, Public)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::SetAllLineSetsMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "SetAllLineSetsMaterial");

	Params::UPreviewGeometry_SetAllLineSetsMaterial_Params Parms{};

	Parms.Material = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelingComponents.PreviewGeometry.RemovePointSet
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::RemovePointSet(const class FString& InPointSetIdentifier, bool InbDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemovePointSet");

	Params::UPreviewGeometry_RemovePointSet_Params Parms{};

	Parms.PointSetIdentifier = InPointSetIdentifier;
	Parms.bDestroy = InbDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.RemoveLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPreviewGeometry::RemoveLineSet(const class FString& InLineSetIdentifier, bool InbDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemoveLineSet");

	Params::UPreviewGeometry_RemoveLineSet_Params Parms{};

	Parms.LineSetIdentifier = InLineSetIdentifier;
	Parms.bDestroy = InbDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.RemoveAllPointSets
// (Final, Native, Public)
// Parameters:
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::RemoveAllPointSets(bool InbDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemoveAllPointSets");

	Params::UPreviewGeometry_RemoveAllPointSets_Params Parms{};

	Parms.bDestroy = InbDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
// (Final, Native, Public)
// Parameters:
// bool                               bDestroy                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::RemoveAllLineSets(bool InbDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "RemoveAllLineSets");

	Params::UPreviewGeometry_RemoveAllLineSets_Params Parms{};

	Parms.bDestroy = InbDestroy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelingComponents.PreviewGeometry.GetActor
// (Final, Native, Public, Const)
// Parameters:
// class APreviewGeometryActor*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APreviewGeometryActor* UPreviewGeometry::GetActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "GetActor");

	Params::UPreviewGeometry_GetActor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.FindPointSet
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointSetComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointSetComponent* UPreviewGeometry::FindPointSet(const class FString& InPointSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "FindPointSet");

	Params::UPreviewGeometry_FindPointSet_Params Parms{};

	Parms.PointSetIdentifier = InPointSetIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.FindLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULineSetComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULineSetComponent* UPreviewGeometry::FindLineSet(const class FString& InLineSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "FindLineSet");

	Params::UPreviewGeometry_FindLineSet_Params Parms{};

	Parms.LineSetIdentifier = InLineSetIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.Disconnect
// (Final, Native, Public)
// Parameters:

void UPreviewGeometry::Disconnect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "Disconnect");

	Params::UPreviewGeometry_Disconnect_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelingComponents.PreviewGeometry.CreateInWorld
// (Final, Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class UWorld*                      World                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  WithTransform                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPreviewGeometry::CreateInWorld(class UWorld* InWorld, struct FTransform& InWithTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "CreateInWorld");

	Params::UPreviewGeometry_CreateInWorld_Params Parms{};

	Parms.World = InWorld;
	Parms.WithTransform = InWithTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelingComponents.PreviewGeometry.AddPointSet
// (Final, Native, Public)
// Parameters:
// class FString                      PointSetIdentifier                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPointSetComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPointSetComponent* UPreviewGeometry::AddPointSet(const class FString& InPointSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "AddPointSet");

	Params::UPreviewGeometry_AddPointSet_Params Parms{};

	Parms.PointSetIdentifier = InPointSetIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PreviewGeometry.AddLineSet
// (Final, Native, Public)
// Parameters:
// class FString                      LineSetIdentifier                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULineSetComponent*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULineSetComponent* UPreviewGeometry::AddLineSet(const class FString& InLineSetIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewGeometry", "AddLineSet");

	Params::UPreviewGeometry_AddLineSet_Params Parms{};

	Parms.LineSetIdentifier = InLineSetIdentifier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateTextureObjectParams  CreateTexParams                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FCreateTextureObjectResult  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FCreateTextureObjectResult UModelingObjectsCreationAPI::CreateTextureObject(struct FCreateTextureObjectParams& InCreateTexParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModelingObjectsCreationAPI", "CreateTextureObject");

	Params::UModelingObjectsCreationAPI_CreateTextureObject_Params Parms{};

	Parms.CreateTexParams = InCreateTexParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FCreateMeshObjectParams     CreateMeshParams                                                 (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FCreateMeshObjectResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FCreateMeshObjectResult UModelingObjectsCreationAPI::CreateMeshObject(struct FCreateMeshObjectParams& InCreateMeshParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModelingObjectsCreationAPI", "CreateMeshObject");

	Params::UModelingObjectsCreationAPI_CreateMeshObject_Params Parms{};

	Parms.CreateMeshParams = InCreateMeshParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCreateMeshObjectTypeProperties::ShouldShowPropertySet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateMeshObjectTypeProperties", "ShouldShowPropertySet");

	Params::UCreateMeshObjectTypeProperties_ShouldShowPropertySet_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FString> UCreateMeshObjectTypeProperties::GetOutputTypeNamesFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateMeshObjectTypeProperties", "GetOutputTypeNamesFunc");

	Params::UCreateMeshObjectTypeProperties_GetOutputTypeNamesFunc_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
// (Final, Native, Public, Const)
// Parameters:
// enum class ECreateObjectTypeHint   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreateObjectTypeHint UCreateMeshObjectTypeProperties::GetCurrentCreateMeshType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreateMeshObjectTypeProperties", "GetCurrentCreateMeshType");

	Params::UCreateMeshObjectTypeProperties_GetCurrentCreateMeshType_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UPolygroupLayersProperties::GetGroupLayersFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PolygroupLayersProperties", "GetGroupLayersFunc");

	Params::UPolygroupLayersProperties_GetGroupLayersFunc_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
// (Final, Native, Public)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UWeightMapSetProperties::GetWeightMapsFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeightMapSetProperties", "GetWeightMapsFunc");

	Params::UWeightMapSetProperties_GetWeightMapsFunc_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelingComponents.PolygonSelectionMechanicProperties.SelectAll
// (Final, Native, Public)
// Parameters:

void UPolygonSelectionMechanicProperties::SelectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PolygonSelectionMechanicProperties", "SelectAll");

	Params::UPolygonSelectionMechanicProperties_SelectAll_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelingComponents.PolygonSelectionMechanicProperties.InvertSelection
// (Final, Native, Public)
// Parameters:

void UPolygonSelectionMechanicProperties::InvertSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PolygonSelectionMechanicProperties", "InvertSelection");

	Params::UPolygonSelectionMechanicProperties_InvertSelection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
