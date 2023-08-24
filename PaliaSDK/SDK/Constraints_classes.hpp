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
// Class Constraints.TransformableHandle
class UTransformableHandle : public UObject
{
public:
	struct FMovieSceneObjectBindingID            ConstraintBindingID;                               // 0x28(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D51[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TransformableHandle");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class Constraints.ConstraintsActor
class AConstraintsActor : public AActor
{
public:
	class UConstraintsManager*                   ConstraintsManager;                                // 0x290(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConstraintsActor");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class Constraints.TickableConstraint
class UTickableConstraint : public UObject
{
public:
	struct FConstraintTickFunction               ConstraintTick;                                    // 0x28(0x40)(NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D58[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TickableConstraint");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class Constraints.ConstraintsManager
class UConstraintsManager : public UObject
{
public:
	FMulticastSparseDelegateProperty_            OnConstraintAdded_BP;                              // 0x28(0x1)(InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastSparseDelegateProperty_            OnConstraintRemoved_BP;                            // 0x29(0x1)(InstancedReference, BlueprintAssignable, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5A[0xE];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTickableConstraint*>           Constraints;                                       // 0x38(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConstraintsManager");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Constraints.ConstraintsScriptingLibrary
class UConstraintsScriptingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConstraintsScriptingLibrary");
		return Clss;
	}

	bool RemoveConstraint(class UWorld* InInWorld, int32 InInIndex);
	class UConstraintsManager* GetManager(class UWorld* InInWorld);
	class UTransformableComponentHandle* CreateTransformableComponentHandle(class UWorld* InInWorld, class USceneComponent* InInSceneComponent, class FName& InInSocketName);
	class UTickableTransformConstraint* CreateFromType(class UWorld* InInWorld, enum class ETransformConstraintType InInType);
	bool AddConstraint(class UWorld* InInWorld, class UTransformableHandle* InInParentHandle, class UTransformableHandle* InInChildHandle, class UTickableTransformConstraint* InInConstraint, bool InbMaintainOffset);
};

// 0x10 (0x68 - 0x58)
// Class Constraints.TransformableComponentHandle
class UTransformableComponentHandle : public UTransformableHandle
{
public:
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TransformableComponentHandle");
		return Clss;
	}

};

// 0x20 (0x90 - 0x70)
// Class Constraints.TickableTransformConstraint
class UTickableTransformConstraint : public UTickableConstraint
{
public:
	class UTransformableHandle*                  ParentTRSHandle;                                   // 0x70(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformableHandle*                  ChildTRSHandle;                                    // 0x78(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Weight;                                            // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDynamicOffset;                                    // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformConstraintType          Type;                                              // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D8E[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TickableTransformConstraint");
		return Clss;
	}

};

// 0x20 (0xB0 - 0x90)
// Class Constraints.TickableTranslationConstraint
class UTickableTranslationConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_D91[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetTranslation;                                 // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TickableTranslationConstraint");
		return Clss;
	}

};

// 0x30 (0xC0 - 0x90)
// Class Constraints.TickableRotationConstraint
class UTickableRotationConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_D93[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 OffsetRotation;                                    // 0xA0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TickableRotationConstraint");
		return Clss;
	}

};

// 0x20 (0xB0 - 0x90)
// Class Constraints.TickableScaleConstraint
class UTickableScaleConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_D96[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetScale;                                       // 0x98(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TickableScaleConstraint");
		return Clss;
	}

};

// 0x80 (0x110 - 0x90)
// Class Constraints.TickableParentConstraint
class UTickableParentConstraint : public UTickableTransformConstraint
{
public:
	uint8                                        Pad_D9A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            OffsetTransform;                                   // 0xA0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScaling;                                          // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D9B[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TickableParentConstraint");
		return Clss;
	}

};

// 0x18 (0xA8 - 0x90)
// Class Constraints.TickableLookAtConstraint
class UTickableLookAtConstraint : public UTickableTransformConstraint
{
public:
	struct FVector                               Axis;                                              // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TickableLookAtConstraint");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
