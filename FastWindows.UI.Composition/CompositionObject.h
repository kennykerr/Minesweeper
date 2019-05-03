#pragma once
#include "CompositionObject.g.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct CompositionObject : CompositionObjectT<CompositionObject>
    {
        Windows::UI::Composition::CompositionObject m_object;

        CompositionObject(Windows::UI::Composition::CompositionObject const& object) :
            m_object(object)
        {
        }

        static void StartAnimationWithIAnimationObject(FastWindows::UI::Composition::IAnimationObject const& target, hstring const& propertyName, FastWindows::UI::Composition::CompositionAnimation const& animation);
        static void StartAnimationGroupWithIAnimationObject(FastWindows::UI::Composition::IAnimationObject const& target, FastWindows::UI::Composition::ICompositionAnimationBase const& animation);
        FastWindows::UI::Composition::Compositor Compositor();
        Windows::UI::Core::CoreDispatcher Dispatcher();
        FastWindows::UI::Composition::CompositionPropertySet Properties();
        void StartAnimation(hstring const& propertyName, FastWindows::UI::Composition::CompositionAnimation const& animation);
        void StopAnimation(hstring const& propertyName);
        void Close();
        hstring Comment();
        void Comment(hstring value);
        FastWindows::UI::Composition::ImplicitAnimationCollection ImplicitAnimations();
        void ImplicitAnimations(FastWindows::UI::Composition::ImplicitAnimationCollection value);
        void StartAnimationGroup(FastWindows::UI::Composition::ICompositionAnimationBase const& value);
        void StopAnimationGroup(FastWindows::UI::Composition::ICompositionAnimationBase const& value);
        Windows::System::DispatcherQueue DispatcherQueue();
        FastWindows::UI::Composition::AnimationController TryGetAnimationController(hstring const& propertyName);
        void PopulatePropertyInfo(hstring const& propertyName, FastWindows::UI::Composition::AnimationPropertyInfo const& propertyInfo);
    };
}
namespace winrt::FastWindows::UI::Composition::factory_implementation
{
    struct CompositionObject : CompositionObjectT<CompositionObject, implementation::CompositionObject>
    {
    };
}
