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

// 0x70 (0x310 - 0x2A0)
// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnMeshTrackerUpdated;                              // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         ScanWorld;                                         // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestNormals;                                    // 0x2B1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequestVertexConfidence;                           // 0x2B2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeshTrackerVertexColorMode       VertexColorMode;                                   // 0x2B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FColor>                        BlockVertexColors;                                 // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          VertexColorFromConfidenceZero;                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          VertexColorFromConfidenceOne;                      // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UpdateInterval;                                    // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMRMeshComponent*                      MRMesh;                                            // 0x2F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MockDataMeshTrackerComponent");
		return Clss;
	}

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 InIndex, TArray<struct FVector>& InVertices, TArray<int32>& InTriangles, TArray<struct FVector>& InNormals, TArray<float>& InConfidence);
	void DisconnectMRMesh(class UMRMeshComponent* InInMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent* InInMRMeshPtr);
};

// 0x208 (0x230 - 0x28)
// Class MRMesh.MRMeshBodyHolder
class UMRMeshBodyHolder : public UObject
{
public:
	uint8                                        Pad_1BA9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            BodySetup;                                         // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBodyInstance                         BodyInstance;                                      // 0x38(0x190)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BAC[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MRMeshBodyHolder");
		return Clss;
	}

};

// 0x88 (0x5C0 - 0x538)
// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_1BCF[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x540(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    WireframeMaterial;                                 // 0x548(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCreateMeshProxySections;                          // 0x550(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUpdateNavMeshOnMeshUpdate;                        // 0x551(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BD4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bNeverCreateCollisionMesh;                         // 0x553(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BD6[0x44];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMRMeshBodyHolder*>             BodyHolders;                                       // 0x598(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BD7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MRMeshComponent");
		return Clss;
	}

	void SetWireframeMaterial(class UMaterialInterface* InInMaterial);
	void SetWireframeColor(struct FLinearColor& InInColor);
	void SetUseWireframe(bool InbUseWireframe);
	void SetEnableMeshOcclusion(bool InbEnable);
	void RequestNavMeshUpdate();
	bool IsConnected();
	struct FLinearColor GetWireframeColor();
	bool GetUseWireframe();
	bool GetEnableMeshOcclusion();
	void ForceNavMeshUpdate();
	void Clear();
};

// 0x0 (0x28 - 0x28)
// Class MRMesh.MeshReconstructorBase
class UMeshReconstructorBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshReconstructorBase");
		return Clss;
	}

	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent* InMesh);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
