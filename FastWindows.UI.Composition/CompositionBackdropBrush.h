#pragma once
#include "CompositionBackdropBrush.g.h"
#include "CompositionBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionBackdropBrush : CompositionBackdropBrushT<CompositionBackdropBrush, FastWindows::UI::Composition::implementation::CompositionBrush>
    {
        CompositionBackdropBrush() = default;

    };
}
