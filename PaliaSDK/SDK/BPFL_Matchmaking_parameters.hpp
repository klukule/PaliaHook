#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function BPFL_Matchmaking.BPFL_Matchmaking_C.GetAlreadyMatchmakingErrorText
struct UBPFL_Matchmaking_C_GetAlreadyMatchmakingErrorText_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
};

// 0x340 (0x340 - 0x0)
// Function BPFL_Matchmaking.BPFL_Matchmaking_C.CreateErrorPayloadForMatchmakingResult
struct UBPFL_Matchmaking_C_CreateErrorPayloadForMatchmakingResult_Params
{
public:
	struct FOSSVAL_MatchmakingResult             Result;                                            // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FF_GenericErrorModalPayload           Payload;                                           // 0xC8(0x98)(Parm, OutParm, HasGetValueTypeHash)
	class FText                                  SubErrorText;                                      // 0x160(0x18)(Edit, BlueprintVisible)
	class FText                                  CallFunc_Map_Find_Value;                           // 0x178(0x18)()
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1A0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1F0(0x10)(ReferenceParm)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x208(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x220(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x270(0x10)(ReferenceParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x288(0x18)()
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A4F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FF_GenericErrorModalPayload           K2Node_MakeStruct_F_GenericErrorModalPayload;      // 0x2A8(0x98)(HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
