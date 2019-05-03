#pragma once
#include "Vector3KeyFrameAnimation.g.h"
#include "KeyFrameAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct Vector3KeyFrameAnimation : Vector3KeyFrameAnimationT<Vector3KeyFrameAnimation, FastWindows::UI::Composition::implementation::KeyFrameAnimation>
    {
        Vector3KeyFrameAnimation() = default;

        void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value);
        void InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction);
    };
}
