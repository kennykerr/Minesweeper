#pragma once
#include "CompositionPathGeometry.g.h"
#include "CompositionGeometry.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionPathGeometry : CompositionPathGeometryT<CompositionPathGeometry, FastWindows::UI::Composition::implementation::CompositionGeometry>
    {
        CompositionPathGeometry() = default;

        FastWindows::UI::Composition::CompositionPath Path();
        void Path(FastWindows::UI::Composition::CompositionPath value);
    };
}
