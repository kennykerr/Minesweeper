#pragma once
#include "LinearEasingFunction.g.h"
#include "CompositionEasingFunction.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct LinearEasingFunction : LinearEasingFunctionT<LinearEasingFunction, FastWindows::UI::Composition::implementation::CompositionEasingFunction>
    {
        LinearEasingFunction() = default;

    };
}
