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

// 0x58 (0x88 - 0x30)
// Class S6UICore.S6UI_AsyncAction_OpenModal
class US6UI_AsyncAction_OpenModal : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnOpened;                                          // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class US6UI_ModalWidgetBase>   ModalClass;                                        // 0x58(0x30)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_AsyncAction_OpenModal");
		return Clss;
	}

	class US6UI_AsyncAction_OpenModal* OpenModal(class APlayerController* InPC, TSoftClassPtr<class US6UI_ModalWidgetBase> InWidgetClass);
	void OnOpened__DelegateSignature(class US6UI_ModalWidgetBase* InModalWidget);
	void OnFailed__DelegateSignature();
};

// 0x10 (0x4A0 - 0x490)
// Class S6UICore.S6UI_InputActionHandlingUserWidget
class US6UI_InputActionHandlingUserWidget : public UCommonActivatableWidgetInputExtended
{
public:
	uint8                                        Pad_A0E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class US6UI_InputActionHandlingWidgetComponent* InputActionHandlingWidgetComponent;                // 0x498(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_InputActionHandlingUserWidget");
		return Clss;
	}

};

// 0x38 (0x4D8 - 0x4A0)
// Class S6UICore.S6UI_ModalWidgetBase
class US6UI_ModalWidgetBase : public US6UI_InputActionHandlingUserWidget
{
public:
	uint8                                        Pad_A3D[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStartedClosing;                                  // 0x4B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinishedClosing;                                 // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bWantsCursor;                                      // 0x4D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A40[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_ModalWidgetBase");
		return Clss;
	}

	void SetWantsCursor(bool InbValue);
	void OnStartedClosing__DelegateSignature(class UWidget* InWidget);
	void OnFinishedOpening__DelegateSignature(class UWidget* InWidget);
	void OnFinishedClosing__DelegateSignature(class UWidget* InWidget);
	void HandleStartOpening_BP(bool* InbOutHasLatentOpeningLogic);
	void HandleStartClosing_BP(bool InbPermitLatentClosing, bool* InbOutHasLatentClosingLogic);
	void HandleOpened_BP();
	void HandleInputAction_UIBack_Triggered(const struct FInputActionValue& InActionValue, float InElapsedTime, float InTriggeredTime, class UInputAction* InSourceAction);
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
	uint8                                        Pad_A48[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_CommandMenu");
		return Clss;
	}

};

// 0x68 (0x1D0 - 0x168)
// Class S6UICore.S6UI_CustomNavigationGroup
class US6UI_CustomNavigationGroup : public UPanelWidget
{
public:
	uint8                                        Pad_A5D[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ES6UI_NavGroupType                NavGroupType;                                      // 0x178(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       UINavWidgets;                                      // 0x180(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FS6UI_NavExplicitData>         NavExplicitDatas;                                  // 0x190(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        FirstSelectIndex;                                  // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoEdgeEscape;                                   // 0x1A4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EUINavigation>             EdgeEscapeDirections;                              // 0x1A8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UWidget*>                       InternalUINavWidgets;                              // 0x1B8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A60[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_CustomNavigationGroup");
		return Clss;
	}

