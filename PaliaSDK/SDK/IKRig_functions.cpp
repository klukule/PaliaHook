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


// Function IKRig.IKGoalCreatorInterface.AddIKGoals
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FIKRigGoal>OutGoals                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

void IIKGoalCreatorInterface::AddIKGoals(TMap<class FName, struct FIKRigGoal>* InOutGoals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKGoalCreatorInterface", "AddIKGoals");

	Params::IIKGoalCreatorInterface_AddIKGoals_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutGoals != nullptr)
		*InOutGoals = Parms.OutGoals;

}


// Function IKRig.IKRigComponent.SetIKRigGoalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        GoalName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PositionAlpha                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationAlpha                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRigComponent::SetIKRigGoalTransform(class FName InGoalName, const struct FTransform& InTransform, float InPositionAlpha, float InRotationAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalTransform");

	Params::UIKRigComponent_SetIKRigGoalTransform_Params Parms{};

	Parms.GoalName = InGoalName;
	Parms.Transform = InTransform;
	Parms.PositionAlpha = InPositionAlpha;
	Parms.RotationAlpha = InRotationAlpha;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        GoalName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FQuat                       Rotation                                                         (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PositionAlpha                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationAlpha                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRigComponent::SetIKRigGoalPositionAndRotation(class FName InGoalName, const struct FVector& InPosition, const struct FQuat& InRotation, float InPositionAlpha, float InRotationAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalPositionAndRotation");

	Params::UIKRigComponent_SetIKRigGoalPositionAndRotation_Params Parms{};

	Parms.GoalName = InGoalName;
	Parms.Position = InPosition;
	Parms.Rotation = InRotation;
	Parms.PositionAlpha = InPositionAlpha;
	Parms.RotationAlpha = InRotationAlpha;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRigComponent.SetIKRigGoal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIKRigGoal                  Goal                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRigComponent::SetIKRigGoal(struct FIKRigGoal& InGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoal");

	Params::UIKRigComponent_SetIKRigGoal_Params Parms{};

	Parms.Goal = InGoal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRigComponent.ClearAllGoals
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UIKRigComponent::ClearAllGoals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "ClearAllGoals");

	Params::UIKRigComponent_ClearAllGoals_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTargetRootSettings         RootSettings                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UIKRetargeter::SetRootSettingsInRetargetProfile(struct FRetargetProfile& InRetargetProfile, struct FTargetRootSettings& InRootSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetRootSettingsInRetargetProfile");

	Params::UIKRetargeter_SetRootSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;
	Parms.RootSettings = InRootSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRetargetGlobalSettings     GlobalSettings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UIKRetargeter::SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& InRetargetProfile, struct FRetargetGlobalSettings& InGlobalSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetGlobalSettingsInRetargetProfile");

	Params::UIKRetargeter_SetGlobalSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;
	Parms.GlobalSettings = InGlobalSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTargetChainSpeedPlantSettingsSpeedPlantSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        TargetChainName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& InRetargetProfile, struct FTargetChainSpeedPlantSettings& InSpeedPlantSettings, class FName InTargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainSpeedPlantSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;
	Parms.SpeedPlantSettings = InSpeedPlantSettings;
	Parms.TargetChainName = InTargetChainName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTargetChainSettings        ChainSettings                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        TargetChainName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRetargeter::SetChainSettingsInRetargetProfile(struct FRetargetProfile& InRetargetProfile, struct FTargetChainSettings& InChainSettings, class FName InTargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;
	Parms.ChainSettings = InChainSettings;
	Parms.TargetChainName = InTargetChainName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTargetChainIKSettings      IKSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        TargetChainName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRetargeter::SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& InRetargetProfile, struct FTargetChainIKSettings& InIKSettings, class FName InTargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainIKSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainIKSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;
	Parms.IKSettings = InIKSettings;
	Parms.TargetChainName = InTargetChainName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTargetChainFKSettings      FKSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FName                        TargetChainName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRetargeter::SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& InRetargetProfile, struct FTargetChainFKSettings& InFKSettings, class FName InTargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainFKSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainFKSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;
	Parms.FKSettings = InFKSettings;
	Parms.TargetChainName = InTargetChainName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTargetRootSettings         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetRootSettings UIKRetargeter::GetRootSettingsFromRetargetProfile(struct FRetargetProfile& InRetargetProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetRootSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetRootSettingsFromRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OptionalProfileName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetRootSettings         OutSettings                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UIKRetargeter::GetRootSettingsFromRetargetAsset(class UIKRetargeter* InRetargetAsset, class FName InOptionalProfileName, struct FTargetRootSettings* InOutSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetRootSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetRootSettingsFromRetargetAsset_Params Parms{};

	Parms.RetargetAsset = InRetargetAsset;
	Parms.OptionalProfileName = InOptionalProfileName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutSettings != nullptr)
		*InOutSettings = Parms.OutSettings;

}


// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRetargetGlobalSettings     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRetargetGlobalSettings UIKRetargeter::GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& InRetargetProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetGlobalSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OptionalProfileName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRetargetGlobalSettings     OutSettings                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void UIKRetargeter::GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* InRetargetAsset, class FName InOptionalProfileName, struct FRetargetGlobalSettings* InOutSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetGlobalSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Params Parms{};

	Parms.RetargetAsset = InRetargetAsset;
	Parms.OptionalProfileName = InOptionalProfileName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutSettings != nullptr)
		*InOutSettings = Parms.OutSettings;

}


// Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        IKGoalName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetChainSettings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetChainSettings UIKRetargeter::GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* InRetargetAsset, class FName InIKGoalName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainUsingGoalFromRetargetAsset");

	Params::UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Params Parms{};

	Parms.RetargetAsset = InRetargetAsset;
	Parms.IKGoalName = InIKGoalName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        TargetChainName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetChainSettings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetProfile(struct FRetargetProfile& InRetargetProfile, class FName InTargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetChainSettingsFromRetargetProfile_Params Parms{};

	Parms.RetargetProfile = InRetargetProfile;
	Parms.TargetChainName = InTargetChainName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TargetChainName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        OptionalProfileName                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetChainSettings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetAsset(class UIKRetargeter* InRetargetAsset, class FName InTargetChainName, class FName InOptionalProfileName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetChainSettingsFromRetargetAsset_Params Parms{};

	Parms.RetargetAsset = InRetargetAsset;
	Parms.TargetChainName = InTargetChainName;
	Parms.OptionalProfileName = InOptionalProfileName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
