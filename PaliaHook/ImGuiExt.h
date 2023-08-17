#pragma once
#include <ImGui/imgui.h>

namespace ImGui
{
	void BeginGroupPanel(const char* name, const ImVec2& size = ImVec2(-1.0f, -1.0f));
	void EndGroupPanel();
	void ColorPicker(const char* name, ImU32* color);
}