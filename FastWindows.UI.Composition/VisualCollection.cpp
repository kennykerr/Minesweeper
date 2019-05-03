#include "pch.h"
#include "VisualCollection.h"
#include "VisualCollection.g.cpp"
#include "Visual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    Windows::Foundation::Collections::IIterator<FastWindows::UI::Composition::Visual> VisualCollection::First()
    {
        throw hresult_not_implemented();
    }
    int32_t VisualCollection::Count()
    {
        throw hresult_not_implemented();
    }
    void VisualCollection::InsertAbove(FastWindows::UI::Composition::Visual const& newChild, FastWindows::UI::Composition::Visual const& sibling)
    {
        m_object.InsertAbove(get_self<Visual>(newChild)->m_object, get_self<Visual>(sibling)->m_object);
    }
    void VisualCollection::InsertAtBottom(FastWindows::UI::Composition::Visual const& newChild)
    {
        m_object.InsertAtBottom(get_self<Visual>(newChild)->m_object);
    }
    void VisualCollection::InsertAtTop(FastWindows::UI::Composition::Visual const& newChild)
    {
        m_object.InsertAtTop(get_self<Visual>(newChild)->m_object);
    }
    void VisualCollection::InsertBelow(FastWindows::UI::Composition::Visual const& newChild, FastWindows::UI::Composition::Visual const& sibling)
    {
        m_object.InsertBelow(get_self<Visual>(newChild)->m_object, get_self<Visual>(sibling)->m_object);
    }
    void VisualCollection::Remove(FastWindows::UI::Composition::Visual const& child)
    {
        m_object.Remove(get_self<Visual>(child)->m_object);
    }
    void VisualCollection::RemoveAll()
    {
        m_object.RemoveAll();
    }
}
