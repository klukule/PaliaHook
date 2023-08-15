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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct PropertyPath.PropertyPathSegment
struct FPropertyPathSegment
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArrayIndex;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStruct*                               Struct;                                            // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_274F[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct PropertyPath.CachedPropertyPath
struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>          Segments;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2750[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFunction*                             CachedFunction;                                    // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2751[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
