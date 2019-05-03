#pragma once
#include "CompositionMaskBrush.g.h"
#include "CompositionBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionMaskBrush : CompositionMaskBrushT<CompositionMaskBrush, FastWindows::UI::Composition::implementation::CompositionBrush>
    {
        CompositionMaskBrush() = default;

        FastWindows::UI::Composition::CompositionBrush Mask();
        void Mask(FastWindows::UI::Composition::CompositionBrush value);
        FastWindows::UI::Composition::CompositionBrush Source();
        void Source(FastWindows::UI::Composition::CompositionBrush value);
    };
}
