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

enum class EChaosWeightMapTarget : uint8
{
	EChaosWeightMapTarget__None    = 0,
	EChaosWeightMapTarget__MaxDistance = 1,
	EChaosWeightMapTarget__BackstopDistance = 2,
	EChaosWeightMapTarget__BackstopRadius = 3,
	EChaosWeightMapTarget__AnimDriveStiffness = 4,
	EChaosWeightMapTarget__AnimDriveDamping = 5,
	EChaosWeightMapTarget__TetherStiffness = 6,
	EChaosWeightMapTarget__TetherScale = 7,
	EChaosWeightMapTarget__Drag    = 8,
	EChaosWeightMapTarget__Lift    = 9,
	EChaosWeightMapTarget__EdgeStiffness = 10,
	EChaosWeightMapTarget__BendingStiffness = 11,
	EChaosWeightMapTarget__AreaStiffness = 12,
	EChaosWeightMapTarget__BucklingStiffness = 13,
	EChaosWeightMapTarget__Pressure = 14,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX = 15,
};

enum class EChaosClothTetherMode : uint8
{
	EChaosClothTetherMode__FastTetherFastLength = 0,
	EChaosClothTetherMode__AccurateTetherFastLength = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode = 3,
	EChaosClothTetherMode__EChaosClothTetherMode_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct ChaosCloth.ChaosClothWeightedValue
struct FChaosClothWeightedValue
{
public:
	float                                        Low;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        High;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
