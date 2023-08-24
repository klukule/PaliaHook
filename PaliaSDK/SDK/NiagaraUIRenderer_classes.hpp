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

// 0x88 (0x1D8 - 0x150)
// Class NiagaraUIRenderer.NiagaraSystemWidget
class UNiagaraSystemWidget : public UWidget
{
public:
	class UNiagaraSystem*                        NiagaraSystemReference;                            // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UMaterialInterface*, class UMaterialInterface*> MaterialRemapList;                                 // 0x158(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         AutoActivate;                                      // 0x1A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TickWhenPaused;                                    // 0x1A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FakeDepthScale;                                    // 0x1AA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1472[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FakeDepthScaleDistance;                            // 0x1AC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowDebugSystemInWorld;                            // 0x1B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisableWarnings;                                   // 0x1B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1475[0x16];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class ANiagaraUIActor*                       NiagaraActor;                                      // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraUIComponent*                   NiagaraComponent;                                  // 0x1D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSystemWidget");
		return Clss;
	}

	void UpdateTickWhenPaused(bool InNewTickWhenPaused);
	void UpdateNiagaraSystemReference(class UNiagaraSystem* InNewNiagaraSystem);
	class UNiagaraUIComponent* GetNiagaraComponent();
	void DeactivateSystem();
	void ActivateSystem(bool InReset);
};

// 0x0 (0x290 - 0x290)
// Class NiagaraUIRenderer.NiagaraUIActor
class ANiagaraUIActor : public AActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraUIActor");
		return Clss;
	}

};

// 0x10 (0x7E0 - 0x7D0)
// Class NiagaraUIRenderer.NiagaraUIComponent
class UNiagaraUIComponent : public UNiagaraComponent
{
public:
	uint8                                        Pad_1477[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraUIComponent");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
