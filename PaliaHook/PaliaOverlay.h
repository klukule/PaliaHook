#pragma once

#include <OverlayBase.h>
#include <map>
#include <vector>
#include <string>
#include <SDK.hpp>
#include <imgui.h>

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
	Palium = 1 << 7,
	CommonPlants = 1 << 8,
	UncommonPlants = 1 << 9,
	RarePlants = 1 << 10,
	EpicPlants = 1 << 11,
	Spices = 1 << 12,
	Oyster = 1 << 13,
	Seashell = 1 << 14
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
	// Color used for bugs of common grade
	CommonGradeBugs,
	// Color used for bugs of uncommon grade
	UncommonGradeBugs,
	// Color used for bugs of rare grade
	RareGradeBugs,
	// Color used for bugs of epic grade
	EpicGradeBugs,
	// Color used for plants of common grade
	CommonGradePlants,
	// Color used for plants of uncommon grade
	UncommonGradePlants,
	// Color used for plants of rare grade
	RareGradePlants,
	// Color used for plants of epic grade
	EpicGradePlants,
	// Color used for spices
	Spices,
	// Color used for Oyster
	Oyster,
	// Color used for Seashell
	Seashell,
	// Color used for the cearnuk
	Cearnuk,
	// Color used for the chapaa
	Chapaa,
	MAX
};


struct FGatherableEntry
{
	AActor* Actor;
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
		{"BP_TreeChoppable_Birch_Sapling_C", "Birch (Sapling)"},
		{"BP_TreeChoppable_Birch_Small_C", "Birch (S)"},
		{"BP_TreeChoppable_Birch_Medium_C", "Birch (M)"},
		{"BP_TreeChoppable_Birch_Large_C", "Birch (L)"},

		{"BP_TreeChoppable_Juniper_Sapling_C", "Juniper (Sapling)"},
		{"BP_TreeChoppable_Juniper_Small_C", "Juniper (S)"},
		{"BP_TreeChoppable_Juniper_Medium_C", "Juniper (M)"},
		{"BP_TreeChoppable_Juniper_Large_C", "Juniper (L)"},

		{"BP_TreeChoppable_Oak_Sapling_C", "Oak (Sapling)"},
		{"BP_TreeChoppable_Oak_Small_C", "Oak (S)"},
		{"BP_TreeChoppable_Oak_Medium_C", "Oak (M)"},
		{"BP_TreeChoppable_Oak_Large_C", "Oak (L)"},

		{"BP_TreeChoppable_Pine_Sapling_C", "Pine (Sapling)"},
		{"BP_TreeChoppable_Pine_Small_C", "Pine (S)"},
		{"BP_TreeChoppable_Pine_Medium_C", "Pine (M)"},
		{"BP_TreeChoppable_Pine_Large_C", "Pine (L)"},
		{"BP_TreeChoppable_Pine_Large2_C", "Pine (L)"},

		// FLOW TREES (They all drop the same wood, so tree type is omitted)
		{"BP_TreeChoppable_Birch_Sapling_CoOp_C", "Flow Tree (Sapling)"},
		{"BP_TreeChoppable_Birch_Small_CoOp_C", "Flow Tree (S)"},
		{"BP_TreeChoppable_Birch_Medium_CoOp_C", "Flow Tree (M)"},
		{"BP_TreeChoppable_Birch_Large_CoOp_C", "Flow Tree (L)"},

		{"BP_TreeChoppable_Juniper_Sapling_CoOp_C", "Flow Tree (Sapling)"},
		{"BP_TreeChoppable_Juniper_Small_CoOp_C", "Flow Tree (S)"},
		{"BP_TreeChoppable_Juniper_Medium_CoOp_C", "Flow Tree (M)"},
		{"BP_TreeChoppable_Juniper_Large_CoOp_C", "Flow Tree (L)"},

		{"BP_TreeChoppable_Oak_Sapling_CoOp_C", "Flow Tree (Sapling)"},
		{"BP_TreeChoppable_Oak_Small_CoOp_C", "Flow Tree (S)"},
		{"BP_TreeChoppable_Oak_Medium_CoOp_C", "Flow Tree (M)"},
		{"BP_TreeChoppable_Oak_Large_CoOp_C", "Flow Tree (L)"},

