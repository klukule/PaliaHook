#include "PaliaOverlay.h"
#include <imgui.h>
#include <RendererDetector.h>
#include <BaseHook.h>
#include <format>
#include <unordered_set>

#include "ImGuiExt.h"
#include "SDKExt.h"
#include "Utils.h"

using namespace SDK;

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

template <size_t size_x>
bool AnyTrue(bool(&arr)[size_x]) {
	for (int x = 0; x < size_x; x++) {
		if (arr[x]) return true;
	}
	return false;
}

template <size_t size_x, size_t size_y>
bool AnyTrue2D(bool(&arr)[size_x][size_y]) {
	for (int x = 0; x < size_x; x++) {
		for (int y = 0; y < size_y; y++) {
			if (arr[x][y]) return true;
		}
	}
	return false;
}

template <size_t size_x, size_t size_y, size_t size_z>
bool AnyTrue3D(bool(&arr)[size_x][size_y][size_z]) {
	for (int x = 0; x < size_x; x++) {
		for (int y = 0; y < size_y; y++) {
			for (int z = 0; z < size_z; z++) {
				if (arr[x][y][z]) return true;
			}
		}
	}
	return false;
}

void PaliaOverlay::SetupColors() {
	for (int pos : ForageableCommon) {
		ForageableColors[pos] = IM_COL32(0x0B, 0x61, 0xFF, 0xFF);
	};
	for (int pos : ForageableUncommon) {
		ForageableColors[pos] = IM_COL32(0x6F, 0xF4, 0x43, 0xFF);
	};
	for (int pos : ForageableRare) {
		ForageableColors[pos] = IM_COL32(0x21, 0x65, 0x71, 0xFF);
	};
	for (int pos : ForageableEpic) {
		ForageableColors[pos] = IM_COL32(0x69, 0x4C, 0xFF, 0xFF);
	};
	for (int i = 0; i < (int)ECreatureKind::MAX; i++) {
		AnimalColors[i][(int)ECreatureQuality::Tier1] = IM_COL32(0xd4, 0x8d, 0x70, 0xFF);
		AnimalColors[i][(int)ECreatureQuality::Tier2] = IM_COL32(0x78, 0x3e, 0x32, 0xFF);
		AnimalColors[i][(int)ECreatureQuality::Tier3] = IM_COL32(0x0d, 0x4a, 0x8e, 0xFF);
		AnimalColors[i][(int)ECreatureQuality::Chase] = IM_COL32(0xFF, 0xFF, 0xFF, 0xFF);
	};
	for (int i = 0; i < (int)EBugKind::MAX; i++) {
		BugColors[i][(int)EBugQuality::Common] = IM_COL32(0x0B, 0x61, 0xFF, 0xFF);
		BugColors[i][(int)EBugQuality::Uncommon] = IM_COL32(0x6F, 0xF4, 0x43, 0xFF);
		BugColors[i][(int)EBugQuality::Rare] = IM_COL32(0x21, 0x65, 0x71, 0xFF);
		BugColors[i][(int)EBugQuality::Rare2] = IM_COL32(0x21, 0x65, 0x71, 0xFF);
		BugColors[i][(int)EBugQuality::Epic] = IM_COL32(0x69, 0x4C, 0xFF, 0xFF);
	}
}

std::vector<std::string> debugger;

#define STATIC_CLASS(CName)						\
{												\
	static class UClass* Clss = nullptr;		\
	if (!Clss || !Clss->IsValidLowLevel())		\
		Clss = UObject::FindClassFast(CName);	\
	SearchClass = Clss;							\
}

#define STATIC_CLASS_MULT(CName)				\
{												\
	static class UClass* Clss = nullptr;		\
	if (!Clss || !Clss->IsValidLowLevel())		\
		Clss = UObject::FindClassFast(CName);	\
	SearchClasses.push_back(Clss);				\
}

