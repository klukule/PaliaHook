#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ES6UI_DynamicGridEdge : uint8
{
	Invalid                        = 0,
	First                          = 1,
	Last                           = 2,
	Top_Left                       = 3,
	Top_Right                      = 4,
	Buttom_Left                    = 5,
	Buttom_Right                   = 6,
	ES6UI_MAX                      = 7,
};

enum class ES6UI_NavGroupType : uint8
{
	Explicit                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Grid2D                         = 3,
	ES6UI_MAX                      = 4,
};

enum class ES6UI_ModalWidgetState : uint8
{
	Initial                        = 0,
	Opening                        = 1,
	Opened                         = 2,
	Closing                        = 3,
	Closed                         = 4,
	ES6UI_MAX                      = 5,
};

enum class ES6UI_InputModeType : uint8
{
	UIOnly                         = 0,
	GameOnly                       = 1,
	GameAndUI                      = 2,
	ES6UI_MAX                      = 3,
};

enum class ES6UI_MouseLockMode : uint8
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	LockInFullscreen               = 3,
	ES6UI_MAX                      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x14 - 0x0)
// ScriptStruct S6UICore.S6UI_NavExplicitData
struct FS6UI_NavExplicitData
{
public:
	int32                                        Widget;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LeftWidget;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RightWidget;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpWidget;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DownWidget;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct S6UICore.S6UI_NavigationGroupTranstionData
struct FS6UI_NavigationGroupTranstionData
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1049[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OriginalWidgetID;                                  // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6UI_DynamicGridEdge             OriginDynamicGridEdge;                             // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_104A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class US6UI_CustomNavigationGroup> TargetNavigationGroup;                             // 0x10(0x30)(BlueprintVisible, ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetWidgetID;                                    // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6UI_DynamicGridEdge             TargetDynamicGridEdge;                             // 0x44(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_104C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct S6UICore.S6UI_RegisteredInputActionBinding
struct FS6UI_RegisteredInputActionBinding
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          InputAction;                                       // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerEvent                     TriggerEventType;                                  // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1050[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           DynamicDelegate;                                   // 0x1C(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1052[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct S6UICore.S6UI_RegisteredInputMappingContext
struct FS6UI_RegisteredInputMappingContext
{
public:
	class UInputMappingContext*                  InputMappingContext;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1055[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct S6UICore.S6UI_InputMode
struct FS6UI_InputMode
{
public:
	enum class ES6UI_InputModeType               Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6UI_MouseLockMode               MouseLockMode;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCursorDuringCapture;                          // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCursor;                                       // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockHUDInput;                                    // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105A[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct S6UICore.S6UI_ContextMenu
struct FS6UI_ContextMenu
{
public:
	class UUserWidget*                           MenuContentWidget;                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_105F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// ScriptStruct S6UICore.S6UI_UIManagerCrossPlatformStateTypeItem
struct FS6UI_UIManagerCrossPlatformStateTypeItem
{
public:
	TSoftClassPtr<class US6UI_StateUserWidget>   DefaultRedirectStateType;                          // 0x0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ERedirectsPlatform, TSoftClassPtr<class US6UI_StateUserWidget>> RedirectStateTypes;                                // 0x30(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct S6UICore.S6UI_UIManagerCrossPlatformModalTypeItem
struct FS6UI_UIManagerCrossPlatformModalTypeItem
{
public:
	TSoftClassPtr<class US6UI_ModalWidgetBase>   DefaultRedirectModalType;                          // 0x0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class ERedirectsPlatform, TSoftClassPtr<class US6UI_ModalWidgetBase>> RedirectModalTypes;                                // 0x30(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)
};

}


