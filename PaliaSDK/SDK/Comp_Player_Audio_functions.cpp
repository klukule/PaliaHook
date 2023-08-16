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


// Function Comp_Player_Audio.Comp_Player_Audio_C.PlayPickWiffFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_10                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_11                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_12                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_13                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_14                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_15                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_16                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_17                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_ItemTypeDefinitionAsset*K2Node_DynamicCast_AsItem_Type_Definition                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_18                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_19                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           K2Node_Select_Default                                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Surface_DT_Sound                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Surface_DT_Decal_Left_Foot                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Surface_DT_Decal_Right_Foot                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_Surface_DT_NiagaraSystem                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkEventLocation_AkComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventLocation_Playing_ID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::PlayPickWiffFX(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InItemType, class AActor* InInstigator, int32 InTemp_int_Variable, int32 InTemp_int_Variable_1, int32 InTemp_int_Variable_2, int32 InTemp_int_Variable_3, int32 InTemp_int_Variable_4, int32 InTemp_int_Variable_5, int32 InTemp_int_Variable_6, int32 InTemp_int_Variable_7, int32 InTemp_int_Variable_8, int32 InTemp_int_Variable_9, int32 InTemp_int_Variable_10, int32 InTemp_int_Variable_11, int32 InTemp_int_Variable_12, int32 InTemp_int_Variable_13, int32 InTemp_int_Variable_14, int32 InTemp_int_Variable_15, int32 InTemp_int_Variable_16, TArray<class AActor*>& InTemp_object_Variable, bool InTemp_bool_Variable, int32 InTemp_int_Variable_17, class UObject* InCallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* InK2Node_DynamicCast_AsItem_Type_Definition, bool InK2Node_DynamicCast_bSuccess, int32 InTemp_int_Variable_18, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_HasTag_ReturnValue, int32 InTemp_int_Variable_19, enum class EPhysicalSurface InTemp_byte_Variable, TArray<enum class EObjectTypeQuery>& InK2Node_MakeArray_Array, class USkeletalMeshComponent* InCallFunc_GetComponentByClass_ReturnValue, class UPhysicalMaterial* InTemp_object_Variable_1, class UNiagaraComponent* InCallFunc_SpawnSystemAttached_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& InCallFunc_LineTraceSingleForObjects_OutHit, bool InCallFunc_LineTraceSingleForObjects_ReturnValue, bool InCallFunc_BreakHitResult_bBlockingHit, bool InCallFunc_BreakHitResult_bInitialOverlap, float InCallFunc_BreakHitResult_Time, float InCallFunc_BreakHitResult_Distance, const struct FVector& InCallFunc_BreakHitResult_Location, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint, const struct FVector& InCallFunc_BreakHitResult_Normal, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat, class AActor* InCallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent, class FName InCallFunc_BreakHitResult_HitBoneName, class FName InCallFunc_BreakHitResult_BoneName, int32 InCallFunc_BreakHitResult_HitItem, int32 InCallFunc_BreakHitResult_ElementIndex, int32 InCallFunc_BreakHitResult_FaceIndex, const struct FVector& InCallFunc_BreakHitResult_TraceStart, const struct FVector& InCallFunc_BreakHitResult_TraceEnd, class UNiagaraComponent* InCallFunc_SpawnSystemAtLocation_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_IsValid_ReturnValue_3, class UPhysicalMaterial* InK2Node_Select_Default, class UAkAudioEvent* InCallFunc_Surface_DT_Sound, class UMaterialInstance* InCallFunc_Surface_DT_Decal_Left_Foot, class UMaterialInstance* InCallFunc_Surface_DT_Decal_Right_Foot, class UNiagaraSystem* InCallFunc_Surface_DT_NiagaraSystem, class UAkComponent* InCallFunc_AkEventLocation_AkComponent, int32 InCallFunc_AkEventLocation_Playing_ID, int32 InK2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "PlayPickWiffFX");

	Params::UComp_Player_Audio_C_PlayPickWiffFX_Params Parms{};

	Parms.ItemType = InItemType;
	Parms.Instigator = InInstigator;
	Parms.Temp_int_Variable = InTemp_int_Variable;
	Parms.Temp_int_Variable_1 = InTemp_int_Variable_1;
	Parms.Temp_int_Variable_2 = InTemp_int_Variable_2;
	Parms.Temp_int_Variable_3 = InTemp_int_Variable_3;
	Parms.Temp_int_Variable_4 = InTemp_int_Variable_4;
	Parms.Temp_int_Variable_5 = InTemp_int_Variable_5;
	Parms.Temp_int_Variable_6 = InTemp_int_Variable_6;
	Parms.Temp_int_Variable_7 = InTemp_int_Variable_7;
	Parms.Temp_int_Variable_8 = InTemp_int_Variable_8;
	Parms.Temp_int_Variable_9 = InTemp_int_Variable_9;
	Parms.Temp_int_Variable_10 = InTemp_int_Variable_10;
	Parms.Temp_int_Variable_11 = InTemp_int_Variable_11;
	Parms.Temp_int_Variable_12 = InTemp_int_Variable_12;
	Parms.Temp_int_Variable_13 = InTemp_int_Variable_13;
	Parms.Temp_int_Variable_14 = InTemp_int_Variable_14;
	Parms.Temp_int_Variable_15 = InTemp_int_Variable_15;
	Parms.Temp_int_Variable_16 = InTemp_int_Variable_16;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.Temp_int_Variable_17 = InTemp_int_Variable_17;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = InCallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Type_Definition = InK2Node_DynamicCast_AsItem_Type_Definition;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable_18 = InTemp_int_Variable_18;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = InCallFunc_HasTag_ReturnValue;
	Parms.Temp_int_Variable_19 = InTemp_int_Variable_19;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.Temp_object_Variable_1 = InTemp_object_Variable_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = InCallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = InCallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingleForObjects_OutHit = InCallFunc_LineTraceSingleForObjects_OutHit;
	Parms.CallFunc_LineTraceSingleForObjects_ReturnValue = InCallFunc_LineTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = InCallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = InCallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = InCallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = InCallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = InCallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = InCallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = InCallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = InCallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = InCallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = InCallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = InCallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = InCallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = InCallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = InCallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = InCallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = InCallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = InCallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = InCallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = InCallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = InCallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_Surface_DT_Sound = InCallFunc_Surface_DT_Sound;
	Parms.CallFunc_Surface_DT_Decal_Left_Foot = InCallFunc_Surface_DT_Decal_Left_Foot;
	Parms.CallFunc_Surface_DT_Decal_Right_Foot = InCallFunc_Surface_DT_Decal_Right_Foot;
	Parms.CallFunc_Surface_DT_NiagaraSystem = InCallFunc_Surface_DT_NiagaraSystem;
	Parms.CallFunc_AkEventLocation_AkComponent = InCallFunc_AkEventLocation_AkComponent;
	Parms.CallFunc_AkEventLocation_Playing_ID = InCallFunc_AkEventLocation_Playing_ID;
	Parms.K2Node_Select_Default_1 = InK2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.PlayEquipSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class AEquipViewActor> Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               Unequip                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Equip_View_Actor                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Get_Audio_Event_AudioEvent                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Audio_Event_Found                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Get_Audio_Event_AudioEvent_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Audio_Event_Found_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::PlayEquipSound(TSubclassOf<class AEquipViewActor> InClass, bool InUnequip, class UClass* InK2Node_ClassDynamicCast_AsBP_Equip_View_Actor, bool InK2Node_ClassDynamicCast_bSuccess, bool InCallFunc_IsValidClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class UAkAudioEvent* InCallFunc_Get_Audio_Event_AudioEvent, bool InCallFunc_Get_Audio_Event_Found, class UAkAudioEvent* InCallFunc_Get_Audio_Event_AudioEvent_1, bool InCallFunc_Get_Audio_Event_Found_1, bool InTemp_bool_Variable, class UAkAudioEvent* InK2Node_Select_Default, int32 InCallFunc_AkEventActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "PlayEquipSound");

	Params::UComp_Player_Audio_C_PlayEquipSound_Params Parms{};

	Parms.Class = InClass;
	Parms.Unequip = InUnequip;
	Parms.K2Node_ClassDynamicCast_AsBP_Equip_View_Actor = InK2Node_ClassDynamicCast_AsBP_Equip_View_Actor;
	Parms.K2Node_ClassDynamicCast_bSuccess = InK2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = InCallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Get_Audio_Event_AudioEvent = InCallFunc_Get_Audio_Event_AudioEvent;
	Parms.CallFunc_Get_Audio_Event_Found = InCallFunc_Get_Audio_Event_Found;
	Parms.CallFunc_Get_Audio_Event_AudioEvent_1 = InCallFunc_Get_Audio_Event_AudioEvent_1;
	Parms.CallFunc_Get_Audio_Event_Found_1 = InCallFunc_Get_Audio_Event_Found_1;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_AkEventActor_ReturnValue = InCallFunc_AkEventActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.Find Distance to Ground
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaMoveablePawn*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Hit                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Distance_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::Find_Distance_to_Ground(class AValeriaMoveablePawn* InCharacter, bool* InHit, double* InDistance, TArray<class AActor*>& InTemp_object_Variable, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, double InCallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue, const struct FHitResult& InCallFunc_LineTraceSingle_OutHit, bool InCallFunc_LineTraceSingle_ReturnValue, bool InCallFunc_BreakHitResult_bBlockingHit, bool InCallFunc_BreakHitResult_bInitialOverlap, float InCallFunc_BreakHitResult_Time, float InCallFunc_BreakHitResult_Distance, const struct FVector& InCallFunc_BreakHitResult_Location, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint, const struct FVector& InCallFunc_BreakHitResult_Normal, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat, class AActor* InCallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent, class FName InCallFunc_BreakHitResult_HitBoneName, class FName InCallFunc_BreakHitResult_BoneName, int32 InCallFunc_BreakHitResult_HitItem, int32 InCallFunc_BreakHitResult_ElementIndex, int32 InCallFunc_BreakHitResult_FaceIndex, const struct FVector& InCallFunc_BreakHitResult_TraceStart, const struct FVector& InCallFunc_BreakHitResult_TraceEnd, double InK2Node_FunctionResult_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "Find Distance to Ground");

	Params::UComp_Player_Audio_C_Find_Distance_to_Ground_Params Parms{};

	Parms.Character = InCharacter;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = InCallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = InCallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = InCallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = InCallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = InCallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = InCallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = InCallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = InCallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = InCallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = InCallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = InCallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = InCallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = InCallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = InCallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = InCallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = InCallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = InCallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = InCallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = InCallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = InCallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = InCallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = InCallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = InCallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = InCallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = InCallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_FunctionResult_Distance_ImplicitCast = InK2Node_FunctionResult_Distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InHit != nullptr)
		*InHit = Parms.Hit;

	if (InDistance != nullptr)
		*InDistance = Parms.Distance;

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.ItemAddedSFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FValeriaItem                Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UComp_Player_Audio_C::ItemAddedSFX(const struct FValeriaItem& InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "ItemAddedSFX");

	Params::UComp_Player_Audio_C_ItemAddedSFX_Params Parms{};

	Parms.Item = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.BindItemAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::BindItemAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "BindItemAudio");

	Params::UComp_Player_Audio_C_BindItemAudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.UnbindItemAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::UnbindItemAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "UnbindItemAudio");

	Params::UComp_Player_Audio_C_UnbindItemAudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.EquippedItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentComponent*         EquipmentComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FEquipmentItem              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UComp_Player_Audio_C::EquippedItemChanged(class UEquipmentComponent* InEquipmentComponent, const struct FEquipmentItem& InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "EquippedItemChanged");

	Params::UComp_Player_Audio_C_EquippedItemChanged_Params Parms{};

	Parms.EquipmentComponent = InEquipmentComponent;
	Parms.Item = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.EquippedItemVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentComponent*         EquipmentComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bNewVisibility                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::EquippedItemVisibilityChanged(class UEquipmentComponent* InEquipmentComponent, bool InbNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "EquippedItemVisibilityChanged");

	Params::UComp_Player_Audio_C_EquippedItemVisibilityChanged_Params Parms{};

	Parms.EquipmentComponent = InEquipmentComponent;
	Parms.bNewVisibility = InbNewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.BindItemAudioLocal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::BindItemAudioLocal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "BindItemAudioLocal");

	Params::UComp_Player_Audio_C_BindItemAudioLocal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.Falling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::Falling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "Falling");

	Params::UComp_Player_Audio_C_Falling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.GlidingStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::GlidingStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "GlidingStart");

	Params::UComp_Player_Audio_C_GlidingStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.GlidingEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::GlidingEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "GlidingEnd");

	Params::UComp_Player_Audio_C_GlidingEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.Gliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::Gliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "Gliding");

	Params::UComp_Player_Audio_C_Gliding_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.MovementModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaMoveablePawn*        Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PreviousCustomMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::MovementModeChanged(class AValeriaMoveablePawn* InPawn, enum class EMovementMode InPrevMovementMode, uint8 InPreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "MovementModeChanged");

	Params::UComp_Player_Audio_C_MovementModeChanged_Params Parms{};

	Parms.Pawn = InPawn;
	Parms.PrevMovementMode = InPrevMovementMode;
	Parms.PreviousCustomMode = InPreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.BindMovementAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::BindMovementAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "BindMovementAudio");

	Params::UComp_Player_Audio_C_BindMovementAudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.BeginFalling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::BeginFalling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "BeginFalling");

	Params::UComp_Player_Audio_C_BeginFalling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.EndFalling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::EndFalling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "EndFalling");

	Params::UComp_Player_Audio_C_EndFalling_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.GliderChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGliding                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::GliderChanged(bool InIsGliding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "GliderChanged");

	Params::UComp_Player_Audio_C_GliderChanged_Params Parms{};

	Parms.IsGliding = InIsGliding;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.ClimbChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsClimbing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::ClimbChanged(bool InIsClimbing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "ClimbChanged");

	Params::UComp_Player_Audio_C_ClimbChanged_Params Parms{};

	Parms.IsClimbing = InIsClimbing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.ClimbDash
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsClimbing                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValeriaClimbDashDirectionDirection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::ClimbDash(bool InIsClimbing, enum class EValeriaClimbDashDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "ClimbDash");

	Params::UComp_Player_Audio_C_ClimbDash_Params Parms{};

	Parms.IsClimbing = InIsClimbing;
	Parms.Direction = InDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.ClimbOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::ClimbOutro(const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "ClimbOutro");

	Params::UComp_Player_Audio_C_ClimbOutro_Params Parms{};

	Parms.Location = InLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.BeginRun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::BeginRun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "BeginRun");

	Params::UComp_Player_Audio_C_BeginRun_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.BeginSprint
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::BeginSprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "BeginSprint");

	Params::UComp_Player_Audio_C_BeginSprint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.MovementUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::MovementUpdate(float InDeltaSeconds, const struct FVector& InOldLocation, const struct FVector& InOldVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "MovementUpdate");

	Params::UComp_Player_Audio_C_MovementUpdate_Params Parms{};

	Parms.DeltaSeconds = InDeltaSeconds;
	Parms.OldLocation = InOldLocation;
	Parms.OldVelocity = InOldVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.SprintChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*           Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsSprinting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::SprintChange(class AValeriaCharacter* InCharacter, bool InIsSprinting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "SprintChange");

	Params::UComp_Player_Audio_C_SprintChange_Params Parms{};

	Parms.Character = InCharacter;
	Parms.IsSprinting = InIsSprinting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.UnbindMovementAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::UnbindMovementAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "UnbindMovementAudio");

	Params::UComp_Player_Audio_C_UnbindMovementAudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "ReceiveBeginPlay");

	Params::UComp_Player_Audio_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.ReplicatedAudioEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               WasDamaged                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::ReplicatedAudioEvent(class AActor* InActor, bool InWasDamaged, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InItemType, class AActor* InInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "ReplicatedAudioEvent");

	Params::UComp_Player_Audio_C_ReplicatedAudioEvent_Params Parms{};

	Parms.Actor = InActor;
	Parms.WasDamaged = InWasDamaged;
	Parms.ItemType = InItemType;
	Parms.Instigator = InInstigator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.SetDefaultMixState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::SetDefaultMixState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "SetDefaultMixState");

	Params::UComp_Player_Audio_C_SetDefaultMixState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "ReceiveEndPlay");

	Params::UComp_Player_Audio_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = InEndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.OnPossessionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Player_Audio_C::OnPossessionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "OnPossessionChanged");

	Params::UComp_Player_Audio_C_OnPossessionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Player_Audio.Comp_Player_Audio_C.ExecuteUbergraph_Comp_Player_Audio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FValeriaItem                K2Node_CustomEvent_Item_1                                        ()
