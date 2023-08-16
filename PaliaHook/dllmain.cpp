#include <Windows.h>

#include "../PaliaSDK/SDK.hpp"
#include "PaliaOverlay.h"

DWORD WINAPI MainThread(LPVOID lpReserved)
{
    SDK::InitGObjects();
    auto Overlay = new PaliaOverlay();
    OverlayBase::Instance = Overlay;
    
    Overlay->SetupOverlay();
    return TRUE;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);
        break;
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

