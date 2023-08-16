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
// BlueprintGeneratedClass BPI_LoginScreen.BPI_LoginScreen_C
class IBPI_LoginScreen_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPI_LoginScreen_C");
		return Clss;
	}

	void HandleOnEnterLoginLobbyState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
