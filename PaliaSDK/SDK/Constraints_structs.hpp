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

enum class EHandleEvent : uint8
{
	EHandleEvent__LocalTransformUpdated = 0,
	EHandleEvent__GlobalTransformUpdated = 1,
	EHandleEvent__ComponentUpdated = 2,
	EHandleEvent__Max              = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x100 - 0x100)
// ScriptStruct Constraints.MovieSceneConstraintChannel
struct FMovieSceneConstraintChannel : public FMovieSceneBoolChannel
{
public:
};

// 0x138 (0x138 - 0x0)
// ScriptStruct Constraints.ConstraintAndActiveChannel
struct FConstraintAndActiveChannel
{
public:
	TSoftObjectPtr<class UTickableConstraint>    Constraint;                                        // 0x0(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneConstraintChannel          ActiveChannel;                                     // 0x30(0x100)(NativeAccessSpecifierPublic)
	class UTickableConstraint*                   ConstraintCopyToSpawn;                             // 0x130(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct Constraints.ConstraintTickFunction
struct FConstraintTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_10E7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
