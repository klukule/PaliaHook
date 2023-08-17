#pragma once

#include <OverlayBase.h>
#include <map>
#include <vector>
#include <string>
#include <SDK.hpp>
#include <ImGui/imgui.h>

using namespace SDK;

enum class ECreatureType
{
	Unknown = 0,
	Creature = 1,
	Bug = 2
};

enum class ECreatureKind
{
	Unknown = 0,
	Chapaa = 1,
	Cearnuk = 2
};

enum class EBugKind
{
	Unknown = 0,
	Bee = 1,
	Beetle = 2,
	Buttlerfly = 3,
	Cicada = 4,
	Crab = 5,
	Cricket = 6,
	Dragonfly = 7,
	Glowbug = 8,
	Ladybug = 9,
	Mantis = 10,
	Moth = 11,
	Pede = 12,
	Snail = 13
};

enum class EBugQuality
{
	Unknown = 0,
	Common = 1,
	Uncommon = 2,
	Rare = 3,
	Epic = 4
};

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

enum class EESPColorSlot
{
	// Default color for anything not more specific
	Default,
	// Specific override for CoOp trees
	CoOp,
	// Color used for trees
	Tree,
	// Color used for stone ore
	Stone,
	// Color used for copper ore
	Copper,
	// Color used for clay ore
	Clay,
	// Color used for iron ore
	Iron,
	// Color used for sliver ore
	Silver,
	// Color used for gold ore
	Gold,
	// Color used for palium ore
	Palium,
	MAX
};


struct FGatherableEntry
{
	AGatherableActor* Actor;
	FVector WorldPosition;
	std::string DisplayName;
	EGatherableType Type;
	EGatherableSize Size;
	EGatherableFlags Flags;
};

struct FCreatureEntry
{
	ACreatureCharacter* Actor;
	// vector position not cached, since these actors are moving
	std::string DisplayName;
	ECreatureType Type;
	ECreatureKind CreatureKind;
	EBugKind BugKind;
	EBugQuality BugQuality;
};


class PaliaOverlay : public OverlayBase
{
protected:
	virtual void DrawHUD();
	virtual void DrawOverlay();

private:
	void CacheGatherables();
	void CacheCreatures();

private:
	// Last time gatherables were cached
	double LastCachedTime;

	// Cached gatherables
	std::vector<FGatherableEntry> CachedGatherables;

	// Cached creatures
	std::vector<FCreatureEntry> CachedCreatures;

