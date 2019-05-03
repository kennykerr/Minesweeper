#pragma once
#include "CompositionContainerShape.g.h"
#include "CompositionShape.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionContainerShape : CompositionContainerShapeT<CompositionContainerShape, FastWindows::UI::Composition::implementation::CompositionShape>
    {
        CompositionContainerShape() = default;

        FastWindows::UI::Composition::CompositionShapeCollection Shapes();
    };
}
