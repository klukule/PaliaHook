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

enum class EInputActionValueType : uint8
{
	EInputActionValueType__Boolean = 0,
	EInputActionValueType__Axis1D  = 1,
	EInputActionValueType__Axis2D  = 2,
	EInputActionValueType__Axis3D  = 3,
	EInputActionValueType__EInputActionValueType_MAX = 4,
};

enum class EMappingQueryResult : uint8
{
	EMappingQueryResult__Error_EnhancedInputNotEnabled = 0,
	EMappingQueryResult__Error_InputContextNotInActiveContexts = 1,
	EMappingQueryResult__Error_InvalidAction = 2,
	EMappingQueryResult__NotMappable = 3,
	EMappingQueryResult__MappingAvailable = 4,
	EMappingQueryResult__EMappingQueryResult_MAX = 5,
};

enum class EMappingQueryIssue : uint8
{
	EMappingQueryIssue__NoIssue    = 0,
	EMappingQueryIssue__ReservedByAction = 1,
	EMappingQueryIssue__HidesExistingMapping = 2,
	EMappingQueryIssue__HiddenByExistingMapping = 4,
	EMappingQueryIssue__CollisionWithMappingInSameContext = 8,
	EMappingQueryIssue__ForcesTypePromotion = 16,
	EMappingQueryIssue__ForcesTypeDemotion = 32,
	EMappingQueryIssue__EMappingQueryIssue_MAX = 33,
};

enum class EInputMappingRebuildType : uint8
{
	EInputMappingRebuildType__None = 0,
	EInputMappingRebuildType__Rebuild = 1,
	EInputMappingRebuildType__RebuildWithFlush = 2,
	EInputMappingRebuildType__EInputMappingRebuildType_MAX = 3,
};

enum class EDeadZoneType : uint8
{
	EDeadZoneType__Axial           = 0,
	EDeadZoneType__Radial          = 1,
	EDeadZoneType__EDeadZoneType_MAX = 2,
};

enum class EFOVScalingType : uint8
{
	EFOVScalingType__Standard      = 0,
	EFOVScalingType__UE4_BackCompat = 1,
	EFOVScalingType__EFOVScalingType_MAX = 2,
};

enum class EInputAxisSwizzle : uint8
{
	EInputAxisSwizzle__YXZ         = 0,
	EInputAxisSwizzle__ZYX         = 1,
	EInputAxisSwizzle__XZY         = 2,
	EInputAxisSwizzle__YZX         = 3,
	EInputAxisSwizzle__ZXY         = 4,
	EInputAxisSwizzle__EInputAxisSwizzle_MAX = 5,
};

enum class ETriggerState : uint8
{
	ETriggerState__None            = 0,
	ETriggerState__Ongoing         = 1,
	ETriggerState__Triggered       = 2,
	ETriggerState__ETriggerState_MAX = 3,
};

enum class ETriggerEvent : uint8
{
	ETriggerEvent__None            = 0,
	ETriggerEvent__Triggered       = 1,
	ETriggerEvent__Started         = 2,
	ETriggerEvent__Ongoing         = 3,
	ETriggerEvent__Canceled        = 4,
	ETriggerEvent__Completed       = 5,
	ETriggerEvent__ETriggerEvent_MAX = 6,
};

enum class ETriggerType : uint8
{
	ETriggerType__Explicit         = 0,
	ETriggerType__Implicit         = 1,
	ETriggerType__Blocker          = 2,
	ETriggerType__ETriggerType_MAX = 3,
};

enum class ETriggerEventsSupported : uint8
{
	ETriggerEventsSupported__None  = 0,
	ETriggerEventsSupported__Instant = 1,
	ETriggerEventsSupported__Uninterruptible = 2,
	ETriggerEventsSupported__Ongoing = 4,
	ETriggerEventsSupported__All   = 7,
	ETriggerEventsSupported__ETriggerEventsSupported_MAX = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct EnhancedInput.InputActionValue
struct FInputActionValue
{
public:
	uint8                                        Pad_A70[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct EnhancedInput.PlayerMappableKeyOptions
struct FPlayerMappableKeyOptions
{
public:
	class UObject*                               MetaData;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  DisplayCategory;                                   // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct EnhancedInput.EnhancedActionKeyMapping
struct FEnhancedActionKeyMapping
{
public:
	struct FPlayerMappableKeyOptions             PlayerMappableOptions;                             // 0x0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x40(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	class UInputAction*                          Action;                                            // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  Key;                                               // 0x68(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPlayerMappable : 1;                             // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShouldBeIgnored : 1;                              // Mask: 0x2, PropSize: 0x10x80(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A92[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.MappingQueryIssue
struct FMappingQueryIssue
{
public:
	enum class EMappingQueryIssue                Issue;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A96[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputMappingContext*                  BlockingContext;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          BlockingAction;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EnhancedInput.BlueprintEnhancedInputActionBinding
struct FBlueprintEnhancedInputActionBinding
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct EnhancedInput.ModifyContextOptions
struct FModifyContextOptions
{
public:
	uint8                                        bIgnoreAllPressedKeysUntilRelease : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceImmediately : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InjectedInputArray
struct FInjectedInputArray
{
public:
	uint8                                        Pad_A9E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct EnhancedInput.InputActionInstance
struct FInputActionInstance
{
public:
	class UInputAction*                          SourceAction;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_AA0[0xB];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETriggerEvent                     TriggerEvent;                                      // 0x13(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LastTriggeredWorldTime;                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInputTrigger*>                 Triggers;                                          // 0x18(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UInputModifier*>                Modifiers;                                         // 0x28(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_AA2[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedProcessedTime;                              // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ElapsedTriggeredTime;                              // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EnhancedInput.BlueprintInputDebugKeyDelegateBinding
struct FBlueprintInputDebugKeyDelegateBinding
{
public:
	struct FInputChord                           InputChord;                                        // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputEvent                       InputKeyEvent;                                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AA9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  FunctionNameToBind;                                // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExecuteWhenPaused;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAA[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EnhancedInput.InputComboStepData
struct FInputComboStepData
{
public:
	class UInputAction*                          ComboStepAction;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeToPressKey;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
