#pragma once

#include <OverlayBase.h>
#include <map>
#include <vector>
#include <string>
#include <SDK.hpp>
#include <imgui.h>

using namespace SDK;

enum class EType
{
	Unknown,
	Tree,
	Ore,
	Bug,
	Animal,
	Forage,
	Fish,
	Loot,
	Players,
	NPCs,
	Quest,
	MAX
};

enum class ECreatureKind
{
	Unknown,
	Chapaa,
	Cearnuk,
	MAX
};

enum class ECreatureQuality
{
	Unknown,
	Tier1,
	Tier2,
	Tier3,
	Chase,
	MAX
};

enum class EBugKind
{
	Unknown,
	Bee,
	Beetle,
	Butterfly,
	Cicada,
	Crab,
	Cricket,
	Dragonfly,
	Glowbug,
	Ladybug,
	Mantis,
	Moth,
	Pede,
	Snail,
	MAX
};

enum class EBugQuality
{
	Unknown,
	Common,
	Uncommon,
	Rare,
	Rare2,
	Epic,
	MAX
};

enum class EGatherableSize
{
	Unknown,
	Small,
	Medium,
	Large,
	MAX
};

enum class ETreeType
{
	Unknown,
	Flow,
	Heartwood,
	Sapwood,
	MAX
};

enum class EOreType
{
	Unknown,
	Stone,
	Copper,
	Clay,
	Iron,
	Silver,
	Gold,
	Palium,
	MAX
};

enum class EFishType
{
	Unknown,
	Node,
	Hook,
	MAX
};

enum class EForageableType
{
	Unknown,
	Oyster,
	Coral,
	MushroomBlue,
	MushroomRed,
	Heartdrop,
	DragonsBeard,
	EmeraldCarpet,
	PoisonFlower,
	Shell,
	DariCloves,
	HeatRoot,
	SpicedSprouts,
	Sundrop,
	SweetLeaves,
	WaterFlower,
	Garlic,
	MAX
};

enum class EOneOffs {
	Player,
	NPC,
	Loot,
	Quest,
	FishPool,
	FishHook,
	MAX
};

struct FEntry
{
	AActor* Actor;
	FVector WorldPosition;
	std::string DisplayName;
	EType ActorType;
	int Type;
	int Quality;
	int Variant;
};


class PaliaOverlay : public OverlayBase
{
protected:
	virtual void DrawHUD();
	virtual void DrawOverlay();

public:
	void SetupColors();
	void ProcessActors(int);

public:
	// Last time gatherables were cached
	double LastCachedTime;
	int ActorStep;

	// Cached actors
	std::vector<FEntry> CachedActors;

	ULevel* CurrentLevel;

