#include "pch.h"
#include "SpriteVisual.h"
#include "SpriteVisual.g.cpp"
#include "CompositionBrush.h"
#include "CompositionShadow.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    FastWindows::UI::Composition::CompositionBrush SpriteVisual::Brush()
    {
        return make<CompositionBrush>(m_object.Brush());
    }
    void SpriteVisual::Brush(FastWindows::UI::Composition::CompositionBrush value)
    {
        m_object.Brush(get_self<CompositionBrush>(value)->m_object);
    }
    FastWindows::UI::Composition::CompositionShadow SpriteVisual::Shadow()
    {
        return make<CompositionShadow>(m_object.Shadow());
    }
    void SpriteVisual::Shadow(FastWindows::UI::Composition::CompositionShadow value)
    {
        m_object.Shadow(get_self<CompositionShadow>(value)->m_object);
    }
}
