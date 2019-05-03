#pragma once
#include "CompositionColorBrush.g.h"
#include "CompositionBrush.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionColorBrush : CompositionColorBrushT<CompositionColorBrush, FastWindows::UI::Composition::implementation::CompositionBrush>
    {
        Windows::UI::Composition::CompositionColorBrush m_object;

        CompositionColorBrush(Windows::UI::Composition::CompositionColorBrush const& object) :
            base_type(object),
            m_object(object)
        {
        }

        Windows::UI::Color Color();
        void Color(Windows::UI::Color value);
    };
}
