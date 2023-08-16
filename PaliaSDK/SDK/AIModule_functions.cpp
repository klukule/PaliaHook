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


// Function AIModule.AIController.UseBlackboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBlackboardData*             BlackboardAsset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*        BlackboardComponent                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAIController::UseBlackboard(class UBlackboardData* InBlackboardAsset, class UBlackboardComponent** InBlackboardComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "UseBlackboard");

	Params::AAIController_UseBlackboard_Params Parms{};

	Parms.BlackboardAsset = InBlackboardAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBlackboardComponent != nullptr)
		*InBlackboardComponent = Parms.BlackboardComponent;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.UnclaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayTaskResource>ResourceClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAIController::UnclaimTaskResource(TSubclassOf<class UGameplayTaskResource> InResourceClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "UnclaimTaskResource");

	Params::AAIController_UnclaimTaskResource_Params Parms{};

	Parms.ResourceClass = InResourceClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.SetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPathFollowingComponent*     NewPFComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAIController::SetPathFollowingComponent(class UPathFollowingComponent* InNewPFComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "SetPathFollowingComponent");

	Params::AAIController_SetPathFollowingComponent_Params Parms{};

	Parms.NewPFComponent = InNewPFComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.SetMoveBlockDetection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAIController::SetMoveBlockDetection(bool InbEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "SetMoveBlockDetection");

	Params::AAIController_SetMoveBlockDetection_Params Parms{};

	Parms.bEnable = InbEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.RunBehaviorTree
// (Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTree*               BTAsset                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAIController::RunBehaviorTree(class UBehaviorTree* InBTAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "RunBehaviorTree");

	Params::AAIController_RunBehaviorTree_Params Parms{};

	Parms.BTAsset = InBTAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        BlackboardComp                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardData*             BlackboardAsset                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAIController::OnUsingBlackBoard(class UBlackboardComponent* InBlackboardComp, class UBlackboardData* InBlackboardAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "OnUsingBlackBoard");

	Params::AAIController_OnUsingBlackBoard_Params Parms{};

	Parms.BlackboardComp = InBlackboardComp;
	Parms.BlackboardAsset = InBlackboardAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
// (Native, Public)
// Parameters:
// struct FGameplayResourceSet        NewlyClaimed                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FGameplayResourceSet        FreshlyReleased                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)

void AAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& InNewlyClaimed, const struct FGameplayResourceSet& InFreshlyReleased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "OnGameplayTaskResourcesClaimed");

	Params::AAIController_OnGameplayTaskResourcesClaimed_Params Parms{};

	Parms.NewlyClaimed = InNewlyClaimed;
	Parms.FreshlyReleased = InFreshlyReleased;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.MoveToLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Dest                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopOnOverlap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePathfinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bProjectDestinationToNavigation                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanStrafe                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowPartialPath                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPathFollowingRequestResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingRequestResult AAIController::MoveToLocation(struct FVector& InDest, float InAcceptanceRadius, bool InbStopOnOverlap, bool InbUsePathfinding, bool InbProjectDestinationToNavigation, bool InbCanStrafe, TSubclassOf<class UNavigationQueryFilter> InFilterClass, bool InbAllowPartialPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "MoveToLocation");

	Params::AAIController_MoveToLocation_Params Parms{};

	Parms.Dest = InDest;
	Parms.AcceptanceRadius = InAcceptanceRadius;
	Parms.bStopOnOverlap = InbStopOnOverlap;
	Parms.bUsePathfinding = InbUsePathfinding;
	Parms.bProjectDestinationToNavigation = InbProjectDestinationToNavigation;
	Parms.bCanStrafe = InbCanStrafe;
	Parms.FilterClass = InFilterClass;
	Parms.bAllowPartialPath = InbAllowPartialPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.MoveToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Goal                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopOnOverlap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePathfinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanStrafe                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UNavigationQueryFilter>FilterClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowPartialPath                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPathFollowingRequestResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingRequestResult AAIController::MoveToActor(class AActor* InGoal, float InAcceptanceRadius, bool InbStopOnOverlap, bool InbUsePathfinding, bool InbCanStrafe, TSubclassOf<class UNavigationQueryFilter> InFilterClass, bool InbAllowPartialPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "MoveToActor");

	Params::AAIController_MoveToActor_Params Parms{};

	Parms.Goal = InGoal;
	Parms.AcceptanceRadius = InAcceptanceRadius;
	Parms.bStopOnOverlap = InbStopOnOverlap;
	Parms.bUsePathfinding = InbUsePathfinding;
	Parms.bCanStrafe = InbCanStrafe;
	Parms.FilterClass = InFilterClass;
	Parms.bAllowPartialPath = InbAllowPartialPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.K2_SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      NewFocus                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAIController::K2_SetFocus(class AActor* InNewFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "K2_SetFocus");

	Params::AAIController_K2_SetFocus_Params Parms{};

	Parms.NewFocus = InNewFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.K2_SetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     FP                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAIController::K2_SetFocalPoint(const struct FVector& InFP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "K2_SetFocalPoint");

	Params::AAIController_K2_SetFocalPoint_Params Parms{};

	Parms.FP = InFP;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.K2_ClearFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AAIController::K2_ClearFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "K2_ClearFocus");

	Params::AAIController_K2_ClearFocus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIController.HasPartialPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AAIController::HasPartialPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "HasPartialPath");

	Params::AAIController_HasPartialPath_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetPathFollowingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPathFollowingComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPathFollowingComponent* AAIController::GetPathFollowingComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetPathFollowingComponent");

	Params::AAIController_GetPathFollowingComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetMoveStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPathFollowingStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingStatus AAIController::GetMoveStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetMoveStatus");

	Params::AAIController_GetMoveStatus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetImmediateMoveDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AAIController::GetImmediateMoveDestination()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetImmediateMoveDestination");

	Params::AAIController_GetImmediateMoveDestination_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetFocusActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* AAIController::GetFocusActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetFocusActor");

	Params::AAIController_GetFocusActor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetFocalPointOnActor
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AAIController::GetFocalPointOnActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetFocalPointOnActor");

	Params::AAIController_GetFocalPointOnActor_Params Parms{};

	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetFocalPoint
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AAIController::GetFocalPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetFocalPoint");

	Params::AAIController_GetFocalPoint_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.GetAIPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIPerceptionComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "GetAIPerceptionComponent");

	Params::AAIController_GetAIPerceptionComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIController.ClaimTaskResource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayTaskResource>ResourceClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAIController::ClaimTaskResource(TSubclassOf<class UGameplayTaskResource> InResourceClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIController", "ClaimTaskResource");

	Params::AAIController_ClaimTaskResource_Params Parms{};

	Parms.ResourceClass = InResourceClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIRequestID                RequestId                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPathFollowingResult    MovementResult                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& InRequestId, enum class EPathFollowingResult InMovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAsyncTaskBlueprintProxy", "OnMoveCompleted");

	Params::UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params Parms{};

	Parms.RequestId = InRequestId;
	Parms.MovementResult = InMovementResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnAction.GetActionPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EAIRequestPriority      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAIRequestPriority UPawnAction::GetActionPriority()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction", "GetActionPriority");

	Params::UPawnAction_GetActionPriority_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction.Finish
// (Native, Protected, BlueprintCallable)
// Parameters:
// enum class EPawnActionResult       WithResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction::Finish(enum class EPawnActionResult InWithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction", "Finish");

	Params::UPawnAction_Finish_Params Parms{};

	Parms.WithResult = InWithResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnAction.CreateActionInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UPawnAction>     ActionClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawnAction* UPawnAction::CreateActionInstance(class UObject* InWorldContextObject, TSubclassOf<class UPawnAction> InActionClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction", "CreateActionInstance");

	Params::UPawnAction_CreateActionInstance_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.ActionClass = InActionClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_PushAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 NewAction                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIRequestPriority      Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPawnActionsComponent::K2_PushAction(class UPawnAction* InNewAction, enum class EAIRequestPriority InPriority, class UObject* InInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnActionsComponent", "K2_PushAction");

	Params::UPawnActionsComponent_K2_PushAction_Params Parms{};

	Parms.NewAction = InNewAction;
	Parms.Priority = InPriority;
	Parms.Instigator = InInstigator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_PerformAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawnAction*                 Action                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIRequestPriority      Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPawnActionsComponent::K2_PerformAction(class APawn* InPawn, class UPawnAction* InAction, enum class EAIRequestPriority InPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnActionsComponent", "K2_PerformAction");

	Params::UPawnActionsComponent_K2_PerformAction_Params Parms{};

	Parms.Pawn = InPawn;
	Parms.Action = InAction;
	Parms.Priority = InPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 ActionToAbort                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPawnActionAbortState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPawnActionAbortState UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* InActionToAbort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnActionsComponent", "K2_ForceAbortAction");

	Params::UPawnActionsComponent_K2_ForceAbortAction_Params Parms{};

	Parms.ActionToAbort = InActionToAbort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnActionsComponent.K2_AbortAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPawnAction*                 ActionToAbort                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPawnActionAbortState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPawnActionAbortState UPawnActionsComponent::K2_AbortAction(class UPawnAction* InActionToAbort)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnActionsComponent", "K2_AbortAction");

	Params::UPawnActionsComponent_K2_AbortAction_Params Parms{};

	Parms.ActionToAbort = InActionToAbort;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnAction_BlueprintBase.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionTick(class APawn* InControlledPawn, float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionTick");

	Params::UPawnAction_BlueprintBase_ActionTick_Params Parms{};

	Parms.ControlledPawn = InControlledPawn;
	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnAction_BlueprintBase.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionStart(class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionStart");

	Params::UPawnAction_BlueprintBase_ActionStart_Params Parms{};

	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnAction_BlueprintBase.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionResume(class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionResume");

	Params::UPawnAction_BlueprintBase_ActionResume_Params Parms{};

	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnAction_BlueprintBase.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionPause(class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionPause");

	Params::UPawnAction_BlueprintBase_ActionPause_Params Parms{};

	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnAction_BlueprintBase.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPawnActionResult       WithResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnAction_BlueprintBase::ActionFinished(class APawn* InControlledPawn, enum class EPawnActionResult InWithResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnAction_BlueprintBase", "ActionFinished");

	Params::UPawnAction_BlueprintBase_ActionFinished_Params Parms{};

	Parms.ControlledPawn = InControlledPawn;
	Parms.WithResult = InWithResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISystem.AILoggingVerbose
// (Exec, Native, Public)
// Parameters:

void UAISystem::AILoggingVerbose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISystem", "AILoggingVerbose");

	Params::UAISystem_AILoggingVerbose_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISystem.AIIgnorePlayers
// (Exec, Native, Public)
// Parameters:

void UAISystem::AIIgnorePlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISystem", "AIIgnorePlayers");

	Params::UAISystem_AIIgnorePlayers_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BrainComponent.StopLogic
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Reason                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBrainComponent::StopLogic(const class FString& InReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "StopLogic");

	Params::UBrainComponent_StopLogic_Params Parms{};

	Parms.Reason = InReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BrainComponent.StartLogic
// (Native, Public, BlueprintCallable)
// Parameters:

void UBrainComponent::StartLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "StartLogic");

	Params::UBrainComponent_StartLogic_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BrainComponent.RestartLogic
// (Native, Public, BlueprintCallable)
// Parameters:

void UBrainComponent::RestartLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "RestartLogic");

	Params::UBrainComponent_RestartLogic_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BrainComponent.IsRunning
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBrainComponent::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "IsRunning");

	Params::UBrainComponent_IsRunning_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BrainComponent.IsPaused
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBrainComponent::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrainComponent", "IsPaused");

	Params::UBrainComponent_IsPaused_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                InjectTag                                                        (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*               BehaviorAsset                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTag& InInjectTag, class UBehaviorTree* InBehaviorAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BehaviorTreeComponent", "SetDynamicSubtree");

	Params::UBehaviorTreeComponent_SetDynamicSubtree_Params Parms{};

	Parms.InjectTag = InInjectTag;
	Parms.BehaviorAsset = InBehaviorAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                CooldownTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& InCooldownTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BehaviorTreeComponent", "GetTagCooldownEndTime");

	Params::UBehaviorTreeComponent_GetTagCooldownEndTime_Params Parms{};

	Parms.CooldownTag = InCooldownTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                CooldownTag                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CooldownDuration                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAddToExistingDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTag& InCooldownTag, float InCooldownDuration, bool InbAddToExistingDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BehaviorTreeComponent", "AddCooldownTagDuration");

	Params::UBehaviorTreeComponent_AddCooldownTagDuration_Params Parms{};

	Parms.CooldownTag = InCooldownTag;
	Parms.CooldownDuration = InCooldownDuration;
	Parms.bAddToExistingDuration = InbAddToExistingDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardAssetProvider.GetBlackboardAsset
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBlackboardData*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardData* IBlackboardAssetProvider::GetBlackboardAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardAssetProvider", "GetBlackboardAsset");

	Params::IBlackboardAssetProvider_GetBlackboardAsset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.SetValueAsVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     VectorValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsVector(class FName& InKeyName, const struct FVector& InVectorValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsVector");

	Params::UBlackboardComponent_SetValueAsVector_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.VectorValue = InVectorValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsString(class FName& InKeyName, const class FString& InStringValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsString");

	Params::UBlackboardComponent_SetValueAsString_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.StringValue = InStringValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    VectorValue                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsRotator(class FName& InKeyName, const struct FRotator& InVectorValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsRotator");

	Params::UBlackboardComponent_SetValueAsRotator_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.VectorValue = InVectorValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsObject
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ObjectValue                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsObject(class FName& InKeyName, class UObject* InObjectValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsObject");

	Params::UBlackboardComponent_SetValueAsObject_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.ObjectValue = InObjectValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NameValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsName(class FName& InKeyName, class FName InNameValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsName");

	Params::UBlackboardComponent_SetValueAsName_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.NameValue = InNameValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IntValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsInt(class FName& InKeyName, int32 InIntValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsInt");

	Params::UBlackboardComponent_SetValueAsInt_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.IntValue = InIntValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FloatValue                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsFloat(class FName& InKeyName, float InFloatValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsFloat");

	Params::UBlackboardComponent_SetValueAsFloat_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.FloatValue = InFloatValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              EnumValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsEnum(class FName& InKeyName, uint8 InEnumValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsEnum");

	Params::UBlackboardComponent_SetValueAsEnum_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.EnumValue = InEnumValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsClass
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ClassValue                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsClass(class FName& InKeyName, class UClass* InClassValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsClass");

	Params::UBlackboardComponent_SetValueAsClass_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.ClassValue = InClassValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.SetValueAsBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               BoolValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::SetValueAsBool(class FName& InKeyName, bool InBoolValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "SetValueAsBool");

	Params::UBlackboardComponent_SetValueAsBool_Params Parms{};

	Parms.KeyName = InKeyName;
	Parms.BoolValue = InBoolValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BlackboardComponent.IsVectorValueSet
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlackboardComponent::IsVectorValueSet(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "IsVectorValueSet");

	Params::UBlackboardComponent_IsVectorValueSet_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UBlackboardComponent::GetValueAsVector(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsVector");

	Params::UBlackboardComponent_GetValueAsVector_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBlackboardComponent::GetValueAsString(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsString");

	Params::UBlackboardComponent_GetValueAsString_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsRotator
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UBlackboardComponent::GetValueAsRotator(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsRotator");

	Params::UBlackboardComponent_GetValueAsRotator_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsObject
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UBlackboardComponent::GetValueAsObject(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsObject");

	Params::UBlackboardComponent_GetValueAsObject_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsName
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UBlackboardComponent::GetValueAsName(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsName");

	Params::UBlackboardComponent_GetValueAsName_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsInt
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBlackboardComponent::GetValueAsInt(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsInt");

	Params::UBlackboardComponent_GetValueAsInt_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBlackboardComponent::GetValueAsFloat(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsFloat");

	Params::UBlackboardComponent_GetValueAsFloat_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsEnum
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UBlackboardComponent::GetValueAsEnum(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsEnum");

	Params::UBlackboardComponent_GetValueAsEnum_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsClass
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UBlackboardComponent::GetValueAsClass(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsClass");

	Params::UBlackboardComponent_GetValueAsClass_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetValueAsBool
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlackboardComponent::GetValueAsBool(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetValueAsBool");

	Params::UBlackboardComponent_GetValueAsBool_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetRotationFromEntry
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ResultRotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlackboardComponent::GetRotationFromEntry(class FName& InKeyName, struct FRotator* InResultRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetRotationFromEntry");

	Params::UBlackboardComponent_GetRotationFromEntry_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InResultRotation != nullptr)
		*InResultRotation = Parms.ResultRotation;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.GetLocationFromEntry
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ResultLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBlackboardComponent::GetLocationFromEntry(class FName& InKeyName, struct FVector* InResultLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "GetLocationFromEntry");

	Params::UBlackboardComponent_GetLocationFromEntry_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InResultLocation != nullptr)
		*InResultLocation = Parms.ResultLocation;

	return Parms.ReturnValue;

}


// Function AIModule.BlackboardComponent.ClearValue
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        KeyName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBlackboardComponent::ClearValue(class FName& InKeyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlackboardComponent", "ClearValue");

	Params::UBlackboardComponent_ClearValue_Params Parms{};

	Parms.KeyName = InKeyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::StopUsingExternalEvent(class UBTNode* InNodeOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "StopUsingExternalEvent");

	Params::UBTFunctionLibrary_StopUsingExternalEvent_Params Parms{};

	Parms.NodeOwner = InNodeOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OwningActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::StartUsingExternalEvent(class UBTNode* InNodeOwner, class AActor* InOwningActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "StartUsingExternalEvent");

	Params::UBTFunctionLibrary_StartUsingExternalEvent_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.OwningActor = InOwningActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsVector(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, const struct FVector& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsVector");

	Params::UBTFunctionLibrary_SetBlackboardValueAsVector_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsString(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, const class FString& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsString");

	Params::UBTFunctionLibrary_SetBlackboardValueAsString_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                    Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsRotator(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, const struct FRotator& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsRotator");

	Params::UBTFunctionLibrary_SetBlackboardValueAsRotator_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsObject(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, class UObject* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsObject");

	Params::UBTFunctionLibrary_SetBlackboardValueAsObject_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsName(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, class FName InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsName");

	Params::UBTFunctionLibrary_SetBlackboardValueAsName_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsInt(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsInt");

	Params::UBTFunctionLibrary_SetBlackboardValueAsInt_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsFloat(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsFloat");

	Params::UBTFunctionLibrary_SetBlackboardValueAsFloat_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsEnum(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, uint8 InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsEnum");

	Params::UBTFunctionLibrary_SetBlackboardValueAsEnum_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsClass(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, class UClass* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsClass");

	Params::UBTFunctionLibrary_SetBlackboardValueAsClass_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::SetBlackboardValueAsBool(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "SetBlackboardValueAsBool");

	Params::UBTFunctionLibrary_SetBlackboardValueAsBool_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardComponent* UBTFunctionLibrary::GetOwnersBlackboard(class UBTNode* InNodeOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetOwnersBlackboard");

	Params::UBTFunctionLibrary_GetOwnersBlackboard_Params Parms{};

	Parms.NodeOwner = InNodeOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetOwnerComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTreeComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBehaviorTreeComponent* UBTFunctionLibrary::GetOwnerComponent(class UBTNode* InNodeOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetOwnerComponent");

	Params::UBTFunctionLibrary_GetOwnerComponent_Params Parms{};

	Parms.NodeOwner = InNodeOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UBTFunctionLibrary::GetBlackboardValueAsVector(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsVector");

	Params::UBTFunctionLibrary_GetBlackboardValueAsVector_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UBTFunctionLibrary::GetBlackboardValueAsString(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsString");

	Params::UBTFunctionLibrary_GetBlackboardValueAsString_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UBTFunctionLibrary::GetBlackboardValueAsRotator(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsRotator");

	Params::UBTFunctionLibrary_GetBlackboardValueAsRotator_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UBTFunctionLibrary::GetBlackboardValueAsObject(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsObject");

	Params::UBTFunctionLibrary_GetBlackboardValueAsObject_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UBTFunctionLibrary::GetBlackboardValueAsName(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsName");

	Params::UBTFunctionLibrary_GetBlackboardValueAsName_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBTFunctionLibrary::GetBlackboardValueAsInt(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsInt");

	Params::UBTFunctionLibrary_GetBlackboardValueAsInt_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UBTFunctionLibrary::GetBlackboardValueAsFloat(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsFloat");

	Params::UBTFunctionLibrary_GetBlackboardValueAsFloat_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UBTFunctionLibrary::GetBlackboardValueAsEnum(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsEnum");

	Params::UBTFunctionLibrary_GetBlackboardValueAsEnum_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UBTFunctionLibrary::GetBlackboardValueAsClass(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsClass");

	Params::UBTFunctionLibrary_GetBlackboardValueAsClass_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTFunctionLibrary::GetBlackboardValueAsBool(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsBool");

	Params::UBTFunctionLibrary_GetBlackboardValueAsBool_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UBTFunctionLibrary::GetBlackboardValueAsActor(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "GetBlackboardValueAsActor");

	Params::UBTFunctionLibrary_GetBlackboardValueAsActor_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::ClearBlackboardValueAsVector(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "ClearBlackboardValueAsVector");

	Params::UBTFunctionLibrary_ClearBlackboardValueAsVector_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTFunctionLibrary.ClearBlackboardValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UBTNode*                     NodeOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlackboardKeySelector      Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBTFunctionLibrary::ClearBlackboardValue(class UBTNode* InNodeOwner, struct FBlackboardKeySelector& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTFunctionLibrary", "ClearBlackboardValue");

	Params::UBTFunctionLibrary_ClearBlackboardValue_Params Parms{};

	Parms.NodeOwner = InNodeOwner;
	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveTickAI(class AAIController* InOwnerController, class APawn* InControlledPawn, float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveTickAI");

	Params::UBTDecorator_BlueprintBase_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;
	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveTick(class AActor* InOwnerActor, float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveTick");

	Params::UBTDecorator_BlueprintBase_ReceiveTick_Params Parms{};

	Parms.OwnerActor = InOwnerActor;
	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverDeactivatedAI");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverDeactivated");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverActivatedAI");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveObserverActivated");

	Params::UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionStartAI");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionStart");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBTNodeResult           NodeResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIController* InOwnerController, class APawn* InControlledPawn, enum class EBTNodeResult InNodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinishAI");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;
	Parms.NodeResult = InNodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EBTNodeResult           NodeResult                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* InOwnerActor, enum class EBTNodeResult InNodeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "ReceiveExecutionFinish");

	Params::UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params Parms{};

	Parms.OwnerActor = InOwnerActor;
	Parms.NodeResult = InNodeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheckAI");

	Params::UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTDecorator_BlueprintBase::PerformConditionCheck(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "PerformConditionCheck");

	Params::UBTDecorator_BlueprintBase_PerformConditionCheck_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorObserverActive");

	Params::UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTDecorator_BlueprintBase", "IsDecoratorExecutionActive");

	Params::UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveTickAI(class AAIController* InOwnerController, class APawn* InControlledPawn, float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveTickAI");

	Params::UBTService_BlueprintBase_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;
	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveTick(class AActor* InOwnerActor, float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveTick");

	Params::UBTService_BlueprintBase_ReceiveTick_Params Parms{};

	Parms.OwnerActor = InOwnerActor;
	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveSearchStartAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveSearchStartAI");

	Params::UBTService_BlueprintBase_ReceiveSearchStartAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveSearchStart(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveSearchStart");

	Params::UBTService_BlueprintBase_ReceiveSearchStart_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveDeactivationAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveDeactivationAI");

	Params::UBTService_BlueprintBase_ReceiveDeactivationAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveDeactivation(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveDeactivation");

	Params::UBTService_BlueprintBase_ReceiveDeactivation_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveActivationAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveActivationAI");

	Params::UBTService_BlueprintBase_ReceiveActivationAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTService_BlueprintBase::ReceiveActivation(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "ReceiveActivation");

	Params::UBTService_BlueprintBase_ReceiveActivation_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTService_BlueprintBase.IsServiceActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTService_BlueprintBase::IsServiceActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTService_BlueprintBase", "IsServiceActive");

	Params::UBTService_BlueprintBase_IsServiceActive_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        MessageName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::SetFinishOnMessageWithId(class FName InMessageName, int32 InRequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessageWithId");

	Params::UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params Parms{};

	Parms.MessageName = InMessageName;
	Parms.RequestId = InRequestId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        MessageName                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::SetFinishOnMessage(class FName InMessageName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "SetFinishOnMessage");

	Params::UBTTask_BlueprintBase_SetFinishOnMessage_Params Parms{};

	Parms.MessageName = InMessageName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveTickAI(class AAIController* InOwnerController, class APawn* InControlledPawn, float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveTickAI");

	Params::UBTTask_BlueprintBase_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;
	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveTick(class AActor* InOwnerActor, float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveTick");

	Params::UBTTask_BlueprintBase_ReceiveTick_Params Parms{};

	Parms.OwnerActor = InOwnerActor;
	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveExecuteAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveExecuteAI");

	Params::UBTTask_BlueprintBase_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveExecute(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveExecute");

	Params::UBTTask_BlueprintBase_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ControlledPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveAbortAI(class AAIController* InOwnerController, class APawn* InControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveAbortAI");

	Params::UBTTask_BlueprintBase_ReceiveAbortAI_Params Parms{};

	Parms.OwnerController = InOwnerController;
	Parms.ControlledPawn = InControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::ReceiveAbort(class AActor* InOwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "ReceiveAbort");

	Params::UBTTask_BlueprintBase_ReceiveAbort_Params Parms{};

	Parms.OwnerActor = InOwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTTask_BlueprintBase::IsTaskExecuting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "IsTaskExecuting");

	Params::UBTTask_BlueprintBase_IsTaskExecuting_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBTTask_BlueprintBase::IsTaskAborting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "IsTaskAborting");

	Params::UBTTask_BlueprintBase_IsTaskAborting_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.BTTask_BlueprintBase.FinishExecute
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBTTask_BlueprintBase::FinishExecute(bool InbSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "FinishExecute");

	Params::UBTTask_BlueprintBase_FinishExecute_Params Parms{};

	Parms.bSuccess = InbSuccess;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.BTTask_BlueprintBase.FinishAbort
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UBTTask_BlueprintBase::FinishAbort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_BlueprintBase", "FinishAbort");

	Params::UBTTask_BlueprintBase_FinishAbort_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*               AnimInstance                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUnlockMovement                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UnlockAILogic                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::UnlockAIResourcesWithAnimation(class UAnimInstance* InAnimInstance, bool InbUnlockMovement, bool InUnlockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "UnlockAIResourcesWithAnimation");

	Params::UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params Parms{};

	Parms.AnimInstance = InAnimInstance;
	Parms.bUnlockMovement = InbUnlockMovement;
	Parms.UnlockAILogic = InUnlockAILogic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class APawn>           PawnClass                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*               BehaviorTree                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bNoCollisionFail                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Owner                                                            (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UAIBlueprintHelperLibrary::SpawnAIFromClass(class UObject* InWorldContextObject, TSubclassOf<class APawn> InPawnClass, class UBehaviorTree* InBehaviorTree, const struct FVector& InLocation, const struct FRotator& InRotation, bool InbNoCollisionFail, class AActor* InOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "SpawnAIFromClass");

	Params::UAIBlueprintHelperLibrary_SpawnAIFromClass_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.PawnClass = InPawnClass;
	Parms.BehaviorTree = InBehaviorTree;
	Parms.Location = InLocation;
	Parms.Rotation = InRotation;
	Parms.bNoCollisionFail = InbNoCollisionFail;
	Parms.Owner = InOwner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Goal                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::SimpleMoveToLocation(class AController* InController, struct FVector& InGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "SimpleMoveToLocation");

	Params::UAIBlueprintHelperLibrary_SimpleMoveToLocation_Params Parms{};

	Parms.Controller = InController;
	Parms.Goal = InGoal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Goal                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::SimpleMoveToActor(class AController* InController, class AActor* InGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "SimpleMoveToActor");

	Params::UAIBlueprintHelperLibrary_SimpleMoveToActor_Params Parms{};

	Parms.Controller = InController;
	Parms.Goal = InGoal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Message                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     MessageSource                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::SendAIMessage(class APawn* InTarget, class FName InMessage, class UObject* InMessageSource, bool InbSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "SendAIMessage");

	Params::UAIBlueprintHelperLibrary_SendAIMessage_Params Parms{};

	Parms.Target = InTarget;
	Parms.Message = InMessage;
	Parms.MessageSource = InMessageSource;
	Parms.bSuccess = InbSuccess;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*               AnimInstance                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockMovement                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               LockAILogic                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIBlueprintHelperLibrary::LockAIResourcesWithAnimation(class UAnimInstance* InAnimInstance, bool InbLockMovement, bool InLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "LockAIResourcesWithAnimation");

	Params::UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params Parms{};

	Parms.AnimInstance = InAnimInstance;
	Parms.bLockMovement = InbLockMovement;
	Parms.LockAILogic = InLockAILogic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIBlueprintHelperLibrary::IsValidAIRotation(const struct FRotator& InRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAIRotation");

	Params::UAIBlueprintHelperLibrary_IsValidAIRotation_Params Parms{};

	Parms.Rotation = InRotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIBlueprintHelperLibrary::IsValidAILocation(const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAILocation");

	Params::UAIBlueprintHelperLibrary_IsValidAILocation_Params Parms{};

	Parms.Location = InLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     DirectionVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIBlueprintHelperLibrary::IsValidAIDirection(const struct FVector& InDirectionVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "IsValidAIDirection");

	Params::UAIBlueprintHelperLibrary_IsValidAIDirection_Params Parms{};

	Parms.DirectionVector = InDirectionVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIBlueprintHelperLibrary::GetNextNavLinkIndex(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetNextNavLinkIndex");

	Params::UAIBlueprintHelperLibrary_GetNextNavLinkIndex_Params Parms{};

	Parms.Controller = InController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UAIBlueprintHelperLibrary::GetCurrentPathPoints(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPathPoints");

	Params::UAIBlueprintHelperLibrary_GetCurrentPathPoints_Params Parms{};

	Parms.Controller = InController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIBlueprintHelperLibrary::GetCurrentPathIndex(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPathIndex");

	Params::UAIBlueprintHelperLibrary_GetCurrentPathIndex_Params Parms{};

	Parms.Controller = InController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AController*                 Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UNavigationPath*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UNavigationPath* UAIBlueprintHelperLibrary::GetCurrentPath(class AController* InController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetCurrentPath");

	Params::UAIBlueprintHelperLibrary_GetCurrentPath_Params Parms{};

	Parms.Controller = InController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBlackboardComponent* UAIBlueprintHelperLibrary::GetBlackboard(class AActor* InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetBlackboard");

	Params::UAIBlueprintHelperLibrary_GetBlackboard_Params Parms{};

	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.GetAIController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      ControlledActor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIController*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AAIController* UAIBlueprintHelperLibrary::GetAIController(class AActor* InControlledActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "GetAIController");

	Params::UAIBlueprintHelperLibrary_GetAIController_Params Parms{};

	Parms.ControlledActor = InControlledActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Destination                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bStopOnOverlap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIAsyncTaskBlueprintProxy*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::CreateMoveToProxyObject(class UObject* InWorldContextObject, class APawn* InPawn, const struct FVector& InDestination, class AActor* InTargetActor, float InAcceptanceRadius, bool InbStopOnOverlap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIBlueprintHelperLibrary", "CreateMoveToProxyObject");

	Params::UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.Pawn = InPawn;
	Parms.Destination = InDestination;
	Parms.TargetActor = InTargetActor;
	Parms.AcceptanceRadius = InAcceptanceRadius;
	Parms.bStopOnOverlap = InbStopOnOverlap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ResultingLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class UObject* InQuerierObject, class AActor* InQuerierActor, struct FVector* InResultingLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideSingleLocation");

	Params::UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params Parms{};

	Parms.QuerierObject = InQuerierObject;
	Parms.QuerierActor = InQuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (InResultingLocation != nullptr)
		*InResultingLocation = Parms.ResultingLocation;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ResultingActor                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class UObject* InQuerierObject, class AActor* InQuerierActor, class AActor** InResultingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideSingleActor");

	Params::UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params Parms{};

	Parms.QuerierObject = InQuerierObject;
	Parms.QuerierActor = InQuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (InResultingActor != nullptr)
		*InResultingActor = Parms.ResultingActor;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             ResultingLocationSet                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class UObject* InQuerierObject, class AActor* InQuerierActor, TArray<struct FVector>* InResultingLocationSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideLocationsSet");

	Params::UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params Parms{};

	Parms.QuerierObject = InQuerierObject;
	Parms.QuerierActor = InQuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (InResultingLocationSet != nullptr)
		*InResultingLocationSet = Parms.ResultingLocationSet;

}


// Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      QuerierActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              ResultingActorsSet                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class UObject* InQuerierObject, class AActor* InQuerierActor, TArray<class AActor*>* InResultingActorsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_BlueprintBase", "ProvideActorsSet");

	Params::UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params Parms{};

	Parms.QuerierObject = InQuerierObject;
	Parms.QuerierActor = InQuerierActor;

	UObject::ProcessEvent(Func, &Parms);

	if (InResultingActorsSet != nullptr)
		*InResultingActorsSet = Parms.ResultingActorsSet;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryInstanceBlueprintWrapper::SetNamedParam(class FName InParamName, float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "SetNamedParam");

	Params::UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params Parms{};

	Parms.ParamName = InParamName;
	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetResultsAsLocations");

	Params::UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetResultsAsActors");

	Params::UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<struct FVector>             ResultLocations                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsLocations(TArray<struct FVector>* InResultLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsLocations");

	Params::UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsLocations_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InResultLocations != nullptr)
		*InResultLocations = Parms.ResultLocations;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class AActor*>              ResultActors                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEnvQueryInstanceBlueprintWrapper::GetQueryResultsAsActors(TArray<class AActor*>* InResultActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetQueryResultsAsActors");

	Params::UEnvQueryInstanceBlueprintWrapper_GetQueryResultsAsActors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InResultActors != nullptr)
		*InResultActors = Parms.ResultActors;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ItemIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "GetItemScore");

	Params::UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params Parms{};

	Parms.ItemIndex = InItemIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper*QueryInstance                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEnvQueryStatus         QueryStatus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* InQueryInstance, enum class EEnvQueryStatus InQueryStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryInstanceBlueprintWrapper", "EQSQueryDoneSignature__DelegateSignature");

	Params::UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params Parms{};

	Parms.QueryInstance = InQueryInstance;
	Parms.QueryStatus = InQueryStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.EnvQueryManager.RunEQSQuery
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*                   QueryTemplate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Querier                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEnvQueryRunMode        RunMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UEnvQueryInstanceBlueprintWrapper>WrapperClass                                                     (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQueryInstanceBlueprintWrapper*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::RunEQSQuery(class UObject* InWorldContextObject, class UEnvQuery* InQueryTemplate, class UObject* InQuerier, enum class EEnvQueryRunMode InRunMode, TSubclassOf<class UEnvQueryInstanceBlueprintWrapper> InWrapperClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryManager", "RunEQSQuery");

	Params::UEnvQueryManager_RunEQSQuery_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.QueryTemplate = InQueryTemplate;
	Parms.Querier = InQuerier;
	Parms.RunMode = InRunMode;
	Parms.WrapperClass = InWrapperClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "GetQuerier");

	Params::UEnvQueryGenerator_BlueprintBase_GetQuerier_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<class AActor*>              ContextActors                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnvQueryGenerator_BlueprintBase::DoItemGenerationFromActors(TArray<class AActor*>& InContextActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "DoItemGenerationFromActors");

	Params::UEnvQueryGenerator_BlueprintBase_DoItemGenerationFromActors_Params Parms{};

	Parms.ContextActors = InContextActors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
// (Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TArray<struct FVector>             ContextLocations                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector>& InContextLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "DoItemGeneration");

	Params::UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params Parms{};

	Parms.ContextLocations = InContextLocations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FVector                     GeneratedVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& InGeneratedVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "AddGeneratedVector");

	Params::UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params Parms{};

	Parms.GeneratedVector = InGeneratedVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AActor*                      GeneratedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AActor* InGeneratedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryGenerator_BlueprintBase", "AddGeneratedActor");

	Params::UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params Parms{};

	Parms.GeneratedActor = InGeneratedActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PathFollowingComponent.OnNavDataRegistered
// (Final, Native, Protected)
// Parameters:
// class ANavigationData*             NavData                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPathFollowingComponent::OnNavDataRegistered(class ANavigationData* InNavData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PathFollowingComponent", "OnNavDataRegistered");

	Params::UPathFollowingComponent_OnNavDataRegistered_Params Parms{};

	Parms.NavData = InNavData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PathFollowingComponent.OnActorBump
// (Native, Public, HasOutParams, HasDefaults)
// Parameters:
// class AActor*                      SelfActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NormalImpulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  Hit                                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UPathFollowingComponent::OnActorBump(class AActor* InSelfActor, class AActor* InOtherActor, const struct FVector& InNormalImpulse, struct FHitResult& InHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PathFollowingComponent", "OnActorBump");

	Params::UPathFollowingComponent_OnActorBump_Params Parms{};

	Parms.SelfActor = InSelfActor;
	Parms.OtherActor = InOtherActor;
	Parms.NormalImpulse = InNormalImpulse;
	Parms.Hit = InHit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PathFollowingComponent.GetPathDestination
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UPathFollowingComponent::GetPathDestination()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PathFollowingComponent", "GetPathDestination");

	Params::UPathFollowingComponent_GetPathDestination_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PathFollowingComponent.GetPathActionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPathFollowingAction    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPathFollowingAction UPathFollowingComponent::GetPathActionType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PathFollowingComponent", "GetPathActionType");

	Params::UPathFollowingComponent_GetPathActionType_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSuspend                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCrowdFollowingComponent::SuspendCrowdSteering(bool InbSuspend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CrowdFollowingComponent", "SuspendCrowdSteering");

	Params::UCrowdFollowingComponent_SuspendCrowdSteering_Params Parms{};

	Parms.bSuspend = InbSuspend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.NavLinkProxy.SetSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANavLinkProxy::SetSmartLinkEnabled(bool InbEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "SetSmartLinkEnabled");

	Params::ANavLinkProxy_SetSmartLinkEnabled_Params Parms{};

	Parms.bEnabled = InbEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.NavLinkProxy.ResumePathFollowing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Agent                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANavLinkProxy::ResumePathFollowing(class AActor* InAgent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "ResumePathFollowing");

	Params::ANavLinkProxy_ResumePathFollowing_Params Parms{};

	Parms.Agent = InAgent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.NavLinkProxy.ReceiveSmartLinkReached
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class AActor*                      Agent                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Destination                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ANavLinkProxy::ReceiveSmartLinkReached(class AActor* InAgent, struct FVector& InDestination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "ReceiveSmartLinkReached");

	Params::ANavLinkProxy_ReceiveSmartLinkReached_Params Parms{};

	Parms.Agent = InAgent;
	Parms.Destination = InDestination;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.NavLinkProxy.IsSmartLinkEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ANavLinkProxy::IsSmartLinkEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "IsSmartLinkEnabled");

	Params::ANavLinkProxy_IsSmartLinkEnabled_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLinkProxy.HasMovingAgents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ANavLinkProxy::HasMovingAgents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLinkProxy", "HasMovingAgents");

	Params::ANavLinkProxy_HasMovingAgents_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CellSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavLocalGridManager::SetLocalNavigationGridDensity(class UObject* InWorldContextObject, float InCellSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "SetLocalNavigationGridDensity");

	Params::UNavLocalGridManager_SetLocalNavigationGridDensity_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.CellSize = InCellSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              GridId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNavLocalGridManager::RemoveLocalNavigationGrid(class UObject* InWorldContextObject, int32 InGridId, bool InbRebuildGrids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "RemoveLocalNavigationGrid");

	Params::UNavLocalGridManager_RemoveLocalNavigationGrid_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.GridId = InGridId;
	Parms.bRebuildGrids = InbRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Start                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             PathPoints                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNavLocalGridManager::FindLocalNavigationGridPath(class UObject* InWorldContextObject, struct FVector& InStart, struct FVector& InEnd, TArray<struct FVector>* InPathPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "FindLocalNavigationGridPath");

	Params::UNavLocalGridManager_FindLocalNavigationGridPath_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.Start = InStart;
	Parms.End = InEnd;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InPathPoints != nullptr)
		*InPathPoints = Parms.PathPoints;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Locations                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Radius2D                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNavLocalGridManager::AddLocalNavigationGridForPoints(class UObject* InWorldContextObject, TArray<struct FVector>& InLocations, int32 InRadius2D, float InHeight, bool InbRebuildGrids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoints");

	Params::UNavLocalGridManager_AddLocalNavigationGridForPoints_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.Locations = InLocations;
	Parms.Radius2D = InRadius2D;
	Parms.Height = InHeight;
	Parms.bRebuildGrids = InbRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Radius2D                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNavLocalGridManager::AddLocalNavigationGridForPoint(class UObject* InWorldContextObject, struct FVector& InLocation, int32 InRadius2D, float InHeight, bool InbRebuildGrids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForPoint");

	Params::UNavLocalGridManager_AddLocalNavigationGridForPoint_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.Location = InLocation;
	Parms.Radius2D = InRadius2D;
	Parms.Height = InHeight;
	Parms.bRebuildGrids = InbRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CapsuleHalfHeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Radius2D                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNavLocalGridManager::AddLocalNavigationGridForCapsule(class UObject* InWorldContextObject, struct FVector& InLocation, float InCapsuleRadius, float InCapsuleHalfHeight, int32 InRadius2D, float InHeight, bool InbRebuildGrids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForCapsule");

	Params::UNavLocalGridManager_AddLocalNavigationGridForCapsule_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.Location = InLocation;
	Parms.CapsuleRadius = InCapsuleRadius;
	Parms.CapsuleHalfHeight = InCapsuleHalfHeight;
	Parms.Radius2D = InRadius2D;
	Parms.Height = InHeight;
	Parms.bRebuildGrids = InbRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Extent                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Radius2D                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRebuildGrids                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UNavLocalGridManager::AddLocalNavigationGridForBox(class UObject* InWorldContextObject, struct FVector& InLocation, const struct FVector& InExtent, const struct FRotator& InRotation, int32 InRadius2D, float InHeight, bool InbRebuildGrids)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NavLocalGridManager", "AddLocalNavigationGridForBox");

	Params::UNavLocalGridManager_AddLocalNavigationGridForBox_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.Location = InLocation;
	Parms.Extent = InExtent;
	Parms.Rotation = InRotation;
	Parms.Radius2D = InRadius2D;
	Parms.Height = InHeight;
	Parms.bRebuildGrids = InbRebuildGrids;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.SetSenseEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAISense>        SenseClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::SetSenseEnabled(TSubclassOf<class UAISense> InSenseClass, bool InbEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "SetSenseEnabled");

	Params::UAIPerceptionComponent_SetSenseEnabled_Params Parms{};

	Parms.SenseClass = InSenseClass;
	Parms.bEnable = InbEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionComponent::RequestStimuliListenerUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "RequestStimuliListenerUpdate");

	Params::UAIPerceptionComponent_RequestStimuliListenerUpdate_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
// (Final, Native, Public)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::OnOwnerEndPlay(class AActor* InActor, enum class EEndPlayReason InEndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "OnOwnerEndPlay");

	Params::UAIPerceptionComponent_OnOwnerEndPlay_Params Parms{};

	Parms.Actor = InActor;
	Parms.EndPlayReason = InEndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAISense>        SenseToUse                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetPerceivedHostileActorsBySense(TSubclassOf<class UAISense> InSenseToUse, TArray<class AActor*>* InOutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetPerceivedHostileActorsBySense");

	Params::UAIPerceptionComponent_GetPerceivedHostileActorsBySense_Params Parms{};

	Parms.SenseToUse = InSenseToUse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutActors != nullptr)
		*InOutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<class AActor*>* InOutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetPerceivedHostileActors");

	Params::UAIPerceptionComponent_GetPerceivedHostileActors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutActors != nullptr)
		*InOutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetPerceivedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAISense>        SenseToUse                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetPerceivedActors(TSubclassOf<class UAISense> InSenseToUse, TArray<class AActor*>* InOutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetPerceivedActors");

	Params::UAIPerceptionComponent_GetPerceivedActors_Params Parms{};

	Parms.SenseToUse = InSenseToUse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutActors != nullptr)
		*InOutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAISense>        SenseToUse                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetKnownPerceivedActors(TSubclassOf<class UAISense> InSenseToUse, TArray<class AActor*>* InOutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetKnownPerceivedActors");

	Params::UAIPerceptionComponent_GetKnownPerceivedActors_Params Parms{};

	Parms.SenseToUse = InSenseToUse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutActors != nullptr)
		*InOutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAISense>        SenseToUse                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>              OutActors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAIPerceptionComponent::GetCurrentlyPerceivedActors(TSubclassOf<class UAISense> InSenseToUse, TArray<class AActor*>* InOutActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetCurrentlyPerceivedActors");

	Params::UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params Parms{};

	Parms.SenseToUse = InSenseToUse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutActors != nullptr)
		*InOutActors = Parms.OutActors;

}


// Function AIModule.AIPerceptionComponent.GetActorsPerception
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FActorPerceptionBlueprintInfoInfo                                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPerceptionComponent::GetActorsPerception(class AActor* InActor, struct FActorPerceptionBlueprintInfo* InInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "GetActorsPerception");

	Params::UAIPerceptionComponent_GetActorsPerception_Params Parms{};

	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InInfo != nullptr)
		*InInfo = Parms.Info;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionComponent.ForgetAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionComponent::ForgetAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionComponent", "ForgetAll");

	Params::UAIPerceptionComponent_ForgetAll_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAISense>        SenseClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(TSubclassOf<class UAISense> InSenseClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "UnregisterFromSense");

	Params::UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params Parms{};

	Parms.SenseClass = InSenseClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "UnregisterFromPerceptionSystem");

	Params::UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "RegisterWithPerceptionSystem");

	Params::UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAISense>        SenseClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionStimuliSourceComponent::RegisterForSense(TSubclassOf<class UAISense> InSenseClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionStimuliSourceComponent", "RegisterForSense");

	Params::UAIPerceptionStimuliSourceComponent_RegisterForSense_Params Parms{};

	Parms.SenseClass = InSenseClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAISenseEvent*               PerceptionEvent                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionSystem::ReportPerceptionEvent(class UObject* InWorldContextObject, class UAISenseEvent* InPerceptionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "ReportPerceptionEvent");

	Params::UAIPerceptionSystem_ReportPerceptionEvent_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.PerceptionEvent = InPerceptionEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionSystem.ReportEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAISenseEvent*               PerceptionEvent                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* InPerceptionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "ReportEvent");

	Params::UAIPerceptionSystem_ReportEvent_Params Parms{};

	Parms.PerceptionEvent = InPerceptionEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>        Sense                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIPerceptionSystem::RegisterPerceptionStimuliSource(class UObject* InWorldContextObject, TSubclassOf<class UAISense> InSense, class AActor* InTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "RegisterPerceptionStimuliSource");

	Params::UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.Sense = InSense;
	Parms.Target = InTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(class AActor* InActor, enum class EEndPlayReason InEndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "OnPerceptionStimuliSourceEndPlay");

	Params::UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params Parms{};

	Parms.Actor = InActor;
	Parms.EndPlayReason = InEndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIStimulus                 Stimulus                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UAISense>        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UAISense> UAIPerceptionSystem::GetSenseClassForStimulus(class UObject* InWorldContextObject, struct FAIStimulus& InStimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIPerceptionSystem", "GetSenseClassForStimulus");

	Params::UAIPerceptionSystem_GetSenseClassForStimulus_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.Stimulus = InStimulus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.OnUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UAISenseEvent*>       EventsToProcess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*>& InEventsToProcess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "OnUpdate");

	Params::UAISense_Blueprint_OnUpdate_Params Parms{};

	Parms.EventsToProcess = InEventsToProcess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIModule.AISense_Blueprint.OnListenerUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ActorListener                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Blueprint::OnListenerUpdated(class AActor* InActorListener, class UAIPerceptionComponent* InPerceptionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "OnListenerUpdated");

	Params::UAISense_Blueprint_OnListenerUpdated_Params Parms{};

	Parms.ActorListener = InActorListener;
	Parms.PerceptionComponent = InPerceptionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISense_Blueprint.OnListenerUnregistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ActorListener                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Blueprint::OnListenerUnregistered(class AActor* InActorListener, class UAIPerceptionComponent* InPerceptionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "OnListenerUnregistered");

	Params::UAISense_Blueprint_OnListenerUnregistered_Params Parms{};

	Parms.ActorListener = InActorListener;
	Parms.PerceptionComponent = InPerceptionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISense_Blueprint.OnListenerRegistered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      ActorListener                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIPerceptionComponent*      PerceptionComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Blueprint::OnListenerRegistered(class AActor* InActorListener, class UAIPerceptionComponent* InPerceptionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "OnListenerRegistered");

	Params::UAISense_Blueprint_OnListenerRegistered_Params Parms{};

	Parms.ActorListener = InActorListener;
	Parms.PerceptionComponent = InPerceptionComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISense_Blueprint.K2_OnNewPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Blueprint::K2_OnNewPawn(class APawn* InNewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "K2_OnNewPawn");

	Params::UAISense_Blueprint_K2_OnNewPawn_Params Parms{};

	Parms.NewPawn = InNewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.AISense_Blueprint.GetAllListenerComponents
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIPerceptionComponent*>ListenerComponents                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* InListenerComponents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "GetAllListenerComponents");

	Params::UAISense_Blueprint_GetAllListenerComponents_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InListenerComponents != nullptr)
		*InListenerComponents = Parms.ListenerComponents;

}


// Function AIModule.AISense_Blueprint.GetAllListenerActors
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>              ListenerActors                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAISense_Blueprint::GetAllListenerActors(TArray<class AActor*>* InListenerActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Blueprint", "GetAllListenerActors");

	Params::UAISense_Blueprint_GetAllListenerActors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InListenerActors != nullptr)
		*InListenerActors = Parms.ListenerActors;

}


// Function AIModule.AISense_Damage.ReportDamageEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DamageAmount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EventLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Damage::ReportDamageEvent(class UObject* InWorldContextObject, class AActor* InDamagedActor, class AActor* InInstigator, float InDamageAmount, const struct FVector& InEventLocation, const struct FVector& InHitLocation, class FName InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Damage", "ReportDamageEvent");

	Params::UAISense_Damage_ReportDamageEvent_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.DamagedActor = InDamagedActor;
	Parms.Instigator = InInstigator;
	Parms.DamageAmount = InDamageAmount;
	Parms.EventLocation = InEventLocation;
	Parms.HitLocation = InHitLocation;
	Parms.Tag = InTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISense_Hearing.ReportNoiseEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NoiseLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Loudness                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxRange                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Hearing::ReportNoiseEvent(class UObject* InWorldContextObject, const struct FVector& InNoiseLocation, float InLoudness, class AActor* InInstigator, float InMaxRange, class FName InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Hearing", "ReportNoiseEvent");

	Params::UAISense_Hearing_ReportNoiseEvent_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.NoiseLocation = InNoiseLocation;
	Parms.Loudness = InLoudness;
	Parms.Instigator = InInstigator;
	Parms.MaxRange = InMaxRange;
	Parms.Tag = InTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APawn*                       Requestor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PredictedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PredictionTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Prediction::RequestPawnPredictionEvent(class APawn* InRequestor, class AActor* InPredictedActor, float InPredictionTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Prediction", "RequestPawnPredictionEvent");

	Params::UAISense_Prediction_RequestPawnPredictionEvent_Params Parms{};

	Parms.Requestor = InRequestor;
	Parms.PredictedActor = InPredictedActor;
	Parms.PredictionTime = InPredictionTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Requestor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      PredictedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PredictionTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Prediction::RequestControllerPredictionEvent(class AAIController* InRequestor, class AActor* InPredictedActor, float InPredictionTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Prediction", "RequestControllerPredictionEvent");

	Params::UAISense_Prediction_RequestControllerPredictionEvent_Params Parms{};

	Parms.Requestor = InRequestor;
	Parms.PredictedActor = InPredictedActor;
	Parms.PredictionTime = InPredictionTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.AISense_Touch.ReportTouchEvent
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TouchReceiver                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAISense_Touch::ReportTouchEvent(class UObject* InWorldContextObject, class AActor* InTouchReceiver, class AActor* InOtherActor, const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AISense_Touch", "ReportTouchEvent");

	Params::UAISense_Touch_ReportTouchEvent_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.TouchReceiver = InTouchReceiver;
	Parms.OtherActor = InOtherActor;
	Parms.Location = InLocation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::SetSensingUpdatesEnabled(bool InbEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "SetSensingUpdatesEnabled");

	Params::UPawnSensingComponent_SetSensingUpdatesEnabled_Params Parms{};

	Parms.bEnabled = InbEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnSensingComponent.SetSensingInterval
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewSensingInterval                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::SetSensingInterval(float InNewSensingInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "SetSensingInterval");

	Params::UPawnSensingComponent_SetSensingInterval_Params Parms{};

	Parms.NewSensingInterval = InNewSensingInterval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewPeripheralVisionAngle                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::SetPeripheralVisionAngle(float InNewPeripheralVisionAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "SetPeripheralVisionAngle");

	Params::UPawnSensingComponent_SetPeripheralVisionAngle_Params Parms{};

	Parms.NewPeripheralVisionAngle = InNewPeripheralVisionAngle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "SeePawnDelegate__DelegateSignature");

	Params::UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params Parms{};

	Parms.Pawn = InPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// class APawn*                       Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Volume                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class APawn* InInstigator, struct FVector& InLocation, float InVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "HearNoiseDelegate__DelegateSignature");

	Params::UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params Parms{};

	Parms.Instigator = InInstigator;
	Parms.Location = InLocation;
	Parms.Volume = InVolume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPawnSensingComponent::GetPeripheralVisionCosine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "GetPeripheralVisionCosine");

	Params::UPawnSensingComponent_GetPeripheralVisionCosine_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UPawnSensingComponent::GetPeripheralVisionAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PawnSensingComponent", "GetPeripheralVisionAngle");

	Params::UPawnSensingComponent_GetPeripheralVisionAngle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AITask_MoveTo.AIMoveTo
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     GoalLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AcceptanceRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIOptionFlag           StopOnOverlap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIOptionFlag           AcceptPartialPath                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUsePathfinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseContinuousGoalTracking                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIOptionFlag           ProjectGoalOnNavigation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_MoveTo*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_MoveTo* UAITask_MoveTo::AIMoveTo(class AAIController* InController, const struct FVector& InGoalLocation, class AActor* InGoalActor, float InAcceptanceRadius, enum class EAIOptionFlag InStopOnOverlap, enum class EAIOptionFlag InAcceptPartialPath, bool InbUsePathfinding, bool InbLockAILogic, bool InbUseContinuousGoalTracking, enum class EAIOptionFlag InProjectGoalOnNavigation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_MoveTo", "AIMoveTo");

	Params::UAITask_MoveTo_AIMoveTo_Params Parms{};

	Parms.Controller = InController;
	Parms.GoalLocation = InGoalLocation;
	Parms.GoalActor = InGoalActor;
	Parms.AcceptanceRadius = InAcceptanceRadius;
	Parms.StopOnOverlap = InStopOnOverlap;
	Parms.AcceptPartialPath = InAcceptPartialPath;
	Parms.bUsePathfinding = InbUsePathfinding;
	Parms.bLockAILogic = InbLockAILogic;
	Parms.bUseContinuousGoalTracking = InbUseContinuousGoalTracking;
	Parms.ProjectGoalOnNavigation = InProjectGoalOnNavigation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AIModule.AITask_RunEQS.RunEQS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnvQuery*                   QueryTemplate                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_RunEQS*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_RunEQS* UAITask_RunEQS::RunEQS(class AAIController* InController, class UEnvQuery* InQueryTemplate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_RunEQS", "RunEQS");

	Params::UAITask_RunEQS_RunEQS_Params Parms{};

	Parms.Controller = InController;
	Parms.QueryTemplate = InQueryTemplate;

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
