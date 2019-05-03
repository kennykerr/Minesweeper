#pragma once
#include "ColorKeyFrameAnimation.g.h"
#include "KeyFrameAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct ColorKeyFrameAnimation : ColorKeyFrameAnimationT<ColorKeyFrameAnimation, FastWindows::UI::Composition::implementation::KeyFrameAnimation>
    {
        ColorKeyFrameAnimation() = default;

        Windows::UI::Composition::CompositionColorSpace InterpolationColorSpace();
        void InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace value);
        void InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value);
        void InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction);
    };
}
