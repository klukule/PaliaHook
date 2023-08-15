#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DeleteGeometrySelectionCommand
class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DeleteGeometrySelectionCommand");

		return Clss;
	}

};

// 0xF8 (0x120 - 0x28)
// Class MeshModelingTools.PolyEditActivityContext
class UPolyEditActivityContext : public UObject
{
public:
	class UPolyEditCommonProperties*             CommonProperties;                                  // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1704[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1706[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1707[0xA8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditActivityContext");

		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.AddPrimitiveToolBuilder
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
public:
	uint8                                        Pad_1709[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddPrimitiveToolBuilder");

		return Clss;
	}

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.ProceduralShapeToolProperties
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EMakeMeshPolygroupMode            PolygroupMode;                                     // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMakeMeshPlacementType            TargetSurface;                                     // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMakeMeshPivotLocation            PivotLocation;                                     // 0xAA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Rotation;                                          // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlignToNormal;                                    // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGizmo;                                        // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGizmoOptions;                                 // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralShapeToolProperties");

		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralBoxToolProperties
class UProceduralBoxToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Width;                                             // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WidthSubdivisions;                                 // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DepthSubdivisions;                                 // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSubdivisions;                                // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralBoxToolProperties");

		return Clss;
	}

};

// 0x20 (0xD8 - 0xB8)
// Class MeshModelingTools.ProceduralRectangleToolProperties
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralRectType               RectangleType;                                     // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Width;                                             // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Depth;                                             // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WidthSubdivisions;                                 // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DepthSubdivisions;                                 // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CornerRadius;                                      // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CornerSlices;                                      // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1713[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralRectangleToolProperties");

		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralDiscToolProperties
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralDiscType               DiscType;                                          // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSubdivisions;                                // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoleRadius;                                        // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1715[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralDiscToolProperties");

		return Clss;
	}

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralTorusToolProperties
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        MajorRadius;                                       // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinorRadius;                                       // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MajorSlices;                                       // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinorSlices;                                       // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralTorusToolProperties");

		return Clss;
	}

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralCylinderToolProperties
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSubdivisions;                                // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralCylinderToolProperties");

		return Clss;
	}

};

// 0x10 (0xC8 - 0xB8)
// Class MeshModelingTools.ProceduralConeToolProperties
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSubdivisions;                                // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralConeToolProperties");

		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralArrowToolProperties
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        ShaftRadius;                                       // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShaftHeight;                                       // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadRadius;                                        // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadHeight;                                        // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HeightSubdivisions;                                // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralArrowToolProperties");

		return Clss;
	}

};

// 0x18 (0xD0 - 0xB8)
// Class MeshModelingTools.ProceduralSphereToolProperties
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
public:
	float                                        Radius;                                            // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProceduralSphereType             SubdivisionType;                                   // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Subdivisions;                                      // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HorizontalSlices;                                  // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VerticalSlices;                                    // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralSphereToolProperties");

		return Clss;
	}

};

// 0x20 (0xD8 - 0xB8)
// Class MeshModelingTools.ProceduralStairsToolProperties
class UProceduralStairsToolProperties : public UProceduralShapeToolProperties
{
public:
	enum class EProceduralStairsType             StairsType;                                        // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSteps;                                          // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepWidth;                                         // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepHeight;                                        // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepDepth;                                         // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveAngle;                                        // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpiralAngle;                                       // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerRadius;                                       // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ProceduralStairsToolProperties");

		return Clss;
	}

};

