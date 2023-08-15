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

enum class ETextJustify : uint8
{
	ETextJustify__Left             = 0,
	ETextJustify__Center           = 1,
	ETextJustify__Right            = 2,
	ETextJustify__ETextJustify_MAX = 3,
};

enum class ETextFlowDirection : uint8
{
	ETextFlowDirection__Auto       = 0,
	ETextFlowDirection__LeftToRight = 1,
	ETextFlowDirection__RightToLeft = 2,
	ETextFlowDirection__ETextFlowDirection_MAX = 3,
};

enum class EVirtualKeyboardDismissAction : uint8
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX = 3,
};

enum class EVirtualKeyboardTrigger : uint8
{
	EVirtualKeyboardTrigger__OnFocusByPointer = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger__EVirtualKeyboardTrigger_MAX = 2,
};

enum class ETextWrappingPolicy : uint8
{
	ETextWrappingPolicy__DefaultWrapping = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX = 2,
};

enum class ESelectionMode : uint8
{
	ESelectionMode__None           = 0,
	ESelectionMode__Single         = 1,
	ESelectionMode__SingleToggle   = 2,
	ESelectionMode__Multi          = 3,
	ESelectionMode__ESelectionMode_MAX = 4,
};

enum class ETableViewMode : uint8
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tile           = 1,
	ETableViewMode__Tree           = 2,
	ETableViewMode__ETableViewMode_MAX = 3,
};

enum class EMultiBoxType : uint8
{
	EMultiBoxType__MenuBar         = 0,
	EMultiBoxType__ToolBar         = 1,
	EMultiBoxType__VerticalToolBar = 2,
	EMultiBoxType__SlimHorizontalToolBar = 3,
	EMultiBoxType__UniformToolBar  = 4,
	EMultiBoxType__Menu            = 5,
	EMultiBoxType__ButtonRow       = 6,
	EMultiBoxType__EMultiBoxType_MAX = 7,
};

enum class EMultiBlockType : uint8
{
	EMultiBlockType__None          = 0,
	EMultiBlockType__ButtonRow     = 1,
	EMultiBlockType__EditableText  = 2,
	EMultiBlockType__Heading       = 3,
	EMultiBlockType__MenuEntry     = 4,
	EMultiBlockType__Separator     = 5,
	EMultiBlockType__ToolBarButton = 6,
	EMultiBlockType__ToolBarComboButton = 7,
	EMultiBlockType__Widget        = 8,
	EMultiBlockType__EMultiBlockType_MAX = 9,
};

enum class EDescendantScrollDestination : uint8
{
	EDescendantScrollDestination__IntoView = 0,
	EDescendantScrollDestination__TopOrLeft = 1,
	EDescendantScrollDestination__Center = 2,
	EDescendantScrollDestination__BottomOrRight = 3,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX = 4,
};

enum class EScrollWhenFocusChanges : uint8
{
	EScrollWhenFocusChanges__NoScroll = 0,
	EScrollWhenFocusChanges__InstantScroll = 1,
	EScrollWhenFocusChanges__AnimatedScroll = 2,
	EScrollWhenFocusChanges__EScrollWhenFocusChanges_MAX = 3,
};

enum class ECustomizedToolMenuVisibility : int32
{
	ECustomizedToolMenuVisibility__None = 0,
	ECustomizedToolMenuVisibility__Visible = 1,
	ECustomizedToolMenuVisibility__Hidden = 2,
	ECustomizedToolMenuVisibility__ECustomizedToolMenuVisibility_MAX = 3,
};

enum class EUserInterfaceActionType : uint8
{
	EUserInterfaceActionType__None = 0,
	EUserInterfaceActionType__Button = 1,
	EUserInterfaceActionType__ToggleButton = 2,
	EUserInterfaceActionType__RadioButton = 3,
	EUserInterfaceActionType__Check = 4,
	EUserInterfaceActionType__CollapsedButton = 5,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX = 6,
};

enum class EMultipleKeyBindingIndex : uint8
{
	EMultipleKeyBindingIndex__Primary = 0,
	EMultipleKeyBindingIndex__Secondary = 1,
	EMultipleKeyBindingIndex__NumChords = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX = 3,
};

enum class EStretchDirection : uint8
{
	EStretchDirection__Both        = 0,
	EStretchDirection__DownOnly    = 1,
	EStretchDirection__UpOnly      = 2,
	EStretchDirection__EStretchDirection_MAX = 3,
};

enum class EStretch : uint8
{
	EStretch__None                 = 0,
	EStretch__Fill                 = 1,
	EStretch__ScaleToFit           = 2,
	EStretch__ScaleToFitX          = 3,
	EStretch__ScaleToFitY          = 4,
	EStretch__ScaleToFill          = 5,
	EStretch__ScaleBySafeZone      = 6,
	EStretch__UserSpecified        = 7,
	EStretch__UserSpecifiedWithClipping = 8,
	EStretch__EStretch_MAX         = 9,
};

enum class EProgressBarFillType : uint8
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__RightToLeft = 1,
	EProgressBarFillType__FillFromCenter = 2,
	EProgressBarFillType__FillFromCenterHorizontal = 3,
	EProgressBarFillType__FillFromCenterVertical = 4,
	EProgressBarFillType__TopToBottom = 5,
	EProgressBarFillType__BottomToTop = 6,
	EProgressBarFillType__EProgressBarFillType_MAX = 7,
};

enum class EProgressBarFillStyle : uint8
{
	EProgressBarFillStyle__Mask    = 0,
	EProgressBarFillStyle__Scale   = 1,
	EProgressBarFillStyle__EProgressBarFillStyle_MAX = 2,
};

enum class EListItemAlignment : uint8
{
	EListItemAlignment__EvenlyDistributed = 0,
	EListItemAlignment__EvenlySize = 1,
	EListItemAlignment__EvenlyWide = 2,
	EListItemAlignment__LeftAligned = 3,
	EListItemAlignment__RightAligned = 4,
	EListItemAlignment__CenterAligned = 5,
	EListItemAlignment__Fill       = 6,
	EListItemAlignment__EListItemAlignment_MAX = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct Slate.VirtualKeyboardOptions
struct FVirtualKeyboardOptions
{
public:
	bool                                         bEnableAutocorrect;                                // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Slate.InputChord
struct FInputChord
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShift : 1;                                        // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCtrl : 1;                                         // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlt : 1;                                          // Mask: 0x4, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCmd : 1;                                          // Mask: 0x8, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Slate.Anchors
struct FAnchors
{
public:
	struct FVector2D                             Minimum;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Maximum;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Slate.CustomizedToolMenuEntry
struct FCustomizedToolMenuEntry
{
public:
	enum class ECustomizedToolMenuVisibility     Visibility;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Slate.CustomizedToolMenuSection
struct FCustomizedToolMenuSection
{
public:
	enum class ECustomizedToolMenuVisibility     Visibility;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Slate.CustomizedToolMenuNameArray
struct FCustomizedToolMenuNameArray
{
public:
	TArray<class FName>                          Names;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x1F0 - 0x0)
// ScriptStruct Slate.CustomizedToolMenu
struct FCustomizedToolMenu
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FCustomizedToolMenuEntry> Entries;                                           // 0x8(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FCustomizedToolMenuSection> Sections;                                          // 0x58(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FCustomizedToolMenuNameArray> EntryOrder;                                        // 0xA8(0x50)(NativeAccessSpecifierPublic)
	TArray<class FName>                          SectionOrder;                                      // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C2[0xE8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
