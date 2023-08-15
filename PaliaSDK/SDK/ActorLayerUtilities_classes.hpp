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
// Class ActorLayerUtilities.LayersBlueprintLibrary
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LayersBlueprintLibrary");

		return Clss;
	}

	void RemoveActorFromLayer(class AActor* InActor, struct FActorLayer& Layer);
	TArray<class AActor*> GetActors(class UObject* WorldContextObject, struct FActorLayer& ActorLayer);
	void AddActorToLayer(class AActor* InActor, struct FActorLayer& Layer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
