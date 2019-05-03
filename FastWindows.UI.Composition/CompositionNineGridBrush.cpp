#include "pch.h"
#include "CompositionNineGridBrush.h"
#include "CompositionNineGridBrush.g.cpp"

namespace winrt::FastWindows::UI::Composition::implementation
{
    float CompositionNineGridBrush::BottomInset()
    {
        return m_object.BottomInset();
    }
    void CompositionNineGridBrush::BottomInset(float value)
    {
        m_object.BottomInset(value);
    }
    float CompositionNineGridBrush::BottomInsetScale()
    {
        return m_object.BottomInsetScale();
    }
    void CompositionNineGridBrush::BottomInsetScale(float value)
    {
        m_object.BottomInsetScale(value);
    }
    bool CompositionNineGridBrush::IsCenterHollow()
    {
        return m_object.IsCenterHollow();
    }
    void CompositionNineGridBrush::IsCenterHollow(bool value)
    {
        m_object.IsCenterHollow(value);
    }
    float CompositionNineGridBrush::LeftInset()
    {
        return m_object.LeftInset();
    }
    void CompositionNineGridBrush::LeftInset(float value)
    {
        m_object.LeftInset(value);
    }
    float CompositionNineGridBrush::LeftInsetScale()
    {
        return m_object.LeftInsetScale();
    }
    void CompositionNineGridBrush::LeftInsetScale(float value)
    {
        m_object.LeftInsetScale(value);
    }
    float CompositionNineGridBrush::RightInset()
    {
        return m_object.RightInset();
    }
    void CompositionNineGridBrush::RightInset(float value)
    {
        m_object.RightInset(value);
    }
    float CompositionNineGridBrush::RightInsetScale()
    {
        return m_object.RightInsetScale();
    }
    void CompositionNineGridBrush::RightInsetScale(float value)
    {
        m_object.RightInsetScale(value);
    }
    FastWindows::UI::Composition::CompositionBrush CompositionNineGridBrush::Source()
    {
        return make<CompositionBrush>(m_object.Source());
    }
    void CompositionNineGridBrush::Source(FastWindows::UI::Composition::CompositionBrush value)
    {
        m_object.Source(get_self<CompositionBrush>(value)->m_object);
    }
    float CompositionNineGridBrush::TopInset()
    {
        return m_object.TopInset();
    }
    void CompositionNineGridBrush::TopInset(float value)
    {
        m_object.TopInset(value);
    }
    float CompositionNineGridBrush::TopInsetScale()
    {
        return m_object.TopInsetScale();
    }
    void CompositionNineGridBrush::TopInsetScale(float value)
    {
        m_object.TopInsetScale(value);
    }
    void CompositionNineGridBrush::SetInsets(float inset)
    {
        m_object.SetInsets(inset);
    }
    void CompositionNineGridBrush::SetInsets(float left, float top, float right, float bottom)
    {
        m_object.SetInsets(left, top, right, bottom);
    }
    void CompositionNineGridBrush::SetInsetScales(float scale)
    {
        m_object.SetInsetScales(scale);
    }
    void CompositionNineGridBrush::SetInsetScales(float left, float top, float right, float bottom)
    {
        m_object.SetInsetScales(left, top, right, bottom);
    }
}
