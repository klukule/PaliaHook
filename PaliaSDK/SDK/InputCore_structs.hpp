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

enum class ETouchIndex : uint8
{
	ETouchIndex__Touch1            = 0,
	ETouchIndex__Touch2            = 1,
	ETouchIndex__Touch3            = 2,
	ETouchIndex__Touch4            = 3,
	ETouchIndex__Touch5            = 4,
	ETouchIndex__Touch6            = 5,
	ETouchIndex__Touch7            = 6,
	ETouchIndex__Touch8            = 7,
	ETouchIndex__Touch9            = 8,
	ETouchIndex__Touch10           = 9,
	ETouchIndex__CursorPointerIndex = 10,
	ETouchIndex__MAX_TOUCHES       = 11,
	ETouchIndex__ETouchIndex_MAX   = 12,
};

enum class EControllerHand : uint8
{
	EControllerHand__Left          = 0,
	EControllerHand__Right         = 1,
	EControllerHand__AnyHand       = 2,
	EControllerHand__Pad           = 3,
	EControllerHand__ExternalCamera = 4,
	EControllerHand__Gun           = 5,
	EControllerHand__HMD           = 6,
	EControllerHand__Special_1     = 7,
	EControllerHand__Special_2     = 8,
	EControllerHand__Special_3     = 9,
	EControllerHand__Special_4     = 10,
	EControllerHand__Special_5     = 11,
	EControllerHand__Special_6     = 12,
	EControllerHand__Special_7     = 13,
	EControllerHand__Special_8     = 14,
	EControllerHand__Special_9     = 15,
	EControllerHand__Special_10    = 16,
	EControllerHand__Special_11    = 17,
	EControllerHand__ControllerHand_Count = 18,
	EControllerHand__EControllerHand_MAX = 19,
};

enum class EConsoleForGamepadLabels : uint8
{
	EConsoleForGamepadLabels__None = 0,
	EConsoleForGamepadLabels__XBoxOne = 1,
	EConsoleForGamepadLabels__PS4  = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX = 3,
};

enum class ETouchType : uint8
{
	ETouchType__Began              = 0,
	ETouchType__Moved              = 1,
	ETouchType__Stationary         = 2,
	ETouchType__ForceChanged       = 3,
	ETouchType__FirstMove          = 4,
	ETouchType__Ended              = 5,
	ETouchType__NumTypes           = 6,
	ETouchType__ETouchType_MAX     = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct InputCore.Key
struct FKey
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1781[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
