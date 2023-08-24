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
// Class UMG.Visual
class UVisual : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Visual");
		return Clss;
	}

};

// 0x128 (0x150 - 0x28)
// Class UMG.Widget
class UWidget : public UVisual
{
public:
	uint8                                        Pad_5D7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            Slot;                                              // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           bIsEnabledDelegate;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ToolTipText;                                       // 0x48(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ToolTipTextDelegate;                               // 0x60(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ToolTipWidget;                                     // 0x70(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ToolTipWidgetDelegate;                             // 0x78(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           VisibilityDelegate;                                // 0x88(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWidgetTransform                      RenderTransform;                                   // 0x98(0x38)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             RenderTransformPivot;                              // 0xD0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFlowDirectionPreference          FlowDirectionPreference;                           // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVariable : 1;                                   // Mask: 0x1, PropSize: 0x10xE1(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCreatedByConstructionScript : 1;                  // Mask: 0x2, PropSize: 0x10xE1(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x4, PropSize: 0x10xE1(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_Cursor : 1;                              // Mask: 0x8, PropSize: 0x10xE1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsVolatile : 1;                                   // Mask: 0x10, PropSize: 0x10xE1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_58 : 3;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EMouseCursor                      Cursor;                                            // 0xE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetClipping                   Clipping;                                          // 0xE3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  Visibility;                                        // 0xE4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RenderOpacity;                                     // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USlateAccessibleWidgetData*            AccessibleWidgetData;                              // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetNavigation*                     Navigation;                                        // 0xF8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5F6[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPropertyBinding*>              NativeBindings;                                    // 0x120(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_5F7[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Widget");
		return Clss;
	}

	void SetVisibility(enum class ESlateVisibility InInVisibility);
	void SetUserFocus(class APlayerController* InPlayerController);
	void SetToolTipText(class FText& InInToolTipText);
	void SetToolTip(class UWidget* InWidget);
	void SetRenderTranslation(const struct FVector2D& InTranslation);
	void SetRenderTransformPivot(const struct FVector2D& InPivot);
	void SetRenderTransformAngle(float InAngle);
	void SetRenderTransform(const struct FWidgetTransform& InInTransform);
	void SetRenderShear(const struct FVector2D& InShear);
	void SetRenderScale(const struct FVector2D& InScale);
	void SetRenderOpacity(float InInOpacity);
	void SetNavigationRuleExplicit(enum class EUINavigation InDirection, class UWidget* InInWidget);
	void SetNavigationRuleCustomBoundary(enum class EUINavigation InDirection, FDelegateProperty_ InInCustomDelegate);
	void SetNavigationRuleCustom(enum class EUINavigation InDirection, FDelegateProperty_ InInCustomDelegate);
	void SetNavigationRuleBase(enum class EUINavigation InDirection, enum class EUINavigationRule InRule);
	void SetNavigationRule(enum class EUINavigation InDirection, enum class EUINavigationRule InRule, class FName InWidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool InbInIsEnabled);
	void SetFocus();
	void SetCursor(enum class EMouseCursor InInCursor);
	void SetClipping(enum class EWidgetClipping InInClipping);
	void SetAllNavigationRules(enum class EUINavigationRule InRule, class FName InWidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	void K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& InFieldId, FDelegateProperty_ InDelegate);
	void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& InFieldId);
	void K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& InFieldId, FDelegateProperty_ InDelegate);
	bool IsVisible();
	bool IsRendered();
	bool IsInViewport();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* InPlayerController);
	bool HasUserFocus(class APlayerController* InPlayerController);
	bool HasMouseCaptureByUser(int32 InUserIndex, int32 InPointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	enum class ESlateVisibility GetVisibility();
	struct FGeometry GetTickSpaceGeometry();
	class FText GetText__DelegateSignature();
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	struct FGeometry GetPaintSpaceGeometry();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	enum class EMouseCursor GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int32 GetInt32__DelegateSignature();
	class UGameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	enum class EWidgetClipping GetClipping();
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class FText GetAccessibleText();
	class FText GetAccessibleSummaryText();
	class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& InItem);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* InItem);
	void ForceVolatile(bool InbForce);
	void ForceLayoutPrepass();
};

// 0x18 (0x168 - 0x150)
// Class UMG.PanelWidget
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                    Slots;                                             // 0x150(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_63D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PanelWidget");
		return Clss;
	}

	bool RemoveChildAt(int32 InIndex);
	bool RemoveChild(class UWidget* InContent);
	bool HasChild(class UWidget* InContent);
	bool HasAnyChildren();
	int32 GetChildrenCount();
	int32 GetChildIndex(class UWidget* InContent);
	class UWidget* GetChildAt(int32 InIndex);
	TArray<class UWidget*> GetAllChildren();
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* InContent);
};

// 0x0 (0x168 - 0x168)
// Class UMG.ContentWidget
class UContentWidget : public UPanelWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ContentWidget");
		return Clss;
	}

	class UPanelSlot* SetContent(class UWidget* InContent);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};

// 0x128 (0x278 - 0x150)
// Class UMG.UserWidget
class UUserWidget : public UWidget
{
public:
	uint8                                        Pad_91F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorAndOpacity;                                   // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x168(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x178(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ForegroundColorDelegate;                           // 0x18C(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_927[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnVisibilityChanged;                               // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_928[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x1C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>            ActiveSequencePlayers;                             // 0x1D8(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class UUMGSequenceTickManager*               AnimationTickManager;                              // 0x1E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>            StoppedSequencePlayers;                            // 0x1F0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FNamedSlotBinding>             NamedSlotBindings;                                 // 0x200(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UUserWidgetExtension*>          Extensions;                                        // 0x210(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UWidgetTree*                           WidgetTree;                                        // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x228(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFocusable : 1;                                  // Mask: 0x1, PropSize: 0x10x22C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopAction : 1;                                   // Mask: 0x2, PropSize: 0x10x22C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasScriptImplementedTick : 1;                     // Mask: 0x4, PropSize: 0x10x22C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHasScriptImplementedPaint : 1;                    // Mask: 0x8, PropSize: 0x10x22C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6E : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_943[0x13];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EWidgetTickFrequency              TickFrequency;                                     // 0x240(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_944[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputComponent*                       InputComponent;                                    // 0x248(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAnimationEventBinding>        AnimationCallbacks;                                // 0x250(0x10)(ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_945[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserWidget");
		return Clss;
	}

	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* InAnimation, FDelegateProperty_ InDelegate);
	void UnbindFromAnimationFinished(class UWidgetAnimation* InAnimation, FDelegateProperty_ InDelegate);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* InAnimation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* InAnimation);
	void Tick(const struct FGeometry& InMyGeometry, float InInDeltaTime);
	void StopListeningForInputAction(class FName InActionName, enum class EInputEvent InEventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InInAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& InPosition, bool InbRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InInAnimation, float InPlaybackSpeed);
	void SetPadding(const struct FMargin& InInPadding);
	void SetOwningPlayer(class APlayerController* InLocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InInAnimation, int32 InNumLoopsToPlay);
	void SetInputActionPriority(int32 InNewPriority);
	void SetInputActionBlocking(bool InbShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InInForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& InSize);
	void SetColorAndOpacity(const struct FLinearColor& InInColorAndOpacity);
	void SetAnimationCurrentTime(class UWidgetAnimation* InInAnimation, float InInTime);
	void SetAnchorsInViewport(const struct FAnchors& InAnchors);
	void SetAlignmentInViewport(const struct FVector2D& InAlignment);
	void ReverseAnimation(class UWidgetAnimation* InInAnimation);
	void RemoveFromViewport();
	void RemoveExtensions(TSubclassOf<class UUserWidgetExtension> InInExtensionType);
	void RemoveExtension(class UUserWidgetExtension* InInExtension);
	void RegisterInputComponent();
	void PreConstruct(bool InIsDesignTime);
	void PlaySound(class USoundBase* InSoundToPlay);
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InInAnimation, float InStartAtTime, float InEndAtTime, int32 InNumLoopsToPlay, enum class EUMGSequencePlayMode InPlayMode, float InPlaybackSpeed, bool InbRestoreState);
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InInAnimation, float InPlaybackSpeed, bool InbRestoreState);
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InInAnimation, float InPlaybackSpeed, bool InbRestoreState);
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InInAnimation, float InStartAtTime, int32 InNumLoopsToPlay, enum class EUMGSequencePlayMode InPlayMode, float InPlaybackSpeed, bool InbRestoreState);
	float PauseAnimation(class UWidgetAnimation* InInAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& InMyGeometry, struct FPointerEvent& InInTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& InMyGeometry, struct FPointerEvent& InInTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& InMyGeometry, struct FPointerEvent& InGestureEvent);
	struct FEventReply OnTouchForceChanged(const struct FGeometry& InMyGeometry, struct FPointerEvent& InInTouchEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& InMyGeometry, struct FPointerEvent& InInTouchEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InInFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& InMyGeometry, const struct FKeyEvent& InInKeyEvent);
	void OnPaint(struct FPaintContext& InContext);
	struct FEventReply OnMouseWheel(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	void OnMouseLeave(struct FPointerEvent& InMouseEvent);
	void OnMouseEnter(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InInMyGeometry, struct FPointerEvent& InInMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& InMyGeometry, const struct FMotionEvent& InInMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& InMyGeometry, const struct FKeyEvent& InInKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& InMyGeometry, const struct FKeyEvent& InInKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& InMyGeometry, const struct FCharacterEvent& InInCharacterEvent);
	void OnInitialized();
	struct FEventReply OnFocusReceived(const struct FGeometry& InMyGeometry, const struct FFocusEvent& InInFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InInFocusEvent);
	bool OnDrop(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InPointerEvent, class UDragDropOperation* InOperation);
	bool OnDragOver(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InPointerEvent, class UDragDropOperation* InOperation);
	void OnDragLeave(const struct FPointerEvent& InPointerEvent, class UDragDropOperation* InOperation);
	void OnDragEnter(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InPointerEvent, class UDragDropOperation* InOperation);
	void OnDragDetected(const struct FGeometry& InMyGeometry, struct FPointerEvent& InPointerEvent, class UDragDropOperation** InOperation);
	void OnDragCancelled(struct FPointerEvent& InPointerEvent, class UDragDropOperation* InOperation);
	void OnAnimationStarted(class UWidgetAnimation* InAnimation);
	void OnAnimationFinished(class UWidgetAnimation* InAnimation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& InMyGeometry, const struct FAnalogInputEvent& InInAnalogInputEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InInFocusEvent);
	void ListenForInputAction(class FName InActionName, enum class EInputEvent InEventType, bool InbConsume, FDelegateProperty_ InCallback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(class FName InActionName);
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InInAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InInAnimation);
	class APawn* GetOwningPlayerPawn();
	class APlayerCameraManager* GetOwningPlayerCameraManager();
	bool GetIsVisible();
	TArray<class UUserWidgetExtension*> GetExtensions(TSubclassOf<class UUserWidgetExtension> InExtensionType);
	class UUserWidgetExtension* GetExtension(TSubclassOf<class UUserWidgetExtension> InExtensionType);
	float GetAnimationCurrentTime(class UWidgetAnimation* InInAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void FlushAnimations();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* InAnimation, FDelegateProperty_ InDelegate);
	void BindToAnimationFinished(class UWidgetAnimation* InAnimation, FDelegateProperty_ InDelegate);
	void BindToAnimationEvent(class UWidgetAnimation* InAnimation, FDelegateProperty_ InDelegate, enum class EWidgetAnimationEvent InAnimationEvent, class FName InUserTag);
	void AddToViewport(int32 InZOrder);
	bool AddToPlayerScreen(int32 InZOrder);
	class UUserWidgetExtension* AddExtension(TSubclassOf<class UUserWidgetExtension> InInExtensionType);
};

