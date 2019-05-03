#pragma once
#include "CompositionViewBox.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionViewBox : CompositionViewBoxT<CompositionViewBox, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionViewBox() = default;

        float HorizontalAlignmentRatio();
        void HorizontalAlignmentRatio(float value);
        Windows::Foundation::Numerics::float2 Offset();
        void Offset(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float2 Size();
        void Size(Windows::Foundation::Numerics::float2 value);
        Windows::UI::Composition::CompositionStretch Stretch();
        void Stretch(Windows::UI::Composition::CompositionStretch value);
        float VerticalAlignmentRatio();
        void VerticalAlignmentRatio(float value);
    };
}
