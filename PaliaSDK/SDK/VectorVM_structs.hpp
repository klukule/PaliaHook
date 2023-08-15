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

enum class EVectorVMBaseTypes : uint8
{
	EVectorVMBaseTypes__Float      = 0,
	EVectorVMBaseTypes__Int        = 1,
	EVectorVMBaseTypes__Bool       = 2,
	EVectorVMBaseTypes__Num        = 3,
	EVectorVMBaseTypes__EVectorVMBaseTypes_MAX = 4,
};

enum class EVectorVMOperandLocation : uint8
{
	EVectorVMOperandLocation__Register = 0,
	EVectorVMOperandLocation__Constant = 1,
	EVectorVMOperandLocation__Num  = 2,
	EVectorVMOperandLocation__EVectorVMOperandLocation_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