// 0x0 (0x28 - 0x28)
// Class UMG.RichTextBlockDecorator
class URichTextBlockDecorator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RichTextBlockDecorator");
		return Clss;
	}

};

// 0x128 (0x290 - 0x168)
// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                               Padding;                                           // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x179(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyAlphaToBlur;                                 // 0x17A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CF[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlurStrength;                                      // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAutoRadiusCalculation;                    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BlurRadius;                                        // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              CornerRadius;                                      // 0x190(0x20)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LowQualityFallbackBrush;                           // 0x1B0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BackgroundBlur");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetLowQualityFallbackBrush(struct FSlateBrush& InInBrush);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
	void SetCornerRadius(const struct FVector4& InInCornerRadius);
	void SetBlurStrength(float InInStrength);
	void SetBlurRadius(int32 InInBlurRadius);
	void SetApplyAlphaToBlur(bool InbInApplyAlphaToBlur);
};

// 0x480 (0x5E8 - 0x168)
// Class UMG.Button
class UButton : public UContentWidget
{
public:
	uint8                                        Pad_A02[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          WidgetStyle;                                       // 0x170(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x560(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x570(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x580(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x581(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x582(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x583(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A04[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x588(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x598(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x5A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x5B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x5C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A08[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button");
		return Clss;
	}

	void SetTouchMethod(enum class EButtonTouchMethod InInTouchMethod);
	void SetStyle(struct FButtonStyle& InInStyle);
	void SetPressMethod(enum class EButtonPressMethod InInPressMethod);
	void SetColorAndOpacity(const struct FLinearColor& InInColorAndOpacity);
	void SetClickMethod(enum class EButtonClickMethod InInClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InInBackgroundColor);
	bool IsPressed();
};

// 0x30 (0x198 - 0x168)
// Class UMG.GridPanel
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                ColumnFill;                                        // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                RowFill;                                           // 0x178(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A28[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GridPanel");
		return Clss;
	}

	void SetRowFill(int32 InRowIndex, float InCoefficient);
	void SetColumnFill(int32 InColumnIndex, float InCoefficient);
	class UGridSlot* AddChildToGrid(class UWidget* InContent, int32 InInRow, int32 InInColumn);
};

// 0x10 (0x38 - 0x28)
// Class UMG.PanelSlot
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                          Parent;                                            // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Content;                                           // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PanelSlot");
		return Clss;
	}

};

// 0x20 (0x58 - 0x38)
// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot
{
public:
	uint8                                        Pad_A3D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3E[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OverlaySlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserWidgetExtension
class UUserWidgetExtension : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserWidgetExtension");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintGeneratedClassExtension
class UWidgetBlueprintGeneratedClassExtension : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetBlueprintGeneratedClassExtension");
		return Clss;
	}

};

// 0x5B0 (0x700 - 0x150)
// Class UMG.Slider
class USlider : public UWidget
{
public:
	float                                        Value;                                             // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x154(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A55[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          WidgetStyle;                                       // 0x170(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A58[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SliderBarColor;                                    // 0x674(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x684(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x694(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x695(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MouseUsesStep;                                     // 0x696(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiresControllerLock;                            // 0x697(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepSize;                                          // 0x698(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x69C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x6A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x6B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x6C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x6D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x6E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A61[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Slider");
		return Clss;
	}

	void SetValue(float InInValue);
	void SetStepSize(float InInValue);
	void SetSliderHandleColor(const struct FLinearColor& InInValue);
	void SetSliderBarColor(const struct FLinearColor& InInValue);
	void SetMinValue(float InInValue);
	void SetMaxValue(float InInValue);
	void SetLocked(bool InInValue);
	void SetIndentHandle(bool InInValue);
	float GetValue();
	float GetNormalizedValue();
};

// 0x18 (0x180 - 0x168)
// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x168(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A83[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetSwitcher");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 InIndex);
	void SetActiveWidget(class UWidget* InWidget);
	class UWidget* GetWidgetAtIndex(int32 InIndex);
	int32 GetNumWidgets();
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};

// 0x1A0 (0x308 - 0x168)
// Class UMG.Border
class UBorder : public UContentWidget
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowEffectWhenDisabled : 1;                       // Mask: 0x1, PropSize: 0x10x16A(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_86 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AB9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ContentColorAndOpacity;                            // 0x16C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ContentColorAndOpacityDelegate;                    // 0x17C(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x18C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Background;                                        // 0x1A0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BackgroundDelegate;                                // 0x270(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BrushColor;                                        // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BrushColorDelegate;                                // 0x290(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             DesiredSizeScale;                                  // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x2B4(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnMouseButtonUpEvent;                              // 0x2C4(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnMouseMoveEvent;                                  // 0x2D4(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnMouseDoubleClickEvent;                           // 0x2E4(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC6[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Border");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetShowEffectWhenDisabled(bool InbInShowEffectWhenDisabled);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InInScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InInContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* InTexture);
	void SetBrushFromMaterial(class UMaterialInterface* InMaterial);
	void SetBrushFromAsset(class USlateBrushAsset* InAsset);
	void SetBrushColor(const struct FLinearColor& InInBrushColor);
	void SetBrush(struct FSlateBrush& InInBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// 0x20 (0x170 - 0x150)
// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x150(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	enum class ETextJustify                      Justification;                                     // 0x153(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextWrappingPolicy               WrappingPolicy;                                    // 0x154(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        AutoWrapText : 1;                                  // Mask: 0x1, PropSize: 0x10x155(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_8A : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_AD2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WrapTextAt;                                        // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                               Margin;                                            // 0x15C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                        LineHeightPercentage;                              // 0x16C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextLayoutWidget");
		return Clss;
	}

	void SetJustification(enum class ETextJustify InInJustification);
};

// 0x1C8 (0x338 - 0x170)
// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextDelegate;                                      // 0x188(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x198(0x14)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x1AC(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B12[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x1C0(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B13[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           StrikeBrush;                                       // 0x220(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ShadowColorAndOpacityDelegate;                     // 0x310(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredWidth;                                   // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWrapWithInvalidationPanel;                        // 0x324(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x325(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x326(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimpleTextMode;                                   // 0x327(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B19[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextBlock");
		return Clss;
	}

	void SetTextTransformPolicy(enum class ETextTransformPolicy InInTransformPolicy);
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InInOverflowPolicy);
	void SetText(class FText InInText);
	void SetStrikeBrush(const struct FSlateBrush& InInStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InInShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InInShadowColorAndOpacity);
	void SetOpacity(float InInOpacity);
	void SetMinDesiredWidth(float InInMinDesiredWidth);
	void SetFontOutlineMaterial(class UMaterialInterface* InInMaterial);
	void SetFontMaterial(class UMaterialInterface* InInMaterial);
	void SetFont(const struct FSlateFontInfo& InInFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InInColorAndOpacity);
	void SetAutoWrapText(bool InInAutoTextWrap);
	class FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// 0xB30 (0xC98 - 0x168)
// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget
{
public:
	uint8                                        Pad_B75[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScrollBoxStyle                       WidgetStyle;                                       // 0x170(0x350)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x4C0(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0xC30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0xC31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xC32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7B[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScrollbarThickness;                                // 0xC38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ScrollbarPadding;                                  // 0xC48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         AlwaysShowScrollbar;                               // 0xC58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlwaysShowScrollbarTrack;                          // 0xC59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowOverscroll;                                   // 0xC5A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BackPadScrolling;                                  // 0xC5B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FrontPadScrolling;                                 // 0xC5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateWheelScrolling;                            // 0xC5D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDescendantScrollDestination      NavigationDestination;                             // 0xC5E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B81[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NavigationScrollPadding;                           // 0xC60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScrollWhenFocusChanges           ScrollWhenFocusChanges;                            // 0xC64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRightClickDragScrolling;                     // 0xC65(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B85[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WheelScrollMultiplier;                             // 0xC68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUserScrolled;                                    // 0xC70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B87[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScrollBox");
		return Clss;
	}

	void SetWheelScrollMultiplier(float InNewWheelScrollMultiplier);
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges InNewScrollWhenFocusChanges);
	void SetScrollOffset(float InNewScrollOffset);
	void SetScrollBarVisibility(enum class ESlateVisibility InNewScrollBarVisibility);
	void SetScrollbarThickness(struct FVector2D& InNewScrollbarThickness);
	void SetScrollbarPadding(struct FMargin& InNewScrollbarPadding);
	void SetOrientation(enum class EOrientation InNewOrientation);
	void SetNavigationDestination(enum class EDescendantScrollDestination InNewNavigationDestination);
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel InNewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool InbShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool InNewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool InNewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* InWidgetToFind, bool InAnimateScroll, enum class EDescendantScrollDestination InScrollDestination, float InPadding);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetViewFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	void EndInertialScrolling();
};

