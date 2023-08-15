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


// Function LevelSequence.LevelSequence.RemoveMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UObject>         InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequence::RemoveMetaDataByClass(TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "RemoveMetaDataByClass");

	Params::ULevelSequence_RemoveMetaDataByClass_Params Parms{};

	Parms.InClass = InClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UObject>         InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "FindOrAddMetaDataByClass");

	Params::ULevelSequence_FindOrAddMetaDataByClass_Params Parms{};

	Parms.InClass = InClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.FindMetaDataByClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UObject>         InClass                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::FindMetaDataByClass(TSubclassOf<class UObject> InClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "FindMetaDataByClass");

	Params::ULevelSequence_FindMetaDataByClass_Params Parms{};

	Parms.InClass = InClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequence.CopyMetaData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InMetaData                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequence::CopyMetaData(class UObject* InMetaData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequence", "CopyMetaData");

	Params::ULevelSequence_CopyMetaData_Params Parms{};

	Parms.InMetaData = InMetaData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.ShowBurnin
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::ShowBurnin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ShowBurnin");

	Params::ALevelSequenceActor_ShowBurnin_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULevelSequence*              InSequence                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetSequence");

	Params::ALevelSequenceActor_SetSequence_Params Parms{};

	Parms.InSequence = InSequence;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReplicatePlayback                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetReplicatePlayback");

	Params::ALevelSequenceActor_SetReplicatePlayback_Params Parms{};

	Parms.ReplicatePlayback = ReplicatePlayback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.SetBindingByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        BindingTag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetBindingByTag(class FName BindingTag, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBindingByTag");

	Params::ALevelSequenceActor_SetBindingByTag_Params Parms{};

	Parms.BindingTag = BindingTag;
	Parms.Actors = Actors;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "SetBinding");

	Params::ALevelSequenceActor_SetBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actors = Actors;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::ResetBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBindings");

	Params::ALevelSequenceActor_ResetBindings_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "ResetBinding");

	Params::ALevelSequenceActor_ResetBinding_Params Parms{};

	Parms.Binding = Binding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::RemoveBindingByTag(class FName Tag, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBindingByTag");

	Params::ALevelSequenceActor_RemoveBindingByTag_Params Parms{};

	Parms.Tag = Tag;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "RemoveBinding");

	Params::ALevelSequenceActor_RemoveBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actor = Actor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:

void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "OnLevelSequenceLoaded__DelegateSignature");

	Params::ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelSequence.LevelSequenceActor.LoadSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* ALevelSequenceActor::LoadSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "LoadSequence");

	Params::ALevelSequenceActor_LoadSequence_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.HideBurnin
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceActor::HideBurnin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "HideBurnin");

	Params::ALevelSequenceActor_HideBurnin_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.GetSequencePlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequencePlayer*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequencePlayer");

	Params::ALevelSequenceActor_GetSequencePlayer_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULevelSequence*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequence* ALevelSequenceActor::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "GetSequence");

	Params::ALevelSequenceActor_GetSequence_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.FindNamedBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMovieSceneObjectBindingID>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBindings");

	Params::ALevelSequenceActor_FindNamedBindings_Params Parms{};

	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.FindNamedBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "FindNamedBinding");

	Params::ALevelSequenceActor_FindNamedBinding_Params Parms{};

	Parms.Tag = Tag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceActor.AddBindingByTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        BindingTag                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBindingByTag");

	Params::ALevelSequenceActor_AddBindingByTag_Params Parms{};

	Parms.BindingTag = BindingTag;
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  Binding                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowBindingsFromAsset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceActor", "AddBinding");

	Params::ALevelSequenceActor_AddBinding_Params Parms{};

	Parms.Binding = Binding;
	Parms.Actor = Actor;
	Parms.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "GetActiveCameraComponent");

	Params::ULevelSequencePlayer_GetActiveCameraComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettingsSettings                                                         (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class ALevelSequenceActor*         OutActor                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequencePlayer*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequencePlayer", "CreateLevelSequencePlayer");

	Params::ULevelSequencePlayer_CreateLevelSequencePlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelSequence = LevelSequence;
	Parms.Settings = Settings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSoftClassPath              InBurnInClass                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequenceBurnInOptions::SetBurnIn(const struct FSoftClassPath& InBurnInClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnInOptions", "SetBurnIn");

	Params::ULevelSequenceBurnInOptions_SetBurnIn_Params Parms{};

	Parms.InBurnInClass = InBurnInClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     InSettings                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "SetSettings");

	Params::ULevelSequenceBurnIn_SetSettings_Params Parms{};

	Parms.InSettings = InSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// TSubclassOf<class ULevelSequenceBurnInInitSettings>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULevelSequenceBurnInInitSettings> ULevelSequenceBurnIn::GetSettingsClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceBurnIn", "GetSettingsClass");

	Params::ULevelSequenceBurnIn_GetSettingsClass_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.OnCreated
// (Event, Public, BlueprintEvent)
// Parameters:

void ULevelSequenceDirector::OnCreated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "OnCreated");

	Params::ULevelSequenceDirector_OnCreated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelSequence.LevelSequenceDirector.GetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequence* ULevelSequenceDirector::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetSequence");

	Params::ULevelSequenceDirector_GetSequence_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime ULevelSequenceDirector::GetMasterSequenceTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetMasterSequenceTime");

	Params::ULevelSequenceDirector_GetMasterSequenceTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime ULevelSequenceDirector::GetCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetCurrentTime");

	Params::ULevelSequenceDirector_GetCurrentTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> ULevelSequenceDirector::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObjects");

	Params::ULevelSequenceDirector_GetBoundObjects_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* ULevelSequenceDirector::GetBoundObject(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundObject");

	Params::ULevelSequenceDirector_GetBoundObject_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundActors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> ULevelSequenceDirector::GetBoundActors(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActors");

	Params::ULevelSequenceDirector_GetBoundActors_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceDirector.GetBoundActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* ULevelSequenceDirector::GetBoundActor(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceDirector", "GetBoundActor");

	Params::ULevelSequenceDirector_GetBoundActor_Params Parms{};

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DesyncThresholdSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "SynchronizeToServer");

	Params::ALevelSequenceMediaController_SynchronizeToServer_Params Parms{};

	Parms.DesyncThresholdSeconds = DesyncThresholdSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceMediaController.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ALevelSequenceMediaController::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "Play");

	Params::ALevelSequenceMediaController_Play_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
// (Final, Native, Private)
// Parameters:

void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "OnRep_ServerStartTimeSeconds");

	Params::ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LevelSequence.LevelSequenceMediaController.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ALevelSequenceActor*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ALevelSequenceActor* ALevelSequenceMediaController::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetSequence");

	Params::ALevelSequenceMediaController_GetSequence_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaComponent* ALevelSequenceMediaController::GetMediaComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelSequenceMediaController", "GetMediaComponent");

	Params::ALevelSequenceMediaController_GetMediaComponent_Params Parms{};


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
