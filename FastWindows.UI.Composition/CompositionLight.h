#pragma once
#include "CompositionLight.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionLight : CompositionLightT<CompositionLight, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionLight() = default;

        FastWindows::UI::Composition::VisualUnorderedCollection Targets();
        FastWindows::UI::Composition::VisualUnorderedCollection ExclusionsFromTargets();
        bool IsEnabled();
        void IsEnabled(bool value);
    };
}