// int32                              CallFunc_AkEventActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*         CallFunc_GetEquipment_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*         K2Node_CustomEvent_EquipmentComponent_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FEquipmentItem              K2Node_CustomEvent_Item                                          ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*         K2Node_CustomEvent_EquipmentComponent                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bNewVisibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEquipmentItem              CallFunc_GetEquippedItem_ReturnValue                             ()
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AEquipViewActor*             CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaMoveablePawn*        K2Node_CustomEvent_Pawn                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_PrevMovementMode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_PreviousCustomMode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Distance_to_Ground_Hit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Find_Distance_to_Ground_Distance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue_1                               (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isGliding                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isClimbing_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isClimbing                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValeriaClimbDashDirectionK2Node_CustomEvent_direction                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*K2Node_DynamicCast_AsValeria_Character_Move_Component            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DeltaSeconds                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OldLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OldVelocity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_CustomEvent_Character                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isSprinting                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_2      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Distance_to_Ground_Hit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Find_Distance_to_Ground_Distance_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*         CallFunc_GetEquipment_ReturnValue_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_3      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*K2Node_DynamicCast_AsValeria_Character_Move_Component_1          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_4      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WasDamaged                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>K2Node_CustomEvent_ItemType                                      (HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Instigator                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FValeriaItem                CallFunc_Array_Get_Item_1                                        ()
// class ABP_ValeriaGatherableLoot_C* K2Node_DynamicCast_AsBP_Valeria_Gatherable_Loot                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_ItemTypeDefinitionAsset*K2Node_DynamicCast_AsItem_Type_Definition                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_ItemTypeDefinitionAsset*K2Node_DynamicCast_AsItem_Type_Definition_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioConfig            CallFunc_GetDataTableRowFromName_OutRow                          ()
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_NewRotationYaw_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Player_Audio_C::ExecuteUbergraph_Comp_Player_Audio(int32 InEntryPoint, bool InCallFunc_IsValid_ReturnValue, const struct FValeriaItem& InK2Node_CustomEvent_Item_1, int32 InCallFunc_AkEventActor_ReturnValue, int32 InCallFunc_Array_AddUnique_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_GreaterEqual_IntInt_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue_1, bool InCallFunc_Not_PreBool_ReturnValue, int32 InCallFunc_AkEventActor_ReturnValue_1, bool InTemp_bool_Has_Been_Initd_Variable, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, bool InTemp_bool_IsClosed_Variable, bool InCallFunc_IsValid_ReturnValue_3, class UEquipmentComponent* InCallFunc_GetEquipment_ReturnValue, bool InCallFunc_IsValid_ReturnValue_4, bool InTemp_bool_Has_Been_Initd_Variable_1, class UEquipmentComponent* InK2Node_CustomEvent_EquipmentComponent_1, const struct FEquipmentItem& InK2Node_CustomEvent_Item, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, class UEquipmentComponent* InK2Node_CustomEvent_EquipmentComponent, bool InK2Node_CustomEvent_bNewVisibility, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_4, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_5, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, const struct FEquipmentItem& InCallFunc_GetEquippedItem_ReturnValue, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1, class AEquipViewActor* InCallFunc_Array_Get_Item, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_1, class UClass* InCallFunc_GetObjectClass_ReturnValue, bool InTemp_bool_IsClosed_Variable_1, double InCallFunc_Subtract_DoubleDouble_ReturnValue, double InCallFunc_Subtract_DoubleDouble_ReturnValue_1, int32 InCallFunc_AkEventActor_ReturnValue_2, const struct FRotator& InCallFunc_K2_GetActorRotation_ReturnValue, float InCallFunc_BreakRotator_Roll, float InCallFunc_BreakRotator_Pitch, float InCallFunc_BreakRotator_Yaw, int32 InCallFunc_AkEventActor_ReturnValue_3, class AValeriaMoveablePawn* InK2Node_CustomEvent_Pawn, enum class EMovementMode InK2Node_CustomEvent_PrevMovementMode, uint8 InK2Node_CustomEvent_PreviousCustomMode, bool InK2Node_SwitchEnum_CmpSuccess, const struct FVector& InCallFunc_GetVelocity_ReturnValue, bool InCallFunc_Find_Distance_to_Ground_Hit, double InCallFunc_Find_Distance_to_Ground_Distance, double InCallFunc_VSize_ReturnValue, bool InCallFunc_InRange_FloatFloat_ReturnValue, const struct FVector& InCallFunc_GetVelocity_ReturnValue_1, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, const struct FVector& InCallFunc_MakeVector_ReturnValue, double InCallFunc_VSize_ReturnValue_1, bool InTemp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 InCallFunc_AkEventActor_ReturnValue_4, const struct FTimerHandle& InCallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& InCallFunc_K2_SetTimer_ReturnValue_1, bool InK2Node_CustomEvent_isGliding, int32 InCallFunc_AkEventActor_ReturnValue_5, int32 InCallFunc_AkEventActor_ReturnValue_6, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_6, int32 InCallFunc_Add_IntInt_ReturnValue, bool InK2Node_CustomEvent_isClimbing_1, bool InK2Node_CustomEvent_isClimbing, enum class EValeriaClimbDashDirection InK2Node_CustomEvent_direction, class UValeriaCharacterMoveComponent* InK2Node_DynamicCast_AsValeria_Character_Move_Component, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_NotEqual_ByteByte_ReturnValue, const struct FVector& InK2Node_CustomEvent_Location, bool InCallFunc_BooleanAND_ReturnValue, bool InTemp_bool_Has_Been_Initd_Variable_2, int32 InCallFunc_AkEventActor_ReturnValue_7, float InK2Node_CustomEvent_DeltaSeconds, const struct FVector& InK2Node_CustomEvent_OldLocation, const struct FVector& InK2Node_CustomEvent_OldVelocity, class AValeriaCharacter* InK2Node_CustomEvent_Character, bool InK2Node_CustomEvent_isSprinting, int32 InCallFunc_AkEventActor_ReturnValue_8, int32 InCallFunc_AkEventActor_ReturnValue_9, const struct FVector& InCallFunc_GetVelocity_ReturnValue_2, bool InCallFunc_IsValid_ReturnValue_5, double InCallFunc_VSize_ReturnValue_2, bool InCallFunc_Greater_DoubleDouble_ReturnValue, bool InCallFunc_IsValid_ReturnValue_6, bool InTemp_bool_IsClosed_Variable_2, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_2, bool InCallFunc_Find_Distance_to_Ground_Hit_1, double InCallFunc_Find_Distance_to_Ground_Distance_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_12, bool InCallFunc_IsValid_ReturnValue_7, class UEquipmentComponent* InCallFunc_GetEquipment_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_8, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_13, bool InCallFunc_IsLocallyControlled_ReturnValue, bool InCallFunc_K2_IsValidTimerHandle_ReturnValue, bool InCallFunc_K2_IsValidTimerHandle_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_9, bool InCallFunc_IsValid_ReturnValue_10, bool InCallFunc_IsValid_ReturnValue_11, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_3, class UValeriaCharacterMoveComponent* InK2Node_DynamicCast_AsValeria_Character_Move_Component_1, bool InK2Node_DynamicCast_bSuccess_1, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_4, bool InCallFunc_IsSprinting_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, bool InCallFunc_IsServer_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess_2, bool InCallFunc_Not_PreBool_ReturnValue_1, int32 InTemp_int_Array_Index_Variable, class AActor* InK2Node_CustomEvent_actor, bool InK2Node_CustomEvent_WasDamaged, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InK2Node_CustomEvent_ItemType, class AActor* InK2Node_CustomEvent_Instigator, const struct FValeriaItem& InCallFunc_Array_Get_Item_1, class ABP_ValeriaGatherableLoot_C* InK2Node_DynamicCast_AsBP_Valeria_Gatherable_Loot, bool InK2Node_DynamicCast_bSuccess_3, class UObject* InCallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* InK2Node_DynamicCast_AsItem_Type_Definition, bool InK2Node_DynamicCast_bSuccess_4, bool InCallFunc_IsValid_ReturnValue_12, class UObject* InCallFunc_LoadAsset_Blocking_ReturnValue_1, class UVAL_ItemTypeDefinitionAsset* InK2Node_DynamicCast_AsItem_Type_Definition_1, bool InK2Node_DynamicCast_bSuccess_5, bool InCallFunc_IsValid_ReturnValue_13, const struct FItemAudioConfig& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue, bool InCallFunc_IsValid_ReturnValue_14, bool InCallFunc_IsValid_ReturnValue_15, int32 InCallFunc_AkEventActor_ReturnValue_10, bool InCallFunc_IsValid_ReturnValue_16, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_18, enum class EEndPlayReason InK2Node_Event_EndPlayReason, bool InCallFunc_IsServer_ReturnValue_1, bool InCallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_19, bool InCallFunc_IsLocallyControlled_ReturnValue_1, float InCallFunc_RetriggerableDelay_Duration_ImplicitCast, double InK2Node_VariableSet_NewRotationYaw_ImplicitCast, float InCallFunc_K2_SetTimer_Time_ImplicitCast, float InCallFunc_K2_SetTimer_Time_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Player_Audio_C", "ExecuteUbergraph_Comp_Player_Audio");

	Params::UComp_Player_Audio_C_ExecuteUbergraph_Comp_Player_Audio_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_Item_1 = InK2Node_CustomEvent_Item_1;
	Parms.CallFunc_AkEventActor_ReturnValue = InCallFunc_AkEventActor_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = InCallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = InCallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = InCallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AkEventActor_ReturnValue_1 = InCallFunc_AkEventActor_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = InTemp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_IsClosed_Variable = InTemp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = InCallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetEquipment_ReturnValue = InCallFunc_GetEquipment_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = InCallFunc_IsValid_ReturnValue_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = InTemp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_EquipmentComponent_1 = InK2Node_CustomEvent_EquipmentComponent_1;
	Parms.K2Node_CustomEvent_Item = InK2Node_CustomEvent_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = InK2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_EquipmentComponent = InK2Node_CustomEvent_EquipmentComponent;
	Parms.K2Node_CustomEvent_bNewVisibility = InK2Node_CustomEvent_bNewVisibility;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = InK2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = InK2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue = InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = InK2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = InCallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1 = InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = InCallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = InCallFunc_GetObjectClass_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = InTemp_bool_IsClosed_Variable_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = InCallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = InCallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_AkEventActor_ReturnValue_2 = InCallFunc_AkEventActor_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = InCallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = InCallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = InCallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = InCallFunc_BreakRotator_Yaw;
	Parms.CallFunc_AkEventActor_ReturnValue_3 = InCallFunc_AkEventActor_ReturnValue_3;
	Parms.K2Node_CustomEvent_Pawn = InK2Node_CustomEvent_Pawn;
	Parms.K2Node_CustomEvent_PrevMovementMode = InK2Node_CustomEvent_PrevMovementMode;
	Parms.K2Node_CustomEvent_PreviousCustomMode = InK2Node_CustomEvent_PreviousCustomMode;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetVelocity_ReturnValue = InCallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Find_Distance_to_Ground_Hit = InCallFunc_Find_Distance_to_Ground_Hit;
	Parms.CallFunc_Find_Distance_to_Ground_Distance = InCallFunc_Find_Distance_to_Ground_Distance;
	Parms.CallFunc_VSize_ReturnValue = InCallFunc_VSize_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = InCallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = InCallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = InCallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = InCallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = InCallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = InCallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue_1 = InCallFunc_VSize_ReturnValue_1;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = InTemp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_AkEventActor_ReturnValue_4 = InCallFunc_AkEventActor_ReturnValue_4;
	Parms.CallFunc_K2_SetTimer_ReturnValue = InCallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue_1 = InCallFunc_K2_SetTimer_ReturnValue_1;
	Parms.K2Node_CustomEvent_isGliding = InK2Node_CustomEvent_isGliding;
	Parms.CallFunc_AkEventActor_ReturnValue_5 = InCallFunc_AkEventActor_ReturnValue_5;
	Parms.CallFunc_AkEventActor_ReturnValue_6 = InCallFunc_AkEventActor_ReturnValue_6;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = InK2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_isClimbing_1 = InK2Node_CustomEvent_isClimbing_1;
	Parms.K2Node_CustomEvent_isClimbing = InK2Node_CustomEvent_isClimbing;
	Parms.K2Node_CustomEvent_direction = InK2Node_CustomEvent_direction;
	Parms.K2Node_DynamicCast_AsValeria_Character_Move_Component = InK2Node_DynamicCast_AsValeria_Character_Move_Component;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = InCallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_Location = InK2Node_CustomEvent_Location;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = InTemp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_AkEventActor_ReturnValue_7 = InCallFunc_AkEventActor_ReturnValue_7;
	Parms.K2Node_CustomEvent_DeltaSeconds = InK2Node_CustomEvent_DeltaSeconds;
	Parms.K2Node_CustomEvent_OldLocation = InK2Node_CustomEvent_OldLocation;
	Parms.K2Node_CustomEvent_OldVelocity = InK2Node_CustomEvent_OldVelocity;
	Parms.K2Node_CustomEvent_Character = InK2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_isSprinting = InK2Node_CustomEvent_isSprinting;
	Parms.CallFunc_AkEventActor_ReturnValue_8 = InCallFunc_AkEventActor_ReturnValue_8;
	Parms.CallFunc_AkEventActor_ReturnValue_9 = InCallFunc_AkEventActor_ReturnValue_9;
	Parms.CallFunc_GetVelocity_ReturnValue_2 = InCallFunc_GetVelocity_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = InCallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_VSize_ReturnValue_2 = InCallFunc_VSize_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = InCallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = InCallFunc_IsValid_ReturnValue_6;
	Parms.Temp_bool_IsClosed_Variable_2 = InTemp_bool_IsClosed_Variable_2;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_2 = InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_2;
	Parms.CallFunc_Find_Distance_to_Ground_Hit_1 = InCallFunc_Find_Distance_to_Ground_Hit_1;
	Parms.CallFunc_Find_Distance_to_Ground_Distance_1 = InCallFunc_Find_Distance_to_Ground_Distance_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = InK2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = InK2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = InK2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = InK2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = InK2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = InK2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_IsValid_ReturnValue_7 = InCallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetEquipment_ReturnValue_1 = InCallFunc_GetEquipment_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_8 = InCallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = InK2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = InCallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = InCallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = InCallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = InCallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = InCallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_3 = InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsValeria_Character_Move_Component_1 = InK2Node_DynamicCast_AsValeria_Character_Move_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_4 = InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_4;
	Parms.CallFunc_IsSprinting_ReturnValue = InCallFunc_IsSprinting_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = InK2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = InCallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_actor = InK2Node_CustomEvent_actor;
	Parms.K2Node_CustomEvent_WasDamaged = InK2Node_CustomEvent_WasDamaged;
	Parms.K2Node_CustomEvent_ItemType = InK2Node_CustomEvent_ItemType;
	Parms.K2Node_CustomEvent_Instigator = InK2Node_CustomEvent_Instigator;
	Parms.CallFunc_Array_Get_Item_1 = InCallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBP_Valeria_Gatherable_Loot = InK2Node_DynamicCast_AsBP_Valeria_Gatherable_Loot;
	Parms.K2Node_DynamicCast_bSuccess_3 = InK2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = InCallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Type_Definition = InK2Node_DynamicCast_AsItem_Type_Definition;
	Parms.K2Node_DynamicCast_bSuccess_4 = InK2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_12 = InCallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = InCallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsItem_Type_Definition_1 = InK2Node_DynamicCast_AsItem_Type_Definition_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = InK2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_13 = InCallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = InCallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = InCallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_14 = InCallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_15 = InCallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_AkEventActor_ReturnValue_10 = InCallFunc_AkEventActor_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_16 = InCallFunc_IsValid_ReturnValue_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = InK2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = InK2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = InK2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = InK2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = InK2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_Event_EndPlayReason = InK2Node_Event_EndPlayReason;
	Parms.CallFunc_IsServer_ReturnValue_1 = InCallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = InCallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = InK2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = InCallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = InCallFunc_RetriggerableDelay_Duration_ImplicitCast;
	Parms.K2Node_VariableSet_NewRotationYaw_ImplicitCast = InK2Node_VariableSet_NewRotationYaw_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = InCallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast_1 = InCallFunc_K2_SetTimer_Time_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
