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

// 0x50 (0x80 - 0x30)
// Class KeyRebinding.AvailableKeysAsset
class UAvailableKeysAsset : public UDataAsset
{
public:
	TSet<struct FKey>                            AvailableKeySet;                                   // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AvailableKeysAsset");

		return Clss;
	}

};

// 0x58 (0x2D0 - 0x278)
// Class KeyRebinding.BindingKeyListenerWidget
class UBindingKeyListenerWidget : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnAnyKeyTriggered;                                 // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_69F[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BindingKeyListenerWidget");

		return Clss;
	}

	void OnDeactivated();
	void OnActivated();
	struct FInputKeys GetPlayerInputKey();
};

// 0x1A0 (0x1C8 - 0x28)
// Class KeyRebinding.CustomKeyRebindingInfo
class UCustomKeyRebindingInfo : public USaveGame
{
public:
	TMap<class UInputAction*, struct FKeyRebindingMappingsWithAction> RebindDatas;                                       // 0x28(0x50)(SaveGame, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TMap<class UInputAction*, struct FActionInfoWithAction> ActionsInfo;                                       // 0x78(0x50)(SaveGame, NativeAccessSpecifierPublic)
	TArray<class UInputAction*>                  ChordActions;                                      // 0xC8(0x10)(ZeroConstructor, SaveGame, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class UInputAction*, int32>             ChordActionUnique;                                 // 0xD8(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FString, TSubclassOf<class UInputTrigger>> TriggerClassNameMap;                               // 0x128(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FString, TSubclassOf<class UInputModifier>> ModifierClassNameMap;                              // 0x178(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CustomKeyRebindingInfo");

		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class KeyRebinding.IARichTextBlockImageDecorator
class UIARichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                            IconTable;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6A6[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("IARichTextBlockImageDecorator");

		return Clss;
	}

};

// 0x10 (0x288 - 0x278)
// Class KeyRebinding.InputActionDescriptionWidget
class UInputActionDescriptionWidget : public UUserWidget
{
public:
	enum class EPlatform                         PlatformOption;                                    // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            IconTable;                                         // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("InputActionDescriptionWidget");

		return Clss;
	}

	struct FKeyRebindingIcons RefreshDiscription(class FName& ActionName, bool bIsGamepadKey);
};

// 0x50 (0x80 - 0x30)
// Class KeyRebinding.InputActionGroupLocalization
class UInputActionGroupLocalization : public UDataAsset
{
public:
	TMap<int32, class FText>                     GroupNameMap;                                      // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("InputActionGroupLocalization");

		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class KeyRebinding.InputActionLocalization
class UInputActionLocalization : public UDataAsset
{
public:
	TMap<class FName, struct FLocalizationOfActions> ActionNameMap;                                     // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("InputActionLocalization");

		return Clss;
	}

};

// 0x58 (0x90 - 0x38)
// Class KeyRebinding.KeyRebindingDatasetSettings
class UKeyRebindingDatasetSettings : public UDeveloperSettings
{
public:
	TMap<enum class ERedirectsPlatform, TSubclassOf<class UKeyRebindingMappingDataset>> KeyRebindingDatasetOfAllPlatform;                  // 0x38(0x50)(Edit, Config, NoClear, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        TipDelayTime;                                      // 0x88(0x4)(Edit, ZeroConstructor, Config, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("KeyRebindingDatasetSettings");

		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class KeyRebinding.KeyRebindingMappingItemsAsset
class UKeyRebindingMappingItemsAsset : public UDataAsset
{
public:
	TArray<struct FKeyRebindingMappingsWithAction> KeyRebindingMappings;                              // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("KeyRebindingMappingItemsAsset");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class KeyRebinding.KeyRebindingToolsLibrary
class UKeyRebindingToolsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("KeyRebindingToolsLibrary");

		return Clss;
	}

	float GetPromptDelayTime();
	class FString GetKeyFName(struct FKey& InKey);
	TArray<class UTexture2D*> GetImagesWithInputKeys(const struct FInputKeys& InputKeys, bool bIsGamepadKey, class UInputActionDescriptionWidget* ActionDescWidget);
	TArray<class UTexture2D*> GetImagesWithActionNameAndSlot(class FName& ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget);
	TArray<class UTexture2D*> GetImagesWithAction(class UInputAction* InputAction, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget);
	struct FKeyRebindingIcons GetImagesArrayWithActionName(class FName& ActionName, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget);
	void GetAllInputActionMappingInfo(TArray<struct FKeyRebindingSettingsInfo>* OutKeyRebindingSettingsInfo, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget);
};

