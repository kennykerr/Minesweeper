#pragma once
#include "CompositionTransform.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionTransform : CompositionTransformT<CompositionTransform, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionTransform() = default;

    };
}
