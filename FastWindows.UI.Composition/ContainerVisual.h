#pragma once
#include "ContainerVisual.g.h"
#include "Visual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct ContainerVisual : ContainerVisualT<ContainerVisual, FastWindows::UI::Composition::implementation::Visual>
    {
        Windows::UI::Composition::ContainerVisual m_object{ nullptr };

        ContainerVisual(Windows::UI::Composition::ContainerVisual const& object) :
            base_type(object),
            m_object(object)
        {
        }

        FastWindows::UI::Composition::VisualCollection Children();
    };
}
