#pragma once
#include "ImplicitAnimationCollection.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct ImplicitAnimationCollection : ImplicitAnimationCollectionT<ImplicitAnimationCollection, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        ImplicitAnimationCollection() = default;

        Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, FastWindows::UI::Composition::ICompositionAnimationBase>> First();
        FastWindows::UI::Composition::ICompositionAnimationBase Lookup(hstring const& key);
        uint32_t Size();
        bool HasKey(hstring const& key);
        Windows::Foundation::Collections::IMapView<hstring, FastWindows::UI::Composition::ICompositionAnimationBase> GetView();
        bool Insert(hstring const& key, FastWindows::UI::Composition::ICompositionAnimationBase const& value);
        void Remove(hstring const& key);
        void Clear();
    };
}
