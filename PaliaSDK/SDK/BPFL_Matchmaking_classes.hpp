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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BPFL_Matchmaking_C");

		return Clss;
	}

	void GetAlreadyMatchmakingErrorText(class UObject* __WorldContext, class FText* Text);
	void CreateErrorPayloadForMatchmakingResult(const struct FOSSVAL_MatchmakingResult& Result, class UObject* __WorldContext, struct FF_GenericErrorModalPayload* Payload, class FText SubErrorText, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FF_GenericErrorModalPayload& K2Node_MakeStruct_F_GenericErrorModalPayload);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