	// Class name -> Display name map
	std::map<std::string, std::string> CLASS_NAME_ALIAS = {
		// TREES
		{"BP_TreeChoppable_Birch_Sapling_C", "Birch (Sap)"},
		{"BP_TreeChoppable_Birch_Small_C", "Birch (S)"},
		{"BP_TreeChoppable_Birch_Medium_C", "Birch (M)"},
		{"BP_TreeChoppable_Birch_Large_C", "Birch (L)"},

		{"BP_TreeChoppable_Juniper_Sapling_C", "Juniper (Sap)"},
		{"BP_TreeChoppable_Juniper_Small_C", "Juniper (S)"},
		{"BP_TreeChoppable_Juniper_Medium_C", "Juniper (M)"},
		{"BP_TreeChoppable_Juniper_Large_C", "Juniper (L)"},

		{"BP_TreeChoppable_Oak_Sapling_C", "Oak (Sap)"},
		{"BP_TreeChoppable_Oak_Small_C", "Oak (S)"},
		{"BP_TreeChoppable_Oak_Medium_C", "Oak (M)"},
		{"BP_TreeChoppable_Oak_Large_C", "Oak (L)"},

		{"BP_TreeChoppable_Pine_Sapling_C", "Pine (Sap)"},
		{"BP_TreeChoppable_Pine_Small_C", "Pine (S)"},
		{"BP_TreeChoppable_Pine_Medium_C", "Pine (M)"},
		{"BP_TreeChoppable_Pine_Large_C", "Pine (L)"},
		{"BP_TreeChoppable_Pine_Large2_C", "Pine (L)"},

		// CO-OP TREES
		{"BP_TreeChoppable_Birch_Sapling_CoOp_C", "Flow-Infused Birch (Sap)"},
		{"BP_TreeChoppable_Birch_Small_CoOp_C", "Flow-Infused Birch (S)"},
		{"BP_TreeChoppable_Birch_Medium_CoOp_C", "Flow-Infused Birch (M)"},
		{"BP_TreeChoppable_Birch_Large_CoOp_C", "Flow-Infused Birch (L)"},

		{"BP_TreeChoppable_Juniper_Sapling_CoOp_C", "Flow-Infused Juniper (Sap)"},
		{"BP_TreeChoppable_Juniper_Small_CoOp_C", "Flow-Infused Juniper (S)"},
		{"BP_TreeChoppable_Juniper_Medium_CoOp_C", "Flow-Infused Juniper (M)"},
		{"BP_TreeChoppable_Juniper_Large_CoOp_C", "Flow-Infused Juniper (L)"},

		{"BP_TreeChoppable_Oak_Sapling_CoOp_C", "Flow-Infused Oak (Sap)"},
		{"BP_TreeChoppable_Oak_Small_CoOp_C", "Flow-Infused Oak (S)"},
		{"BP_TreeChoppable_Oak_Medium_CoOp_C", "Flow-Infused Oak (M)"},
		{"BP_TreeChoppable_Oak_Large_CoOp_C", "Flow-Infused Oak (L)"},

		{"BP_TreeChoppable_Pine_Sapling_CoOp_C", "Flow-Infused Pine (Sap)"},
		{"BP_TreeChoppable_Pine_Small_CoOp_C", "Flow-Infused Pine (S)"},
		{"BP_TreeChoppable_Pine_Medium_CoOp_C", "Flow-Infused Pine (M)"},
		{"BP_TreeChoppable_Pine_Large_CoOp_C", "Flow-Infused Pine (L)"},
		{"BP_TreeChoppable_Pine_Large2_CoOp_C", "Flow-Infused Pine (L)"},

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
		{"BP_ValeriaHuntingCreature_Cearnuk_T1_C", "Sernuk"},
		{"BP_ValeriaHuntingCreature_Cearnuk_T2_C", "Elder Sernuk"},
		{"BP_ValeriaHuntingCreature_Cearnuk_T3_C", "Proudhorn Sernuk"},

		{"BP_ValeriaHuntingCreature_Chapaa_T1_C", "Chapaa"},
		{"BP_ValeriaHuntingCreature_Chapaa_T2_C", "Striped Chapaa"},
		{"BP_ValeriaHuntingCreature_Chapaa_T3_C", "Azure Chapaa"},
		{"BP_ValeriaHuntingCreature_Chapaa_T3_MirrorImage_C", "Chapaa (T3 - Mirror)"}, // TODO: Probably do not display this one, as this is most likely the mirrage/ghost chapaa so no need to show it

		{"BP_ValeriaHuntingCreature_ChapaaChase_Base_C", "Chapaa Chase (Base)"},
		{"BP_ValeriaHuntingCreature_ChapaaChase_Fast_C", "Chapaa Chase (Fast)"},

		// TODO: Provide names that are the same as their drops ingame

		// Bugs
		{"BP_Bug_BeeU+_C", "Bahari Bee *"},
		{"BP_Bug_BeeR+_C", "Golden Glory Bee *"},
		{"BP_Bug_BeeU_C", "Bahari Bee"},
		{"BP_Bug_BeeR_C", "Golden Glory Bee"},

		{"BP_Bug_BeetleC+_C", "Spotted Stink Bug *"},
		{"BP_Bug_BeetleU+_C", "Proudhorned Stag Beetle *"},
		{"BP_Bug_BeetleR+_C", "Raspberry Beetle *"},
		{"BP_Bug_BeetleE+_C", "Ancient Amber Beetle *"},
		{"BP_Bug_BeetleC_C", "Spotted Stink Bug"},
		{"BP_Bug_BeetleU_C", "Proudhorned Stag Beetle"},
		{"BP_Bug_BeetleR_C", "Raspberry Beetle"},
		{"BP_Bug_BeetleE_C", "Ancient Amber Beetle"},

		{"BP_Bug_ButterflyC+_C", "Common Blue Butterfly *"},
		{"BP_Bug_ButterflyU+_C", "Duskwing Butterfly *"},
		{"BP_Bug_ButterflyR+_C", "Brighteye Butterfly *"},
		{"BP_Bug_ButterflyE+_C", "Rainbow-Tipped Butterfly *"},
		{"BP_Bug_ButterflyC_C", "Common Blue Butterfly"},
		{"BP_Bug_ButterflyU_C", "Duskwing Butterfly"},
		{"BP_Bug_ButterflyR_C", "Brighteye Butterfly"},
		{"BP_Bug_ButterflyE_C", "Rainbow-Tipped Butterfly"},

		{ "BP_Bug_CicadaC+_C", "Common Bark Cicada *" },
		{ "BP_Bug_CicadaU+_C", "Cerulean Cicada *" },
		{ "BP_Bug_CicadaR+_C", "Spitfire Cicada *" },
		{ "BP_Bug_CicadaC_C", "Common Bark Cicada" },
		{ "BP_Bug_CicadaU_C", "Cerulean Cicada" },
		{ "BP_Bug_CicadaR_C", "Spitfire Cicada" },

		{ "BP_Bug_CrabC+_C", "Bahari Crab *" },
		{ "BP_Bug_CrabU+_C", "Spineshell Crab *" },
		{ "BP_Bug_CrabR+_C", "Vampire Crab *" },
		{ "BP_Bug_CrabC_C", "Bahari Crab" },
		{ "BP_Bug_CrabU_C", "Spineshell Crab" },
		{ "BP_Bug_CrabR_C", "Vampire Crab" },

		{ "BP_Bug_CricketC+_C", "Common Field Cricket *" },
		{ "BP_Bug_CricketU+_C", "Garden Leafhopper *" },
		{ "BP_Bug_CricketR+_C", "Azure Stonehopper *" },
		{ "BP_Bug_CricketC_C", "Common Field Cricket" },
		{ "BP_Bug_CricketU_C", "Garden Leafhopper" },
		{ "BP_Bug_CricketR_C", "Azure Stonehopper" },

		{ "BP_Bug_DragonflyC+_C", "Brushtail Dragonfly *" },
		{ "BP_Bug_DragonflyU+_C", "Inky Dragonfly *" },
		{ "BP_Bug_DragonflyR+_C", "Firebreathing Dragonfly *" },
		{ "BP_Bug_DragonflyE+_C", "Jewelwing Dragonfly *" },
		{ "BP_Bug_DragonflyC_C", "Brushtail Dragonfly" },
		{ "BP_Bug_DragonflyU_C", "Inky Dragonfly" },
		{ "BP_Bug_DragonflyR_C", "Firebreathing Dragonfly" },
		{ "BP_Bug_DragonflyE_C", "Jewelwing Dragonfly" },

		{ "BP_Bug_GlowbugC+_C", "Paper Lantern Bug *" },
		{ "BP_Bug_GlowbugR+_C", "Bahari Glowbug *" },
		{ "BP_Bug_GlowbugC_C", "Paper Lantern Bug" },
		{ "BP_Bug_GlowbugR_C", "Bahari Glowbug" },

		{ "BP_Bug_LadybugU+_C", "Garden Ladybug *" },
		{ "BP_Bug_LadybugR+_C", "Princess Ladybug *" },
		{ "BP_Bug_LadybugU_C", "Garden Ladybug" },
		{ "BP_Bug_LadybugR_C", "Princess Ladybug" },

		{ "BP_Bug_MantisU+_C", "Garden Mantis *" },
		{ "BP_Bug_MantisR1+_C", "Spotted Mantis *" },
		{ "BP_Bug_MantisR2+_C", "Leafstalker Mantis *" },
		{ "BP_Bug_MantisE+_C", "Fairy Mantis *" },
		{ "BP_Bug_MantisU_C", "Garden Mantis" },
		{ "BP_Bug_MantisR1_C", "Spotted Mantis" },
		{ "BP_Bug_MantisR2_C", "Leafstalker Mantis" },
		{ "BP_Bug_MantisE_C", "Fairy Mantis" },

		{ "BP_Bug_MothC+_C", "Kilima Night Moth *" },
		{ "BP_Bug_MothU+_C", "Lunar Fairy Moth *" },
		{ "BP_Bug_MothR+_C", "Gossamer Veil Moth *" },
		{ "BP_Bug_MothC_C", "Kilima Night Moth" },
		{ "BP_Bug_MothU_C", "Lunar Fairy Moth" },
		{ "BP_Bug_MothR_C", "Gossamer Veil Moth" },

		{ "BP_Bug_PedeU+_C", "Garden Millipede *" },
		{ "BP_Bug_PedeR1+_C", "Hairy Millipede *" },
		{ "BP_Bug_PedeR2+_C", "Scintillating Centipede *" },
		{ "BP_Bug_PedeU_C", "Garden Millipede" },
		{ "BP_Bug_PedeR1_C", "Hairy Millipede" },
		{ "BP_Bug_PedeR2_C", "Scintillating Centipede" },

		{ "BP_Bug_SnailU+_C", "Garden Snail *" },
		{ "BP_Bug_SnailR+_C", "Stripeshell Snail *" },
		{ "BP_Bug_SnailU_C", "Garden Snail" },
		{ "BP_Bug_SnailR_C", "Stripeshell Snail" },

		// Forageables
		{ "BP_Coral+_C", "Coral *" }, // have yet to see a SQ (star quality)
		{ "BP_Coral_C", "Coral" },
		{ "BP_Gatherable_MushroomBlue+_C", "Brightshroom *" },
		{ "BP_Gatherable_MushroomBlue_C", "Brightshroom" },
		{ "BP_Gatherable_MushroomR+_C", "Mountain Morel *" },
		{ "BP_Gatherable_MushroomR_C", "Mountain Morel" },
		{ "BP_HeartdropLilly+_C", "Heartdrop Lily *" }, // have yet to see a SQ
		{ "BP_HeartdropLilly_C", "Heartdrop Lily" },
		{ "BP_Moss_DragonsBeard+_C", "Dragon's Beard Peat *" },
		{ "BP_Moss_DragonsBeard_C", "Dragon's Beard Peat" },
		{ "BP_Moss_EmeraldCarpet+_C", "Emerald Carpet Moss *" },
		{ "BP_Moss_EmeraldCarpet_C", "Emerald Carpet Moss" },
		{ "BP_Oyster_C", "Unopened Oyster" },
		{ "BP_PoisonFlower+_C", "Briar Daisy *" },
		{ "BP_PoisonFlower_C", "Briar Daisy" },
		{ "BP_Seashell+_C", "Shell *" }, // have yet to see a SQ
		{ "BP_Seashell_C", "Shell" },
		{ "BP_Spice_DariCloves+_C", "Dari Cloves *" },
		{ "BP_Spice_DariCloves_C", "Dari Cloves" },
		{ "BP_Spice_HeatRoot+_C", "Heat Root *" },
		{ "BP_Spice_HeatRoot_C", "Heat Root" },
		{ "BP_Spiced_Sprouts+_C", "Spice Sprouts *" },
		{ "BP_Spiced_Sprouts_C", "Spice Sprouts" },
		{ "BP_SundropLillies+_C", "Sundrop Lily *" },
		{ "BP_SundropLillies_C", "Sundrop Lily" },
		{ "BP_SweetLeaves+_C", "Sweet Leaf *" },
		{ "BP_SweetLeaves_C", "Sweet Leaf" },
		{ "BP_WaterFlower+_C", "Crystal Lake Lotus *" },
		{ "BP_WaterFlower_C", "Crystal Lake Lotus" },
		{ "BP_WildGarlic+_C", "Wild Garlic *" },
		{ "BP_WildGarlic_C", "Wild Garlic" },

		// Fishing Nodes
		{ "BP_WaterPlane_Fishing_OceanAZ1_SQ_C", "Coast" },
		{ "BP_WaterPlane_Fishing_PondVillage_SQ_C", "Pond" },
		{ "BP_WaterPlane_Fishing_LakeVillage_SQ_C", "Lake" },
		{ "BP_WaterPlane_Fishing_RiverVillage_SQ_C", "Kalima River" },
		{ "BP_WaterPlane_Fishing_RiverAZ1_SQ_C", "Bahari River" },
		{ "BP_WaterPlane_Fishing_AZ1_Cave_SQ_C", "Cave" },

		// Fish
			// Finish verifying names
		{ "BP_FishingJackpot", "Waterlogged Chest" },
		{ "BP_FishingRecipeBook", "Recipe Book" },
		{ "BP_Fish_AlbinoEeel", "BP_Fish_AlbinoEeel" },
		{ "BP_Fish_Alligator_Gar", "BP_Fish_Alligator_Gar" },
		{ "BP_Fish_AncientFish", "BP_Fish_AncientFish" },
		{ "BP_Fish_BahariBream", "BP_Fish_BahariBream" },
		{ "BP_Fish_Bahari_Pike", "BP_Fish_Bahari_Pike" },
		{ "BP_Fish_Barracuda", "BP_Fish_Barracuda" },
		{ "BP_Fish_BatRay", "BP_Fish_BatRay" },
		{ "BP_Fish_Beluga_Sturgeon", "BP_Fish_Beluga_Sturgeon" },
		{ "BP_Fish_Bigeye_Tuna", "BP_Fish_Bigeye_Tuna" },
		{ "BP_Fish_Black_Sea_Bass", "BP_Fish_Black_Sea_Bass" },
		{ "BP_Fish_Blobfish", "BP_Fish_Blobfish" },
		{ "BP_Fish_BlueMarlin", "BP_Fish_BlueMarlin" },
		{ "BP_Fish_Blue_Spotted_Ray", "BP_Fish_Blue_Spotted_Ray" },
		{ "BP_Fish_Cactus_Moray", "BP_Fish_Cactus_Moray" },
		{ "BP_Fish_CalicoKoi", "BP_Fish_CalicoKoi" },
		{ "BP_Fish_CantankerousKoi", "BP_Fish_CantankerousKoi" },
		{ "BP_Fish_Channel_Catfish", "Channel Catfish" },
		{ "BP_Fish_Chub", "BP_Fish_Chub" },
		{ "BP_Fish_Cloudfish", "BP_Fish_Cloudfish" },
		{ "BP_Fish_Codfish", "BP_Fish_Codfish" },
		{ "BP_Fish_Crimson_Fangtooth", "BP_Fish_Crimson_Fangtooth" },
		{ "BP_Fish_Crucian_Carp", "Crucian Carp" },
		{ "BP_Fish_Cutthroat_Trout", "BP_Fish_Cutthroat_Trout" },
		{ "BP_Fish_Dawnray", "BP_Fish_Dawnray" },
		{ "BP_Fish_Duskray", "Duskray" },
		{ "BP_Fish_Enchanted_Pupfish", "BP_Fish_Enchanted_Pupfish" },
		{ "BP_Fish_Energized_Piranha", "Energized Piranha" },
		{ "BP_Fish_EyelessMinnow", "BP_Fish_EyelessMinnow" },
		{ "BP_Fish_FairyCarp", "BP_Fish_FairyCarp" },
		{ "BP_Fish_Fathead_Minnow", "BP_Fish_Fathead_Minnow" },
		{ "BP_Fish_Flametongue_Ray", "BP_Fish_Flametongue_Ray" },
		{ "BP_Fish_FreshwaterEel", "BP_Fish_FreshwaterEel" },
		{ "BP_Fish_Giant_Goldfish", "BP_Fish_Giant_Goldfish" },
		{ "BP_Fish_Giant_Kilima_Stingray", "BP_Fish_Giant_Kilima_Stingray" },
		{ "BP_Fish_Gillyfin", "BP_Fish_Gillyfin" },
		{ "BP_Fish_GoldenSalmon", "Golden Salmon" },
		{ "BP_Fish_Honey_Loach", "BP_Fish_Honey_Loach" },
		{ "BP_Fish_Hypnotic_Moray", "BP_Fish_Hypnotic_Moray" },
		{ "BP_Fish_Indigo_Lamprey", "BP_Fish_Indigo_Lamprey" },
		{ "BP_Fish_Kenjis_Carp", "Kenli's Carp" },
		{ "BP_Fish_KilimaCatFish", "BP_Fish_KilimaCatFish" },
		{ "BP_Fish_Kilima_Grayling", "Kilima Grayling" },
		{ "BP_Fish_Kilima_Redfin", "BP_Fish_Kilima_Redfin" },
		{ "BP_Fish_LargemouthBass", "BP_Fish_LargemouthBass" },
		{ "BP_Fish_Midnight_Paddlefish", "BP_Fish_Midnight_Paddlefish" },
		{ "BP_Fish_Mirror_Carp", "BP_Fish_Mirror_Carp" },
		{ "BP_Fish_Mottled_Gobi", "BP_Fish_Mottled_Gobi" },
		{ "BP_Fish_Mudminnow", "BP_Fish_Mudminnow" },
		{ "BP_Fish_MutatedAngler", "BP_Fish_MutatedAngler" },
		{ "BP_Fish_Oily_Anchovy", "BP_Fish_Oily_Anchovy" },
		{ "BP_Fish_Orange_Bluegill", "BP_Fish_Orange_Bluegill" },
		{ "BP_Fish_Paddlefish", "BP_Fish_Paddlefish" },
		{ "BP_Fish_PaintedPerch", "BP_Fish_PaintedPerch" },
		{ "BP_Fish_Platinum_Chad", "Platinum Chad" },
		{ "BP_Fish_PrismTrout", "BP_Fish_PrismTrout" },
		{ "BP_Fish_RadiantSunfish", "Radiant Sunfish" },
		{ "BP_Fish_Rainbow_Trout", "Rainbow Trout" },
		{ "BP_Fish_Red-bellied_piranha", "Red-bellied Piranha" },
		{ "BP_Fish_RibbontailRay", "BP_Fish_RibbontailRay" },
		{ "BP_Fish_Rosy_Bitterling", "Rosy Bitterling" },
		{ "BP_Fish_Sardine", "BP_Fish_Sardine" },
		{ "BP_Fish_Scarlet_Koi", "BP_Fish_Scarlet_Koi" },
		{ "BP_Fish_Shimmerfin", "BP_Fish_Shimmerfin" },
		{ "BP_Fish_SilverSalmon", "Silver Salmon" },
		{ "BP_Fish_Silvery_Minnow", "Silvery Minnow" },
		{ "BP_Fish_SmallmouthBass", "BP_Fish_SmallmouthBass" },
		{ "BP_Fish_SpottedBullhead", "Spotted Bullhead" },
		{ "BP_Fish_Stalking_Catfish", "BP_Fish_Stalking_Catfish" },
		{ "BP_Fish_Stickleback", "Stickleback" },
		{ "BP_Fish_Stonefish", "BP_Fish_Stonefish" },
		{ "BP_Fish_Stormray", "BP_Fish_Stormray" },
		{ "BP_Fish_StripedSturgeon", "BP_Fish_StripedSturgeon" },
		{ "BP_Fish_Striped_Dace", "Striped Dace" },
		{ "BP_Fish_Swordfin_Eel", "BP_Fish_Swordfin_Eel" },
		{ "BP_Fish_Thundering_Eel", "BP_Fish_Thundering_Eel" },
		{ "BP_Fish_UmbranCarp", "BP_Fish_UmbranCarp" },
		{ "BP_Fish_UnicornFish", "BP_Fish_UnicornFish" },
		{ "BP_Fish_Voidray", "BP_Fish_Voidray" },
		{ "BP_Fish_Willow_Lamprey", "BP_Fish_Willow_Lamprey" },
		{ "BP_Fish_Yellowfin_Tuna", "BP_Fish_Yellowfin_Tuna" },
		{ "BP_Fish_Yellow_Perch", "Yellow Perch" },
		{ "BP_Trash_Shipfragments", "Ship Fragments" },
		{ "BP_Trash_Wagonwheel", "Wagon Wheel" },
		{ "BP_Trash_WaterloggedBoot", "Waterlogged Boot" },

		// Villagers
		{ "BP_Villager_Miner_C", "Hodari" },
		{ "BP_VillagerTheArchaeologist_C", "Jina" },
		{ "BP_Villager_Cook_C", "Reth" },
		{ "BP_Villager_Tish_C", "Tish" },
		{ "BP_VillagerTheDemolitionist_C", "Najuma" },
		{ "BP_Villager_Healer_C", "Chayne" },
		{ "BP_Villager_Elouisa_C", "Elouisa" },
		{ "BP_Villager_TheMagistrate_C", "Eshe" },
		{ "BP_Villager_TheLibrarian_C", "Caleri" },
		{ "BP_Villager_Tamala_C", "Tamala" },
		{ "BP_Villager_Blacksmith_C", "Sifuu" },
		{ "BP_Villager_Farmer_C", "Badruu" },
		{ "BP_VillagerDeliveryBoy_C", "Auni" },
		{ "BP_Villager_Farmboy_C", "Nai'o" },
		{ "BP_Villager_Tau_C", "Tau" },
		{ "BP_VillagerTheInnKeeper_C", "Ashura" },
		{ "BP_Villager_Hekla_C", "Hekla" },
		{ "BP_Villager_Zeki_C", "Zeki" },
		{ "BP_Villager_Rancher_C", "Delaila" },
		{ "BP_VillagerFisherman_C", "Einar" },
		{ "BP_Villager_Kenyatta_C", "Kenyatta" },
		{ "BP_Villager_Mayor_C", "Kenli" },
		{ "BP_Villager_Jel_C", "Jel" },
		{ "BP_VillagerTheHunter_C", "Hassian" },
		{ "BP_VillagerTheWatcher_C", "BP_VillagerTheWatcher_C" }, // who dis?

		// Loot
		{ "BP_Hunting_LootBag_C", "Loot - Animal"},
		{ "BP_InsectBallLoot_C", "Loot - Bug" },
		{ "BP_LootChestRockPile_C", "Loot - Stone" },
		{ "BP_LootChestClayPile_C", "Loot - Clay" },
		{ "BP_LootChestCopperPile_C", "Loot - Copper" },
		{ "BP_LootChestIronPile_C", "Loot - Iron" },
		{ "BP_LootChestPaliumPile_C", "Loot - Palium" },
		{ "BP_LootChestWoodBundle_Enchanted_C", "Loot - Flow" },
		{ "BP_LootChestWoodBundle_Pine_C", "Loot - Heartwood" },
		{ "BP_LootChestWoodBundle_Juniper_C", "Loot - Sapwood" },
		{ "BP_LootChestWoodBundle_Oak_C", "Loot - Sapwood" },
		{ "BP_LootChestWoodBundle_Birch_C", "Loot - Sapwood" }
	};

