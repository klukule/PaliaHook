#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// Class S6Automation.S6Auto_Suite
class US6Auto_Suite : public UPrimaryDataAsset
{
public:
	class FString                                SuiteId;                                           // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsEditorOnlyAutomation;                           // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_0[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class US6Auto_SuiteBlackboard>   BlackboardClass;                                   // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FS6Auto_SuiteStep>             Steps;                                             // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class US6Auto_Suite* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class S6Automation.S6Auto_SuiteSubsystem
class US6Auto_SuiteSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1[0x8];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS6Auto_SuiteCollection               SuiteCollection;                                   // 0x38(0x10)(NativeAccessSpecifierPrivate)
	TArray<class US6Auto_SuiteStepScript*>       ScriptObjects;                                     // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	class US6Auto_SuiteBlackboard*               Blackboard;                                        // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2[0x48];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6Auto_SuiteSubsystem* GetDefaultObj();

	void RunSuites(const TArray<class US6Auto_Suite*>& Suites);
};

// 0x0 (0x28 - 0x28)
// Class S6Automation.S6Auto_SuiteBlackboard
class US6Auto_SuiteBlackboard : public UObject
{
public:

	static class UClass* StaticClass();
	static class US6Auto_SuiteBlackboard* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class S6Automation.S6Auto_SuiteStepPayload
class US6Auto_SuiteStepPayload : public UObject
{
public:

	static class UClass* StaticClass();
	static class US6Auto_SuiteStepPayload* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class S6Automation.S6Auto_SuiteStepScript
class US6Auto_SuiteStepScript : public UObject
{
public:
	class US6Auto_SuiteStepPayload*              Payload;                                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6Auto_SuiteBlackboard*               Blackboard;                                        // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6[0x20];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6Auto_SuiteStepScript* GetDefaultObj();

	void StartStep();
	void MarkStepFailed(const class FString& ErrorMessage);
	void MarkStepCompleted();
	class FString GetScriptDisplayName(class US6Auto_SuiteStepPayload* ScriptPayload);
};

// 0x0 (0x28 - 0x28)
// Class S6Automation.S6AutoStatics
class US6AutoStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class US6AutoStatics* GetDefaultObj();

	TArray<TSoftObjectPtr<class US6Auto_Suite>> GetSuitesFromId(const class FString& SuiteId);
	TArray<TSoftObjectPtr<class US6Auto_Suite>> GetSuitesFromAssetName(class FName& SuiteAssetName);
	TArray<TSoftObjectPtr<class US6Auto_Suite>> GetAllSuites();
};

}


