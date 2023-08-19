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

// 0x79 (0x119 - 0xA0)
// BlueprintGeneratedClass Comp_Spline_Sound.Comp_Spline_Sound_C
class UComp_Spline_Sound_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               Location;                                          // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InterpSpeed;                                       // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AK;                                                // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceBetweenAudioPositions;                     // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    AudioPositions;                                    // 0xD8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       CurrentAudioPositionDistance;                      // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SplineLength;                                      // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMultipleAudioPositions;                        // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C6D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         AkEvent;                                           // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bDebugAudioPositions_;                             // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Occlusion_Refresh_Interval;                        // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInitializedSound;                                 // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Comp_Spline_Sound_C");
		return Clss;
	}

	void InitializeSound(bool InCallFunc_IsValid_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, int32 InCallFunc_AkEventComponent_ReturnValue, class UAkComponent* InCallFunc_SpawnAkComponentAtLocation_ReturnValue, bool InCallFunc_IsServer_ReturnValue, float InK2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast);
	void SetSoundPositionsAlongSpline(class USplineComponent* InSpline, int32 InTemp_int_Array_Index_Variable, bool InCallFunc_IsValid_ReturnValue, const struct FTransform& InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, const struct FVector& InCallFunc_BreakTransform_Location, const struct FRotator& InCallFunc_BreakTransform_Rotation, const struct FVector& InCallFunc_BreakTransform_Scale, float InCallFunc_GetSplineLength_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_IsServer_ReturnValue, const struct FVector& InCallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FTransform& InCallFunc_MakeTransform_ReturnValue, int32 InCallFunc_Array_Add_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue_1, bool InCallFunc_Less_DoubleDouble_ReturnValue, double InK2Node_VariableSet_SplineLength_ImplicitCast, float InCallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast);
	void UpdateAudioPosition(class USplineComponent* InSpline, double InDeltaSeconds, bool* InSuccess, class APlayerCameraManager* InLocalPlayerCam, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_IsDedicatedServer_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& InCallFunc_FindLocationClosestToWorldLocation_ReturnValue, class APlayerCameraManager* InCallFunc_GetPlayerCameraManager_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& InCallFunc_VInterpTo_ReturnValue, const struct FHitResult& InCallFunc_K2_SetWorldLocation_SweepHitResult, float InCallFunc_VInterpTo_DeltaTime_ImplicitCast, float InCallFunc_VInterpTo_InterpSpeed_ImplicitCast);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Comp_Spline_Sound(int32 InEntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