		{"BP_TreeChoppable_Pine_Sapling_CoOp_C", "Flow Tree (Sapling)"},
		{"BP_TreeChoppable_Pine_Small_CoOp_C", "Flow Tree (S)"},
		{"BP_TreeChoppable_Pine_Medium_CoOp_C", "Flow Tree (M)"},
		{"BP_TreeChoppable_Pine_Large_CoOp_C", "Flow Tree (L)"},
		{"BP_TreeChoppable_Pine_Large2_CoOp_C", "Flow Tree (L)"},

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
		{"BP_ValeriaHuntingCreature_Cearnuk_T1_C", "Sernuk (T1)"},
		{"BP_ValeriaHuntingCreature_Cearnuk_T2_C", "Sernuk (T2)"},
		{"BP_ValeriaHuntingCreature_Cearnuk_T3_C", "Sernuk (T3)"},

		{"BP_ValeriaHuntingCreature_Chapaa_T1_C", "Chapaa (T1)"},
		{"BP_ValeriaHuntingCreature_Chapaa_T2_C", "Chapaa (T2)"},
		{"BP_ValeriaHuntingCreature_Chapaa_T3_C", "Chapaa (T3)"},
		{"BP_ValeriaHuntingCreature_Chapaa_T3_MirrorImage_C", "Chapaa (T3 - Mirror)"}, // TODO: Probably do not display this one, as this is most likely the mirrage/ghost chapaa so no need to show it

		{"BP_ValeriaHuntingCreature_ChapaaChase_Base_C", "Chapaa Chase (Base)"},
		{"BP_ValeriaHuntingCreature_ChapaaChase_Fast_C", "Chapaa Chase (Fast)"},

		// Bugs
		{"BP_Bug_BeeU+_C", "Bahari Bee (U)"},		// Name not sure - this bee only rewards XP and no drop
		{"BP_Bug_BeeR+_C", "Golden Glory Bee (R)"},	// Name not sure - this bee only rewards XP and no drop		
		{"BP_Bug_BeeU_C", "Bahari Bee (U)"},
		{"BP_Bug_BeeR_C", "Golden Glory Bee (R)"},

		{"BP_Bug_BeetleC+_C", "Spotted Stinkbug (C)"},			// Name not sure - this bug only rewards XP and no drop
		{"BP_Bug_BeetleU+_C", "Proudhorned Stag Beetle (U)"},	// Name not sure - this bug only rewards XP and no drop
		{"BP_Bug_BeetleR+_C", "Raspberry Beetle (R)"},			// Name not sure - this bug only rewards XP and no drop
		{"BP_Bug_BeetleE+_C", "Ancient Amber Beetle (E)"},		// Name not sure - this bug only rewards XP and no drop
		{"BP_Bug_BeetleC_C", "Spotted Stinkbug (C)"},
		{"BP_Bug_BeetleU_C", "Proudhorned Stag Beetle (U)"},
		{"BP_Bug_BeetleR_C", "Raspberry Beetle (R)"},
		{"BP_Bug_BeetleE_C", "Ancient Amber Beetle (E)"},

		{"BP_Bug_ButterflyC+_C", "Common Blue Butterfly (C)"},		// Name not sure - this butterfly only rewards XP and no drop
		{"BP_Bug_ButterflyU+_C", "Duskwing Butterfly (U)"},			// Name not sure - this butterfly only rewards XP and no drop
		{"BP_Bug_ButterflyR+_C", "Brighteye Butterfly (R)"},		// Name not sure - this butterfly only rewards XP and no drop
		{"BP_Bug_ButterflyE+_C", "Rainbow-tipped Butterfly (E)"},	// Name not sure - this butterfly only rewards XP and no drop
		{"BP_Bug_ButterflyC_C", "Common Blue Butterfly (C)"},
		{"BP_Bug_ButterflyU_C", "Duskwing Butterfly (U)"},
		{"BP_Bug_ButterflyR_C", "Brighteye Butterfly (R)"},
		{"BP_Bug_ButterflyE_C", "Rainbow-tipped Butterfly (E)"},

