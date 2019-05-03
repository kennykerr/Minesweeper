#pragma once
#include "SpringVector3NaturalMotionAnimation.g.h"
#include "Vector3NaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct SpringVector3NaturalMotionAnimation : SpringVector3NaturalMotionAnimationT<SpringVector3NaturalMotionAnimation, FastWindows::UI::Composition::implementation::Vector3NaturalMotionAnimation>
    {
        SpringVector3NaturalMotionAnimation() = default;

        float DampingRatio();
        void DampingRatio(float value);
        Windows::Foundation::TimeSpan Period();
        void Period(Windows::Foundation::TimeSpan value);
    };
}
