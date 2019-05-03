#pragma once
#include "CompositionVisualSurface.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionVisualSurface : CompositionVisualSurfaceT<CompositionVisualSurface, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionVisualSurface() = default;

        FastWindows::UI::Composition::Visual SourceVisual();
        void SourceVisual(FastWindows::UI::Composition::Visual value);
        Windows::Foundation::Numerics::float2 SourceOffset();
        void SourceOffset(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 SourceSize();
        void SourceSize(Windows::Foundation::Numerics::float2 value);
    };
}
