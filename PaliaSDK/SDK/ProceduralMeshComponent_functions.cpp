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


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PlanePosition                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     PlaneNormal                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateOtherHalf                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralMeshComponent*    OutOtherHalfProcMesh                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EProcMeshSliceCapOption CapOption                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          CapMaterial                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InInProcMesh, const struct FVector& InPlanePosition, const struct FVector& InPlaneNormal, bool InbCreateOtherHalf, class UProceduralMeshComponent** InOutOtherHalfProcMesh, enum class EProcMeshSliceCapOption InCapOption, class UMaterialInterface* InCapMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "SliceProceduralMesh");

	Params::UKismetProceduralMeshLibrary_SliceProceduralMesh_Params Parms{};

	Parms.InProcMesh = InInProcMesh;
	Parms.PlanePosition = InPlanePosition;
	Parms.PlaneNormal = InPlaneNormal;
	Parms.bCreateOtherHalf = InbCreateOtherHalf;
	Parms.CapOption = InCapOption;
	Parms.CapMaterial = InCapMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutOtherHalfProcMesh != nullptr)
		*InOutOtherHalfProcMesh = Parms.OutOtherHalfProcMesh;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UStaticMesh*                 InMesh                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LODIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InInMesh, int32 InLODIndex, int32 InSectionIndex, TArray<struct FVector>* InVertices, TArray<int32>* InTriangles, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, TArray<struct FProcMeshTangent>* InTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromStaticMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params Parms{};

	Parms.InMesh = InInMesh;
	Parms.LODIndex = InLODIndex;
	Parms.SectionIndex = InSectionIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InVertices != nullptr)
		*InVertices = Parms.Vertices;

	if (InTriangles != nullptr)
		*InTriangles = Parms.Triangles;

	if (InNormals != nullptr)
		*InNormals = Parms.Normals;

	if (InUVs != nullptr)
		*InUVs = Parms.UVs;

	if (InTangents != nullptr)
		*InTangents = Parms.Tangents;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UProceduralMeshComponent*    InProcMesh                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InInProcMesh, int32 InSectionIndex, TArray<struct FVector>* InVertices, TArray<int32>* InTriangles, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, TArray<struct FProcMeshTangent>* InTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GetSectionFromProceduralMesh");

	Params::UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params Parms{};

	Parms.InProcMesh = InInProcMesh;
	Parms.SectionIndex = InSectionIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InVertices != nullptr)
		*InVertices = Parms.Vertices;

	if (InTriangles != nullptr)
		*InTriangles = Parms.Triangles;

	if (InNormals != nullptr)
		*InNormals = Parms.Normals;

	if (InUVs != nullptr)
		*InUVs = Parms.UVs;

	if (InTangents != nullptr)
		*InTangents = Parms.Tangents;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     BoxRadius                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& InBoxRadius, TArray<struct FVector>* InVertices, TArray<int32>* InTriangles, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, TArray<struct FProcMeshTangent>* InTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "GenerateBoxMesh");

	Params::UKismetProceduralMeshLibrary_GenerateBoxMesh_Params Parms{};

	Parms.BoxRadius = InBoxRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InVertices != nullptr)
		*InVertices = Parms.Vertices;

	if (InTriangles != nullptr)
		*InTriangles = Parms.Triangles;

	if (InNormals != nullptr)
		*InNormals = Parms.Normals;

	if (InUVs != nullptr)
		*InUVs = Parms.UVs;

	if (InTangents != nullptr)
		*InTangents = Parms.Tangents;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumY                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              GridSpacing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CreateGridMeshWelded(int32 InNumX, int32 InNumY, TArray<int32>* InTriangles, TArray<struct FVector>* InVertices, TArray<struct FVector2D>* InUVs, float InGridSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshWelded");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params Parms{};

	Parms.NumX = InNumX;
	Parms.NumY = InNumY;
	Parms.GridSpacing = InGridSpacing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InTriangles != nullptr)
		*InTriangles = Parms.Triangles;

	if (InVertices != nullptr)
		*InVertices = Parms.Vertices;

	if (InUVs != nullptr)
		*InUVs = Parms.UVs;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumY                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWinding                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int32 InNumX, int32 InNumY, bool InbWinding, TArray<int32>* InTriangles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshTriangles");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params Parms{};

	Parms.NumX = InNumX;
	Parms.NumY = InNumY;
	Parms.bWinding = InbWinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InTriangles != nullptr)
		*InTriangles = Parms.Triangles;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              NumX                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumY                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV1s                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// float                              GridSpacing                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CreateGridMeshSplit(int32 InNumX, int32 InNumY, TArray<int32>* InTriangles, TArray<struct FVector>* InVertices, TArray<struct FVector2D>* InUVs, TArray<struct FVector2D>* InUV1s, float InGridSpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CreateGridMeshSplit");

	Params::UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params Parms{};

	Parms.NumX = InNumX;
	Parms.NumY = InNumY;
	Parms.GridSpacing = InGridSpacing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InTriangles != nullptr)
		*InTriangles = Parms.Triangles;

	if (InVertices != nullptr)
		*InVertices = Parms.Vertices;

	if (InUVs != nullptr)
		*InUVs = Parms.UVs;

	if (InUV1s != nullptr)
		*InUV1s = Parms.UV1s;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UStaticMeshComponent*        StaticMeshComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LODIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UProceduralMeshComponent*    ProcMeshComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateCollision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* InStaticMeshComponent, int32 InLODIndex, class UProceduralMeshComponent* InProcMeshComponent, bool InbCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CopyProceduralMeshFromStaticMeshComponent");

	Params::UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params Parms{};

	Parms.StaticMeshComponent = InStaticMeshComponent;
	Parms.LODIndex = InLODIndex;
	Parms.ProcMeshComponent = InProcMeshComponent;
	Parms.bCreateCollision = InbCreateCollision;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Triangles                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Vert0                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Vert1                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Vert2                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Vert3                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(TArray<int32>& InTriangles, int32 InVert0, int32 InVert1, int32 InVert2, int32 InVert3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "ConvertQuadToTriangles");

	Params::UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params Parms{};

	Parms.Triangles = InTriangles;
	Parms.Vert0 = InVert0;
	Parms.Vert1 = InVert1;
	Parms.Vert2 = InVert2;
	Parms.Vert3 = InVert3;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UVs                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector>& InVertices, TArray<int32>& InTriangles, TArray<struct FVector2D>& InUVs, TArray<struct FVector>* InNormals, TArray<struct FProcMeshTangent>* InTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetProceduralMeshLibrary", "CalculateTangentsForMesh");

	Params::UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params Parms{};

	Parms.Vertices = InVertices;
	Parms.Triangles = InTriangles;
	Parms.UVs = InUVs;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InNormals != nullptr)
		*InNormals = Parms.Normals;

	if (InTangents != nullptr)
		*InTangents = Parms.Tangents;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV0                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV1                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV3                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bSRGBConversion                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 InSectionIndex, TArray<struct FVector>& InVertices, TArray<struct FVector>& InNormals, TArray<struct FVector2D>& InUV0, TArray<struct FVector2D>& InUV1, TArray<struct FVector2D>& InUV2, TArray<struct FVector2D>& InUV3, TArray<struct FLinearColor>& InVertexColors, TArray<struct FProcMeshTangent>& InTangents, bool InbSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = InSectionIndex;
	Parms.Vertices = InVertices;
	Parms.Normals = InNormals;
	Parms.UV0 = InUV0;
	Parms.UV1 = InUV1;
	Parms.UV2 = InUV2;
	Parms.UV3 = InUV3;
	Parms.VertexColors = InVertexColors;
	Parms.Tangents = InTangents;
	Parms.bSRGBConversion = InbSRGBConversion;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV0                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::UpdateMeshSection(int32 InSectionIndex, TArray<struct FVector>& InVertices, TArray<struct FVector>& InNormals, TArray<struct FVector2D>& InUV0, TArray<struct FColor>& InVertexColors, TArray<struct FProcMeshTangent>& InTangents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "UpdateMeshSection");

	Params::UProceduralMeshComponent_UpdateMeshSection_Params Parms{};

	Parms.SectionIndex = InSectionIndex;
	Parms.Vertices = InVertices;
	Parms.Normals = InNormals;
	Parms.UV0 = InUV0;
	Parms.VertexColors = InVertexColors;
	Parms.Tangents = InTangents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bNewVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::SetMeshSectionVisible(int32 InSectionIndex, bool InbNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "SetMeshSectionVisible");

	Params::UProceduralMeshComponent_SetMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = InSectionIndex;
	Parms.bNewVisibility = InbNewVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UProceduralMeshComponent::IsMeshSectionVisible(int32 InSectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "IsMeshSectionVisible");

	Params::UProceduralMeshComponent_IsMeshSectionVisible_Params Parms{};

	Parms.SectionIndex = InSectionIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UProceduralMeshComponent::GetNumSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "GetNumSections");

	Params::UProceduralMeshComponent_GetNumSections_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV0                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV1                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV2                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV3                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
