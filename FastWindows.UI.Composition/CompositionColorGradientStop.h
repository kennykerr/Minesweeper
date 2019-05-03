#pragma once
#include "CompositionColorGradientStop.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionColorGradientStop : CompositionColorGradientStopT<CompositionColorGradientStop, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionColorGradientStop() = default;

        Windows::UI::Color Color();
        void Color(Windows::UI::Color value);
        float Offset();
        void Offset(float value);
    };
}
