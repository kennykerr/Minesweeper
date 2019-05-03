#include "pch.h"
#include "CompositionTarget.h"
#include "CompositionTarget.g.cpp"
#include "Visual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::Visual CompositionTarget::Root()
    {
        return make<Visual>(m_object.Root());
    }
    void CompositionTarget::Root(FastWindows::UI::Composition::Visual value)
    {
        m_object.Root(get_self<Visual>(value)->m_object);
    }
}
