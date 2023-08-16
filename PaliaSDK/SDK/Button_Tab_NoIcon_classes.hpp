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

// 0x48 (0x698 - 0x650)
// BlueprintGeneratedClass Button_Tab_NoIcon.Button_Tab_NoIcon_C
class UButton_Tab_NoIcon_C : public UVALUI_Button_Styled
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_ButtonStyle*                    ActiveTabStyle;                                    // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ButtonStyle*                    InactiveTabStyle;                                  // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GlyphColorAndOpacity_Inactive;                     // 0x668(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GlyphColorAndOpacity_Active;                       // 0x678(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PMenuTabButton_Icon_C*            Content;                                           // 0x688(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UInputAction*                          Input_Action;                                      // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_Tab_NoIcon_C");
		return Clss;
	}

	void PreConstruct(bool InIsDesignTime);
	void SetIsActiveTabButton(bool InbIsActive);
	void ExecuteUbergraph_Button_Tab_NoIcon(int32 InEntryPoint, bool InK2Node_Event_bIsActive, bool InK2Node_Event_IsDesignTime, bool InTemp_bool_Variable, class UVALUI_ButtonStyle* InK2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
