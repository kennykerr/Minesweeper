#pragma once
#include "SpringVector2NaturalMotionAnimation.g.h"
#include "Vector2NaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct SpringVector2NaturalMotionAnimation : SpringVector2NaturalMotionAnimationT<SpringVector2NaturalMotionAnimation, FastWindows::UI::Composition::implementation::Vector2NaturalMotionAnimation>
    {
        SpringVector2NaturalMotionAnimation() = default;

        float DampingRatio();
        void DampingRatio(float value);
        Windows::Foundation::TimeSpan Period();
        void Period(Windows::Foundation::TimeSpan value);
    };
}
