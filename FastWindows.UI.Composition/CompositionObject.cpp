#include "pch.h"
#include "CompositionObject.h"
#include "CompositionObject.g.cpp"
#include "Compositor.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    void CompositionObject::StartAnimationWithIAnimationObject(FastWindows::UI::Composition::IAnimationObject const& target, hstring const& propertyName, FastWindows::UI::Composition::CompositionAnimation const& animation)
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::StartAnimationGroupWithIAnimationObject(FastWindows::UI::Composition::IAnimationObject const& target, FastWindows::UI::Composition::ICompositionAnimationBase const& animation)
    {
        throw hresult_not_implemented();
    }
    FastWindows::UI::Composition::Compositor CompositionObject::Compositor()
    {
        return make<implementation::Compositor>(m_object.Compositor());
    }
    Windows::UI::Core::CoreDispatcher CompositionObject::Dispatcher()
    {
        throw hresult_not_implemented();
    }
    FastWindows::UI::Composition::CompositionPropertySet CompositionObject::Properties()
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::StartAnimation(hstring const& propertyName, FastWindows::UI::Composition::CompositionAnimation const& animation)
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::StopAnimation(hstring const& propertyName)
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::Close()
    {
        throw hresult_not_implemented();
    }
    hstring CompositionObject::Comment()
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::Comment(hstring value)
    {
        throw hresult_not_implemented();
    }
    FastWindows::UI::Composition::ImplicitAnimationCollection CompositionObject::ImplicitAnimations()
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::ImplicitAnimations(FastWindows::UI::Composition::ImplicitAnimationCollection value)
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::StartAnimationGroup(FastWindows::UI::Composition::ICompositionAnimationBase const& value)
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::StopAnimationGroup(FastWindows::UI::Composition::ICompositionAnimationBase const& value)
    {
        throw hresult_not_implemented();
    }
    Windows::System::DispatcherQueue CompositionObject::DispatcherQueue()
    {
        throw hresult_not_implemented();
    }
    FastWindows::UI::Composition::AnimationController CompositionObject::TryGetAnimationController(hstring const& propertyName)
    {
        throw hresult_not_implemented();
    }
    void CompositionObject::PopulatePropertyInfo(hstring const& propertyName, FastWindows::UI::Composition::AnimationPropertyInfo const& propertyInfo)
    {
        throw hresult_not_implemented();
    }
}
