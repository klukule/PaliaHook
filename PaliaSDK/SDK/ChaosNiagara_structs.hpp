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

enum class EDataSortTypeEnum : uint8
{
	EDataSortTypeEnum__ChaosNiagara_DataSortType_NoSorting = 0,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_RandomShuffle = 1,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	EDataSortTypeEnum__ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	EDataSortTypeEnum__ChaosNiagara_Max = 4,
};

enum class ERandomVelocityGenerationTypeEnum : uint8
{
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ERandomVelocityGenerationTypeEnum__ChaosNiagara_Max = 3,
};

enum class EDebugTypeEnum : uint8
{
	EDebugTypeEnum__ChaosNiagara_DebugType_NoDebug = 0,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorBySolver = 1,
	EDebugTypeEnum__ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	EDebugTypeEnum__ChaosNiagara_Max = 3,
};

enum class EDataSourceTypeEnum : uint8
{
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Collision = 0,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Breaking = 1,
	EDataSourceTypeEnum__ChaosNiagara_DataSourceType_Trailing = 2,
	EDataSourceTypeEnum__ChaosNiagara_Max = 3,
};

enum class ELocationFilteringModeEnum : uint8
{
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ELocationFilteringModeEnum__ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ELocationFilteringModeEnum__ChaosNiagara_Max = 2,
};

enum class ELocationXToSpawnEnum : uint8
{
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_None = 0,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Min = 1,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_Max = 2,
	ELocationXToSpawnEnum__ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ELocationXToSpawnEnum__ChaosNiagara_Max = 4,
};

enum class ELocationYToSpawnEnum : uint8
{
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_None = 0,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Min = 1,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_Max = 2,
	ELocationYToSpawnEnum__ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ELocationYToSpawnEnum__ChaosNiagara_Max = 4,
};

enum class ELocationZToSpawnEnum : uint8
{
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_None = 0,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Min = 1,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_Max = 2,
	ELocationZToSpawnEnum__ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ELocationZToSpawnEnum__ChaosNiagara_Max = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x78 - 0x0)
// ScriptStruct ChaosNiagara.ChaosDestructionEvent
struct FChaosDestructionEvent
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x48(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentMin;                                         // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentMax;                                         // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleID;                                        // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x6C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Type;                                              // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B79[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
