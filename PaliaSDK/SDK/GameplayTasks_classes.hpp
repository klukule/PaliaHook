#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// Class GameplayTasks.GameplayTask
class UGameplayTask : public UObject
{
public:
	uint8                                        Pad_C2[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InstanceName;                                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C4[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETaskResourceOverlapPolicy        ResourceOverlapPolicy;                             // 0x3A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C5[0x25];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask*                         ChildTask;                                         // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask");
		return Clss;
	}

	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};

// 0x78 (0x118 - 0xA0)
// Class GameplayTasks.GameplayTasksComponent
class UGameplayTasksComponent : public UActorComponent
{
public:
	uint8                                        Pad_D5[0x14];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        BitPad_4 : 1;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        bIsNetDirty : 1;                                   // Mask: 0x2, PropSize: 0x10xB4(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5 : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D6[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 TaskPriorityQueue;                                 // 0xB8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_D7[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UGameplayTask*>                 TickingTasks;                                      // 0xD8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UGameplayTask*>                 KnownTasks;                                        // 0xE8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnClaimedResourcesChange;                          // 0xF8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	TArray<class UGameplayTask*>                 SimulatedTasks;                                    // 0x108(0x10)(Net, ZeroConstructor, RepNotify, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTasksComponent");
		return Clss;
	}

	void OnRep_SimulatedTasks(TArray<class UGameplayTask*>& InPreviousSimulatedTasks);
	enum class EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, class UGameplayTask* InTask, uint8 InPriority, const TArray<TSubclassOf<class UGameplayTaskResource>>& InAdditionalRequiredResources, const TArray<TSubclassOf<class UGameplayTaskResource>>& InAdditionalClaimedResources);
};

// 0x0 (0x28 - 0x28)
// Class GameplayTasks.GameplayTaskOwnerInterface
class IGameplayTaskOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTaskOwnerInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class GameplayTasks.GameplayTaskResource
class UGameplayTaskResource : public UObject
{
public:
	int32                                        ManualResourceID;                                  // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8                                         AutoResourceID;                                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bManuallySetID : 1;                                // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTaskResource");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class GameplayTasks.GameplayTask_ClaimResource
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_ClaimResource");
		return Clss;
	}

	class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<class IGameplayTaskOwnerInterface> InInTaskOwner, const TArray<TSubclassOf<class UGameplayTaskResource>>& InResourceClasses, uint8 InPriority, class FName InTaskInstanceName);
	class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<class IGameplayTaskOwnerInterface> InInTaskOwner, TSubclassOf<class UGameplayTaskResource> InResourceClass, uint8 InPriority, class FName InTaskInstanceName);
};

// 0x58 (0xC0 - 0x68)
// Class GameplayTasks.GameplayTask_SpawnActor
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            Success;                                           // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            DidNotSpawn;                                       // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE[0x30];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AActor>                    ClassToSpawn;                                      // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_SpawnActor");
		return Clss;
	}

	class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, const struct FVector& InSpawnLocation, const struct FRotator& InSpawnRotation, TSubclassOf<class AActor> InClass, bool InbSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* InWorldContextObject, class AActor* InSpawnedActor);
	bool BeginSpawningActor(class UObject* InWorldContextObject, class AActor** InSpawnedActor);
};

// 0x30 (0x98 - 0x68)
// Class GameplayTasks.GameplayTask_TimeLimitedExecution
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeExpired;                                     // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_103[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_TimeLimitedExecution");
		return Clss;
	}

};

// 0x18 (0x80 - 0x68)
// Class GameplayTasks.GameplayTask_WaitDelay
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	FMulticastInlineDelegateProperty_            OnFinish;                                          // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayTask_WaitDelay");
		return Clss;
	}

	class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<class IGameplayTaskOwnerInterface> InTaskOwner, float InTime, uint8 InPriority);
	void TaskDelayDelegate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
