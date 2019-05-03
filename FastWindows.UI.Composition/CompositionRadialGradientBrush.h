#pragma once
#include "CompositionRadialGradientBrush.g.h"
#include "CompositionGradientBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionRadialGradientBrush : CompositionRadialGradientBrushT<CompositionRadialGradientBrush, FastWindows::UI::Composition::implementation::CompositionGradientBrush>
    {
        CompositionRadialGradientBrush() = default;

        Windows::Foundation::Numerics::float2 EllipseCenter();
        void EllipseCenter(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 EllipseRadius();
        void EllipseRadius(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 GradientOriginOffset();
        void GradientOriginOffset(Windows::Foundation::Numerics::float2 value);
    };
}
