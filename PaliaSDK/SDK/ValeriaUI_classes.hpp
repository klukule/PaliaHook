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

// 0x0 (0x4D8 - 0x4D8)
// Class ValeriaUI.VALUI_ModalWidgetBase
class UVALUI_ModalWidgetBase : public US6UI_ModalWidgetBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ModalWidgetBase");
		return Clss;
	}

};

// 0x68 (0x540 - 0x4D8)
// Class ValeriaUI.BaitUserWidget
class UBaitUserWidget : public UVALUI_ModalWidgetBase
{
public:
	TArray<struct FValeriaItem>                  Bait;                                              // 0x4D8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FValeriaItem                          SelectedBait;                                      // 0x4E8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20C5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BaitUserWidget");
		return Clss;
	}

	void ShowAmmoType(enum class EAmmoType InAmmoType);
	void OnShown(enum class EAmmoType InAmmoType);
	void OnRightMouseReleased();
	void OnHidden();
	void OnBaitSelected(const struct FValeriaItem& InbaitItem);
	void EndBaitSelection();
};

// 0x8 (0x4E0 - 0x4D8)
// Class ValeriaUI.BookViewerWidget
class UBookViewerWidget : public UVALUI_ModalWidgetBase
{
public:
	int32                                        CurrentBookId;                                     // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BookViewerWidget");
		return Clss;
	}

	void MarkPageAsRead(int32 InIndex);
	class FText GetTitle();
	class FText GetSubTitle();
	int32 GetNumberOfPages();
	class FText GetContentForPage(int32 InIndex);
};

// 0x58 (0x2D0 - 0x278)
// Class ValeriaUI.DetailUserWidget
class UDetailUserWidget : public UUserWidget
{
public:
	class UTextBlock*                            DetailName;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DetailCategory;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DetailDescription;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                DetailIcon;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20ED[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DetailUserWidget");
		return Clss;
	}

	bool UpdateDetail(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>& InItemType);
};

// 0x48 (0x2C0 - 0x278)
// Class ValeriaUI.VALUI_LoadingScreenUserWidget
class UVALUI_LoadingScreenUserWidget : public UUserWidget
{
public:
	class UVALUI_LoadingScreenBlackWidget*       LoadingScreenBlackWidget;                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            CurrentBackgroundTexture;                          // 0x280(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20FF[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_LoadingScreenUserWidget");
		return Clss;
	}

	void ShowLoadingScreenBackground();
	void ShowFadeToBlack();
	void HandleSetLoadingScreenTip(struct FPaliaLoadingScreenTip& InTip);
	void HandleSetBackgroundImage(class UTexture2D* InTexture);
	void HandleOnPawnChanged(class APawn* InPawn);
};

// 0x30 (0x508 - 0x4D8)
// Class ValeriaUI.MailboxViewerUserWidget
class UMailboxViewerUserWidget : public UVALUI_ModalWidgetBase
{
public:
	bool                                         bIsLoadingMail;                                    // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2143[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMailMessageWidgetData>        MailMessages;                                      // 0x4E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EMailboxViewerFilter              CurrentFilter;                                     // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2144[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMailbox                              LoadedMailbox;                                     // 0x4F8(0x10)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MailboxViewerUserWidget");
		return Clss;
	}

	void UpdateMailFilter(enum class EMailboxViewerFilter InFilter);
	bool TryCollectReward(int32 InIndex, int32 InRewardIndex);
	void RefreshMailMessages(bool InAllowRemoval);
	void OnVillagerMailChanged(class UVillagerMailInboxComponent* InVillagerMail);
	void OnPlayerToPlayerMailSuccess(const struct FMailbox& InMailbox);
	void OnPlayerToPlayerMailFailed(const class FString& InError);
	void OnMailLoaded();
	void OnMailChanged();
	void MarkAsRead(int32 InIndex);
	void LoadMail();
	void HideMessage(int32 InIndex);
	int32 GetNumberOfNonHiddenMessages();
	int32 GetNumberOfMessagesForFilter(enum class EMailboxViewerFilter InFilter);
	int32 GetNumberOfMessages();
	int32 GetNextNonHiddenMessage(int32 InStartIndex);
	struct FMailMessageWidgetData GetMailMessage(int32 InIndex);
	int32 GetIndexOfMailMessage(const struct FMailMessageWidgetData& InData);
	enum class EMailboxViewerFilter GetCurrentFilter();
};

// 0x60 (0x440 - 0x3E0)
// Class ValeriaUI.ValeriaViewportClient
class UValeriaViewportClient : public US6UI_GameViewportClient
{
public:
	uint8                                        Pad_2153[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_LoadingScreenUserWidget*        LoadingScreenWidget;                               // 0x430(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2154[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ValeriaViewportClient");
		return Clss;
	}

	void ReceiveOnFadeOutBlack();
	void HandleOnFadeOutBlack(float InDurationSeconds);
	void HandleOnFadeInBlack(float InDurationSeconds);
};

// 0x10 (0x4E8 - 0x4D8)
// Class ValeriaUI.VALUI_AnnouncementsMessageModalDialog
class UVALUI_AnnouncementsMessageModalDialog : public UVALUI_ModalWidgetBase
{
public:
	class FString                                URL;                                               // 0x4D8(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_AnnouncementsMessageModalDialog");
		return Clss;
	}

	void SetURL(const class FString& InNewURL);
	void RefreshMessageFromWeb();
	void HandleRefreshedMessageFromWeb(const class FString& InMessage);
};

// 0x28 (0x58 - 0x30)
// Class ValeriaUI.VAL_AsyncActionRequestStorefront
class UVAL_AsyncActionRequestStorefront : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Successful;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Failure;                                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2178[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VAL_AsyncActionRequestStorefront");
		return Clss;
	}

	class UVAL_AsyncActionRequestStorefront* RequestStorefront(class ULocalPlayer* InLP);
	void OnRequestStorefrontSuccess__DelegateSignature(const struct FVALUI_PremiumStorefrontResponse& InResponse);
	void OnRequestStorefrontFailure__DelegateSignature();
};

// 0x9A8 (0x9D8 - 0x30)
// Class ValeriaUI.VALUI_AsyncUpdateLoadout
class UVALUI_AsyncUpdateLoadout : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Failed;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_218E[0x988];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_AsyncUpdateLoadout");
		return Clss;
	}

	class UVALUI_AsyncUpdateLoadout* UpdateLoadout(class UVALUI_CharacterCustomizationPanelBase* InCustPanel, struct FVAL_CharacterCustomizationLoadout& InNewLoadout, struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& InContextPayload);
	void OnUpdateLoadoutFailed__DelegateSignature(struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& InContextPayload);
	void OnUpdateLoadoutCompleted__DelegateSignature(class UVALUI_CharacterCustomizationPanelBase* InCharacterCustomizationPanel, struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& InContextPayload);
};

// 0x0 (0x30 - 0x30)
// Class ValeriaUI.VALUI_WidgetStyleBase
class UVALUI_WidgetStyleBase : public UDataAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_WidgetStyleBase");
		return Clss;
	}

};

// 0x120 (0x150 - 0x30)
// Class ValeriaUI.VALUI_BorderStyle
class UVALUI_BorderStyle : public UVALUI_WidgetStyleBase
{
public:
	bool                                         bShowEffectWhenDisabled;                           // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2198[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x34(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          ContentColorAndOpacity;                            // 0x44(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2199[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Background;                                        // 0x60(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          BrushColor;                                        // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A0[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_BorderStyle");
		return Clss;
	}

	void Apply(class UBorder* InBorder);
};

// 0x8 (0x310 - 0x308)
// Class ValeriaUI.VALUI_Border_Styled
class UVALUI_Border_Styled : public UBorder
{
public:
	class UVALUI_BorderStyle*                    Style;                                             // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_Border_Styled");
		return Clss;
	}

	void SetBorderStyle(class UVALUI_BorderStyle* InNewStyle);
};

// 0x58 (0x2D0 - 0x278)
// Class ValeriaUI.VALUI_BoundInputActionStateWidget
class UVALUI_BoundInputActionStateWidget : public UUserWidget
{
public:
	class UInputAction*                          InputAction;                                       // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21BC[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_BoundInputActionStateWidget");
		return Clss;
	}

	void UpdateInputActionState_Implementation(struct FKey& InKey, enum class ETriggerEvent InLatestTriggerEvent, float InOngoingDuration, float InHoldTimeThreshold);
	void SetInputAction(class UInputAction* InInInputAction);
};

// 0x38 (0x1A0 - 0x168)
// Class ValeriaUI.VALUI_BoxDropShadow
class UVALUI_BoxDropShadow : public UContentWidget
{
public:
	struct FVector2D                             ShadowOffset;                                      // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowHardness;                                    // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CornerRadius;                                      // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C0[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_BoxDropShadow");
		return Clss;
	}

};

