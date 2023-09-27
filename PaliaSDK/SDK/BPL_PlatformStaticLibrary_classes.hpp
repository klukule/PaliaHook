#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPL_PlatformStaticLibrary.BPL_PlatformStaticLibrary_C
class UBPL_PlatformStaticLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPL_PlatformStaticLibrary_C* GetDefaultObj();

	void Is_Local_Character_Within_Radius_To_Object(class AActor* OtherActor, double Radius, class UObject* __WorldContext, bool* PlayerChar_Is_Close, enum class EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void Override_Skinned_Mesh_Tickrate_for_Low_End_Platforms(TArray<class USkinnedMeshComponent*>& MeshesToSet, class UObject* __WorldContext, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class USkinnedMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class ERedirectsPlatform>& K2Node_MakeArray_Array, enum class ERedirectsPlatform CallFunc_GetPlatformType_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
};

}


