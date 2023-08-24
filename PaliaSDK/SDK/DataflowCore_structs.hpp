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

// 0xD0 (0xD0 - 0x0)
// ScriptStruct DataflowCore.DataflowNode
struct FDataflowNode
{
public:
	uint8                                        Pad_27EF[0xC8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bActive;                                           // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27F0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DataflowCore.DataflowConnection
struct FDataflowConnection
{
public:
	uint8                                        Pad_27F2[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x48 - 0x40)
// ScriptStruct DataflowCore.DataflowInput
struct FDataflowInput : public FDataflowConnection
{
public:
	uint8                                        Pad_27F3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x68 - 0x40)
// ScriptStruct DataflowCore.DataflowOutput
struct FDataflowOutput : public FDataflowConnection
{
public:
	uint8                                        Pad_27F4[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
