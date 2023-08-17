#pragma once

#include <SDK.hpp>
#include <vector>

namespace SDK
{
	UEngine* GetEngine() {
		static UEngine* GEngine = nullptr;

		if (!GEngine)
		{
			for (int i = 0; i < UObject::GObjects->Num(); i++)
			{
				UObject* Obj = UObject::GObjects->GetByIndex(i);

				if (!Obj)
					continue;

				if (Obj->IsA(UEngine::StaticClass()) && !Obj->IsDefaultObject())
					GEngine = static_cast<UEngine*>(Obj);
			}
		}

		return GEngine;
	}

	template<typename UEType = UObject>
	std::vector<UEType*> FindObjectsOfType()
	{
		std::vector<UEType*> Objects;
		UClass* Class = UEType::StaticClass();
		for (int i = 0; i < UObject::GObjects->Num(); ++i)
		{
			UObject* Obj = UObject::GObjects->GetByIndex(i);

			if (!Obj || !Obj->IsValidLowLevel()) // TODO: Figure out why sometimes we get 0xffffffffffffffff
				continue;

			if (Obj->IsA(Class) && !Obj->IsDefaultObject())
				Objects.push_back(static_cast<UEType*>(Obj));
		}

		return Objects;
	}

	template<typename UEType = AActor>
	std::vector<UEType*> FindActorsOfType(UWorld* WorldContext)
	{
		std::vector<UEType*> Actors;

		if (!WorldContext || !WorldContext->IsValidLowLevel()) return Actors;

		UClass* Class = UEType::StaticClass();
		TArray<AActor*> WorldActors = WorldContext->PersistentLevel->Actors;
		for (int i = 0; i < WorldActors.Num(); ++i)
		{
			AActor* Actor = WorldActors[i];

			if (!Actor || !Actor->IsValidLowLevel()) // TODO: Figure out why sometimes we get 0xffffffffffffffff
				continue;

			if (Actor->IsA(Class) && !Actor->IsDefaultObject())
				Actors.push_back(static_cast<UEType*>(Actor));
		}

		return Actors;
	}

	UWorld* GetWorld() {
		if (UEngine* Engine = GetEngine()) {
			if (!Engine->GameViewport)
				return nullptr;
			return Engine->GameViewport->World;
		}
		return nullptr;
	}
}