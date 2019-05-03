#pragma once
#include "CompositionEffectBrush.g.h"
#include "CompositionBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionEffectBrush : CompositionEffectBrushT<CompositionEffectBrush, FastWindows::UI::Composition::implementation::CompositionBrush>
    {
        CompositionEffectBrush() = default;

        FastWindows::UI::Composition::CompositionBrush GetSourceParameter(hstring const& name);
        void SetSourceParameter(hstring const& name, FastWindows::UI::Composition::CompositionBrush const& source);
    };
}
