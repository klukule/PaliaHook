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


// Function IKRig.IKGoalCreatorInterface.AddIKGoals
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FIKRigGoal>OutGoals                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

void IIKGoalCreatorInterface::AddIKGoals(TMap<class FName, struct FIKRigGoal>* OutGoals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKGoalCreatorInterface", "AddIKGoals");

	Params::IIKGoalCreatorInterface_AddIKGoals_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutGoals != nullptr)
		*OutGoals = Parms.OutGoals;

}


// Function IKRig.IKRigComponent.SetIKRigGoalTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        GoalName                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PositionAlpha                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationAlpha                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRigComponent::SetIKRigGoalTransform(class FName GoalName, const struct FTransform& Transform, float PositionAlpha, float RotationAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalTransform");

	Params::UIKRigComponent_SetIKRigGoalTransform_Params Parms{};

	Parms.GoalName = GoalName;
	Parms.Transform = Transform;
	Parms.PositionAlpha = PositionAlpha;
	Parms.RotationAlpha = RotationAlpha;

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

void UIKRigComponent::SetIKRigGoalPositionAndRotation(class FName GoalName, const struct FVector& Position, const struct FQuat& Rotation, float PositionAlpha, float RotationAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoalPositionAndRotation");

	Params::UIKRigComponent_SetIKRigGoalPositionAndRotation_Params Parms{};

	Parms.GoalName = GoalName;
	Parms.Position = Position;
	Parms.Rotation = Rotation;
	Parms.PositionAlpha = PositionAlpha;
	Parms.RotationAlpha = RotationAlpha;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function IKRig.IKRigComponent.SetIKRigGoal
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FIKRigGoal                  Goal                                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UIKRigComponent::SetIKRigGoal(struct FIKRigGoal& Goal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRigComponent", "SetIKRigGoal");

	Params::UIKRigComponent_SetIKRigGoal_Params Parms{};

	Parms.Goal = Goal;

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

void UIKRetargeter::SetRootSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetRootSettings& RootSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetRootSettingsInRetargetProfile");

	Params::UIKRetargeter_SetRootSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;
	Parms.RootSettings = RootSettings;

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

void UIKRetargeter::SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FRetargetGlobalSettings& GlobalSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetGlobalSettingsInRetargetProfile");

	Params::UIKRetargeter_SetGlobalSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;
	Parms.GlobalSettings = GlobalSettings;

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

void UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainSpeedPlantSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;
	Parms.SpeedPlantSettings = SpeedPlantSettings;
	Parms.TargetChainName = TargetChainName;

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

void UIKRetargeter::SetChainSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSettings& ChainSettings, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;
	Parms.ChainSettings = ChainSettings;
	Parms.TargetChainName = TargetChainName;

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

void UIKRetargeter::SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainIKSettings& IKSettings, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainIKSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainIKSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;
	Parms.IKSettings = IKSettings;
	Parms.TargetChainName = TargetChainName;

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

void UIKRetargeter::SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainFKSettings& FKSettings, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "SetChainFKSettingsInRetargetProfile");

	Params::UIKRetargeter_SetChainFKSettingsInRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;
	Parms.FKSettings = FKSettings;
	Parms.TargetChainName = TargetChainName;

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

struct FTargetRootSettings UIKRetargeter::GetRootSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetRootSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetRootSettingsFromRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;

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

void UIKRetargeter::GetRootSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName OptionalProfileName, struct FTargetRootSettings* OutSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetRootSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetRootSettingsFromRetargetAsset_Params Parms{};

	Parms.RetargetAsset = RetargetAsset;
	Parms.OptionalProfileName = OptionalProfileName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSettings != nullptr)
		*OutSettings = Parms.OutSettings;

}


// Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRetargetProfile            RetargetProfile                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRetargetGlobalSettings     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FRetargetGlobalSettings UIKRetargeter::GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetGlobalSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;

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

void UIKRetargeter::GetGlobalSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName OptionalProfileName, struct FRetargetGlobalSettings* OutSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetGlobalSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Params Parms{};

	Parms.RetargetAsset = RetargetAsset;
	Parms.OptionalProfileName = OptionalProfileName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutSettings != nullptr)
		*OutSettings = Parms.OutSettings;

}


// Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKRetargeter*               RetargetAsset                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        IKGoalName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetChainSettings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetChainSettings UIKRetargeter::GetChainUsingGoalFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName IKGoalName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainUsingGoalFromRetargetAsset");

	Params::UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Params Parms{};

	Parms.RetargetAsset = RetargetAsset;
	Parms.IKGoalName = IKGoalName;

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

struct FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile, class FName TargetChainName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainSettingsFromRetargetProfile");

	Params::UIKRetargeter_GetChainSettingsFromRetargetProfile_Params Parms{};

	Parms.RetargetProfile = RetargetProfile;
	Parms.TargetChainName = TargetChainName;

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

struct FTargetChainSettings UIKRetargeter::GetChainSettingsFromRetargetAsset(class UIKRetargeter* RetargetAsset, class FName TargetChainName, class FName OptionalProfileName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IKRetargeter", "GetChainSettingsFromRetargetAsset");

	Params::UIKRetargeter_GetChainSettingsFromRetargetAsset_Params Parms{};

	Parms.RetargetAsset = RetargetAsset;
	Parms.TargetChainName = TargetChainName;
	Parms.OptionalProfileName = OptionalProfileName;

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
