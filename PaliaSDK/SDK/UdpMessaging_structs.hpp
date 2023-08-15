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

enum class EUdpMessageFormat : uint8
{
	EUdpMessageFormat__None        = 0,
	EUdpMessageFormat__Json        = 1,
	EUdpMessageFormat__TaggedProperty = 2,
	EUdpMessageFormat__CborPlatformEndianness = 3,
	EUdpMessageFormat__CborStandardEndianness = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct UdpMessaging.UdpMockMessage
struct FUdpMockMessage
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
