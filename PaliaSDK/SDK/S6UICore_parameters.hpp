#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// Function S6UICore.S6UI_AsyncAction_OpenModal.OpenModal
struct US6UI_AsyncAction_OpenModal_OpenModal_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class US6UI_ModalWidgetBase>   WidgetClass;                                       // 0x8(0x30)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class US6UI_AsyncAction_OpenModal*           ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction S6UICore.S6UI_AsyncAction_OpenModal.OnOpened__DelegateSignature
struct US6UI_AsyncAction_OpenModal_OnOpened__DelegateSignature_Params
{
public:
	class US6UI_ModalWidgetBase*                 ModalWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction S6UICore.S6UI_AsyncAction_OpenModal.OnFailed__DelegateSignature
struct US6UI_AsyncAction_OpenModal_OnFailed__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.SetWantsCursor
struct US6UI_ModalWidgetBase_SetWantsCursor_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction S6UICore.S6UI_ModalWidgetBase.OnStartedClosing__DelegateSignature
struct US6UI_ModalWidgetBase_OnStartedClosing__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction S6UICore.S6UI_ModalWidgetBase.OnFinishedOpening__DelegateSignature
struct US6UI_ModalWidgetBase_OnFinishedOpening__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction S6UICore.S6UI_ModalWidgetBase.OnFinishedClosing__DelegateSignature
struct US6UI_ModalWidgetBase_OnFinishedClosing__DelegateSignature_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.HandleStartOpening_BP
struct US6UI_ModalWidgetBase_HandleStartOpening_BP_Params
{
public:
	bool                                         bOutHasLatentOpeningLogic;                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.HandleStartClosing_BP
struct US6UI_ModalWidgetBase_HandleStartClosing_BP_Params
{
public:
	bool                                         bPermitLatentClosing;                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutHasLatentClosingLogic;                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.HandleOpened_BP
struct US6UI_ModalWidgetBase_HandleOpened_BP_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.HandleInputAction_UIBack_Triggered
struct US6UI_ModalWidgetBase_HandleInputAction_UIBack_Triggered_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ElapsedTime;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggeredTime;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          SourceAction;                                      // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.HandleClosed_BP
struct US6UI_ModalWidgetBase_HandleClosed_BP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.GetModalWidgetState
struct US6UI_ModalWidgetBase_GetModalWidgetState_Params
{
public:
	enum class ES6UI_ModalWidgetState            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.FinishOpening
struct US6UI_ModalWidgetBase_FinishOpening_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.FinishClosing
struct US6UI_ModalWidgetBase_FinishClosing_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_ModalWidgetBase.CanClose
struct US6UI_ModalWidgetBase_CanClose_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.SetAutoEdgeEscapeDirections
struct US6UI_CustomNavigationGroup_SetAutoEdgeEscapeDirections_Params
{
public:
	TArray<enum class EUINavigation>             InEdgeEscapeDirections;                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction S6UICore.S6UI_CustomNavigationGroup.OnIsWidgetValiedToNavigate__DelegateSignature
struct US6UI_CustomNavigationGroup_OnIsWidgetValiedToNavigate__DelegateSignature_Params
{
public:
	class UObject*                               NavObject;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// DelegateFunction S6UICore.S6UI_CustomNavigationGroup.OnCustomNavigationGroupTransitionEvent__DelegateSignature
struct US6UI_CustomNavigationGroup_OnCustomNavigationGroupTransitionEvent__DelegateSignature_Params
{
public:
	enum class EUINavigation                     InNavigationType;                                  // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class US6UI_CustomNavigationGroup*           InOriginNavigationGroup;                           // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InOriginWidgetIndex;                               // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InTargetWidgetIndex;                               // 0x14(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8D4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// DelegateFunction S6UICore.S6UI_CustomNavigationGroup.OnCustomNavigationGroupInitialized__DelegateSignature
struct US6UI_CustomNavigationGroup_OnCustomNavigationGroupInitialized__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.NavigateToTargetWidget
struct US6UI_CustomNavigationGroup_NavigateToTargetWidget_Params
{
public:
	int32                                        InTargetWidgetIndex;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDelayActive;                                      // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E7[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.EnableAutoEdgeEscape
struct US6UI_CustomNavigationGroup_EnableAutoEdgeEscape_Params
{
public:
	bool                                         bInAutoEdgeEscape;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.DelayExcuteNavigationFromParentGroup
struct US6UI_CustomNavigationGroup_DelayExcuteNavigationFromParentGroup_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.ClearNavigationGroupTransitionDatas
struct US6UI_CustomNavigationGroup_ClearNavigationGroupTransitionDatas_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.ClearNavigationData
struct US6UI_CustomNavigationGroup_ClearNavigationData_Params
{
public:
	bool                                         bInClearNavWidgets;                                // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.BuildNavigation
struct US6UI_CustomNavigationGroup_BuildNavigation_Params
{
public:
	bool                                         bInImmediately;                                    // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.AddNavWidgets
struct US6UI_CustomNavigationGroup_AddNavWidgets_Params
{
public:
	TArray<class UWidget*>                       InWidgetArray;                                     // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInBuildNavigationImmediately;                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_919[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.AddNavigationGroupTransitionData
struct US6UI_CustomNavigationGroup_AddNavigationGroupTransitionData_Params
{
public:
	struct FS6UI_NavigationGroupTranstionData    InTransitionData;                                  // 0x0(0x48)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bInBidirectional;                                  // 0x48(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_925[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.AddNavExplicitData
struct US6UI_CustomNavigationGroup_AddNavExplicitData_Params
{
public:
	struct FS6UI_NavExplicitData                 InNavExplicitData;                                 // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_CustomNavigationGroup.ActiveNavigationGroup
struct US6UI_CustomNavigationGroup_ActiveNavigationGroup_Params
{
public:
	bool                                         bDelayActive;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_933[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InAutoSelectNavWidgetID;                           // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_InputActionHandlingWidgetComponent.UnregisterInputActionBinding
struct US6UI_InputActionHandlingWidgetComponent_UnregisterInputActionBinding_Params
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_InputActionHandlingWidgetComponent.SetIsEnabled
struct US6UI_InputActionHandlingWidgetComponent_SetIsEnabled_Params
{
public:
	bool                                         bValue;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function S6UICore.S6UI_InputActionHandlingWidgetComponent.RegisterInputActionBinding
struct US6UI_InputActionHandlingWidgetComponent_RegisterInputActionBinding_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerEvent                     TriggerEventType;                                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           Delegate;                                          // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x1C(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_96D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction S6UICore.S6UI_InputActionHandlingWidgetComponent.OnInputActionBindingsChanged__DelegateSignature
struct US6UI_InputActionHandlingWidgetComponent_OnInputActionBindingsChanged__DelegateSignature_Params
{
public:
	class US6UI_InputActionHandlingWidgetComponent* AffectedComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction S6UICore.S6UI_InputActionHandlingWidgetComponent.OnEnabledStateChanged__DelegateSignature
struct US6UI_InputActionHandlingWidgetComponent_OnEnabledStateChanged__DelegateSignature_Params
{
public:
	class US6UI_InputActionHandlingWidgetComponent* AffectedComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_InputActionHandlingWidgetComponent.GetRegisteredInputActionBindings
struct US6UI_InputActionHandlingWidgetComponent_GetRegisteredInputActionBindings_Params
{
public:
	TArray<struct FS6UI_RegisteredInputActionBinding> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_InputActionHandlingWidgetInterface.GetInputActionHandlingComponent
struct IS6UI_InputActionHandlingWidgetInterface_GetInputActionHandlingComponent_Params
{
public:
	class US6UI_InputActionHandlingWidgetComponent* ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_InputRouterSubsystem.UnregisterInputActionHandler
struct US6UI_InputRouterSubsystem_UnregisterInputActionHandler_Params
{
public:
	class US6UI_InputActionHandlingWidgetComponent* InputActionHandler;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_InputRouterSubsystem.RegisterInputActionHandler
struct US6UI_InputRouterSubsystem_RegisterInputActionHandler_Params
{
public:
	class US6UI_InputActionHandlingWidgetComponent* InputActionHandler;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_InputRouterSubsystem.HandleInputActionHandlingComponentEnabledStateChanged
struct US6UI_InputRouterSubsystem_HandleInputActionHandlingComponentEnabledStateChanged_Params
{
public:
	class US6UI_InputActionHandlingWidgetComponent* AffectedComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_InputRouterSubsystem.HandleInputActionHandlingComponentBindingsChanged
struct US6UI_InputRouterSubsystem_HandleInputActionHandlingComponentBindingsChanged_Params
{
public:
	class US6UI_InputActionHandlingWidgetComponent* AffectedComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_StateUserWidget.GetViewModelContext
struct US6UI_StateUserWidget_GetViewModelContext_Params
{
public:
	struct FMVVMViewModelContext                 ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_StateUserWidget.GetViewModel
struct US6UI_StateUserWidget_GetViewModel_Params
{
public:
	class US6UI_StateViewModel*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_StateUserWidget.GetInputMode
struct US6UI_StateUserWidget_GetInputMode_Params
{
public:
	struct FS6UI_InputMode                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6UICore.S6UI_ToolTipWidgetInterface.UpdateToolTipText
struct IS6UI_ToolTipWidgetInterface_UpdateToolTipText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_ToolTipWidgetInterface.HandleOnOpening
struct IS6UI_ToolTipWidgetInterface_HandleOnOpening_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_ToolTipWidgetInterface.HandleOnClosed
struct IS6UI_ToolTipWidgetInterface_HandleOnClosed_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.RemoveModalWidget
struct US6UI_UIManagerWidgetBase_RemoveModalWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.RemoveLoadingScreenWidget
struct US6UI_UIManagerWidgetBase_RemoveLoadingScreenWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.PushState
struct US6UI_UIManagerWidgetBase_PushState_Params
{
public:
	class US6UI_StateUserWidget*                 StateWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.PopState
struct US6UI_UIManagerWidgetBase_PopState_Params
{
public:
	class US6UI_StateUserWidget*                 StateWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.OpenModalWidget
struct US6UI_UIManagerWidgetBase_OpenModalWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.IsModalWidgetActive
struct US6UI_UIManagerWidgetBase_IsModalWidgetActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.HandleOnStateInputModeChanged
struct US6UI_UIManagerWidgetBase_HandleOnStateInputModeChanged_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFieldNotificationId                  Field;                                             // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.GetUIManagerWidget
struct US6UI_UIManagerWidgetBase_GetUIManagerWidget_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class US6UI_UIManagerWidgetBase*             ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.GetCurrentStateWidget
struct US6UI_UIManagerWidgetBase_GetCurrentStateWidget_Params
{
public:
	class US6UI_StateUserWidget*                 ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.GetCurrentStateViewModel
struct US6UI_UIManagerWidgetBase_GetCurrentStateViewModel_Params
{
public:
	class US6UI_StateViewModel*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.ForceCloseAllModalWidgets
struct US6UI_UIManagerWidgetBase_ForceCloseAllModalWidgets_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.DeactivateTopModalWidget
struct US6UI_UIManagerWidgetBase_DeactivateTopModalWidget_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.DeactivateModalWidget
struct US6UI_UIManagerWidgetBase_DeactivateModalWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.CreateDefaultStateWidget
struct US6UI_UIManagerWidgetBase_CreateDefaultStateWidget_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.CloseTopModalWidget
struct US6UI_UIManagerWidgetBase_CloseTopModalWidget_Params
{
public:
	bool                                         bShouldForceClose;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPermitLatentClosing;                              // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.CloseModalWidget
struct US6UI_UIManagerWidgetBase_CloseModalWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldForceClose;                                 // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPermitLatentClosing;                              // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAC[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.AddLoadingScreenWidget
struct US6UI_UIManagerWidgetBase_AddLoadingScreenWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerWidgetBase.ActivateModalWidget
struct US6UI_UIManagerWidgetBase_ActivateModalWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_UIManagerHUDBase.GetUIManagerWidget
struct AS6UI_UIManagerHUDBase_GetUIManagerWidget_Params
{
public:
	class US6UI_UIManagerWidgetBase*             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function S6UICore.S6UI_UIManagerCrossPlatformHelper.RedirectStateType
struct US6UI_UIManagerCrossPlatformHelper_RedirectStateType_Params
{
public:
	TSoftClassPtr<class US6UI_StateUserWidget>   DefaultStateType;                                  // 0x0(0x30)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class US6UI_StateUserWidget>   ReturnValue;                                       // 0x30(0x30)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function S6UICore.S6UI_UIManagerCrossPlatformHelper.RedirectModalType
struct US6UI_UIManagerCrossPlatformHelper_RedirectModalType_Params
{
public:
	TSoftClassPtr<class US6UI_ModalWidgetBase>   DefaultModalType;                                  // 0x0(0x30)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class US6UI_ModalWidgetBase>   ReturnValue;                                       // 0x30(0x30)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function S6UICore.S6UI_Utils.SummonContextMenuAtPosition
struct US6UI_Utils_SummonContextMenuAtPosition_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ParentWidget;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               ContentWidgetClass;                                // 0x20(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6UI_ContextMenu                     OutContextMenu;                                    // 0x28(0x20)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function S6UICore.S6UI_Utils.SummonContextMenu
struct US6UI_Utils_SummonContextMenu_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x8(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               ContentWidgetClass;                                // 0xA0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6UI_ContextMenu                     OutContextMenu;                                    // 0xA8(0x20)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B23[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_Utils.IsShowCommonUI
struct US6UI_Utils_IsShowCommonUI_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function S6UICore.S6UI_Utils.GetContextMenuContentWidget
struct US6UI_Utils_GetContextMenuContentWidget_Params
{
public:
	struct FS6UI_ContextMenu                     ContextMenu;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UUserWidget*                           ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function S6UICore.S6UI_Utils.DismissContextMenu
struct US6UI_Utils_DismissContextMenu_Params
{
public:
	struct FS6UI_ContextMenu                     ContextMenu;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6UICore.S6UI_Utils.AreCapsLocked
struct US6UI_Utils_AreCapsLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_StateStatics.PushState
struct US6UI_StateStatics_PushState_Params
{
public:
	class US6UI_StateUserWidget*                 Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICore.S6UI_StateStatics.PopState
struct US6UI_StateStatics_PopState_Params
{
public:
	class US6UI_StateUserWidget*                 Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function S6UICore.S6UI_StateStatics.CreateInputMode_UIOnly
struct US6UI_StateStatics_CreateInputMode_UIOnly_Params
{
public:
	class UWidget*                               WidgetToFocus;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6UI_MouseLockMode               MouseLockMode;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCursor;                                       // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B58[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS6UI_InputMode                       ReturnValue;                                       // 0xC(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B59[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function S6UICore.S6UI_StateStatics.CreateInputMode_GameOnly
struct US6UI_StateStatics_CreateInputMode_GameOnly_Params
{
public:
	struct FS6UI_InputMode                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function S6UICore.S6UI_StateStatics.CreateInputMode_GameAndUI
struct US6UI_StateStatics_CreateInputMode_GameAndUI_Params
{
public:
	class UWidget*                               WidgetToFocus;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6UI_MouseLockMode               MouseLockMode;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideCursorDuringCapture;                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowCursor;                                       // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B72[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS6UI_InputMode                       ReturnValue;                                       // 0xC(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B73[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


