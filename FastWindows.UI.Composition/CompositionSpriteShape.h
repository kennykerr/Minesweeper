#pragma once
#include "CompositionSpriteShape.g.h"
#include "CompositionShape.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionSpriteShape : CompositionSpriteShapeT<CompositionSpriteShape, FastWindows::UI::Composition::implementation::CompositionShape>
    {
        CompositionSpriteShape() = default;

        FastWindows::UI::Composition::CompositionBrush FillBrush();
        void FillBrush(FastWindows::UI::Composition::CompositionBrush value);
        FastWindows::UI::Composition::CompositionGeometry Geometry();
        void Geometry(FastWindows::UI::Composition::CompositionGeometry value);
        bool IsStrokeNonScaling();
        void IsStrokeNonScaling(bool value);
        FastWindows::UI::Composition::CompositionBrush StrokeBrush();
        void StrokeBrush(FastWindows::UI::Composition::CompositionBrush value);
        FastWindows::UI::Composition::CompositionStrokeDashArray StrokeDashArray();
        Windows::UI::Composition::CompositionStrokeCap StrokeDashCap();
        void StrokeDashCap(Windows::UI::Composition::CompositionStrokeCap value);
        float StrokeDashOffset();
        void StrokeDashOffset(float value);
        Windows::UI::Composition::CompositionStrokeCap StrokeEndCap();
        void StrokeEndCap(Windows::UI::Composition::CompositionStrokeCap value);
        Windows::UI::Composition::CompositionStrokeLineJoin StrokeLineJoin();
        void StrokeLineJoin(Windows::UI::Composition::CompositionStrokeLineJoin value);
        float StrokeMiterLimit();
        void StrokeMiterLimit(float value);
        Windows::UI::Composition::CompositionStrokeCap StrokeStartCap();
        void StrokeStartCap(Windows::UI::Composition::CompositionStrokeCap value);
        float StrokeThickness();
        void StrokeThickness(float value);
    };
}
