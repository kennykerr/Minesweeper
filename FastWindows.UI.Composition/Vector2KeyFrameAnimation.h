#pragma once
#include "Vector2KeyFrameAnimation.g.h"
#include "KeyFrameAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct Vector2KeyFrameAnimation : Vector2KeyFrameAnimationT<Vector2KeyFrameAnimation, FastWindows::UI::Composition::implementation::KeyFrameAnimation>
    {
        Vector2KeyFrameAnimation() = default;

        void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value);
        void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float2 const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction);
    };
}
