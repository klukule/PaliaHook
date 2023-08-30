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
// Class TypedElementRuntime.TypedElementSelectionSetLibrary
class UTypedElementSelectionSetLibrary : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementSelectionSetLibrary");
		return Clss;
	}

	bool SetSelectionFromList(class UTypedElementSelectionSet* InSelectionSet, const struct FScriptTypedElementListProxy& InElementList, const struct FTypedElementSelectionOptions& InSelectionOptions);
	bool SelectElementsFromList(class UTypedElementSelectionSet* InSelectionSet, const struct FScriptTypedElementListProxy& InElementList, const struct FTypedElementSelectionOptions& InSelectionOptions);
	struct FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet* InSelectionSet, const struct FTypedElementSelectionNormalizationOptions& InNormalizationOptions);
	struct FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet* InSelectionSet, const struct FScriptTypedElementListProxy& InElementList, const struct FTypedElementSelectionNormalizationOptions& InNormalizationOptions);
	bool DeselectElementsFromList(class UTypedElementSelectionSet* InSelectionSet, const struct FScriptTypedElementListProxy& InElementList, const struct FTypedElementSelectionOptions& InSelectionOptions);
};

// 0x870 (0x898 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionSet
class UTypedElementSelectionSet : public UObject
{
public:
	uint8                                        Pad_23AD[0x800];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPreSelectionChange;                              // 0x828(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectionChange;                                 // 0x838(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_23AE[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementSelectionSet");
		return Clss;
	}

	bool SetSelection(TArray<struct FScriptTypedElementHandle>& InInElementHandles, const struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool SelectElements(TArray<struct FScriptTypedElementHandle>& InInElementHandles, const struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool SelectElement(struct FScriptTypedElementHandle& InInElementHandle, const struct FTypedElementSelectionOptions& InInSelectionOptions);
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InInSelectionState);
	void OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* InSelectionSet);
	void OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* InSelectionSet);
	TArray<struct FScriptTypedElementHandle> K2_GetSelectedElementHandles(TSubclassOf<class IInterface> InInBaseInterfaceType);
	bool IsElementSelected(struct FScriptTypedElementHandle& InInElementHandle, const struct FTypedElementIsSelectedOptions& InInSelectionOptions);
	bool HasSelectedObjects(class UClass* InInRequiredClass);
	bool HasSelectedElements(TSubclassOf<class IInterface> InInBaseInterfaceType);
	class UObject* GetTopSelectedObject(class UClass* InInRequiredClass);
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InInElementHandle, enum class ETypedElementSelectionMethod InInSelectionMethod);
	TArray<class UObject*> GetSelectedObjects(class UClass* InInRequiredClass);
	int32 GetNumSelectedElements();
	struct FTypedElementSelectionSetState GetCurrentSelectionState();
	class UObject* GetBottomSelectedObject(class UClass* InInRequiredClass);
	bool DeselectElements(TArray<struct FScriptTypedElementHandle>& InInElementHandles, const struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool DeselectElement(struct FScriptTypedElementHandle& InInElementHandle, const struct FTypedElementSelectionOptions& InInSelectionOptions);
	int32 CountSelectedObjects(class UClass* InInRequiredClass);
	int32 CountSelectedElements(TSubclassOf<class IInterface> InInBaseInterfaceType);
	bool ClearSelection(const struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool CanSelectElement(struct FScriptTypedElementHandle& InInElementHandle, const struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool CanDeselectElement(struct FScriptTypedElementHandle& InInElementHandle, const struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InInElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementAssetDataInterface
class ITypedElementAssetDataInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementAssetDataInterface");
		return Clss;
	}

	struct FAssetData GetAssetData(struct FScriptTypedElementHandle& InInElementHandle);
	TArray<struct FAssetData> GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InInElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementHierarchyInterface
class ITypedElementHierarchyInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementHierarchyInterface");
		return Clss;
	}

	struct FScriptTypedElementHandle GetParentElement(struct FScriptTypedElementHandle& InInElementHandle, bool InbAllowCreate);
	void GetChildElements(struct FScriptTypedElementHandle& InInElementHandle, TArray<struct FScriptTypedElementHandle>* InOutElementHandles, bool InbAllowCreate);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementObjectInterface
class ITypedElementObjectInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementObjectInterface");
		return Clss;
	}

	class UClass* GetObjectClass(struct FScriptTypedElementHandle& InInElementHandle);
	class UObject* GetObject(struct FScriptTypedElementHandle& InInElementHandle);
};

// 0x0 (0x28 - 0x28)
// Class TypedElementRuntime.TypedElementSelectionInterface
class ITypedElementSelectionInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TypedElementSelectionInterface");
		return Clss;
	}

	bool SelectElement(struct FScriptTypedElementHandle& InInElementHandle, const struct FScriptTypedElementListProxy& InInSelectionSet, struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool IsElementSelected(struct FScriptTypedElementHandle& InInElementHandle, const struct FScriptTypedElementListProxy& InInSelectionSet, struct FTypedElementIsSelectedOptions& InInSelectionOptions);
	struct FScriptTypedElementHandle GetSelectionElement(struct FScriptTypedElementHandle& InInElementHandle, const struct FScriptTypedElementListProxy& InInCurrentSelection, enum class ETypedElementSelectionMethod InInSelectionMethod);
	bool DeselectElement(struct FScriptTypedElementHandle& InInElementHandle, const struct FScriptTypedElementListProxy& InInSelectionSet, struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool CanSelectElement(struct FScriptTypedElementHandle& InInElementHandle, struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool CanDeselectElement(struct FScriptTypedElementHandle& InInElementHandle, struct FTypedElementSelectionOptions& InInSelectionOptions);
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle& InInElementHandle, const struct FScriptTypedElementListProxy& InInSelectionSet);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
