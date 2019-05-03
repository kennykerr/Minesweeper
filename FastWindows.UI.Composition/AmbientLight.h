#pragma once
#include "AmbientLight.g.h"
#include "CompositionLight.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct AmbientLight : AmbientLightT<AmbientLight, FastWindows::UI::Composition::implementation::CompositionLight>
    {
        AmbientLight() = default;

        Windows::UI::Color Color();
        void Color(Windows::UI::Color value);
        float Intensity();
        void Intensity(float value);
    };
}
