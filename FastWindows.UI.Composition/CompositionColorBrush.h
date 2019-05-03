#pragma once
#include "CompositionColorBrush.g.h"
#include "CompositionBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionColorBrush : CompositionColorBrushT<CompositionColorBrush, FastWindows::UI::Composition::implementation::CompositionBrush>
    {
        CompositionColorBrush() = default;

        Windows::UI::Color Color();
        void Color(Windows::UI::Color value);
    };
}
