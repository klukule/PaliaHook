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

enum class EInAppPurchaseState : uint8
{
	EInAppPurchaseState__Unknown   = 0,
	EInAppPurchaseState__Success   = 1,
	EInAppPurchaseState__Failed    = 2,
	EInAppPurchaseState__Cancelled = 3,
	EInAppPurchaseState__Invalid   = 4,
	EInAppPurchaseState__NotAllowed = 5,
	EInAppPurchaseState__Restored  = 6,
	EInAppPurchaseState__AlreadyOwned = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 8,
};

enum class EMPMatchOutcome : uint8
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystem.NamedInterface
struct FNamedInterface
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               InterfaceObject;                                   // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystem.NamedInterfaceDef
struct FNamedInterfaceDef
{
public:
	class FName                                  InterfaceName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InterfaceClassName;                                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
