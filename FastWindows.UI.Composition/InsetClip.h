#pragma once
#include "InsetClip.g.h"
#include "CompositionClip.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct InsetClip : InsetClipT<InsetClip, FastWindows::UI::Composition::implementation::CompositionClip>
    {
        InsetClip() = default;

        float BottomInset();
        void BottomInset(float value);
        float LeftInset();
        void LeftInset(float value);
        float RightInset();
        void RightInset(float value);
        float TopInset();
        void TopInset(float value);
    };
}