// 0x460 (0x490 - 0x30)
// Class ValeriaUI.VALUI_ButtonStyle
class UVALUI_ButtonStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x30(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x430(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropShadowCornerRadius;                            // 0x440(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShadowOffset_Normal;                               // 0x448(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset_Pressed;                              // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowHardness_Normal;                             // 0x468(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowHardness_Pressed;                            // 0x46C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor_Normal;                                // 0x470(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor_Pressed;                               // 0x480(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ButtonStyle");
		return Clss;
	}

	void Apply(class UVALUI_Button_Styled* InButton);
};

// 0x4E0 (0x970 - 0x490)
// Class ValeriaUI.VALUI_ButtonStyle_WithBG
class UVALUI_ButtonStyle_WithBG : public UVALUI_ButtonStyle
{
public:
	bool                                         bUseBackgroundImage;                               // 0x490(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21CF[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundImage;                                   // 0x4A0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bUseBackgroundStyle;                               // 0x570(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D0[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          BackgroundStyle;                                   // 0x580(0x3F0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ButtonStyle_WithBG");
		return Clss;
	}

};

// 0x68 (0x650 - 0x5E8)
// Class ValeriaUI.VALUI_Button_Styled
class UVALUI_Button_Styled : public UButton
{
public:
	class UVALUI_ButtonStyle*                    Style;                                             // 0x5E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEffectWhenReleased;                               // 0x5F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FEffectTime;                                       // 0x5F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21FC[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECursorState                      CursorState;                                       // 0x630(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFocusDirection                   DirectionOfCursorOnButton;                         // 0x631(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21FE[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_Button_Styled");
		return Clss;
	}

	bool ShowCursor(class UWidget* InInCursor);
	void SetButtonStyle(class UVALUI_ButtonStyle* InNewStyle);
	void SetButtonFocus();
	void RemoveCursor(class UWidget* InInCursor);
	void PreConstruct(bool InIsDesignTime);
	void OnInitialized();
	bool HasFocus();
	void HandleReleased();
	void HandlePressed();
	void Destruct();
	void Construct();
};

// 0x220 (0x870 - 0x650)
// Class ValeriaUI.VALUI_Button_Styled_WithBG
class UVALUI_Button_Styled_WithBG : public UVALUI_Button_Styled
{
public:
	uint8                                        Pad_220B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           GamepadKeyHint;                                    // 0x660(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EGamepadKeyHintLocation           HintShowLocation;                                  // 0x730(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             HintMargin;                                        // 0x738(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220F[0xD8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFocusDirection                   DirectionOfCursorOnBG;                             // 0x820(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2211[0x4F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_Button_Styled_WithBG");
		return Clss;
	}

	void HandleUnhovered();
	void HandleHovered();
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_CameraVirtualMoveHooker_Mobile
class UVALUI_CameraVirtualMoveHooker_Mobile : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CameraVirtualMoveHooker_Mobile");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class ValeriaUI.VALUI_NameValidator
class UVALUI_NameValidator : public UObject
{
public:
	TSet<enum class EVAL_CharacterNameType>      NameTypesToValidate;                               // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ErrorMessage;                                      // 0x78(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NameValidator");
		return Clss;
	}

	bool IsNameValid(const class FString& InInCharacterName);
};

// 0x10 (0xA0 - 0x90)
// Class ValeriaUI.VALUI_NameValidator_Regex
class UVALUI_NameValidator_Regex : public UVALUI_NameValidator
{
public:
	class FString                                RegexPattern;                                      // 0x90(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NameValidator_Regex");
		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class ValeriaUI.VALUI_NameValidator_Regex_PerWord
class UVALUI_NameValidator_Regex_PerWord : public UVALUI_NameValidator_Regex
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NameValidator_Regex_PerWord");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class ValeriaUI.VALUI_NameValidatorDataAsset
class UVALUI_NameValidatorDataAsset : public UPrimaryDataAsset
{
public:
	TSet<TSubclassOf<class UObject>>             ValidatorClasses;                                  // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NameValidatorDataAsset");
		return Clss;
	}

};

// 0x50 (0x2C8 - 0x278)
// Class ValeriaUI.VALUI_CharacterCreationScreenBase
class UVALUI_CharacterCreationScreenBase : public UUserWidget
{
public:
	class UVALUI_CharacterCustomizationPanelBase* CustomizationPanel;                                // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVALUI_NameValidatorDataAsset*         NameValidatorDataAsset;                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UVALUI_NameValidator*>          NameValidators;                                    // 0x288(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            EventOnCommitCharacter;                            // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventOnBodyTypeSelectionConfirm;                   // 0x2A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventOnBodyTypeSelectionChange;                    // 0x2B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CharacterCreationScreenBase");
		return Clss;
	}

	void SetEnableContinueButton(bool InbEnable);
	void SetEnableAllButtons(bool InbEnable);
	void OnCommitCharacter__DelegateSignature(const struct FVALDTOS_MetaCharacterFormat& InCommitedCharacter);
	void OnBodyTypeSelectionConfirm__DelegateSignature();
	void OnBodyTypeSelectionChange__DelegateSignature(bool InbFirstSelection);
	void HandleCharacterNameValidityResponse(struct FVALUI_CharacterNameValidityResponse& InResponse);
	void HandleCharacterNameChanged(class FText& InInCharacterName, enum class EVAL_CharacterNameType InInCharacterNameType);
	TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>> GetAllowedCustomizationItems();
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_CharacterCreationStatics
class UVALUI_CharacterCreationStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CharacterCreationStatics");
		return Clss;
	}

	bool IsCharacterNameValidityResponseValid(struct FVALUI_CharacterNameValidityResponse& InResponse);
};

// 0x9E0 (0xC58 - 0x278)
// Class ValeriaUI.VALUI_CharacterCustomizationPanelBase
class UVALUI_CharacterCustomizationPanelBase : public UUserWidget
{
public:
	uint8                                        Pad_2270[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PreviewCharacterActor;                             // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVAL_CharacterCustomizationComponent*  CharacterCustomizationComponent;                   // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVAL_CharacterCustomizationLoadout    CurrentLoadout;                                    // 0x298(0x918)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FVALUI_CharCustomization_LoadoutSlotData> LoadoutSlotMap;                                    // 0xBB0(0x50)(Edit, BlueprintVisible, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UEnum*                                 ItemTypeEnum;                                      // 0xC00(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSet<class FName>                            EnabledTagNames;                                   // 0xC08(0x50)(BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CharacterCustomizationPanelBase");
		return Clss;
	}

	void SetPreviewCharacterActor(class AActor* InActor);
	void PopulateLoadoutSlotMap();
	void HandleOnAllLoadoutSlotItemsGenerated();
	void HandleLoadoutUpdated(struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& InContextPayload);
	void HandleLoadoutSlotItemsGenerated(class FName& InLoadoutSlotName, struct FVALUI_CharCustomization_LoadoutSlotData& InLoadoutSlotData);
	void GetLoadoutSlotDataFromItemObject(class UObject* InItemObject, class FName* InLoadoutSlotName, struct FVALUI_CharCustomization_LoadoutSlotData* InLoadoutSlotData, bool* InbSuccess);
	struct FVAL_CharacterCustomizationLoadout GetCurrentLoadout();
	void GenerateLoadoutSlotItems();
	class UObject* GenerateItemObject(struct FVAL_CharCustomization_AssetData& InAssetData);
};

// 0x60 (0x500 - 0x4A0)
// Class ValeriaUI.VALUI_CharacterMovementStick_Mobile
class UVALUI_CharacterMovementStick_Mobile : public US6UI_InputActionHandlingUserWidget
{
public:
	uint8                                        Pad_22AE[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_CameraVirtualMoveHooker_Mobile* Hooker;                                            // 0x4F0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22AF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CharacterMovementStick_Mobile");
		return Clss;
	}

	void SetHooker(class UVALUI_CameraVirtualMoveHooker_Mobile* InVirtualMoveHooker);
	void OnUpdateMovmentVirtualStick(bool InTouchControlFlag, struct FVector2D& InPos, struct FVector2D& InControlVector);
	void OnFirstTouch();
	void InitMovementVirtualStack(const struct FVector2D& InDefaultPosition, float InValidTouchRadius, float InMovementValidDistanceTemp, float InWalkBoundaryDistanceTemp);
};

// 0x0 (0x278 - 0x278)
// Class ValeriaUI.VALUI_ChatEmojiPanel
class UVALUI_ChatEmojiPanel : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ChatEmojiPanel");
		return Clss;
	}

	TSoftObjectPtr<class UTexture2D> GetTexture(struct FS6UI_FRichImageRow_Soft& InImageRow);
};

