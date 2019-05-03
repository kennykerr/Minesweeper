#pragma once
#include "CompositionShadow.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionShadow : CompositionShadowT<CompositionShadow, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionShadow() = default;

    };
}
