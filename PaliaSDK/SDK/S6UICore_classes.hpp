#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_A20[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftClassPtr<class US6UI_ModalWidgetBase>   ModalClass;                                        // 0x58(0x30)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class US6UI_AsyncAction_OpenModal* GetDefaultObj();

	class US6UI_AsyncAction_OpenModal* OpenModal(class APlayerController* PC, TSoftClassPtr<class US6UI_ModalWidgetBase> WidgetClass);
	void OnOpened__DelegateSignature(class US6UI_ModalWidgetBase* ModalWidget);
	void OnFailed__DelegateSignature();
};

// 0x10 (0x4B0 - 0x4A0)
// Class S6UICore.S6UI_InputActionHandlingUserWidget
class US6UI_InputActionHandlingUserWidget : public UCommonActivatableWidgetInputExtended
{
public:
	uint8                                        Pad_A29[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class US6UI_InputActionHandlingWidgetComponent* InputActionHandlingWidgetComponent;                // 0x4A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class US6UI_InputActionHandlingUserWidget* GetDefaultObj();

};

// 0x38 (0x4E8 - 0x4B0)
// Class S6UICore.S6UI_ModalWidgetBase
class US6UI_ModalWidgetBase : public US6UI_InputActionHandlingUserWidget
{
public:
	uint8                                        Pad_A6C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStartedClosing;                                  // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinishedClosing;                                 // 0x4D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bWantsCursor;                                      // 0x4E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6UI_ModalWidgetBase* GetDefaultObj();

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

// 0x90 (0x578 - 0x4E8)
// Class S6UICore.S6UI_CommandMenu
class US6UI_CommandMenu : public US6UI_ModalWidgetBase
{
public:
	TArray<class FName>                          NamespacesToHaveFirst;                             // 0x4E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UNativeWidgetHost*                     MenuHost;                                          // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A81[0x78];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6UI_CommandMenu* GetDefaultObj();

};

// 0xC8 (0x230 - 0x168)
// Class S6UICore.S6UI_CustomNavigationGroup
class US6UI_CustomNavigationGroup : public UPanelWidget
{
public:
	uint8                                        Pad_AD7[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ES6UI_NavGroupType                NavGroupType;                                      // 0x178(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsNullableNavGroup;                               // 0x179(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AD9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       UINavWidgets;                                      // 0x180(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FS6UI_NavExplicitData>         NavExplicitDatas;                                  // 0x190(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        FirstSelectIndex;                                  // 0x1A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        GridDimensionX;                                    // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapHorizontalNavigation;                         // 0x1A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoEdgeEscape;                                   // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EUINavigation>             EdgeEscapeDirections;                              // 0x1B0(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            BP_OnNavigationGroupInitialized;                   // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FDelegateProperty_                           BP_OnNavigationGroupTransition;                    // 0x1D0(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FDelegateProperty_                           BP_OnIsWidgetValiedToNavigate;                     // 0x1E0(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UWidget*>                       InternalUINavWidgets;                              // 0x1F0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS6UI_NavigationGroupTranstionData> DynamicTransitionDatas;                            // 0x208(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<struct FS6UI_NavigationGroupTranstionData> DynamicBoundaryTransitionDatas;                    // 0x218(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AE7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6UI_CustomNavigationGroup* GetDefaultObj();

	void SetAutoEdgeEscapeDirections(const TArray<enum class EUINavigation>& InEdgeEscapeDirections);
	bool OnIsWidgetValiedToNavigate__DelegateSignature(class UObject* NavObject);
	bool OnCustomNavigationGroupTransitionEvent__DelegateSignature(enum class EUINavigation InNavigationType, class US6UI_CustomNavigationGroup* InOriginNavigationGroup, int32 InOriginWidgetIndex, int32 InTargetWidgetIndex);
	void OnCustomNavigationGroupInitialized__DelegateSignature();
	void NavigateToTargetWidget(int32 InTargetWidgetIndex, bool bDelayActive);
	void EnableAutoEdgeEscape(bool bInAutoEdgeEscape);
	void DelayExcuteNavigationFromParentGroup(struct FFocusEvent& InFocusEvent);
	void ClearNavigationGroupTransitionDatas();
	void ClearNavigationData(bool bInClearNavWidgets);
	void BuildNavigation(bool bInImmediately);
	void AddNavWidgets(const TArray<class UWidget*>& InWidgetArray, bool bInBuildNavigationImmediately);
	void AddNavigationGroupTransitionData(const struct FS6UI_NavigationGroupTranstionData& InTransitionData, bool bInBidirectional);
	void AddNavExplicitData(struct FS6UI_NavExplicitData& InNavExplicitData);
	void ActiveNavigationGroup(bool bDelayActive, int32 InAutoSelectNavWidgetID);
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_CustomNavigationWidgetInterface
class IS6UI_CustomNavigationWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IS6UI_CustomNavigationWidgetInterface* GetDefaultObj();

};

// 0x0 (0x3E0 - 0x3E0)
// Class S6UICore.S6UI_GameViewportClient
class US6UI_GameViewportClient : public UCommonGameViewportClient
{
public:

