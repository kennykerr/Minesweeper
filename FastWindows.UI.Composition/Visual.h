#pragma once
#include "Visual.g.h"
#include "CompositionObject.h"

namespace winrt::FastWindows::UI::Composition::implementation
{
    struct Visual : VisualT<Visual, FastWindows::UI::Composition::implementation::CompositionObject>
    {
        Windows::UI::Composition::Visual m_object;

        Visual(Windows::UI::Composition::Visual const& object) :
            base_type(object),
            m_object(object)
        {
        }

        int32_t query_interface_tearoff(guid const& id, void** result) const noexcept override
        {
            if (is_guid_of<IVisual2>(id))
            {
                *result = new impl::fast_abi_forwarder(static_cast<impl::inspectable_abi*>(get_abi<Composition::Visual>()), guid_of<IVisual2>(), 34);
            }

            return base_type::query_interface_tearoff(id, result);
        }

        Windows::Foundation::Numerics::float2 AnchorPoint();
        void AnchorPoint(Windows::Foundation::Numerics::float2 value);
        Windows::UI::Composition::CompositionBackfaceVisibility BackfaceVisibility();
        void BackfaceVisibility(Windows::UI::Composition::CompositionBackfaceVisibility value);
        Windows::UI::Composition::CompositionBorderMode BorderMode();
        void BorderMode(Windows::UI::Composition::CompositionBorderMode value);
        Windows::Foundation::Numerics::float3 CenterPoint();
        void CenterPoint(Windows::Foundation::Numerics::float3 value);
        FastWindows::UI::Composition::CompositionClip Clip();
        void Clip(FastWindows::UI::Composition::CompositionClip value);
        Windows::UI::Composition::CompositionCompositeMode CompositeMode();
        void CompositeMode(Windows::UI::Composition::CompositionCompositeMode value);
        bool IsVisible();
        void IsVisible(bool value);
        Windows::Foundation::Numerics::float3 Offset();
        void Offset(Windows::Foundation::Numerics::float3 value);
        float Opacity();
        void Opacity(float value);
        Windows::Foundation::Numerics::quaternion Orientation();
        void Orientation(Windows::Foundation::Numerics::quaternion value);
        FastWindows::UI::Composition::ContainerVisual Parent();
        float RotationAngle();
        void RotationAngle(float value);
        float RotationAngleInDegrees();
        void RotationAngleInDegrees(float value);
        Windows::Foundation::Numerics::float3 RotationAxis();
        void RotationAxis(Windows::Foundation::Numerics::float3 value);
        Windows::Foundation::Numerics::float3 Scale();
        void Scale(Windows::Foundation::Numerics::float3 value);
        Windows::Foundation::Numerics::float2 Size();
        void Size(Windows::Foundation::Numerics::float2 value);
        Windows::Foundation::Numerics::float4x4 TransformMatrix();
        void TransformMatrix(Windows::Foundation::Numerics::float4x4 value);
        FastWindows::UI::Composition::Visual ParentForTransform();
        void ParentForTransform(FastWindows::UI::Composition::Visual value);
        Windows::Foundation::Numerics::float3 RelativeOffsetAdjustment();
        void RelativeOffsetAdjustment(Windows::Foundation::Numerics::float3 value);
        Windows::Foundation::Numerics::float2 RelativeSizeAdjustment();
        void RelativeSizeAdjustment(Windows::Foundation::Numerics::float2 value);
    };
}
