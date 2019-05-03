#pragma once
#include "SpotLight.g.h"
#include "CompositionLight.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct SpotLight : SpotLightT<SpotLight, FastWindows::UI::Composition::implementation::CompositionLight>
    {
        SpotLight() = default;

        float ConstantAttenuation();
        void ConstantAttenuation(float value);
        FastWindows::UI::Composition::Visual CoordinateSpace();
        void CoordinateSpace(FastWindows::UI::Composition::Visual value);
        Windows::Foundation::Numerics::float3 Direction();
        void Direction(Windows::Foundation::Numerics::float3 value);
        float InnerConeAngle();
        void InnerConeAngle(float value);
        float InnerConeAngleInDegrees();
        void InnerConeAngleInDegrees(float value);
        Windows::UI::Color InnerConeColor();
        void InnerConeColor(Windows::UI::Color value);
        float LinearAttenuation();
        void LinearAttenuation(float value);
        Windows::Foundation::Numerics::float3 Offset();
        void Offset(Windows::Foundation::Numerics::float3 value);
        float OuterConeAngle();
        void OuterConeAngle(float value);
        float OuterConeAngleInDegrees();
        void OuterConeAngleInDegrees(float value);
        Windows::UI::Color OuterConeColor();
        void OuterConeColor(Windows::UI::Color value);
        float QuadraticAttenuation();
        void QuadraticAttenuation(float value);
        float InnerConeIntensity();
        void InnerConeIntensity(float value);
        float OuterConeIntensity();
        void OuterConeIntensity(float value);
        float MinAttenuationCutoff();
        void MinAttenuationCutoff(float value);
        float MaxAttenuationCutoff();
        void MaxAttenuationCutoff(float value);
    };
}
