#pragma once
#include "KeyFrameAnimation.g.h"
#include "CompositionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct KeyFrameAnimation : KeyFrameAnimationT<KeyFrameAnimation, FastWindows::UI::Composition::implementation::CompositionAnimation>
    {
        KeyFrameAnimation() = default;

        Windows::Foundation::TimeSpan DelayTime();
        void DelayTime(Windows::Foundation::TimeSpan value);
        Windows::Foundation::TimeSpan Duration();
        void Duration(Windows::Foundation::TimeSpan value);
        Windows::UI::Composition::AnimationIterationBehavior IterationBehavior();
        void IterationBehavior(Windows::UI::Composition::AnimationIterationBehavior value);
        int32_t IterationCount();
        void IterationCount(int32_t value);
        int32_t KeyFrameCount();
        Windows::UI::Composition::AnimationStopBehavior StopBehavior();
        void StopBehavior(Windows::UI::Composition::AnimationStopBehavior value);
        void InsertExpressionKeyFrame(float normalizedProgressKey, hstring const& value);
        void InsertExpressionKeyFrame(float normalizedProgressKey, hstring const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction);
        Windows::UI::Composition::AnimationDirection Direction();
        void Direction(Windows::UI::Composition::AnimationDirection value);
        Windows::UI::Composition::AnimationDelayBehavior DelayBehavior();
        void DelayBehavior(Windows::UI::Composition::AnimationDelayBehavior value);
    };
}
