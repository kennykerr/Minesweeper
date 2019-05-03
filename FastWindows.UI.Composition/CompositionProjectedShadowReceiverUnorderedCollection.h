#pragma once
#include "CompositionProjectedShadowReceiverUnorderedCollection.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionProjectedShadowReceiverUnorderedCollection : CompositionProjectedShadowReceiverUnorderedCollectionT<CompositionProjectedShadowReceiverUnorderedCollection, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionProjectedShadowReceiverUnorderedCollection() = default;

        void Add(FastWindows::UI::Composition::CompositionProjectedShadowReceiver const& value);
        int32_t Count();
        void Remove(FastWindows::UI::Composition::CompositionProjectedShadowReceiver const& value);
        void RemoveAll();
        Windows::Foundation::Collections::IIterator<FastWindows::UI::Composition::CompositionProjectedShadowReceiver> First();
    };
}
