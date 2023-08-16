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
		static class UClass* Clss = UObject::FindClassFast("LayersBlueprintLibrary");
		return Clss;
	}

	void RemoveActorFromLayer(class AActor* InInActor, struct FActorLayer& InLayer);
	TArray<class AActor*> GetActors(class UObject* InWorldContextObject, struct FActorLayer& InActorLayer);
	void AddActorToLayer(class AActor* InInActor, struct FActorLayer& InLayer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