		{ "BP_Bug_CicadaC+_C", "Common Bark Cicada (C)" },			// Name not sure - this cicada only rewards XP and no drop
		{ "BP_Bug_CicadaU+_C", "Cerulean Cicada (U)" },				// Name not sure - this cicada only rewards XP and no drop
		{ "BP_Bug_CicadaR+_C", "Spitfire Cicada (R)" },				// Name not sure - this cicada only rewards XP and no drop
		{ "BP_Bug_CicadaC_C", "Common Bark Cicada (C)" },
		{ "BP_Bug_CicadaU_C", "Cerulean Cicada (U)" },
		{ "BP_Bug_CicadaR_C", "Spitfire Cicada (R)" },

		{ "BP_Bug_CrabC+_C", "Bahari Crab (C)" },					// Name not sure - this crab only rewards XP and no drop
		{ "BP_Bug_CrabU+_C", "Spineshell Crab (U)" },				// Name not sure - this crab only rewards XP and no drop
		{ "BP_Bug_CrabR+_C", "Vampire Crab (R)" },					// Name not sure - this crab only rewards XP and no drop
		{ "BP_Bug_CrabC_C", "Bahari Crab (C)" },
		{ "BP_Bug_CrabU_C", "Spineshell Crab (U)" },
		{ "BP_Bug_CrabR_C", "Vampire Crab (R)" },

		{ "BP_Bug_CricketC+_C", "Common Field Cricket (C)" },		// Name not sure - this cricket only rewards XP and no drop
		{ "BP_Bug_CricketU+_C", "Garden Leafhopper (U)" },			// Name not sure - this cricket only rewards XP and no drop
		{ "BP_Bug_CricketR+_C", "Azure Stonehopper (R)" },			// Name not sure - this cricket only rewards XP and no drop
		{ "BP_Bug_CricketC_C", "Common Field Cricket (C)" },
		{ "BP_Bug_CricketU_C", "Garden Leafhopper (U)" },
		{ "BP_Bug_CricketR_C", "Azure Stonehopper (R)" },

		{ "BP_Bug_DragonflyC+_C", "Brushtail Dragonfly (C)" },		// Name not sure - this dragonfly only rewards XP and no drop
		{ "BP_Bug_DragonflyU+_C", "Inky Dragonfly (U)" },			// Name not sure - this dragonfly only rewards XP and no drop
		{ "BP_Bug_DragonflyR+_C", "Firebreathing Dragonfly (R)" },	// Name not sure - this dragonfly only rewards XP and no drop
		{ "BP_Bug_DragonflyE+_C", "Jewelwing Dragonfly (E)" },		// Name not sure - this dragonfly only rewards XP and no drop
		{ "BP_Bug_DragonflyC_C", "Brushtail Dragonfly (C)" },
		{ "BP_Bug_DragonflyU_C", "Inky Dragonfly (U)" },
		{ "BP_Bug_DragonflyR_C", "Firebreathing Dragonfly (R)" },
		{ "BP_Bug_DragonflyE_C", "Jewelwing Dragonfly (E)" },

		{ "BP_Bug_GlowbugC+_C", "Paper Lantern Bug (C)" },			// Name not sure - this glowbug only rewards XP and no drop
		{ "BP_Bug_GlowbugR+_C", "Bahari Glowbug (R)" },				// Name not sure - this glowbug only rewards XP and no drop
		{ "BP_Bug_GlowbugC_C", "Paper Lantern Bug (C)" },
		{ "BP_Bug_GlowbugR_C", "Bahari Glowbug (R)" },

		{ "BP_Bug_LadybugU+_C", "Garden Ladybug (U)" },				// Name not sure - this ladybug only rewards XP and no drop
		{ "BP_Bug_LadybugR+_C", "Princess Ladybug (R)" },			// Name not sure - this ladybug only rewards XP and no drop
		{ "BP_Bug_LadybugU_C", "Garden Ladybug (U)" },	
		{ "BP_Bug_LadybugR_C", "Princess Ladybug (R)" },