// 0x160 (0x2B0 - 0x150)
// Class UMG.Image
class UImage : public UWidget
{
public:
	struct FSlateBrush                           Brush;                                             // 0x150(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FDelegateProperty_                           BrushDelegate;                                     // 0x220(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x230(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ColorAndOpacityDelegate;                           // 0x240(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x250(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnMouseButtonDownEvent;                            // 0x254(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCD[0x4C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Image");
		return Clss;
	}

	void SetOpacity(float InInOpacity);
	void SetDesiredSizeOverride(const struct FVector2D& InDesiredSize);
	void SetColorAndOpacity(const struct FLinearColor& InInColorAndOpacity);
	void SetBrushTintColor(const struct FSlateColor& InTintColor);
	void SetBrushResourceObject(class UObject* InResourceObject);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* InTexture, bool InbMatchSize);
	void SetBrushFromTexture(class UTexture2D* InTexture, bool InbMatchSize);
	void SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> InSoftTexture, bool InbMatchSize);
	void SetBrushFromSoftMaterial(TSoftObjectPtr<class UMaterialInterface> InSoftMaterial);
	void SetBrushFromMaterial(class UMaterialInterface* InMaterial);
	void SetBrushFromAtlasInterface(TScriptInterface<class ISlateTextureAtlasInterface> InAtlasRegion, bool InbMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* InAsset);
	void SetBrush(struct FSlateBrush& InInBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// 0x118 (0x268 - 0x150)
// Class UMG.ListViewBase
class UListViewBase : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            BP_OnEntryGenerated;                               // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF4[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               EntryWidgetClass;                                  // 0x170(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WheelScrollMultiplier;                             // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableScrollAnimation;                            // 0x17C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         AllowOverscroll;                                   // 0x17D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableRightClickScrolling;                        // 0x17E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableFixedLineOffset;                            // 0x17F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FixedLineScrollOffset;                             // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowDragging;                                    // 0x184(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnEntryReleased;                                // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x198(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BF7[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ListViewBase");
		return Clss;
	}

	void SetWheelScrollMultiplier(float InNewWheelScrollMultiplier);
	void SetScrollOffset(float InInScrollOffset);
	void SetScrollBarVisibility(enum class ESlateVisibility InInVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	float GetScrollOffset();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};

// 0x9B8 (0xC20 - 0x268)
// Class UMG.ListView
class UListView : public UListViewBase
{
public:
	uint8                                        Pad_C41[0xD8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTableViewStyle                       WidgetStyle;                                       // 0x340(0xE0)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x420(0x770)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class EOrientation                      Orientation;                                       // 0xB90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESelectionMode                    SelectionMode;                                     // 0xB91(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EConsumeMouseWheel                ConsumeMouseWheel;                                 // 0xB92(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClearSelectionOnClick;                            // 0xB93(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsFocusable;                                      // 0xB94(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C42[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntrySpacing;                                      // 0xB98(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReturnFocusToSelection;                           // 0xB9C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C43[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       ListItems;                                         // 0xBA0(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_C44[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnEntryInitialized;                             // 0xBC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemClicked;                                  // 0xBD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemDoubleClicked;                            // 0xBE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemIsHoveredChanged;                         // 0xBF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemSelectionChanged;                         // 0xC00(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemScrolledIntoView;                         // 0xC10(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ListView");
		return Clss;
	}

	void SetSelectionMode(enum class ESelectionMode InSelectionMode);
	void SetSelectedIndex(int32 InIndex);
	void ScrollIndexIntoView(int32 InIndex);
	void RemoveItem(class UObject* InItem);
	void OnListItemOuterEndPlayed(class AActor* InItemOuter, enum class EEndPlayReason InEndPlayReason);
	void OnListItemEndPlayed(class AActor* InItem, enum class EEndPlayReason InEndPlayReason);
	void NavigateToIndex(int32 InIndex);
	bool IsRefreshPending();
	int32 GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int32 InIndex);
	int32 GetIndexForItem(class UObject* InItem);
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* InItem);
	void BP_SetListItems(TArray<class UObject*>& InInListItems);
	void BP_SetItemSelection(class UObject* InItem, bool InbSelected);
	void BP_ScrollItemIntoView(class UObject* InItem);
	void BP_NavigateToItem(class UObject* InItem);
	bool BP_IsItemVisible(class UObject* InItem);
	bool BP_GetSelectedItems(TArray<class UObject*>* InItems);
	class UObject* BP_GetSelectedItem();
	int32 BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* InItem);
};

// 0x700 (0x870 - 0x170)
// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x170(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            TextStyleSet;                                      // 0x188(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class URichTextBlockDecorator>> DecoratorClasses;                                  // 0x190(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bOverrideDefaultStyle;                             // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C8E[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       DefaultTextStyleOverride;                          // 0x1B0(0x340)(Edit, Protected, NativeAccessSpecifierProtected)
	float                                        MinDesiredWidth;                                   // 0x4F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextTransformPolicy              TextTransformPolicy;                               // 0x4F4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextOverflowPolicy               TextOverflowPolicy;                                // 0x4F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C92[0xA];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       DefaultTextStyle;                                  // 0x500(0x340)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class URichTextBlockDecorator*>       InstanceDecorators;                                // 0x840(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_C94[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RichTextBlock");
		return Clss;
	}

	void SetTextTransformPolicy(enum class ETextTransformPolicy InInTransformPolicy);
	void SetTextStyleSet(class UDataTable* InNewTextStyleSet);
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InInOverflowPolicy);
	void SetText(class FText& InInText);
	void SetMinDesiredWidth(float InInMinDesiredWidth);
	void SetDefaultTextStyle(struct FTextBlockStyle& InInDefaultTextStyle);
	void SetDefaultStrikeBrush(struct FSlateBrush* InInStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InInShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InInShadowColorAndOpacity);
	void SetDefaultMaterial(class UMaterialInterface* InInMaterial);
	void SetDefaultFont(const struct FSlateFontInfo& InInFontInfo);
	void SetDefaultColorAndOpacity(const struct FSlateColor& InInColorAndOpacity);
	void SetDecorators(TArray<TSubclassOf<class URichTextBlockDecorator>>& InInDecoratorClasses);
	void SetAutoWrapText(bool InInAutoTextWrap);
	void RefreshTextLayout();
	class UDataTable* GetTextStyleSet();
	class FText GetText();
	class UMaterialInstanceDynamic* GetDefaultDynamicMaterial();
	class URichTextBlockDecorator* GetDecoratorByClass(TSubclassOf<class URichTextBlockDecorator> InDecoratorClass);
	void ClearAllDefaultStyleOverrides();
};

// 0x20 (0xC40 - 0xC20)
// Class UMG.TileView
class UTileView : public UListView
{
public:
	float                                        EntryHeight;                                       // 0xC20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EntryWidth;                                        // 0xC24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EListItemAlignment                TileAlignment;                                     // 0xC28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapHorizontalNavigation;                         // 0xC29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C98[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TileView");
		return Clss;
	}

	void SetEntryWidth(float InNewWidth);
	void SetEntryHeight(float InNewHeight);
	float GetEntryWidth();
	float GetEntryHeight();
};

// 0x60 (0xC80 - 0xC20)
// Class UMG.TreeView
class UTreeView : public UListView
{
public:
	uint8                                        Pad_C9F[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           BP_OnGetItemChildren;                              // 0xC30(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnItemExpansionChanged;                         // 0xC40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CA0[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TreeView");
		return Clss;
	}

	void SetItemExpansion(class UObject* InItem, bool InbExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// 0x10 (0x178 - 0x168)
// Class UMG.Overlay
class UOverlay : public UPanelWidget
{
public:
	uint8                                        Pad_CA2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Overlay");
		return Clss;
	}

	class UOverlaySlot* AddChildToOverlay(class UWidget* InContent);
};

// 0x38 (0x1A0 - 0x168)
// Class UMG.SizeBox
class USizeBox : public UContentWidget
{
public:
	uint8                                        Pad_CBC[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WidthOverride;                                     // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightOverride;                                    // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredWidth;                                   // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredHeight;                                  // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDesiredWidth;                                   // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDesiredHeight;                                  // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAspectRatio;                                    // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAspectRatio;                                    // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_WidthOverride : 1;                       // Mask: 0x1, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_HeightOverride : 1;                      // Mask: 0x2, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinDesiredWidth : 1;                     // Mask: 0x4, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinDesiredHeight : 1;                    // Mask: 0x8, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxDesiredWidth : 1;                     // Mask: 0x10, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxDesiredHeight : 1;                    // Mask: 0x20, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinAspectRatio : 1;                      // Mask: 0x40, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MaxAspectRatio : 1;                      // Mask: 0x80, PropSize: 0x10x198(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SizeBox");
		return Clss;
	}

	void SetWidthOverride(float InInWidthOverride);
	void SetMinDesiredWidth(float InInMinDesiredWidth);
	void SetMinDesiredHeight(float InInMinDesiredHeight);
	void SetMinAspectRatio(float InInMinAspectRatio);
	void SetMaxDesiredWidth(float InInMaxDesiredWidth);
	void SetMaxDesiredHeight(float InInMaxDesiredHeight);
	void SetMaxAspectRatio(float InInMaxAspectRatio);
	void SetHeightOverride(float InInHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// 0xE0 (0x230 - 0x150)
// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget
{
public:
	enum class EDynamicBoxType                   EntryBoxType;                                      // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CCA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             EntrySpacing;                                      // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FVector2D>                     SpacingPattern;                                    // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateChildSize                       EntrySizeRule;                                     // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              EntryHorizontalAlignment;                          // 0x180(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                EntryVerticalAlignment;                            // 0x181(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CCC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxElementSize;                                    // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRadialBoxSettings                    RadialBoxSettings;                                 // 0x188(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_CCF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserWidgetPool                       EntryWidgetPool;                                   // 0x1A8(0x88)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicEntryBoxBase");
		return Clss;
	}

	void SetRadialSettings(struct FRadialBoxSettings& InInSettings);
	void SetEntrySpacing(struct FVector2D& InInEntrySpacing);
	int32 GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
};

// 0xB10 (0xC78 - 0x168)
// Class UMG.CheckBox
class UCheckBox : public UContentWidget
{
public:
	enum class ECheckBoxState                    CheckedState;                                      // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x16C(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x180(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xC50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonClickMethod                ClickMethod;                                       // 0xC51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0xC52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0xC53(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0xC54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCheckStateChanged;                               // 0xC58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckBox");
		return Clss;
	}

