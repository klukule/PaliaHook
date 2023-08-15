#include "PaliaOverlay.h"
#include "../RendererHook/ImGui/imgui.h"
#include "../RendererHook/RendererDetector.h"
#include "../RendererHook/BaseHook.h"

void PaliaOverlay::DrawHUD()
{
	ImGuiIO& io = ImGui::GetIO();

	// Set the overlay windows to the size of the game window
	//ImGui::SetNextWindowPos({ 0,0 });
	//ImGui::SetNextWindowSize({ static_cast<float>(io.DisplaySize.x),static_cast<float>(io.DisplaySize.y) });

	//ImGui::Begin("HUD", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoBackground);
	auto pDrawList = ImGui::GetBackgroundDrawList();

	pDrawList->AddRect({ 10, 10 }, { 100, 100 }, ImColor(255, 0, 0));
	pDrawList->AddText(ImVec2(10, 10), ImColor(255, 0, 0), "test");

	//ImGui::End();
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
