#pragma once
#include "SpriteVisual.g.h"
#include "ContainerVisual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct SpriteVisual : SpriteVisualT<SpriteVisual, FastWindows::UI::Composition::implementation::ContainerVisual>
    {
        SpriteVisual() = default;

        FastWindows::UI::Composition::CompositionBrush Brush();
        void Brush(FastWindows::UI::Composition::CompositionBrush value);
        FastWindows::UI::Composition::CompositionShadow Shadow();
        void Shadow(FastWindows::UI::Composition::CompositionShadow value);
    };
}
