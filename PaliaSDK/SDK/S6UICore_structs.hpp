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

enum class ES6UI_ModalWidgetState : uint8
{
	ES6UI_ModalWidgetState__Initial = 0,
	ES6UI_ModalWidgetState__Opening = 1,
	ES6UI_ModalWidgetState__Opened = 2,
	ES6UI_ModalWidgetState__Closing = 3,
	ES6UI_ModalWidgetState__Closed = 4,
	ES6UI_ModalWidgetState__ES6UI_MAX = 5,
};

enum class EStateWidgetType : uint8
{
	EStateWidgetType__Invalid      = 0,
	EStateWidgetType__MainWidget   = 1,
	EStateWidgetType__MenuHub      = 2,
	EStateWidgetType__EStateWidgetType_MAX = 3,
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

// 0x30 (0x30 - 0x0)
// ScriptStruct S6UICore.S6UI_RegisteredInputActionBinding
struct FS6UI_RegisteredInputActionBinding
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          InputAction;                                       // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerEvent                     TriggerEventType;                                  // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           DynamicDelegate;                                   // 0x1C(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C10[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct S6UICore.S6UI_RegisteredInputMappingContext
struct FS6UI_RegisteredInputMappingContext
{
public:
	class UInputMappingContext*                  InputMappingContext;                               // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C14[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct S6UICore.WidgetPlatformRowConfig
struct FWidgetPlatformRowConfig : public FTableRowBase
{
public:
	TSubclassOf<class UUserWidget>               StateWidget;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	uint8                                        Pad_C2F[0xB];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct S6UICore.S6UI_ContextMenu
struct FS6UI_ContextMenu
{
public:
	class UUserWidget*                           MenuContentWidget;                                 // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C34[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
