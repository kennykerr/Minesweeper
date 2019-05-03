#pragma once
#include "ContainerVisual.g.h"
#include "Visual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct ContainerVisual : ContainerVisualT<ContainerVisual, FastWindows::UI::Composition::implementation::Visual>
    {
        ContainerVisual() = default;

        FastWindows::UI::Composition::VisualCollection Children();
    };
}
