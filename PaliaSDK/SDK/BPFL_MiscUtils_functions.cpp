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


// Function BPFL_MiscUtils.BPFL_MiscUtils_C.GetPointsFromCircle
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Center                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumberOfPoints                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             PointsOnCircle                                                   (Parm, OutParm)
// TArray<struct FVector>             CirclePoints                                                     (Edit, BlueprintVisible)
// double                             YLocation                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             XLocation                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Angle                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DegSin_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DegCos_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPI_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MiscUtils_C::GetPointsFromCircle(const struct FVector& InCenter, double InRadius, int32 InNumberOfPoints, class UObject* In__WorldContext, TArray<struct FVector>* InPointsOnCircle, const TArray<struct FVector>& InCirclePoints, double InYLocation, double InXLocation, double InAngle, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, const struct FVector& InCallFunc_MakeVector_ReturnValue, int32 InTemp_int_Variable, int32 InCallFunc_Array_Add_ReturnValue, double InCallFunc_Conv_IntToDouble_ReturnValue, bool InCallFunc_LessEqual_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, double InCallFunc_DegSin_ReturnValue, double InCallFunc_BreakVector_X_1, double InCallFunc_BreakVector_Y_1, double InCallFunc_BreakVector_Z_1, double InCallFunc_Multiply_DoubleDouble_ReturnValue, double InCallFunc_DegCos_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue, double InCallFunc_BreakVector_X_2, double InCallFunc_BreakVector_Y_2, double InCallFunc_BreakVector_Z_2, double InCallFunc_Multiply_DoubleDouble_ReturnValue_1, double InCallFunc_GetPI_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue_1, double InCallFunc_Multiply_DoubleDouble_ReturnValue_2, double InCallFunc_Multiply_DoubleDouble_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_MiscUtils_C", "GetPointsFromCircle");

	Params::UBPFL_MiscUtils_C_GetPointsFromCircle_Params Parms{};

	Parms.Center = InCenter;
	Parms.Radius = InRadius;
	Parms.NumberOfPoints = InNumberOfPoints;
	Parms.__WorldContext = In__WorldContext;
	Parms.CirclePoints = InCirclePoints;
	Parms.YLocation = InYLocation;
	Parms.XLocation = InXLocation;
	Parms.Angle = InAngle;
	Parms.CallFunc_BreakVector_X = InCallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = InCallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = InCallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = InCallFunc_MakeVector_ReturnValue;
	Parms.Temp_int_Variable = InTemp_int_Variable;
	Parms.CallFunc_Array_Add_ReturnValue = InCallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = InCallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = InCallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_DegSin_ReturnValue = InCallFunc_DegSin_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = InCallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = InCallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = InCallFunc_BreakVector_Z_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = InCallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_DegCos_ReturnValue = InCallFunc_DegCos_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = InCallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = InCallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = InCallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = InCallFunc_BreakVector_Z_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = InCallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetPI_ReturnValue = InCallFunc_GetPI_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = InCallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = InCallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = InCallFunc_Multiply_DoubleDouble_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (InPointsOnCircle != nullptr)
		*InPointsOnCircle = Parms.PointsOnCircle;

}


// Function BPFL_MiscUtils.BPFL_MiscUtils_C.Get Date Time As Formatted Text
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   DateTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        OutputText                                                       (Parm, OutParm)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UBPFL_MiscUtils_C::Get_Date_Time_As_Formatted_Text(const struct FDateTime& InDateTime, class UObject* In__WorldContext, class FText* InOutputText, int32 InCallFunc_BreakDateTime_Year, int32 InCallFunc_BreakDateTime_Month, int32 InCallFunc_BreakDateTime_Day, int32 InCallFunc_BreakDateTime_Hour, int32 InCallFunc_BreakDateTime_Minute, int32 InCallFunc_BreakDateTime_Second, int32 InCallFunc_BreakDateTime_Millisecond, class FText InCallFunc_Conv_IntToText_ReturnValue, class FText InCallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_1, class FText InCallFunc_Conv_IntToText_ReturnValue_2, class FText InCallFunc_Conv_IntToText_ReturnValue_3, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_3, class FText InCallFunc_Conv_IntToText_ReturnValue_4, class FText InCallFunc_Conv_IntToText_ReturnValue_5, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& InK2Node_MakeArray_Array, class FText InCallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_MiscUtils_C", "Get Date Time As Formatted Text");

	Params::UBPFL_MiscUtils_C_Get_Date_Time_As_Formatted_Text_Params Parms{};

	Parms.DateTime = InDateTime;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_BreakDateTime_Year = InCallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = InCallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = InCallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = InCallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = InCallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = InCallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = InCallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToText_ReturnValue = InCallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = InCallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = InK2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = InK2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = InCallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = InCallFunc_Conv_IntToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = InK2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = InK2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = InCallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = InCallFunc_Conv_IntToText_ReturnValue_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = InK2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = InK2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = InCallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InOutputText != nullptr)
		*InOutputText = Parms.OutputText;

}


// Function BPFL_MiscUtils.BPFL_MiscUtils_C.GlobalScalabilitySetting
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class Eenum_core_Scalability  ScalabilitySetting                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_MiscUtils_C::GlobalScalabilitySetting(class UObject* In__WorldContext, enum class Eenum_core_Scalability* InScalabilitySetting, class UGameUserSettings* InCallFunc_GetGameUserSettings_ReturnValue, int32 InCallFunc_GetVisualEffectQuality_ReturnValue, int32 InCallFunc_GetOverallScalabilityLevel_ReturnValue, bool InK2Node_SwitchInteger_CmpSuccess, bool InK2Node_SwitchInteger_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_MiscUtils_C", "GlobalScalabilitySetting");

	Params::UBPFL_MiscUtils_C_GlobalScalabilitySetting_Params Parms{};

	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = InCallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = InCallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = InCallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = InK2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = InK2Node_SwitchInteger_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InScalabilitySetting != nullptr)
		*InScalabilitySetting = Parms.ScalabilitySetting;

}


// Function BPFL_MiscUtils.BPFL_MiscUtils_C.BoolToYesNo
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Bool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_MiscUtils_C::BoolToYesNo(bool InBool, class UObject* In__WorldContext, class FString* InResult, bool InTemp_bool_Variable, const class FString& InTemp_string_Variable, const class FString& InTemp_string_Variable_1, const class FString& InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_MiscUtils_C", "BoolToYesNo");

	Params::UBPFL_MiscUtils_C_BoolToYesNo_Params Parms{};

	Parms.Bool = InBool;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.Temp_string_Variable = InTemp_string_Variable;
	Parms.Temp_string_Variable_1 = InTemp_string_Variable_1;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InResult != nullptr)
		*InResult = Parms.Result;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
