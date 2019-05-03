#pragma once
#include "CompositionProjectedShadowCaster.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionProjectedShadowCaster : CompositionProjectedShadowCasterT<CompositionProjectedShadowCaster, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionProjectedShadowCaster() = default;

        FastWindows::UI::Composition::CompositionBrush Brush();
        void Brush(FastWindows::UI::Composition::CompositionBrush value);
        FastWindows::UI::Composition::Visual CastingVisual();
        void CastingVisual(FastWindows::UI::Composition::Visual value);
    };
}
