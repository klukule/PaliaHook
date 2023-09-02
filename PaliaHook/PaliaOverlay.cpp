#include "PaliaOverlay.h"
#include <imgui.h>
#include <RendererDetector.h>
#include <BaseHook.h>
#include <format>

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
SearchType GetFlagSingleEnd(std::string Text, std::map<SearchType, std::vector<std::string>>& map) {
	SearchType T = (SearchType)0;
	for (auto& Entry : map)
	{
		bool bFound = false;

		for (auto& Str : Entry.second) {
			if (Text.ends_with(Str)) {
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

std::vector<std::string> debugger;

void PaliaOverlay::CacheGatherables() {
	CachedGatherables.clear();

	// For some reason, some gatherables are blueprint only and inherit directly from AActor instead of AGatherableActor like most others do
	// And since I remove most BP generated classes from the SDK, we have to manually fetch the class
	// TODO: Clean and optimize this - since we don't have actor iterators, this is more memory efficient, but more cpu intensive than one loop

	for (AActor* Gatherable : FindActorsOfType<AGatherableActor>(GetWorld())) {
		FVector ActorPosition = Gatherable->K2_GetActorLocation();
		// HACK: Skip actors that return [0,0,0] due to the hack I had to add to K2_GetActorLocation
		if (ActorPosition.X == 0 && ActorPosition.Y == 0 && ActorPosition.Z == 0) continue;

		auto ClassName = Gatherable->Class->GetName();

		EGatherableType Type = GetFlagSingle(ClassName, GATHERABLE_TYPE_MAPPINGS);
		EGatherableSize Size = GetFlagSingle(ClassName, GATHERABLE_SIZE_MAPPINGS);
		EGatherableFlags Flags = GetFlagMulti(ClassName, GATHERABLE_FLAG_MAPPINGS);

		std::string Name = CLASS_NAME_ALIAS.contains(ClassName) ? CLASS_NAME_ALIAS[ClassName] : ClassName;


		CachedGatherables.push_back({ Gatherable, ActorPosition, Name, Type, Size, Flags });
	}

	static class UClass* Clss = nullptr;
	if (!Clss) Clss = UObject::FindClassFast("BP_ValeriaGatherable_C");

	for (AActor* Gatherable : FindActorsOfType(GetWorld(), Clss)) {
		FVector ActorPosition = Gatherable->K2_GetActorLocation();
		// HACK: Skip actors that return [0,0,0] due to the hack I had to add to K2_GetActorLocation
		if (ActorPosition.X == 0 && ActorPosition.Y == 0 && ActorPosition.Z == 0) continue;

		auto ClassName = Gatherable->Class->GetName();

		EGatherableType Type = GetFlagSingle(ClassName, GATHERABLE_TYPE_MAPPINGS);
		EGatherableSize Size = GetFlagSingle(ClassName, GATHERABLE_SIZE_MAPPINGS);
		EGatherableFlags Flags = GetFlagMulti(ClassName, GATHERABLE_FLAG_MAPPINGS);

		std::string Name = CLASS_NAME_ALIAS.contains(ClassName) ? CLASS_NAME_ALIAS[ClassName] : ClassName;


		CachedGatherables.push_back({ Gatherable, ActorPosition, Name, Type, Size, Flags });
	}

}

void PaliaOverlay::CacheCreatures()
{
	CachedCreatures.clear();
	for (ACreatureCharacter* Creature : FindActorsOfType<ACreatureCharacter>(GetWorld())) {
		auto ClassName = Creature->Class->GetName();
		std::string Name = CLASS_NAME_ALIAS.contains(ClassName) ? CLASS_NAME_ALIAS[ClassName] : ClassName;

		// Compared to gatherables we do not cache positions, as creatures can mov so we need to update their position every frame

		ECreatureType Type = GetFlagSingle(ClassName, CREATURE_TYPE_MAPPINGS);
		EBugKind BK = EBugKind::Unknown;
		EBugQuality BQ = EBugQuality::Unknown;
		ECreatureKind CK = ECreatureKind::Unknown;

		if (Type == ECreatureType::Creature) CK = GetFlagSingle(ClassName, CREATURE_KIND_MAPPINGS);
		if (Type == ECreatureType::Bug) {
			BK = GetFlagSingle(ClassName, CREATURE_BUGKIND_MAPPINGS);
			BQ = GetFlagSingleEnd(ClassName, CREATURE_BUGQUALITY_MAPPINGS);
		}

		CachedCreatures.push_back({ Creature, Name, Type, CK, BK, BQ });

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
			// TODO: Split to separate frames to avoid hitches

			LastCachedTime = WorldTime;
			CacheGatherables();
			CacheCreatures();
		}

		FVector PawnLocation = PlayerController->K2_GetPawn()->K2_GetActorLocation();

		for (FGatherableEntry& Entry : CachedGatherables) {
			double Distance = sqrt(pow(PawnLocation.X - Entry.WorldPosition.X, 2) + pow(PawnLocation.Y - Entry.WorldPosition.Y, 2) + pow(PawnLocation.Z - Entry.WorldPosition.Z, 2)) * 0.01;

			if (bEnableESPCulling && Distance > CullDistance) continue;

			FVector2D ScreenLocation;
			if (PlayerController->ProjectWorldLocationToScreen(Entry.WorldPosition, &ScreenLocation, true)) {
				ImU32 Color = Colors[(int)EESPColorSlot::Default];

				// NOTE: Probably overcomplicating, simplify
				if (Entry.Type == EGatherableType::Tree)
				{

					bool bIsCoOp = (Entry.Flags & EGatherableFlags::CoOp) == EGatherableFlags::CoOp;

					if (bIsCoOp)
						Color = Colors[(int)EESPColorSlot::CoOp];
					else
						Color = Colors[(int)EESPColorSlot::Tree];

					if (bIsCoOp && !bVisualizeCoOp) continue;
					if (!bIsCoOp && !bVisualizeTrees) continue;
				}
				else if (Entry.Type == EGatherableType::Ore)
				{
					if ((Entry.Flags & EGatherableFlags::Stone) == EGatherableFlags::Stone)
					{
						Color = Colors[(int)EESPColorSlot::Stone];
						if (!bVisualizeStone) continue;
					}
					else if ((Entry.Flags & EGatherableFlags::Copper) == EGatherableFlags::Copper)
					{
						Color = Colors[(int)EESPColorSlot::Copper];
						if (!bVisualizeCopper) continue;
					}
					else if ((Entry.Flags & EGatherableFlags::Clay) == EGatherableFlags::Clay)
					{
						Color = Colors[(int)EESPColorSlot::Clay];
						if (!bVisualizeClay) continue;
					}
					else if ((Entry.Flags & EGatherableFlags::Iron) == EGatherableFlags::Iron)
					{
						Color = Colors[(int)EESPColorSlot::Iron];
						if (!bVisualizeIron) continue;
					}
					else if ((Entry.Flags & EGatherableFlags::Silver) == EGatherableFlags::Silver)
					{
						Color = Colors[(int)EESPColorSlot::Silver];
						if (!bVisualizeSilver) continue;
					}
					else if ((Entry.Flags & EGatherableFlags::Gold) == EGatherableFlags::Gold)
					{
						Color = Colors[(int)EESPColorSlot::Gold];
						if (!bVisualizeGold) continue;
					}
					else if ((Entry.Flags & EGatherableFlags::Palium) == EGatherableFlags::Palium)
					{
						Color = Colors[(int)EESPColorSlot::Palium];
						if (!bVisualizePalium) continue;
					}
				}
				else
				{
					bool special = false;
					if ((Entry.Flags & EGatherableFlags::Spices) == EGatherableFlags::Spices) {
						Color = Colors[(int)EESPColorSlot::Spices];
						special = true;
					}

					if (!special) {

						if ((Entry.Flags & EGatherableFlags::CommonPlants) == EGatherableFlags::CommonPlants) {
							Color = Colors[(int)EESPColorSlot::CommonGradePlants];
							if (!bVisualizeCommonPlants) continue;
						}
						else if ((Entry.Flags & EGatherableFlags::UncommonPlants) == EGatherableFlags::UncommonPlants) {
							Color = Colors[(int)EESPColorSlot::UncommonGradePlants];
							if (!bVisualizeUncommonPlants) continue;
						}
						else if ((Entry.Flags & EGatherableFlags::RarePlants) == EGatherableFlags::RarePlants) {
							Color = Colors[(int)EESPColorSlot::RareGradePlants];
							if (!bVisualizeRarePlants) continue;
						}
						else if ((Entry.Flags & EGatherableFlags::EpicPlants) == EGatherableFlags::EpicPlants) {
							Color = Colors[(int)EESPColorSlot::EpicGradePlants];
							if (!bVisualizeEpicPlants) continue;
						}
						else if ((Entry.Flags & EGatherableFlags::Oyster) == EGatherableFlags::Oyster) {
							Color = Colors[(int)EESPColorSlot::Oyster];
							if (!bVisualizeOysters) continue;
						}
						else if ((Entry.Flags & EGatherableFlags::Seashell) == EGatherableFlags::Seashell) {
							Color = Colors[(int)EESPColorSlot::Seashell];
							if (!bVisualizeSeashells) continue;
						}
					}
				}


				if (Color == Colors[(int)EESPColorSlot::Default] && !bVisualizeDefault) continue;

				ImGui::AddText(pDrawList, std::format("{} [{:.2f}m]", Entry.DisplayName, Distance).data(), Color, { static_cast<float>(ScreenLocation.X), static_cast<float>(ScreenLocation.Y) });
			}
		}

		for (FCreatureEntry& Entry : CachedCreatures) {
			if (!Entry.Actor || !Entry.Actor->IsValidLowLevel()) continue;

			auto ActorPosition = Entry.Actor->K2_GetActorLocation();

			// HACK: Skip actors that return [0,0,0] due to the hack I had to add to K2_GetActorLocation
			if (ActorPosition.X == 0 && ActorPosition.Y == 0 && ActorPosition.Z == 0) continue;

			double Distance = sqrt(pow(PawnLocation.X - ActorPosition.X, 2) + pow(PawnLocation.Y - ActorPosition.Y, 2) + pow(PawnLocation.Z - ActorPosition.Z, 2)) * 0.01;

			if (bEnableESPCulling && Distance > CullDistance) continue;

			FVector2D ScreenLocation;
			if (PlayerController->ProjectWorldLocationToScreen(ActorPosition, &ScreenLocation, true)) {

				ImU32 Color = Colors[(int)EESPColorSlot::Default];

				bool bIsDefault = true;
				bool bShouldDraw = false;
				if (Entry.Type == ECreatureType::Creature) {
					bIsDefault = Entry.CreatureKind == ECreatureKind::Unknown;

					if (Entry.CreatureKind == ECreatureKind::Chapaa && bVisualizeChapaa) {
						bShouldDraw = true;
						Color = Colors[(int)EESPColorSlot::Chapaa];
					}

					if (Entry.CreatureKind == ECreatureKind::Cearnuk && bVisualizeCearnuk) {
						bShouldDraw = true;
						Color = Colors[(int)EESPColorSlot::Cearnuk];
					}
				}

				if (Entry.Type == ECreatureType::Bug && (bVisualizeCommonBugs || bVisualizeUncommonBugs || bVisualizeRareBugs || bVisualizeEpicBugs)) {
					bIsDefault = Entry.BugQuality == EBugQuality::Unknown;

					if (Entry.BugQuality == EBugQuality::Common && bVisualizeCommonBugs) {
						bShouldDraw = true;
						Color = Colors[(int)EESPColorSlot::CommonGradeBugs];
					}
					if (Entry.BugQuality == EBugQuality::Uncommon && bVisualizeUncommonBugs) {
						bShouldDraw = true;
						Color = Colors[(int)EESPColorSlot::UncommonGradeBugs];
					}
					if (Entry.BugQuality == EBugQuality::Rare && bVisualizeRareBugs) {
						bShouldDraw = true;
						Color = Colors[(int)EESPColorSlot::RareGradeBugs];
					}
					if (Entry.BugQuality == EBugQuality::Epic && bVisualizeEpicBugs) {
						bShouldDraw = true;
						Color = Colors[(int)EESPColorSlot::EpicGradeBugs];
					}
				}

				if (bIsDefault && !bVisualizeDefault) continue;
				if (!bIsDefault && !bShouldDraw) continue;

				ImGui::AddText(pDrawList, std::format("{} [{:.2f}m]", Entry.DisplayName, Distance).data(), Color, { static_cast<float>(ScreenLocation.X), static_cast<float>(ScreenLocation.Y) });
			}
		}
	}
	else {
		CachedGatherables.clear();
		CachedCreatures.clear();
	}
}

void PaliaOverlay::DrawOverlay()
{
	ImGuiIO& io = ImGui::GetIO();

	// Set the overlay windows to the size of the game window
	ImGui::SetNextWindowPos({ 20,20 });
	ImGui::SetNextWindowSize({ static_cast<float>(io.DisplaySize.x - 40), static_cast<float>(io.DisplaySize.y - 40) });

	ImGui::SetNextWindowBgAlpha(0.80f);

	bool show = true;
	BaseHook* hook = RendererDetector::Instance().GetRenderer();
	std::string WindowTitle = std::string("Overlay###Overlay - Renderer: ") + (hook == nullptr ? "Unknown" : hook->GetLibName());
	if (ImGui::Begin(WindowTitle.data(), &show, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoBringToFrontOnFocus))
	{
		static int OpenTab = 0;

		// Draw tabs
		ImGui::BeginTabBar("OverlayTabs");
		{
			if (ImGui::TabItemButton("ESP"))
				OpenTab = 0;
			if (ImGui::TabItemButton("Test Tab"))
				OpenTab = 1;
		}
		ImGui::EndTabBar();


		if (OpenTab == 0) {
			ImGui::Columns(3, nullptr, false);

			// Base ESP controls
			ImGui::BeginGroupPanel("ESP");
			{
				ImGui::Checkbox("Enable ESP", &bEnableESP);
				ImGui::Checkbox("Culling", &bEnableESPCulling);
				ImGui::InputInt("Culling Distance", &CullDistance);
				ImGui::Spacing();
				ImGui::Checkbox("Show Others", &bVisualizeDefault);
				if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) ImGui::SetTooltip("Shows other gatherables or creatures that were not successfully categorized - usually means that game has added new gatherable or a creature or I just missed stuff");
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();

			// Gatherables ESP controls
			ImGui::BeginGroupPanel("Gatherables");
			{
				ImGui::Checkbox("Show Flow Trees", &bVisualizeCoOp);
				ImGui::Checkbox("Show Trees", &bVisualizeTrees);
				ImGui::Checkbox("Show Stone", &bVisualizeStone);
				ImGui::Checkbox("Show Copper", &bVisualizeCopper);
				ImGui::Checkbox("Show Clay", &bVisualizeClay);
				ImGui::Checkbox("Show Iron", &bVisualizeIron);
				ImGui::Checkbox("Show Silver", &bVisualizeSilver);
				ImGui::Checkbox("Show Gold", &bVisualizeGold);
				ImGui::Checkbox("Show Palium", &bVisualizePalium);
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();

			ImGui::BeginGroupPanel("Creatures");
			{
				ImGui::Checkbox("Show Cearnuk", &bVisualizeCearnuk);
				ImGui::Checkbox("Show Chapaa", &bVisualizeChapaa);
				ImGui::Checkbox("Show Common Bugs", &bVisualizeCommonBugs);
				ImGui::Checkbox("Show Uncommon Bugs", &bVisualizeUncommonBugs);
				ImGui::Checkbox("Show Rare Bugs", &bVisualizeRareBugs);
				ImGui::Checkbox("Show Epic Bugs", &bVisualizeEpicBugs);
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();

			ImGui::BeginGroupPanel("Gatherables");
			{
				ImGui::Checkbox("Show Oysters", &bVisualizeOysters);
				ImGui::Checkbox("Show Seashells", &bVisualizeSeashells);
				ImGui::Checkbox("Show Spices", &bVisualizeSpices);
				ImGui::Checkbox("Show Common Plants", &bVisualizeCommonPlants);
				ImGui::Checkbox("Show Uncommon Plants", &bVisualizeUncommonPlants);
				ImGui::Checkbox("Show Rare Plants", &bVisualizeRarePlants);
				ImGui::Checkbox("Show Epic Plants", &bVisualizeEpicPlants);
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();

			ImGui::NextColumn();
			ImGui::BeginGroupPanel("Colors - General");
			{
				ImGui::ColorPicker("Others", &Colors[(int)EESPColorSlot::Default]);
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();
			ImGui::BeginGroupPanel("Colors - Gatherables");
			{
				ImGui::ColorPicker("Flow Trees", &Colors[(int)EESPColorSlot::CoOp]);
				ImGui::ColorPicker("Trees", &Colors[(int)EESPColorSlot::Tree]);
				ImGui::ColorPicker("Stone", &Colors[(int)EESPColorSlot::Stone]);
				ImGui::ColorPicker("Copper", &Colors[(int)EESPColorSlot::Copper]);
				ImGui::ColorPicker("Clay", &Colors[(int)EESPColorSlot::Clay]);
				ImGui::ColorPicker("Iron", &Colors[(int)EESPColorSlot::Iron]);
				ImGui::ColorPicker("Silver", &Colors[(int)EESPColorSlot::Silver]);
				ImGui::ColorPicker("Gold", &Colors[(int)EESPColorSlot::Gold]);
				ImGui::ColorPicker("Palium", &Colors[(int)EESPColorSlot::Palium]);
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();
			ImGui::BeginGroupPanel("Colors - Creatures");
			{
				ImGui::ColorPicker("Cearnuk", &Colors[(int)EESPColorSlot::Cearnuk]);
				ImGui::ColorPicker("Chapaa", &Colors[(int)EESPColorSlot::Chapaa]);
				ImGui::Spacing();
				ImGui::ColorPicker("Rarity - Common", &Colors[(int)EESPColorSlot::CommonGradeBugs]);
				ImGui::ColorPicker("Rarity - Uncommon", &Colors[(int)EESPColorSlot::UncommonGradeBugs]);
				ImGui::ColorPicker("Rarity - Rare", &Colors[(int)EESPColorSlot::RareGradeBugs]);
				ImGui::ColorPicker("Rarity - Epic", &Colors[(int)EESPColorSlot::EpicGradeBugs]);
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();

			ImGui::BeginGroupPanel("Colors - Gatherables");
			{
				ImGui::ColorPicker("Oysters", &Colors[(int)EESPColorSlot::Oyster]);
				ImGui::ColorPicker("Seashells", &Colors[(int)EESPColorSlot::Seashell]);
				ImGui::ColorPicker("Spices", &Colors[(int)EESPColorSlot::Spices]);
				ImGui::ColorPicker("Rarity - Common", &Colors[(int)EESPColorSlot::CommonGradePlants]);
				ImGui::ColorPicker("Rarity - Uncommon", &Colors[(int)EESPColorSlot::UncommonGradePlants]);
				ImGui::ColorPicker("Rarity - Rare", &Colors[(int)EESPColorSlot::RareGradePlants]);
				ImGui::ColorPicker("Rarity - Epic", &Colors[(int)EESPColorSlot::EpicGradePlants]);
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();

			ImGui::NextColumn();
			//ImGui::Text("Column 3");
			// TODO: Who knows what

			ImGui::Columns(1);
		}
		else if (OpenTab == 1) {
			for (auto a : debugger) {
				ImGui::Text(a.c_str());
			}
		}
	}
	ImGui::End();
	debugger.clear();
	if (!show)
		ShowOverlay(false);
}
