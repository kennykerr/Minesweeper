#include "pch.h"
#include "Vector3KeyFrameAnimation.h"
#include "Vector3KeyFrameAnimation.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    void Vector3KeyFrameAnimation::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value)
    {
        throw hresult_not_implemented();
    }
    void Vector3KeyFrameAnimation::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::float3 const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction)
    {
        throw hresult_not_implemented();
    }
}
