#pragma once
#include "SpringScalarNaturalMotionAnimation.g.h"
#include "ScalarNaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct SpringScalarNaturalMotionAnimation : SpringScalarNaturalMotionAnimationT<SpringScalarNaturalMotionAnimation, FastWindows::UI::Composition::implementation::ScalarNaturalMotionAnimation>
    {
        SpringScalarNaturalMotionAnimation() = default;

        float DampingRatio();
        void DampingRatio(float value);
        Windows::Foundation::TimeSpan Period();
        void Period(Windows::Foundation::TimeSpan value);
    };
}