	void SetTouchMethod(enum class EButtonTouchMethod InInTouchMethod);
	void SetPressMethod(enum class EButtonPressMethod InInPressMethod);
	void SetIsChecked(bool InInIsChecked);
	void SetClickMethod(enum class EButtonClickMethod InInClickMethod);
	void SetCheckedState(enum class ECheckBoxState InInCheckedState);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
};

// 0x10 (0x178 - 0x168)
// Class UMG.HorizontalBox
class UHorizontalBox : public UPanelWidget
{
public:
	uint8                                        Pad_CE5[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizontalBox");
		return Clss;
	}

	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* InContent);
};

// 0x68 (0x90 - 0x28)
// Class UMG.DragDropOperation
class UDragDropOperation : public UObject
{
public:
	class FString                                Tag;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Payload;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               DefaultDragVisual;                                 // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDragPivot                        Pivot;                                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CEA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Offset;                                            // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDrop;                                            // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDragCancelled;                                   // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDragged;                                         // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DragDropOperation");
		return Clss;
	}

	void Drop(struct FPointerEvent& InPointerEvent);
	void Dragged(struct FPointerEvent& InPointerEvent);
	void DragCancelled(struct FPointerEvent& InPointerEvent);
};

// 0xF20 (0x1070 - 0x150)
// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget
{
public:
	class FText                                  Text;                                              // 0x150(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextDelegate;                                      // 0x168(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D01[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x180(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x1000(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x1018(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsReadOnly;                                        // 0x1028(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPassword;                                        // 0x1029(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D02[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDesiredWidth;                               // 0x102C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x1030(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x1031(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x1032(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x1033(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x1034(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x1035(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x1036(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x1037(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x1038(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x1039(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x103A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x103B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x103C(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_D05[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1040(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1050(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D07[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableTextBox");
		return Clss;
	}

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InInOverflowPolicy);
	void SetText(class FText InInText);
	void SetJustification(enum class ETextJustify InInJustification);
	void SetIsReadOnly(bool InbReadOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(class FText InInText);
	void SetForegroundColor(const struct FLinearColor& InColor);
	void SetError(class FText InInError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& InText, enum class ETextCommit InCommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(class FText& InText);
	bool HasError();
	class FText GetText();
	void ClearError();
};

// 0x388 (0x4D8 - 0x150)
// Class UMG.EditableText
class UEditableText : public UWidget
{
public:
	class FText                                  Text;                                              // 0x150(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextDelegate;                                      // 0x168(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x178(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x190(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditableTextStyle                    WidgetStyle;                                       // 0x1A0(0x2F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsReadOnly;                                        // 0x490(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPassword;                                        // 0x491(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDesiredWidth;                               // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x498(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x499(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x49A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x49B(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x49C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x49D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x49E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x49F(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x4A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x4A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x4A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextOverflowPolicy               OverflowPolicy;                                    // 0x4A3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x4A4(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_D21[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x4A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x4B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D22[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EditableText");
		return Clss;
	}

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InInOverflowPolicy);
	void SetText(class FText InInText);
	void SetMinimumDesiredWidth(float InInMinDesiredWidth);
	void SetJustification(enum class ETextJustify InInJustification);
	void SetIsReadOnly(bool InInbIsReadyOnly);
	void SetIsPassword(bool InInbIsPassword);
	void SetHintText(class FText InInHintText);
	void SetFontOutlineMaterial(class UMaterialInterface* InInMaterial);
	void SetFontMaterial(class UMaterialInterface* InInMaterial);
	void SetFont(const struct FSlateFontInfo& InInFontInfo);
	void OnEditableTextCommittedEvent__DelegateSignature(class FText& InText, enum class ETextCommit InCommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(class FText& InText);
	class FText GetText();
	enum class ETextJustify GetJustification();
	class FText GetHintText();
	struct FSlateFontInfo GetFont();
};

// 0x310 (0x460 - 0x150)
// Class UMG.ExpandableArea
class UExpandableArea : public UWidget
{
public:
	uint8                                        Pad_D28[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExpandableAreaStyle                  Style;                                             // 0x160(0x1C0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BorderBrush;                                       // 0x320(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderColor;                                       // 0x3F0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsExpanded;                                       // 0x404(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D29[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxHeight;                                         // 0x408(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderPadding;                                     // 0x40C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               AreaPadding;                                       // 0x41C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnExpansionChanged;                                // 0x430(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWidget*                               HeaderContent;                                     // 0x440(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               BodyContent;                                       // 0x448(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D30[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ExpandableArea");
		return Clss;
	}

	void SetIsExpanded_Animated(bool InIsExpanded);
	void SetIsExpanded(bool InIsExpanded);
	bool GetIsExpanded();
};

// 0xEF8 (0x1068 - 0x170)
// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x188(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x1A0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x1B0(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsReadOnly;                                       // 0x1030(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x1031(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x1032(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x1033(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D45[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1038(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1048(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D46[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MultiLineEditableTextBox");
		return Clss;
	}

	void SetTextStyle(struct FTextBlockStyle& InInTextStyle);
	void SetText(class FText InInText);
	void SetIsReadOnly(bool InbReadOnly);
	void SetHintText(class FText InInHintText);
	void SetForegroundColor(const struct FLinearColor& InColor);
	void SetError(class FText InInError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& InText, enum class ETextCommit InCommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& InText);
	class FText GetText();
	class FText GetHintText();
};

// 0x3B8 (0x528 - 0x170)
// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	class FText                                  Text;                                              // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x188(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x1A0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x1B0(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsReadOnly;                                       // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearTextSelectionOnFocusLoss;                     // 0x4F2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x4F3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x4F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x4F5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x4F6(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x4F7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x4F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x508(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D75[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MultiLineEditableText");
		return Clss;
	}

	void SetWidgetStyle(struct FTextBlockStyle& InInWidgetStyle);
	void SetText(class FText InInText);
	void SetIsReadOnly(bool InbReadOnly);
	void SetHintText(class FText InInHintText);
	void SetFontOutlineMaterial(class UMaterialInterface* InInMaterial);
	void SetFontMaterial(class UMaterialInterface* InInMaterial);
	void SetFont(const struct FSlateFontInfo& InInFontInfo);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText& InText, enum class ETextCommit InCommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText& InText);
	class FText GetText();
	class FText GetHintText();
	struct FSlateFontInfo GetFont();
};

// 0x2E8 (0x438 - 0x150)
// Class UMG.ProgressBar
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                     WidgetStyle;                                       // 0x150(0x290)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Percent;                                           // 0x3E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProgressBarFillType              BarFillType;                                       // 0x3E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EProgressBarFillStyle             BarFillStyle;                                      // 0x3E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMarquee;                                        // 0x3E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D83[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             BorderPadding;                                     // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           PercentDelegate;                                   // 0x3F8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FillColorAndOpacity;                               // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           FillColorAndOpacityDelegate;                       // 0x418(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D86[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProgressBar");
		return Clss;
	}

	void SetPercent(float InInPercent);
	void SetIsMarquee(bool InInbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InInColor);
};

// 0x0 (0x28 - 0x28)
// Class UMG.NotifyFieldValueChanged
class INotifyFieldValueChanged : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NotifyFieldValueChanged");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class UMG.ListViewDesignerPreviewItem
class UListViewDesignerPreviewItem : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ListViewDesignerPreviewItem");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class UMG.SlateAccessibleWidgetData
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                         bCanChildrenBeAccessible;                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateAccessibleBehavior          AccessibleBehavior;                                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateAccessibleBehavior          AccessibleSummaryBehavior;                         // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8B[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  AccessibleText;                                    // 0x30(0x18)(NativeAccessSpecifierPublic)
	FDelegateProperty_                           AccessibleTextDelegate;                            // 0x48(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  AccessibleSummaryText;                             // 0x58(0x18)(NativeAccessSpecifierPublic)
	FDelegateProperty_                           AccessibleSummaryTextDelegate;                     // 0x70(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateAccessibleWidgetData");
		return Clss;
	}

};

// 0x0 (0xA8 - 0xA8)
// Class UMG.UserWidgetBlueprint
class UUserWidgetBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserWidgetBlueprint");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetFieldNotificationExtension
class UWidgetFieldNotificationExtension : public UUserWidgetExtension
{
public:
	uint8                                        Pad_D8D[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetFieldNotificationExtension");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class UMG.WidgetNavigation
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                 Up;                                                // 0x28(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Down;                                              // 0x4C(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Left;                                              // 0x70(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Right;                                             // 0x94(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Next;                                              // 0xB8(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                 Previous;                                          // 0xDC(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetNavigation");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class UMG.MovieScene2DTransformPropertySystem
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene2DTransformPropertySystem");
		return Clss;
	}

};

// 0x780 (0x870 - 0xF0)
// Class UMG.MovieScene2DTransformSection
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_D9C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieScene2DTransformMask            TransformMask;                                     // 0xF8(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Translation[0x2];                                  // 0x100(0x220)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Rotation;                                          // 0x320(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Scale[0x2];                                        // 0x430(0x220)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               Shear[0x2];                                        // 0x650(0x220)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene2DTransformSection");
		return Clss;
	}

};

// 0x0 (0xC8 - 0xC8)
// Class UMG.MovieScene2DTransformTrack
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScene2DTransformTrack");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class UMG.MovieSceneMarginPropertySystem
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMarginPropertySystem");
		return Clss;
	}

};