	// Class name -> Display name map
	std::map<std::string, std::string> CLASS_NAME_ALIAS = {
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


		// Creatures
		{"BP_ValeriaHuntingCreature_Cearnuk_T1_C", "Cearnuk (T1)"},
		{"BP_ValeriaHuntingCreature_Cearnuk_T2_C", "Cearnuk (T2)"},
		{"BP_ValeriaHuntingCreature_Cearnuk_T3_C", "Cearnuk (T3)"},

		{"BP_ValeriaHuntingCreature_Chapaa_T1_C", "Chapaa (T1)"},
		{"BP_ValeriaHuntingCreature_Chapaa_T2_C", "Chapaa (T2)"},
		{"BP_ValeriaHuntingCreature_Chapaa_T3_C", "Chapaa (T3)"},
		{"BP_ValeriaHuntingCreature_Chapaa_T3_MirrorImage_C", "Chapaa (T3 - Mirror)"}, // TODO: Probably do not display this one, as this is most likely the mirrage/ghost chapaa so no need to show it

		{"BP_ValeriaHuntingCreature_ChapaaChase_Base_C", "Chapaa Chase (Base)"},
		{"BP_ValeriaHuntingCreature_ChapaaChase_Fast_C", "Chapaa Chase (Fast)"},

		// TODO: Provide names that are the same as their drops ingame

		// Bugs
		{"BP_Bug_BeeU+_C", "Bee (U)"},
		{"BP_Bug_BeeR+_C", "Bee (R)"},
		{"BP_Bug_BeeU_C", "Bee (U)"},
		{"BP_Bug_BeeR_C", "Bee (R)"},

		{"BP_Bug_BeetleC+_C", "Beetle (C)"},
		{"BP_Bug_BeetleU+_C", "Beetle (U)"},
		{"BP_Bug_BeetleR+_C", "Beetle (R)"},
		{"BP_Bug_BeetleE+_C", "Beetle (E)"},
		{"BP_Bug_BeetleC_C", "Beetle (C)"},
		{"BP_Bug_BeetleU_C", "Beetle (U)"},
		{"BP_Bug_BeetleR_C", "Beetle (R)"},
		{"BP_Bug_BeetleE_C", "Beetle (E)"},

		{"BP_Bug_ButterflyC+_C", "Butterfly (C)"},
		{"BP_Bug_ButterflyU+_C", "Butterfly (U)"},
		{"BP_Bug_ButterflyR+_C", "Butterfly (R)"},
		{"BP_Bug_ButterflyE+_C", "Butterfly (E)"},
		{"BP_Bug_ButterflyC_C", "Butterfly (C)"},
		{"BP_Bug_ButterflyU_C", "Butterfly (U)"},
		{"BP_Bug_ButterflyR_C", "Butterfly (R)"},
		{"BP_Bug_ButterflyE_C", "Butterfly (E)"},

		{ "BP_Bug_CicadaC+_C", "Cicada (C)" },
		{ "BP_Bug_CicadaU+_C", "Cicada (U)" },
		{ "BP_Bug_CicadaR+_C", "Cicada (R)" },
		{ "BP_Bug_CicadaC_C", "Cicada (C)" },
		{ "BP_Bug_CicadaU_C", "Cicada (U)" },
		{ "BP_Bug_CicadaR_C", "Cicada (R)" },

		{ "BP_Bug_CrabC+_C", "Crab (C)" },
		{ "BP_Bug_CrabU+_C", "Crab (U)" },
		{ "BP_Bug_CrabR+_C", "Crab (R)" },
		{ "BP_Bug_CrabC_C", "Crab (C)" },
		{ "BP_Bug_CrabU_C", "Crab (U)" },
		{ "BP_Bug_CrabR_C", "Crab (R)" },

		{ "BP_Bug_CricketC+_C", "Cricket (C)" },
		{ "BP_Bug_CricketU+_C", "Cricket (U)" },
		{ "BP_Bug_CricketR+_C", "Cricket (R)" },
		{ "BP_Bug_CricketC_C", "Cricket (C)" },
		{ "BP_Bug_CricketU_C", "Cricket (U)" },
		{ "BP_Bug_CricketR_C", "Cricket (R)" },

		{ "BP_Bug_DragonflyC+_C", "Dragonfly (C)" },
		{ "BP_Bug_DragonflyU+_C", "Dragonfly (U)" },
		{ "BP_Bug_DragonflyR+_C", "Dragonfly (R)" },
		{ "BP_Bug_DragonflyE+_C", "Dragonfly (E)" },
		{ "BP_Bug_DragonflyC_C", "Dragonfly (C)" },
		{ "BP_Bug_DragonflyU_C", "Dragonfly (U)" },
		{ "BP_Bug_DragonflyR_C", "Dragonfly (R)" },
		{ "BP_Bug_DragonflyE_C", "Dragonfly (E)" },

		{ "BP_Bug_GlowbugC+_C", "Glowbug (C)" },
		{ "BP_Bug_GlowbugR+_C", "Glowbug (R)" },
		{ "BP_Bug_GlowbugC_C", "Glowbug (C)" },
		{ "BP_Bug_GlowbugR_C", "Glowbug (R)" },

		{ "BP_Bug_LadybugU+_C", "Ladybug (U)" },
		{ "BP_Bug_LadybugR+_C", "Ladybug (R)" },
		{ "BP_Bug_LadybugU_C", "Ladybug (U)" },
		{ "BP_Bug_LadybugR_C", "Ladybug (R)" },

		{ "BP_Bug_MantisU+_C", "Mantis (U)" },
		{ "BP_Bug_MantisR1+_C", "Mantis (R)" },
		{ "BP_Bug_MantisR2+_C", "Mantis (R)" },
		{ "BP_Bug_MantisE+_C", "Mantis (E)" },
		{ "BP_Bug_MantisU_C", "Mantis (U)" },
		{ "BP_Bug_MantisR1_C", "Mantis (R)" },
		{ "BP_Bug_MantisR2_C", "Mantis (R)" },
		{ "BP_Bug_MantisE_C", "Mantis (E)" },

		{ "BP_Bug_MothC+_C", "Moth (C)" },
		{ "BP_Bug_MothU+_C", "Moth (U)" },
		{ "BP_Bug_MothR+_C", "Moth (R)" },
		{ "BP_Bug_MothC_C", "Moth (C)" },
		{ "BP_Bug_MothU_C", "Moth (U)" },
		{ "BP_Bug_MothR_C", "Moth (R)" },

		{ "BP_Bug_PedeU+_C", "Pede (U)" },
		{ "BP_Bug_PedeR1+_C", "Pede (R)" },
		{ "BP_Bug_PedeR2+_C", "Pede (R)" },
		{ "BP_Bug_PedeU_C", "Pede (U)" },
		{ "BP_Bug_PedeR1_C", "Pede (R)" },
		{ "BP_Bug_PedeR2_C", "Pede (R)" },

		{ "BP_Bug_SnailU+_C", "Snail (U)" },
		{ "BP_Bug_SnailR+_C", "Snail (R)" },
		{ "BP_Bug_SnailU_C", "Snail (U)" },
		{ "BP_Bug_SnailR_C", "Snail (R)" },
	};

	// Search map for assigning gatherable type
	std::map<EGatherableType, std::vector<std::string>> GATHERABLE_TYPE_MAPPINGS = {
		{EGatherableType::Tree, {"TreeChoppable", "ShrubChoppable"}},
		{EGatherableType::Ore, {"_Mining_"}}
	};

