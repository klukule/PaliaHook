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
// Class S6BlueprintExtensionsRuntime.S6BPFunctorObjectBase
class US6BPFunctorObjectBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6BPFunctorObjectBase");
		return Clss;
	}

	void SelfDestruct();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
