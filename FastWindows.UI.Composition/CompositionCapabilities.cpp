#include "pch.h"
#include "CompositionCapabilities.h"
#include "CompositionCapabilities.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::CompositionCapabilities CompositionCapabilities::GetForCurrentView()
    {
        throw hresult_not_implemented();
    }
    bool CompositionCapabilities::AreEffectsSupported()
    {
        throw hresult_not_implemented();
    }
    bool CompositionCapabilities::AreEffectsFast()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CompositionCapabilities::Changed(Windows::Foundation::TypedEventHandler<FastWindows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler)
    {
        throw hresult_not_implemented();
    }
    void CompositionCapabilities::Changed(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
}
