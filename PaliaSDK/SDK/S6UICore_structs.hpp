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

enum class ES6UI_DynamicGridEdge : uint8
{
	ES6UI_DynamicGridEdge__Invalid = 0,
	ES6UI_DynamicGridEdge__First   = 1,
	ES6UI_DynamicGridEdge__Last    = 2,
	ES6UI_DynamicGridEdge__Top_Left = 3,
	ES6UI_DynamicGridEdge__Top_Right = 4,
	ES6UI_DynamicGridEdge__Buttom_Left = 5,
	ES6UI_DynamicGridEdge__Buttom_Right = 6,
	ES6UI_DynamicGridEdge__ES6UI_MAX = 7,
};

enum class ES6UI_NavGroupType : uint8
{
	ES6UI_NavGroupType__Explicit   = 0,
	ES6UI_NavGroupType__Horizontal = 1,
	ES6UI_NavGroupType__Vertical   = 2,
	ES6UI_NavGroupType__Grid2D     = 3,
	ES6UI_NavGroupType__ES6UI_MAX  = 4,
};

enum class ES6UI_ModalWidgetState : uint8
{
	ES6UI_ModalWidgetState__Initial = 0,
	ES6UI_ModalWidgetState__Opening = 1,
	ES6UI_ModalWidgetState__Opened = 2,
	ES6UI_ModalWidgetState__Closing = 3,
	ES6UI_ModalWidgetState__Closed = 4,
	ES6UI_ModalWidgetState__ES6UI_MAX = 5,
};

enum class ES6UI_InputModeType : uint8
{
	ES6UI_InputModeType__UIOnly    = 0,
	ES6UI_InputModeType__GameOnly  = 1,
	ES6UI_InputModeType__GameAndUI = 2,
	ES6UI_InputModeType__ES6UI_MAX = 3,
};

enum class ES6UI_MouseLockMode : uint8
{
	ES6UI_MouseLockMode__DoNotLock = 0,
	ES6UI_MouseLockMode__LockOnCapture = 1,
	ES6UI_MouseLockMode__LockAlways = 2,
	ES6UI_MouseLockMode__LockInFullscreen = 3,
	ES6UI_MouseLockMode__ES6UI_MAX = 4,
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
	uint8                                        Pad_A67[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        OriginalWidgetID;                                  // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6UI_DynamicGridEdge             OriginDynamicGridEdge;                             // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class US6UI_CustomNavigationGroup> TargetNavigationGroup;                             // 0x10(0x30)(BlueprintVisible, ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetWidgetID;                                    // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6UI_DynamicGridEdge             TargetDynamicGridEdge;                             // 0x44(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct S6UICore.S6UI_RegisteredInputActionBinding
struct FS6UI_RegisteredInputActionBinding
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          InputAction;                                       // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerEvent                     TriggerEventType;                                  // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           DynamicDelegate;                                   // 0x1C(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct S6UICore.S6UI_RegisteredInputMappingContext
struct FS6UI_RegisteredInputMappingContext
{
public:
	class UInputMappingContext*                  InputMappingContext;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A80[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
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
	uint8                                        Pad_A8B[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct S6UICore.S6UI_ContextMenu
struct FS6UI_ContextMenu
{
public:
	class UUserWidget*                           MenuContentWidget;                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A8F[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
