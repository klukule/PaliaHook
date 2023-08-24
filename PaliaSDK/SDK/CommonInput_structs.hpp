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

enum class ECommonInputType : uint8
{
	ECommonInputType__MouseAndKeyboard = 0,
	ECommonInputType__Gamepad      = 1,
	ECommonInputType__Touch        = 2,
	ECommonInputType__Count        = 3,
	ECommonInputType__ECommonInputType_MAX = 4,
};

enum class ECommonInputMode : uint8
{
	ECommonInputMode__Menu         = 0,
	ECommonInputMode__Game         = 1,
	ECommonInputMode__All          = 2,
	ECommonInputMode__MAX          = 3,
};

enum class ECommonInputEventFlowBehavior : int32
{
	ECommonInputEventFlowBehavior__BlockIfActive = 0,
	ECommonInputEventFlowBehavior__BlockIfHandled = 1,
	ECommonInputEventFlowBehavior__NeverBlock = 2,
	ECommonInputEventFlowBehavior__ECommonInputEventFlowBehavior_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0xF0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
struct FCommonInputKeyBrushConfiguration
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           KeyBrush;                                          // 0x20(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
struct FCommonInputKeySetBrushConfiguration
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyBrush;                                          // 0x10(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonInput.InputDeviceIdentifierPair
struct FInputDeviceIdentifierPair
{
public:
	class FName                                  InputDeviceName;                                   // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HardwareDeviceIdentifier;                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CommonInput.CommonInputPlatformBaseData
struct FCommonInputPlatformBaseData
{
public:
	uint8                                        Pad_13A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECommonInputType                  DefaultInputType;                                  // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMouseAndKeyboard;                         // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsGamepad;                                  // 0xA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13AA[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DefaultGamepadName;                                // 0xC(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanChangeGamepadType;                             // 0x14(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTouch;                                    // 0x15(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13AC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftClassPtr<class UCommonInputBaseControllerData>> ControllerData;                                    // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;                             // 0x28(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
