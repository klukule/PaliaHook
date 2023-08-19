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

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementHandleLibrary
class UTypedElementHandleLibrary : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementHandleLibrary");
		return Clss;
	}

	void Release(struct FScriptTypedElementHandle& InElementHandle);
	bool NotEqual(struct FScriptTypedElementHandle& InLhs, struct FScriptTypedElementHandle& InRhs);
	bool IsSet(struct FScriptTypedElementHandle& InElementHandle);
	bool Equal(struct FScriptTypedElementHandle& InLhs, struct FScriptTypedElementHandle& InRhs);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementListLibrary
class UTypedElementListLibrary : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementListLibrary");
		return Clss;
	}

	void Shrink(const struct FScriptTypedElementListProxy& InElementList);
	void Reset(const struct FScriptTypedElementListProxy& InElementList);
	void Reserve(const struct FScriptTypedElementListProxy& InElementList, int32 InSize);
	bool Remove(const struct FScriptTypedElementListProxy& InElementList, struct FScriptTypedElementHandle& InElementHandle);
	int32 Num(const struct FScriptTypedElementListProxy& InElementList);
	bool IsValidIndex(const struct FScriptTypedElementListProxy& InElementList, int32 InIndex);
	bool HasElementsOfType(const struct FScriptTypedElementListProxy& InElementList, class FName InElementTypeName);
	bool HasElements(const struct FScriptTypedElementListProxy& InElementList, TSubclassOf<class IInterface> InBaseInterfaceType);
	class UObject* GetElementInterface(const struct FScriptTypedElementListProxy& InElementList, struct FScriptTypedElementHandle& InElementHandle, TSubclassOf<class IInterface> InBaseInterfaceType);
	TArray<struct FScriptTypedElementHandle> GetElementHandles(const struct FScriptTypedElementListProxy& InElementList, TSubclassOf<class IInterface> InBaseInterfaceType);
	struct FScriptTypedElementHandle GetElementHandleAt(const struct FScriptTypedElementListProxy& InElementList, int32 InIndex);
	void Empty(const struct FScriptTypedElementListProxy& InElementList, int32 InSlack);
	struct FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry* InRegistry);
	int32 CountElementsOfType(const struct FScriptTypedElementListProxy& InElementList, class FName InElementTypeName);
	int32 CountElements(const struct FScriptTypedElementListProxy& InElementList, TSubclassOf<class IInterface> InBaseInterfaceType);
	bool Contains(const struct FScriptTypedElementListProxy& InElementList, struct FScriptTypedElementHandle& InElementHandle);
	struct FScriptTypedElementListProxy Clone(const struct FScriptTypedElementListProxy& InElementList);
	void AppendList(const struct FScriptTypedElementListProxy& InElementList, const struct FScriptTypedElementListProxy& InOtherElementList);
	void Append(const struct FScriptTypedElementListProxy& InElementList, TArray<struct FScriptTypedElementHandle>& InElementHandles);
	bool Add(const struct FScriptTypedElementListProxy& InElementList, struct FScriptTypedElementHandle& InElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TypedElementCounterInterface
class ITypedElementCounterInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementCounterInterface");
		return Clss;
	}

};

// 0x920 (0x948 - 0x28)
// Class TypedElementFramework.TypedElementRegistry
class UTypedElementRegistry : public UObject
{
public:
	uint8                                        Pad_211C[0x920];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementRegistry");
		return Clss;
	}

	class UTypedElementRegistry* GetInstance();
	class UObject* GetElementInterface(struct FScriptTypedElementHandle& InInElementHandle, TSubclassOf<class IInterface> InInBaseInterfaceType);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA
class ITestTypedElementInterfaceA : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceA");
		return Clss;
	}

	bool SetDisplayName(struct FScriptTypedElementHandle& InInElementHandle, class FText InInNewName, bool InbNotify);
	class FText GetDisplayName(struct FScriptTypedElementHandle& InInElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceB
class ITestTypedElementInterfaceB : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceB");
		return Clss;
	}

	bool MarkAsTested(struct FScriptTypedElementHandle& InInElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceC
class ITestTypedElementInterfaceC : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceC");
		return Clss;
	}

	bool GetIsTested(struct FScriptTypedElementHandle& InInElementHandle);
};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplTyped
class UTestTypedElementInterfaceA_ImplTyped : public UObject
{
public:
	uint8                                        Pad_215F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceA_ImplTyped");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceA_ImplUntyped
class UTestTypedElementInterfaceA_ImplUntyped : public UObject
{
public:
	uint8                                        Pad_2162[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceA_ImplUntyped");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class TypedElementFramework.TestTypedElementInterfaceBAndC_Typed
class UTestTypedElementInterfaceBAndC_Typed : public UObject
{
public:
	uint8                                        Pad_2165[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestTypedElementInterfaceBAndC_Typed");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
