#pragma once
#include "CompositionRectangleGeometry.g.h"
#include "CompositionGeometry.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionRectangleGeometry : CompositionRectangleGeometryT<CompositionRectangleGeometry, FastWindows::UI::Composition::implementation::CompositionGeometry>
    {
        CompositionRectangleGeometry() = default;

        Windows::Foundation::Numerics::float2 Offset();
        void Offset(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 Size();
        void Size(Windows::Foundation::Numerics::float2 value);
    };
}