		{ "BP_Bug_MantisU+_C", "Garden Mantis (U)" },				// Name not sure - this mantis only rewards XP and no drop
		{ "BP_Bug_MantisR1+_C", "Spotted Mantis (R)" },				// Name not sure - this mantis only rewards XP and no drop
		{ "BP_Bug_MantisR2+_C", "Leafstalker Mantis (R)" },			// Name not sure - this mantis only rewards XP and no drop
		{ "BP_Bug_MantisE+_C", "Fairy Mantis (E)" },				// Name not sure - this mantis only rewards XP and no drop
		{ "BP_Bug_MantisU_C", "Garden Mantis (U)" },
		{ "BP_Bug_MantisR1_C", "Spotted Mantis (R)" },
		{ "BP_Bug_MantisR2_C", "Leafstalker Mantis (R)" },
		{ "BP_Bug_MantisE_C", "Fairy Mantis (E)" },

		{ "BP_Bug_MothC+_C", "Kilima Night Moth (C)" },				// Name not sure - this moth only rewards XP and no drop
		{ "BP_Bug_MothU+_C", "Lunar Fairy Moth (U)" },				// Name not sure - this moth only rewards XP and no drop
		{ "BP_Bug_MothR+_C", "Gossamer Veil Moth (R)" },			// Name not sure - this moth only rewards XP and no drop
		{ "BP_Bug_MothC_C", "Kilima Night Moth (C)" },
		{ "BP_Bug_MothU_C", "Lunar Fairy Moth (U)" },
		{ "BP_Bug_MothR_C", "Gossamer Veil Moth (R)" },

		{ "BP_Bug_PedeU+_C", "Garden Millipede (U)" },				// Name not sure - this millipede only rewards XP and no drop
		{ "BP_Bug_PedeR1+_C", "Hairy Millipede (R)" },				// Name not sure - this millipede only rewards XP and no drop
		{ "BP_Bug_PedeR2+_C", "Scintillating Centipede (R)" },		// Name not sure - this centipede only rewards XP and no drop
		{ "BP_Bug_PedeU_C", "Garden Millipede (U)" },
		{ "BP_Bug_PedeR1_C", "Hairy Millipede (R)" },
		{ "BP_Bug_PedeR2_C", "Scintillating Centipede (R)" },

		{ "BP_Bug_SnailU+_C", "Garden Snail (U)" },					// Name not sure - this snail only rewards XP and no drop
		{ "BP_Bug_SnailR+_C", "Stripeshell Snail (R)" },			// Name not sure - this snail only rewards XP and no drop
		{ "BP_Bug_SnailU_C", "Garden Snail (U)" },
		{ "BP_Bug_SnailR_C", "Stripeshell Snail (R)" },


		// Gatherables

		// Common
		{ "BP_Gatherable_MushroomR_C", "Moutain Morel (C)" },
		{ "BP_Gatherable_MushroomR+_C", "Moutain Morel (R)" },

		{ "BP_Oyster_C", "Oyster (C)" },
		{ "BP_Oyster+_C", "Oyster (R)" },

		{ "BP_Seashell_C", "Shell (C)" },
		{ "BP_Seashell+_C", "Shell (R)" },

		{ "BP_SundropLillies_C", "Sundrop Lilly (C)" },
		{ "BP_SundropLillies+_C", "Sundrop Lilly (R)" },

		// Uncommon
		{ "BP_Coral_C", "Coral (C)" },
		{ "BP_Coral+_C", "Coral (R)" },

		{ "BP_PoisonFlower_C", "Briar Daisy (C)" },
		{ "BP_PoisonFlower+_C", "Briar Daisy (R)" },

		{ "BP_WaterFlower_C", "Crystal Lake Lotus (C)" },
		{ "BP_WaterFlower+_C", "Crystal Lake Lotus (R)" },

		{ "BP_Moss_EmeraldCarpet_C", "Emerald Carpet Moss (C)" },
		{ "BP_Moss_EmeraldCarpet+_C", "Emerald Carpet Moss (R)" },

		{ "BP_Spiced_Sprouts_C", "Spice Sprouts (C)" },
		{ "BP_Spiced_Sprouts+_C", "Spice Sprouts (R)" },

		{ "BP_SweetLeaves_C", "Sweet Leaf (C)" },
		{ "BP_SweetLeaves+_C", "Sweet Leaf (R)" },

		{ "BP_WildGarlic_C", "Wild Garlic (C)" },
		{ "BP_WildGarlic+_C", "Wild Garlic (R)" },

		// Rare
		{ "BP_Gatherable_MushroomBlue_C", "Brightshroom (C)" },
		{ "BP_Gatherable_MushroomBlue+_C", "Brightshroom (R)" },

