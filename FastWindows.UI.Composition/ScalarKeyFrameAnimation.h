#pragma once
#include "ScalarKeyFrameAnimation.g.h"
#include "KeyFrameAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct ScalarKeyFrameAnimation : ScalarKeyFrameAnimationT<ScalarKeyFrameAnimation, FastWindows::UI::Composition::implementation::KeyFrameAnimation>
    {
        ScalarKeyFrameAnimation() = default;

        void InsertKeyFrame(float normalizedProgressKey, float value);
        void InsertKeyFrame(float normalizedProgressKey, float value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction);
    };
}
