#pragma once
#include "CompositionProjectedShadowReceiver.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionProjectedShadowReceiver : CompositionProjectedShadowReceiverT<CompositionProjectedShadowReceiver, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionProjectedShadowReceiver() = default;

        FastWindows::UI::Composition::Visual ReceivingVisual();
        void ReceivingVisual(FastWindows::UI::Composition::Visual value);
    };
}
