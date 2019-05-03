#include "pch.h"
#include "CompositionEffectBrush.h"
#include "CompositionEffectBrush.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::CompositionBrush CompositionEffectBrush::GetSourceParameter(hstring const& name)
    {
        throw hresult_not_implemented();
    }
    void CompositionEffectBrush::SetSourceParameter(hstring const& name, FastWindows::UI::Composition::CompositionBrush const& source)
    {
        throw hresult_not_implemented();
    }
}