// 0x98 (0x138 - 0xA0)
// Class MeshModelingTools.AddPrimitiveTool
class UAddPrimitiveTool : public USingleClickTool
{
public:
	uint8                                        Pad_1720[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProceduralShapeToolProperties*        ShapeSettings;                                     // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                          PreviewMesh;                                       // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCombinedTransformGizmo*               Gizmo;                                             // 0xD8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                AssetName;                                         // 0xE8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1721[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddPrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddBoxPrimitiveTool
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddBoxPrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddCylinderPrimitiveTool
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddCylinderPrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddConePrimitiveTool
class UAddConePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddConePrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddRectanglePrimitiveTool
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddRectanglePrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddDiscPrimitiveTool
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddDiscPrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddTorusPrimitiveTool
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddTorusPrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddArrowPrimitiveTool
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddArrowPrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddSpherePrimitiveTool
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddSpherePrimitiveTool");

		return Clss;
	}

};

// 0x0 (0x138 - 0x138)
// Class MeshModelingTools.AddStairsPrimitiveTool
class UAddStairsPrimitiveTool : public UAddPrimitiveTool
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AddStairsPrimitiveTool");

		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.CombineMeshesToolBuilder
class UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:
	uint8                                        Pad_1725[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CombineMeshesToolBuilder");

		return Clss;
	}

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingTools.CombineMeshesToolProperties
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bIsDuplicateMode;                                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1727[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EBaseCreateFromSelectedTargetType OutputWriteTo;                                     // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputNewName;                                     // 0xB0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputExistingName;                                // 0xC0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CombineMeshesToolProperties");

		return Clss;
	}

};

// 0x28 (0xE0 - 0xB8)
// Class MeshModelingTools.CombineMeshesTool
class UCombineMeshesTool : public UMultiSelectionMeshEditingTool
{
public:
	uint8                                        Pad_172A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCombineMeshesToolProperties*          BasicProperties;                                   // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOnAcceptHandleSourcesPropertiesBase*  HandleSourceProperties;                            // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_172C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CombineMeshesTool");

		return Clss;
	}

};

// 0x28 (0xD0 - 0xA8)
// Class MeshModelingTools.CSGMeshesToolProperties
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ECSGOperation                     Operation;                                         // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTryFixHoles;                                      // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTryCollapseEdges;                                 // 0xAA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingThreshold;                                  // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowNewBoundaries;                                // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSubtractedMesh;                               // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1730[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SubtractedMeshOpacity;                             // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SubtractedMeshColor;                               // 0xB8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFirstMeshMaterials;                            // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1731[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CSGMeshesToolProperties");

		return Clss;
	}

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingTools.TrimMeshesToolProperties
class UTrimMeshesToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class ETrimOperation                    WhichMesh;                                         // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrimSide                         TrimSide;                                          // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1734[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingThreshold;                                  // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTrimmingMesh;                                 // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1735[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OpacityOfTrimmingMesh;                             // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorOfTrimmingMesh;                               // 0xB8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("TrimMeshesToolProperties");

		return Clss;
	}

};

// 0x58 (0x158 - 0x100)
// Class MeshModelingTools.CSGMeshesTool
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
public:
	class UCSGMeshesToolProperties*              CSGProperties;                                     // 0x100(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTrimMeshesToolProperties*             TrimProperties;                                    // 0x108(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1738[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPreviewMesh*>                  OriginalMeshPreviews;                              // 0x120(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              PreviewsGhostMaterial;                             // 0x130(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_173A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CSGMeshesTool");

		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.CSGMeshesToolBuilder
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:
	uint8                                        Pad_173B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CSGMeshesToolBuilder");

		return Clss;
	}

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.CutMeshWithMeshToolProperties
class UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bTryFixHoles;                                      // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTryCollapseEdges;                                 // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WindingThreshold;                                  // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowNewBoundaries;                                // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFirstMeshMaterials;                            // 0xB1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1741[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CutMeshWithMeshToolProperties");

		return Clss;
	}

};

// 0x278 (0x378 - 0x100)
// Class MeshModelingTools.CutMeshWithMeshTool
class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool
{
public:
	class UCutMeshWithMeshToolProperties*        CutProperties;                                     // 0x100(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewMesh*                          IntersectPreviewMesh;                              // 0x108(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1742[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ULineSetComponent*                     DrawnLineSet;                                      // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1743[0x240];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CutMeshWithMeshTool");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.CutMeshWithMeshToolBuilder
class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CutMeshWithMeshToolBuilder");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DrawAndRevolveToolBuilder
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DrawAndRevolveToolBuilder");

