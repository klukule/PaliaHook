#pragma once

#include "../RendererHook/OverlayBase.h"

class PaliaOverlay : public OverlayBase
{
protected:
	virtual void DrawHUD();
	virtual void DrawOverlay();
};