	// Search map for assigning gatherable size
	std::map<EGatherableSize, std::vector<std::string>> GATHERABLE_SIZE_MAPPINGS = {
		{EGatherableSize::Small, {"_Small_", "_Sapling_", "_Bush_"}},
		{EGatherableSize::Medium, {"_Medium_"}},
		{EGatherableSize::Large, {"_Large_", "_Large2_"}}
	};

	// Search map for assigning tree type
	// Assigned by loot type vs tree species
	std::map<ETreeType, std::vector<std::string>> TREE_TYPE_MAPPINGS = {
		{ETreeType::Flow, {"_CoOp_"}},
		{ETreeType::Heartwood, {"_Pine_"}},
		{ETreeType::Sapwood, {"_Juniper_", "_Oak_", "_Birch_", "_Bush_"}}
	};

	// Search map for assigning gatherable flags
	std::map<EOreType, std::vector<std::string>> MINING_TYPE_MAPPINGS = {
		{EOreType::Stone, {"_Stone_"}},
		{EOreType::Copper, {"_Copper_"}},
		{EOreType::Clay, {"_Clay_"}},
		{EOreType::Iron, {"_Iron_"}},
		{EOreType::Silver, {"_Silver_"}},
		{EOreType::Gold, {"_Gold_"}},
		{EOreType::Palium, {"_Palium_"}}
	};

