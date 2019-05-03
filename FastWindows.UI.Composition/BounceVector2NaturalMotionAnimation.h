#pragma once
#include "BounceVector2NaturalMotionAnimation.g.h"
#include "Vector2NaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct BounceVector2NaturalMotionAnimation : BounceVector2NaturalMotionAnimationT<BounceVector2NaturalMotionAnimation, FastWindows::UI::Composition::implementation::Vector2NaturalMotionAnimation>
    {
        BounceVector2NaturalMotionAnimation() = default;

        float Acceleration();
        void Acceleration(float value);
        float Restitution();
        void Restitution(float value);
    };
}