// TArray<struct FLinearColor>        VertexColors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCreateCollision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSRGBConversion                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32 InSectionIndex, TArray<struct FVector>& InVertices, TArray<int32>& InTriangles, TArray<struct FVector>& InNormals, TArray<struct FVector2D>& InUV0, TArray<struct FVector2D>& InUV1, TArray<struct FVector2D>& InUV2, TArray<struct FVector2D>& InUV3, TArray<struct FLinearColor>& InVertexColors, TArray<struct FProcMeshTangent>& InTangents, bool InbCreateCollision, bool InbSRGBConversion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection_LinearColor");

	Params::UProceduralMeshComponent_CreateMeshSection_LinearColor_Params Parms{};

	Parms.SectionIndex = InSectionIndex;
	Parms.Vertices = InVertices;
	Parms.Triangles = InTriangles;
	Parms.Normals = InNormals;
	Parms.UV0 = InUV0;
	Parms.UV1 = InUV1;
	Parms.UV2 = InUV2;
	Parms.UV3 = InUV3;
	Parms.VertexColors = InVertexColors;
	Parms.Tangents = InTangents;
	Parms.bCreateCollision = InbCreateCollision;
	Parms.bSRGBConversion = InbSRGBConversion;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Vertices                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      Triangles                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Normals                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           UV0                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>              VertexColors                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FProcMeshTangent>    Tangents                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCreateCollision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::CreateMeshSection(int32 InSectionIndex, TArray<struct FVector>& InVertices, TArray<int32>& InTriangles, TArray<struct FVector>& InNormals, TArray<struct FVector2D>& InUV0, TArray<struct FColor>& InVertexColors, TArray<struct FProcMeshTangent>& InTangents, bool InbCreateCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "CreateMeshSection");

	Params::UProceduralMeshComponent_CreateMeshSection_Params Parms{};

	Parms.SectionIndex = InSectionIndex;
	Parms.Vertices = InVertices;
	Parms.Triangles = InTriangles;
	Parms.Normals = InNormals;
	Parms.UV0 = InUV0;
	Parms.VertexColors = InVertexColors;
	Parms.Tangents = InTangents;
	Parms.bCreateCollision = InbCreateCollision;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              SectionIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::ClearMeshSection(int32 InSectionIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearMeshSection");

	Params::UProceduralMeshComponent_ClearMeshSection_Params Parms{};

	Parms.SectionIndex = InSectionIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearCollisionConvexMeshes");

	Params::UProceduralMeshComponent_ClearCollisionConvexMeshes_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UProceduralMeshComponent::ClearAllMeshSections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "ClearAllMeshSections");

	Params::UProceduralMeshComponent_ClearAllMeshSections_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             ConvexVerts                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UProceduralMeshComponent::AddCollisionConvexMesh(const TArray<struct FVector>& InConvexVerts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProceduralMeshComponent", "AddCollisionConvexMesh");

	Params::UProceduralMeshComponent_AddCollisionConvexMesh_Params Parms{};

	Parms.ConvexVerts = InConvexVerts;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
