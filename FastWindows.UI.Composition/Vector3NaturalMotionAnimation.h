#pragma once
#include "Vector3NaturalMotionAnimation.g.h"
#include "NaturalMotionAnimation.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct Vector3NaturalMotionAnimation : Vector3NaturalMotionAnimationT<Vector3NaturalMotionAnimation, FastWindows::UI::Composition::implementation::NaturalMotionAnimation>
    {
        Vector3NaturalMotionAnimation() = default;

        Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> FinalValue();
        void FinalValue(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value);
        Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> InitialValue();
        void InitialValue(Windows::Foundation::IReference<Windows::Foundation::Numerics::float3> value);
        Windows::Foundation::Numerics::float3 InitialVelocity();
        void InitialVelocity(Windows::Foundation::Numerics::float3 value);
    };
}
