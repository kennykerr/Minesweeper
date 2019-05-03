#include "pch.h"
#include "Vector4KeyFrameAnimation.h"
#include "Vector4KeyFrameAnimation.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    void Vector4KeyFrameAnimation::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value)
    {
        throw hresult_not_implemented();
    }
    void Vector4KeyFrameAnimation::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float4 const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction)
    {
        throw hresult_not_implemented();
    }
}