// 0x58 (0x88 - 0x30)
// Class KeyRebinding.UnAvailableKeysAsset
class UUnAvailableKeysAsset : public UDataAsset
{
public:
	TSet<struct FKey>                            UnAvailableKeySet;                                 // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EInputControlsType                InputControlsType;                                 // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_705[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UnAvailableKeysAsset");

		return Clss;
	}

};

// 0x0 (0x1E0 - 0x1E0)
// Class KeyRebinding.EnhancedInputSubsystemWithKeyRebinding
class UEnhancedInputSubsystemWithKeyRebinding : public UEnhancedInputLocalPlayerSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("EnhancedInputSubsystemWithKeyRebinding");

		return Clss;
	}

	void RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType);
	void RemoveMappingContext(class UInputMappingContext* MappingContext, struct FModifyContextOptions& Options);
	void AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority, struct FModifyContextOptions& Options);
};

// 0x258 (0x280 - 0x28)
// Class KeyRebinding.KeyRebindingMappingDataset
class UKeyRebindingMappingDataset : public UObject
{
public:
	class UKeyRebindingMappingItemsAsset*        DefaultMappingItems;                               // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputActionGroupLocalization*         GroupLocalization;                                 // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UInputMappingContext>   IMCOfChordAction;                                  // 0x38(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUnAvailableKeysAsset*>         UnAvailableKeyAssets;                              // 0x68(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UDataTable*                            BindableTriggersAndModifiers;                      // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FKey, enum class EOverlapKeys>   OverlapKeys;                                       // 0x80(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<enum class ERedirectsPlatform, class FName> LocalSavedFilesNameMap;                            // 0xD0(0x50)(NativeAccessSpecifierPrivate)
	class UKeyRebindingSubsystem*                OwnerSubsystem;                                    // 0x120(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class UInputAction*, struct FKeyRebindingMappingsWithAction> DefaultMappingItemMaps;                            // 0x128(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSet<struct FKey>                            UnAvailableKeys;                                   // 0x178(0x50)(NativeAccessSpecifierPrivate)
	class UCustomKeyRebindingInfo*               CustomKeyRebindingInfo;                            // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FInputActionsWithSameDesc> ActionsWithSameDescMap;                            // 0x1D0(0x50)(NativeAccessSpecifierPrivate)
	TArray<struct FEnhancedActionKeyMapping>     DefaultChordActionMappings;                        // 0x220(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<enum class EOverlapKeys, struct FKey>   OverlapKeysWithDisplay;                            // 0x230(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("KeyRebindingMappingDataset");

		return Clss;
	}

};

// 0xB0 (0xE0 - 0x30)
// Class KeyRebinding.KeyRebindingSubsystem
class UKeyRebindingSubsystem : public ULocalPlayerSubsystem
{
public:
	class UKeyRebindingMappingDataset*           KeyRebindingDataset;                               // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FKeyRebindCallBackDelegateArray> KeyRebindingCallBackMap;                           // 0x38(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, class UInputMappingContext*> KeyRebindingMap;                                   // 0x88(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_790[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("KeyRebindingSubsystem");

		return Clss;
	}

	void UnRegisterCompleteKeyRebindingEvent(class FName ActionName, FDelegateProperty_& KeyRebindingCallBackDelegate);
	bool SetCustomKeyBindingOfAction(class FName ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsUnbindingOperation, struct FInputKeys& InputKeys, bool bIsGamepadKey);
	void SaveCustomRemappingDataset();
	void ResetToDefaultKeyMapping();
	void RegisterCompleteKeyRebindingEvent(class FName ActionName, FDelegateProperty_& KeyRebindingCallBackDelegate);
	struct FInputKeys QueryKeysOfActionAndSlot(class FName& ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsGamepadKey);
	TArray<struct FInputKeys> QueryCustomRemappingKeys(class FName& ActionName, bool bIsGamepadKey);
	struct FKeyRebindingMappingsWithAction GetMappingsWithAction(class FName ActionName);
	TArray<struct FKey> GetAllKeysWithActionBound(bool bIsGamepadKey);
	class FName GetActionNameWithAction(class UInputAction* InputAction);
	bool DoesActionHaveMappingKey(class FName& ActionName, bool bIsGamepadKey);
	void ApplyLoadKeyRebindingSettings();
	void ApplyCustomKeyMapping();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
