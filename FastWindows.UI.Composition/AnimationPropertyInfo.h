#pragma once
#include "AnimationPropertyInfo.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct AnimationPropertyInfo : AnimationPropertyInfoT<AnimationPropertyInfo, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        AnimationPropertyInfo() = default;

        Windows::UI::Composition::AnimationPropertyAccessMode AccessMode();
        void AccessMode(Windows::UI::Composition::AnimationPropertyAccessMode value);
    };
}
