#pragma once
#include "CompositionTarget.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionTarget : CompositionTargetT<CompositionTarget, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionTarget() = default;

        FastWindows::UI::Composition::Visual Root();
        void Root(FastWindows::UI::Composition::Visual value);
    };
}
