#pragma once
#include "CompositionSurfaceBrush.g.h"
#include "CompositionBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionSurfaceBrush : CompositionSurfaceBrushT<CompositionSurfaceBrush, FastWindows::UI::Composition::implementation::CompositionBrush>
    {
        CompositionSurfaceBrush() = default;

        Windows::UI::Composition::CompositionBitmapInterpolationMode BitmapInterpolationMode();
        void BitmapInterpolationMode(Windows::UI::Composition::CompositionBitmapInterpolationMode value);
        float HorizontalAlignmentRatio();
        void HorizontalAlignmentRatio(float value);
        Windows::UI::Composition::CompositionStretch Stretch();
        void Stretch(Windows::UI::Composition::CompositionStretch value);
        FastWindows::UI::Composition::ICompositionSurface Surface();
        void Surface(FastWindows::UI::Composition::ICompositionSurface value);
        float VerticalAlignmentRatio();
        void VerticalAlignmentRatio(float value);
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
        bool SnapToPixels();
        void SnapToPixels(bool value);
    };
}
