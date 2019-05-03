#pragma once
#include "DropShadow.g.h"
#include "CompositionShadow.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct DropShadow : DropShadowT<DropShadow, FastWindows::UI::Composition::implementation::CompositionShadow>
    {
        DropShadow() = default;

        float BlurRadius();
        void BlurRadius(float value);
        Windows::UI::Color Color();
        void Color(Windows::UI::Color value);
        FastWindows::UI::Composition::CompositionBrush Mask();
        void Mask(FastWindows::UI::Composition::CompositionBrush value);
        Windows::Foundation::Numerics::float3 Offset();
        void Offset(Windows::Foundation::Numerics::float3 value);
        float Opacity();
        void Opacity(float value);
        Windows::UI::Composition::CompositionDropShadowSourcePolicy SourcePolicy();
        void SourcePolicy(Windows::UI::Composition::CompositionDropShadowSourcePolicy value);
    };
}
