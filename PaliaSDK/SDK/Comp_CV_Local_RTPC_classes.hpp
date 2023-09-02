#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x2DC - 0x2B8)
// BlueprintGeneratedClass Comp_CV_Local_RTPC.Comp_CV_Local_RTPC_C
class UComp_CV_Local_RTPC_C : public UComp_CV_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APawn*                                 Local_Player;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                               RTPCValue;                                         // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       RTPC_Value;                                        // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Interpolation;                                     // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComp_CV_Local_RTPC_C* GetDefaultObj();

	void SetParameters();
	void ExecuteUbergraph_Comp_CV_Local_RTPC(int32 EntryPoint);
};

}


