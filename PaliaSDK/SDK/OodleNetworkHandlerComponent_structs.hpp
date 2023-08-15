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

enum class EOodleNetworkEnableMode : uint8
{
	EOodleNetworkEnableMode__AlwaysEnabled = 0,
	EOodleNetworkEnableMode__WhenCompressedPacketReceived = 1,
	EOodleNetworkEnableMode__EOodleNetworkEnableMode_MAX = 2,
};

enum class EOodleNetResult : uint8
{
	EOodleNetResult__Unknown       = 0,
	EOodleNetResult__Success       = 1,
	EOodleNetResult__OodleDecodeFailed = 2,
	EOodleNetResult__OodleSerializePayloadFail = 3,
	EOodleNetResult__OodleBadDecompressedLength = 4,
	EOodleNetResult__OodleNoDictionary = 5,
	EOodleNetResult__EOodleNetResult_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