		return Clss;
	}

};

// 0x70 (0x118 - 0xA8)
// Class MeshModelingTools.RevolveProperties
class URevolveProperties : public UInteractiveToolPropertySet
{
public:
	double                                       RevolveDegreesClamped;                             // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RevolveDegrees;                                    // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RevolveDegreesOffset;                              // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       StepsMaxDegrees;                                   // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExplicitSteps;                                    // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumExplicitSteps;                                  // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       HeightOffsetPerDegree;                             // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverseRevolutionDirection;                       // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipMesh;                                         // 0xD9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSharpNormals;                                     // 0xDA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SharpNormalsDegreeThreshold;                       // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPathAtMidpointOfStep;                             // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERevolvePropertiesPolygroupMode   PolygroupMode;                                     // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERevolvePropertiesQuadSplit       QuadSplitMode;                                     // 0xEA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_174D[0x2D];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RevolveProperties");

		return Clss;
	}

};

// 0x40 (0x158 - 0x118)
// Class MeshModelingTools.RevolveToolProperties
class URevolveToolProperties : public URevolveProperties
{
public:
	enum class ERevolvePropertiesCapFillMode     CapFillMode;                                       // 0x118(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosePathToAxis;                                  // 0x119(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1752[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               DrawPlaneOrigin;                                   // 0x120(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              DrawPlaneOrientation;                              // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableSnapping;                                   // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowedToEditDrawPlane;                           // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1755[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RevolveToolProperties");

		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.RevolveOperatorFactory
class URevolveOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1757[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDrawAndRevolveTool*                   RevolveTool;                                       // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RevolveOperatorFactory");

		return Clss;
	}

};

// 0xC8 (0x160 - 0x98)
// Class MeshModelingTools.DrawAndRevolveTool
class UDrawAndRevolveTool : public UInteractiveTool
{
public:
	uint8                                        Pad_1758[0x90];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveControlPointsMechanic*           ControlPointsMechanic;                             // 0x128(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UConstructionPlaneMechanic*            PlaneMechanic;                                     // 0x130(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0x138(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URevolveToolProperties*                Settings;                                          // 0x140(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0x148(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0x150(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_175E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DrawAndRevolveTool");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.DrawPolygonToolBuilder
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DrawPolygonToolBuilder");

		return Clss;
	}

};

// 0x18 (0xC0 - 0xA8)
// Class MeshModelingTools.DrawPolygonToolStandardProperties
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
public:
	enum class EDrawPolygonDrawMode              PolygonDrawMode;                                   // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSelfIntersections;                           // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1764[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FeatureSizeRatio;                                  // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RadialSlices;                                      // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0xB4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGridGizmo;                                    // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrawPolygonExtrudeMode           ExtrudeMode;                                       // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1767[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExtrudeHeight;                                     // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DrawPolygonToolStandardProperties");

		return Clss;
	}

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.DrawPolygonToolSnapProperties
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnableSnapping;                                   // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToWorldGrid;                                  // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToVertices;                                   // 0xAA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToEdges;                                      // 0xAB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToAxes;                                       // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToLengths;                                    // 0xAD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToSurfaces;                                   // 0xAE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176B[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SnapToSurfacesOffset;                              // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_176C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DrawPolygonToolSnapProperties");

		return Clss;
	}

};

