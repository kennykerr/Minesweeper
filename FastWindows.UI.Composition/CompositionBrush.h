#pragma once
#include "CompositionBrush.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionBrush : CompositionBrushT<CompositionBrush, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionBrush() = default;

    };
}
