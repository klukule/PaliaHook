#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x90 - 0x30)
// Class S6Telemetry.S6Telemetry
class US6Telemetry : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_2511[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS6TelemtryPendingEnvelope>    Ingest_Queue;                                      // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2512[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6Telemetry* GetDefaultObj();

};

}


