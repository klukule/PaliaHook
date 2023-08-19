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


// Function Ak_CreatureEvent.Ak_CreatureEvent_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

class FString UAk_CreatureEvent_C::GetNotifyName(const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_CreatureEvent_C", "GetNotifyName");

	Params::UAk_CreatureEvent_C_GetNotifyName_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ak_CreatureEvent.Ak_CreatureEvent_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkEvent                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildIsShipping_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildIsShipping_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_CreatureAudio_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_GetCreatureAudioEvent_AkEvent                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCreatureAudioEvent_Found                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkEventSpawnAttached_Ak                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventSpawnAttached_Id                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkEventLocationWithActor_AkComponent                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventLocationWithActor_Playing_ID                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAk_CreatureEvent_C::Received_Notify(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, class AActor* InOwner, class UAkAudioEvent* InAkEvent, class AActor* InCallFunc_GetOwner_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue_1, const class FString& InCallFunc_GetDisplayName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue, bool InCallFunc_BuildIsShipping_ReturnValue, const class FString& InCallFunc_GetDisplayName_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_BuildIsShipping_ReturnValue_1, bool InCallFunc_IsDedicatedServer_ReturnValue, class UComp_CreatureAudio_C* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, class UAkAudioEvent* InCallFunc_GetCreatureAudioEvent_AkEvent, bool InCallFunc_GetCreatureAudioEvent_Found, class UAkComponent* InCallFunc_AkEventSpawnAttached_Ak, int32 InCallFunc_AkEventSpawnAttached_Id, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_CreatureEvent_C", "Received_Notify");

	Params::UAk_CreatureEvent_C_Received_Notify_Params Parms{};

	Parms.MeshComp = InMeshComp;
	Parms.Animation = InAnimation;
	Parms.EventReference = InEventReference;
	Parms.Owner = InOwner;
	Parms.AkEvent = InAkEvent;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = InCallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = InCallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_BuildIsShipping_ReturnValue = InCallFunc_BuildIsShipping_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = InCallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = InCallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = InCallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BuildIsShipping_ReturnValue_1 = InCallFunc_BuildIsShipping_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCreatureAudioEvent_AkEvent = InCallFunc_GetCreatureAudioEvent_AkEvent;
	Parms.CallFunc_GetCreatureAudioEvent_Found = InCallFunc_GetCreatureAudioEvent_Found;
	Parms.CallFunc_AkEventSpawnAttached_Ak = InCallFunc_AkEventSpawnAttached_Ak;
	Parms.CallFunc_AkEventSpawnAttached_Id = InCallFunc_AkEventSpawnAttached_Id;
	Parms.CallFunc_GetSocketLocation_ReturnValue = InCallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_AkEventLocationWithActor_AkComponent = InCallFunc_AkEventLocationWithActor_AkComponent;
	Parms.CallFunc_AkEventLocationWithActor_Playing_ID = InCallFunc_AkEventLocationWithActor_Playing_ID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
