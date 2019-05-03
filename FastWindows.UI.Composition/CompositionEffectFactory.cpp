#include "pch.h"
#include "CompositionEffectFactory.h"
#include "CompositionEffectFactory.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::CompositionEffectBrush CompositionEffectFactory::CreateBrush()
    {
        throw hresult_not_implemented();
    }
    winrt::hresult CompositionEffectFactory::ExtendedError()
    {
        throw hresult_not_implemented();
    }
    Windows::UI::Composition::CompositionEffectFactoryLoadStatus CompositionEffectFactory::LoadStatus()
    {
        throw hresult_not_implemented();
    }
}
