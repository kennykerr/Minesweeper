#include "pch.h"
#include "Visual.h"
#include "Visual.g.cpp"
#include "CompositionClip.h"
#include "ContainerVisual.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    Windows::Foundation::Numerics::float2 Visual::AnchorPoint()
    {
        return m_object.AnchorPoint();
    }
    void Visual::AnchorPoint(Windows::Foundation::Numerics::float2 value)
    {
        m_object.AnchorPoint(value);
    }
    Windows::UI::Composition::CompositionBackfaceVisibility Visual::BackfaceVisibility()
    {
        return m_object.BackfaceVisibility();
    }
    void Visual::BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility value)
    {
        m_object.BackfaceVisibility(value);
    }
    Windows::UI::Composition::CompositionBorderMode Visual::BorderMode()
    {
        return m_object.BorderMode();
    }
    void Visual::BorderMode(Windows::UI::Composition::CompositionBorderMode value)
    {
        m_object.BorderMode(value);
    }
    Windows::Foundation::Numerics::float3 Visual::CenterPoint()
    {
        return m_object.CenterPoint();
    }
    void Visual::CenterPoint(Windows::Foundation::Numerics::float3 value)
    {
        m_object.CenterPoint(value);
    }
    FastWindows::UI::Composition::CompositionClip Visual::Clip()
    {
        return make<CompositionClip>(m_object.Clip());
    }
    void Visual::Clip(FastWindows::UI::Composition::CompositionClip value)
    {
        m_object.Clip(get_self<CompositionClip>(value)->m_object);
    }
    Windows::UI::Composition::CompositionCompositeMode Visual::CompositeMode()
    {
        return m_object.CompositeMode();
    }
    void Visual::CompositeMode(Windows::UI::Composition::CompositionCompositeMode value)
    {
        m_object.CompositeMode(value);
    }
    bool Visual::IsVisible()
    {
        return m_object.IsVisible();
    }
    void Visual::IsVisible(bool value)
    {
        m_object.IsVisible(value);
    }
    Windows::Foundation::Numerics::float3 Visual::Offset()
    {
        return m_object.Offset();
    }
    void Visual::Offset(Windows::Foundation::Numerics::float3 value)
    {
        m_object.Offset(value);
    }
    float Visual::Opacity()
    {
        return m_object.Opacity();
    }
    void Visual::Opacity(float value)
    {
        m_object.Opacity(value);
    }
    Windows::Foundation::Numerics::quaternion Visual::Orientation()
    {
        return m_object.Orientation();
    }
    void Visual::Orientation(Windows::Foundation::Numerics::quaternion value)
    {
        m_object.Orientation(value);
    }
    FastWindows::UI::Composition::ContainerVisual Visual::Parent()
    {
        return make<ContainerVisual>(m_object.Parent());
    }
    float Visual::RotationAngle()
    {
        return m_object.RotationAngle();
    }
    void Visual::RotationAngle(float value)
    {
        m_object.RotationAngle(value);
    }
    float Visual::RotationAngleInDegrees()
    {
        return m_object.RotationAngleInDegrees();
    }
    void Visual::RotationAngleInDegrees(float value)
    {
        m_object.RotationAngleInDegrees(value);
    }
    Windows::Foundation::Numerics::float3 Visual::RotationAxis()
    {
        return m_object.RotationAxis();
    }
    void Visual::RotationAxis(Windows::Foundation::Numerics::float3 value)
    {
        m_object.RotationAxis(value);
    }
    Windows::Foundation::Numerics::float3 Visual::Scale()
    {
        return m_object.Scale();
    }
    void Visual::Scale(Windows::Foundation::Numerics::float3 value)
    {
        m_object.Scale(value);
    }
    Windows::Foundation::Numerics::float2 Visual::Size()
    {
        return m_object.Size();
    }
    void Visual::Size(Windows::Foundation::Numerics::float2 value)
    {
        m_object.Size(value);
    }
    Windows::Foundation::Numerics::float4x4 Visual::TransformMatrix()
    {
        return m_object.TransformMatrix();
    }
    void Visual::TransformMatrix(Windows::Foundation::Numerics::float4x4 value)
    {
        m_object.TransformMatrix(value);
    }
    FastWindows::UI::Composition::Visual Visual::ParentForTransform()
    {
        return make<Visual>(m_object.ParentForTransform());
    }
    void Visual::ParentForTransform(FastWindows::UI::Composition::Visual value)
    {
        m_object.ParentForTransform(get_self<Visual>(value)->m_object);
    }
    Windows::Foundation::Numerics::float3 Visual::RelativeOffsetAdjustment()
    {
        return m_object.RelativeOffsetAdjustment();
    }
    void Visual::RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 value)
    {
        m_object.RelativeOffsetAdjustment(value);
    }
    Windows::Foundation::Numerics::float2 Visual::RelativeSizeAdjustment()
    {
        return m_object.RelativeSizeAdjustment();
    }
    void Visual::RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 value)
    {
        m_object.RelativeSizeAdjustment(value);
    }
}
