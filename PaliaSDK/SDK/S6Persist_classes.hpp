#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// Class S6Persist.S6PersistConfiguration
class US6PersistConfiguration : public UDeveloperSettings
{
public:
	enum class ES6PersistConfigurationSerializationFormat Format;                                            // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6PersistConfigurationStorageLocation Location;                                          // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PersistInterval;                                   // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        DiskPersistDirectory;                              // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6PersistConfiguration");
		return Clss;
	}

};

// 0x110 (0x140 - 0x30)
// Class S6Persist.S6PersistSubsystem
class US6PersistSubsystem : public UGameInstanceSubsystem
{
public:
	struct FS6PersistOperationSet                QueuedOperationSet;                                // 0x30(0x78)(NativeAccessSpecifierPrivate)
	struct FS6PersistOperationSet                PendingOperationSet;                               // 0xA8(0x78)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1EBA[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6PersistSubsystem");
		return Clss;
	}

	void ProcessPersistQueue();
	void HandlePendingOpSetComplete(bool InbSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
