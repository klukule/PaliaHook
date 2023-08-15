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

// 0x60 (0x88 - 0x28)
// Class S6UICore.PlatformStateWidgetFactory
class UPlatformStateWidgetFactory : public UObject
{
public:
	TMap<enum class ERedirectsPlatform, TSoftObjectPtr<class UDataTable>> PlatformConfigMap;                                 // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UUserWidget>               CommonUIStateWidgetForPC;                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            WidgetPlatformConfig;                              // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PlatformStateWidgetFactory");

		return Clss;
	}

	class UUserWidget* CreatePlatformBasedStateWidget(class US6UI_UIManagerWidgetBase* UIManager, enum class EStateWidgetType StateWidgetType);
};

// 0x58 (0x88 - 0x30)
// Class S6UICore.S6UI_AsyncAction_OpenModal
class US6UI_AsyncAction_OpenModal : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnOpened;                                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_91E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class US6UI_ModalWidgetBase>   ModalClass;                                        // 0x58(0x30)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_AsyncAction_OpenModal");

		return Clss;
	}

	class US6UI_AsyncAction_OpenModal* OpenModal(class APlayerController* PC, TSoftClassPtr<class US6UI_ModalWidgetBase> WidgetClass);
	void OnOpened__DelegateSignature(class US6UI_ModalWidgetBase* ModalWidget);
	void OnFailed__DelegateSignature();
};

// 0x10 (0x4A0 - 0x490)
// Class S6UICore.S6UI_InputActionHandlingUserWidget
class US6UI_InputActionHandlingUserWidget : public UCommonActivatableWidgetInputExtended
{
public:
	uint8                                        Pad_927[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class US6UI_InputActionHandlingWidgetComponent* InputActionHandlingWidgetComponent;                // 0x498(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_InputActionHandlingUserWidget");

		return Clss;
	}

};

// 0x38 (0x4D8 - 0x4A0)
// Class S6UICore.S6UI_ModalWidgetBase
class US6UI_ModalWidgetBase : public US6UI_InputActionHandlingUserWidget
{
public:
	uint8                                        Pad_956[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStartedClosing;                                  // 0x4B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinishedClosing;                                 // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bWantsCursor;                                      // 0x4D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_957[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_ModalWidgetBase");

		return Clss;
	}

	void SetWantsCursor(bool bValue);
	void OnStartedClosing__DelegateSignature(class UWidget* Widget);
	void OnFinishedOpening__DelegateSignature(class UWidget* Widget);
	void OnFinishedClosing__DelegateSignature(class UWidget* Widget);
	void HandleStartOpening_BP(bool* bOutHasLatentOpeningLogic);
	void HandleStartClosing_BP(bool bPermitLatentClosing, bool* bOutHasLatentClosingLogic);
	void HandleOpened_BP();
	void HandleInputAction_UIBack_Triggered(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void HandleClosed_BP();
	enum class ES6UI_ModalWidgetState GetModalWidgetState();
	void FinishOpening();
	void FinishClosing();
	bool CanClose();
};

// 0x90 (0x568 - 0x4D8)
// Class S6UICore.S6UI_CommandMenu
class US6UI_CommandMenu : public US6UI_ModalWidgetBase
{
public:
	TArray<class FName>                          NamespacesToHaveFirst;                             // 0x4D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UNativeWidgetHost*                     MenuHost;                                          // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_97F[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_CommandMenu");

		return Clss;
	}

};

// 0x0 (0x3E0 - 0x3E0)
// Class S6UICore.S6UI_GameViewportClient
class US6UI_GameViewportClient : public UCommonGameViewportClient
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_GameViewportClient");

		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class S6UICore.S6UI_InputActionHandlingWidgetComponent
class US6UI_InputActionHandlingWidgetComponent : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockAllUnhandledInputActions;                    // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FS6UI_RegisteredInputMappingContext> RegisteredInputMappingContexts;                    // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInputActionBindingsChanged;                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnabledStateChanged;                             // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FS6UI_RegisteredInputActionBinding> InputActionBindings;                               // 0x60(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_InputActionHandlingWidgetComponent");

		return Clss;
	}

	void UnregisterInputActionBinding(struct FGuid& BindingId);
	void SetIsEnabled(bool bValue);
	struct FGuid RegisterInputActionBinding(class UInputAction* InputAction, enum class ETriggerEvent TriggerEventType, FDelegateProperty_& Delegate);
	void OnInputActionBindingsChanged__DelegateSignature(class US6UI_InputActionHandlingWidgetComponent* AffectedComponent);
	void OnEnabledStateChanged__DelegateSignature(class US6UI_InputActionHandlingWidgetComponent* AffectedComponent);
	TArray<struct FS6UI_RegisteredInputActionBinding> GetRegisteredInputActionBindings();
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_InputActionHandlingWidgetInterface
class IS6UI_InputActionHandlingWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_InputActionHandlingWidgetInterface");

		return Clss;
	}

	class US6UI_InputActionHandlingWidgetComponent* GetInputActionHandlingComponent();
};

// 0x1D0 (0x200 - 0x30)
// Class S6UICore.S6UI_InputRouterSubsystem
class US6UI_InputRouterSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_A0C[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputMappingContext*>          AppliedInputMappingContexts;                       // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A0D[0x150];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_InputRouterSubsystem");

		return Clss;
	}

	void UnregisterInputActionHandler(class US6UI_InputActionHandlingWidgetComponent* InputActionHandler);
	void RegisterInputActionHandler(class US6UI_InputActionHandlingWidgetComponent* InputActionHandler);
	void HandleInputActionHandlingComponentEnabledStateChanged(class US6UI_InputActionHandlingWidgetComponent* AffectedComponent);
	void HandleInputActionHandlingComponentBindingsChanged(class US6UI_InputActionHandlingWidgetComponent* AffectedComponent);
};