// 0x1E0 (0x458 - 0x278)
// Class ValeriaUI.VALUI_ChatInputBar
class UVALUI_ChatInputBar : public UUserWidget
{
public:
	uint8                                        Pad_2337[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCommitBlankText;                                 // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageSubmitted;                                // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageTargetCycled;                             // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCommandSuggestionsChanged;                       // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2339[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UVAL_ChatCommand_Base*                 ActiveChatCommand;                                 // 0x350(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UVAL_ChatCommand_Base>> ChatCommandClasses;                                // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<enum class EVAL_DirectMessageResult, class FText> DirectMessageErrorMessageTable;                    // 0x368(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UVALUI_ChatInputEditableText*          EditableText;                                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSet<class UVAL_ChatCommand_Base*>           PendingActiveCommands;                             // 0x3C0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_233B[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ChatInputBar");
		return Clss;
	}

	void VALUIEvent_OnTextChanged__DelegateSignature(class UVALUI_ChatInputBar* InInputBar, class FText& InPreviousText, class FText& InNewText);
	void VALUIEvent_OnMessageTargetCycled__DelegateSignature(class UVALUI_ChatInputBar* InInputBar, struct FMessageTarget& InMessageTarget);
	void VALUIEvent_OnMessageSubmitted__DelegateSignature(class UVALUI_ChatInputBar* InInputBar, struct FMessageTarget& InMessageTarget, class FText& InMessage);
	void VALUIEvent_OnCommitBlankText__DelegateSignature(class UVALUI_ChatInputBar* InInputBar);
	void VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature(const class FString& InInString, TArray<TSubclassOf<class UVAL_ChatCommand_Base>>& InCommandClasses);
	void TryUpdateChatChannel();
	void PushErrorNotification(class FText& InInErrorText);
	void HandleOnTextCommitted(class FText& InInText, enum class ETextCommit InInCommitMethod);
	void HandleOnTextChanged(class FText& InInText);
	void HandleOnStateChanged(enum class EVALUI_ChatInputBarState InNewStateId);
	void HandleOnHideSuggestions();
	void HandleOnDisplayCharacterNameSuggestions(const class FString& InCharacterNameSubstr, int32 InMaxSuggestionsNum);
	void HandleOnChatChannelSet(struct FVALUI_ChatChannel& InChannel);
	class FString GetCharacterName();
	void DisplayStringsSuggestions(const class FString& InInString, TArray<class FString>& InSuggestions);
	void DisplayCommandSuggestions(bool InbInDisplay);
	void DisplayActiveCommandHint(class UVAL_ChatCommand_Base* InCommand, bool InbDisplay);
	void CycleToPrevSuggestion();
	void CycleToNextSuggestion();
	void CompleteSuggestion();
	bool ChangeMessageTarget(struct FMessageTarget& InMessageTarget);
};

// 0x8 (0x818 - 0x810)
// Class ValeriaUI.VALUI_EditableRichText_Styled
class UVALUI_EditableRichText_Styled : public US6UI_EditableRichText
{
public:
	class UVALUI_EditableRichTextStyle*          Style;                                             // 0x810(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_EditableRichText_Styled");
		return Clss;
	}

};

// 0x108 (0x920 - 0x818)
// Class ValeriaUI.VALUI_ChatInputEditableText
class UVALUI_ChatInputEditableText : public UVALUI_EditableRichText_Styled
{
public:
	FMulticastInlineDelegateProperty_            OnSummonContextMenu;                               // 0x818(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        MaximumCharacterLimit;                             // 0x828(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2376[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlainTextTag;                                      // 0x830(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BoldTextTag;                                       // 0x840(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItalicTextTag;                                     // 0x850(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CycleKey;                                          // 0x860(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  UpKey;                                             // 0x878(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  DownKey;                                           // 0x890(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  PlainTextKey;                                      // 0x8A8(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  BoldKey;                                           // 0x8C0(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  ItalicKey;                                         // 0x8D8(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_237B[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ChatInputEditableText");
		return Clss;
	}

	void VALUI_OnSummonContextMenu__DelegateSignature(struct FGeometry& InGeometry, struct FPointerEvent& InMouseEvent);
	void StyleSelectedText(const class FString& InStyleTagString);
	void PasteTextFromClipboardChecked();
	void MakeSelectedTextPlain();
	void MakeSelectedTextItalic();
	void MakeSelectedTextBold();
	void InsertTextAtCursorChecked(class FText& InInText);
};

// 0x0 (0x278 - 0x278)
// Class ValeriaUI.VALUI_ChatMessage
class UVALUI_ChatMessage : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ChatMessage");
		return Clss;
	}

	class FString GetTimeZone();
	class FString ColorToHexString(struct FLinearColor& InColor);
};

// 0xE8 (0x588 - 0x4A0)
// Class ValeriaUI.VALUI_ChatPanelBase
class UVALUI_ChatPanelBase : public US6UI_InputActionHandlingUserWidget
{
public:
	uint8                                        Pad_24AC[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChatPanelStateChanged;                           // 0x508(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class FName, struct FVALUI_ChatTab>     TabTable;                                          // 0x518(0x50)(Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class FName                                  ActiveTabName;                                     // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVALUI_ChatInputBar*                   InputBar;                                          // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24AE[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ChatPanelBase");
		return Clss;
	}

	bool TryGetTabAndChannelFromMessageConfig(struct FVALUI_ChatMessageConfig& InConfig, struct FVALUI_ChatTab* InOutTab, struct FVALUI_ChatChannel* InOutChannel);
	void ToggleChatChannel(struct FVALUI_ChatMessageConfig& InMessageConfig);
	void ToggleChannelsByType(bool InbEnabled, enum class EMessageTargetType InType);
	void ToggleAllChannels(bool InbEnabled);
	void SwitchTab(class FName& InTabName);
	void RemoveTabChannel(struct FVALUI_ChatTab* InTab, int32 InChannelIndex);
	void OnNewChatMessageAdded(struct FValeriaChatMessage& InChatMessage);
	void HandleToggleTabHost(bool InbEnabled);
	void HandleTabChannelEnabled(struct FVALUI_ChatTab& InTab, struct FVALUI_ChatChannel& InChannel, struct FVALUI_ChatMessageConfig& InConfig);
	void HandleRemoveSidePanelChannel(class UWidget* InSidePanel, int32 InChannelIndex);
	void HandleOnStateChanged(enum class EVALUI_ChatPanelState InState);
	void HandleOnChatroomJoined(bool InbWasSuccess, const class FString& InRoomId);
	void HandleNewMessageTarget(const struct FMessageTarget& InMessageTarget);
	void HandleNewControlMessage(struct FControlMessage& InControlMessage);
	void HandleNewChatMessage(struct FValeriaChatMessage& InChatMessage);
	void HandleMessageTargetRemoved(const struct FMessageTarget& InMessageTarget);
	void HandleDisplayTab(class FName& InTabName);
	void HandleDisplayChannelGlow(class UWidget* InSidePanel, struct FVALUI_ChatChannel& InChannel, int32 InChannelIndex);
	void HandleClearTabHost();
	void HandleClearMessagePanel(class UWidget* InMessagePanel);
	void HandleAddTabToTabHost(class FName& InTabName, class FText& InTabDisplayName);
	void HandleAddTabChannel(struct FVALUI_ChatMessageConfig& InMessageConfig);
	void HandleAddMessageToPanel(class UWidget* InMessagePanel, struct FValeriaChatMessage& InChatMessage, struct FVALUI_ChatMessageConfig& InMessageConfig);
	void GotoChatState(enum class EVALUI_ChatPanelState InState);
	void GetTabWidgetReferences(class FName& InTabName, class UWidget** InOutSidePanelWidget, class UWidget** InOutMessagePanelWidget);
	enum class EVALUI_ChatPanelState GetCurrentChatState();
	void GetChatMessageConfigs(struct FValeriaChatMessage& InMessage, TArray<struct FVALUI_ChatMessageConfig>* InOutMessageConfigs);
	void DisplayTab(class FName& InTabName);
	void ClearTabSidePanel(struct FVALUI_ChatTab& InTab);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_ChatStatics
class UVALUI_ChatStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ChatStatics");
		return Clss;
	}

	TArray<struct FMessageTarget> GetMessageTargetsOfChannel(class UWorld* InWorldContext, struct FVALUI_ChatChannel& InInChannel);
	bool DoesChannelMatchMessageTarget(struct FVALUI_ChatChannel& InInChannel, struct FMessageTarget& InInMessageTarget);
	struct FS6PLAT_ChatMessage ConvertValeriaChatMessageToPlatformChatMessage(struct FValeriaChatMessage& InChatMessages);
	TArray<struct FS6PLAT_ChatMessage> ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray(TArray<struct FValeriaChatMessage>& InChatMessages);
};

// 0xAD0 (0xB00 - 0x30)
// Class ValeriaUI.VALUI_CheckBoxStyle
class UVALUI_CheckBoxStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x30(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CheckBoxStyle");
		return Clss;
	}

	void Apply(class UCheckBox* InCheckBox);
};

