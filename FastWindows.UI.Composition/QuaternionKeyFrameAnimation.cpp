#include "pch.h"
#include "QuaternionKeyFrameAnimation.h"
#include "QuaternionKeyFrameAnimation.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    void QuaternionKeyFrameAnimation::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value)
    {
        throw hresult_not_implemented();
    }
    void QuaternionKeyFrameAnimation::InsertKeyFrame(float normalizedProgressKey, Windows::Foundation::Numerics::quaternion const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction)
    {
        throw hresult_not_implemented();
    }
}