// 0x508 (0x5A0 - 0x98)
// Class MeshModelingTools.DrawPolygonTool
class UDrawPolygonTool : public UInteractiveTool
{
public:
	uint8                                        Pad_176D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreateMeshObjectTypeProperties*       OutputTypeProperties;                              // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolygonToolStandardProperties*    PolygonProperties;                                 // 0xA8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDrawPolygonToolSnapProperties*        SnapProperties;                                    // 0xB0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNewMeshMaterialProperties*            MaterialProperties;                                // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_176F[0xD0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPreviewMesh*                          PreviewMesh;                                       // 0x190(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCombinedTransformGizmo*               PlaneTransformGizmo;                               // 0x198(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                       PlaneTransformProxy;                               // 0x1A0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1770[0x3E0];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlaneDistanceFromHitMechanic*         HeightMechanic;                                    // 0x588(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x590(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1771[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DrawPolygonTool");

		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class MeshModelingTools.EditMeshPolygonsToolBuilder
class UEditMeshPolygonsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:
	uint8                                        Pad_1774[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolBuilder");

		return Clss;
	}

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.PolyEditCommonProperties
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSelectableCorners;                            // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGizmoVisible;                                     // 0xAA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1777[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ELocalFrameMode                   LocalFrameMode;                                    // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockRotation;                                     // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalCoordSystem;                                 // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1778[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditCommonProperties");

		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
class UEditMeshPolygonsActionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
public:
	uint8                                        Pad_177A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsActionModeToolBuilder");

		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
class UEditMeshPolygonsSelectionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
public:
	uint8                                        Pad_177B[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsSelectionModeToolBuilder");

		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_177C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolActionPropertySet");

		return Clss;
	}

};

// 0x10 (0xC0 - 0xB0)
// Class MeshModelingTools.PolyEditTopologyProperties
class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet
{
public:
	bool                                         bAddExtraCorners;                                  // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1780[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ExtraCornerAngleThresholdDegrees;                  // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditTopologyProperties");

		return Clss;
	}

	void RegenerateExtraCorners();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolActions
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolActions");

		return Clss;
	}

	void SimplifyByGroups();
	void Retriangulate();
	void RecalcNormals();
	void PushPull();
	void Outset();
	void Offset();
	void Merge();
	void Inset();
	void InsertEdgeLoop();
	void InsertEdge();
	void Flip();
	void Extrude();
	void Duplicate();
	void Disconnect();
	void Delete();
	void Decompose();
	void CutFaces();
	void Bevel();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolActions_Triangles");

		return Clss;
	}

	void RecalcNormals();
	void PushPull();
	void Poke();
	void Outset();
	void Offset();
	void Inset();
	void Flip();
	void Extrude();
	void Duplicate();
	void Disconnect();
	void Delete();
	void CutFaces();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolUVActions
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolUVActions");

		return Clss;
	}

	void PlanarProjection();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolEdgeActions");

		return Clss;
	}

	void Weld();
	void Straighten();
	void FillHole();
	void Bridge();
	void Bevel();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolEdgeActions_Triangles");

		return Clss;
	}

	void Weld();
	void Split();
	void Flip();
	void FillHole();
	void Collapse();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolCancelAction
class UEditMeshPolygonsToolCancelAction : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolCancelAction");

		return Clss;
	}

	void Done();
};

// 0x0 (0xB0 - 0xB0)
// Class MeshModelingTools.EditMeshPolygonsToolAcceptCancelAction
class UEditMeshPolygonsToolAcceptCancelAction : public UEditMeshPolygonsToolActionPropertySet
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsToolAcceptCancelAction");

		return Clss;
	}

	void Cancel();
	void Apply();
};

