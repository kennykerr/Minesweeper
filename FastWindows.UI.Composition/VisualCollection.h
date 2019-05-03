#pragma once
#include "VisualCollection.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct VisualCollection : VisualCollectionT<VisualCollection, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        VisualCollection() = default;

        Windows::Foundation::Collections::IIterator<FastWindows::UI::Composition::Visual> First();
        int32_t Count();
        void InsertAbove(FastWindows::UI::Composition::Visual const& newChild, FastWindows::UI::Composition::Visual const& sibling);
        void InsertAtBottom(FastWindows::UI::Composition::Visual const& newChild);
        void InsertAtTop(FastWindows::UI::Composition::Visual const& newChild);
        void InsertBelow(FastWindows::UI::Composition::Visual const& newChild, FastWindows::UI::Composition::Visual const& sibling);
        void Remove(FastWindows::UI::Composition::Visual const& child);
        void RemoveAll();
    };
}
