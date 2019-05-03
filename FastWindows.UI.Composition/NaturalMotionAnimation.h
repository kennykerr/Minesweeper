#pragma once
#include "NaturalMotionAnimation.g.h"
#include "CompositionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct NaturalMotionAnimation : NaturalMotionAnimationT<NaturalMotionAnimation, FastWindows::UI::Composition::implementation::CompositionAnimation>
    {
        NaturalMotionAnimation() = default;

        Windows::UI::Composition::AnimationDelayBehavior DelayBehavior();
        void DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior value);
        Windows::Foundation::TimeSpan DelayTime();
        void DelayTime(Windows::Foundation::TimeSpan value);
        Windows::UI::Composition::AnimationStopBehavior StopBehavior();
        void StopBehavior(Windows::UI::Composition::AnimationStopBehavior value);
    };
}
