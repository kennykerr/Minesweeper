#pragma once
#include "CompositionRoundedRectangleGeometry.g.h"
#include "CompositionGeometry.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionRoundedRectangleGeometry : CompositionRoundedRectangleGeometryT<CompositionRoundedRectangleGeometry, FastWindows::UI::Composition::implementation::CompositionGeometry>
    {
        CompositionRoundedRectangleGeometry() = default;

        Windows::Foundation::Numerics::float2 CornerRadius();
        void CornerRadius(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 Offset();
        void Offset(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 Size();
        void Size(Windows::Foundation::Numerics::float2 value);
    };
}
