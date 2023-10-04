#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x140 - 0x80)
// Class Epic_Game.AbilityTask_AnimInstancePlayMontageAndWait
class UAbilityTask_AnimInstancePlayMontageAndWait : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelled;                                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_278C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          MontageToPlay;                                     // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 EventTags;                                         // 0xE0(0x20)(NativeAccessSpecifierPrivate)
	float                                        Rate;                                              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StartSection;                                      // 0x104(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopWhenAbilityEnds;                              // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_278E[0x33];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAbilityTask_AnimInstancePlayMontageAndWait* GetDefaultObj();

	class UAbilityTask_AnimInstancePlayMontageAndWait* AnimInstancePlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimInstance* InAnimInstance, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, class FName StartSection, bool bStopWhenAbilityEnds);
};

// 0xC0 (0x140 - 0x80)
// Class Epic_Game.RPGAbilityTask_PlayMontageAndWaitForEvent
class URPGAbilityTask_PlayMontageAndWaitForEvent : public UAbilityTask
{
public:
	FMulticastInlineDelegateProperty_            OnCompleted;                                       // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBlendOut;                                        // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterrupted;                                     // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCancelled;                                       // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventReceived;                                     // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UAnimMontage*                          MontageToPlay;                                     // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                 EventTags;                                         // 0xD8(0x20)(NativeAccessSpecifierPrivate)
	float                                        Rate;                                              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  StartSection;                                      // 0xFC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnimRootMotionTranslationScale;                    // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bStopWhenAbilityEnds;                              // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_279F[0x37];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URPGAbilityTask_PlayMontageAndWaitForEvent* GetDefaultObj();

	class URPGAbilityTask_PlayMontageAndWaitForEvent* PlayMontageAndWaitForEvent(class UGameplayAbility* OwningAbility, class FName TaskInstanceName, class UAnimMontage* MontageToPlay, const struct FGameplayTagContainer& EventTags, float Rate, class FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale);
};

}


