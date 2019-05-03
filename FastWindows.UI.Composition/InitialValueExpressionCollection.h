#pragma once
#include "InitialValueExpressionCollection.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct InitialValueExpressionCollection : InitialValueExpressionCollectionT<InitialValueExpressionCollection, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        InitialValueExpressionCollection() = default;

        Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> First();
        hstring Lookup(hstring const& key);
        uint32_t Size();
        bool HasKey(hstring const& key);
        Windows::Foundation::Collections::IMapView<hstring, hstring> GetView();
        bool Insert(hstring const& key, hstring const& value);
        void Remove(hstring const& key);
        void Clear();
    };
}
