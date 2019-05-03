#include "pch.h"
#include "ImplicitAnimationCollection.h"
#include "ImplicitAnimationCollection.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, FastWindows::UI::Composition::ICompositionAnimationBase>> ImplicitAnimationCollection::First()
    {
        throw hresult_not_implemented();
    }
    FastWindows::UI::Composition::ICompositionAnimationBase ImplicitAnimationCollection::Lookup(hstring const& key)
    {
        throw hresult_not_implemented();
    }
    uint32_t ImplicitAnimationCollection::Size()
    {
        throw hresult_not_implemented();
    }
    bool ImplicitAnimationCollection::HasKey(hstring const& key)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::Collections::IMapView<hstring, FastWindows::UI::Composition::ICompositionAnimationBase> ImplicitAnimationCollection::GetView()
    {
        throw hresult_not_implemented();
    }
    bool ImplicitAnimationCollection::Insert(hstring const& key, FastWindows::UI::Composition::ICompositionAnimationBase const& value)
    {
        throw hresult_not_implemented();
    }
    void ImplicitAnimationCollection::Remove(hstring const& key)
    {
        throw hresult_not_implemented();
    }
    void ImplicitAnimationCollection::Clear()
    {
        throw hresult_not_implemented();
    }
}
