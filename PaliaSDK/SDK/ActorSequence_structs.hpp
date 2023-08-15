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

enum class EActorSequenceObjectReferenceType : uint8
{
	EActorSequenceObjectReferenceType__ContextActor = 0,
	EActorSequenceObjectReferenceType__ExternalActor = 1,
	EActorSequenceObjectReferenceType__Component = 2,
	EActorSequenceObjectReferenceType__EActorSequenceObjectReferenceType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReference
struct FActorSequenceObjectReference
{
public:
	enum class EActorSequenceObjectReferenceType Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D17[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ActorId;                                           // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PathToComponent;                                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReferences
struct FActorSequenceObjectReferences
{
public:
	TArray<struct FActorSequenceObjectReference> Array;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
struct FActorSequenceObjectReferenceMap
{
public:
	TArray<struct FGuid>                         BindingIds;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FActorSequenceObjectReferences> References;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
