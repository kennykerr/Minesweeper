#pragma once
#include "RedirectVisual.g.h"
#include "ContainerVisual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct RedirectVisual : RedirectVisualT<RedirectVisual, FastWindows::UI::Composition::implementation::ContainerVisual>
    {
        RedirectVisual() = default;

        FastWindows::UI::Composition::Visual Source();
        void Source(FastWindows::UI::Composition::Visual value);
    };
}