// 0x758 (0x810 - 0xB8)
// Class MeshModelingTools.EditMeshPolygonsTool
class UEditMeshPolygonsTool : public USingleSelectionMeshEditingTool
{
public:
	uint8                                        Pad_17CD[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditCommonProperties*             CommonProps;                                       // 0xE8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolActions*          EditActions;                                       // 0xF0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;                             // 0xF8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions*      EditEdgeActions;                                   // 0x100(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;                         // 0x108(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolUVActions*        EditUVActions;                                     // 0x110(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolCancelAction*     CancelAction;                                      // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEditMeshPolygonsToolAcceptCancelAction* AcceptCancelAction;                                // 0x120(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditTopologyProperties*           TopologyProperties;                                // 0x128(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditExtrudeActivity*              ExtrudeActivity;                                   // 0x130(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditInsetOutsetActivity*          InsetOutsetActivity;                               // 0x138(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditCutFacesActivity*             CutFacesActivity;                                  // 0x140(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditPlanarProjectionUVActivity*   PlanarProjectionUVActivity;                        // 0x148(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditInsertEdgeActivity*           InsertEdgeActivity;                                // 0x150(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditInsertEdgeLoopActivity*       InsertEdgeLoopActivity;                            // 0x158(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditBevelEdgeActivity*            BevelEdgeActivity;                                 // 0x160(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D5[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x1A0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygonSelectionMechanic*             SelectionMechanic;                                 // 0x1A8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDragAlignmentMechanic*                DragAlignmentMechanic;                             // 0x1B0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0x1B8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                       TransformProxy;                                    // 0x1C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D8[0x648];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EditMeshPolygonsTool");

		return Clss;
	}

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.NewMeshMaterialProperties
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	TWeakObjectPtr<class UMaterialInterface>     Material;                                          // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UVScale;                                           // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWorldSpaceUVScale;                                // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowWireframe;                                    // 0xB5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowExtendedOptions;                              // 0xB6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DB[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NewMeshMaterialProperties");

		return Clss;
	}

};

// 0x38 (0xE0 - 0xA8)
// Class MeshModelingTools.ExistingMeshMaterialProperties
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
public:
	enum class ESetMeshMaterialMode              MaterialMode;                                      // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CheckerDensity;                                    // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    OverrideMaterial;                                  // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UVChannel;                                         // 0xB8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        UVChannelNamesList;                                // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0xD8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ExistingMeshMaterialProperties");

		return Clss;
	}

	TArray<class FString> GetUVChannelNamesFunc();
};

// 0x50 (0xF8 - 0xA8)
// Class MeshModelingTools.MeshEditingViewProperties
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowWireframe;                                    // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMeshEditingMaterialModes         MaterialMode;                                      // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlatShading;                                      // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0xB4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Image;                                             // 0xC8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Opacity;                                           // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TransparentMaterialColor;                          // 0xD8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTwoSided;                                         // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UMaterialInterface>     CustomMaterial;                                    // 0xEC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MeshEditingViewProperties");

		return Clss;
	}

};

// 0x20 (0xC8 - 0xA8)
// Class MeshModelingTools.MeshUVChannelProperties
class UMeshUVChannelProperties : public UInteractiveToolPropertySet
{
public:
	class FString                                UVChannel;                                         // 0xA8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        UVChannelNamesList;                                // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MeshUVChannelProperties");

		return Clss;
	}

	TArray<class FString> GetUVChannelNamesFunc();
};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.RecomputeUVsToolBuilder
class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RecomputeUVsToolBuilder");

		return Clss;
	}

};

// 0x60 (0x118 - 0xB8)
// Class MeshModelingTools.RecomputeUVsTool
class URecomputeUVsTool : public USingleSelectionMeshEditingTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URecomputeUVsToolProperties*           Settings;                                          // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolygroupLayersProperties*            PolygroupLayerProperties;                          // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCreateUVLayoutViewOnSetup;                        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUVLayoutPreview*                      UVLayoutView;                                      // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URecomputeUVsOpFactory*                RecomputeUVsOpFactory;                             // 0xE8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xF0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17FE[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RecomputeUVsTool");

		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditBevelEdgeProperties
class UPolyEditBevelEdgeProperties : public UInteractiveToolPropertySet
{
public:
	double                                       BevelDistance;                                     // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditBevelEdgeProperties");

		return Clss;
	}

};

// 0x110 (0x140 - 0x30)
// Class MeshModelingTools.PolyEditBevelEdgeActivity
class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_1801[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditBevelEdgeProperties*          BevelProperties;                                   // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x40(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1803[0xF8];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditBevelEdgeActivity");

		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditCutProperties
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditCutPlaneOrientation      Orientation;                                       // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapToVertices;                                   // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1808[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditCutProperties");

		return Clss;
	}

};

