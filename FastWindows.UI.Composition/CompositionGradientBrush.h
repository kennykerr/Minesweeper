#pragma once
#include "CompositionGradientBrush.g.h"
#include "CompositionBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionGradientBrush : CompositionGradientBrushT<CompositionGradientBrush, FastWindows::UI::Composition::implementation::CompositionBrush>
    {
        CompositionGradientBrush() = default;

        Windows::Foundation::Numerics::float2 AnchorPoint();
        void AnchorPoint(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 CenterPoint();
        void CenterPoint(Windows::Foundation::Numerics::float2 value);
        FastWindows::UI::Composition::CompositionColorGradientStopCollection ColorStops();
        Windows::UI::Composition::CompositionGradientExtendMode ExtendMode();
        void ExtendMode(Windows::UI::Composition::CompositionGradientExtendMode value);
        Windows::UI::Composition::CompositionColorSpace InterpolationSpace();
        void InterpolationSpace(Windows::UI::Composition::CompositionColorSpace value);
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
        Windows::UI::Composition::CompositionMappingMode MappingMode();
        void MappingMode(Windows::UI::Composition::CompositionMappingMode value);
    };
}