	void MarkNavigationDirty();
	bool ExcuteNavigation(enum class EUINavigation InInNavigationType);
	void DelayExcuteNavigationFromParentGroup(struct FFocusEvent& InInFocusEvent);
	void ClearNavigationData(bool InbInClearNavWidgets);
	void AddNavWidgets(const TArray<class UWidget*>& InInWidgetArray, bool InbInMarkNavigationDirty);
	void AddNavExplicitData(struct FS6UI_NavExplicitData& InInNavExplicitData);
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_CustomNavigationWidgetInterface
class IS6UI_CustomNavigationWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_CustomNavigationWidgetInterface");
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
		static class UClass* Clss = UObject::FindClassFast("S6UI_GameViewportClient");
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
	uint8                                        Pad_A8D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FS6UI_RegisteredInputMappingContext> RegisteredInputMappingContexts;                    // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInputActionBindingsChanged;                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnabledStateChanged;                             // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FS6UI_RegisteredInputActionBinding> InputActionBindings;                               // 0x60(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_InputActionHandlingWidgetComponent");
		return Clss;
	}

	void UnregisterInputActionBinding(struct FGuid& InBindingId);
	void SetIsEnabled(bool InbValue);
	struct FGuid RegisterInputActionBinding(class UInputAction* InInputAction, enum class ETriggerEvent InTriggerEventType, FDelegateProperty_& InDelegate);
	void OnInputActionBindingsChanged__DelegateSignature(class US6UI_InputActionHandlingWidgetComponent* InAffectedComponent);
	void OnEnabledStateChanged__DelegateSignature(class US6UI_InputActionHandlingWidgetComponent* InAffectedComponent);
	TArray<struct FS6UI_RegisteredInputActionBinding> GetRegisteredInputActionBindings();
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_InputActionHandlingWidgetInterface
class IS6UI_InputActionHandlingWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_InputActionHandlingWidgetInterface");
		return Clss;
	}

	class US6UI_InputActionHandlingWidgetComponent* GetInputActionHandlingComponent();
};

// 0x0 (0x158 - 0x158)
// Class S6UICore.S6UI_InputActionRouter
class US6UI_InputActionRouter : public UCommonUIActionRouterBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_InputActionRouter");
		return Clss;
	}

};

// 0x1D0 (0x200 - 0x30)
// Class S6UICore.S6UI_InputRouterSubsystem
class US6UI_InputRouterSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_AB8[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputMappingContext*>          AppliedInputMappingContexts;                       // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_ABB[0x150];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_InputRouterSubsystem");
		return Clss;
	}

	void UnregisterInputActionHandler(class US6UI_InputActionHandlingWidgetComponent* InInputActionHandler);
	void RegisterInputActionHandler(class US6UI_InputActionHandlingWidgetComponent* InInputActionHandler);
	void HandleInputActionHandlingComponentEnabledStateChanged(class US6UI_InputActionHandlingWidgetComponent* InAffectedComponent);
	void HandleInputActionHandlingComponentBindingsChanged(class US6UI_InputActionHandlingWidgetComponent* InAffectedComponent);
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
		static class UClass* Clss = UObject::FindClassFast("S6UI_StateUserWidget");
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
		static class UClass* Clss = UObject::FindClassFast("S6UI_StateViewModel");
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
		static class UClass* Clss = UObject::FindClassFast("S6UI_ToolTipWidgetInterface");
		return Clss;
	}

	void UpdateToolTipText(class FText& InText);
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
		static class UClass* Clss = UObject::FindClassFast("S6UI_InputAction");
		return Clss;
	}

};

// 0x70 (0x510 - 0x4A0)
// Class S6UICore.S6UI_UIManagerWidgetBase
class US6UI_UIManagerWidgetBase : public US6UI_InputActionHandlingUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnInputModeRefreshed;                              // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOverlay*                              Overlay_ModalWidgetLayer;                          // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              SizeBox_StateWidget;                               // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class US6UI_StateUserWidget>   DefaultStateWidgetType;                            // 0x4C0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class US6UI_UIManagerCrossPlatformHelper> CrossPlatformHelperType;                           // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_UIManagerCrossPlatformHelper*    CrossPlatformHelper;                               // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_StateUserWidget*                 DefaultStateWidgetInstance;                        // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_StateUserWidget*                 CurrentStateWidget;                                // 0x508(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_UIManagerWidgetBase");
		return Clss;
	}

	void RemoveModalWidget(class UWidget* InWidget);
	void RemoveLoadingScreenWidget(class UUserWidget* InWidget);
	void PushState(class US6UI_StateUserWidget* InStateWidget);
	void PopState(class US6UI_StateUserWidget* InStateWidget);
	void OpenModalWidget(class UWidget* InWidget);
	bool IsModalWidgetActive();
	void HandleOnStateInputModeChanged(class UObject* InObject, const struct FFieldNotificationId& InField);
	class US6UI_UIManagerWidgetBase* GetUIManagerWidget(class APlayerController* InPC);
	class US6UI_StateUserWidget* GetCurrentStateWidget();
	class US6UI_StateViewModel* GetCurrentStateViewModel();
	void ForceCloseAllModalWidgets();
	void DeactivateTopModalWidget();
	void DeactivateModalWidget(class UWidget* InWidget);
	void CreateDefaultStateWidget();
	bool CloseTopModalWidget(bool InbShouldForceClose, bool InbPermitLatentClosing);
	void CloseModalWidget(class UWidget* InWidget, bool InbShouldForceClose, bool InbPermitLatentClosing);
	void AddLoadingScreenWidget(class UUserWidget* InWidget);
	void ActivateModalWidget(class UWidget* InWidget);
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
		static class UClass* Clss = UObject::FindClassFast("S6UI_UIManagerHUDBase");
		return Clss;
	}

	class US6UI_UIManagerWidgetBase* GetUIManagerWidget();
};

