#pragma once
#include "VisualUnorderedCollection.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct VisualUnorderedCollection : VisualUnorderedCollectionT<VisualUnorderedCollection, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        VisualUnorderedCollection() = default;

        Windows::Foundation::Collections::IIterator<FastWindows::UI::Composition::Visual> First();
        int32_t Count();
        void Add(FastWindows::UI::Composition::Visual const& newVisual);
        void Remove(FastWindows::UI::Composition::Visual const& visual);
        void RemoveAll();
    };
}
