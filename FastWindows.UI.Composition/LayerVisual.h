#pragma once
#include "LayerVisual.g.h"
#include "ContainerVisual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct LayerVisual : LayerVisualT<LayerVisual, FastWindows::UI::Composition::implementation::ContainerVisual>
    {
        LayerVisual() = default;

        FastWindows::UI::Composition::CompositionEffectBrush Effect();
        void Effect(FastWindows::UI::Composition::CompositionEffectBrush value);
        FastWindows::UI::Composition::CompositionShadow Shadow();
        void Shadow(FastWindows::UI::Composition::CompositionShadow value);
    };
}
