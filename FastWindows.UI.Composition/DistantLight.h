#pragma once
#include "DistantLight.g.h"
#include "CompositionLight.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct DistantLight : DistantLightT<DistantLight, FastWindows::UI::Composition::implementation::CompositionLight>
    {
        DistantLight() = default;

        Windows::UI::Color Color();
        void Color(Windows::UI::Color value);
        FastWindows::UI::Composition::Visual CoordinateSpace();
        void CoordinateSpace(FastWindows::UI::Composition::Visual value);
        Windows::Foundation::Numerics::float3 Direction();
        void Direction(Windows::Foundation::Numerics::float3 value);
        float Intensity();
        void Intensity(float value);
    };
}
