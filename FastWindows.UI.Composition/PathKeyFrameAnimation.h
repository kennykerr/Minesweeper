#pragma once
#include "PathKeyFrameAnimation.g.h"
#include "KeyFrameAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct PathKeyFrameAnimation : PathKeyFrameAnimationT<PathKeyFrameAnimation, FastWindows::UI::Composition::implementation::KeyFrameAnimation>
    {
        PathKeyFrameAnimation() = default;

        void InsertKeyFrame(float normalizedProgressKey, FastWindows::UI::Composition::CompositionPath const& path);
        void InsertKeyFrame(float normalizedProgressKey, FastWindows::UI::Composition::CompositionPath const& path, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction);
    };
}
