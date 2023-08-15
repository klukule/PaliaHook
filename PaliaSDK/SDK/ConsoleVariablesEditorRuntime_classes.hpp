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

// 0x20 (0x48 - 0x28)
// Class ConsoleVariablesEditorRuntime.ConsoleVariablesAsset
class UConsoleVariablesAsset : public UObject
{
public:
	class FString                                VariableCollectionDescription;                     // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FConsoleVariablesEditorAssetSaveData> SavedCommands;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ConsoleVariablesAsset");

		return Clss;
	}

	void SetVariableCollectionDescription(const class FString& InVariableCollectionDescription);
	void ReplaceSavedCommands(TArray<struct FConsoleVariablesEditorAssetSaveData>& Replacement);
	bool RemoveConsoleVariable(const class FString& InCommandString);
	class FString GetVariableCollectionDescription();
	int32 GetSavedCommandsCount();
	TArray<class FString> GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked);
	class FString GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked);
	TArray<struct FConsoleVariablesEditorAssetSaveData> GetSavedCommands();
	bool FindSavedDataByCommandString(const class FString& InCommandString, struct FConsoleVariablesEditorAssetSaveData* OutValue, enum class ESearchCase SearchCase);
	void ExecuteSavedCommands(class UObject* WorldContextObject, bool bOnlyIncludeChecked);
	void CopyFrom(class UConsoleVariablesAsset* InAssetToCopy);
	void AddOrSetConsoleObjectSavedData(struct FConsoleVariablesEditorAssetSaveData& InData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
