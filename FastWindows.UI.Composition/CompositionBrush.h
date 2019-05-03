#pragma once
#include "CompositionBrush.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionBrush : CompositionBrushT<CompositionBrush, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        Windows::UI::Composition::CompositionBrush m_object;

        CompositionBrush(Windows::UI::Composition::CompositionBrush const& object) :
            base_type(object),
            m_object(object)
        {
        }

    };
}
