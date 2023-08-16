#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

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

void UAk_OneShot_C::PlayAudio(class USkeletalMeshComponent* MeshComp, bool* Success, class UAkComponent* AK, class AActor* Owner, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AkEventComponent_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAkComponent* CallFunc_AkEventLocationWithActor_AkComponent, int32 CallFunc_AkEventLocationWithActor_Playing_ID, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue_1, bool CallFunc_AkGetComponent_ComponentCreated_1, class UAkComponent* CallFunc_AkGetComponent_AkComponent_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UAkComponent* CallFunc_AkEventLocationWithActor_AkComponent_1, int32 CallFunc_AkEventLocationWithActor_Playing_ID_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShot_C", "PlayAudio");

	Params::UAk_OneShot_C_PlayAudio_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.AK = AK;
	Parms.Owner = Owner;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AkEventComponent_ReturnValue = CallFunc_AkEventComponent_ReturnValue;
	Parms.CallFunc_AkEventComponent_ReturnValue_1 = CallFunc_AkEventComponent_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_AkEventLocationWithActor_AkComponent = CallFunc_AkEventLocationWithActor_AkComponent;
	Parms.CallFunc_AkEventLocationWithActor_Playing_ID = CallFunc_AkEventLocationWithActor_Playing_ID;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_AkGetComponent_ComponentCreated = CallFunc_AkGetComponent_ComponentCreated;
	Parms.CallFunc_AkGetComponent_AkComponent = CallFunc_AkGetComponent_AkComponent;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_AkGetComponent_ComponentCreated_1 = CallFunc_AkGetComponent_ComponentCreated_1;
	Parms.CallFunc_AkGetComponent_AkComponent_1 = CallFunc_AkGetComponent_AkComponent_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_4 = CallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_AkEventLocationWithActor_AkComponent_1 = CallFunc_AkEventLocationWithActor_AkComponent_1;
	Parms.CallFunc_AkEventLocationWithActor_Playing_ID_1 = CallFunc_AkEventLocationWithActor_Playing_ID_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
