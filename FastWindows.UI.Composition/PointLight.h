#pragma once
#include "PointLight.g.h"
#include "CompositionLight.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct PointLight : PointLightT<PointLight, FastWindows::UI::Composition::implementation::CompositionLight>
    {
        PointLight() = default;

        Windows::UI::Color Color();
        void Color(Windows::UI::Color value);
        float ConstantAttenuation();
        void ConstantAttenuation(float value);
        FastWindows::UI::Composition::Visual CoordinateSpace();
        void CoordinateSpace(FastWindows::UI::Composition::Visual value);
        float LinearAttenuation();
        void LinearAttenuation(float value);
        Windows::Foundation::Numerics::float3 Offset();
        void Offset(Windows::Foundation::Numerics::float3 value);
        float QuadraticAttenuation();
        void QuadraticAttenuation(float value);
        float Intensity();
        void Intensity(float value);
        float MinAttenuationCutoff();
        void MinAttenuationCutoff(float value);
        float MaxAttenuationCutoff();
        void MaxAttenuationCutoff(float value);
    };
}
