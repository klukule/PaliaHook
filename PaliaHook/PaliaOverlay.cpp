#include "PaliaOverlay.h"
#include "../RendererHook/ImGui/imgui.h"
#include "../RendererHook/RendererDetector.h"
#include "../RendererHook/BaseHook.h"
#include "../PaliaSDK/SDK.hpp"

#include <map>

using namespace SDK;

enum class EGatherableType
{
	Unknown = 0,
	Tree = 1,
	Ore = 2,
};

enum class EGatherableSize
{
	Unknown = 0,
	Small = 1,
	Medium = 2,
	Large = 3
};

enum class EGatherableFlags
{
	None = 0,
	CoOp = 1 << 0,

	// Ore type
	Stone = 1 << 1,
	Copper = 1 << 2,
	Clay = 1 << 3,
	Iron = 1 << 4,
	Silver = 1 << 5,
	Gold = 1 << 6,
	Palium = 1 << 7
};

DEFINE_ENUM_FLAG_OPERATORS(EGatherableFlags)

struct FGatherableEntry
{
	AGatherableActor* Actor;
	FVector WorldPosition;
	std::string DisplayName;
	EGatherableType Type;
	EGatherableSize Size;
	EGatherableFlags Flags;
};


static std::map<std::string, std::string> CLASS_NAME_ALIAS = {
	// TREES
	{"BP_TreeChoppable_Birch_Sapling_C", "Birch (S)"},
	{"BP_TreeChoppable_Birch_Small_C", "Birch (S)"},
	{"BP_TreeChoppable_Birch_Medium_C", "Birch (M)"},
	{"BP_TreeChoppable_Birch_Large_C", "Birch (L)"},

	{"BP_TreeChoppable_Juniper_Sapling_C", "Juniper (S)"},
	{"BP_TreeChoppable_Juniper_Small_C", "Juniper (S)"},
	{"BP_TreeChoppable_Juniper_Medium_C", "Juniper (M)"},
	{"BP_TreeChoppable_Juniper_Large_C", "Juniper (L)"},

	{"BP_TreeChoppable_Oak_Sapling_C", "Oak (S)"},
	{"BP_TreeChoppable_Oak_Small_C", "Oak (S)"},
	{"BP_TreeChoppable_Oak_Medium_C", "Oak (M)"},
	{"BP_TreeChoppable_Oak_Large_C", "Oak (L)"},

	{"BP_TreeChoppable_Pine_Sapling_C", "Pine (S)"},
	{"BP_TreeChoppable_Pine_Small_C", "Pine (S)"},
	{"BP_TreeChoppable_Pine_Medium_C", "Pine (M)"},
	{"BP_TreeChoppable_Pine_Large_C", "Pine (L)"},
	{"BP_TreeChoppable_Pine_Large2_C", "Pine (L)"},

	// CO-OP TREES
	{"BP_TreeChoppable_Birch_Sapling_CoOp_C", "Birch CoOp (S)"},
	{"BP_TreeChoppable_Birch_Small_CoOp_C", "Birch CoOp (S)"},
	{"BP_TreeChoppable_Birch_Medium_CoOp_C", "Birch CoOp (M)"},
	{"BP_TreeChoppable_Birch_Large_CoOp_C", "Birch CoOp (L)"},

	{"BP_TreeChoppable_Juniper_Sapling_CoOp_C", "Juniper CoOp (S)"},
	{"BP_TreeChoppable_Juniper_Small_CoOp_C", "Juniper CoOp (S)"},
	{"BP_TreeChoppable_Juniper_Medium_CoOp_C", "Juniper CoOp (M)"},
	{"BP_TreeChoppable_Juniper_Large_CoOp_C", "Juniper CoOp (L)"},

	{"BP_TreeChoppable_Oak_Sapling_CoOp_C", "Oak CoOp (S)"},
	{"BP_TreeChoppable_Oak_Small_CoOp_C", "Oak CoOp (S)"},
	{"BP_TreeChoppable_Oak_Medium_CoOp_C", "Oak CoOp (M)"},
	{"BP_TreeChoppable_Oak_Large_CoOp_C", "Oak CoOp (L)"},

	{"BP_TreeChoppable_Pine_Sapling_CoOp_C", "Pine CoOp (S)"},
	{"BP_TreeChoppable_Pine_Small_CoOp_C", "Pine CoOp (S)"},
	{"BP_TreeChoppable_Pine_Medium_CoOp_C", "Pine CoOp (M)"},
	{"BP_TreeChoppable_Pine_Large_CoOp_C", "Pine CoOp (L)"},
	{"BP_TreeChoppable_Pine_Large2_CoOp_C", "Pine CoOp (L)"},

	// Shrubs
	{"BP_ShrubChoppable_Bush_C", "Bush"},

	// Ores
	{"BP_Mining_Copper_Small_C", "Copper (S)"},
	{"BP_Mining_Copper_Medium_C", "Copper (M)"},
	{"BP_Mining_Copper_Large_C", "Copper (L)"},

	{"BP_Mining_Stone_Small_C", "Stone (S)"},
	{"BP_Mining_Stone_Medium_C", "Stone (M)"},
	{"BP_Mining_Stone_Large_C", "Stone (L)"},

	{"BP_Mining_Iron_Small_C", "Iron (S)"},
	{"BP_Mining_Iron_Medium_C", "Iron (M)"},
	{"BP_Mining_Iron_Large_C", "Iron (L)"},

	{"BP_Mining_Clay_C", "Clay"},
	{"BP_Mining_Silver_C", "Silver"},
	{"BP_Mining_Gold_C", "Gold"},

	{"BP_Mining_Palium_C", "Palium"},
	{"BP_Mining_Palium_Small_C", "Palium (S)"},
	{"BP_Mining_Palium_Medium_C", "Palium (M)"},
	{"BP_Mining_Palium_Large_C", "Palium (L)"},

};