// 0x8 (0xC80 - 0xC78)
// Class ValeriaUI.VALUI_CheckBox_Styled
class UVALUI_CheckBox_Styled : public UCheckBox
{
public:
	class UVALUI_CheckBoxStyle*                  Style;                                             // 0xC78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CheckBox_Styled");
		return Clss;
	}

	void SetCheckBoxStyle(class UVALUI_CheckBoxStyle* InNewStyle);
};

// 0x58 (0x2D0 - 0x278)
// Class ValeriaUI.VALUI_CrafterContentWidget
class UVALUI_CrafterContentWidget : public UUserWidget
{
public:
	TMap<class FName, struct FVALUI_Crafter>     CrafterTable;                                      // 0x278(0x50)(Edit, BlueprintVisible, EditFixedSize, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            CrafterConfigsDataTable;                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CrafterContentWidget");
		return Clss;
	}

	class FName GetCrafterRowName(struct FCrafterConfig& InCrafterConfig);
	bool GetCrafterData(struct FCrafterConfig& InCrafterConfig, struct FVALUI_Crafter* InCrafterData);
};

// 0x0 (0x278 - 0x278)
// Class ValeriaUI.VALUI_CrafterStationsViewWidget
class UVALUI_CrafterStationsViewWidget : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_CrafterStationsViewWidget");
		return Clss;
	}

	void DisplayCrafterStations(struct FRecipeNeeds& InRecipeNeeds);
};

// 0x18 (0x180 - 0x168)
// Class ValeriaUI.VALUI_DebugOnly
class UVALUI_DebugOnly : public UContentWidget
{
public:
	bool                                         bShouldCollapseIfNotDebugMode;                     // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2510[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_DebugOnly");
		return Clss;
	}

};

// 0x8 (0x180 - 0x178)
// Class ValeriaUI.VALUI_DepthSortedHorizontalBox
class UVALUI_DepthSortedHorizontalBox : public UHorizontalBox
{
public:
	int32                                        ForemostWidgetIndex;                               // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2515[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_DepthSortedHorizontalBox");
		return Clss;
	}

	void SetForemostWidgetIndex(int32 InIndex);
};

// 0x18 (0xA8 - 0x90)
// Class ValeriaUI.VALUI_DragDropOperation
class UVALUI_DragDropOperation : public UDragDropOperation
{
public:
	FMulticastInlineDelegateProperty_            OnDragStarted;                                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bStartedDrag;                                      // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_251B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_DragDropOperation");
		return Clss;
	}

	void DragStarted(struct FPointerEvent& InPointerEvent);
};

// 0x48 (0x70 - 0x28)
// Class ValeriaUI.VALUI_Functor_Button_OnClicked
class UVALUI_Functor_Button_OnClicked : public UObject
{
public:
	uint8                                        Pad_2520[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_Functor_Button_OnClicked");
		return Clss;
	}

	void OnClicked();
};

// 0x40 (0x70 - 0x30)
// Class ValeriaUI.VALUI_DynamicExtensionBase
class UVALUI_DynamicExtensionBase : public UPrimaryDataAsset
{
public:
	class FName                                  TargetContainer;                                   // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             TargetWidget;                                      // 0x38(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Priority;                                          // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2528[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_DynamicExtensionBase");
		return Clss;
	}

	void AttachedToWidget();
};

// 0x310 (0x340 - 0x30)
// Class ValeriaUI.VALUI_EditableRichTextStyle
class UVALUI_EditableRichTextStyle : public UVALUI_WidgetStyleBase
{
public:
	class UDataTable*                            TextStyleSet;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class US6UI_EditableRichTextDecorator>> DecoratorClasses;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultStyle;                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2532[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextStyle                    DefaultTextStyleOverride;                          // 0x50(0x2F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_EditableRichTextStyle");
		return Clss;
	}

	void ApplyToTextBlock(class US6UI_EditableRichText* InTextWidget);
};

// 0xE80 (0xEB0 - 0x30)
// Class ValeriaUI.VALUI_EditableTextBoxStyle
class UVALUI_EditableTextBoxStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x30(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_EditableTextBoxStyle");
		return Clss;
	}

	void ApplyToTextBox(class UEditableTextBox* InTextWidget);
};

// 0x10 (0x1080 - 0x1070)
// Class ValeriaUI.VALUI_EditableTextBox_Styled
class UVALUI_EditableTextBox_Styled : public UEditableTextBox
{
public:
	class UVALUI_EditableTextBoxStyle*           Style;                                             // 0x1070(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_253F[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_EditableTextBox_Styled");
		return Clss;
	}

	void SetTextStyle(class UVALUI_EditableTextBoxStyle* InNewStyle);
};

// 0x630 (0x660 - 0x30)
// Class ValeriaUI.VALUI_EditableTextStyle
class UVALUI_EditableTextStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FEditableTextStyle                    WidgetStyle;                                       // 0x30(0x2F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       HintTextStyle;                                     // 0x320(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_EditableTextStyle");
		return Clss;
	}

	void ApplyToTextBlock(class UEditableText* InTextWidget);
};

// 0x18 (0x4F0 - 0x4D8)
// Class ValeriaUI.VALUI_EditableText_Styled
class UVALUI_EditableText_Styled : public UEditableText
{
public:
	FMulticastInlineDelegateProperty_            OnCaretMovedDelegate;                              // 0x4D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVALUI_EditableTextStyle*              Style;                                             // 0x4E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_EditableText_Styled");
		return Clss;
	}

	void VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature(int32 InLineIndex, int32 InOffset);
	void SetTextStyle(class UVALUI_EditableTextStyle* InNewStyle);
	void CaretGoTo(int32 InLineIndex, int32 InOffset);
};

// 0x18 (0x290 - 0x278)
// Class ValeriaUI.VALUI_EmoteButton
class UVALUI_EmoteButton : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected)
	class UEmoteDataAsset*                       EmoteDataAsset;                                    // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_EmoteButton");
		return Clss;
	}

};

// 0x28 (0x2A0 - 0x278)
// Class ValeriaUI.VALUI_EmoteButtonContainer
class UVALUI_EmoteButtonContainer : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UVALUI_EmoteButton>        EmoteButtonWidgetClass;                            // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UEmoteDataAsset>> Emotes;                                            // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_EmoteButtonContainer");
		return Clss;
	}

	void OnEmoteContainerButtonClicked__DelegateSignature(class UVALUI_EmoteButtonContainer* InContainer, class UVALUI_EmoteButton* InButtonClicked, class UEmoteDataAsset* InEmoteDataAsset);
	void OnEmoteButtonClicked(class UVALUI_EmoteButton* InInButtonClicked, class UEmoteDataAsset* InInEmoteDataAsset);
	void HandleClearContainer();
	void HandleAddButtonToContainer(class UVALUI_EmoteButton* InButton);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_ErrorDisplayHandlerInterface
class IVALUI_ErrorDisplayHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ErrorDisplayHandlerInterface");
		return Clss;
	}

	void HandleErrorDisplay(struct FVALUI_ErrorDisplayPayload& InErrorDisplayPayload);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_ErrorDisplayHandling
class UVALUI_ErrorDisplayHandling : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ErrorDisplayHandling");
		return Clss;
	}

	bool TryRaiseErrorForDisplay(class UWidget* InInstigatingWidget, struct FVALUI_ErrorDisplayPayload& InErrorDisplayPayload);
};

// 0x2D0 (0x300 - 0x30)
// Class ValeriaUI.VALUI_ExpandableAreaStyle
class UVALUI_ExpandableAreaStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FExpandableAreaStyle                  WidgetStyle;                                       // 0x30(0x1C0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BorderBrush;                                       // 0x1F0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderColor;                                       // 0x2C0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderPadding;                                     // 0x2D4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               AreaPadding;                                       // 0x2E4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_25B1[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ExpandableAreaStyle");
		return Clss;
	}

	void Apply(class UExpandableArea* InExpandableArea);
};

// 0x10 (0x470 - 0x460)
// Class ValeriaUI.VALUI_ExpandableArea_Styled
class UVALUI_ExpandableArea_Styled : public UExpandableArea
{
public:
	class UVALUI_ExpandableAreaStyle*            ExpandableAreaStyle;                               // 0x460(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25BB[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ExpandableArea_Styled");
		return Clss;
	}

	void SetExpandableAreaStyle(class UVALUI_ExpandableAreaStyle* InNewStyle);
};

// 0x8 (0x280 - 0x278)
// Class ValeriaUI.VALUI_ExtensionPointContainerBase
class UVALUI_ExtensionPointContainerBase : public UUserWidget
{
public:
	class FName                                  Identifier;                                        // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ExtensionPointContainerBase");
		return Clss;
	}

	void AddExtensibleWidget(TSoftClassPtr<class UUserWidget>& InWidgetReference);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_InputValidationFunctionLibrary
class UVALUI_InputValidationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_InputValidationFunctionLibrary");
		return Clss;
	}

	bool ValidateUserName(const class FString& InUserNameInput, TArray<class FText>* InOutErrors);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_ItemAcquisitionNotificationInterface
class IVALUI_ItemAcquisitionNotificationInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ItemAcquisitionNotificationInterface");
		return Clss;
	}

	void SetInitialData(const struct FValeriaItem& InItem);
	bool CanAppendAdditionalData();
	void AppendAdditionalData(const struct FValeriaItem& InItem);
};

// 0xE0 (0x108 - 0x28)
// Class ValeriaUI.VALUI_ItemAcquisitionNotifier
class UVALUI_ItemAcquisitionNotifier : public UObject
{
public:
	TSoftClassPtr<class UUserWidget>             WidgetClass;                                       // 0x28(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2603[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ItemAcquisitionNotifier");
		return Clss;
	}

	void Setup(class UInventoryComponent* InSourceInventoryComponent, class UVALUI_NotificationQueue* InTargetNotificationQueue, TSoftClassPtr<class UUserWidget>& InInWidgetClass);
	class UWidget* OnCreateItemAcquisitionNotification__DelegateSignature(class UVALUI_ItemAcquisitionNotifier* InNotifier);
	void HandleNotificationDismissed(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InAffectedNotificationId, class UWidget* InNotificationWidget);
	void HandleItemAcquired(const struct FValeriaItem& InItem);
};

// 0x8 (0xB0 - 0xA8)
// Class ValeriaUI.VALUI_ItemDragDrop
class UVALUI_ItemDragDrop : public UVALUI_DragDropOperation
{
public:
	bool                                         WasShiftDown;                                      // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_260D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ItemDragDrop");
		return Clss;
	}

	struct FValeriaItem GetItem();
};

// 0x4F0 (0x520 - 0x30)
// Class ValeriaUI.VALUI_ItemSlotStyle
class UVALUI_ItemSlotStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FSlateBrush                           Brush_Empty;                                       // 0x30(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Filled;                                      // 0x100(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Hover;                                       // 0x1D0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Selected;                                    // 0x2A0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Highlighted;                                 // 0x370(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Disabled;                                    // 0x440(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bRaiseOnHover;                                     // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAnimOnHover;                                  // 0x511(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_261B[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ItemSlotStyle");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class ValeriaUI.VALUI_ItemStyle
class UVALUI_ItemStyle : public UDataAsset
{
public:
	enum class EItemEmptyDisplayType             EmptyDisplayType;                                  // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemAmountDisplayType            AmountDisplayType;                                 // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomAmountDisplayColor;                      // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2631[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           AmountDisplayColor;                                // 0x34(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bCanShowDurability;                                // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowCapacity;                                  // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowConsumableIcon;                            // 0x4A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowQuestIcon;                                 // 0x4B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowAmmo;                                      // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTooltipOnHover;                               // 0x4D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2633[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ItemStyle");
		return Clss;
	}

};

// 0x7A0 (0x7D0 - 0x30)
// Class ValeriaUI.VALUI_ListViewStyle
class UVALUI_ListViewStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x30(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0x7A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2638[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScrollbarThickness;                                // 0x7A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ScrollbarPadding;                                  // 0x7B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bScrollBarAlwaysVisible;                           // 0x7C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfItemsToMakeScrollBarVisible;               // 0x7CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ListViewStyle");
		return Clss;
	}

};

// 0x58 (0xC78 - 0xC20)
// Class ValeriaUI.VALUI_ListView_Styled
class UVALUI_ListView_Styled : public UListView
{
public:
	uint8                                        Pad_2656[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_ListViewStyle*                  Style;                                             // 0xC28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHandleDirectionalNavigation;                      // 0xC30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2657[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUserScrolled;                                    // 0xC38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUserMouseWheelScrolled;                          // 0xC48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnListItemsChanged;                                // 0xC58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2658[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ListView_Styled");
		return Clss;
	}

	void VALUI_OnListViewUserScrolled__DelegateSignature(float InScrollFraction);
	void VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature(float InDesiredOffset);
	bool ShouldScrollBarBeVisible();
	void OnListItemsChanged__DelegateSignature(TArray<class UObject*>& InAddedItems, TArray<class UObject*>& InRemovedItems);
	float GetScrollbarDistanceFromBottom();
	TArray<class UObject*> GetItemsWithinRange(int32& InStartingIndex, int32& InRange);
};

// 0x0 (0x278 - 0x278)
// Class ValeriaUI.VALUI_LoadingScreenBlackWidget
class UVALUI_LoadingScreenBlackWidget : public UUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_LoadingScreenBlackWidget");
		return Clss;
	}

	class UWidgetAnimation* GetFadeFromBlackAnimation();
	void FadeFromNoneToBlack(float InFadeTimeInSeconds);
	void FadeFromBlackToNone(float InFadeTimeInSeconds);
};

// 0x20 (0x98 - 0x78)
// Class ValeriaUI.VALUI_MainHUDViewModel
class UVALUI_MainHUDViewModel : public US6UI_StateViewModel
{
public:
	struct FVALUI_MainHUDState                   HUDState;                                          // 0x78(0xC)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVALUI_SocialTrackingData             SocialTrackingData;                                // 0x84(0x14)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_MainHUDViewModel");
		return Clss;
	}

	void ShowRightHudElements();
	void HideRightHudElements();
};

// 0x0 (0x4D8 - 0x4D8)
// Class ValeriaUI.VALUI_MainHUDWidget
class UVALUI_MainHUDWidget : public US6UI_StateUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_MainHUDWidget");
		return Clss;
	}

	void HandleOnViewModelSocialTrackingDataChanged(class UObject* InObject, const struct FFieldNotificationId& InField);
	void HandleOnViewModelHUDStateChanged(class UObject* InObject, const struct FFieldNotificationId& InField);
	void HandleOnSocialTrackingDataChanged(struct FVALUI_SocialTrackingData& InSocialData);
	void HandleOnHUDStateChanged(struct FVALUI_MainHUDState& InState);
};

// 0x11C0 (0x11F0 - 0x30)
// Class ValeriaUI.VALUI_MultiLineEditableTextBoxStyle
class UVALUI_MultiLineEditableTextBoxStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x30(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0xEB0(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_MultiLineEditableTextBoxStyle");
		return Clss;
	}

	void ApplyToTextBox(class UMultiLineEditableTextBox* InTextWidget);
};

// 0x8 (0x1070 - 0x1068)
// Class ValeriaUI.VALUI_MultiLineEditableTextBox_Styled
class UVALUI_MultiLineEditableTextBox_Styled : public UMultiLineEditableTextBox
{
public:
	class UVALUI_MultiLineEditableTextBoxStyle*  Style;                                             // 0x1068(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_MultiLineEditableTextBox_Styled");
		return Clss;
	}

	void SetTextBoxStyle(class UVALUI_MultiLineEditableTextBoxStyle* InNewStyle);
};

// 0x340 (0x370 - 0x30)
// Class ValeriaUI.VALUI_MultiLineEditableTextStyle
class UVALUI_MultiLineEditableTextStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x30(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_MultiLineEditableTextStyle");
		return Clss;
	}

	void ApplyToTextBlock(class UMultiLineEditableText* InTextWidget);
};

// 0x8 (0x530 - 0x528)
// Class ValeriaUI.VALUI_MultiLineEditableText_Styled
class UVALUI_MultiLineEditableText_Styled : public UMultiLineEditableText
{
public:
	class UVALUI_MultiLineEditableTextStyle*     Style;                                             // 0x528(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_MultiLineEditableText_Styled");
		return Clss;
	}

	void SetTextStyle(class UVALUI_MultiLineEditableTextStyle* InNewStyle);
};

// 0x48 (0x78 - 0x30)
// Class ValeriaUI.VALUI_NewsInboxMessageDataAsset
class UVALUI_NewsInboxMessageDataAsset : public UDataAsset
{
public:
	struct FGuid                                 Guid;                                              // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVAL_NewsInboxMessageType         MessageType;                                       // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_269C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Subject;                                           // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NewsInboxMessageDataAsset");
		return Clss;
	}

};

// 0x30 (0x508 - 0x4D8)
// Class ValeriaUI.VALUI_NewsInbox_Widget
class UVALUI_NewsInbox_Widget : public UVALUI_ModalWidgetBase
{
public:
	bool                                         MessageDefsLoaded;                                 // 0x4D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVAL_NewsInboxComponent*               CurrentNewsInbox;                                  // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVALUI_NewsInboxMessageDataAsset*> NewsInboxMessageDefinitions;                       // 0x4E8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26AF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NewsInbox_Widget");
		return Clss;
	}

	void OnLoadSuccess();
	void LoadNewsInboxMessageDefinitions();
	class AValeriaPlayerController* GetValeriaPlayer();
	class UVALUI_NewsInboxMessageDataAsset* GetNewsInboxMessageDefinitionFromRewardIndex(int32 InIndex, bool InClaimed);
	class UVALUI_NewsInboxMessageDataAsset* GetNewsInboxMessageDefinitionByType(enum class EVAL_NewsInboxMessageType InEMessageType);
	void BP_OnRewardRefresh();
	void BP_OnRedemptionSuccess();
	void BP_OnRedemptionFailure();
	void BP_OnLoadSuccess();
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_NotificationFactory
class UVALUI_NotificationFactory : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NotificationFactory");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_NotificationWidgetInterface
class IVALUI_NotificationWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NotificationWidgetInterface");
		return Clss;
	}

	bool MatchesNotification(class FText& InNotificationText, TSoftObjectPtr<class UTexture2D>& InNotificationIcon);
	void HandleNotificationShown(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InNotificationId);
	void HandleNotificationDismissed(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InNotificationId);
};

