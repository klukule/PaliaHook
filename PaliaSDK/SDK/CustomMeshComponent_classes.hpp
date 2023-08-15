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

// 0x10 (0x580 - 0x570)
// Class CustomMeshComponent.CustomMeshComponent
class UCustomMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1E25[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CustomMeshComponent");

		return Clss;
	}

	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle>& Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle>& Triangles);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
