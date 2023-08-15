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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BPFL_MiscUtils_C");

		return Clss;
	}

	void GetPointsFromCircle(const struct FVector& Center, double Radius, int32 NumberOfPoints, class UObject* __WorldContext, TArray<struct FVector>* PointsOnCircle, const TArray<struct FVector>& CirclePoints, double YLocation, double XLocation, double Angle, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Add_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_DegSin_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_DegCos_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_GetPI_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3);
	void Get_Date_Time_As_Formatted_Text(const struct FDateTime& DateTime, class UObject* __WorldContext, class FText* OutputText, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_IntToText_ReturnValue_4, class FText CallFunc_Conv_IntToText_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GlobalScalabilitySetting(class UObject* __WorldContext, enum class Eenum_core_Scalability* ScalabilitySetting, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1);
	void BoolToYesNo(bool Bool, class UObject* __WorldContext, class FString* Result, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
