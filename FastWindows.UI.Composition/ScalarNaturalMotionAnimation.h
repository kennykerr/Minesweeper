#pragma once
#include "ScalarNaturalMotionAnimation.g.h"
#include "NaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct ScalarNaturalMotionAnimation : ScalarNaturalMotionAnimationT<ScalarNaturalMotionAnimation, FastWindows::UI::Composition::implementation::NaturalMotionAnimation>
    {
        ScalarNaturalMotionAnimation() = default;

        Windows::Foundation::IReference<float> FinalValue();
        void FinalValue(Windows::Foundation::IReference<float> value);
        Windows::Foundation::IReference<float> InitialValue();
        void InitialValue(Windows::Foundation::IReference<float> value);
        float InitialVelocity();
        void InitialVelocity(float value);
    };
}
