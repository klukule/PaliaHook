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
// BlueprintGeneratedClass BPI_VisibilityChanges.BPI_VisibilityChanges_C
class IBPI_VisibilityChanges_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BPI_VisibilityChanges_C");

		return Clss;
	}

	void S6OnVisibilityChanged(bool IsVisible);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
