#include "pch.h"
#include "ContainerVisual.h"
#include "ContainerVisual.g.cpp"
#include "VisualCollection.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::VisualCollection ContainerVisual::Children()
    {
        return make<VisualCollection>(m_object.Children());
    }
}
