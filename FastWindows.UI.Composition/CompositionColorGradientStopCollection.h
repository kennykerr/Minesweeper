#pragma once
#include "CompositionColorGradientStopCollection.g.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionColorGradientStopCollection : CompositionColorGradientStopCollectionT<CompositionColorGradientStopCollection>
    {
        CompositionColorGradientStopCollection() = default;

        Windows::Foundation::Collections::IIterator<FastWindows::UI::Composition::CompositionColorGradientStop> First();
        FastWindows::UI::Composition::CompositionColorGradientStop GetAt(uint32_t index);
        uint32_t Size();
        Windows::Foundation::Collections::IVectorView<FastWindows::UI::Composition::CompositionColorGradientStop> GetView();
        bool IndexOf(FastWindows::UI::Composition::CompositionColorGradientStop const& value, uint32_t& index);
        void SetAt(uint32_t index, FastWindows::UI::Composition::CompositionColorGradientStop const& value);
        void InsertAt(uint32_t index, FastWindows::UI::Composition::CompositionColorGradientStop const& value);
        void RemoveAt(uint32_t index);
        void Append(FastWindows::UI::Composition::CompositionColorGradientStop const& value);
        void RemoveAtEnd();
        void Clear();
        uint32_t GetMany(uint32_t startIndex, array_view<FastWindows::UI::Composition::CompositionColorGradientStop> items);
        void ReplaceAll(array_view<FastWindows::UI::Composition::CompositionColorGradientStop const> items);
    };
}
