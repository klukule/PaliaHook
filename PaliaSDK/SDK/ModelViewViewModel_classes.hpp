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
// Class ModelViewViewModel.MVVMViewModelBase
class UMVVMViewModelBase : public UObject
{
public:
	uint8                                        Pad_31[0x40];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewModelBase");
		return Clss;
	}

	bool K2_SetPropertyValue(int32& InOldValue, int32& InNewValue);
	void K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& InFieldId, FDelegateProperty_ InDelegate);
	void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& InFieldId);
	void K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& InFieldId, FDelegateProperty_ InDelegate);
};

// 0x8 (0x38 - 0x30)
// Class ModelViewViewModel.MVVMSubsystem
class UMVVMSubsystem : public UEngineSubsystem
{
public:
	class UMVVMViewModelCollectionObject*        GlobalViewModelCollection;                         // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMSubsystem");
		return Clss;
	}

	class UMVVMView* GetViewFromUserWidget(class UUserWidget* InUserWidget);
	class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();
	TArray<struct FMVVMAvailableBinding> GetAvailableBindings(class UClass* InClass, class UClass* InAccessor);
	struct FMVVMAvailableBinding GetAvailableBinding(class UClass* InClass, const struct FMVVMBindingName& InBindingName, class UClass* InAccessor);
	bool DoesWidgetTreeContainedWidget(class UWidgetTree* InWidgetTree, class UWidget* InViewWidget);
};

// 0x28 (0x50 - 0x28)
// Class ModelViewViewModel.MVVMViewModelCollectionObject
class UMVVMViewModelCollectionObject : public UObject
{
public:
	struct FMVVMViewModelCollection              ViewModelCollection;                               // 0x28(0x28)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewModelCollectionObject");
		return Clss;
	}

	bool RemoveViewModel(const struct FMVVMViewModelContext& InContext);
	int32 RemoveAllViewModelInstance(class UMVVMViewModelBase* InViewModel);
	class UMVVMViewModelBase* FindViewModelInstance(const struct FMVVMViewModelContext& InContext);
	bool AddViewModelInstance(const struct FMVVMViewModelContext& InContext, class UMVVMViewModelBase* InViewModel);
};

// 0x18 (0x398 - 0x380)
// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	TArray<struct FFieldNotificationId>          FieldNotifyNames;                                  // 0x380(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_62[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewModelBlueprintGeneratedClass");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class ModelViewViewModel.MVVMView
class UMVVMView : public UUserWidgetExtension
{
public:
	class UMVVMViewClass*                        ClassExtension;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_66[0x38];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMView");
		return Clss;
	}

	bool SetViewModel(class FName InViewModelName, class UMVVMViewModelBase* InViewModel);
};

// 0x88 (0xB0 - 0x28)
// Class ModelViewViewModel.MVVMViewClass
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{
public:
	TArray<struct FMVVMViewClass_SourceCreator>  SourceCreators;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMViewClass_CompiledBinding> CompiledBindings;                                  // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMVVMCompiledBindingLibrary           BindingLibrary;                                    // 0x48(0x60)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_67[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewClass");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
