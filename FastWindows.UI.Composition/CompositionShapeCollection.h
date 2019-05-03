#pragma once
#include "CompositionShapeCollection.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionShapeCollection : CompositionShapeCollectionT<CompositionShapeCollection, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionShapeCollection() = default;

        Windows::Foundation::Collections::IIterator<FastWindows::UI::Composition::CompositionShape> First();
        FastWindows::UI::Composition::CompositionShape GetAt(uint32_t index);
        uint32_t Size();
        Windows::Foundation::Collections::IVectorView<FastWindows::UI::Composition::CompositionShape> GetView();
        bool IndexOf(FastWindows::UI::Composition::CompositionShape const& value, uint32_t& index);
        void SetAt(uint32_t index, FastWindows::UI::Composition::CompositionShape const& value);
        void InsertAt(uint32_t index, FastWindows::UI::Composition::CompositionShape const& value);
        void RemoveAt(uint32_t index);
        void Append(FastWindows::UI::Composition::CompositionShape const& value);
        void RemoveAtEnd();
        void Clear();
        uint32_t GetMany(uint32_t startIndex, array_view<FastWindows::UI::Composition::CompositionShape> items);
        void ReplaceAll(array_view<FastWindows::UI::Composition::CompositionShape const> items);
    };
}