// 0x448 (0x538 - 0xF0)
// Class UMG.MovieSceneMarginSection
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_DA5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               TopCurve;                                          // 0xF8(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               LeftCurve;                                         // 0x208(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               RightCurve;                                        // 0x318(0x110)(NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               BottomCurve;                                       // 0x428(0x110)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMarginSection");
		return Clss;
	}

};

// 0x0 (0xC8 - 0xC8)
// Class UMG.MovieSceneMarginTrack
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMarginTrack");
		return Clss;
	}

};

// 0xE8 (0x128 - 0x40)
// Class UMG.MovieSceneWidgetMaterialSystem
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_DA7[0xE8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneWidgetMaterialSystem");
		return Clss;
	}

};

// 0x28 (0xD0 - 0xA8)
// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	uint8                                        Pad_DA8[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          BrushPropertyNamePath;                             // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneWidgetMaterialTrack");
		return Clss;
	}

};

// 0x308 (0x330 - 0x28)
// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public UObject
{
public:
	uint8                                        Pad_DAD[0x1F0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      Animation;                                         // 0x218(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DAE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x228(0x88)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_DAF[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UMGSequencePlayer");
		return Clss;
	}

	void SetUserTag(class FName InInUserTag);
	class FName GetUserTag();
};

// 0x98 (0xC0 - 0x28)
// Class UMG.UMGSequenceTickManager
class UUMGSequenceTickManager : public UObject
{
public:
	TMap<TWeakObjectPtr<class UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData;                                // 0x28(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DB1[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UMGSequenceTickManager");
		return Clss;
	}

};

// 0x30 (0x98 - 0x68)
// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetAnimationBinding>       AnimationBindings;                                 // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bLegacyFinishOnStop;                               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DC1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DisplayLabel;                                      // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetAnimation");
		return Clss;
	}

	void UnbindFromAnimationStarted(class UUserWidget* InWidget, FDelegateProperty_ InDelegate);
	void UnbindFromAnimationFinished(class UUserWidget* InWidget, FDelegateProperty_ InDelegate);
	void UnbindAllFromAnimationStarted(class UUserWidget* InWidget);
	void UnbindAllFromAnimationFinished(class UUserWidget* InWidget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(class UUserWidget* InWidget, FDelegateProperty_ InDelegate);
	void BindToAnimationFinished(class UUserWidget* InWidget, FDelegateProperty_ InDelegate);
};

// 0x10 (0x38 - 0x28)
// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                   // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetAnimationDelegateBinding");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class UMG.WidgetAnimationPlayCallbackProxy
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD9[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetAnimationPlayCallbackProxy");
		return Clss;
	}

	class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** InResult, class UUserWidget* InWidget, class UWidgetAnimation* InInAnimation, float InStartAtTime, float InEndAtTime, int32 InNumLoopsToPlay, enum class EUMGSequencePlayMode InPlayMode, float InPlaybackSpeed);
	class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer** InResult, class UUserWidget* InWidget, class UWidgetAnimation* InInAnimation, float InStartAtTime, int32 InNumLoopsToPlay, enum class EUMGSequencePlayMode InPlayMode, float InPlaybackSpeed);
};

// 0x38 (0x60 - 0x28)
// Class UMG.PropertyBinding
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                SourceObject;                                      // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x30(0x28)(NativeAccessSpecifierPublic)
	class FName                                  DestinationProperty;                               // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PropertyBinding");
		return Clss;
	}

};

// 0x0 (0x60 - 0x60)
// Class UMG.BoolBinding
class UBoolBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BoolBinding");
		return Clss;
	}

	bool GetValue();
};

// 0x8 (0x68 - 0x60)
// Class UMG.BrushBinding
class UBrushBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_DDD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BrushBinding");
		return Clss;
	}

	struct FSlateBrush GetValue();
};

// 0x8 (0x68 - 0x60)
// Class UMG.CheckedStateBinding
class UCheckedStateBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_DE1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CheckedStateBinding");
		return Clss;
	}

	enum class ECheckBoxState GetValue();
};

// 0x8 (0x68 - 0x60)
// Class UMG.ColorBinding
class UColorBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_DE6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ColorBinding");
		return Clss;
	}

	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};

// 0x0 (0x60 - 0x60)
// Class UMG.FloatBinding
class UFloatBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FloatBinding");
		return Clss;
	}

	float GetValue();
};

// 0x0 (0x60 - 0x60)
// Class UMG.Int32Binding
class UInt32Binding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Int32Binding");
		return Clss;
	}

	int32 GetValue();
};

// 0x0 (0x60 - 0x60)
// Class UMG.MouseCursorBinding
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MouseCursorBinding");
		return Clss;
	}

	enum class EMouseCursor GetValue();
};

// 0x8 (0x68 - 0x60)
// Class UMG.TextBinding
class UTextBinding : public UPropertyBinding
{
public:
	uint8                                        Pad_DF2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TextBinding");
		return Clss;
	}

	class FText GetTextValue();
	class FString GetStringValue();
};

// 0x0 (0x60 - 0x60)
// Class UMG.VisibilityBinding
class UVisibilityBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VisibilityBinding");
		return Clss;
	}

	enum class ESlateVisibility GetValue();
};

// 0x0 (0x60 - 0x60)
// Class UMG.WidgetBinding
class UWidgetBinding : public UPropertyBinding
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetBinding");
		return Clss;
	}

	class UWidget* GetValue();
};

// 0x20 (0x50 - 0x30)
// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AsyncTaskDownloadImage");
		return Clss;
	}

	class UAsyncTaskDownloadImage* DownloadImage(const class FString& InURL);
};

// 0x50 (0x80 - 0x30)
// Class UMG.GameViewportSubsystem
class UGameViewportSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_E1F[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameViewportSubsystem");
		return Clss;
	}

	struct FGameViewportWidgetSlot SetWidgetSlotPosition(const struct FGameViewportWidgetSlot& InSlot, class UWidget* InWidget, const struct FVector2D& InPosition, bool InbRemoveDPIScale);
	struct FGameViewportWidgetSlot SetWidgetSlotDesiredSize(const struct FGameViewportWidgetSlot& InSlot, const struct FVector2D& InSize);
	void SetWidgetSlot(class UWidget* InWidget, const struct FGameViewportWidgetSlot& InSlot);
	void RemoveWidget(class UWidget* InWidget);
	bool IsWidgetAdded(class UWidget* InWidget);
	struct FGameViewportWidgetSlot GetWidgetSlot(class UWidget* InWidget);
	void AddWidgetForPlayer(class UWidget* InWidget, class ULocalPlayer* InPlayer, const struct FGameViewportWidgetSlot& InSlot);
	void AddWidget(class UWidget* InWidget, const struct FGameViewportWidgetSlot& InSlot);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntry
class IUserListEntry : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserListEntry");
		return Clss;
	}

	void BP_OnItemSelectionChanged(bool InbIsSelected);
	void BP_OnItemExpansionChanged(bool InbIsExpanded);
	void BP_OnEntryReleased();
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserListEntryLibrary
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserListEntryLibrary");
		return Clss;
	}

	bool IsListItemSelected(TScriptInterface<class IUserListEntry> InUserListEntry);
	bool IsListItemExpanded(TScriptInterface<class IUserListEntry> InUserListEntry);
	class UListViewBase* GetOwningListView(TScriptInterface<class IUserListEntry> InUserListEntry);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntry
class IUserObjectListEntry : public IUserListEntry
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserObjectListEntry");
		return Clss;
	}

	void OnListItemObjectSet(class UObject* InListItemObject);
};

// 0x0 (0x28 - 0x28)
// Class UMG.UserObjectListEntryLibrary
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UserObjectListEntryLibrary");
		return Clss;
	}

	class UObject* GetListItemObject(TScriptInterface<class IUserObjectListEntry> InUserObjectListEntry);
};

// 0x28 (0x60 - 0x38)
// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E3C[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BackgroundBlurSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E49[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BorderSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E51[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ButtonSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x10 (0x178 - 0x168)
// Class UMG.CanvasPanel
class UCanvasPanel : public UPanelWidget
{
public:
	uint8                                        Pad_E53[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CanvasPanel");
		return Clss;
	}

	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* InContent);
};

// 0x50 (0x88 - 0x38)
// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                           LayoutData;                                        // 0x38(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAutoSize;                                         // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ZOrder;                                            // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CanvasPanelSlot");
		return Clss;
	}

	void SetZOrder(int32 InInZOrder);
	void SetSize(const struct FVector2D& InInSize);
	void SetPosition(const struct FVector2D& InInPosition);
	void SetOffsets(const struct FMargin& InInOffset);
	void SetMinimum(const struct FVector2D& InInMinimumAnchors);
	void SetMaximum(const struct FVector2D& InInMaximumAnchors);
	void SetLayout(struct FAnchorData& InInLayoutData);
	void SetAutoSize(bool InInbAutoSize);
	void SetAnchors(const struct FAnchors& InInAnchors);
	void SetAlignment(const struct FVector2D& InInAlignment);
	int32 GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};

// 0x100 (0x250 - 0x150)
// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x150(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Image;                                             // 0x160(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bEnableRadius;                                     // 0x230(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E7D[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CircularThrobber");
		return Clss;
	}

	void SetRadius(float InInRadius);
	void SetPeriod(float InInPeriod);
	void SetNumberOfPieces(int32 InInNumberOfPieces);
};

// 0x38 (0x188 - 0x150)
// Class UMG.ComboBox
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                       Items;                                             // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x160(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFocusable;                                      // 0x170(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E80[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComboBox");
		return Clss;
	}

};

// 0x1460 (0x15B0 - 0x150)
// Class UMG.ComboBoxKey
class UComboBoxKey : public UWidget
{
public:
	TArray<class FName>                          Options;                                           // 0x150(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FName                                  SelectedOption;                                    // 0x160(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E9D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x170(0x660)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FTableRowStyle                        ItemStyle;                                         // 0x7D0(0xD50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x1520(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0x1534(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxListHeight;                                     // 0x1544(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasDownArrow;                                     // 0x1548(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGamepadNavigationMode;                      // 0x1549(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFocusable;                                      // 0x154A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnGenerateContentWidget;                           // 0x154C(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGenerateItemWidget;                              // 0x155C(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E9F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x1570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x1580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA0[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComboBoxKey");
		return Clss;
	}

	void SetSelectedOption(class FName InOption);
	bool RemoveOption(class FName InOption);
	void OnSelectionChangedEvent__DelegateSignature(class FName InSelectedItem, enum class ESelectInfo InSelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	class FName GetSelectedOption();
	class UWidget* GenerateWidgetEvent__DelegateSignature(class FName InItem);
	void ClearSelection();
	void ClearOptions();
	void AddOption(class FName InOption);
};

