#pragma once
#include "CompositionTarget.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionTarget : CompositionTargetT<CompositionTarget, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        Windows::UI::Composition::CompositionTarget m_object;

        CompositionTarget(Windows::UI::Composition::CompositionTarget const& object) :
            m_object(object)
        {
        }

        FastWindows::UI::Composition::Visual Root();
        void Root(FastWindows::UI::Composition::Visual value);
    };
}
