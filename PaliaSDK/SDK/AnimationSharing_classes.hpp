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

// 0x30 (0x58 - 0x28)
// Class AnimationSharing.AnimationSharingStateProcessor
class UAnimationSharingStateProcessor : public UObject
{
public:
	TSoftObjectPtr<class UEnum>                  AnimationStateEnum;                                // 0x28(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationSharingStateProcessor");
		return Clss;
	}

	void ProcessActorState(int32* InOutState, class AActor* InInActor, uint8 InCurrentState, uint8 InOnDemandState, bool* InbShouldProcess);
	class UEnum* GetAnimationStateEnum();
};

// 0x20 (0x370 - 0x350)
// Class AnimationSharing.AnimSharingStateInstance
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	class UAnimSequence*                         AnimationToPlay;                                   // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PermutationTimeOffset;                             // 0x350(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x354(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStateBool;                                        // 0x358(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A2E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSharingInstance*                  Instance;                                          // 0x360(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A2F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSharingStateInstance");
		return Clss;
	}

	void GetInstancedActors(TArray<class AActor*>* InActors);
};

// 0x10 (0x360 - 0x350)
// Class AnimationSharing.AnimSharingTransitionInstance
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> FromComponent;                                     // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class USkeletalMeshComponent> ToComponent;                                       // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendTime;                                         // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBlendBool;                                        // 0x35C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A36[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSharingTransitionInstance");
		return Clss;
	}

};

// 0x10 (0x360 - 0x350)
// Class AnimationSharing.AnimSharingAdditiveInstance
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> BaseComponent;                                     // 0x348(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UAnimSequence>          AdditiveAnimation;                                 // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Alpha;                                             // 0x358(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bStateBool;                                        // 0x35C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A4A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSharingAdditiveInstance");
		return Clss;
	}

};

// 0xF8 (0x120 - 0x28)
// Class AnimationSharing.AnimSharingInstance
class UAnimSharingInstance : public UObject
{
public:
	TArray<class AActor*>                        RegisteredActors;                                  // 0x28(0x10)(Edit, ZeroConstructor, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4E[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationSharingStateProcessor*       StateProcessor;                                    // 0x88(0x8)(Edit, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4F[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimSequence*>                 UsedAnimationSequences;                            // 0xC8(0x10)(Edit, ZeroConstructor, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A51[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnum*                                 StateEnum;                                         // 0xE8(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SharingActor;                                      // 0xF0(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A53[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimSharingInstance");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class AnimationSharing.AnimationSharingManager
class UAnimationSharingManager : public UObject
{
public:
	TArray<class USkeleton*>                     Skeletons;                                         // 0x28(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UAnimSharingInstance*>          PerSkeletonData;                                   // 0x38(0x10)(Edit, ZeroConstructor, Transient, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A7B[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationSharingManager");
		return Clss;
	}

	void RegisterActorWithSkeletonBP(class AActor* InInActor, class USkeleton* InSharingSkeleton);
	class UAnimationSharingManager* GetAnimationSharingManager(class UObject* InWorldContextObject);
	bool CreateAnimationSharingManager(class UObject* InWorldContextObject, class UAnimationSharingSetup* InSetup);
	bool AnimationSharingEnabled();
};

// 0x20 (0x48 - 0x28)
// Class AnimationSharing.AnimationSharingSetup
class UAnimationSharingSetup : public UObject
{
public:
	TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups;                                    // 0x28(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FAnimationSharingScalability          ScalabilitySettings;                               // 0x38(0x10)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimationSharingSetup");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
