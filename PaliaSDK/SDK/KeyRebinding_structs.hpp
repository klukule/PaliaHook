#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EKeyRebindingResultType : uint8
{
	EKeyRebindingResultType__Default = 0,
	EKeyRebindingResultType__Successed_Rebound = 1,
	EKeyRebindingResultType__Success_ConflictResolved = 2,
	EKeyRebindingResultType__Success_Unbound = 3,
	EKeyRebindingResultType__Fail_UnavailableKey = 4,
	EKeyRebindingResultType__Fail_UnboundCoreAction = 5,
	EKeyRebindingResultType__Fail_InvalidAction = 6,
	EKeyRebindingResultType__Fail_ConflictCannotRebind = 7,
	EKeyRebindingResultType__EKeyRebindingResultType_MAX = 8,
};

enum class EPlatform : uint8
{
	EPlatform__Default             = 0,
	EPlatform__PC                  = 1,
	EPlatform__PS4                 = 2,
	EPlatform__PS5                 = 3,
	EPlatform__Switch              = 4,
	EPlatform__Xbox                = 5,
	EPlatform__Mobile              = 6,
	EPlatform__EPlatform_MAX       = 7,
};

enum class EInputControlsType : uint8
{
	EInputControlsType__KeyBoard_Mouse = 0,
	EInputControlsType__Gamepad    = 1,
	EInputControlsType__EInputControlsType_MAX = 2,
};

enum class EOverlapKeys : uint8
{
	EOverlapKeys__SHIFT            = 0,
	EOverlapKeys__CTRL             = 1,
	EOverlapKeys__ALT              = 2,
	EOverlapKeys__OtherKey         = 3,
	EOverlapKeys__EOverlapKeys_MAX = 4,
};

enum class EKeyRebindingSlot : uint8
{
	EKeyRebindingSlot__InValid     = 0,
	EKeyRebindingSlot__First       = 1,
	EKeyRebindingSlot__Second      = 2,
	EKeyRebindingSlot__EKeyRebindingSlot_MAX = 3,
};

enum class EEnableKeyRebind : uint8
{
	EEnableKeyRebind__Disable      = 0,
	EEnableKeyRebind__Enable       = 1,
	EEnableKeyRebind__EEnableKeyRebind_MAX = 2,
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
	uint8                                        Pad_833[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
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
// ScriptStruct KeyRebinding.InputActionsWithSameDesc
struct FInputActionsWithSameDesc
{
public:
	uint8                                        Pad_839[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
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

// 0x10 (0x10 - 0x0)
// ScriptStruct KeyRebinding.KeyRebindCallBackDelegateArray
struct FKeyRebindCallBackDelegateArray
{
public:
	TArray<FDelegateProperty_>                   KeyRebindDelegatesOfAction;                        // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct KeyRebinding.KeyRebindingSettingsInfo
struct FKeyRebindingSettingsInfo
{
public:
	class FName                                  InputActionName;                                   // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  InputActionDescription;                            // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	bool                                         bIsCoreAction;                                     // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_843[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GroupID;                                           // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  GroupDescription;                                  // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FInputKeys>                    DefaultKeysWithAction;                             // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    FirstKeyTextures;                                  // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    SecondKeyTextures;                                 // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic)
	FDelegateProperty_                           KeyRebindingCallBackDelegate;                      // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