		{ "BP_Moss_DragonsBeard_C", "Dragon's Beard Peat (C)" },
		{ "BP_Moss_DragonsBeard+_C", "Dragon's Beard Peat (R)" },

		{ "BP_Spice_HeatRoot_C", "Heat Root (C)" },
		{ "BP_Spice_HeatRoot+_C", "Heat Root (R)" },

		// Epic
		{ "BP_HeartdropLilly_C", "Heartdrop Lilly (C)" },
		{ "BP_HeartdropLilly+_C", "Heartdrop Lilly (R)" },

		{ "BP_Spice_DariCloves_C", "Dari Cloves (C)" },
		{ "BP_Spice_DariCloves+_C", "Dari Cloves (R)" },
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
		{EGatherableFlags::CommonPlants, {"Gatherable_Mushroom", "SundropLillies"}},
		{EGatherableFlags::UncommonPlants, {"Coral", "PoisonFlower", "WaterFlower", "Moss_EmeraldCarpet", "Spiced_Sprouts", "SweetLeaves", "WildGarlic"}},
		{EGatherableFlags::RarePlants, {"Spice_HeatRoot", "Moss_DragonsBeard", "Gatherable_MushroomBlue"}},
		{EGatherableFlags::EpicPlants, {"HeartdropLilly", "Spice_DariCloves"}},
		{EGatherableFlags::Spices, {"WildGarlic", "Spiced_Sprouts", "SweetLeaves", "Spice_HeatRoot", "Spice_DariCloves"}},
		{EGatherableFlags::Oyster, {"Oyster"}},
		{EGatherableFlags::Seashell, {"Seashell"}},
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

	bool bVisualizeCearnuk = true;
	bool bVisualizeChapaa = true;
	bool bVisualizeCommonBugs = true;
	bool bVisualizeUncommonBugs = true;
	bool bVisualizeRareBugs = true;
	bool bVisualizeEpicBugs = true;

	bool bVisualizeCommonPlants = true;
	bool bVisualizeUncommonPlants = true;
	bool bVisualizeRarePlants = true;
	bool bVisualizeEpicPlants = true;
	bool bVisualizeSpices = true;
	bool bVisualizeOysters = true;
	bool bVisualizeSeashells = true;

	unsigned int Colors[(int)EESPColorSlot::MAX] = {
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF), // Default

		IM_COL32(0x00, 0x00, 0xFF, 0xFF), // CoOp
		IM_COL32(0x00, 0xFF, 0x00, 0xFF), // Trees
		IM_COL32(0x88, 0x8C, 0x8D, 0xFF), // Stone
		IM_COL32(0xB8, 0x73, 0x33, 0xFF), // Copper
		IM_COL32(0xAD, 0x50, 0x49, 0xFF), // Clay
		IM_COL32(0xA1, 0x9D, 0x94, 0xFF), // Iron
		IM_COL32(0xAA, 0xA9, 0xAD, 0xFF), // Silver
		IM_COL32(0xDB, 0xAC, 0x34, 0xFF), // Gold
		IM_COL32(0x94, 0xA0, 0xE2, 0xFF), // Palium
		
		IM_COL32(0x0B, 0x61, 0xFF, 0xFF), // Common Grade Bugs
		IM_COL32(0x6F, 0xF4, 0x43, 0xFF), // Uncommon Grade Bugs
		IM_COL32(0x21, 0x65, 0x71, 0xFF), // Rare Grade Bugs
		IM_COL32(0x69, 0x4C, 0xFF, 0xFF), // Epic Grade Bugs

		IM_COL32(0x0B, 0x61, 0xFF, 0xFF), // Common Grade Gatherables
		IM_COL32(0x6F, 0xF4, 0x43, 0xFF), // Uncommon Grade Gatherables
		IM_COL32(0x21, 0x65, 0x71, 0xFF), // Rare Grade Gatherables
		IM_COL32(0x69, 0x4C, 0xFF, 0xFF), // Epic Grade Gatherables
		IM_COL32(0xFF, 0x00, 0x00, 0xFF), // Spices
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF), // Oyster
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF), // Seashell

		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF), // Cearnuk
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF) // Chapaa
	};

};

