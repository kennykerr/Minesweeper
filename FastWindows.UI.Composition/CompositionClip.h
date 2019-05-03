#pragma once
#include "CompositionClip.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionClip : CompositionClipT<CompositionClip, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionClip() = default;

        Windows::Foundation::Numerics::float2 AnchorPoint();
        void AnchorPoint(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 CenterPoint();
        void CenterPoint(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 Offset();
        void Offset(Windows::Foundation::Numerics::float2 value);
        float RotationAngle();
        void RotationAngle(float value);
        float RotationAngleInDegrees();
        void RotationAngleInDegrees(float value);
        Windows::Foundation::Numerics::float2 Scale();
        void Scale(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float3x2 TransformMatrix();
        void TransformMatrix(Windows::Foundation::Numerics::float3x2 value);
    };
}
