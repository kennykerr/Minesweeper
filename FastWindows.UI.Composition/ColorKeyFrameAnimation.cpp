#include "pch.h"
#include "ColorKeyFrameAnimation.h"
#include "ColorKeyFrameAnimation.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    Windows::UI::Composition::CompositionColorSpace ColorKeyFrameAnimation::InterpolationColorSpace()
    {
        throw hresult_not_implemented();
    }
    void ColorKeyFrameAnimation::InterpolationColorSpace(Windows::UI::Composition::CompositionColorSpace value)
    {
        throw hresult_not_implemented();
    }
    void ColorKeyFrameAnimation::InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value)
    {
        throw hresult_not_implemented();
    }
    void ColorKeyFrameAnimation::InsertKeyFrame(float normalizedProgressKey, Windows::UI::Color const& value, FastWindows::UI::Composition::CompositionEasingFunction const& easingFunction)
    {
        throw hresult_not_implemented();
    }
}
