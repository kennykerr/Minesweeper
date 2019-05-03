#pragma once
#include "CompositionCapabilities.g.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionCapabilities : CompositionCapabilitiesT<CompositionCapabilities>
    {
        CompositionCapabilities() = default;

        static FastWindows::UI::Composition::CompositionCapabilities GetForCurrentView();
        bool AreEffectsSupported();
        bool AreEffectsFast();
        winrt::event_token Changed(Windows::Foundation::TypedEventHandler<FastWindows::UI::Composition::CompositionCapabilities, Windows::Foundation::IInspectable> const& handler);
        void Changed(winrt::event_token const& token) noexcept;
    };
}
namespace winrt::FastWindows::UI::Composition::factory_implementation
{
    struct CompositionCapabilities : CompositionCapabilitiesT<CompositionCapabilities, implementation::CompositionCapabilities>
    {
    };
}