static std::map<EGatherableType, std::vector<std::string>> TYPE_MAPPINGS = {
	{EGatherableType::Tree, {"TreeChoppable", "ShrubChoppable"}},
	{EGatherableType::Ore, {"Mining_Stone", "Mining_Copper", "Mining_Clay", "Mining_Iron"}}
};

static std::map<EGatherableSize, std::vector<std::string>> SIZE_MAPPINGS = {
	{EGatherableSize::Small, {"_Small_", "_Sapling_"}},
	{EGatherableSize::Medium, {"_Medium_"}},
	{EGatherableSize::Large, {"_Large_"}}
};

static std::map<EGatherableFlags, std::vector<std::string>> FLAG_MAPPINGS = {
	{EGatherableFlags::CoOp, {"_CoOp_"}},
	{EGatherableFlags::Stone, {"_Mining_Stone_"}},
	{EGatherableFlags::Copper, {"_Mining_Copper_"}},
	{EGatherableFlags::Clay, {"_Mining_Clay_"}},
	{EGatherableFlags::Iron, {"_Mining_Iron_"}},
	{EGatherableFlags::Silver, {"_Mining_Silver_"}},
	{EGatherableFlags::Gold, {"_Mining_Gold_"}},
	{EGatherableFlags::Palium, {"_Mining_Palium_"}},
};

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

		if (!Obj || (unsigned char*)Obj == (unsigned char*)-1) // TODO: Figure out why sometimes we get 0xffffffffffffffff
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

static std::vector<FGatherableEntry> CachedGatherables;
static double LastCached = 0.0f;

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



void CacheGatherables() {
	CachedGatherables.clear();
	for (AGatherableActor* Gatherable : FindObjectsOfType<AGatherableActor>()) {
		if (!Gatherable->IsValidLowLevel()) continue;

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
	if (abs(WorldTime - LastCached) > 1.0)
	{
		LastCached = WorldTime;
		CacheGatherables();
	}

	FVector PawnLocation = PlayerController->K2_GetPawn()->K2_GetActorLocation();

	for (FGatherableEntry& Entry : CachedGatherables) {
		double Distance = sqrt(pow(PawnLocation.X - Entry.WorldPosition.X, 2) + pow(PawnLocation.Y - Entry.WorldPosition.Y, 2) + pow(PawnLocation.Z - Entry.WorldPosition.Z, 2)) * 0.01;

		FVector2D ScreenLocation;
		if (PlayerController->ProjectWorldLocationToScreen(Entry.WorldPosition, &ScreenLocation, true)) {
			ImColor Color = (Entry.Flags & EGatherableFlags::CoOp) == EGatherableFlags::CoOp ? ImColor(0, 0, 255) : ImColor(255, 0, 0);
			pDrawList->AddText({ static_cast<float>(ScreenLocation.X), static_cast<float>(ScreenLocation.Y) }, Color, (Entry.DisplayName + " [" + std::to_string(Distance) + " m]").data());
		}
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
	}
	ImGui::End();

	if (!show)
		ShowOverlay(false);
}