	static class UClass* StaticClass();
	static class US6UI_GameViewportClient* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class S6UICore.S6UI_InputActionHandlingWidgetComponent
class US6UI_InputActionHandlingWidgetComponent : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockAllUnhandledInputActions;                    // 0x29(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B34[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Priority;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FS6UI_RegisteredInputMappingContext> RegisteredInputMappingContexts;                    // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInputActionBindingsChanged;                      // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnabledStateChanged;                             // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FS6UI_RegisteredInputActionBinding> InputActionBindings;                               // 0x60(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class US6UI_InputActionHandlingWidgetComponent* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class IS6UI_InputActionHandlingWidgetInterface* GetDefaultObj();

	class US6UI_InputActionHandlingWidgetComponent* GetInputActionHandlingComponent();
};

// 0x0 (0x158 - 0x158)
// Class S6UICore.S6UI_InputActionRouter
class US6UI_InputActionRouter : public UCommonUIActionRouterBase
{
public:

	static class UClass* StaticClass();
	static class US6UI_InputActionRouter* GetDefaultObj();

};

// 0x1D0 (0x200 - 0x30)
// Class S6UICore.S6UI_InputRouterSubsystem
class US6UI_InputRouterSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_B60[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputMappingContext*>          AppliedInputMappingContexts;                       // 0xA0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B61[0x150];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6UI_InputRouterSubsystem* GetDefaultObj();

	void UnregisterInputActionHandler(class US6UI_InputActionHandlingWidgetComponent* InputActionHandler);
	void RegisterInputActionHandler(class US6UI_InputActionHandlingWidgetComponent* InputActionHandler);
	void HandleInputActionHandlingComponentEnabledStateChanged(class US6UI_InputActionHandlingWidgetComponent* AffectedComponent);
	void HandleInputActionHandlingComponentBindingsChanged(class US6UI_InputActionHandlingWidgetComponent* AffectedComponent);
};

// 0x38 (0x4E8 - 0x4B0)
// Class S6UICore.S6UI_StateUserWidget
class US6UI_StateUserWidget : public US6UI_InputActionHandlingUserWidget
{
public:
	struct FMVVMViewModelContext                 ViewModelContext;                                  // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class US6UI_StateViewModel*                  ViewModel;                                         // 0x4C0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftClassPtr<class UWidget>>         WidgetClassesToPreload;                            // 0x4C8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UWidget>>           LoadedWidgetClasses;                               // 0x4D8(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class US6UI_StateUserWidget* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class US6UI_StateViewModel* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_ToolTipWidgetInterface
class IS6UI_ToolTipWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IS6UI_ToolTipWidgetInterface* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class US6UI_InputAction* GetDefaultObj();

};

// 0x70 (0x520 - 0x4B0)
// Class S6UICore.S6UI_UIManagerWidgetBase
class US6UI_UIManagerWidgetBase : public US6UI_InputActionHandlingUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnInputModeRefreshed;                              // 0x4B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UOverlay*                              Overlay_ModalWidgetLayer;                          // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USizeBox*                              SizeBox_StateWidget;                               // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class US6UI_StateUserWidget>   DefaultStateWidgetType;                            // 0x4D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class US6UI_UIManagerCrossPlatformHelper> CrossPlatformHelperType;                           // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_UIManagerCrossPlatformHelper*    CrossPlatformHelper;                               // 0x508(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_StateUserWidget*                 DefaultStateWidgetInstance;                        // 0x510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class US6UI_StateUserWidget*                 CurrentStateWidget;                                // 0x518(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class US6UI_UIManagerWidgetBase* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class AS6UI_UIManagerHUDBase* GetDefaultObj();

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

	static class UClass* StaticClass();
	static class US6UI_UIManagerCrossPlatformHelper* GetDefaultObj();

	TSoftClassPtr<class US6UI_StateUserWidget> RedirectStateType(TSoftClassPtr<class US6UI_StateUserWidget> DefaultStateType);
	TSoftClassPtr<class US6UI_ModalWidgetBase> RedirectModalType(TSoftClassPtr<class US6UI_ModalWidgetBase> DefaultModalType);
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_Utils
class US6UI_Utils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class US6UI_Utils* GetDefaultObj();

	bool SummonContextMenuAtPosition(class UObject* WorldContextObject, class UWidget* ParentWidget, struct FVector2D& Position, TSubclassOf<class UUserWidget>& ContentWidgetClass, struct FS6UI_ContextMenu* OutContextMenu);
	bool SummonContextMenu(class UObject* WorldContextObject, struct FPointerEvent& MouseEvent, TSubclassOf<class UUserWidget>& ContentWidgetClass, struct FS6UI_ContextMenu* OutContextMenu);
	bool IsShowCommonUI();
	class UUserWidget* GetContextMenuContentWidget(struct FS6UI_ContextMenu& ContextMenu);
	void DismissContextMenu(struct FS6UI_ContextMenu& ContextMenu);
	bool AreCapsLocked();
};

// 0x0 (0x28 - 0x28)
// Class S6UICore.S6UI_StateStatics
class US6UI_StateStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class US6UI_StateStatics* GetDefaultObj();

	void PushState(class US6UI_StateUserWidget* Widget);
	void PopState(class US6UI_StateUserWidget* Widget);
	struct FS6UI_InputMode CreateInputMode_UIOnly(class UWidget* WidgetToFocus, enum class ES6UI_MouseLockMode MouseLockMode, bool bShowCursor);
	struct FS6UI_InputMode CreateInputMode_GameOnly();
	struct FS6UI_InputMode CreateInputMode_GameAndUI(class UWidget* WidgetToFocus, enum class ES6UI_MouseLockMode MouseLockMode, bool bHideCursorDuringCapture, bool bShowCursor);
};

}


