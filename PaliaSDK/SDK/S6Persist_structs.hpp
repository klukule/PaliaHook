#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ES6PersistConfigurationSerializationFormat : uint8
{
	JSON                           = 0,
	Flexbuffer                     = 1,
	ES6PersistConfigurationSerializationFormat_MAX = 2,
};

enum class ES6PersistConfigurationStorageLocation : uint8
{
	Disk                           = 0,
	GameDataService                = 1,
	ES6PersistConfigurationStorageLocation_MAX = 2,
};

enum class ES6MutateOpType : uint8
{
	Insert                         = 0,
	Update                         = 1,
	Delete                         = 2,
	ES6MutateOpType_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct S6Persist.S6PersistContainer
struct FS6PersistContainer
{
public:
	uint8                                        Pad_1A3D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct S6Persist.S6PersistBlock
struct FS6PersistBlock
{
public:
	uint8                                        Pad_1A3F[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct S6Persist.S6PersistBlockData
struct FS6PersistBlockData
{
public:
	struct FGuid                                 BlockId;                                           // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BlockKind;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct S6Persist.S6GameDataServiceEnvelope
struct FS6GameDataServiceEnvelope
{
public:
	struct FGuid                                 ContainerId;                                       // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerKind;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Version;                                           // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A40[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS6PersistBlockData>           Blocks;                                            // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct S6Persist.S6PersistOperation
struct FS6PersistOperation
{
public:
	enum class ES6MutateOpType                   Mutation;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A41[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ContainerId;                                       // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ContainerKind;                                     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Version;                                           // 0x28(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A43[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 BlockId;                                           // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BlockKind;                                         // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct S6Persist.S6PersistMigration
struct FS6PersistMigration
{
public:
	struct FGuid                                 ContainerId;                                       // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerKind;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Version;                                           // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A47[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS6PersistOperation>           Operations;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct S6Persist.S6PersistOperationSet
struct FS6PersistOperationSet
{
public:
	uint8                                        Pad_1A49[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<struct FS6PersistOperation>             Operations;                                        // 0x20(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A4A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct S6Persist.S6PersistOperationSetTestBlock
struct FS6PersistOperationSetTestBlock : public FS6PersistBlock
{
public:
	float                                        Test;                                              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


