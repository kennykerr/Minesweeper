#pragma once
#include "BounceScalarNaturalMotionAnimation.g.h"
#include "ScalarNaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct BounceScalarNaturalMotionAnimation : BounceScalarNaturalMotionAnimationT<BounceScalarNaturalMotionAnimation, FastWindows::UI::Composition::implementation::ScalarNaturalMotionAnimation>
    {
        BounceScalarNaturalMotionAnimation() = default;

        float Acceleration();
        void Acceleration(float value);
        float Restitution();
        void Restitution(float value);
    };
}
