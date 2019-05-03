#pragma once
#include "CompositionPath.g.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionPath : CompositionPathT<CompositionPath>
    {
        CompositionPath() = default;

        CompositionPath(Windows::Graphics::IGeometrySource2D const& source);
    };
}
namespace winrt::FastWindows::UI::Composition::factory_implementation
{
    struct CompositionPath : CompositionPathT<CompositionPath, implementation::CompositionPath>
    {
    };
}
