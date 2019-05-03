#pragma once
#include "Vector4KeyFrameAnimation.g.h"
#include "KeyFrameAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct Vector4KeyFrameAnimation : Vector4KeyFrameAnimationT<Vector4KeyFrameAnimation, FastWindows::UI::Composition::implementation::KeyFrameAnimation>
    {
        Vector4KeyFrameAnimation() = default;

        void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value);
        void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction);
    };
}
