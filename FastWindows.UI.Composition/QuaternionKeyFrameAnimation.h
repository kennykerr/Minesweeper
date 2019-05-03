#pragma once
#include "QuaternionKeyFrameAnimation.g.h"
#include "KeyFrameAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct QuaternionKeyFrameAnimation : QuaternionKeyFrameAnimationT<QuaternionKeyFrameAnimation, FastWindows::UI::Composition::implementation::KeyFrameAnimation>
    {
        QuaternionKeyFrameAnimation() = default;

        void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value);
        void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction);
    };
}
