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
		static class UClass* Clss = UObject::FindClassFast("ConsoleVariablesAsset");
		return Clss;
	}

	void SetVariableCollectionDescription(const class FString& InInVariableCollectionDescription);
	void ReplaceSavedCommands(TArray<struct FConsoleVariablesEditorAssetSaveData>& InReplacement);
	bool RemoveConsoleVariable(const class FString& InInCommandString);
	class FString GetVariableCollectionDescription();
	int32 GetSavedCommandsCount();
	TArray<class FString> GetSavedCommandsAsStringArray(bool InbOnlyIncludeChecked);
	class FString GetSavedCommandsAsCommaSeparatedString(bool InbOnlyIncludeChecked);
	TArray<struct FConsoleVariablesEditorAssetSaveData> GetSavedCommands();
	bool FindSavedDataByCommandString(const class FString& InInCommandString, struct FConsoleVariablesEditorAssetSaveData* InOutValue, enum class ESearchCase InSearchCase);
	void ExecuteSavedCommands(class UObject* InWorldContextObject, bool InbOnlyIncludeChecked);
	void CopyFrom(class UConsoleVariablesAsset* InInAssetToCopy);
	void AddOrSetConsoleObjectSavedData(struct FConsoleVariablesEditorAssetSaveData& InInData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
