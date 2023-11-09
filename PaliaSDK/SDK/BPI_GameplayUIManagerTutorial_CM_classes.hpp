#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C
class IBPI_GameplayUIManagerTutorial_CM_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_GameplayUIManagerTutorial_CM_C* GetDefaultObj();

	void RedirectType(class FName DefaultFTUEPopinType, class FText* Title, class FText* Content, bool* EnableFound, class FName TutorialModalName);
	void Redirect_FTUEPopin_Type(class FName DefaultFTUEPopinType, class UWBP_FTUEPopin_CM_C** FTUEPopin, class FName TutorialModalName);
	void RedirectTutorialModalType(class FName DefaultTutorialModalName, FDelegateProperty_ OpenModalDelegate, bool* bSuccess, class FName TutorialModalName);
};

}


