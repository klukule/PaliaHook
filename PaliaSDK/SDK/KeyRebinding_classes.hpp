#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UAvailableKeysAsset* GetDefaultObj();

};

// 0x70 (0x2E8 - 0x278)
// Class KeyRebinding.BindingKeyListenerWidget
class UBindingKeyListenerWidget : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnAnyKeyTriggered;                                 // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B61[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBindingKeyListenerWidget* GetDefaultObj();

	void OnDeactivated();
	void OnActivated();
	struct FInputKeys GetPlayerInputKey();
};

// 0x20 (0x298 - 0x278)
// Class KeyRebinding.CommonInputActionWidget
class UCommonInputActionWidget : public UUserWidget
{
public:
	class UImage*                                ChordKeyIcon;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPanelWidget*                          ChordKeyPanel;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                MainKeyIcon;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UInputAction*                          InputAction;                                       // 0x290(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCommonInputActionWidget* GetDefaultObj();

	void SetEnhancedInputAction(class UInputAction* InInputAction);
	void K2_UpdateActionWidget(enum class ECommonInputType InInputType);
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

	static class UClass* StaticClass();
	static class UCustomKeyRebindingInfo* GetDefaultObj();

};

// 0x8 (0x748 - 0x740)
// Class KeyRebinding.EnhancedPlayerInputWithKeyRebind
class UEnhancedPlayerInputWithKeyRebind : public UEnhancedPlayerInput
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x740(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B7C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedPlayerInputWithKeyRebind* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class KeyRebinding.IARichTextBlockImageDecorator
class UIARichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:

	static class UClass* StaticClass();
	static class UIARichTextBlockImageDecorator* GetDefaultObj();

};

// 0x50 (0x2C8 - 0x278)
// Class KeyRebinding.InputActionDescriptionWidget
class UInputActionDescriptionWidget : public UUserWidget
{
public:
	TMap<enum class ERedirectsPlatform, class UDataTable*> AllPlatformIconTables;                             // 0x278(0x50)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInputActionDescriptionWidget* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class KeyRebinding.InputActionGroupLocalization
class UInputActionGroupLocalization : public UDataAsset
{
public:
	TMap<int32, class FText>                     GroupNameMap;                                      // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputActionGroupLocalization* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class KeyRebinding.InputActionLocalization
class UInputActionLocalization : public UDataAsset
{
public:
	TMap<class FName, struct FLocalizationOfActions> ActionNameMap;                                     // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInputActionLocalization* GetDefaultObj();

};

// 0x68 (0xA0 - 0x38)
// Class KeyRebinding.KeyRebindingDatasetSettings
class UKeyRebindingDatasetSettings : public UDeveloperSettings
{
public:
	TMap<enum class ERedirectsPlatform, TSubclassOf<class UKeyRebindingMappingDataset>> KeyRebindingDatasetOfAllPlatform;                  // 0x38(0x50)(Edit, Config, NoClear, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        TipDelayTime;                                      // 0x88(0x4)(Edit, ZeroConstructor, Config, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIARichTextBlockBrushConfiguration> IARichTextBlockBrushConfigurations;                // 0x90(0x10)(Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKeyRebindingDatasetSettings* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class KeyRebinding.KeyRebindingMappingItemsAsset
class UKeyRebindingMappingItemsAsset : public UDataAsset
{
public:
	TArray<struct FKeyRebindingMappingsWithAction> KeyRebindingMappings;                              // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSet<class UInputMappingContext*>            IgnoreIMCs;                                        // 0x40(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKeyRebindingMappingItemsAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class KeyRebinding.KeyRebindingToolsLibrary
class UKeyRebindingToolsLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKeyRebindingToolsLibrary* GetDefaultObj();

