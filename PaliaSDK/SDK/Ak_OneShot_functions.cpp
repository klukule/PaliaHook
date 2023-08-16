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


// Function Ak_OneShot.Ak_OneShot_C.PlayAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AK                                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventComponent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventComponent_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkEventLocationWithActor_AkComponent                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventLocationWithActor_Playing_ID                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AkGetComponent_ComponentCreated                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkGetComponent_AkComponent                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AkGetComponent_ComponentCreated_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkGetComponent_AkComponent_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkEventLocationWithActor_AkComponent_1                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventLocationWithActor_Playing_ID_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_OneShot_C::PlayAudio(class USkeletalMeshComponent* InMeshComp, bool* InSuccess, class UAkComponent* InAK, class AActor* InOwner, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, int32 InCallFunc_AkEventComponent_ReturnValue, int32 InCallFunc_AkEventComponent_ReturnValue_1, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, class USceneComponent* InCallFunc_K2_GetRootComponent_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID, class AActor* InCallFunc_GetOwner_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, class AActor* InCallFunc_GetOwner_ReturnValue_1, class FName InCallFunc_Conv_StringToName_ReturnValue, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, class AActor* InCallFunc_GetOwner_ReturnValue_2, class AActor* InCallFunc_GetOwner_ReturnValue_3, bool InCallFunc_IsValid_ReturnValue_3, class FName InCallFunc_Conv_StringToName_ReturnValue_1, bool InCallFunc_AkGetComponent_ComponentCreated_1, class UAkComponent* InCallFunc_AkGetComponent_AkComponent_1, class FName InCallFunc_Conv_StringToName_ReturnValue_2, class AActor* InCallFunc_GetOwner_ReturnValue_4, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent_1, int32 InCallFunc_AkEventLocationWithActor_Playing_ID_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShot_C", "PlayAudio");

	Params::UAk_OneShot_C_PlayAudio_Params Parms{};

	Parms.MeshComp = InMeshComp;
	Parms.AK = InAK;
	Parms.Owner = InOwner;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AkEventComponent_ReturnValue = InCallFunc_AkEventComponent_ReturnValue;
	Parms.CallFunc_AkEventComponent_ReturnValue_1 = InCallFunc_AkEventComponent_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = InCallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_AkEventLocationWithActor_AkComponent = InCallFunc_AkEventLocationWithActor_AkComponent;
	Parms.CallFunc_AkEventLocationWithActor_Playing_ID = InCallFunc_AkEventLocationWithActor_Playing_ID;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_1 = InCallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = InCallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_AkGetComponent_ComponentCreated = InCallFunc_AkGetComponent_ComponentCreated;
	Parms.CallFunc_AkGetComponent_AkComponent = InCallFunc_AkGetComponent_AkComponent;
	Parms.CallFunc_GetOwner_ReturnValue_2 = InCallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = InCallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = InCallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = InCallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_AkGetComponent_ComponentCreated_1 = InCallFunc_AkGetComponent_ComponentCreated_1;
	Parms.CallFunc_AkGetComponent_AkComponent_1 = InCallFunc_AkGetComponent_AkComponent_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = InCallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_4 = InCallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_GetSocketLocation_ReturnValue = InCallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_AkEventLocationWithActor_AkComponent_1 = InCallFunc_AkEventLocationWithActor_AkComponent_1;
	Parms.CallFunc_AkEventLocationWithActor_Playing_ID_1 = InCallFunc_AkEventLocationWithActor_Playing_ID_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InSuccess != nullptr)
		*InSuccess = Parms.Success;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
