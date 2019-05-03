#pragma once
#include "CompositionEffectFactory.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionEffectFactory : CompositionEffectFactoryT<CompositionEffectFactory, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionEffectFactory() = default;

        FastWindows::UI::Composition::CompositionEffectBrush CreateBrush();
        winrt::hresult ExtendedError();
        Windows::UI::Composition::CompositionEffectFactoryLoadStatus LoadStatus();
    };
}
