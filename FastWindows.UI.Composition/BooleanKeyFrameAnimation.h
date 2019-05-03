#pragma once
#include "BooleanKeyFrameAnimation.g.h"
#include "KeyFrameAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct BooleanKeyFrameAnimation : BooleanKeyFrameAnimationT<BooleanKeyFrameAnimation, FastWindows::UI::Composition::implementation::KeyFrameAnimation>
    {
        BooleanKeyFrameAnimation() = default;

        void InsertKeyFrame(float normalizedProgressKey, bool value);
    };
}