// 0x90 (0xC0 - 0x30)
// Class MeshModelingTools.PolyEditCutFacesActivity
class UPolyEditCutFacesActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_180F[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditCutProperties*                CutProperties;                                     // 0x40(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1814[0x60];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditCutFacesActivity");

		return Clss;
	}

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditExtrudeProperties
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Distance;                                          // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPolyEditExtrudeDirection         Direction;                                         // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShellsToSolids;                                   // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1821[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPolyEditExtrudeModeOptions       DirectionMode;                                     // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MaxDistanceScaleFactor;                            // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1823[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditExtrudeProperties");

		return Clss;
	}

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditOffsetProperties
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1829[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Distance;                                          // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPolyEditOffsetModeOptions        DirectionMode;                                     // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxDistanceScaleFactor;                            // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShellsToSolids;                                   // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditOffsetProperties");

		return Clss;
	}

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.PolyEditPushPullProperties
class UPolyEditPushPullProperties : public UInteractiveToolPropertySet
{
public:
	enum class EPolyEditExtrudeDistanceMode      DistanceMode;                                      // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1831[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Distance;                                          // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPolyEditPushPullModeOptions      DirectionMode;                                     // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1832[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MaxDistanceScaleFactor;                            // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShellsToSolids;                                   // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1833[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPolyEditExtrudeDirection         MeasureDirection;                                  // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseColinearityForSettingBorderGroups;             // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1835[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditPushPullProperties");

		return Clss;
	}

};

// 0x1A0 (0x1D0 - 0x30)
// Class MeshModelingTools.PolyEditExtrudeActivity
class UPolyEditExtrudeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_1837[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditExtrudeProperties*            ExtrudeProperties;                                 // 0x50(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPolyEditOffsetProperties*             OffsetProperties;                                  // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPolyEditPushPullProperties*           PushPullProperties;                                // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlaneDistanceFromHitMechanic*         ExtrudeHeightMechanic;                             // 0x68(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x70(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_183A[0x158];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditExtrudeActivity");

		return Clss;
	}

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.GroupEdgeInsertionProperties
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
public:
	enum class EGroupEdgeInsertionMode           InsertionMode;                                     // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VertexTolerance;                                   // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GroupEdgeInsertionProperties");

		return Clss;
	}

};

// 0x410 (0x440 - 0x30)
// Class MeshModelingTools.PolyEditInsertEdgeActivity
class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_1840[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UGroupEdgeInsertionProperties*         Settings;                                          // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1841[0x3E8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditInsertEdgeActivity");

		return Clss;
	}

};

// 0x30 (0xD8 - 0xA8)
// Class MeshModelingTools.EdgeLoopInsertionProperties
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
public:
	enum class EEdgeLoopPositioningMode          PositionMode;                                      // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEdgeLoopInsertionMode            InsertionMode;                                     // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumLoops;                                          // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1844[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ProportionOffset;                                  // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       DistanceOffset;                                    // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInteractive;                                      // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOffsetDirection;                              // 0xC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHighlightProblemGroups;                           // 0xCA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1847[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       VertexTolerance;                                   // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EdgeLoopInsertionProperties");

		return Clss;
	}

};

// 0x3D0 (0x400 - 0x30)
// Class MeshModelingTools.PolyEditInsertEdgeLoopActivity
class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_1848[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UEdgeLoopInsertionProperties*          Settings;                                          // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_184A[0x3A8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditInsertEdgeLoopActivity");

		return Clss;
	}

};

// 0x10 (0xB8 - 0xA8)
// Class MeshModelingTools.PolyEditInsetOutsetProperties
class UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet
{
public:
	float                                        Softness;                                          // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBoundaryOnly;                                     // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AreaScale;                                         // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReproject;                                        // 0xB4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutset;                                           // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184F[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditInsetOutsetProperties");

		return Clss;
	}

};

