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
// BlueprintGeneratedClass BPFL_MiscUtils.BPFL_MiscUtils_C
class UBPFL_MiscUtils_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPFL_MiscUtils_C");
		return Clss;
	}

	void GetPointsFromCircle(const struct FVector& InCenter, double InRadius, int32 InNumberOfPoints, class UObject* In__WorldContext, TArray<struct FVector>* InPointsOnCircle, const TArray<struct FVector>& InCirclePoints, double InYLocation, double InXLocation, double InAngle, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, const struct FVector& InCallFunc_MakeVector_ReturnValue, int32 InTemp_int_Variable, int32 InCallFunc_Array_Add_ReturnValue, double InCallFunc_Conv_IntToDouble_ReturnValue, bool InCallFunc_LessEqual_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, double InCallFunc_DegSin_ReturnValue, double InCallFunc_BreakVector_X_1, double InCallFunc_BreakVector_Y_1, double InCallFunc_BreakVector_Z_1, double InCallFunc_Multiply_DoubleDouble_ReturnValue, double InCallFunc_DegCos_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue, double InCallFunc_BreakVector_X_2, double InCallFunc_BreakVector_Y_2, double InCallFunc_BreakVector_Z_2, double InCallFunc_Multiply_DoubleDouble_ReturnValue_1, double InCallFunc_GetPI_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue_1, double InCallFunc_Multiply_DoubleDouble_ReturnValue_2, double InCallFunc_Multiply_DoubleDouble_ReturnValue_3);
	void Get_Date_Time_As_Formatted_Text(const struct FDateTime& InDateTime, class UObject* In__WorldContext, class FText* InOutputText, int32 InCallFunc_BreakDateTime_Year, int32 InCallFunc_BreakDateTime_Month, int32 InCallFunc_BreakDateTime_Day, int32 InCallFunc_BreakDateTime_Hour, int32 InCallFunc_BreakDateTime_Minute, int32 InCallFunc_BreakDateTime_Second, int32 InCallFunc_BreakDateTime_Millisecond, class FText InCallFunc_Conv_IntToText_ReturnValue, class FText InCallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_1, class FText InCallFunc_Conv_IntToText_ReturnValue_2, class FText InCallFunc_Conv_IntToText_ReturnValue_3, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_3, class FText InCallFunc_Conv_IntToText_ReturnValue_4, class FText InCallFunc_Conv_IntToText_ReturnValue_5, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& InK2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& InK2Node_MakeArray_Array, class FText InCallFunc_Format_ReturnValue);
	void GlobalScalabilitySetting(class UObject* In__WorldContext, enum class Eenum_core_Scalability* InScalabilitySetting, class UGameUserSettings* InCallFunc_GetGameUserSettings_ReturnValue, int32 InCallFunc_GetVisualEffectQuality_ReturnValue, int32 InCallFunc_GetOverallScalabilityLevel_ReturnValue, bool InK2Node_SwitchInteger_CmpSuccess, bool InK2Node_SwitchInteger_CmpSuccess_1);
	void BoolToYesNo(bool InBool, class UObject* In__WorldContext, class FString* InResult, bool InTemp_bool_Variable, const class FString& InTemp_string_Variable, const class FString& InTemp_string_Variable_1, const class FString& InK2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
