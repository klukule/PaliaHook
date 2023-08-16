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


// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayAudio_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAk_OneShotByMapping_C::Received_Notify(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, bool InCallFunc_IsDedicatedServer_ReturnValue, bool InCallFunc_PlayAudio_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShotByMapping_C", "Received_Notify");

	Params::UAk_OneShotByMapping_C_Received_Notify_Params Parms{};

	Parms.MeshComp = InMeshComp;
	Parms.Animation = InAnimation;
	Parms.EventReference = InEventReference;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_PlayAudio_Success = InCallFunc_PlayAudio_Success;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

class FString UAk_OneShotByMapping_C::GetNotifyName(const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShotByMapping_C", "GetNotifyName");

	Params::UAk_OneShotByMapping_C_GetNotifyName_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.PlayAudioMappingHelper
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAbilityAnimationComponent*  AbilityAnimComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             AttachToComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        MappingQualifier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachLocation         AttachRule                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AttachOffset                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkEvent                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAudioMappingConfig         CallFunc_FindAudioMapping_ReturnValue                            ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AkGetComponent_ComponentCreated                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkGetComponent_AkComponent                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventComponent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkEventLocationWithActor_AkComponent                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventLocationWithActor_Playing_ID                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_OneShotByMapping_C::PlayAudioMappingHelper(class UAbilityAnimationComponent* InAbilityAnimComp, class USceneComponent* InAttachToComponent, class FName InMappingQualifier, bool* InSuccess, enum class EAttachLocation InAttachRule, const struct FVector& InAttachOffset, class FName InSocketName, class UAkAudioEvent* InAkEvent, const struct FAudioMappingConfig& InCallFunc_FindAudioMapping_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, const struct FTransform& InCallFunc_GetSocketTransform_ReturnValue, int32 InCallFunc_AkEventComponent_ReturnValue, const struct FVector& InCallFunc_BreakTransform_Location, const struct FRotator& InCallFunc_BreakTransform_Rotation, const struct FVector& InCallFunc_BreakTransform_Scale, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShotByMapping_C", "PlayAudioMappingHelper");

	Params::UAk_OneShotByMapping_C_PlayAudioMappingHelper_Params Parms{};

	Parms.AbilityAnimComp = InAbilityAnimComp;
	Parms.AttachToComponent = InAttachToComponent;
	Parms.MappingQualifier = InMappingQualifier;
	Parms.AttachRule = InAttachRule;
	Parms.AttachOffset = InAttachOffset;
	Parms.SocketName = InSocketName;
	Parms.AkEvent = InAkEvent;
	Parms.CallFunc_FindAudioMapping_ReturnValue = InCallFunc_FindAudioMapping_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AkGetComponent_ComponentCreated = InCallFunc_AkGetComponent_ComponentCreated;
	Parms.CallFunc_AkGetComponent_AkComponent = InCallFunc_AkGetComponent_AkComponent;
	Parms.CallFunc_GetSocketTransform_ReturnValue = InCallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_AkEventComponent_ReturnValue = InCallFunc_AkEventComponent_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = InCallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = InCallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = InCallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_AkEventLocationWithActor_AkComponent = InCallFunc_AkEventLocationWithActor_AkComponent;
	Parms.CallFunc_AkEventLocationWithActor_Playing_ID = InCallFunc_AkEventLocationWithActor_Playing_ID;

	UObject::ProcessEvent(Func, &Parms);

	if (InSuccess != nullptr)
		*InSuccess = Parms.Success;

}


// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.PlayAudio
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttachLocation         AttachRule                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AttachOffset                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkEvent                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAnimationComponent*  AbilityAnimComp                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               SuccessfulPlay                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAnimationComponent*  CallFunc_GetAbilityAnimation_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AkGetComponent_ComponentCreated                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkGetComponent_AkComponent                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventComponent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkEventLocationWithActor_AkComponent                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventLocationWithActor_Playing_ID                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioMappingConfig         CallFunc_GetDataTableRowFromName_OutRow                          ()
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayAudioMappingHelper_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayAudioMappingHelper_Success_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_OneShotByMapping_C::PlayAudio(class USkeletalMeshComponent* InMeshComp, bool* InSuccess, enum class EAttachLocation InAttachRule, const struct FVector& InAttachOffset, class FName InSocketName, class UAkAudioEvent* InAkEvent, class UAbilityAnimationComponent* InAbilityAnimComp, bool InSuccessfulPlay, int32 InTemp_int_Array_Index_Variable, class AActor* InCallFunc_GetOwner_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* InCallFunc_GetAbilityAnimation_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, class AActor* InCallFunc_GetOwner_ReturnValue_1, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, int32 InCallFunc_AkEventComponent_ReturnValue, const struct FTransform& InCallFunc_GetSocketTransform_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, const struct FVector& InCallFunc_BreakTransform_Location, const struct FRotator& InCallFunc_BreakTransform_Rotation, const struct FVector& InCallFunc_BreakTransform_Scale, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue, const struct FAudioMappingConfig& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& InCallFunc_Map_Keys_Keys, class FName InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_PlayAudioMappingHelper_Success, bool InCallFunc_PlayAudioMappingHelper_Success_1, bool InCallFunc_NotEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShotByMapping_C", "PlayAudio");

	Params::UAk_OneShotByMapping_C_PlayAudio_Params Parms{};

	Parms.MeshComp = InMeshComp;
	Parms.AttachRule = InAttachRule;
	Parms.AttachOffset = InAttachOffset;
	Parms.SocketName = InSocketName;
	Parms.AkEvent = InAkEvent;
	Parms.AbilityAnimComp = InAbilityAnimComp;
	Parms.SuccessfulPlay = InSuccessfulPlay;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityAnimation_ReturnValue = InCallFunc_GetAbilityAnimation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwner_ReturnValue_1 = InCallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AkGetComponent_ComponentCreated = InCallFunc_AkGetComponent_ComponentCreated;
	Parms.CallFunc_AkGetComponent_AkComponent = InCallFunc_AkGetComponent_AkComponent;
	Parms.CallFunc_AkEventComponent_ReturnValue = InCallFunc_AkEventComponent_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue = InCallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = InCallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = InCallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = InCallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_AkEventLocationWithActor_AkComponent = InCallFunc_AkEventLocationWithActor_AkComponent;
	Parms.CallFunc_AkEventLocationWithActor_Playing_ID = InCallFunc_AkEventLocationWithActor_Playing_ID;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = InCallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = InCallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = InCallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = InCallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_PlayAudioMappingHelper_Success = InCallFunc_PlayAudioMappingHelper_Success;
	Parms.CallFunc_PlayAudioMappingHelper_Success_1 = InCallFunc_PlayAudioMappingHelper_Success_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = InCallFunc_NotEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InSuccess != nullptr)
		*InSuccess = Parms.Success;

}


// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.FindAudioMapping
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAbilityAnimationComponent*  AbilityAnimComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        MappingQualifier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioMappingConfig         ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UDataTable*                  MappingTable                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAudioMappingConfig         CallFunc_GetDataTableRowFromName_OutRow                          ()
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FAudioMappingConfig UAk_OneShotByMapping_C::FindAudioMapping(class UAbilityAnimationComponent* InAbilityAnimComp, class FName InMappingQualifier, class UDataTable* InMappingTable, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UDataTable* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue, const struct FAudioMappingConfig& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue, bool InCallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShotByMapping_C", "FindAudioMapping");

	Params::UAk_OneShotByMapping_C_FindAudioMapping_Params Parms{};

	Parms.AbilityAnimComp = InAbilityAnimComp;
	Parms.MappingQualifier = InMappingQualifier;
	Parms.MappingTable = InMappingTable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = InCallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = InCallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = InCallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = InCallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = InCallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
