#include "PaliaOverlay.h"
#include <ImGui/imgui.h>
#include <RendererDetector.h>
#include <BaseHook.h>

#include "ImGuiExt.h"
#include "SDKExt.h"

using namespace SDK;

DEFINE_ENUM_FLAG_OPERATORS(EGatherableFlags)

template<typename SearchType>
SearchType GetFlagSingle(std::string Text, std::map<SearchType, std::vector<std::string>>& map) {
	SearchType T = (SearchType)0;
	for (auto& Entry : map)
	{
		bool bFound = false;

		for (auto& Str : Entry.second) {
			if (Text.find(Str) != std::string::npos) {
				T = Entry.first;
				bFound = true;
				break;
			}
		}

		if (bFound)
			break;
	}
	return T;
}

template<typename SearchType>
SearchType GetFlagMulti(std::string Text, std::map<SearchType, std::vector<std::string>>& map) {
	SearchType T = (SearchType)0;
	for (auto& Entry : map)
	{
		for (auto& Str : Entry.second) {
			if (Text.find(Str) != std::string::npos) {
				T |= Entry.first;
			}
		}
	}
	return T;
}

void PaliaOverlay::CacheGatherables() {
	CachedGatherables.clear();
	for (AGatherableActor* Gatherable : FindActorsOfType<AGatherableActor>(GetWorld())) {
		FVector ActorPosition = Gatherable->K2_GetActorLocation();

		// HACK: Skip actors that return [0,0,0] due to the hack I had to add to K2_GetActorLocation
		if (ActorPosition.X == 0 && ActorPosition.Y == 0 && ActorPosition.Z == 0) continue;

		auto ClassName = Gatherable->Class->GetName();

		EGatherableType Type = GetFlagSingle(ClassName, TYPE_MAPPINGS);
		EGatherableSize Size = GetFlagSingle(ClassName, SIZE_MAPPINGS);
		EGatherableFlags Flags = GetFlagMulti(ClassName, FLAG_MAPPINGS);

		std::string Name = CLASS_NAME_ALIAS.contains(ClassName) ? CLASS_NAME_ALIAS[ClassName] : ClassName;

		CachedGatherables.push_back({ Gatherable, ActorPosition, Name, Type, Size, Flags });
	}
}

void PaliaOverlay::DrawHUD()
{
	if (bEnableESP) {
		ImGuiIO& io = ImGui::GetIO();

		auto pDrawList = ImGui::GetBackgroundDrawList();

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
		if (abs(WorldTime - LastCachedTime) > 1.0)
		{
			LastCachedTime = WorldTime;
			CacheGatherables();
		}

		FVector PawnLocation = PlayerController->K2_GetPawn()->K2_GetActorLocation();

		for (FGatherableEntry& Entry : CachedGatherables) {
			double Distance = sqrt(pow(PawnLocation.X - Entry.WorldPosition.X, 2) + pow(PawnLocation.Y - Entry.WorldPosition.Y, 2) + pow(PawnLocation.Z - Entry.WorldPosition.Z, 2)) * 0.01;

			if (bEnableESPCulling && Distance > CullDistance) continue;

			FVector2D ScreenLocation;
			if (PlayerController->ProjectWorldLocationToScreen(Entry.WorldPosition, &ScreenLocation, true)) {
				ImColor Color = (Entry.Flags & EGatherableFlags::CoOp) == EGatherableFlags::CoOp ? ImColor(0, 0, 255) : ImColor(255, 0, 0);
				pDrawList->AddText({ static_cast<float>(ScreenLocation.X), static_cast<float>(ScreenLocation.Y) }, Color, (Entry.DisplayName + " [" + std::to_string(Distance) + " m]").data());
			}
		}
	}
	else {
		CachedGatherables.clear();
	}
}

void PaliaOverlay::DrawOverlay()
{
	ImGuiIO& io = ImGui::GetIO();

	// Set the overlay windows to the size of the game window
	ImGui::SetNextWindowPos({ 20,20 });
	ImGui::SetNextWindowSize({ static_cast<float>(io.DisplaySize.x - 40), static_cast<float>(io.DisplaySize.y - 40) });

	ImGui::SetNextWindowBgAlpha(0.50);

	bool show = true;
	BaseHook* hook = RendererDetector::Instance().GetRenderer();
	std::string WindowTitle = std::string("Overlay###Overlay - Renderer: ") + (hook == nullptr ? "Unknown" : hook->GetLibName());
	if (ImGui::Begin(WindowTitle.data(), &show, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoBringToFrontOnFocus))
	{
		static int OpenTab = 0;

		// Draw tabs
		ImGui::BeginTabBar("OverlayTabs");
		{
			// TODO: Switch to proper tabs
			/*ImGui::SameLine();
			if (ImGui::Button("ESP", { 200.0f, 25.0f })) {
				OpenTab = 0;
			}
			ImGui::SameLine();
			if (ImGui::Button("Test Tab", { 200.0f, 25.0f })) {
				OpenTab = 1;
			}*/
			if (ImGui::TabItemButton("ESP"))
				OpenTab = 0;
			if (ImGui::TabItemButton("Test Tab"))
				OpenTab = 1;
		}
		ImGui::EndTabBar();


		if (OpenTab == 0) {
			ImGui::Columns(3, nullptr, false);

			ImGui::BeginGroupPanel("ESP");

			ImGui::Checkbox("Enable ESP", &bEnableESP);
			ImGui::Checkbox("Culling", &bEnableESPCulling);
			ImGui::InputInt("Culling Distance", &CullDistance);

			ImGui::Spacing();

			ImGui::EndGroupPanel();

			ImGui::NextColumn();
			ImGui::Text("Column 2");

			ImGui::NextColumn();
			ImGui::Text("Column 3");

			ImGui::Columns(1);
		}
		else if (OpenTab == 1) {
			ImGui::Text("Test");
		}
	}
	ImGui::End();

	if (!show)
		ShowOverlay(false);
}
