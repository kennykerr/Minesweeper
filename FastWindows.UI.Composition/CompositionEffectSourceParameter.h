#pragma once
#include "CompositionEffectSourceParameter.g.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionEffectSourceParameter : CompositionEffectSourceParameterT<CompositionEffectSourceParameter>
    {
        CompositionEffectSourceParameter() = default;

        CompositionEffectSourceParameter(hstring const& name);
        hstring Name();
    };
}
namespace winrt::FastWindows::UI::Composition::factory_implementation
{
    struct CompositionEffectSourceParameter : CompositionEffectSourceParameterT<CompositionEffectSourceParameter, implementation::CompositionEffectSourceParameter>
    {
    };
}
