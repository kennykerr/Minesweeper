#pragma once
#include "CompositionAnimationGroup.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionAnimationGroup : CompositionAnimationGroupT<CompositionAnimationGroup, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        CompositionAnimationGroup() = default;

        Windows::Foundation::Collections::IIterator<FastWindows::UI::Composition::CompositionAnimation> First();
        int32_t Count();
        void Add(FastWindows::UI::Composition::CompositionAnimation const& value);
        void Remove(FastWindows::UI::Composition::CompositionAnimation const& value);
        void RemoveAll();
    };
}