void PaliaOverlay::ProcessActors(int step) {
	CachedActors.erase(
		std::remove_if(
			CachedActors.begin(), CachedActors.end(),
			[step](FEntry Entry) {return (int)Entry.ActorType == step; }),
		CachedActors.end()
	);

	auto World = GetWorld();
	EType ActorType = static_cast<EType>(step);
	std::vector<AActor*> Actors;
	UClass* SearchClass = nullptr;
	std::vector<UClass*> SearchClasses;

	/*
	* AWorldGatherableBase
	* > ATimedLootPile
	* > AWorldPersistGatherable
	* >>  BP_WorldPersistGatherableBase
	*/

	/*
	* AGatherableActor
	* > BP_ValeriaGatherableLoot_C
	* >>  BP_ValeriaGatherableLoot_Lumber_C
	* >>  BP_ValeriaGatherableLoot_Mining_C
	*/

	/*
	* ACreatureCharacter
	* > BP_ValeriaBugCatchingCreature_C
	* > BP_ValeriaHuntingCreature_C
	*/

	/*
	* BP_ValeriaGatherable_C
	* > BP_QuestItem_BASE_C
	* >>  BP_QuestItem_DropOff_C
	* >>  BP_QuestItem_Placeable_C
	* > BP_Valeria_Gatherable_Placed_C
	*/

	/*
	* BP_Loot_C
	* > BP_Hunting_LootBag_C
	* > BP_InsectBallLoot_C
	* "LootChest" items (Ores/Trees) are sadly a direct subclass of Loot
	*/

	// Check if we even need to process a type and if so select it's class

	switch (ActorType)
	{
	case EType::Tree:
		if (AnyTrue2D(Trees)) {
			STATIC_CLASS("BP_ValeriaGatherableLoot_Lumber_C");
		}
		break;
	case EType::Ore:
		if (AnyTrue2D(Ores)) {
			STATIC_CLASS("BP_ValeriaGatherableLoot_Mining_C");
		}
		break;
	case EType::Bug:
		if (AnyTrue3D(Bugs)) {
			STATIC_CLASS("BP_ValeriaBugCatchingCreature_C");
		}
		break;
	case EType::Animal:
		if (AnyTrue2D(Animals)) {
			STATIC_CLASS("BP_ValeriaHuntingCreature_C");
		}
		break;
	case EType::Forage:
		if (AnyTrue2D(Forageables)) {
			STATIC_CLASS("BP_Valeria_Gatherable_Placed_C");
		}
		break;
	case EType::Loot:
		if (Singles[(int)EOneOffs::Loot]) {
			STATIC_CLASS("BP_Loot_C");
		}
		break;
	case EType::Players:
		if (Singles[(int)EOneOffs::Player]) {
			SearchClass = AValeriaCharacter::StaticClass();
		}
		break;
	case EType::NPCs:
		if (Singles[(int)EOneOffs::NPC]) {
			SearchClass = AValeriaVillagerCharacter::StaticClass();
		}
		break;
	case EType::Quest:
		if (Singles[(int)EOneOffs::Quest]) {
			STATIC_CLASS_MULT("BP_SimpleInspect_Base_C");
			STATIC_CLASS_MULT("BP_QuestInspect_Base_C");
			STATIC_CLASS_MULT("BP_QuestItem_BASE_C");
		}
		break;
	case EType::Fish:
		if (AnyTrue(Fish)) {
			STATIC_CLASS_MULT("BP_WaterPlane_Fishing_Base_SQ_C");
			STATIC_CLASS_MULT("BP_Minigame_Fish_C");
		}
	};

	if (SearchClass) {
		Actors = FindActorsOfType(World, SearchClass);
	}

	if (!SearchClasses.empty()) {
		Actors = FindActorsOfTypes(World, SearchClasses);
	}

	for (AActor* Actor : Actors)
	{

		if (!Actor || !Actor->IsValidLowLevel() || Actor->IsDefaultObject())
			continue;

		FVector ActorPosition = Actor->K2_GetActorLocation();
		// HACK: Skip actors that return [0,0,0] due to the hack I had to add to K2_GetActorLocation
		if (ActorPosition.X == 0 && ActorPosition.Y == 0 && ActorPosition.Z == 0) continue;

		auto ClassName = Actor->Class->GetName();

		int Type = 0;
		int Quality = 0;
		int Variant = 0;

		bool shouldAdd = false;

		switch (ActorType)
		{
		case EType::Tree:
		{
			ETreeType Tree = ETreeType::Unknown;
			Tree = GetFlagSingle(ClassName, TREE_TYPE_MAPPINGS);
			if (Tree != ETreeType::Unknown) {
				EGatherableSize Size = EGatherableSize::Unknown;
				Size = GetFlagSingle(ClassName, GATHERABLE_SIZE_MAPPINGS);
				if (Size != EGatherableSize::Unknown) {
					shouldAdd = true;
					Type = (int)Tree;
					Variant = (int)Size;
				}
			}
		}
		break;
		case EType::Ore:
		{
			EOreType Ore = EOreType::Unknown;
			Ore = GetFlagSingle(ClassName, MINING_TYPE_MAPPINGS);
			if (Ore != EOreType::Unknown) {
				EGatherableSize Size = EGatherableSize::Unknown;
				Size = GetFlagSingle(ClassName, GATHERABLE_SIZE_MAPPINGS);
				if (Ore == EOreType::Clay) Size = EGatherableSize::Large;
				if (Size != EGatherableSize::Unknown) {
					shouldAdd = true;
					Type = (int)Ore;
					Variant = (int)Size;
				}
			}
		}
		break;
		case EType::Bug:
		{
			EBugKind Bug = EBugKind::Unknown;
			Bug = GetFlagSingle(ClassName, CREATURE_BUGKIND_MAPPINGS);
			if (Bug != EBugKind::Unknown) {
				EBugQuality BVar = EBugQuality::Unknown;
				BVar = GetFlagSingleEnd(ClassName, CREATURE_BUGQUALITY_MAPPINGS);
				if (BVar != EBugQuality::Unknown) {
					shouldAdd = true;
					Type = (int)Bug;
					Variant = (int)BVar;
					if (ClassName.ends_with("+_C")) {
						Quality = 1;
					}
				}
			}
		}
		break;
		case EType::Animal:
		{
			ECreatureKind CK = ECreatureKind::Unknown;
			CK = GetFlagSingle(ClassName, CREATURE_KIND_MAPPINGS);
			if (CK != ECreatureKind::Unknown) {
				ECreatureQuality CQ = ECreatureQuality::Unknown;
				CQ = GetFlagSingleEnd(ClassName, CREATURE_KINDQUALITY_MAPPINGS);
				if (CQ != ECreatureQuality::Unknown) {
					shouldAdd = true;
					Type = (int)CK;
					Variant = (int)CQ;
				}
			}
		}
		break;
		case EType::Forage:
		{
			if (!Actor->bActorEnableCollision) continue;
			EForageableType Forage = EForageableType::Unknown;
			Forage = GetFlagSingle(ClassName, FORAGEABLE_TYPE_MAPPINGS);
			if (Forage != EForageableType::Unknown) {
				shouldAdd = true;
				Type = (int)Forage;
				if (ClassName.ends_with("+_C")) {
					Quality = 1;
				}
			}
		}
		break;
		case EType::Loot:
			shouldAdd = true;
			Type = 1; // doesn't matter, but isn't "unknown"
			break;
		case EType::Players:
		{
			shouldAdd = true;
			Type = 1; // doesn't matter, but isn't "unknown"
			AValeriaCharacter* VActor = static_cast<AValeriaCharacter*>(Actor);
			ClassName = VActor->CharacterName.ToString();
		}
		break;
		case EType::NPCs:
			shouldAdd = true;
			Type = 1; // doesn't matter, but isn't "unknown"
			break;
		case EType::Quest:
			if (!Actor->bActorEnableCollision) continue;
			shouldAdd = true;
			Type = 1;
			break;
		case EType::Fish:
		{
			EFishType Fish = EFishType::Unknown;
			Fish = GetFlagSingle(ClassName, FISH_TYPE_MAPPINGS);
			if (Fish != EFishType::Unknown) {
				shouldAdd = true;
				Type = (int)Fish;
			}
		}
		break;
		};

		if (!shouldAdd && !bVisualizeDefault) continue;
		std::string Name = CLASS_NAME_ALIAS.contains(ClassName) ? CLASS_NAME_ALIAS[ClassName] : ClassName;
		CachedActors.push_back({ Actor, ActorPosition, Name, ActorType, Type, Quality, Variant });
	}
}

static void(*OriginalProcEvent)(const UObject*, class UFunction*, void*);
static void* HookedClient = nullptr;
static void* vmt = nullptr;

static std::unordered_set<std::string> invocations;

static UFont* Roboto = nullptr;

//static void TickHUD(const )

