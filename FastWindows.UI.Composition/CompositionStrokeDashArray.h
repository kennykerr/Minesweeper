#pragma once
#include "CompositionStrokeDashArray.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionStrokeDashArray : CompositionStrokeDashArrayT<CompositionStrokeDashArray, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionStrokeDashArray() = default;

        Windows::Foundation::Collections::IIterator<float> First();
        float GetAt(uint32_t index);
        uint32_t Size();
        Windows::Foundation::Collections::IVectorView<float> GetView();
        bool IndexOf(float const& value, uint32_t& index);
        void SetAt(uint32_t index, float const& value);
        void InsertAt(uint32_t index, float const& value);
        void RemoveAt(uint32_t index);
        void Append(float const& value);
        void RemoveAtEnd();
        void Clear();
        uint32_t GetMany(uint32_t startIndex, array_view<float> items);
        void ReplaceAll(array_view<float const> items);
    };
}