// 0x30 (0x58 - 0x28)
// Class ValeriaUI.VALUI_NotificationQueue
class UVALUI_NotificationQueue : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnNotificationPushed;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotificationDismissed;                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVALUI_NotificationQueueEntry> Entries;                                           // 0x48(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_NotificationQueue");
		return Clss;
	}

	bool TryDismissNotification(struct FGuid& InNotificationId);
	struct FGuid PushNotification(class UWidget* InNotificationWidget);
	void OnNotificationShown(struct FGuid& InNotificationId);
	void OnNotificationPushed__DelegateSignature(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InAffectedNotificationId);
	void OnNotificationDismissed__DelegateSignature(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InAffectedNotificationId, class UWidget* InNotificationWidget);
	class UWidget* GetNotificationById(struct FGuid& InNotificationId);
	class UWidget* GetLastNotificationOnStack();
	struct FGuid GetIdForNotification(class UWidget* InNotificationWidget);
	TArray<struct FGuid> GetAlllNotificationIds();
};

// 0x30 (0x508 - 0x4D8)
// Class ValeriaUI.VALUI_PhotoCameraScreenBase
class UVALUI_PhotoCameraScreenBase : public US6UI_StateUserWidget
{
public:
	enum class EVALUI_PhotoCameraScreenLookMode  LookMode;                                          // 0x4D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26E8[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PhotoCameraScreenBase");
		return Clss;
	}

	void SetLookMode(enum class EVALUI_PhotoCameraScreenLookMode InValue);
	void AccumulateLookModeInput(struct FGeometry& InInGeometry, struct FPointerEvent& InInMouseEvent, bool InbInvertYAxis);
};

// 0x68 (0x578 - 0x510)
// Class ValeriaUI.VALUI_UIManagerWidgetBase
class UVALUI_UIManagerWidgetBase : public US6UI_UIManagerWidgetBase
{
public:
	uint8                                        Pad_274D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnItemDragDrop;                                    // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_274E[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_UIManagerWidgetBase");
		return Clss;
	}

	void RegisterCallbacksAndBroadcastNewDragDrop(class UVALUI_ItemDragDrop* InItemDragDrop);
	void OpenVillagerStore(int32 InVillagerConfigId);
	void OpenBook(int32 InBookId);
	void OnItemDragDropped(class UDragDropOperation* InOperation);
	void NavigateToRecentPhotos(struct FGuid& InIdOfPhotoToNavigateTo, bool InbShouldSelectPhoto);
	void NavigateToOnlinePhotoAlbum(struct FGuid& InIdOfPhotoToNavigateTo, bool InbShouldSelectPhoto);
	void Implementation_ToggleGameplayMenuMode(enum class EVAL_GameplayMenuMode InMode);
	void Implementation_ToggleCollectionsMenu(enum class EVAL_CollectionsTabState& InTabState);
	void Implementation_OpenVillagerStore(int32 InVillagerConfigId);
	void Implementation_OpenSubgameScreen(class USubgameConfig* InInSubgameConfig);
	void Implementation_OpenStore(class UVillagerStoreConfig* InStoreConfig);
	void Implementation_OpenStables(class AActor* InStablesActor);
	void Implementation_OpenSignTeleporter(class AActor* InTeleporterActor);
	void Implementation_OpenShippingBin(class UShippingBinComponent* InShippingBinComponent);
	void Implementation_OpenRequestItem(class FName InTag);
	void Implementation_OpenRepairStation(class AActor* InRepairStationActor, bool InbAllowPurchases, bool InbAllowRepairKitsFromStorage);
	void Implementation_OpenRecipeInspiration();
	void Implementation_OpenPremiumStore(struct FVAL_OpenStorePayload& InPayload);
	void Implementation_OpenPlayerStorage();
	void Implementation_OpenPetBonus(TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& InItems);
	void Implementation_OpenNewsInbox();
	void Implementation_OpenMailbox();
	void Implementation_OpenItemVariantCustomizer(class UItemVariantCustomizerComponent* InCustomizer);
	void Implementation_OpenHousingEdit(class AHousingPlotActor* InHousingPlot);
	void Implementation_OpenHouseUpgrade(class ULevelerComponent* InLevelerComponent);
	void Implementation_OpenHomeTeleporter(class ATeleporterActor* InTeleporter);
	void Implementation_OpenCVarMenu();
	void Implementation_OpenCrafter(class UCrafterComponent* InCrafterComponent);
	void Implementation_OpenCommunityActivities();
	void Implementation_OpenBundleDropOffMenu(class UBundleShrineConfig* InBundleConfig);
	void Implementation_OpenBook(int32 InBookId);
	void Implementation_OpenAmmoMenu(enum class EAmmoType InAmmoType);
	void Implementation_NavigateToRecentPhotos(struct FGuid& InIdOfPhotoToNavigateTo, bool InbShouldSelectPhoto);
	void Implementation_NavigateToOnlinePhotoAlbum(struct FGuid& InIdOfPhotoToNavigateTo, bool InbShouldSelectPhoto);
	void Implementation_NavigateToCharacterCustomization(struct FVAL_CharacterCustomizationModeConfig& InConfig);
	bool Implementation_HasAnyHousingPlotsTeleportOptions(class ATeleporterActor* InTeleporter);
	void Implementation_CloseSubgameScreen();
};

// 0xF0 (0x668 - 0x578)
// Class ValeriaUI.VALUI_PregameUIManager
class UVALUI_PregameUIManager : public UVALUI_UIManagerWidgetBase
{
public:
	uint8                                        Pad_27A7[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPregameStateChange;                              // 0x5E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyStateChange;                                // 0x5F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class AVAL_CharacterRenderStudio*            RenderStudio;                                      // 0x600(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                AnnouncementURL;                                   // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Announcement;                                      // 0x618(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                             AnnouncementTimestamp;                             // 0x628(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ServerStatusURL;                                   // 0x630(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ServerStatus;                                      // 0x640(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27AA[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PregameUIManager");
		return Clss;
	}

	void TryGetCachedCharacters_Checked(TArray<struct FVALDTOS_MetaCharacterFormat>* InOutOurCharacters);
	bool TryGetCachedCharacters(TArray<struct FVALDTOS_MetaCharacterFormat>* InOutOurCharacters);
	void SetAnnouncementURL(const class FString& InURL);
	void OnPregameStateChange__DelegateSignature(enum class EVALUI_PregameState InState);
	void OnLobbyStateChange__DelegateSignature(enum class EVALUI_LobbyState InState);
	void HandleOnRetrievingCharacterListFailed(int32 InErrorCode);
	void HandleOnPregameStateChanged(enum class EVALUI_PregameState InNewState);
	void HandleOnLoginStateChanged(enum class EVALUI_LoginState InNewState);
	void HandleOnLobbyStateChanged(enum class EVALUI_LobbyState InNewState);
	void HandleOnFetchedServerStatus();
	void HandleOnCharacterListObtained(TArray<struct FVALDTOS_MetaCharacterFormat>& InInCachedCharacters);
	void HandleOnCharacterCreationStateChanged(enum class EVALUI_CharacterCreationState InNewState);
	void GoToPregameState(enum class EVALUI_PregameState InNewState);
	void GoToLoginState(enum class EVALUI_LoginState InNewState);
	void GoToLobbyState(enum class EVALUI_LobbyState InNewState);
	void GoToCharacterCreationState(enum class EVALUI_CharacterCreationState InNewState);
	enum class EVALUI_PregameState GetCurrentPregameStateId();
	void GetCachedCharacterAtIndex_Checked(int32 InIndex, struct FVALDTOS_MetaCharacterFormat* InOutCharacter);
	void FetchServerStatus();
	void FetchAnnouncements();
};

// 0x40 (0x418 - 0x3D8)
// Class ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase
class UVALUI_PremiumCurrencyPurchaseWidgetBase : public UCommonActivatableWidget
{
public:
	enum class EVALUI_PremiumCurrencyPurchaseState PurchaseState;                                     // 0x3D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27BD[0x13];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValidatePurchaseTimerSecs;                         // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ValidatePurchaseMaxAttempts;                       // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27BF[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PremiumCurrencyPurchaseWidgetBase");
		return Clss;
	}

	void RequestBundleOffers();
	void PurchasePremiumCurrency(struct FGuid& InBundleID);
	void HandleValidatePaymentFulfillmentTick(struct FGuid& InPaymentID);
	void HandleUrlChanged(class FText& InText);
	void HandlePaymentFulfilled();
	void HandlePaymentCompleted();
	void HandlePaymentCancelled();
	void HandleCheckoutSessionCreated(const class FString& InURL);
	void HandleBundleOffersFailed();
	void HandleBundleOffersAvailable(TArray<struct FVALUI_PremiumCurrencyBundle>& InBundles);
	void CancelValidatePaymentPolling();
};