static void DrawHUD(const AHUD* HUD) {

	PaliaOverlay* Overlay = static_cast<PaliaOverlay*>(OverlayBase::Instance);
	if (Overlay->bEnableESP) {
		auto World = GetWorld();
		if (!World) return;

		// clear out cache on level change
		if (Overlay->CurrentLevel != World->PersistentLevel) {
			Overlay->CachedActors.clear();
			Overlay->CurrentLevel = World->PersistentLevel;
		}

		auto GameInstance = World->OwningGameInstance;
		if (!GameInstance) return;

		if (GameInstance->LocalPlayers.Num() == 0) return;

		ULocalPlayer* LocalPlayer = GameInstance->LocalPlayers[0];
		if (!LocalPlayer) return;

		APlayerController* PlayerController = LocalPlayer->PlayerController;
		if (!PlayerController) return;


		double WorldTime = static_cast<UGameplayStatics*>(UGameplayStatics::StaticClass()->DefaultObject)->GetTimeSeconds(World);
		if (abs(WorldTime - Overlay->LastCachedTime) > 0.1)
		{
			// TODO: Split to separate frames to avoid hitches

			Overlay->LastCachedTime = WorldTime;
			Overlay->ActorStep++;
			if (Overlay->ActorStep >= (int)EType::MAX) {
				Overlay->ActorStep = 0;
			}
			Overlay->ProcessActors(Overlay->ActorStep);
		}

		FVector PawnLocation = PlayerController->K2_GetPawn()->K2_GetActorLocation();

		for (FEntry& Entry : Overlay->CachedActors) {
			FVector ActorPosition = Entry.WorldPosition;
			if (Entry.ActorType == EType::Animal || Entry.ActorType == EType::Bug || Entry.ActorType == EType::Players) {
				if (!Entry.Actor) continue;
				if (!Entry.Actor->IsValidLowLevel() || Entry.Actor->IsDefaultObject()) continue;
				ActorPosition = Entry.Actor->K2_GetActorLocation();
			}
			if (ActorPosition.X == 0 && ActorPosition.Y == 0 && ActorPosition.Z == 0) continue;

			double Distance = sqrt(pow(PawnLocation.X - ActorPosition.X, 2) + pow(PawnLocation.Y - ActorPosition.Y, 2) + pow(PawnLocation.Z - ActorPosition.Z, 2)) * 0.01;

			if (Distance == 0.0) continue;
			if (Overlay->bEnableESPCulling && Distance > Overlay->CullDistance) continue;

			FVector2D ScreenLocation;
			if (PlayerController->ProjectWorldLocationToScreen(ActorPosition, &ScreenLocation, true)) {

				ImU32 Color = IM_COL32(0xFF, 0xFF, 0xFF, 0xFF);
				bool bShouldDraw = false;

				switch (Entry.ActorType) {
				case EType::Forage:
					if (Overlay->Forageables[Entry.Type][Entry.Quality]) {
						bShouldDraw = true;
						Color = Overlay->ForageableColors[Entry.Type];
					}
					break;
				case EType::Ore:
					if (Overlay->Ores[Entry.Type][Entry.Variant]) {
						bShouldDraw = true;
						Color = Overlay->OreColors[Entry.Type];
					}
					break;
				case EType::Players:
					if (Overlay->Singles[(int)EOneOffs::Player]) {
						bShouldDraw = true;
						Color = Overlay->SingleColors[(int)EOneOffs::Player];
					}
					break;
				case EType::Animal:
					if (Overlay->Animals[Entry.Type][Entry.Variant]) {
						bShouldDraw = true;
						Color = Overlay->AnimalColors[Entry.Type][Entry.Variant];
					}
					break;
				case EType::Tree:
					if (Overlay->Trees[Entry.Type][Entry.Variant]) {
						bShouldDraw = true;
						Color = Overlay->TreeColors[Entry.Type];
					}
					break;
				case EType::Bug:
					if (Overlay->Bugs[Entry.Type][Entry.Variant][Entry.Quality]) {
						bShouldDraw = true;
						Color = Overlay->BugColors[Entry.Type][Entry.Variant];
					}
					break;
				case EType::NPCs:
					if (Overlay->Singles[(int)EOneOffs::NPC]) {
						bShouldDraw = true;
						Color = Overlay->SingleColors[(int)EOneOffs::NPC];
					}
					break;
				case EType::Loot:
					if (Overlay->Singles[(int)EOneOffs::Loot]) {
						bShouldDraw = true;
						Color = Overlay->SingleColors[(int)EOneOffs::Loot];
					}
					break;
				case EType::Quest:
					if (Overlay->Singles[(int)EOneOffs::Quest]) {
						bShouldDraw = true;
						Color = Overlay->SingleColors[(int)EOneOffs::Quest];
					}
					break;
				case EType::Fish:
					if (Overlay->Fish[Entry.Type]) {
						bShouldDraw = true;
						Color = Overlay->FishColors[Entry.Type];
					}
					break;
				}

				if (Overlay->bVisualizeDefault && Entry.Type == 0) bShouldDraw = true;
				if (!bShouldDraw) continue;

				/*StrPrinter*/
				std::string text = std::format("{} [{:.2f}m]", Entry.DisplayName, Distance);
				std::wstring wideText(text.begin(), text.end()); // Will not work for non-ascii characters
				ImColor IMC(Color);
				FLinearColor UnrealColor = { IMC.Value.x, IMC.Value.y, IMC.Value.z, IMC.Value.w };
				HUD->Canvas->K2_DrawText(Roboto, FString(wideText.data()), ScreenLocation, { 1.0,1.0 }, UnrealColor, 0, { 0,0,0,1 }, { 1,1 }, true, true, true, { 0,0,0,1 });
			}
		}
	}
	else {
		Overlay->CachedActors.clear();
	}
}

static void ProcessEvent(const UObject* Class, class UFunction* Function, void* Params)
{
	auto fn = Function->GetFullName();
	invocations.insert(fn);

	if (fn == "Function Engine.Actor.ReceiveTick") {
		// Custom tick
	}
	else if (fn == "Function Engine.HUD.ReceiveDrawHUD") {
		DrawHUD(reinterpret_cast<const AHUD*>(Class));
	}

	//GetVFunction<void(*)(const UObject*, class UFunction*, void*)>(this, Offsets::ProcessEventIdx)(this, Function, Parms);
	OriginalProcEvent(Class, Function, Params);
}