// 0x140 (0x168 - 0x28)
// Class S6UICore.S6UI_UIManagerCrossPlatformHelper
class US6UI_UIManagerCrossPlatformHelper : public UObject
{
public:
	TMap<TSoftClassPtr<class US6UI_StateUserWidget>, struct FS6UI_UIManagerCrossPlatformStateTypeItem> RedirectPlatformStateTypes;                        // 0x28(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<TSoftClassPtr<class US6UI_StateUserWidget>, struct FS6UI_UIManagerCrossPlatformStateTypeItem> RedirectCommonUIStateTypes;                        // 0x78(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<TSoftClassPtr<class US6UI_ModalWidgetBase>, struct FS6UI_UIManagerCrossPlatformModalTypeItem> RedirectPlatformModalTypes;                        // 0xC8(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<TSoftClassPtr<class US6UI_ModalWidgetBase>, struct FS6UI_UIManagerCrossPlatformModalTypeItem> RedirectCommonUIModalTypes;                        // 0x118(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_UIManagerCrossPlatformHelper");
		return Clss;
	}

	TSoftClassPtr<class US6UI_StateUserWidget> RedirectStateType(TSoftClassPtr<class US6UI_StateUserWidget> InDefaultStateType);
	TSoftClassPtr<class US6UI_ModalWidgetBase> RedirectModalType(TSoftClassPtr<class US6UI_ModalWidgetBase> InDefaultModalType);
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_Utils
class US6UI_Utils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_Utils");
		return Clss;
	}

	bool SummonContextMenuAtPosition(class UObject* InWorldContextObject, class UWidget* InParentWidget, struct FVector2D& InPosition, TSubclassOf<class UUserWidget>& InContentWidgetClass, struct FS6UI_ContextMenu* InOutContextMenu);
	bool SummonContextMenu(class UObject* InWorldContextObject, struct FPointerEvent& InMouseEvent, TSubclassOf<class UUserWidget>& InContentWidgetClass, struct FS6UI_ContextMenu* InOutContextMenu);
	bool IsShowCommonUI();
	class UUserWidget* GetContextMenuContentWidget(struct FS6UI_ContextMenu& InContextMenu);
	void DismissContextMenu(struct FS6UI_ContextMenu& InContextMenu);
	bool AreCapsLocked();
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_StateStatics
class US6UI_StateStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_StateStatics");
		return Clss;
	}

	void PushState(class US6UI_StateUserWidget* InWidget);
	void PopState(class US6UI_StateUserWidget* InWidget);
	struct FS6UI_InputMode CreateInputMode_UIOnly(class UWidget* InWidgetToFocus, enum class ES6UI_MouseLockMode InMouseLockMode, bool InbShowCursor);
	struct FS6UI_InputMode CreateInputMode_GameOnly();
	struct FS6UI_InputMode CreateInputMode_GameAndUI(class UWidget* InWidgetToFocus, enum class ES6UI_MouseLockMode InMouseLockMode, bool InbHideCursorDuringCapture, bool InbShowCursor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