// 0x0 (0x3D8 - 0x3D8)
// Class ValeriaUI.VALUI_PremiumItemPurchaseWidgetBase
class UVALUI_PremiumItemPurchaseWidgetBase : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PremiumItemPurchaseWidgetBase");
		return Clss;
	}

	TMap<class FName, class UVAL_CharacterCustomizationItemBase*> GetLoadoutOverridesForCatalogItems(TArray<class UVAL_CharacterCustomizationItemBase*>& InItems);
	TArray<class UVAL_CharacterCustomizationItemBase*> GetCustomizationItemsForGuids(TArray<struct FGuid>& InItemIds);
};

// 0x60 (0x2D8 - 0x278)
// Class ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase
class UVALUI_PremiumStorefrontTileWidgetBase : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FVALUI_PremiumStorefrontWidgetModel   Model;                                             // 0x288(0x50)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PremiumStorefrontTileWidgetBase");
		return Clss;
	}

	void SetModel(struct FVALUI_PremiumStorefrontWidgetModel& InNewModel);
	void OnSelected__DelegateSignature(class UVALUI_PremiumStorefrontTileWidgetBase* InWidget);
	void HandleModelUpdate(struct FVALUI_PremiumStorefrontWidgetModel& InNewModel);
	struct FVALUI_PremiumStorefrontWidgetModel GetModel();
};

// 0x18 (0x3F0 - 0x3D8)
// Class ValeriaUI.VALUI_PremiumStorefrontWidgetBase
class UVALUI_PremiumStorefrontWidgetBase : public UCommonActivatableWidget
{
public:
	int32                                        TilePaddingAmount;                                 // 0x3D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_27E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGridPanel*                            StoreGrid;                                         // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UVALUI_PremiumStorefrontTileWidgetBase> TileWidgetClass;                                   // 0x3E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PremiumStorefrontWidgetBase");
		return Clss;
	}

	void HandleTileWidgetSelected(class UVALUI_PremiumStorefrontTileWidgetBase* InTile);
	void HandleTileSelected(struct FVALUI_PremiumStorefrontWidgetModel& InModel);
	void HandleStorefrontError();
	void HandleStorefrontAvailable(struct FVALUI_PremiumStorefrontResponse& InResponse);
	bool FetchStorefront();
	void CreateStorefrontGrid(int32 InWidgetsPerRow, TArray<struct FVALUI_PremiumStorefrontWidgetModel>& InModels);
};

// 0x78 (0x550 - 0x4D8)
// Class ValeriaUI.VALUI_PremiumStoreScreenWidgetBase
class UVALUI_PremiumStoreScreenWidgetBase : public UVALUI_ModalWidgetBase
{
public:
	uint8                                        Pad_27F1[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStudioStateChanged;                              // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PremiumStoreScreenWidgetBase");
		return Clss;
	}

	void OnStateChanged__DelegateSignature(class UVALUI_PremiumStoreScreenWidgetBase* InStoreWidget, enum class EVALUI_PremiumStoreState InState);
	void HandleOnStateChanged(enum class EVALUI_PremiumStoreState InState);
	void HandleBackAction(const struct FInputActionValue& InActionValue, float InElapsedTime, float InTriggeredTime);
	void GoToPremiumStoreState(enum class EVALUI_PremiumStoreState InNewState);
	enum class EVALUI_PremiumStoreState GetPremiumStoreState();
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_PremiumStoreFunctionLibrary
class UVALUI_PremiumStoreFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PremiumStoreFunctionLibrary");
		return Clss;
	}

	struct FVAL_CharacterCustomization_PetPurchaseBonus GetPetPurchaseBonusFromPurchaseRewards(struct FVALUI_PremiumStorefrontPurchaseRewards& InPurchaseRewards);
	TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>> GetNewPetsForBonusReceivedModal(struct FVAL_CharacterCustomization_PetPurchaseBonus& InPetPurchaseBonus, TSet<struct FGuid>& InNewEntitlements);
};

// 0x0 (0x1A8 - 0x1A8)
// Class ValeriaUI.VALUI_PremiumStoreWebBrowser
class UVALUI_PremiumStoreWebBrowser : public UWebBrowser
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_PremiumStoreWebBrowser");
		return Clss;
	}

};

// 0x2A0 (0x2D0 - 0x30)
// Class ValeriaUI.VALUI_ProgressBarStyle
class UVALUI_ProgressBarStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FProgressBarStyle                     WidgetStyle;                                       // 0x30(0x290)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             BorderPadding;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ProgressBarStyle");
		return Clss;
	}

	void Apply(class UProgressBar* InProgressBar);
};

// 0x8 (0x440 - 0x438)
// Class ValeriaUI.VALUI_ProgressBar_Styled
class UVALUI_ProgressBar_Styled : public UProgressBar
{
public:
	class UVALUI_ProgressBarStyle*               Style;                                             // 0x438(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ProgressBar_Styled");
		return Clss;
	}

	void SetProgressBarStyle(class UVALUI_ProgressBarStyle* InNewStyle);
};

// 0x210 (0x360 - 0x150)
// Class ValeriaUI.VALUI_RadioSlider
class UVALUI_RadioSlider : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSliderAnimationStarted;                          // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSliderAnimationCompleted;                        // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSliderWidgetCreated;                             // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnElementWidgetCreated;                            // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPageChanged;                                     // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               SliderWidgetClass;                                 // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UUserWidget>               ElementWidgetClass;                                // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ElementCount;                                      // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SliderIndex;                                       // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVALUI_RadioSliderPaginationSettings  PaginationSettings;                                // 0x1B8(0x98)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                        SliderAnimationTime;                               // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2841[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    SliderAnimationCurve;                              // 0x258(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               ElementPadding;                                    // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UUserWidget*                           SliderWidget;                                      // 0x2F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<int32, class UUserWidget*>              ElementWidgetsTable;                               // 0x2F8(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2844[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_RadioSlider");
		return Clss;
	}

	void TryIncrementPage();
	void TryDecrementPage();
	void SetIndex(int32 InIndex, bool InbSkipSliderAnimation);
	void OnSliderWidgetCreated__DelegateSignature(class UUserWidget* InSliderWidget);
	void OnSliderChanged__DelegateSignature(class UUserWidget* InPreviousElementWidget, int32 InPreviousElementIndex, class UUserWidget* InNewElementWidget, int32 InNewElementIndex);
	void OnPageChanged__DelegateSignature(int32 InPageIndex, int32 InTotalNumPages);
	void OnElementWidgetCreated__DelegateSignature(class UUserWidget* InElementWidget, int32 InElementIndex);
	class UUserWidget* GetWidgetAtIndex(int32 InIndex);
	int32 GetTotalNumPages();
	class UUserWidget* GetSliderWidget();
	bool GetIndexFromWidget(class UUserWidget* InWidget, int32* InIndex);
	TMap<int32, class UUserWidget*> GetElementWidgetsTable();
	int32 GetCurrentPageIndex();
	int32 GetCurrentIndex();
	void BuildElementsAndSlider();
};

// 0x360 (0x390 - 0x30)
// Class ValeriaUI.VALUI_RichTextBlockStyle
class UVALUI_RichTextBlockStyle : public UVALUI_WidgetStyleBase
{
public:
	class UDataTable*                            TextStyleSet;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class URichTextBlockDecorator>> DecoratorClasses;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultStyle;                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       DefaultTextStyleOverride;                          // 0x50(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_RichTextBlockStyle");
		return Clss;
	}

	void ApplyToTextBlock(class URichTextBlock* InTextWidget);
};

// 0x10 (0x880 - 0x870)
// Class ValeriaUI.VALUI_RichTextBlock_Styled
class UVALUI_RichTextBlock_Styled : public URichTextBlock
{
public:
	class UVALUI_RichTextBlockStyle*             Style;                                             // 0x870(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_RichTextBlock_Styled");
		return Clss;
	}

	void SetTextBlockStyle(class UVALUI_RichTextBlockStyle* InNewStyle);
};

// 0xAE0 (0xB10 - 0x30)
// Class ValeriaUI.VALUI_ScrollBoxStyle
class UVALUI_ScrollBoxStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FScrollBoxStyle                       WidgetStyle;                                       // 0x30(0x350)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x380(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             ScrollbarThickness;                                // 0xAF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ScrollbarPadding;                                  // 0xB00(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ScrollBoxStyle");
		return Clss;
	}

	void ApplyToScrollBox(class UScrollBox* InScrollBox);
};