	// Search map for assigning forageable type
	std::map<EForageableType, std::vector<std::string>> FORAGEABLE_TYPE_MAPPINGS = {
		{EForageableType::Oyster, {"_Oyster"}},
		{EForageableType::Coral, {"_Coral"}},
		{EForageableType::MushroomBlue, {"_MushroomBlue"}},
		{EForageableType::MushroomRed, {"_MushroomR"}},
		{EForageableType::Heartdrop, {"_HeartdropLilly"}},
		{EForageableType::DragonsBeard, {"_DragonsBeard"}},
		{EForageableType::EmeraldCarpet, {"_EmeraldCarpet"}},
		{EForageableType::PoisonFlower, {"_PoisonFlower"}},
		{EForageableType::Shell, {"_Seashell"}},
		{EForageableType::DariCloves, {"_DariCloves"}},
		{EForageableType::HeatRoot, {"_HeatRoot"}},
		{EForageableType::SpicedSprouts, {"_Spiced_Sprouts"}},
		{EForageableType::Sundrop, {"_SundropLillies"}},
		{EForageableType::SweetLeaves, {"_SweetLeaves"}},
		{EForageableType::WaterFlower, {"_WaterFlower"}},
		{EForageableType::Garlic, {"_WildGarlic"}}
	};

	// Search map for assigning creature kind type
	std::map<ECreatureKind, std::vector<std::string>> CREATURE_KIND_MAPPINGS = {
		{ECreatureKind::Chapaa, {"_Chapaa"}},
		{ECreatureKind::Cearnuk, {"_Cearnuk_"}}
	};

