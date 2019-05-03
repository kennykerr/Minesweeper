#include "pch.h"
#include "VisualCollection.h"
#include "VisualCollection.g.cpp"

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
        throw hresult_not_implemented();
    }
    void VisualCollection::InsertAtBottom(FastWindows::UI::Composition::Visual const& newChild)
    {
        throw hresult_not_implemented();
    }
    void VisualCollection::InsertAtTop(FastWindows::UI::Composition::Visual const& newChild)
    {
        throw hresult_not_implemented();
    }
    void VisualCollection::InsertBelow(FastWindows::UI::Composition::Visual const& newChild, FastWindows::UI::Composition::Visual const& sibling)
    {
        throw hresult_not_implemented();
    }
    void VisualCollection::Remove(FastWindows::UI::Composition::Visual const& child)
    {
        throw hresult_not_implemented();
    }
    void VisualCollection::RemoveAll()
    {
        throw hresult_not_implemented();
    }
}
