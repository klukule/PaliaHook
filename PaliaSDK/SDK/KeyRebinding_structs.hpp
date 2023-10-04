#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EKeyRebindingResultType : uint8
{
	Default                        = 0,
	Successed_Rebound              = 1,
	Success_ConflictResolved       = 2,
	Success_Unbound                = 3,
	Fail_UnavailableKey            = 4,
	Fail_UnboundCoreAction         = 5,
	Fail_InvalidAction             = 6,
	Fail_ConflictCannotRebind      = 7,
	EKeyRebindingResultType_MAX    = 8,
};

enum class EInputControlsType : uint8
{
	KeyBoard_Mouse                 = 0,
	Gamepad                        = 1,
	EInputControlsType_MAX         = 2,
};

enum class EOverlapKeys : uint8
{
	SHIFT                          = 0,
	CTRL                           = 1,
	ALT                            = 2,
	OtherKey                       = 3,
	EOverlapKeys_MAX               = 4,
};

enum class EKeyRebindingSlot : uint8
{
	InValid                        = 0,
	First                          = 1,
	Second                         = 2,
	EKeyRebindingSlot_MAX          = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.KeyRebindingResultInfo
struct FKeyRebindingResultInfo
{
public:
	class FName                                  RemappingActionName;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ConflictActionName;                                // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct KeyRebinding.InputKeys
struct FInputKeys
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ChordKey;                                          // 0x18(0x18)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.InputKeysWithMappings
struct FInputKeysWithMappings
{
public:
	TArray<struct FInputKeys>                    KeysArray;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct KeyRebinding.KeyRebindingMappingItem
struct FKeyRebindingMappingItem
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, SaveGame, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, SaveGame, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct KeyRebinding.KeyRebindingMappingsWithAction
struct FKeyRebindingMappingsWithAction
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActionName;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GroupID;                                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeRebind;                                      // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeUnbound;                                     // 0x15(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUnbound;                                          // 0x16(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_835[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKeyRebindingMappingItem>      MappingItems;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, SaveGame, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct KeyRebinding.ActionInfoWithMappingItem
struct FActionInfoWithMappingItem
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChordActionIndex;                                  // 0x4(0x4)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TriggersType;                                      // 0x8(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
	TArray<class FString>                        ModifiersType;                                     // 0x18(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.ActionInfoWithAction
struct FActionInfoWithAction
{
public:
	TArray<struct FActionInfoWithMappingItem>    ActionInfoWithItems;                               // 0x0(0x10)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct KeyRebinding.KeyDescriptionImageMappingDataSet
struct FKeyDescriptionImageMappingDataSet : public FTableRowBase
{
public:
	class UTexture2D*                            Icon;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct KeyRebinding.KeyRebindingIcons
struct FKeyRebindingIcons
{
public:
	TArray<class UTexture2D*>                    PrimaryIcons;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    SecondaryIcons;                                    // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct KeyRebinding.LocalizationOfActions
struct FLocalizationOfActions
{
public:
	TArray<class UInputAction*>                  Actions;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class FText                                  ActionLocalization;                                // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.InputKeysImages
struct FInputKeysImages
{
public:
	TArray<class UTexture2D*>                    Images;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.MulticastRefreshKeys
struct FMulticastRefreshKeys
{
public:
	TArray<FDelegateProperty_>                   DelegateArray;                                     // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.InputActionsWithSameDesc
struct FInputActionsWithSameDesc
{
public:
	uint8                                        Pad_842[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.InputTriggerTypes
struct FInputTriggerTypes
{
public:
	TArray<TSubclassOf<class UInputTrigger>>     TriggerClassArray;                                 // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.InputModifierTypes
struct FInputModifierTypes
{
public:
	TArray<TSubclassOf<class UInputModifier>>    ModifierClassArray;                                // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct KeyRebinding.BindableTriggersAndModifiers
struct FBindableTriggersAndModifiers : public FTableRowBase
{
public:
	struct FInputTriggerTypes                    TriggerClassTypes;                                 // 0x8(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FInputModifierTypes                   ModifierClassTypes;                                // 0x18(0x10)(Edit, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct KeyRebinding.KeyRebindingSettingsInfo
struct FKeyRebindingSettingsInfo
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InputActionDescription;                            // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	bool                                         bIsCoreAction;                                     // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_844[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GroupID;                                           // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  GroupDescription;                                  // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FInputKeys>                    DefaultKeysWithAction;                             // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    FirstKeyTextures;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    SecondKeyTextures;                                 // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	FDelegateProperty_                           KeyRebindingCallBackDelegate;                      // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


