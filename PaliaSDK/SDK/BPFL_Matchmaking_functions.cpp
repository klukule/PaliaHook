#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

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

void UBPFL_Matchmaking_C::GetAlreadyMatchmakingErrorText(class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Matchmaking_C", "GetAlreadyMatchmakingErrorText");

	Params::UBPFL_Matchmaking_C_GetAlreadyMatchmakingErrorText_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function BPFL_Matchmaking.BPFL_Matchmaking_C.CreateErrorPayloadForMatchmakingResult
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOSSVAL_MatchmakingResult   Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FF_GenericErrorModalPayload Payload                                                          (Parm, OutParm, HasGetValueTypeHash)
// class FText                        SubErrorText                                                     (Edit, BlueprintVisible)
// class FText                        CallFunc_Map_Find_Value                                          ()
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FF_GenericErrorModalPayload K2Node_MakeStruct_F_GenericErrorModalPayload                     (HasGetValueTypeHash)

void UBPFL_Matchmaking_C::CreateErrorPayloadForMatchmakingResult(const struct FOSSVAL_MatchmakingResult& Result, class UObject* __WorldContext, struct FF_GenericErrorModalPayload* Payload, class FText SubErrorText, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FF_GenericErrorModalPayload& K2Node_MakeStruct_F_GenericErrorModalPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Matchmaking_C", "CreateErrorPayloadForMatchmakingResult");

	Params::UBPFL_Matchmaking_C_CreateErrorPayloadForMatchmakingResult_Params Parms{};

	Parms.Result = Result;
	Parms.__WorldContext = __WorldContext;
	Parms.SubErrorText = SubErrorText;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_F_GenericErrorModalPayload = K2Node_MakeStruct_F_GenericErrorModalPayload;

	UObject::ProcessEvent(Func, &Parms);

	if (Payload != nullptr)
		*Payload = Parms.Payload;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
