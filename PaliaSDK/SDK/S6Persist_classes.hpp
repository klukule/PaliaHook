#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x60 - 0x38)
// Class S6Persist.S6PersistConfiguration
class US6PersistConfiguration : public UDeveloperSettings
{
public:
	enum class ES6PersistConfigurationSerializationFormat Format;                                            // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6PersistConfigurationStorageLocation Location;                                          // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_270A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PersistInterval;                                   // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BatchSizeLimitKB;                                  // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSyncRetries;                                    // 0x44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OperationsPerBatchLimit;                           // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_270C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        DiskPersistDirectory;                              // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class US6PersistConfiguration* GetDefaultObj();

};

// 0x130 (0x160 - 0x30)
// Class S6Persist.S6PersistSubsystem
class US6PersistSubsystem : public UGameInstanceSubsystem
{
public:
	struct FS6PersistOperationSet                QueuedOperationSet;                                // 0x30(0x78)(NativeAccessSpecifierPrivate)
	struct FS6PersistOperationSet                PendingOperationSet;                               // 0xA8(0x78)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2714[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6PersistSubsystem* GetDefaultObj();

	void ProcessPersistQueue();
	void HandlePendingOpSetComplete(bool bSuccess);
};

}


