#pragma once
#include "CompositionEasingFunction.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionEasingFunction : CompositionEasingFunctionT<CompositionEasingFunction, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionEasingFunction() = default;

    };
}
