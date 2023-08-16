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

enum class ECommonNumericType : uint8
{
	ECommonNumericType__Number     = 0,
	ECommonNumericType__Percentage = 1,
	ECommonNumericType__Seconds    = 2,
	ECommonNumericType__Distance   = 3,
	ECommonNumericType__ECommonNumericType_MAX = 4,
};

enum class ERichTextInlineIconDisplayMode : uint8
{
	ERichTextInlineIconDisplayMode__IconOnly = 0,
	ERichTextInlineIconDisplayMode__TextOnly = 1,
	ERichTextInlineIconDisplayMode__IconAndText = 2,
	ERichTextInlineIconDisplayMode__MAX = 3,
};

enum class EInputActionState : uint8
{
	EInputActionState__Enabled     = 0,
	EInputActionState__Disabled    = 1,
	EInputActionState__Hidden      = 2,
	EInputActionState__HiddenAndDisabled = 3,
	EInputActionState__EInputActionState_MAX = 4,
};

enum class ECommonSwitcherTransition : uint8
{
	ECommonSwitcherTransition__FadeOnly = 0,
	ECommonSwitcherTransition__Horizontal = 1,
	ECommonSwitcherTransition__Vertical = 2,
	ECommonSwitcherTransition__Zoom = 3,
	ECommonSwitcherTransition__ECommonSwitcherTransition_MAX = 4,
};

enum class ETransitionCurve : uint8
{
	ETransitionCurve__Linear       = 0,
	ETransitionCurve__QuadIn       = 1,
	ETransitionCurve__QuadOut      = 2,
	ETransitionCurve__QuadInOut    = 3,
	ETransitionCurve__CubicIn      = 4,
	ETransitionCurve__CubicOut     = 5,
	ETransitionCurve__CubicInOut   = 6,
	ETransitionCurve__ETransitionCurve_MAX = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct CommonUI.CommonNumberFormattingOptions
struct FCommonNumberFormattingOptions
{
public:
	enum class ERoundingMode                     RoundingMode;                                      // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseGrouping;                                       // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1228[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumIntegralDigits;                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumIntegralDigits;                             // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumFractionalDigits;                           // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumFractionalDigits;                           // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonUI.CommonRegisteredTabInfo
struct FCommonRegisteredTabInfo
{
public:
	int32                                        TabIndex;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ContentInstance;                                   // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct CommonUI.UITag
struct FUITag : public FGameplayTag
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct CommonUI.UIActionTag
struct FUIActionTag : public FUITag
{
public:
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonUI.CommonInputActionHandlerData
struct FCommonInputActionHandlerData
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputActionState                 State;                                             // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1232[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonUI.CommonButtonStyleOptionalSlateSound
struct FCommonButtonStyleOptionalSlateSound
{
public:
	bool                                         bHasSound;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1235[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateSound                           Sound;                                             // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct CommonUI.RichTextIconData
struct FRichTextIconData : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                ResourceObject;                                    // 0x20(0x30)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ImageSize;                                         // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct CommonUI.CommonInputTypeInfo
struct FCommonInputTypeInfo
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EInputActionState                 OverrrideState;                                    // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActionRequiresHold;                               // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_123E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HoldTime;                                          // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OverrideBrush;                                     // 0x20(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0x358 (0x360 - 0x8)
// ScriptStruct CommonUI.CommonInputActionDataBase
struct FCommonInputActionDataBase : public FTableRowBase
{
public:
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  HoldDisplayName;                                   // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        NavBarPriority;                                    // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1242[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCommonInputTypeInfo                  KeyboardInputTypeInfo;                             // 0x40(0xF0)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FCommonInputTypeInfo                  DefaultGamepadInputTypeInfo;                       // 0x130(0xF0)(Edit, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FCommonInputTypeInfo> GamepadInputOverrides;                             // 0x220(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FCommonInputTypeInfo                  TouchInputTypeInfo;                                // 0x270(0xF0)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CommonUI.UIActionKeyMapping
struct FUIActionKeyMapping
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldTime;                                          // 0x18(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1247[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CommonUI.UIInputAction
struct FUIInputAction
{
public:
	struct FUIActionTag                          ActionTag;                                         // 0x0(0x8)(Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DefaultDisplayName;                                // 0x8(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FUIActionKeyMapping>           KeyMappings;                                       // 0x20(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct CommonUI.CommonAnalogCursorSettings
struct FCommonAnalogCursorSettings
{
public:
	int32                                        PreprocessorPriority;                              // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCursorAcceleration;                         // 0x4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CursorAcceleration;                                // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CursorMaxSpeed;                                    // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CursorDeadZone;                                    // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoverSlowdownFactor;                               // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrollDeadZone;                                    // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrollUpdatePeriod;                                // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScrollMultiplier;                                  // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
