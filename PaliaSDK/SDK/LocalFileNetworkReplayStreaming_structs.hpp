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

enum class ELocalFileReplayResult : uint8
{
	ELocalFileReplayResult__Success = 0,
	ELocalFileReplayResult__InvalidReplayInfo = 1,
	ELocalFileReplayResult__StreamChunkIndexMismatch = 2,
	ELocalFileReplayResult__DecompressBuffer = 3,
	ELocalFileReplayResult__CompressionNotSupported = 4,
	ELocalFileReplayResult__DecryptBuffer = 5,
	ELocalFileReplayResult__EncryptionNotSupported = 6,
	ELocalFileReplayResult__Unknown = 7,
	ELocalFileReplayResult__ELocalFileReplayResult_MAX = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