	// Search map for assiging creature quality type
	std::map<ECreatureQuality, std::vector<std::string>> CREATURE_KINDQUALITY_MAPPINGS = {
		{ECreatureQuality::Tier1, {"_T1_C"}},
		{ECreatureQuality::Tier2, {"_T2_C"}},
		{ECreatureQuality::Tier3, {"_T3_C"}},
		{ECreatureQuality::Chase, {"_Base_C","_Fast_C"}}
	};

	// Search map for assigning bug kind type
	std::map<EBugKind, std::vector<std::string>> CREATURE_BUGKIND_MAPPINGS = {
		{EBugKind::Bee, {"_Bug_Bee"}},
		{EBugKind::Beetle, {"_Bug_Beetle"}},
		{EBugKind::Butterfly, {"_Bug_Butterfly"}},
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
		{EBugQuality::Rare, {"R_C", "R+_C", "R1_C", "R1+_C"}},
		{EBugQuality::Rare2, {"R2_C", "R2+_C"}},
		{EBugQuality::Epic, {"E_C","E+_C"}}
	};

	std::map<EFishType, std::vector<std::string>> FISH_TYPE_MAPPINGS = {
		{EFishType::Node, {"_WaterPlane_"}},
		{EFishType::Hook, {"_Fish_","_Trash_", "_Fishing"}},
	};

