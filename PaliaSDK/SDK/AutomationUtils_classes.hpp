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
// Class AutomationUtils.AutomationUtilsBlueprintLibrary
class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AutomationUtilsBlueprintLibrary");

		return Clss;
	}

	void TakeGameplayAutomationScreenshot(const class FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const class FString& MapNameOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
