#pragma once
#include "ShapeVisual.g.h"
#include "ContainerVisual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct ShapeVisual : ShapeVisualT<ShapeVisual, FastWindows::UI::Composition::implementation::ContainerVisual>
    {
        ShapeVisual() = default;

        FastWindows::UI::Composition::CompositionShapeCollection Shapes();
        FastWindows::UI::Composition::CompositionViewBox ViewBox();
        void ViewBox(FastWindows::UI::Composition::CompositionViewBox value);
    };
}