	// Configuration:
	bool bEnableESP = true;

	bool bEnableESPCulling;
	int CullDistance = 200;

	bool bVisualizeDefault = false;	// Visualizes other uncategorized gatherables

	bool Singles[(int)EOneOffs::MAX] = {};
	unsigned int SingleColors[(int)EOneOffs::MAX] = {
		IM_COL32(0xFF, 0xFF, 0x00, 0xFF),
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF),
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF),
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF),
	};

	// Forageables[Type][Starred]
	bool Forageables[(int)EForageableType::MAX][2] = {};
	unsigned int ForageableColors[(int)EForageableType::MAX] = {};

	int ForageableCommon[4] = {
		(int)EForageableType::Oyster,
		(int)EForageableType::Shell,
		(int)EForageableType::Sundrop,
		(int)EForageableType::MushroomRed
	};

	int ForageableUncommon[7] = {
		(int)EForageableType::Coral,
		(int)EForageableType::PoisonFlower,
		(int)EForageableType::WaterFlower,
		(int)EForageableType::EmeraldCarpet,
		(int)EForageableType::SpicedSprouts,
		(int)EForageableType::SweetLeaves,
		(int)EForageableType::Garlic
	};

	int ForageableRare[3] = {
		(int)EForageableType::DragonsBeard,
		(int)EForageableType::MushroomBlue,
		(int)EForageableType::HeatRoot
	};

	int ForageableEpic[2] = {
		(int)EForageableType::Heartdrop,
		(int)EForageableType::DariCloves
	};

	// Ores[Type][Size]
	bool Ores[(int)EOreType::MAX][(int)EGatherableSize::MAX] = {};

	unsigned int OreColors[(int)EOreType::MAX] = {
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF),
		IM_COL32(0x88, 0x8C, 0x8D, 0xFF), // Stone
		IM_COL32(0xB8, 0x73, 0x33, 0xFF), // Copper
		IM_COL32(0xAD, 0x50, 0x49, 0xFF), // Clay
		IM_COL32(0xA1, 0x9D, 0x94, 0xFF), // Iron
		IM_COL32(0xAA, 0xA9, 0xAD, 0xFF), // Silver
		IM_COL32(0xDB, 0xAC, 0x34, 0xFF), // Gold
		IM_COL32(0x94, 0xA0, 0xE2, 0xFF), // Palium
	};

	// Animals[Type][Size]
	bool Animals[(int)ECreatureKind::MAX][(int)ECreatureQuality::MAX] = {};
	unsigned int AnimalColors[(int)ECreatureKind::MAX][(int)ECreatureQuality::MAX] = {};

	// Bugs[Type][Size][Starred]
	bool Bugs[(int)EBugKind::MAX][(int)EBugQuality::MAX][2] = {};
	unsigned int BugColors[(int)EBugKind::MAX][(int)EBugQuality::MAX] = {};

	// Trees[Type][Size]
	bool Trees[(int)ETreeType::MAX][(int)EGatherableSize::MAX] = {};
	unsigned int TreeColors[(int)ETreeType::MAX] = {
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF),
		IM_COL32(0x67, 0x00, 0xEA, 0xFF),
		IM_COL32(0x00, 0xFF, 0x00, 0xFF),
		IM_COL32(0x00, 0xFF, 0x00, 0xFF),
	};

	bool Fish[(int)EFishType::MAX] = {};
	unsigned int FishColors[(int)EFishType::MAX] = {
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF),
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF),
		IM_COL32(0xFF, 0xFF, 0xFF, 0xFF),
	};
};

