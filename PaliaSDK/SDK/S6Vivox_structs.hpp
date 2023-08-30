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

enum class ES6Vivox_LoginOperationState : uint8
{
	ES6Vivox_LoginOperationState__LoggingIn = 0,
	ES6Vivox_LoginOperationState__LoggedIn = 1,
	ES6Vivox_LoginOperationState__Failed = 2,
	ES6Vivox_LoginOperationState__Idle = 3,
	ES6Vivox_LoginOperationState__ES6Vivox_MAX = 4,
};

enum class ES6Vivox_SubsystemFlags : uint8
{
	ES6Vivox_SubsystemFlags__None  = 0,
	ES6Vivox_SubsystemFlags__OperationTimeoutDetected = 1,
	ES6Vivox_SubsystemFlags__ES6Vivox_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
