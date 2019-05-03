#pragma once
#include "CubicBezierEasingFunction.g.h"
#include "CompositionEasingFunction.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CubicBezierEasingFunction : CubicBezierEasingFunctionT<CubicBezierEasingFunction, FastWindows::UI::Composition::implementation::CompositionEasingFunction>
    {
        CubicBezierEasingFunction() = default;

        Windows::Foundation::Numerics::float2 ControlPoint1();
        Windows::Foundation::Numerics::float2 ControlPoint2();
    };
}