	float GetPromptDelayTime();
	void GetKeyIcons(class UObject* WorldContextObject, const struct FInputKeys& InputKeys, enum class ECommonInputType InputType, struct FSlateBrush* OutMainKeyBrush, struct FSlateBrush* OutChordKeyBrush);
	class FString GetKeyFName(struct FKey& InKey);
	TArray<class UTexture2D*> GetImagesWithInputKeys(const struct FInputKeys& InputKeys, class UInputActionDescriptionWidget* ActionDescWidget);
	struct FKeyRebindingIcons GetImagesArrayWithActionName(class FName& ActionName, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget, bool bIsLockedCurrentInput);
	void GetIconForEnhancedInputAction(class UObject* WorldContextObject, class UInputAction* InputAction, enum class ECommonInputType InputType, struct FSlateBrush* OutMainKeyBrush, struct FSlateBrush* OutChordKeyBrush);
	void GetAllInputActionMappingInfo(TArray<struct FKeyRebindingSettingsInfo>* OutKeyRebindingSettingsInfo, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget, bool bIsLockedCurrentInput);
	TArray<struct FInputKeysImages> GetAllImagesWithAction(class UInputAction* InputAction, class UEnhancedInputSubsystemWithKeyRebinding* EnhancedInputSubsystem, class UInputActionDescriptionWidget* ActionDescWidget, bool bIsGamepadKey, bool bIsLockedCurrentInput);
};

// 0x58 (0x88 - 0x30)
// Class KeyRebinding.UnAvailableKeysAsset
class UUnAvailableKeysAsset : public UDataAsset
{
public:
	TSet<struct FKey>                            UnAvailableKeySet;                                 // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class EInputControlsType                InputControlsType;                                 // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUnAvailableKeysAsset* GetDefaultObj();

};

// 0x100 (0x2E8 - 0x1E8)
// Class KeyRebinding.EnhancedInputSubsystemWithKeyRebinding
class UEnhancedInputSubsystemWithKeyRebinding : public UEnhancedInputLocalPlayerSubsystem
{
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> ContextRedirects;                                  // 0x1E8(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_C91[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UInputAction*, struct FMulticastRefreshKeys> RefreshKeysCallBackMap;                            // 0x240(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TSet<class UInputMappingContext*>            AppliedIMC;                                        // 0x290(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_C92[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnhancedInputSubsystemWithKeyRebinding* GetDefaultObj();

	void UnRegisterDelegateToRefreshKeys(class UInputAction* InputAction, FDelegateProperty_& RefreshKeysDelegate);
	void RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType);
	void RemoveMappingContext(class UInputMappingContext* MappingContext, struct FModifyContextOptions& Options);
	void RegisterDelegateToRefreshKeys(class UInputAction* InputAction, FDelegateProperty_& RefreshKeysDelegate);
	TArray<struct FInputKeys> GetKeysForInputAction(class UInputAction* InputAction, bool bIsGamepadKey, bool bIsLockedCurrentInput);
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

	static class UClass* StaticClass();
	static class UKeyRebindingMappingDataset* GetDefaultObj();

};

// 0xB0 (0xE0 - 0x30)
// Class KeyRebinding.KeyRebindingSubsystem
class UKeyRebindingSubsystem : public ULocalPlayerSubsystem
{
public:
	class UKeyRebindingMappingDataset*           KeyRebindingDataset;                               // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, FDelegateProperty_>        KeyRebindingCallBackMap;                           // 0x38(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, class UInputMappingContext*> KeyRebindingMap;                                   // 0x88(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D12[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKeyRebindingSubsystem* GetDefaultObj();

	void UnRegisterCompleteKeyRebindingEvent(class FName ActionName, FDelegateProperty_& KeyRebindingCallBackDelegate);
	bool SetCustomKeyBindingOfAction(class FName ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsUnbindingOperation, struct FInputKeys& InputKeys, bool bIsGamepadKey);
	void SaveCustomRemappingDataset();
	void ResetToDefaultKeyMapping();
	void RegisterCompleteKeyRebindingEvent(class FName ActionName, FDelegateProperty_& KeyRebindingCallBackDelegate);
	struct FInputKeys QueryKeysOfActionAndSlot(class FName& ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsGamepadKey, bool bIsLockedCurrentInput);
	TArray<struct FInputKeys> QueryCustomRemappingKeys(class FName& ActionName, bool bIsGamepadKey, bool bIsLockedCurrentInput);
	TArray<struct FKey> GetAllKeysWithActionBound(bool bIsGamepadKey, bool bIsLockedCurrentInput);
	void ApplyLoadKeyRebindingSettings();
	void ApplyCustomKeyMapping();
};

}


