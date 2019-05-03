#pragma once
#include "CompositionProjectedShadow.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionProjectedShadow : CompositionProjectedShadowT<CompositionProjectedShadow, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionProjectedShadow() = default;

        float BlurRadiusMultiplier();
        void BlurRadiusMultiplier(float value);
        FastWindows::UI::Composition::CompositionProjectedShadowCasterCollection Casters();
        FastWindows::UI::Composition::CompositionLight LightSource();
        void LightSource(FastWindows::UI::Composition::CompositionLight value);
        float MaxBlurRadius();
        void MaxBlurRadius(float value);
        float MinBlurRadius();
        void MinBlurRadius(float value);
        FastWindows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection Receivers();
    };
}
