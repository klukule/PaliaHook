#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Matchmaking.BPFL_Matchmaking_C
class UBPFL_Matchmaking_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Matchmaking_C* GetDefaultObj();

	void GetAlreadyMatchmakingErrorText(class UObject* __WorldContext, class FText* Text);
	void CreateErrorPayloadForMatchmakingResult(const struct FOSSVAL_MatchmakingResult& Result, class UObject* __WorldContext, struct FF_GenericErrorModalPayload* Payload, class FText SubErrorText, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, const struct FF_GenericErrorModalPayload& K2Node_MakeStruct_F_GenericErrorModalPayload, const struct FOSSVAL_MatchmakingCustomErrorContainer& K2Node_Select_Default, class FText CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
};

}


