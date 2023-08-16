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


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AReplicationGraphDebugActor::ServerStopDebugging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStopDebugging");

	Params::AReplicationGraphDebugActor_ServerStopDebugging_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AReplicationGraphDebugActor::ServerStartDebugging()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerStartDebugging");

	Params::AReplicationGraphDebugActor_ServerStartDebugging_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PeriodFrame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetPeriodFrameForClass(class UClass* InClass, int32 InPeriodFrame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetPeriodFrameForClass");

	Params::AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params Parms{};

	Parms.Class = InClass;
	Parms.PeriodFrame = InPeriodFrame;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UClass*                      Class                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CullDistance                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* InClass, float InCullDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetCullDistanceForClass");

	Params::AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params Parms{};

	Parms.Class = InClass;
	Parms.CullDistance = InCullDistance;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerSetConditionalActorBreakpoint(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerSetConditionalActorBreakpoint");

	Params::AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params Parms{};

	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AReplicationGraphDebugActor::ServerPrintCullDistances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintCullDistances");

	Params::AReplicationGraphDebugActor_ServerPrintCullDistances_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class FString                      Str                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const class FString& InStr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerPrintAllActorInfo");

	Params::AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params Parms{};

	Parms.Str = InStr;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:

void AReplicationGraphDebugActor::ServerCellInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ServerCellInfo");

	Params::AReplicationGraphDebugActor_ServerCellInfo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FVector                     CellLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     CellExtent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              Actors                                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& InCellLocation, const struct FVector& InCellExtent, TArray<class AActor*>& InActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicationGraphDebugActor", "ClientCellInfo");

	Params::AReplicationGraphDebugActor_ClientCellInfo_Params Parms{};

	Parms.CellLocation = InCellLocation;
	Parms.CellExtent = InCellExtent;
	Parms.Actors = InActors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