// 0x14E0 (0x1630 - 0x150)
// Class UMG.ComboBoxString
class UComboBoxString : public UWidget
{
public:
	TArray<class FString>                        DefaultOptions;                                    // 0x150(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                SelectedOption;                                    // 0x160(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComboBoxStyle                        WidgetStyle;                                       // 0x170(0x660)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTableRowStyle                        ItemStyle;                                         // 0x7D0(0xD50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                               ContentPadding;                                    // 0x1520(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxListHeight;                                     // 0x1530(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasDownArrow;                                      // 0x1534(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableGamepadNavigationMode;                       // 0x1535(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x1538(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ForegroundColor;                                   // 0x1590(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bIsFocusable;                                      // 0x15A4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           OnGenerateWidgetEvent;                             // 0x15A8(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x15B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOpening;                                         // 0x15C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED1[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComboBoxString");
		return Clss;
	}

	void SetSelectedOption(const class FString& InOption);
	void SetSelectedIndex(int32 InIndex);
	bool RemoveOption(const class FString& InOption);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const class FString& InSelectedItem, enum class ESelectInfo InSelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	class FString GetSelectedOption();
	int32 GetSelectedIndex();
	int32 GetOptionCount();
	class FString GetOptionAtIndex(int32 InIndex);
	int32 FindOptionIndex(const class FString& InOption);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const class FString& InOption);
};

// 0x8 (0x238 - 0x230)
// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	TSubclassOf<class UUserWidget>               EntryWidgetClass;                                  // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DynamicEntryBox");
		return Clss;
	}

	void Reset(bool InbDeleteWidgets);
	void RemoveEntry(class UUserWidget* InEntryWidget);
	class UUserWidget* BP_CreateEntryOfClass(TSubclassOf<class UUserWidget> InEntryClass);
	class UUserWidget* BP_CreateEntry();
};

// 0x40 (0x78 - 0x38)
// Class UMG.GridSlot
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Row;                                               // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RowSpan;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ColumnSpan;                                        // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Layer;                                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Nudge;                                             // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EF2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GridSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetRowSpan(int32 InInRowSpan);
	void SetRow(int32 InInRow);
	void SetPadding(const struct FMargin& InInPadding);
	void SetNudge(const struct FVector2D& InInNudge);
	void SetLayer(int32 InInLayer);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
	void SetColumnSpan(int32 InInColumnSpan);
	void SetColumn(int32 InInColumn);
};

// 0x28 (0x60 - 0x38)
// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	uint8                                        Pad_EFD[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateChildSize                       Size;                                              // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFE[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HorizontalBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InInSize);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x7E0 (0x930 - 0x150)
// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x150(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0x540(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputChord                           SelectedKey;                                       // 0x880(0x20)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0x8A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FText                                  KeySelectionText;                                  // 0x8B0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  NoKeySpecifiedText;                                // 0x8C8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bAllowModifierKeys;                                // 0x8E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowGamepadKeys;                                 // 0x8E1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F18[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          EscapeKeys;                                        // 0x8E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnKeySelected;                                     // 0x8F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnIsSelectingKeyChanged;                           // 0x908(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F19[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputKeySelector");
		return Clss;
	}

	void SetTextBlockVisibility(enum class ESlateVisibility InInVisibility);
	void SetSelectedKey(struct FInputChord& InInSelectedKey);
	void SetNoKeySpecifiedText(class FText InInNoKeySpecifiedText);
	void SetKeySelectionText(class FText InInKeySelectionText);
	void SetEscapeKeys(TArray<struct FKey>& InInKeys);
	void SetAllowModifierKeys(bool InbInAllowModifierKeys);
	void SetAllowGamepadKeys(bool InbInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& InSelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// 0x18 (0x180 - 0x168)
// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget
{
public:
	bool                                         bCanCache;                                         // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CacheRelativeTransforms;                           // 0x169(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F20[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InvalidationBox");
		return Clss;
	}

	void SetCanCache(bool InCanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// 0x50 (0x1B8 - 0x168)
// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget
{
public:
	TSubclassOf<class UUserWidget>               MenuClass;                                         // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGetMenuContentEvent;                             // 0x170(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnGetUserMenuContentEvent;                         // 0x180(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMenuPlacement                    Placement;                                         // 0x190(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFitInWindow;                                      // 0x191(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldDeferPaintingAfterWindowContent;             // 0x192(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseApplicationMenuStack;                           // 0x193(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F39[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMenuOpenChanged;                                 // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MenuAnchor");
		return Clss;
	}

	void ToggleOpen(bool InbFocusOnOpen);
	bool ShouldOpenDueToClick();
	void SetPlacement(enum class EMenuPlacement InInPlacement);
	void Open(bool InbFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	class UUserWidget* GetUserWidget__DelegateSignature();
	struct FVector2D GetMenuPosition();
	void FitInWindow(bool InbFit);
	void Close();
};

// 0x10 (0x178 - 0x168)
// Class UMG.NamedSlot
class UNamedSlot : public UContentWidget
{
public:
	uint8                                        Pad_F3F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NamedSlot");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class UMG.NamedSlotInterface
class INamedSlotInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NamedSlotInterface");
		return Clss;
	}

};

// 0x10 (0x160 - 0x150)
// Class UMG.NativeWidgetHost
class UNativeWidgetHost : public UWidget
{
public:
	uint8                                        Pad_F41[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NativeWidgetHost");
		return Clss;
	}

};

// 0x30 (0x198 - 0x168)
// Class UMG.RetainerBox
class URetainerBox : public UContentWidget
{
public:
	bool                                         bRetainRender;                                     // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RenderOnInvalidation;                              // 0x169(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RenderOnPhase;                                     // 0x16A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F50[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Phase;                                             // 0x16C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhaseCount;                                        // 0x170(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F51[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    EffectMaterial;                                    // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  TextureParameter;                                  // 0x180(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F52[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RetainerBox");
		return Clss;
	}

	void SetTextureParameter(class FName InTextureParameter);
	void SetRetainRendering(bool InbInRetainRendering);
	void SetRenderingPhase(int32 InRenderPhase, int32 InTotalPhases);
	void SetEffectMaterial(class UMaterialInterface* InEffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// 0x8 (0x30 - 0x28)
// Class UMG.RichTextBlockImageDecorator
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                            ImageSet;                                          // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RichTextBlockImageDecorator");
		return Clss;
	}

};

// 0x18 (0x180 - 0x168)
// Class UMG.SafeZone
class USafeZone : public UContentWidget
{
public:
	bool                                         PadLeft;                                           // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadRight;                                          // 0x169(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadTop;                                            // 0x16A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PadBottom;                                         // 0x16B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F59[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SafeZone");
		return Clss;
	}

	void SetSidesToPad(bool InInPadLeft, bool InInPadRight, bool InInPadTop, bool InInPadBottom);
};

// 0x28 (0x60 - 0x38)
// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                         bIsTitleSafe;                                      // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               SafeAreaScale;                                     // 0x3C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HAlign;                                            // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VAlign;                                            // 0x4D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SafeZoneSlot");
		return Clss;
	}

};

// 0x20 (0x188 - 0x168)
// Class UMG.ScaleBox
class UScaleBox : public UContentWidget
{
public:
	enum class EStretch                          Stretch;                                           // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStretchDirection                 StretchDirection;                                  // 0x169(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F63[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UserSpecifiedScale;                                // 0x16C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IgnoreInheritedScale;                              // 0x170(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F64[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScaleBox");
		return Clss;
	}

	void SetUserSpecifiedScale(float InInUserSpecifiedScale);
	void SetStretchDirection(enum class EStretchDirection InInStretchDirection);
	void SetStretch(enum class EStretch InInStretch);
	void SetIgnoreInheritedScale(bool InbInIgnoreInheritedScale);
};

// 0x18 (0x50 - 0x38)
// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6C[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScaleBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x7B0 (0x900 - 0x150)
// Class UMG.ScrollBar
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                       WidgetStyle;                                       // 0x150(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowScrollbar;                              // 0x8C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysShowScrollbarTrack;                         // 0x8C1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x8C2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F73[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Thickness;                                         // 0x8C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x8D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F78[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScrollBar");
		return Clss;
	}

	void SetState(float InInOffsetFraction, float InInThumbSizeFraction);
};

// 0x20 (0x58 - 0x38)
// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7B[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScrollBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.SizeBoxSlot
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F80[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F81[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SizeBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x20 (0x170 - 0x150)
// Class UMG.Spacer
class USpacer : public UWidget
{
public:
	struct FVector2D                             Size;                                              // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F85[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Spacer");
		return Clss;
	}

	void SetSize(const struct FVector2D& InInSize);
};

// 0x720 (0x870 - 0x150)
// Class UMG.SpinBox
class USpinBox : public UWidget
{
public:
	float                                        Value;                                             // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x154(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB9[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpinBoxStyle                         WidgetStyle;                                       // 0x170(0x600)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        MinFractionalDigits;                               // 0x770(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxFractionalDigits;                               // 0x774(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysUsesDeltaSnap;                              // 0x778(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSlider;                                     // 0x779(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBA[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Delta;                                             // 0x77C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderExponent;                                    // 0x780(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x788(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x7E0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDesiredWidth;                                   // 0x7E4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x7E8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x7E9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x7EA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBD[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           ForegroundColor;                                   // 0x7EC(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x800(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueCommitted;                                  // 0x810(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeginSliderMovement;                             // 0x820(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEndSliderMovement;                               // 0x830(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        bOverride_MinValue : 1;                            // Mask: 0x1, PropSize: 0x10x840(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MaxValue : 1;                            // Mask: 0x2, PropSize: 0x10x840(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MinSliderValue : 1;                      // Mask: 0x4, PropSize: 0x10x840(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bOverride_MaxSliderValue : 1;                      // Mask: 0x8, PropSize: 0x10x840(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_A8 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_FC1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinValue;                                          // 0x844(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxValue;                                          // 0x848(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinSliderValue;                                    // 0x84C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxSliderValue;                                    // 0x850(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FC2[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpinBox");
		return Clss;
	}

	void SetValue(float InNewValue);
	void SetMinValue(float InNewValue);
	void SetMinSliderValue(float InNewValue);
	void SetMinFractionalDigits(int32 InNewValue);
	void SetMaxValue(float InNewValue);
	void SetMaxSliderValue(float InNewValue);
	void SetMaxFractionalDigits(int32 InNewValue);
	void SetForegroundColor(const struct FSlateColor& InInForegroundColor);
	void SetDelta(float InNewValue);
	void SetAlwaysUsesDeltaSnap(bool InbNewValue);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InInValue, enum class ETextCommit InCommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InInValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	int32 GetMinFractionalDigits();
	float GetMaxValue();
	float GetMaxSliderValue();
	int32 GetMaxFractionalDigits();
	float GetDelta();
	bool GetAlwaysUsesDeltaSnap();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// 0x18 (0x180 - 0x168)
// Class UMG.StackBox
class UStackBox : public UPanelWidget
{
public:
	enum class EOrientation                      Orientation;                                       // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FC7[0x17];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StackBox");
		return Clss;
	}

	class UStackBoxSlot* AddChildToStackBox(class UWidget* InContent);
};

