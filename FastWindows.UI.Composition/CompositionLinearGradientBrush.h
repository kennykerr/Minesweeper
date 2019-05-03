#pragma once
#include "CompositionLinearGradientBrush.g.h"
#include "CompositionGradientBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionLinearGradientBrush : CompositionLinearGradientBrushT<CompositionLinearGradientBrush, FastWindows::UI::Composition::implementation::CompositionGradientBrush>
    {
        CompositionLinearGradientBrush() = default;

        Windows::Foundation::Numerics::float2 EndPoint();
        void EndPoint(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 StartPoint();
        void StartPoint(Windows::Foundation::Numerics::float2 value);
    };
}
