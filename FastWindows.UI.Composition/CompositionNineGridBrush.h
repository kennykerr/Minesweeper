#pragma once
#include "CompositionNineGridBrush.g.h"
#include "CompositionBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionNineGridBrush : CompositionNineGridBrushT<CompositionNineGridBrush, FastWindows::UI::Composition::implementation::CompositionBrush>
    {
        CompositionNineGridBrush() = default;

        float BottomInset();
        void BottomInset(float value);
        float BottomInsetScale();
        void BottomInsetScale(float value);
        bool IsCenterHollow();
        void IsCenterHollow(bool value);
        float LeftInset();
        void LeftInset(float value);
        float LeftInsetScale();
        void LeftInsetScale(float value);
        float RightInset();
        void RightInset(float value);
        float RightInsetScale();
        void RightInsetScale(float value);
        FastWindows::UI::Composition::CompositionBrush Source();
        void Source(FastWindows::UI::Composition::CompositionBrush value);
        float TopInset();
        void TopInset(float value);
        float TopInsetScale();
        void TopInsetScale(float value);
        void SetInsets(float inset);
        void SetInsets(float left, float top, float right, float bottom);
        void SetInsetScales(float scale);
        void SetInsetScales(float left, float top, float right, float bottom);
    };
}