void PaliaOverlay::DrawHUD()
{
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


	if (!Roboto) {
		Roboto = reinterpret_cast<UFont*>(UObject::FindObject("Font Roboto.Roboto", EClassCastFlags::None));
	}

	// TODO: Move outside of the loop as this needs to be done only once
	if (HookedClient != PlayerController->MyHUD && PlayerController->MyHUD != nullptr) {
		void* Instance = PlayerController->MyHUD;
		const void** Vtable = *reinterpret_cast<const void***>(const_cast<void*>(Instance));
		vmt = Vtable;
		DWORD OldProtection;
		VirtualProtect(Vtable, sizeof(DWORD) * 1024, PAGE_EXECUTE_READWRITE, &OldProtection);
		int32 Idx = Offsets::ProcessEventIdx;
		// TODO: Use original content of VTable instead of pointer to UObject::ProcessEvent as the ProcessEvent is overriden by AActor::ProcessEvent and executes some delegates - I have yet to see any negative impact
		// So this works for now and doesn't cause infinite loop (which is caused by me doing something stoopid)
		OriginalProcEvent = reinterpret_cast<void(*)(const UObject*, class UFunction*, void*)>(uintptr_t(GetModuleHandle(0)) + Offsets::ProcessEvent);
		const void* NewProcEvt = ProcessEvent;
		Vtable[Idx] = NewProcEvt;
		HookedClient = PlayerController->MyHUD;
		VirtualProtect(Vtable, sizeof(DWORD) * 1024, OldProtection, &OldProtection);
	}
}

