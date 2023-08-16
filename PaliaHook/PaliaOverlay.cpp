#include "PaliaOverlay.h"
#include "../RendererHook/ImGui/imgui.h"
#include "../RendererHook/RendererDetector.h"
#include "../RendererHook/BaseHook.h"
#include "../PaliaSDK/SDK.hpp"
using namespace SDK;


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

static bool IsValid(UObject* Object) {
	if (Object == nullptr) return false;
	if (Object->Class == nullptr) return false;
	return UObject::GObjects->GetByIndex(Object->Index) == Object;
}

template<typename UEType = UObject>
static std::vector<UEType*> FindObjectsOfType()
{
	std::vector<UEType*> Objects;
	UClass* Class = UEType::StaticClass();
	for (int i = 0; i < UObject::GObjects->Num(); ++i)
	{
		UObject* Obj = UObject::GObjects->GetByIndex(i);

		if (!Obj)
			continue;

		if (Obj->IsA(Class) && !Obj->IsDefaultObject())
			Objects.push_back(static_cast<UEType*>(Obj));
	}

	return Objects;
}

UWorld* GetWorld() {
	if (UEngine* Engine = GetEngine()) {
		if (!Engine->GameViewport)
			return nullptr;
		return Engine->GameViewport->World;
	}
	return nullptr;
}

static std::vector<AGatherableActor*> CachedActors;
static double LastCached = 0.0f;

void PaliaOverlay::DrawHUD()
{
	ImGuiIO& io = ImGui::GetIO();

	auto pDrawList = ImGui::GetBackgroundDrawList();

	//pDrawList->AddRect({ 10, 10 }, { 100, 100 }, ImColor(255, 0, 0));
	//pDrawList->AddText(ImVec2(10, 10), ImColor(255, 0, 0), "test");

	auto World = GetWorld();
	if (!World) return;

	auto GameInstance = World->OwningGameInstance;
	if (!GameInstance) return;

	if (GameInstance->LocalPlayers.Num() == 0) return;

	ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
	if (!LocalPlayer) return;

	APlayerController* PlayerController = LocalPlayer->PlayerController;
	if (!PlayerController) return;

	double WorldTime = static_cast<UGameplayStatics*>(UGameplayStatics::StaticClass()->DefaultObject)->GetTimeSeconds(World);
	if (abs(WorldTime - LastCached) > 1.0)
	{
		LastCached = WorldTime;
		CachedActors = FindObjectsOfType<AGatherableActor>();
	}

	for (AGatherableActor* Gatherable : CachedActors) {
		if (!IsValid(Gatherable)) return;
		FVector PawnLocation = PlayerController->K2_GetPawn()->K2_GetActorLocation();
		FVector GatherableLocation = Gatherable->K2_GetActorLocation();
		float Distance = sqrt(pow(PawnLocation.X - GatherableLocation.X, 2) + pow(PawnLocation.Y - GatherableLocation.Y, 2) + pow(PawnLocation.Z - GatherableLocation.Z, 2));

		if (Distance < 200000)
			if (Gatherable->GetName().starts_with("BP_Tree")) {

				FVector2D ScreenLocation;
				if (PlayerController->ProjectWorldLocationToScreen(Gatherable->K2_GetActorLocation(), &ScreenLocation, true)) {
					pDrawList->AddText({ static_cast<float>(ScreenLocation.X), static_cast<float>(ScreenLocation.Y) }, ImColor(255, 0, 0), (Gatherable->GetName() + " [" + std::to_string(Distance * 0.01) + " m]").data());
				}
			}
	}
}

void PaliaOverlay::DrawOverlay()
{
	ImGuiIO& io = ImGui::GetIO();

	// Set the overlay windows to the size of the game window
	ImGui::SetNextWindowPos({ 0,0 });
	ImGui::SetNextWindowSize({ static_cast<float>(io.DisplaySize.x), static_cast<float>(io.DisplaySize.y) });

	ImGui::SetNextWindowBgAlpha(0.50);

	bool show = true;

	if (ImGui::Begin("Overlay", &show, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoBringToFrontOnFocus))
	{
		BaseHook* hook = RendererDetector::Instance().GetRenderer();
		ImGui::LabelText("##label", "Renderer: %s", (hook == nullptr ? "Unknown" : hook->GetLibName()));
	}
	ImGui::End();

	if (!show)
		ShowOverlay(false);
}
