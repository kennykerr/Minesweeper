#pragma once
#include "CompositionMipmapSurface.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionMipmapSurface : CompositionMipmapSurfaceT<CompositionMipmapSurface, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionMipmapSurface() = default;

        uint32_t LevelCount();
        Windows::Graphics::DirectX::DirectXAlphaMode AlphaMode();
        Windows::Graphics::DirectX::DirectXPixelFormat PixelFormat();
        Windows::Graphics::SizeInt32 SizeInt32();
        FastWindows::UI::Composition::CompositionDrawingSurface GetDrawingSurfaceForLevel(uint32_t level);
    };
}
