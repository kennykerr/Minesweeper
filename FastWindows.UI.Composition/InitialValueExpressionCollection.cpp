#include "pch.h"
#include "InitialValueExpressionCollection.h"
#include "InitialValueExpressionCollection.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, hstring>> InitialValueExpressionCollection::First()
    {
        throw hresult_not_implemented();
    }
    hstring InitialValueExpressionCollection::Lookup(hstring const& key)
    {
        throw hresult_not_implemented();
    }
    uint32_t InitialValueExpressionCollection::Size()
    {
        throw hresult_not_implemented();
    }
    bool InitialValueExpressionCollection::HasKey(hstring const& key)
    {
        throw hresult_not_implemented();
    }
    Windows::Foundation::Collections::IMapView<hstring, hstring> InitialValueExpressionCollection::GetView()
    {
        throw hresult_not_implemented();
    }
    bool InitialValueExpressionCollection::Insert(hstring const& key, hstring const& value)
    {
        throw hresult_not_implemented();
    }
    void InitialValueExpressionCollection::Remove(hstring const& key)
    {
        throw hresult_not_implemented();
    }
    void InitialValueExpressionCollection::Clear()
    {
        throw hresult_not_implemented();
    }
}
