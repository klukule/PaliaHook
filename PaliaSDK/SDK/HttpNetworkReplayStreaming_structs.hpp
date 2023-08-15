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

enum class EHttpReplayResult : uint8
{
	EHttpReplayResult__Success     = 0,
	EHttpReplayResult__FailedJsonParse = 1,
	EHttpReplayResult__DataUnavailable = 2,
	EHttpReplayResult__InvalidHttpResponse = 3,
	EHttpReplayResult__CompressionFailed = 4,
	EHttpReplayResult__DecompressionFailed = 5,
	EHttpReplayResult__InvalidPayload = 6,
	EHttpReplayResult__Unknown     = 7,
	EHttpReplayResult__EHttpReplayResult_MAX = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
