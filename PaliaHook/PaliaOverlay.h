#pragma once

#include <OverlayBase.h>
#include <map>
#include <vector>
#include <string>
#include <SDK.hpp>

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

struct FGatherableEntry
{
	AGatherableActor* Actor;
	FVector WorldPosition;
	std::string DisplayName;
	EGatherableType Type;
	EGatherableSize Size;
	EGatherableFlags Flags;
};


class PaliaOverlay : public OverlayBase
{
protected:
	virtual void DrawHUD();
	virtual void DrawOverlay();

private:
	void CacheGatherables();

private:
	// Last time gatherables were cached
	double LastCachedTime;

	// Cached gatherables
	std::vector<FGatherableEntry> CachedGatherables;

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

	};

	// Search map for assigning gatherable type
	std::map<EGatherableType, std::vector<std::string>> TYPE_MAPPINGS = {
		{EGatherableType::Tree, {"TreeChoppable", "ShrubChoppable"}},
		{EGatherableType::Ore, {"Mining_Stone", "Mining_Copper", "Mining_Clay", "Mining_Iron"}}
	};

	// Search map for assigning gatherable size
	std::map<EGatherableSize, std::vector<std::string>> SIZE_MAPPINGS = {
		{EGatherableSize::Small, {"_Small_", "_Sapling_"}},
		{EGatherableSize::Medium, {"_Medium_"}},
		{EGatherableSize::Large, {"_Large_", "_Large2_"}}
	};

	// Search map for assigning gatherable flags
	std::map<EGatherableFlags, std::vector<std::string>> FLAG_MAPPINGS = {
		{EGatherableFlags::CoOp, {"_CoOp_"}},
		{EGatherableFlags::Stone, {"_Mining_Stone_"}},
		{EGatherableFlags::Copper, {"_Mining_Copper_"}},
		{EGatherableFlags::Clay, {"_Mining_Clay_"}},
		{EGatherableFlags::Iron, {"_Mining_Iron_"}},
		{EGatherableFlags::Silver, {"_Mining_Silver_"}},
		{EGatherableFlags::Gold, {"_Mining_Gold_"}},
		{EGatherableFlags::Palium, {"_Mining_Palium_"}},
	};

	// Configuration:
	bool bEnableESP = true;
	bool bEnableESPCulling;
	int CullDistance = 200;

};

