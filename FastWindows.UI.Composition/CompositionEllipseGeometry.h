#pragma once
#include "CompositionEllipseGeometry.g.h"
#include "CompositionGeometry.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionEllipseGeometry : CompositionEllipseGeometryT<CompositionEllipseGeometry, FastWindows::UI::Composition::implementation::CompositionGeometry>
    {
        CompositionEllipseGeometry() = default;

        Windows::Foundation::Numerics::float2 Center();
        void Center(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 Radius();
        void Radius(Windows::Foundation::Numerics::float2 value);
    };
}
