#pragma once
#include "CompositionProjectedShadowCasterCollection.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionProjectedShadowCasterCollection : CompositionProjectedShadowCasterCollectionT<CompositionProjectedShadowCasterCollection, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionProjectedShadowCasterCollection() = default;

        static int32_t MaxRespectedCasters();
        int32_t Count();
        void InsertAbove(FastWindows::UI::Composition::CompositionProjectedShadowCaster const& newCaster, FastWindows::UI::Composition::CompositionProjectedShadowCaster const& reference);
        void InsertAtBottom(FastWindows::UI::Composition::CompositionProjectedShadowCaster const& newCaster);
        void InsertAtTop(FastWindows::UI::Composition::CompositionProjectedShadowCaster const& newCaster);
        void InsertBelow(FastWindows::UI::Composition::CompositionProjectedShadowCaster const& newCaster, FastWindows::UI::Composition::CompositionProjectedShadowCaster const& reference);
        void Remove(FastWindows::UI::Composition::CompositionProjectedShadowCaster const& caster);
        void RemoveAll();
        Windows::Foundation::Collections::IIterator<FastWindows::UI::Composition::CompositionProjectedShadowCaster> First();
    };
}
namespace winrt::FastWindows::UI::Composition::factory_implementation
{
    struct CompositionProjectedShadowCasterCollection : CompositionProjectedShadowCasterCollectionT<CompositionProjectedShadowCasterCollection, implementation::CompositionProjectedShadowCasterCollection>
    {
    };
}
