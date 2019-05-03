#pragma once
#include "CompositionVirtualDrawingSurface.g.h"
#include "CompositionDrawingSurface.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionVirtualDrawingSurface : CompositionVirtualDrawingSurfaceT<CompositionVirtualDrawingSurface, FastWindows::UI::Composition::implementation::CompositionDrawingSurface>
    {
        CompositionVirtualDrawingSurface() = default;

        void Trim(array_view<Windows::Graphics::RectInt32 const> rects);
    };
}