// 0x40 (0x70 - 0x30)
// Class MeshModelingTools.PolyEditInsetOutsetActivity
class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_1850[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditInsetOutsetProperties*        Settings;                                          // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1852[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpatialCurveDistanceMechanic*         CurveDistMechanic;                                 // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1854[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditInsetOutsetActivity");

		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.PolyEditSetUVProperties
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bShowMaterial;                                     // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1856[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditSetUVProperties");

		return Clss;
	}

};

// 0xC0 (0xF0 - 0x30)
// Class MeshModelingTools.PolyEditPlanarProjectionUVActivity
class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity
{
public:
	uint8                                        Pad_1858[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPolyEditSetUVProperties*              SetUVProperties;                                   // 0x40(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditPreviewMesh*                  EditPreview;                                       // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCollectSurfacePathMechanic*           SurfacePathMechanic;                               // 0x50(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPolyEditActivityContext*              ActivityContext;                                   // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_185B[0x90];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PolyEditPlanarProjectionUVActivity");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.UVLayoutToolBuilder
class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UVLayoutToolBuilder");

		return Clss;
	}

};

// 0xA8 (0x160 - 0xB8)
// Class MeshModelingTools.UVLayoutTool
class UUVLayoutTool : public UMultiSelectionMeshEditingTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUVLayoutProperties*                   BasicProperties;                                   // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                          // 0xD0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UUVLayoutOperatorFactory*>      Factories;                                         // 0xE0(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_185E[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UUVLayoutPreview*                      UVLayoutView;                                      // 0x150(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_185F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UVLayoutTool");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MeshModelingTools.UVProjectionToolBuilder
class UUVProjectionToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UVProjectionToolBuilder");

		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class MeshModelingTools.UVProjectionToolEditActions
class UUVProjectionToolEditActions : public UInteractiveToolPropertySet
{
public:
	uint8                                        Pad_1869[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UVProjectionToolEditActions");

		return Clss;
	}

	void Reset();
	void AutoFitAlign();
	void AutoFit();
};

// 0xE8 (0x190 - 0xA8)
// Class MeshModelingTools.UVProjectionToolProperties
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
public:
	enum class EUVProjectionMethod               ProjectionType;                                    // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Dimensions;                                        // 0xB0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUniformDimensions;                                // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EUVProjectionToolInitializationMode Initialization;                                    // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CylinderSplitAngle;                                // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpMapNormalBlending;                              // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExpMapSmoothingSteps;                              // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpMapSmoothingAlpha;                              // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1872[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Scale;                                             // 0xE8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Translation;                                       // 0xF8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SavedDimensions;                                   // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSavedUniformDimensions;                           // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1874[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SavedTransform;                                    // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UVProjectionToolProperties");

		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MeshModelingTools.UVProjectionOperatorFactory
class UUVProjectionOperatorFactory : public UObject
{
public:
	uint8                                        Pad_1878[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUVProjectionTool*                     Tool;                                              // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UVProjectionOperatorFactory");

		return Clss;
	}

};

// 0x398 (0x450 - 0xB8)
// Class MeshModelingTools.UVProjectionTool
class UUVProjectionTool : public USingleSelectionMeshEditingTool
{
public:
	class UMeshUVChannelProperties*              UVChannelProperties;                               // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUVProjectionToolProperties*           BasicProperties;                                   // 0xC0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUVProjectionToolEditActions*          EditActions;                                       // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UExistingMeshMaterialProperties*       MaterialSettings;                                  // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMeshOpPreviewWithBackgroundCompute*   Preview;                                           // 0xD8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              CheckerMaterial;                                   // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCombinedTransformGizmo*               TransformGizmo;                                    // 0xE8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTransformProxy*                       TransformProxy;                                    // 0xF0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUVProjectionOperatorFactory*          OperatorFactory;                                   // 0xF8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPreviewGeometry*                      EdgeRenderer;                                      // 0x100(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_187B[0x330];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	class USingleClickInputBehavior*             ClickToSetPlaneBehavior;                           // 0x438(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_187C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UVProjectionTool");

		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