// 0x8 (0xCA0 - 0xC98)
// Class ValeriaUI.VALUI_ScrollBox_Styled
class UVALUI_ScrollBox_Styled : public UScrollBox
{
public:
	class UVALUI_ScrollBoxStyle*                 Style;                                             // 0xC98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_ScrollBox_Styled");
		return Clss;
	}

	void SetScrollBoxStyle(class UVALUI_ScrollBoxStyle* InNewStyle);
};

// 0x38 (0x70 - 0x38)
// Class ValeriaUI.VALUI_Settings
class UVALUI_Settings : public UDeveloperSettings
{
public:
	TSubclassOf<class UUserWidget>               ToolTipWidgetClass;                                // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveFloat>            RadioSliderDefaultAnimCurve;                       // 0x40(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_Settings");
		return Clss;
	}

};

// 0x500 (0x530 - 0x30)
// Class ValeriaUI.VALUI_SliderStyle
class UVALUI_SliderStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FSliderStyle                          WidgetStyle;                                       // 0x30(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_SliderStyle");
		return Clss;
	}

	void Apply(class USlider* InSlider);
};

// 0x10 (0x710 - 0x700)
// Class ValeriaUI.VALUI_Slider_Styled
class UVALUI_Slider_Styled : public USlider
{
public:
	class UVALUI_SliderStyle*                    Style;                                             // 0x700(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2855[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_Slider_Styled");
		return Clss;
	}

	void SetSliderStyle(class UVALUI_SliderStyle* InNewStyle);
};

// 0x10 (0x4B0 - 0x4A0)
// Class ValeriaUI.VALUI_SocialPanelBase
class UVALUI_SocialPanelBase : public US6UI_InputActionHandlingUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnToggleDebugSimulation;                           // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_SocialPanelBase");
		return Clss;
	}

	void ToggleDebugSimulation__DelegateSignature(bool InbDisplay);
	class FString GetDebugSimulationFlag();
};

// 0x30 (0x4D0 - 0x4A0)
// Class ValeriaUI.VALUI_LobbyScreenUserWidget
class UVALUI_LobbyScreenUserWidget : public US6UI_InputActionHandlingUserWidget
{
public:
	FMulticastInlineDelegateProperty_            EventUpdateSelectedCharacter;                      // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventOnPlayButtonClicked;                          // 0x4B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventOnCancelLoginQueueButtonClicked;              // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_LobbyScreenUserWidget");
		return Clss;
	}

};

// 0x0 (0x4D8 - 0x4D8)
// Class ValeriaUI.VALUI_StateUserWidget_PregameHUD
class UVALUI_StateUserWidget_PregameHUD : public US6UI_StateUserWidget
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_StateUserWidget_PregameHUD");
		return Clss;
	}

	void SetOwner(class UVALUI_PregameUIManager* InOwner);
	void HandleOnLoginStateChanged(enum class EVALUI_LoginState InNewState);
	void HandleOnLobbyStateChanged(enum class EVALUI_LobbyState InNewState);
	void HandleOnFetchedServerStatus();
	void HandleOnCharacterCreationStateChanged(enum class EVALUI_CharacterCreationState InNewState);
	class UVALUI_LobbyScreenUserWidget* GetLobbyScreen();
	class UVALUI_CharacterCreationScreenBase* GetCharacterCreationScreen();
	void DisplayMatchmakingQueueNumber(int32 InNumber);
	void DisplayMatchmakingQueueActive(bool InbActive);
	void DisplayCharacterCreationMatchmaking();
};

// 0x78 (0x2F0 - 0x278)
// Class ValeriaUI.VALUI_TabButtonHostBase
class UVALUI_TabButtonHostBase : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDifferentActiveTabSet;                           // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVALUI_TabButtonPreregistrationInfo> PreregisteredTabsInfoArray;                        // 0x288(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  ActiveTabName;                                     // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FVALUI_InstantiatedTabButtonInfo> InstantiatedTabButtonsInfoMap;                     // 0x2A0(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_TabButtonHostBase");
		return Clss;
	}

	void UnregisterTab(class FName& InTabName);
	bool TrySetActiveTabName(class FName InTabName, bool InbForceSet);
	bool TryGetTabInfo(class FName& InTabName, struct FVALUI_InstantiatedTabButtonInfo* InOutInfo);
	void SetTabButtonVisibility(class FName& InTabName, enum class ESlateVisibility InNewVisibility);
	void RemoveTabButton(class FName& InTabName, struct FVALUI_InstantiatedTabButtonInfo& InInfo);
	void RegisterNewTab(class FName& InTabName, class FText& InTabDisplayName, class UButton* InButton, class UWidget* InAssociatedContent, TSoftObjectPtr<class UTexture2D> InIconTexture, struct FVector2D& InIconSize);
	void OnDifferentActiveTabSet__DelegateSignature(class UVALUI_TabButtonHostBase* InTabButtonHost);
	void HandleDifferentActiveTabSet(class FName InTabName);
	TArray<class FName> GetTabNames();
	class FName GetActiveTabName();
	void AddTabButton(class FName& InTabName, struct FVALUI_InstantiatedTabButtonInfo& InInfo);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_TabButtonInterface
class IVALUI_TabButtonInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_TabButtonInterface");
		return Clss;
	}

	void SetIsActiveTabButton(bool InbIsActive);
};

// 0x160 (0x190 - 0x30)
// Class ValeriaUI.VALUI_TextBlockStyle
class UVALUI_TextBlockStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FSlateColor                           ColorAndOpacity;                                   // 0x30(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_2883[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x48(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StrikeBrush;                                       // 0xA0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_TextBlockStyle");
		return Clss;
	}

	void ApplyToTextBlock(class UTextBlock* InTextWidget);
};

// 0x8 (0x340 - 0x338)
// Class ValeriaUI.VALUI_TextBlock_Styled
class UVALUI_TextBlock_Styled : public UTextBlock
{
public:
	class UVALUI_TextBlockStyle*                 Style;                                             // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_TextBlock_Styled");
		return Clss;
	}

	void SetTextBlockStyle(class UVALUI_TextBlockStyle* InNewStyle);
};

// 0x28 (0xCA0 - 0xC78)
// Class ValeriaUI.VALUI_TileView_Styled
class UVALUI_TileView_Styled : public UVALUI_ListView_Styled
{
public:
	float                                        EntryHeight;                                       // 0xC78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EntryWidth;                                        // 0xC7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EListItemAlignment                TileAlignment;                                     // 0xC80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapHorizontalNavigation;                         // 0xC81(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2887[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_TileView_Styled");
		return Clss;
	}

	void SetEntryWidth(float InNewWidth);
	void SetEntryHeight(float InNewHeight);
	float GetEntryWidth();
	float GetEntryHeight();
};

// 0x28 (0x60 - 0x38)
// Class ValeriaUI.VALUI_UButtonSlot
class UVALUI_UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2889[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_UButtonSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x4A8 (0x610 - 0x168)
// Class ValeriaUI.VALUI_UButton_Styled
class UVALUI_UButton_Styled : public UContentWidget
{
public:
	class UVALUI_ButtonStyle*                    Style;                                             // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x190(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x191(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x192(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x193(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2899[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonPressed;                                   // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonReleased;                                  // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0x1D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonDrop;                                      // 0x1E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_289A[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          WidgetStyleOverride;                               // 0x210(0x3F0)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_289B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_UButton_Styled");
		return Clss;
	}

	void VisualRelease();
	void VisualPress();
	void SetTouchMethod(enum class EButtonTouchMethod InInTouchMethod);
	void SetPressMethod(enum class EButtonPressMethod InInPressMethod);
	void SetClickMethod(enum class EButtonClickMethod InInClickMethod);
	void SetButtonStyle(struct FButtonStyle& InWidgetStyle);
	void SetButtonConfig(class UVALUI_ButtonStyle* InNewButtonStyle);
	struct FEventReply OnMouseButtonClicked(const struct FGeometry& InMyGeometry, struct FPointerEvent& InInMouseEvent);
};

// 0x0 (0x3B8 - 0x3B8)
// Class ValeriaUI.VALUI_UIManagerHUDBase
class AVALUI_UIManagerHUDBase : public AS6UI_UIManagerHUDBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_UIManagerHUDBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_WidgetBlueprintLibrary
class UVALUI_WidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALUI_WidgetBlueprintLibrary");
		return Clss;
	}

	void UpdateEntryWidgetTypeOnListView(class UListViewBase* InListView, TSubclassOf<class UUserWidget> InEntryWidgetType);
	class UObject* GetOuterForConstructingNativeWidget(class UUserWidget* InHostUserWidget);
	class UWidget* FindOuterMostWidget(class UWidget* InBaseWidget);
	struct FEventReply CaptureMouseWithHighPrecision(struct FEventReply& InReply, class UWidget* InCapturingWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