// 0x28 (0x60 - 0x38)
// Class UMG.StackBoxSlot
class UStackBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FSlateChildSize                       Size;                                              // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FC9[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StackBoxSlot");
		return Clss;
	}

};

// 0xF0 (0x240 - 0x150)
// Class UMG.Throbber
class UThrobber : public UWidget
{
public:
	int32                                        NumberOfPieces;                                    // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateHorizontally;                              // 0x154(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateVertically;                                // 0x155(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimateOpacity;                                   // 0x156(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD1[0x9];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Image;                                             // 0x160(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD2[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Throbber");
		return Clss;
	}

	void SetNumberOfPieces(int32 InInNumberOfPieces);
	void SetAnimateVertically(bool InbInAnimateVertically);
	void SetAnimateOpacity(bool InbInAnimateOpacity);
	void SetAnimateHorizontally(bool InbInAnimateHorizontally);
};

// 0x28 (0x190 - 0x168)
// Class UMG.UniformGridPanel
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                               SlotPadding;                                       // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinDesiredSlotWidth;                               // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDesiredSlotHeight;                              // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE1[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UniformGridPanel");
		return Clss;
	}

	void SetSlotPadding(const struct FMargin& InInSlotPadding);
	void SetMinDesiredSlotWidth(float InInMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InInMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* InContent, int32 InInRow, int32 InInColumn);
};

// 0x18 (0x50 - 0x38)
// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF0[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Row;                                               // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF1[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UniformGridSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetRow(int32 InInRow);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
	void SetColumn(int32 InInColumn);
};

// 0x10 (0x178 - 0x168)
// Class UMG.VerticalBox
class UVerticalBox : public UPanelWidget
{
public:
	uint8                                        Pad_FFB[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerticalBox");
		return Clss;
	}

	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* InContent);
};

// 0x28 (0x60 - 0x38)
// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                       Size;                                              // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1000[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerticalBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InInSize);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x50 (0x1B8 - 0x168)
// Class UMG.Viewport
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                          BackgroundColor;                                   // 0x168(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100F[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Viewport");
		return Clss;
	}

	class AActor* Spawn(TSubclassOf<class AActor> InActorClass);
	void SetViewRotation(const struct FRotator& InRotation);
	void SetViewLocation(const struct FVector& InLocation);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};

// 0x140 (0x6B0 - 0x570)
// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent
{
public:
	enum class EWidgetSpace                      Space;                                             // 0x570(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetTimingPolicy               TimingPolicy;                                      // 0x571(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_109C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UUserWidget>               WidgetClass;                                       // 0x578(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                             DrawSize;                                          // 0x580(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bManuallyRedraw;                                   // 0x588(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRedrawRequested;                                  // 0x589(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10A1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RedrawTime;                                        // 0x58C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             CurrentDrawSize;                                   // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawAtDesiredSize;                                // 0x5A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Pivot;                                             // 0x5A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReceiveHardwareInput;                             // 0x5B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWindowFocusable;                                  // 0x5B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWindowVisibility                 WindowVisibility;                                  // 0x5BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyGammaCorrection;                             // 0x5BB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          OwnerPlayer;                                       // 0x5C0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BackgroundColor;                                   // 0x5C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          TintColorAndOpacity;                               // 0x5D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OpacityFromTexture;                                // 0x5E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetBlendMode                  BlendMode;                                         // 0x5EC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTwoSided;                                       // 0x5ED(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         TickWhenOffscreen;                                 // 0x5EE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10AE[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            BodySetup;                                         // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    TranslucentMaterial;                               // 0x5F8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    TranslucentMaterial_OneSided;                      // 0x600(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OpaqueMaterial;                                    // 0x608(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OpaqueMaterial_OneSided;                           // 0x610(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaskedMaterial;                                    // 0x618(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaskedMaterial_OneSided;                           // 0x620(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x630(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAddedToScreen;                                    // 0x638(0x1)(ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEditTimeUsable;                                   // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10B4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SharedLayerName;                                   // 0x63C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LayerZOrder;                                       // 0x644(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWidgetGeometryMode               GeometryMode;                                      // 0x648(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10B5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CylinderArcAngle;                                  // 0x64C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETickMode                         TickMode;                                          // 0x650(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_10B7[0x2F];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           Widget;                                            // 0x680(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10B8[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetComponent");
		return Clss;
	}

	void SetWindowVisibility(enum class EWindowVisibility InInVisibility);
	void SetWindowFocusable(bool InbInWindowFocusable);
	void SetWidgetSpace(enum class EWidgetSpace InNewSpace);
	void SetWidget(class UUserWidget* InWidget);
	void SetTwoSided(bool InbWantTwoSided);
	void SetTintColorAndOpacity(const struct FLinearColor& InNewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool InbWantTickWhenOffscreen);
	void SetTickMode(enum class ETickMode InInTickMode);
	void SetRedrawTime(float InInRedrawTime);
	void SetPivot(struct FVector2D& InInPivot);
	void SetOwnerPlayer(class ULocalPlayer* InLocalPlayer);
	void SetManuallyRedraw(bool InbUseManualRedraw);
	void SetGeometryMode(enum class EWidgetGeometryMode InInGeometryMode);
	void SetDrawSize(const struct FVector2D& InSize);
	void SetDrawAtDesiredSize(bool InbInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InInCylinderArcAngle);
	void SetBackgroundColor(const struct FLinearColor& InNewBackgroundColor);
	void RequestRenderUpdate();
	void RequestRedraw();
	bool IsWidgetVisible();
	enum class EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	enum class EWidgetSpace GetWidgetSpace();
	class UUserWidget* GetWidget();
	class UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct FVector2D GetPivot();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	enum class EWidgetGeometryMode GetGeometryMode();
	struct FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct FVector2D GetCurrentDrawSize();
};

// 0x2D0 (0x570 - 0x2A0)
// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnHoveredWidgetChanged;                            // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FD[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VirtualUserIndex;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointerIndex;                                      // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InteractionDistance;                               // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetInteractionSource          InteractionSource;                                 // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHitTesting;                                 // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebug;                                        // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1101[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DebugSphereLineThickness;                          // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugLineThickness;                                // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DebugColor;                                        // 0x2DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1103[0x7C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CustomHitResult;                                   // 0x368(0xE8)(Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                             LocalHitLocation;                                  // 0x450(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             LastLocalHitLocation;                              // 0x460(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                      HoveredWidgetComponent;                            // 0x470(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHitResult                            LastHitResult;                                     // 0x478(0xE8)(Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetInteractable;                      // 0x560(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetFocusable;                         // 0x561(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsHoveredWidgetHitTestVisible;                    // 0x562(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1106[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetInteractionComponent");
		return Clss;
	}

	void SetFocus(class UWidget* InFocusWidget);
	void SetCustomHitResult(struct FHitResult& InHitResult);
	bool SendKeyChar(const class FString& InCharacters, bool InbRepeat);
	void ScrollWheel(float InScrollDelta);
	void ReleasePointerKey(const struct FKey& InKey);
	bool ReleaseKey(const struct FKey& InKey);
	void PressPointerKey(const struct FKey& InKey);
	bool PressKey(const struct FKey& InKey, bool InbRepeat);
	bool PressAndReleaseKey(const struct FKey& InKey);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};

// 0x20 (0x58 - 0x38)
// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	uint8                                        Pad_1114[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1115[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetSwitcherSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x20 (0x188 - 0x168)
// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                         bWindowButtonsEnabled;                             // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoubleClickTogglesFullscreen;                     // 0x169(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_111D[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WindowTitleBarArea");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x28 (0x60 - 0x38)
// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1122[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WindowTitleBarAreaSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x28 (0x190 - 0x168)
// Class UMG.WrapBox
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                             InnerSlotPadding;                                  // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapSize;                                          // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExplicitWrapSize;                                 // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x17D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x17E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1127[0x11];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WrapBox");
		return Clss;
	}

	void SetInnerSlotPadding(const struct FVector2D& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* InContent);
};

// 0x20 (0x58 - 0x38)
// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FillSpanWhenLessThan;                              // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFillEmptySpace;                                   // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceNewLine;                                     // 0x4F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1130[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WrapBoxSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetNewLine(bool InInForceNewLine);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InInFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InInbFillEmptySpace);
};

