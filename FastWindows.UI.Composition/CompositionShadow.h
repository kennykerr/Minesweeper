#pragma once
#include "CompositionShadow.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionShadow : CompositionShadowT<CompositionShadow, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        Windows::UI::Composition::CompositionShadow m_object;

        CompositionShadow(Windows::UI::Composition::CompositionShadow const& object) :
            m_object(object)
        {
        }

    };
}
