#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESlateVisibility : uint8
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5,
};

enum class EVirtualKeyboardType : uint8
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6,
};

enum class ESlateAccessibleBehavior : uint8
{
	ESlateAccessibleBehavior__NotAccessible = 0,
	ESlateAccessibleBehavior__Auto = 1,
	ESlateAccessibleBehavior__Summary = 2,
	ESlateAccessibleBehavior__Custom = 3,
	ESlateAccessibleBehavior__ToolTip = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX = 5,
};

enum class EWidgetAnimationEvent : uint8
{
	EWidgetAnimationEvent__Started = 0,
	EWidgetAnimationEvent__Finished = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX = 2,
};

enum class EUMGSequencePlayMode : uint8
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3,
};

enum class EWidgetTickFrequency : uint8
{
	EWidgetTickFrequency__Never    = 0,
	EWidgetTickFrequency__Auto     = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX = 2,
};

enum class ESlateSizeRule : uint8
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2,
};

enum class EDynamicBoxType : uint8
{
	EDynamicBoxType__Horizontal    = 0,
	EDynamicBoxType__Vertical      = 1,
	EDynamicBoxType__Wrap          = 2,
	EDynamicBoxType__VerticalWrap  = 3,
	EDynamicBoxType__Radial        = 4,
	EDynamicBoxType__Overlay       = 5,
	EDynamicBoxType__EDynamicBoxType_MAX = 6,
};

enum class EWidgetDesignFlags : uint8
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 4,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 5,
};

enum class EWidgetSpace : uint8
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2,
};

enum class EWidgetTimingPolicy : uint8
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2,
};

enum class EWidgetBlendMode : uint8
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3,
};

enum class EWidgetGeometryMode : uint8
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2,
};

enum class EWindowVisibility : uint8
{
	EWindowVisibility__Visible     = 0,
	EWindowVisibility__SelfHitTestInvisible = 1,
	EWindowVisibility__EWindowVisibility_MAX = 2,
};

enum class ETickMode : uint8
{
	ETickMode__Disabled            = 0,
	ETickMode__Enabled             = 1,
	ETickMode__Automatic           = 2,
	ETickMode__ETickMode_MAX       = 3,
};

enum class EWidgetInteractionSource : uint8
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4,
};

enum class EDragPivot : uint8
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10,
};

enum class EBindingKind : uint8
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct UMG.FieldNotificationId
struct FFieldNotificationId
{
public:
	class FName                                  FieldName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct UMG.EventReply
struct FEventReply
{
public:
	uint8                                        Pad_1133[0xB8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct UMG.WidgetTransform
struct FWidgetTransform
{
public:
	struct FVector2D                             Translation;                                       // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Shear;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1137[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x3 - 0x0)
// ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions
{
public:
	uint8                                        bOverride_TextShapingMethod : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_TextFlowDirection : 1;                   // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_AF : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class ETextShapingMethod                TextShapingMethod;                                 // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextFlowDirection                TextFlowDirection;                                 // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct UMG.PaintContext
struct FPaintContext
{
public:
	uint8                                        Pad_113B[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct UMG.AnimationEventBinding
struct FAnimationEventBinding
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWidgetAnimationEvent             AnimationEvent;                                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UserTag;                                           // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_113E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Content;                                           // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct UMG.SlateChildSize
struct FSlateChildSize
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateSizeRule                    SizeRule;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1143[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// ScriptStruct UMG.UserWidgetPool
struct FUserWidgetPool
{
public:
	TArray<class UUserWidget*>                   ActiveWidgets;                                     // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UUserWidget*>                   InactiveWidgets;                                   // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1144[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct UMG.RadialBoxSettings
struct FRadialBoxSettings
{
public:
	float                                        StartingAngle;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDistributeItemsEvenly;                            // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AngleBetweenItems;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SectorCentralAngle;                                // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData
{
public:
	enum class EUINavigationRule                 Rule;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_114E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  WidgetToFocus;                                     // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UWidget>                Widget;                                            // 0xC(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           CustomDelegate;                                    // 0x14(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct UMG.MovieScene2DTransformMask
struct FMovieScene2DTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct UMG.SequenceTickManagerWidgetData
struct FSequenceTickManagerWidgetData
{
public:
	uint8                                        Pad_1153[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding
{
public:
	class FName                                  WidgetName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotWidgetName;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AnimationGuid;                                     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRootWidget;                                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1156[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct FBlueprintWidgetAnimationDelegateBinding
{
public:
	enum class EWidgetAnimationEvent             Action;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnimationToBind;                                   // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionNameToBind;                                // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UserTag;                                           // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x28 - 0x28)
// ScriptStruct UMG.DynamicPropertyPath
struct FDynamicPropertyPath : public FCachedPropertyPath
{
public:
};

// 0x48 (0x48 - 0x0)
// ScriptStruct UMG.GameViewportWidgetSlot
struct FGameViewportWidgetSlot
{
public:
	struct FAnchors                              Anchors;                                           // 0x0(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               Offsets;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Alignment;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZOrder;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1163[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct UMG.AnchorData
struct FAnchorData
{
public:
	struct FMargin                               Offsets;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FAnchors                              Anchors;                                           // 0x10(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Alignment;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x348 (0x350 - 0x8)
// ScriptStruct UMG.RichTextStyleRow
struct FRichTextStyleRow : public FTableRowBase
{
public:
	uint8                                        Pad_1166[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       TextStyle;                                         // 0x10(0x340)(Edit, NativeAccessSpecifierPublic)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct UMG.RichImageRow
struct FRichImageRow : public FTableRowBase
{
public:
	uint8                                        Pad_1167[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Brush;                                             // 0x10(0xD0)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0xC8 - 0xB8)
// ScriptStruct UMG.WidgetComponentInstanceData
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{
public:
	uint8                                        Pad_1169[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex
{
public:
	struct FVector2f                             Position;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                Color;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV0;                                               // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV1;                                               // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV2;                                               // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV3;                                               // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV4;                                               // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             UV5;                                               // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding
{
public:
	class FString                                ObjectName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                  SourcePath;                                        // 0x20(0x28)(NativeAccessSpecifierPublic)
	enum class EBindingKind                      Kind;                                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
