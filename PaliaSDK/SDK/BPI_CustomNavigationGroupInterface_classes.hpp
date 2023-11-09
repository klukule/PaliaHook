#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CustomNavigationGroupInterface.BPI_CustomNavigationGroupInterface_C
class IBPI_CustomNavigationGroupInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CustomNavigationGroupInterface_C* GetDefaultObj();

	void GetCustomNavigationGroup(class US6UI_CustomNavigationGroup** NavigationGroup);
};

}


