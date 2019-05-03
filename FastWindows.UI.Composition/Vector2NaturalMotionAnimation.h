#pragma once
#include "Vector2NaturalMotionAnimation.g.h"
#include "NaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct Vector2NaturalMotionAnimation : Vector2NaturalMotionAnimationT<Vector2NaturalMotionAnimation, FastWindows::UI::Composition::implementation::NaturalMotionAnimation>
    {
        Vector2NaturalMotionAnimation() = default;

        Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> FinalValue();
        void FinalValue(Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> value);
        Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> InitialValue();
        void InitialValue(Windows::Foundation::IReference<Windows::Foundation::Numerics::float2> value);
        Windows::Foundation::Numerics::float2 InitialVelocity();
        void InitialVelocity(Windows::Foundation::Numerics::float2 value);
    };
}
