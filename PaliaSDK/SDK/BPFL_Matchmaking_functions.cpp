#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BPFL_Matchmaking.BPFL_Matchmaking_C.GetAlreadyMatchmakingErrorText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)

void UBPFL_Matchmaking_C::GetAlreadyMatchmakingErrorText(class UObject* In__WorldContext, class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Matchmaking_C", "GetAlreadyMatchmakingErrorText");

	Params::UBPFL_Matchmaking_C_GetAlreadyMatchmakingErrorText_Params Parms{};

	Parms.__WorldContext = In__WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (InText != nullptr)
		*InText = Parms.Text;

}


// Function BPFL_Matchmaking.BPFL_Matchmaking_C.CreateErrorPayloadForMatchmakingResult
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOSSVAL_MatchmakingResult   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FF_GenericErrorModalPayload Payload                                                          (Parm, OutParm, HasGetValueTypeHash)
// class FText                        SubErrorText                                                     (Edit, BlueprintVisible)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          ()
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_GenericErrorModalPayload K2Node_MakeStruct_F_GenericErrorModalPayload                     (HasGetValueTypeHash)
// struct FOSSVAL_MatchmakingCustomErrorContainerK2Node_Select_Default                                            (ConstParm)
// class FText                        CallFunc_Map_Find_Value_1                                        ()
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Matchmaking_C::CreateErrorPayloadForMatchmakingResult(const struct FOSSVAL_MatchmakingResult& InResult, class UObject* In__WorldContext, struct FF_GenericErrorModalPayload* InPayload, class FText InSubErrorText, int64 InCallFunc_Conv_IntToInt64_ReturnValue, class FText InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& InK2Node_MakeArray_Array, class FText InCallFunc_Format_ReturnValue, int64 InCallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_1, bool InCallFunc_EqualEqual_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& InK2Node_MakeArray_Array_1, class FText InCallFunc_Format_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, bool InTemp_bool_Variable, const struct FF_GenericErrorModalPayload& InK2Node_MakeStruct_F_GenericErrorModalPayload, const struct FOSSVAL_MatchmakingCustomErrorContainer& InK2Node_Select_Default, class FText InCallFunc_Map_Find_Value_1, bool InCallFunc_Map_Find_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Matchmaking_C", "CreateErrorPayloadForMatchmakingResult");

	Params::UBPFL_Matchmaking_C_CreateErrorPayloadForMatchmakingResult_Params Parms{};

	Parms.Result = InResult;
	Parms.__WorldContext = In__WorldContext;
	Parms.SubErrorText = InSubErrorText;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = InCallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Map_Find_Value = InCallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = InCallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = InK2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = InCallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = InCallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = InK2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = InCallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = InK2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = InCallFunc_Format_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.K2Node_MakeStruct_F_GenericErrorModalPayload = InK2Node_MakeStruct_F_GenericErrorModalPayload;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value_1 = InCallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = InCallFunc_Map_Find_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InPayload != nullptr)
		*InPayload = Parms.Payload;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