void PaliaOverlay::DrawOverlay()
{
	ImGuiIO& io = ImGui::GetIO();

	// Set the overlay windows to the size of the game window
	ImGui::SetNextWindowPos({ 20, 20 });
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
			ImGui::Columns(4, nullptr, false);
			// Base ESP controls
			ImGui::BeginGroupPanel("ESP");
			{
				ImGui::Checkbox("Enable ESP", &bEnableESP);
				ImGui::Checkbox("Culling", &bEnableESPCulling);
				ImGui::InputInt("Distance", &CullDistance);
				ImGui::Spacing();
				ImGui::Checkbox("Show Others", &bVisualizeDefault);
				if (ImGui::IsItemHovered(ImGuiHoveredFlags_AllowWhenDisabled)) ImGui::SetTooltip("Shows other gatherables or creatures that were not successfully categorized - usually means that game has added new gatherable or a creature or I just missed stuff");
				ImGui::Spacing();
			}
			ImGui::EndGroupPanel();

			ImGui::BeginGroupPanel("Odds & Ends");
			{
				ImGui::BeginTable("Odds", 3);
				{
					ImGui::TableSetupColumn("Name");
					ImGui::TableSetupColumn("Show", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Color", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
					ImGui::Text("Show");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Players");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Players", &Singles[(int)EOneOffs::Player]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Players", &SingleColors[(int)EOneOffs::Player]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("NPC");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##NPC", &Singles[(int)EOneOffs::NPC]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##NPC", &SingleColors[(int)EOneOffs::NPC]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Fish");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Fish", &Fish[(int)EFishType::Hook]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Fish", &FishColors[(int)EFishType::Hook]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Fish Pools");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Pools", &Fish[(int)EFishType::Node]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Pools", &FishColors[(int)EFishType::Node]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Loot");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Loot", &Singles[(int)EOneOffs::Loot]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Loot", &SingleColors[(int)EOneOffs::Loot]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Quest");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Quest", &Singles[(int)EOneOffs::Quest]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Quest", &SingleColors[(int)EOneOffs::Quest]);
				}
				ImGui::EndTable();
			}
			ImGui::EndGroupPanel();

			ImGui::BeginGroupPanel("Trees");
			{
				ImGui::BeginTable("Trees", 5);
				{
					ImGui::TableSetupColumn("Name");
					ImGui::TableSetupColumn("Sm", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Med", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Lg", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Color", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
					ImGui::Text("Sm");
					ImGui::TableNextColumn();
					ImGui::Text("Med");
					ImGui::TableNextColumn();
					ImGui::Text("Lg");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					if (ImGui::SmallButton("Sapwood")) {
						Trees[(int)ETreeType::Sapwood][(int)EGatherableSize::Large] =
							Trees[(int)ETreeType::Sapwood][(int)EGatherableSize::Medium] =
							Trees[(int)ETreeType::Sapwood][(int)EGatherableSize::Small] =
							!Trees[(int)ETreeType::Sapwood][(int)EGatherableSize::Small];
					}
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SapwoodSm", &Trees[(int)ETreeType::Sapwood][(int)EGatherableSize::Small]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SapwoodMed", &Trees[(int)ETreeType::Sapwood][(int)EGatherableSize::Medium]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SapwoodLg", &Trees[(int)ETreeType::Sapwood][(int)EGatherableSize::Large]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Sapwood", &TreeColors[(int)ETreeType::Sapwood]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					if (ImGui::SmallButton("Heartwood")) {
						Trees[(int)ETreeType::Heartwood][(int)EGatherableSize::Large] =
							Trees[(int)ETreeType::Heartwood][(int)EGatherableSize::Medium] =
							Trees[(int)ETreeType::Heartwood][(int)EGatherableSize::Small] =
							!Trees[(int)ETreeType::Heartwood][(int)EGatherableSize::Small];
					}
					ImGui::TableNextColumn();
					ImGui::Checkbox("##HeartwoodSm", &Trees[(int)ETreeType::Heartwood][(int)EGatherableSize::Small]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##HeartwoodMed", &Trees[(int)ETreeType::Heartwood][(int)EGatherableSize::Medium]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##HeartwoodLg", &Trees[(int)ETreeType::Heartwood][(int)EGatherableSize::Large]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Heartwood", &TreeColors[(int)ETreeType::Heartwood]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					if (ImGui::SmallButton("Flow-Infused")) {
						Trees[(int)ETreeType::Flow][(int)EGatherableSize::Large] =
							Trees[(int)ETreeType::Flow][(int)EGatherableSize::Medium] =
							Trees[(int)ETreeType::Flow][(int)EGatherableSize::Small] =
							!Trees[(int)ETreeType::Flow][(int)EGatherableSize::Small];
					}
					ImGui::TableNextColumn();
					ImGui::Checkbox("##FlowSm", &Trees[(int)ETreeType::Flow][(int)EGatherableSize::Small]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##FlowMed", &Trees[(int)ETreeType::Flow][(int)EGatherableSize::Medium]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##FlowLg", &Trees[(int)ETreeType::Flow][(int)EGatherableSize::Large]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Flow", &TreeColors[(int)ETreeType::Flow]);
				}
				ImGui::EndTable();
			}
			ImGui::EndGroupPanel();

			ImGui::BeginGroupPanel("Ores");
			{
				ImGui::BeginTable("Ores", 5);
				{
					ImGui::TableSetupColumn("Name");
					ImGui::TableSetupColumn("Sm", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Med", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Lg", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Color", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
					ImGui::Text("Sm");
					ImGui::TableNextColumn();
					ImGui::Text("Med");
					ImGui::TableNextColumn();
					ImGui::Text("Lg");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Clay");
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ClayLg", &Ores[(int)EOreType::Clay][(int)EGatherableSize::Large]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Clay", &OreColors[(int)EOreType::Clay]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					if (ImGui::SmallButton("Stone")) {
						Ores[(int)EOreType::Stone][(int)EGatherableSize::Large] =
							Ores[(int)EOreType::Stone][(int)EGatherableSize::Medium] =
							Ores[(int)EOreType::Stone][(int)EGatherableSize::Small] =
							!Ores[(int)EOreType::Stone][(int)EGatherableSize::Small];
					}
					ImGui::TableNextColumn();
					ImGui::Checkbox("##StoneSm", &Ores[(int)EOreType::Stone][(int)EGatherableSize::Small]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##StoneMed", &Ores[(int)EOreType::Stone][(int)EGatherableSize::Medium]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##StoneLg", &Ores[(int)EOreType::Stone][(int)EGatherableSize::Large]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Stone", &OreColors[(int)EOreType::Stone]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					if (ImGui::SmallButton("Copper")) {
						Ores[(int)EOreType::Copper][(int)EGatherableSize::Large] =
							Ores[(int)EOreType::Copper][(int)EGatherableSize::Medium] =
							Ores[(int)EOreType::Copper][(int)EGatherableSize::Small] =
							!Ores[(int)EOreType::Copper][(int)EGatherableSize::Small];
					}
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CopperSm", &Ores[(int)EOreType::Copper][(int)EGatherableSize::Small]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CopperMed", &Ores[(int)EOreType::Copper][(int)EGatherableSize::Medium]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CopperLg", &Ores[(int)EOreType::Copper][(int)EGatherableSize::Large]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Copper", &OreColors[(int)EOreType::Copper]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					if (ImGui::SmallButton("Iron")) {
						Ores[(int)EOreType::Iron][(int)EGatherableSize::Large] =
							Ores[(int)EOreType::Iron][(int)EGatherableSize::Medium] =
							Ores[(int)EOreType::Iron][(int)EGatherableSize::Small] =
							!Ores[(int)EOreType::Iron][(int)EGatherableSize::Small];
					}
					ImGui::TableNextColumn();
					ImGui::Checkbox("##IronSm", &Ores[(int)EOreType::Iron][(int)EGatherableSize::Small]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##IronMed", &Ores[(int)EOreType::Iron][(int)EGatherableSize::Medium]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##IronLg", &Ores[(int)EOreType::Iron][(int)EGatherableSize::Large]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Iron", &OreColors[(int)EOreType::Iron]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					if (ImGui::SmallButton("Palium")) {
						Ores[(int)EOreType::Palium][(int)EGatherableSize::Large] =
							Ores[(int)EOreType::Palium][(int)EGatherableSize::Medium] =
							Ores[(int)EOreType::Palium][(int)EGatherableSize::Small] =
							!Ores[(int)EOreType::Palium][(int)EGatherableSize::Small];
					}
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PaliumSm", &Ores[(int)EOreType::Palium][(int)EGatherableSize::Small]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PaliumMed", &Ores[(int)EOreType::Palium][(int)EGatherableSize::Medium]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PaliumLg", &Ores[(int)EOreType::Palium][(int)EGatherableSize::Large]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Palium", &OreColors[(int)EOreType::Palium]);
				}
				ImGui::EndTable();
			}
			ImGui::EndGroupPanel();

			ImGui::BeginGroupPanel("Animals");
			{
				ImGui::BeginTable("Animals", 3);
				{
					ImGui::TableSetupColumn("Name");
					ImGui::TableSetupColumn("Show", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Color", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
					ImGui::Text("Show");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Sernuk");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Sernuk", &Animals[(int)ECreatureKind::Cearnuk][(int)ECreatureQuality::Tier1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Sernuk", &AnimalColors[(int)ECreatureKind::Cearnuk][(int)ECreatureQuality::Tier1]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Elder Sernuk");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ElderSernuk", &Animals[(int)ECreatureKind::Cearnuk][(int)ECreatureQuality::Tier2]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##ElderSernuk", &AnimalColors[(int)ECreatureKind::Cearnuk][(int)ECreatureQuality::Tier2]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Proudhorn Sernuk");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ProudhornSernuk", &Animals[(int)ECreatureKind::Cearnuk][(int)ECreatureQuality::Tier3]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##ProudhornSernuk", &AnimalColors[(int)ECreatureKind::Cearnuk][(int)ECreatureQuality::Tier3]);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
					ImGui::Text("Show");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Chapaa");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Chapaa", &Animals[(int)ECreatureKind::Chapaa][(int)ECreatureQuality::Tier1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Chapaa", &AnimalColors[(int)ECreatureKind::Chapaa][(int)ECreatureQuality::Tier1]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Striped Chapaa");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##StripedChapaa", &Animals[(int)ECreatureKind::Chapaa][(int)ECreatureQuality::Tier2]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##StripedChapaa", &AnimalColors[(int)ECreatureKind::Chapaa][(int)ECreatureQuality::Tier2]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Azure Chapaa");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##AzureChapaa", &Animals[(int)ECreatureKind::Chapaa][(int)ECreatureQuality::Tier3]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##AzureChapaa", &AnimalColors[(int)ECreatureKind::Chapaa][(int)ECreatureQuality::Tier3]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Minigame Chapaa");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MinigameChapaa", &Animals[(int)ECreatureKind::Chapaa][(int)ECreatureQuality::Chase]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MinigameChapaa", &AnimalColors[(int)ECreatureKind::Chapaa][(int)ECreatureQuality::Chase]);
				}
				ImGui::EndTable();
			}
			ImGui::EndGroupPanel();

			ImGui::NextColumn();

			ImGui::BeginGroupPanel("Forageables");
			{
				if (ImGui::SmallButton("Common##Forage")) {
					for (int pos : ForageableCommon) {
						Forageables[pos][1] = Forageables[pos][0] = !Forageables[pos][0];
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Uncommon##Forage")) {
					for (int pos : ForageableUncommon) {
						Forageables[pos][1] = Forageables[pos][0] = !Forageables[pos][0];
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Rare##Forage")) {
					for (int pos : ForageableRare) {
						Forageables[pos][1] = Forageables[pos][0] = !Forageables[pos][0];
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Epic##Forage")) {
					for (int pos : ForageableEpic) {
						Forageables[pos][1] = Forageables[pos][0] = !Forageables[pos][0];
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Star##Forage")) {
					for (int pos = 0; pos < (int)EForageableType::MAX; pos++) {
						Forageables[pos][1] = !Forageables[pos][1];
					}
				}
				ImGui::BeginTable("Forageables", 4);
				{
					ImGui::TableSetupColumn("Name");
					ImGui::TableSetupColumn("Normal", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Star", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Color", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Beach");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Coral");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Coral", &Forageables[(int)EForageableType::Coral][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CoralP", &Forageables[(int)EForageableType::Coral][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Coral", &ForageableColors[(int)EForageableType::Coral]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Oyster");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Oyster", &Forageables[(int)EForageableType::Oyster][0]);
					ImGui::TableNextColumn();
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Oyster", &ForageableColors[(int)EForageableType::Oyster]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Shell");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Shell", &Forageables[(int)EForageableType::Shell][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ShellP", &Forageables[(int)EForageableType::Shell][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Shell", &ForageableColors[(int)EForageableType::Shell]);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Flower");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Briar Daisy");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PoisonFlower", &Forageables[(int)EForageableType::PoisonFlower][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PoisonFlowerP", &Forageables[(int)EForageableType::PoisonFlower][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##PoisonFlower", &ForageableColors[(int)EForageableType::PoisonFlower]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Crystal Lake Lotus");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##WaterFlower", &Forageables[(int)EForageableType::WaterFlower][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##WaterFlowerP", &Forageables[(int)EForageableType::WaterFlower][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##WaterFlower", &ForageableColors[(int)EForageableType::WaterFlower]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Heartdrop Lily");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Heartdrop", &Forageables[(int)EForageableType::Heartdrop][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##HeartdropP", &Forageables[(int)EForageableType::Heartdrop][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Heartdrop", &ForageableColors[(int)EForageableType::Heartdrop]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Sundrop Lily");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Sundrop", &Forageables[(int)EForageableType::Sundrop][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SundropP", &Forageables[(int)EForageableType::Sundrop][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Sundrop", &ForageableColors[(int)EForageableType::Sundrop]);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Moss");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Dragon's Beard Peat");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonsBeard", &Forageables[(int)EForageableType::DragonsBeard][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonsBeardP", &Forageables[(int)EForageableType::DragonsBeard][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##DragonsBeard", &ForageableColors[(int)EForageableType::DragonsBeard]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Emerald Carpet Moss");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##EmeraldCarpet", &Forageables[(int)EForageableType::EmeraldCarpet][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##EmeraldCarpetP", &Forageables[(int)EForageableType::EmeraldCarpet][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##EmeraldCarpet", &ForageableColors[(int)EForageableType::EmeraldCarpet]);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Mushroom");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Brightshroom");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MushroomBlue", &Forageables[(int)EForageableType::MushroomBlue][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MushroomBlueP", &Forageables[(int)EForageableType::MushroomBlue][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MushroomBlue", &ForageableColors[(int)EForageableType::MushroomBlue]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Mountain Morel");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MushroomRed", &Forageables[(int)EForageableType::MushroomRed][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MushroomRedP", &Forageables[(int)EForageableType::MushroomRed][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MushroomRed", &ForageableColors[(int)EForageableType::MushroomRed]);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Spice");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Dari Cloves");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DariCloves", &Forageables[(int)EForageableType::DariCloves][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DariClovesP", &Forageables[(int)EForageableType::DariCloves][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##DariCloves", &ForageableColors[(int)EForageableType::DariCloves]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Heat Root");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##HeatRoot", &Forageables[(int)EForageableType::HeatRoot][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##HeatRootP", &Forageables[(int)EForageableType::HeatRoot][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##HeatRoot", &ForageableColors[(int)EForageableType::HeatRoot]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Spice Sprouts");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SpicedSprouts", &Forageables[(int)EForageableType::SpicedSprouts][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SpicedSproutsP", &Forageables[(int)EForageableType::SpicedSprouts][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##SpicedSprouts", &ForageableColors[(int)EForageableType::SpicedSprouts]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Sweet Leaf");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SweetLeaves", &Forageables[(int)EForageableType::SweetLeaves][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SweetLeavesP", &Forageables[(int)EForageableType::SweetLeaves][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##SweetLeaves", &ForageableColors[(int)EForageableType::SweetLeaves]);
					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Vegetable");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Wild Garlic");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##Garlic", &Forageables[(int)EForageableType::Garlic][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##GarlicP", &Forageables[(int)EForageableType::Garlic][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Garlic", &ForageableColors[(int)EForageableType::Garlic]);
				}
				ImGui::EndTable();
			}
			ImGui::EndGroupPanel();

			ImGui::NextColumn();

			ImGui::BeginGroupPanel("Bugs");
			{
				if (ImGui::SmallButton("Common##Bugs")) {
					for (int i = 0; i < (int)EBugKind::MAX; i++) {
						Bugs[i][(int)EBugQuality::Common][1] = Bugs[i][(int)EBugQuality::Common][0] = !Bugs[i][(int)EBugQuality::Common][0];
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Uncommon##Bugs")) {
					for (int i = 0; i < (int)EBugKind::MAX; i++) {
						Bugs[i][(int)EBugQuality::Uncommon][1] = Bugs[i][(int)EBugQuality::Uncommon][0] = !Bugs[i][(int)EBugQuality::Uncommon][0];
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Rare##Bugs")) {
					for (int i = 0; i < (int)EBugKind::MAX; i++) {
						Bugs[i][(int)EBugQuality::Rare][1] = Bugs[i][(int)EBugQuality::Rare][0] = !Bugs[i][(int)EBugQuality::Rare][0];
						Bugs[i][(int)EBugQuality::Rare2][1] = Bugs[i][(int)EBugQuality::Rare2][0] = !Bugs[i][(int)EBugQuality::Rare2][0];
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Epic##Bugs")) {
					for (int i = 0; i < (int)EBugKind::MAX; i++) {
						Bugs[i][(int)EBugQuality::Epic][1] = Bugs[i][(int)EBugQuality::Epic][0] = !Bugs[i][(int)EBugQuality::Epic][0];
					}
				}
				ImGui::SameLine();
				if (ImGui::SmallButton("Star##Bugs")) {
					for (int i = 0; i < (int)EBugKind::MAX; i++) {
						for (int j = 0; j < (int)EBugQuality::MAX; j++) {
							Bugs[i][j][1] = !Bugs[i][j][1];
						}
					}
				}
				ImGui::BeginTable("Bugs", 4);
				{
					ImGui::TableSetupColumn("Name");
					ImGui::TableSetupColumn("Normal", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Star", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Color", ImGuiTableColumnFlags_WidthFixed, 40);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Bee");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Bahari Bee");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeeU", &Bugs[(int)EBugKind::Bee][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeeUP", &Bugs[(int)EBugKind::Bee][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##BeeU", &BugColors[(int)EBugKind::Bee][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Golden Glory Bee");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeeR", &Bugs[(int)EBugKind::Bee][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeeRP", &Bugs[(int)EBugKind::Bee][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##Bee", &BugColors[(int)EBugKind::Bee][(int)EBugQuality::Rare]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Beetle");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");

					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Spotted Stink Bug");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeetleC", &Bugs[(int)EBugKind::Beetle][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeetleCP", &Bugs[(int)EBugKind::Beetle][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##BeetleC", &BugColors[(int)EBugKind::Beetle][(int)EBugQuality::Common]);

					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Proudhorned Stag Beetle");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeetleU", &Bugs[(int)EBugKind::Beetle][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeetleUP", &Bugs[(int)EBugKind::Beetle][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##BeetleU", &BugColors[(int)EBugKind::Beetle][(int)EBugQuality::Uncommon]);

					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Raspberry Beetle");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeetleR", &Bugs[(int)EBugKind::Beetle][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeetleRP", &Bugs[(int)EBugKind::Beetle][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##BeetleR", &BugColors[(int)EBugKind::Beetle][(int)EBugQuality::Rare]);

					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Ancient Amber Beetle");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeetleE", &Bugs[(int)EBugKind::Beetle][(int)EBugQuality::Epic][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##BeetleEP", &Bugs[(int)EBugKind::Beetle][(int)EBugQuality::Epic][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##BeetleE", &BugColors[(int)EBugKind::Beetle][(int)EBugQuality::Epic]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Butterfly");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Common Blue Butterfly");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ButterflyC", &Bugs[(int)EBugKind::Butterfly][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ButterflyCP", &Bugs[(int)EBugKind::Butterfly][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##ButterflyC", &BugColors[(int)EBugKind::Butterfly][(int)EBugQuality::Common]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Duskwing Butterfly");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ButterflyU", &Bugs[(int)EBugKind::Butterfly][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ButterflyUP", &Bugs[(int)EBugKind::Butterfly][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##ButterflyU", &BugColors[(int)EBugKind::Butterfly][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Brighteye Butterfly");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ButterflyR", &Bugs[(int)EBugKind::Butterfly][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ButterflyRP", &Bugs[(int)EBugKind::Butterfly][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##ButterflyR", &BugColors[(int)EBugKind::Butterfly][(int)EBugQuality::Rare]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Rainbow-Tipped Butterfly");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ButterflyE", &Bugs[(int)EBugKind::Butterfly][(int)EBugQuality::Epic][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##ButterflyEP", &Bugs[(int)EBugKind::Butterfly][(int)EBugQuality::Epic][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##ButterflyE", &BugColors[(int)EBugKind::Butterfly][(int)EBugQuality::Epic]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Cicada");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Common Bark Cicada");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CicadaC", &Bugs[(int)EBugKind::Cicada][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CicadaCP", &Bugs[(int)EBugKind::Cicada][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CicadaC", &BugColors[(int)EBugKind::Cicada][(int)EBugQuality::Common]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Cerulean Cicada");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CicadaU", &Bugs[(int)EBugKind::Cicada][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CicadaUP", &Bugs[(int)EBugKind::Cicada][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CicadaU", &BugColors[(int)EBugKind::Cicada][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Spitfire Cicada");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CicadaR", &Bugs[(int)EBugKind::Cicada][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CicadaRP", &Bugs[(int)EBugKind::Cicada][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CicadaR", &BugColors[(int)EBugKind::Cicada][(int)EBugQuality::Rare]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Crab");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Bahari Crab");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CrabC", &Bugs[(int)EBugKind::Crab][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CrabCP", &Bugs[(int)EBugKind::Crab][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CrabC", &BugColors[(int)EBugKind::Crab][(int)EBugQuality::Common]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Spineshell Crab");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CrabU", &Bugs[(int)EBugKind::Crab][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CrabUP", &Bugs[(int)EBugKind::Crab][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CrabU", &BugColors[(int)EBugKind::Crab][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Vampire Crab");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CrabR", &Bugs[(int)EBugKind::Crab][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CrabRP", &Bugs[(int)EBugKind::Crab][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CrabR", &BugColors[(int)EBugKind::Crab][(int)EBugQuality::Rare]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Cricket");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Common Field Cricket");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CricketC", &Bugs[(int)EBugKind::Cricket][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CricketCP", &Bugs[(int)EBugKind::Cricket][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CricketC", &BugColors[(int)EBugKind::Cricket][(int)EBugQuality::Common]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Garden Leafhopper");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CricketU", &Bugs[(int)EBugKind::Cricket][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CricketUP", &Bugs[(int)EBugKind::Cricket][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CricketU", &BugColors[(int)EBugKind::Cricket][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Azure Stonehopper");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CricketR", &Bugs[(int)EBugKind::Cricket][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##CricketRP", &Bugs[(int)EBugKind::Cricket][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##CricketR", &BugColors[(int)EBugKind::Cricket][(int)EBugQuality::Rare]);
				}
				ImGui::EndTable();
			}
			ImGui::EndGroupPanel();

			ImGui::NextColumn();

			ImGui::BeginGroupPanel("Bugs Continued");
			{
				ImGui::BeginTable("Bugs2", 4);
				{
					ImGui::TableSetupColumn("Name");
					ImGui::TableSetupColumn("Normal", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Star", ImGuiTableColumnFlags_WidthFixed, 40);
					ImGui::TableSetupColumn("Color", ImGuiTableColumnFlags_WidthFixed, 40);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Dragonfly");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Brushtail Dragonfly");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonflyC", &Bugs[(int)EBugKind::Dragonfly][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonflyCP", &Bugs[(int)EBugKind::Dragonfly][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##DragonflyC", &BugColors[(int)EBugKind::Dragonfly][(int)EBugQuality::Common]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Inky Dragonfly");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonflyU", &Bugs[(int)EBugKind::Dragonfly][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonflyUP", &Bugs[(int)EBugKind::Dragonfly][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##DragonflyU", &BugColors[(int)EBugKind::Dragonfly][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Firebreathing Dragonfly");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonflyR", &Bugs[(int)EBugKind::Dragonfly][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonflyRP", &Bugs[(int)EBugKind::Dragonfly][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##DragonflyR", &BugColors[(int)EBugKind::Dragonfly][(int)EBugQuality::Rare]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Jewelwing Dragonfly");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonflyE", &Bugs[(int)EBugKind::Dragonfly][(int)EBugQuality::Epic][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##DragonflyEP", &Bugs[(int)EBugKind::Dragonfly][(int)EBugQuality::Epic][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##DragonflyE", &BugColors[(int)EBugKind::Dragonfly][(int)EBugQuality::Epic]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Glowbug");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Paper Lantern Bug");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##GlowbugC", &Bugs[(int)EBugKind::Glowbug][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##GlowbugCP", &Bugs[(int)EBugKind::Glowbug][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##GlowbugC", &BugColors[(int)EBugKind::Glowbug][(int)EBugQuality::Common]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Bahari Glowbug");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##GlowbugU", &Bugs[(int)EBugKind::Glowbug][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##GlowbugUP", &Bugs[(int)EBugKind::Glowbug][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##GlowbugU", &BugColors[(int)EBugKind::Glowbug][(int)EBugQuality::Uncommon]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Ladybug");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Garden Ladybug");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##LadybugC", &Bugs[(int)EBugKind::Ladybug][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##LadybugCP", &Bugs[(int)EBugKind::Ladybug][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##LadybugC", &BugColors[(int)EBugKind::Ladybug][(int)EBugQuality::Common]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Princess Ladybug");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##LadybugU", &Bugs[(int)EBugKind::Ladybug][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##LadybugUP", &Bugs[(int)EBugKind::Ladybug][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##LadybugU", &BugColors[(int)EBugKind::Ladybug][(int)EBugQuality::Uncommon]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Mantis");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Garden Mantis");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MantisU", &Bugs[(int)EBugKind::Mantis][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MantisUP", &Bugs[(int)EBugKind::Mantis][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MantisU", &BugColors[(int)EBugKind::Mantis][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Spotted Mantis");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MantisR", &Bugs[(int)EBugKind::Mantis][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MantisRP", &Bugs[(int)EBugKind::Mantis][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MantisR", &BugColors[(int)EBugKind::Mantis][(int)EBugQuality::Rare]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Leafstalker Mantis");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MantisR2", &Bugs[(int)EBugKind::Mantis][(int)EBugQuality::Rare2][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MantisR2P", &Bugs[(int)EBugKind::Mantis][(int)EBugQuality::Rare2][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MantisR2", &BugColors[(int)EBugKind::Mantis][(int)EBugQuality::Rare2]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Fairy Mantis");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MantisE", &Bugs[(int)EBugKind::Mantis][(int)EBugQuality::Epic][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MantisEP", &Bugs[(int)EBugKind::Mantis][(int)EBugQuality::Epic][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MantisE", &BugColors[(int)EBugKind::Mantis][(int)EBugQuality::Epic]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Moth");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Kilima Night Moth");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MothC", &Bugs[(int)EBugKind::Moth][(int)EBugQuality::Common][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MothCP", &Bugs[(int)EBugKind::Moth][(int)EBugQuality::Common][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MothC", &BugColors[(int)EBugKind::Moth][(int)EBugQuality::Common]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Lunar Fairy Moth");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MothU", &Bugs[(int)EBugKind::Moth][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MothUP", &Bugs[(int)EBugKind::Moth][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MothU", &BugColors[(int)EBugKind::Moth][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Gossamer Veil Moth");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MothR", &Bugs[(int)EBugKind::Moth][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##MothRP", &Bugs[(int)EBugKind::Moth][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##MothR", &BugColors[(int)EBugKind::Moth][(int)EBugQuality::Rare]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Pede");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Garden Millipede");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PedeU", &Bugs[(int)EBugKind::Pede][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PedeUP", &Bugs[(int)EBugKind::Pede][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##PedeU", &BugColors[(int)EBugKind::Pede][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Hairy Millipede");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PedeR", &Bugs[(int)EBugKind::Pede][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PedeRP", &Bugs[(int)EBugKind::Pede][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##PedeR", &BugColors[(int)EBugKind::Pede][(int)EBugQuality::Rare]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Scintillating Centipede");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PedeR2", &Bugs[(int)EBugKind::Pede][(int)EBugQuality::Rare2][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##PedeR2P", &Bugs[(int)EBugKind::Pede][(int)EBugQuality::Rare2][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##PedeR2", &BugColors[(int)EBugKind::Pede][(int)EBugQuality::Rare2]);

					ImGui::TableNextRow(ImGuiTableRowFlags_Headers);
					ImGui::TableNextColumn();
					ImGui::Text("Snail");
					ImGui::TableNextColumn();
					ImGui::Text("Normal");
					ImGui::TableNextColumn();
					ImGui::Text("Star");
					ImGui::TableNextColumn();
					ImGui::Text("Color");
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Garden Snail");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SnailU", &Bugs[(int)EBugKind::Snail][(int)EBugQuality::Uncommon][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SnailUP", &Bugs[(int)EBugKind::Snail][(int)EBugQuality::Uncommon][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##SnailU", &BugColors[(int)EBugKind::Snail][(int)EBugQuality::Uncommon]);
					ImGui::TableNextRow();
					ImGui::TableNextColumn();
					ImGui::Text("Stripeshell Snail");
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SnailR", &Bugs[(int)EBugKind::Snail][(int)EBugQuality::Rare][0]);
					ImGui::TableNextColumn();
					ImGui::Checkbox("##SnailRP", &Bugs[(int)EBugKind::Snail][(int)EBugQuality::Rare][1]);
					ImGui::TableNextColumn();
					ImGui::ColorPicker("##SnailR", &BugColors[(int)EBugKind::Snail][(int)EBugQuality::Rare]);

				}
				ImGui::EndTable();
			}
			ImGui::EndGroupPanel();
		}
		else if (OpenTab == 1) {
		}
	}
	ImGui::End();
	if (!show)
		ShowOverlay(false);
}
