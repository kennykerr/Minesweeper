#pragma once
#include "BounceVector3NaturalMotionAnimation.g.h"
#include "Vector3NaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct BounceVector3NaturalMotionAnimation : BounceVector3NaturalMotionAnimationT<BounceVector3NaturalMotionAnimation, FastWindows::UI::Composition::implementation::Vector3NaturalMotionAnimation>
    {
        BounceVector3NaturalMotionAnimation() = default;

        float Acceleration();
        void Acceleration(float value);
        float Restitution();
        void Restitution(float value);
    };
}