	// Search map for assigning gatherable size
	std::map<EGatherableSize, std::vector<std::string>> GATHERABLE_SIZE_MAPPINGS = {
		{EGatherableSize::Small, {"_Small_", "_Sapling_"}},
		{EGatherableSize::Medium, {"_Medium_"}},
		{EGatherableSize::Large, {"_Large_", "_Large2_"}}
	};

	// Search map for assigning gatherable flags
	std::map<EGatherableFlags, std::vector<std::string>> GATHERABLE_FLAG_MAPPINGS = {
		{EGatherableFlags::CoOp, {"_CoOp_"}},
		{EGatherableFlags::Stone, {"_Mining_Stone_"}},
		{EGatherableFlags::Copper, {"_Mining_Copper_"}},
		{EGatherableFlags::Clay, {"_Mining_Clay_"}},
		{EGatherableFlags::Iron, {"_Mining_Iron_"}},
		{EGatherableFlags::Silver, {"_Mining_Silver_"}},
		{EGatherableFlags::Gold, {"_Mining_Gold_"}},
		{EGatherableFlags::Palium, {"_Mining_Palium_"}},
	};

	// Search gmap for assigning creature type
	std::map<ECreatureType, std::vector<std::string>> CREATURE_TYPE_MAPPINGS = {
		{ECreatureType::Creature, {"_ValeriaHuntingCreature_"}},
		{ECreatureType::Bug, {"_Bug_"}}
	};

	// Search map for assigning creature kind type
	std::map<ECreatureKind, std::vector<std::string>> CREATURE_KIND_MAPPINGS = {
		{ECreatureKind::Chapaa, {"_Chapaa_", "_ChapaaChase_"}},
		{ECreatureKind::Cearnuk, {"_Cearnuk_"}}
	};

	// Search map for assigning bug kind type
	std::map<EBugKind, std::vector<std::string>> CREATURE_BUGKIND_MAPPINGS = {
		{EBugKind::Bee, {"_Bug_Bee"}},
		{EBugKind::Beetle, {"_Bug_Beetle"}},
		{EBugKind::Buttlerfly, {"_Bug_Butterfly"}},
		{EBugKind::Cicada, {"_Bug_Cicada"}},
		{EBugKind::Crab, {"_Bug_Crab"}},
		{EBugKind::Cricket, {"_Bug_Cricket"}},
		{EBugKind::Dragonfly, {"_Bug_Dragonfly"}},
		{EBugKind::Glowbug, {"_Bug_Glowbug"}},
		{EBugKind::Ladybug, {"_Bug_Ladybug"}},
		{EBugKind::Mantis, {"_Bug_Mantis"}},
		{EBugKind::Moth, {"_Bug_Moth"}},
		{EBugKind::Pede, {"_Bug_Pede"}},
		{EBugKind::Snail, {"_Bug_Snail"}},
	};

	// Search map for assigning bug quality type - NOTE, USE ENDS_WITH INSTEAD OF CONTAINS
	std::map<EBugQuality, std::vector<std::string>> CREATURE_BUGQUALITY_MAPPINGS = {
		{EBugQuality::Common, {"C_C", "C+_C"}},
		{EBugQuality::Uncommon, {"U_C", "U+_C"}},
		{EBugQuality::Rare, {"R_C", "R1_C", "R2_C", "R1+_C", "R2+_C"}},
		{EBugQuality::Epic, {"E_C","E+_C"}}
	};

	// Configuration:
	bool bEnableESP = true;

	bool bEnableESPCulling;
	int CullDistance = 200;

	bool bVisualizeDefault = false;	// Visualizes other uncategorized gatherables
	bool bVisualizeCoOp = true; // Visualizes co-op (flow filled trees)
	bool bVisualizeTrees = true;
	bool bVisualizeStone = true;
	bool bVisualizeCopper = true;
	bool bVisualizeClay = true;
	bool bVisualizeIron = true;
	bool bVisualizeSilver = true;
	bool bVisualizeGold = true;
	bool bVisualizePalium = true;

	unsigned int Colors[(int)EESPColorSlot::MAX] = {
		IM_COL32(0xFF, 0x00, 0x00, 0xFF), // Default
		IM_COL32(0x00, 0x00, 0xFF, 0xFF), // CoOp
		IM_COL32(0x00, 0xFF, 0x00, 0xFF), // Trees
		IM_COL32(0x88, 0x8C, 0x8D, 0xFF), // Stone
		IM_COL32(0xB8, 0x73, 0x33, 0xFF), // Copper
		IM_COL32(0xAD, 0x50, 0x49, 0xFF), // Clay
		IM_COL32(0xA1, 0x9D, 0x94, 0xFF), // Iron
		IM_COL32(0xAA, 0xA9, 0xAD, 0xFF), // Silver
		IM_COL32(0xDB, 0xAC, 0x34, 0xFF), // Gold
		IM_COL32(0x94, 0xA0, 0xE2, 0xFF) // Palium
	};

};