// 0x0 (0x28 - 0x28)
// Class UMG.SlateBlueprintLibrary
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateBlueprintLibrary");
		return Clss;
	}

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& InGeometry, const struct FVector2D& InLocalVector);
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& InGeometry, const struct FVector2D& InAbsoluteVector);
	float TransformScalarLocalToAbsolute(struct FGeometry& InGeometry, float InLocalScalar);
	float TransformScalarAbsoluteToLocal(struct FGeometry& InGeometry, float InAbsoluteScalar);
	void ScreenToWidgetLocal(class UObject* InWorldContextObject, struct FGeometry& InGeometry, const struct FVector2D& InScreenPosition, struct FVector2D* InLocalCoordinate, bool InbIncludeWindowPosition);
	void ScreenToWidgetAbsolute(class UObject* InWorldContextObject, const struct FVector2D& InScreenPosition, struct FVector2D* InAbsoluteCoordinate, bool InbIncludeWindowPosition);
	void ScreenToViewport(class UObject* InWorldContextObject, const struct FVector2D& InScreenPosition, struct FVector2D* InViewportPosition);
	void LocalToViewport(class UObject* InWorldContextObject, struct FGeometry& InGeometry, const struct FVector2D& InLocalCoordinate, struct FVector2D* InPixelPosition, struct FVector2D* InViewportPosition);
	struct FVector2D LocalToAbsolute(struct FGeometry& InGeometry, const struct FVector2D& InLocalCoordinate);
	bool IsUnderLocation(struct FGeometry& InGeometry, struct FVector2D& InAbsoluteCoordinate);
	struct FVector2D GetLocalTopLeft(struct FGeometry& InGeometry);
	struct FVector2D GetLocalSize(struct FGeometry& InGeometry);
	struct FVector2D GetAbsoluteSize(struct FGeometry& InGeometry);
	bool EqualEqual_SlateBrush(struct FSlateBrush& InA, struct FSlateBrush& InB);
	void AbsoluteToViewport(class UObject* InWorldContextObject, const struct FVector2D& InAbsoluteDesktopCoordinate, struct FVector2D* InPixelPosition, struct FVector2D* InViewportPosition);
	struct FVector2D AbsoluteToLocal(struct FGeometry& InGeometry, const struct FVector2D& InAbsoluteCoordinate);
};

// 0x48 (0x70 - 0x28)
// Class UMG.SlateVectorArtData
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>              VertexData;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint32>                               IndexData;                                         // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    Material;                                          // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             ExtentMin;                                         // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             ExtentMax;                                         // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateVectorArtData");
		return Clss;
	}

};

// 0x80 (0x400 - 0x380)
// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                           WidgetTree;                                        // 0x380(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UWidgetBlueprintGeneratedClassExtension*> Extensions;                                        // 0x388(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FFieldNotificationId>          FieldNotifyNames;                                  // 0x398(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_116C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bClassRequiresNativeTick : 1;                      // Mask: 0x1, PropSize: 0x10x3AC(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_B2 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_116E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDelegateRuntimeBinding>       Bindings;                                          // 0x3B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>              Animations;                                        // 0x3C0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          NamedSlots;                                        // 0x3D0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          AvailableNamedSlots;                               // 0x3E0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          InstanceNamedSlots;                                // 0x3F0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetBlueprintGeneratedClass");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetBlueprintLibrary
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetBlueprintLibrary");
		return Clss;
	}

	struct FEventReply UnlockMouse(struct FEventReply& InReply);
	struct FEventReply Unhandled();
	void SetWindowTitleBarState(class UWidget* InTitleBarContent, enum class EWindowTitleBarMode InMode, bool InbTitleBarDragEnabled, bool InbWindowButtonsVisible, bool InbTitleBarVisible);
	void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty_ InDelegate);
	void SetWindowTitleBarCloseButtonActive(bool InbActive);
	struct FEventReply SetUserFocus(struct FEventReply& InReply, class UWidget* InFocusWidget, bool InbInAllUsers);
	struct FEventReply SetMousePosition(struct FEventReply& InReply, const struct FVector2D& InNewMousePosition);
	void SetInputMode_UIOnlyEx(class APlayerController* InPlayerController, class UWidget* InInWidgetToFocus, enum class EMouseLockMode InInMouseLockMode, bool InbFlushInput);
	void SetInputMode_GameOnly(class APlayerController* InPlayerController, bool InbFlushInput);
	void SetInputMode_GameAndUIEx(class APlayerController* InPlayerController, class UWidget* InInWidgetToFocus, enum class EMouseLockMode InInMouseLockMode, bool InbHideCursorDuringCapture, bool InbFlushInput);
	bool SetHardwareCursor(class UObject* InWorldContextObject, enum class EMouseCursor InCursorShape, class FName InCursorName, const struct FVector2D& InHotSpot);
	void SetFocusToGameViewport();
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency InType, float InSeverity, bool InCorrectDeficiency, bool InShowCorrectionWithDeficiency);
	void SetBrushResourceToTexture(struct FSlateBrush& InBrush, class UTexture2D* InTexture);
	void SetBrushResourceToMaterial(struct FSlateBrush& InBrush, class UMaterialInterface* InMaterial);
	void RestorePreviousWindowTitleBarState();
	struct FEventReply ReleaseMouseCapture(struct FEventReply& InReply);
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& InReply, bool InbInAllJoysticks);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct FSlateBrush NoResourceBrush();
	struct FSlateBrush MakeBrushFromTexture(class UTexture2D* InTexture, int32 InWidth, int32 InHeight);
	struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* InMaterial, int32 InWidth, int32 InHeight);
	struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* InBrushAsset);
	struct FEventReply LockMouse(struct FEventReply& InReply, class UWidget* InCapturingWidget);
	bool IsDragDropping();
	struct FEventReply Handled();
	void GetSafeZonePadding(class UObject* InWorldContextObject, struct FVector4* InSafePadding, struct FVector2D* InSafePaddingScale, struct FVector4* InSpillOverPadding);
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& InEvent);
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& InEvent);
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& InEvent);
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& InEvent);
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& InEvent);
	class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& InBrush);
	class UDragDropOperation* GetDragDroppingContent();
	class UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& InBrush);
	class UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& InBrush);
	class UObject* GetBrushResource(struct FSlateBrush& InBrush);
	void GetAllWidgetsWithInterface(class UObject* InWorldContextObject, TArray<class UUserWidget*>* InFoundWidgets, TSubclassOf<class IInterface> InInterface, bool InTopLevelOnly);
	void GetAllWidgetsOfClass(class UObject* InWorldContextObject, TArray<class UUserWidget*>* InFoundWidgets, TSubclassOf<class UUserWidget> InWidgetClass, bool InTopLevelOnly);
	struct FEventReply EndDragDrop(struct FEventReply& InReply);
	void DrawTextFormatted(struct FPaintContext& InContext, class FText& InText, const struct FVector2D& InPosition, class UFont* InFont, int32 InFontSize, class FName InFontTypeFace, const struct FLinearColor& InTint);
	void DrawText(struct FPaintContext& InContext, const class FString& InInString, const struct FVector2D& InPosition, const struct FLinearColor& InTint);
	void DrawSpline(struct FPaintContext& InContext, const struct FVector2D& InStart, const struct FVector2D& InStartDir, const struct FVector2D& InEnd, const struct FVector2D& InEndDir, const struct FLinearColor& InTint, float InThickness);
	void DrawLines(struct FPaintContext& InContext, TArray<struct FVector2D>& InPoints, const struct FLinearColor& InTint, bool InbAntiAlias, float InThickness);
	void DrawLine(struct FPaintContext& InContext, const struct FVector2D& InPositionA, const struct FVector2D& InPositionB, const struct FLinearColor& InTint, bool InbAntiAlias, float InThickness);
	void DrawBox(struct FPaintContext& InContext, const struct FVector2D& InPosition, const struct FVector2D& InSize, class USlateBrushAsset* InBrush, const struct FLinearColor& InTint);
	void DismissAllMenus();
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& InPointerEvent, class UWidget* InWidgetDetectingDrag, const struct FKey& InDragKey);
	struct FEventReply DetectDrag(struct FEventReply& InReply, class UWidget* InWidgetDetectingDrag, const struct FKey& InDragKey);
	class UDragDropOperation* CreateDragDropOperation(TSubclassOf<class UDragDropOperation> InOperationClass);
	class UUserWidget* Create(class UObject* InWorldContextObject, TSubclassOf<class UUserWidget> InWidgetType, class APlayerController* InOwningPlayer);
	struct FEventReply ClearUserFocus(struct FEventReply& InReply, bool InbInAllUsers);
	struct FEventReply CaptureMouse(struct FEventReply& InReply, class UWidget* InCapturingWidget);
	struct FEventReply CaptureJoystick(struct FEventReply& InReply, class UWidget* InCapturingWidget, bool InbInAllJoysticks);
	void CancelDragDrop();
};

// 0x0 (0x28 - 0x28)
// Class UMG.WidgetLayoutLibrary
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetLayoutLibrary");
		return Clss;
	}

	class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* InWidget);
	class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* InWidget);
	class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* InWidget);
	class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* InWidget);
	class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* InWidget);
	class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* InWidget);
	class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* InWidget);
	class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* InWidget);
	class UOverlaySlot* SlotAsOverlaySlot(class UWidget* InWidget);
	class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* InWidget);
	class UGridSlot* SlotAsGridSlot(class UWidget* InWidget);
	class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* InWidget);
	class UBorderSlot* SlotAsBorderSlot(class UWidget* InWidget);
	void RemoveAllWidgets(class UObject* InWorldContextObject);
	bool ProjectWorldLocationToWidgetPosition(class APlayerController* InPlayerController, const struct FVector& InWorldLocation, struct FVector2D* InScreenPosition, bool InbPlayerViewportRelative);
	struct FGeometry GetViewportWidgetGeometry(class UObject* InWorldContextObject);
	struct FVector2D GetViewportSize(class UObject* InWorldContextObject);
	float GetViewportScale(class UObject* InWorldContextObject);
	struct FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* InPlayerController);
	bool GetMousePositionScaledByDPI(class APlayerController* InPlayer, float* InLocationX, float* InLocationY);
	struct FVector2D GetMousePositionOnViewport(class UObject* InWorldContextObject);
	struct FVector2D GetMousePositionOnPlatform();
};

// 0x60 (0x88 - 0x28)
// Class UMG.WidgetTree
class UWidgetTree : public UObject
{
public:
	uint8                                        Pad_13D2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               RootWidget;                                        // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UWidget*>            NamedSlotBindings;                                 // 0x38(0x50)(ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetTree");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
