#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Ak_OneShot_Base.Ak_OneShot_Base_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)

class FString UAk_OneShot_Base_C::GetNotifyName(const class FString& CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShot_Base_C", "GetNotifyName");

	Params::UAk_OneShot_Base_C_GetNotifyName_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ak_OneShot_Base.Ak_OneShot_Base_C.PlayAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               UsedAkEvent                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AK                                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AkGetComponent_ComponentCreated                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkGetComponent_AkComponent                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventComponent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_OneShot_Base_C::PlayAudio(class USkeletalMeshComponent* MeshComp, bool* Success, class UAkAudioEvent* UsedAkEvent, class AActor* Owner, class UAkComponent* AK, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, int32 CallFunc_AkEventComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShot_Base_C", "PlayAudio");

	Params::UAk_OneShot_Base_C_PlayAudio_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.UsedAkEvent = UsedAkEvent;
	Parms.Owner = Owner;
	Parms.AK = AK;
	Parms.CallFunc_AkGetComponent_ComponentCreated = CallFunc_AkGetComponent_ComponentCreated;
	Parms.CallFunc_AkGetComponent_AkComponent = CallFunc_AkGetComponent_AkComponent;
	Parms.CallFunc_AkEventComponent_ReturnValue = CallFunc_AkEventComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Ak_OneShot_Base.Ak_OneShot_Base_C.ShouldPlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Should                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_OneShot_Base_C::ShouldPlay(class USkeletalMeshComponent* MeshComp, bool* Should, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShot_Base_C", "ShouldPlay");

	Params::UAk_OneShot_Base_C_ShouldPlay_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Should != nullptr)
		*Should = Parms.Should;

}


// Function Ak_OneShot_Base.Ak_OneShot_Base_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                AK                                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayAudio_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlay_Should                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAk_OneShot_Base_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UAkComponent* AK, bool CallFunc_PlayAudio_Success, bool CallFunc_ShouldPlay_Should)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_OneShot_Base_C", "Received_Notify");

	Params::UAk_OneShot_Base_C_Received_Notify_Params Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.EventReference = EventReference;
	Parms.AK = AK;
	Parms.CallFunc_PlayAudio_Success = CallFunc_PlayAudio_Success;
	Parms.CallFunc_ShouldPlay_Should = CallFunc_ShouldPlay_Should;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