// 0x38 (0x4D8 - 0x4A0)
// Class S6UICore.S6UI_StateUserWidget
class US6UI_StateUserWidget : public US6UI_InputActionHandlingUserWidget
{
public:
	struct FMVVMViewModelContext                 ViewModelContext;                                  // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class US6UI_StateViewModel*                  ViewModel;                                         // 0x4B0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UWidget>>         WidgetClassesToPreload;                            // 0x4B8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UWidget>>           LoadedWidgetClasses;                               // 0x4C8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_StateUserWidget");

		return Clss;
	}

	struct FMVVMViewModelContext GetViewModelContext();
	class US6UI_StateViewModel* GetViewModel();
	struct FS6UI_InputMode GetInputMode();
};

// 0x10 (0x78 - 0x68)
// Class S6UICore.S6UI_StateViewModel
class US6UI_StateViewModel : public UMVVMViewModelBase
{
public:
	struct FS6UI_InputMode                       InputMode;                                         // 0x68(0x10)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_StateViewModel");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_ToolTipWidgetInterface
class IS6UI_ToolTipWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_ToolTipWidgetInterface");

		return Clss;
	}

	void UpdateToolTipText(class FText& Text);
	void HandleOnOpening();
	void HandleOnClosed();
};

// 0x30 (0xA8 - 0x78)
// Class S6UICore.S6UI_InputAction
class US6UI_InputAction : public UInputAction
{
public:
	class FText                                  DisplayName;                                       // 0x78(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x90(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_InputAction");

		return Clss;
	}

};

// 0x98 (0x538 - 0x4A0)
// Class S6UICore.S6UI_UIManagerWidgetBase
class US6UI_UIManagerWidgetBase : public US6UI_InputActionHandlingUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnInputModeRefreshed;                              // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOverlay*                              Overlay_ModalWidgetLayer;                          // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              SizeBox_StateWidget;                               // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class US6UI_StateUserWidget>   DefaultStateWidgetType;                            // 0x4C0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UPlatformStateWidgetFactory> PlatformStateWidgetFactoryType;                    // 0x4F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlatformStateWidgetFactory*           PlatformStateWidgetFactory;                        // 0x520(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_StateUserWidget*                 DefaultStateWidgetInstance;                        // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_StateUserWidget*                 CurrentStateWidget;                                // 0x530(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_UIManagerWidgetBase");

		return Clss;
	}

	void RemoveModalWidget(class UWidget* Widget);
	void RemoveLoadingScreenWidget(class UUserWidget* Widget);
	void PushState(class US6UI_StateUserWidget* StateWidget);
	void PopState(class US6UI_StateUserWidget* StateWidget);
	void OpenModalWidget(class UWidget* Widget);
	bool IsModalWidgetActive();
	void HandleOnStateInputModeChanged(class UObject* Object, const struct FFieldNotificationId& Field);
	class US6UI_UIManagerWidgetBase* GetUIManagerWidget(class APlayerController* PC);
	class US6UI_StateUserWidget* GetCurrentStateWidget();
	class US6UI_StateViewModel* GetCurrentStateViewModel();
	void ForceCloseAllModalWidgets();
	void DeactivateTopModalWidget();
	void DeactivateModalWidget(class UWidget* Widget);
	void CreateDefaultStateWidget();
	bool CloseTopModalWidget(bool bShouldForceClose, bool bPermitLatentClosing);
	void CloseModalWidget(class UWidget* Widget, bool bShouldForceClose, bool bPermitLatentClosing);
	void AddLoadingScreenWidget(class UUserWidget* Widget);
	void ActivateModalWidget(class UWidget* Widget);
};

// 0x38 (0x3B8 - 0x380)
// Class S6UICore.S6UI_UIManagerHUDBase
class AS6UI_UIManagerHUDBase : public AHUD
{
public:
	TSoftClassPtr<class US6UI_UIManagerWidgetBase> RootHUDWidgetType;                                 // 0x380(0x30)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_UIManagerWidgetBase*             RootHUDWidgetInstance;                             // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_UIManagerHUDBase");

		return Clss;
	}

	class US6UI_UIManagerWidgetBase* GetUIManagerWidget();
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_Utils
class US6UI_Utils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_Utils");

		return Clss;
	}

	bool SummonContextMenuAtPosition(class UObject* WorldContextObject, class UWidget* ParentWidget, struct FVector2D& Position, TSubclassOf<class UUserWidget>& ContentWidgetClass, struct FS6UI_ContextMenu* OutContextMenu);
	bool SummonContextMenu(class UObject* WorldContextObject, struct FPointerEvent& MouseEvent, TSubclassOf<class UUserWidget>& ContentWidgetClass, struct FS6UI_ContextMenu* OutContextMenu);
	class UUserWidget* GetContextMenuContentWidget(struct FS6UI_ContextMenu& ContextMenu);
	void DismissContextMenu(struct FS6UI_ContextMenu& ContextMenu);
	bool AreCapsLocked();
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_StateStatics
class US6UI_StateStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UI_StateStatics");

		return Clss;
	}

	void PushState(class US6UI_StateUserWidget* Widget);
	void PopState(class US6UI_StateUserWidget* Widget);
	struct FS6UI_InputMode CreateInputMode_UIOnly(class UWidget* WidgetToFocus, enum class ES6UI_MouseLockMode MouseLockMode, bool bShowCursor);
	struct FS6UI_InputMode CreateInputMode_GameOnly();
	struct FS6UI_InputMode CreateInputMode_GameAndUI(class UWidget* WidgetToFocus, enum class ES6UI_MouseLockMode MouseLockMode, bool bHideCursorDuringCapture, bool bShowCursor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
