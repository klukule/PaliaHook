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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Matchmaking.BPFL_Matchmaking_C
class UBPFL_Matchmaking_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPFL_Matchmaking_C");
		return Clss;
	}

	void GetAlreadyMatchmakingErrorText(class UObject* In__WorldContext, class FText* InText);
	void CreateErrorPayloadForMatchmakingResult(const struct FOSSVAL_MatchmakingResult& InResult, class UObject* In__WorldContext, struct FF_GenericErrorModalPayload* InPayload, class FText InSubErrorText, class FText InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue, int64 InCallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& InK2Node_MakeArray_Array, int64 InCallFunc_Conv_IntToInt64_ReturnValue_1, class FText InCallFunc_Format_ReturnValue, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& InK2Node_MakeArray_Array_1, bool InCallFunc_EqualEqual_IntInt_ReturnValue, class FText InCallFunc_Format_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, const struct FF_GenericErrorModalPayload& InK2Node_MakeStruct_F_GenericErrorModalPayload);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
